// Live operator view, served over WiFi from the headset.
//
// The Focus is a standalone HMD with a single display, so the experimenter cannot simply watch
// a second monitor. This serves a small status page the operator opens on a phone or laptop.
//
// Two deliberate implementation choices:
//   * TcpListener + hand-rolled HTTP rather than HttpListener. This project builds IL2CPP with
//     managedStrippingLevel 4; HttpListener's reflection-heavy internals are exactly what
//     aggressive stripping breaks, whereas direct socket calls survive.
//   * No Unity API is touched on the server thread. The main thread renders a JSON snapshot at a
//     low rate and parks the string; the server thread only ever hands out that string.

using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;

namespace VRS.PupilRecording
{
    /// <summary>Immutable-ish snapshot of session state, produced on the main thread.</summary>
    public struct SessionStatus
    {
        public string participantId;
        public string phase;
        public float elapsedSeconds;
        public bool recording;

        public string stimulusName;
        public string stimulusPosition;
        public float stimulusBrightness;
        public int testCaseId;

        public int trialsCompleted;
        public int trialsFailed;
        public int trialsAbandoned;
        public int trialsRemaining;

        public float gazeDeviationDeg;
        public float gazeBiasDeg;
        public bool gazeOffTarget;
        public bool gateArmed;
        public bool calibrated;

        public float qualityOkPercent;
        public float qualityBlinkPercent;
        public float qualityTrackingLostPercent;

        public string csvFileName;
        public int dataPoints;
        public List<string> recentEvents;
    }

    public class OperatorStatusServer : MonoBehaviour
    {
        [Header("Operator Web View")]
        [Tooltip("Serve the live status page over WiFi. Requires the INTERNET permission (see Assets/Plugins/Android/AndroidManifest.xml).")]
        public bool enableServer = true;
        [Tooltip("Port to listen on. The full URL is logged at startup and shown in-headset.")]
        public int port = 8080;
        [Tooltip("How often the main thread re-renders the JSON snapshot. The page polls at roughly this rate.")]
        [Range(1f, 30f)] public float updatesPerSecond = 5f;

        /// <summary>Set by the recorder so the server can poll it. Found automatically if left null.</summary>
        public PupilDataRecorder recorder;

        private TcpListener listener;
        private Thread serverThread;
        private volatile bool running;

        private readonly object payloadLock = new object();
        private string statusJson = "{}";

        private float nextUpdateTime;
        private static readonly CultureInfo Inv = CultureInfo.InvariantCulture;

        public string LocalAddress { get; private set; } = "unknown";
        public bool IsRunning => running;
        public string Url => $"http://{LocalAddress}:{port}/";

        private void Start()
        {
            if (!enableServer) return;

            if (recorder == null) recorder = FindObjectOfType<PupilDataRecorder>();

            LocalAddress = ResolveLocalAddress();
            StartServer();
        }

        private void Update()
        {
            if (!running || recorder == null) return;
            if (Time.unscaledTime < nextUpdateTime) return;
            nextUpdateTime = Time.unscaledTime + 1f / Mathf.Max(1f, updatesPerSecond);

            // Rendered on the MAIN thread — the server thread must never touch Unity API.
            string json = BuildJson(recorder.GetStatus());
            lock (payloadLock) { statusJson = json; }
        }

        private void OnDestroy() => StopServer();
        private void OnApplicationQuit() => StopServer();

        // -------------------------------------------------------
        // Server lifecycle
        // -------------------------------------------------------

        private void StartServer()
        {
            try
            {
                listener = new TcpListener(IPAddress.Any, port);
                // Without this a quick restart can fail while the previous socket lingers in TIME_WAIT.
                listener.Server.SetSocketOption(SocketOptionLevel.Socket, SocketOptionName.ReuseAddress, true);
                listener.Start();

                running = true;
                serverThread = new Thread(ServeLoop) { IsBackground = true, Name = "OperatorStatusServer" };
                serverThread.Start();

                Debug.Log($"[OperatorStatusServer] Listening on {Url}");
            }
            catch (Exception e)
            {
                running = false;
                Debug.LogError($"[OperatorStatusServer] Could not start on port {port}: {e.Message}");
            }
        }

        private void StopServer()
        {
            if (!running && listener == null) return;

            running = false;
            try { listener?.Stop(); } catch (Exception) { }
            listener = null;

            if (serverThread != null && serverThread.IsAlive)
            {
                // Bounded join: the loop polls `running` every 20 ms, so this returns promptly.
                serverThread.Join(1000);
            }
            serverThread = null;
            Debug.Log("[OperatorStatusServer] Stopped.");
        }

        private void ServeLoop()
        {
            while (running)
            {
                try
                {
                    // Poll rather than block, so StopServer() doesn't have to interrupt a blocked accept.
                    if (listener == null || !listener.Pending())
                    {
                        Thread.Sleep(20);
                        continue;
                    }

                    using (TcpClient client = listener.AcceptTcpClient())
                    {
                        client.ReceiveTimeout = 2000;
                        client.SendTimeout = 2000;
                        HandleClient(client);
                    }
                }
                catch (Exception e)
                {
                    if (running) Debug.LogWarning($"[OperatorStatusServer] Request failed: {e.Message}");
                    Thread.Sleep(50);
                }
            }
        }

        private void HandleClient(TcpClient client)
        {
            using (NetworkStream stream = client.GetStream())
            {
                string requestLine = ReadRequestLine(stream);
                string path = ParsePath(requestLine);

                if (path == "/status.json")
                {
                    string body;
                    lock (payloadLock) { body = statusJson; }
                    WriteResponse(stream, "200 OK", "application/json; charset=utf-8", body);
                }
                else if (path == "/" || path == "/index.html")
                {
                    WriteResponse(stream, "200 OK", "text/html; charset=utf-8", Page);
                }
                else
                {
                    WriteResponse(stream, "404 Not Found", "text/plain; charset=utf-8", "not found");
                }
            }
        }

        private static string ReadRequestLine(NetworkStream stream)
        {
            // Only the first line matters; read a bounded amount so a malformed request can't hang us.
            byte[] buffer = new byte[1024];
            int read = 0;
            while (read < buffer.Length)
            {
                int n = stream.Read(buffer, read, buffer.Length - read);
                if (n <= 0) break;
                read += n;

                for (int i = 0; i < read - 1; i++)
                    if (buffer[i] == (byte)'\r' && buffer[i + 1] == (byte)'\n')
                        return Encoding.UTF8.GetString(buffer, 0, i);

                if (!stream.DataAvailable) break;
            }
            return read > 0 ? Encoding.UTF8.GetString(buffer, 0, read) : string.Empty;
        }

        private static string ParsePath(string requestLine)
        {
            if (string.IsNullOrEmpty(requestLine)) return "/";
            string[] parts = requestLine.Split(' ');
            if (parts.Length < 2) return "/";
            string path = parts[1];
            int q = path.IndexOf('?');
            return q >= 0 ? path.Substring(0, q) : path;
        }

        private static void WriteResponse(NetworkStream stream, string status, string contentType, string body)
        {
            byte[] payload = Encoding.UTF8.GetBytes(body ?? string.Empty);

            StringBuilder head = new StringBuilder(256);
            head.Append("HTTP/1.1 ").Append(status).Append("\r\n");
            head.Append("Content-Type: ").Append(contentType).Append("\r\n");
            // Content-Length must be BYTES, not characters — degree signs etc. are multi-byte.
            head.Append("Content-Length: ").Append(payload.Length.ToString(Inv)).Append("\r\n");
            head.Append("Cache-Control: no-store\r\n");
            head.Append("Access-Control-Allow-Origin: *\r\n");
            head.Append("Connection: close\r\n\r\n");

            byte[] headBytes = Encoding.ASCII.GetBytes(head.ToString());
            stream.Write(headBytes, 0, headBytes.Length);
            stream.Write(payload, 0, payload.Length);
            stream.Flush();
        }

        /// <summary>
        /// Best-effort local IP. The UDP "connect" sends nothing — it just asks the OS which
        /// interface would be used to reach the internet, which is the one the operator's phone
        /// is most likely on. Falls back to enumerating interfaces.
        /// </summary>
        private static string ResolveLocalAddress()
        {
            try
            {
                using (Socket socket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp))
                {
                    socket.Connect("8.8.8.8", 65530);
                    if (socket.LocalEndPoint is IPEndPoint ep) return ep.Address.ToString();
                }
            }
            catch (Exception) { /* no route; fall through */ }

            try
            {
                foreach (IPAddress addr in Dns.GetHostEntry(Dns.GetHostName()).AddressList)
                    if (addr.AddressFamily == AddressFamily.InterNetwork && !IPAddress.IsLoopback(addr))
                        return addr.ToString();
            }
            catch (Exception) { }

            return "unknown";
        }

        // -------------------------------------------------------
        // Snapshot serialisation (main thread)
        // -------------------------------------------------------

        private static string BuildJson(SessionStatus s)
        {
            StringBuilder sb = new StringBuilder(1024);
            sb.Append('{');
            S(sb, "participant", s.participantId); sb.Append(',');
            S(sb, "phase", s.phase); sb.Append(',');
            N(sb, "elapsed", s.elapsedSeconds); sb.Append(',');
            B(sb, "recording", s.recording); sb.Append(',');

            S(sb, "stimulus", s.stimulusName); sb.Append(',');
            S(sb, "position", s.stimulusPosition); sb.Append(',');
            N(sb, "brightness", s.stimulusBrightness); sb.Append(',');
            I(sb, "test_case_id", s.testCaseId); sb.Append(',');

            I(sb, "completed", s.trialsCompleted); sb.Append(',');
            I(sb, "failed", s.trialsFailed); sb.Append(',');
            I(sb, "abandoned", s.trialsAbandoned); sb.Append(',');
            I(sb, "remaining", s.trialsRemaining); sb.Append(',');

            N(sb, "deviation", s.gazeDeviationDeg); sb.Append(',');
            N(sb, "bias", s.gazeBiasDeg); sb.Append(',');
            B(sb, "off_target", s.gazeOffTarget); sb.Append(',');
            B(sb, "gate_armed", s.gateArmed); sb.Append(',');
            B(sb, "calibrated", s.calibrated); sb.Append(',');

            N(sb, "q_ok", s.qualityOkPercent); sb.Append(',');
            N(sb, "q_blink", s.qualityBlinkPercent); sb.Append(',');
            N(sb, "q_lost", s.qualityTrackingLostPercent); sb.Append(',');

            S(sb, "csv", s.csvFileName); sb.Append(',');
            I(sb, "rows", s.dataPoints); sb.Append(',');

            sb.Append("\"events\":[");
            if (s.recentEvents != null)
            {
                for (int i = 0; i < s.recentEvents.Count; i++)
                {
                    if (i > 0) sb.Append(',');
                    sb.Append('"').Append(Esc(s.recentEvents[i])).Append('"');
                }
            }
            sb.Append("]}");
            return sb.ToString();
        }

        private static void S(StringBuilder sb, string k, string v) =>
            sb.Append('"').Append(k).Append("\":\"").Append(Esc(v)).Append('"');
        private static void N(StringBuilder sb, string k, float v) =>
            sb.Append('"').Append(k).Append("\":").Append(v.ToString("F2", Inv));
        private static void I(StringBuilder sb, string k, int v) =>
            sb.Append('"').Append(k).Append("\":").Append(v.ToString(Inv));
        private static void B(StringBuilder sb, string k, bool v) =>
            sb.Append('"').Append(k).Append("\":").Append(v ? "true" : "false");

        private static string Esc(string s)
        {
            if (string.IsNullOrEmpty(s)) return string.Empty;
            StringBuilder sb = new StringBuilder(s.Length + 8);
            foreach (char c in s)
            {
                switch (c)
                {
                    case '"': sb.Append("\\\""); break;
                    case '\\': sb.Append("\\\\"); break;
                    case '\n': sb.Append("\\n"); break;
                    case '\r': sb.Append("\\r"); break;
                    case '\t': sb.Append("\\t"); break;
                    default:
                        if (c < 0x20) sb.Append("\\u").Append(((int)c).ToString("x4", Inv));
                        else sb.Append(c);
                        break;
                }
            }
            return sb.ToString();
        }

        // -------------------------------------------------------
        // The page. Self-contained: no external fonts, scripts or styles.
        // -------------------------------------------------------

        private const string Page = @"<!doctype html>
<html lang=""en""><head>
<meta charset=""utf-8"">
<meta name=""viewport"" content=""width=device-width,initial-scale=1"">
<title>VRS Studio — Session Monitor</title>
<style>
:root{color-scheme:dark light}
*{box-sizing:border-box}
body{margin:0;padding:16px;font:15px/1.45 -apple-system,BlinkMacSystemFont,'Segoe UI',Roboto,sans-serif;
     background:#12141a;color:#e8eaf0}
h1{font-size:15px;margin:0 0 2px;font-weight:600;letter-spacing:.02em}
.sub{color:#8b93a7;font-size:12px;margin-bottom:14px}
.grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(140px,1fr));gap:10px;margin-bottom:14px}
.card{background:#1a1d26;border:1px solid #262a36;border-radius:10px;padding:11px 13px}
.k{color:#8b93a7;font-size:11px;text-transform:uppercase;letter-spacing:.06em;margin-bottom:5px}
.v{font-size:21px;font-weight:600;font-variant-numeric:tabular-nums;line-height:1.15}
.v.sm{font-size:15px;font-weight:500}
.ok{color:#4ade80}.warn{color:#fbbf24}.bad{color:#f87171}.dim{color:#8b93a7}
.bar{height:5px;background:#262a36;border-radius:3px;overflow:hidden;margin-top:7px}
.bar>i{display:block;height:100%;background:#4ade80;transition:width .3s}
table{width:100%;border-collapse:collapse;font-size:12px}
td{padding:5px 8px;border-bottom:1px solid #21252f;vertical-align:top}
td:first-child{color:#8b93a7;white-space:nowrap;width:1%;font-variant-numeric:tabular-nums}
.wrap{background:#1a1d26;border:1px solid #262a36;border-radius:10px;padding:6px 4px;overflow-x:auto}
.off{opacity:.45}
#dot{display:inline-block;width:7px;height:7px;border-radius:50%;background:#4ade80;margin-right:6px;vertical-align:middle}
#dot.stale{background:#f87171}
</style></head><body>
<h1><span id=""dot""></span>VRS Studio — Session Monitor</h1>
<div class=""sub"" id=""hdr"">connecting…</div>

<div class=""grid"">
  <div class=""card""><div class=""k"">Phase</div><div class=""v sm"" id=""phase"">—</div></div>
  <div class=""card""><div class=""k"">Elapsed</div><div class=""v"" id=""elapsed"">—</div></div>
  <div class=""card""><div class=""k"">Stimulus</div><div class=""v sm"" id=""stim"">—</div></div>
  <div class=""card""><div class=""k"">Gaze deviation</div><div class=""v"" id=""dev"">—</div></div>
  <div class=""card""><div class=""k"">Tracked bias</div><div class=""v"" id=""bias"">—</div></div>
  <div class=""card""><div class=""k"">Gate</div><div class=""v sm"" id=""gate"">—</div></div>
</div>

<div class=""grid"">
  <div class=""card""><div class=""k"">Completed</div><div class=""v ok"" id=""done"">—</div></div>
  <div class=""card""><div class=""k"">Failed</div><div class=""v warn"" id=""fail"">—</div></div>
  <div class=""card""><div class=""k"">Abandoned</div><div class=""v bad"" id=""aband"">—</div></div>
  <div class=""card""><div class=""k"">Remaining</div><div class=""v dim"" id=""rem"">—</div></div>
  <div class=""card""><div class=""k"">Signal quality</div><div class=""v"" id=""qual"">—</div>
    <div class=""bar""><i id=""qbar"" style=""width:0%""></i></div></div>
  <div class=""card""><div class=""k"">Rows written</div><div class=""v"" id=""rows"">—</div></div>
</div>

<div class=""wrap""><table id=""ev""></table></div>

<script>
var stale=0;
function f(n,d){return (n===undefined||n===null)?'—':Number(n).toFixed(d===undefined?1:d)}
function tick(){
  fetch('/status.json',{cache:'no-store'}).then(function(r){return r.json()}).then(function(s){
    stale=0; document.getElementById('dot').classList.remove('stale');
    document.getElementById('hdr').textContent =
      'participant ' + (s.participant||'—') + '  ·  ' + (s.csv||'no file yet') + (s.recording?'  ·  recording':'  ·  idle');
    document.getElementById('phase').textContent = s.phase||'—';
    var e=Math.max(0,s.elapsed||0);
    document.getElementById('elapsed').textContent =
      String(Math.floor(e/60)).padStart(2,'0')+':'+String(Math.floor(e%60)).padStart(2,'0');
    document.getElementById('stim').textContent =
      s.stimulus ? (s.stimulus + (s.position? ' ' + s.position : '')) : '—';

    var dev=document.getElementById('dev');
    dev.textContent = (s.deviation>=0? f(s.deviation)+'°' : 'no gaze');
    dev.className = 'v ' + (s.deviation<0?'dim':(s.off_target?'bad':(s.deviation>3?'warn':'ok')));

    document.getElementById('bias').textContent = f(s.bias)+'°';

    var g=document.getElementById('gate');
    g.textContent = !s.calibrated ? 'uncalibrated' : (s.gate_armed? 'armed':'DISARMED');
    g.className = 'v sm ' + (!s.calibrated?'dim':(s.gate_armed?'ok':'bad'));

    document.getElementById('done').textContent  = s.completed;
    document.getElementById('fail').textContent  = s.failed;
    document.getElementById('aband').textContent = s.abandoned;
    document.getElementById('rem').textContent   = s.remaining;
    document.getElementById('rows').textContent  = s.rows;

    var q=document.getElementById('qual');
    q.textContent=f(s.q_ok)+'%';
    q.className='v '+(s.q_ok>95?'ok':(s.q_ok>85?'warn':'bad'));
    document.getElementById('qbar').style.width=Math.max(0,Math.min(100,s.q_ok))+'%';

    var t=document.getElementById('ev'); t.innerHTML='';
    (s.events||[]).slice().reverse().forEach(function(x){
      var i=x.indexOf('|');
      var r=t.insertRow();
      r.insertCell().textContent = i>0? x.slice(0,i) : '';
      r.insertCell().textContent = i>0? x.slice(i+1) : x;
    });
  }).catch(function(){
    if(++stale>2){
      document.getElementById('dot').classList.add('stale');
      document.getElementById('hdr').textContent='lost connection to headset — retrying…';
    }
  });
}
tick(); setInterval(tick,500);
</script></body></html>";
    }
}
