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

        /// <summary>Session is parked at the ready screen waiting for the operator to press Start.</summary>
        public bool awaitingOperatorStart;
        /// <summary>Stimulus levels are frozen — the trial sequence has begun.</summary>
        public bool configLocked;

        public string eyeMode;   // requested: Auto / Left / Right / Both
        public string eyeCode;   // resolved:  OD / OS / OU

        public float shortRedLuminance;
        public float shortBlueLuminance;
        public float longRedLuminance;
        public float longBlueLuminance;

        public float shortStimDuration;
        public float longStimDuration;
        public float shortRedCircleSize;
        public float shortBlueCircleSize;
        public float longRedCircleSize;
        public float longBlueCircleSize;

        /// <summary>Stimulus positions in metres, flattened to x,y,z triples. Floats rather than
        /// Vector3 so this struct carries no Unity math types — the offline harness compiles the
        /// real server against a shim that deliberately has none.</summary>
        public List<float> positionsXyz;

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

    /// <summary>One frame of the live eye feed. Angles are head-local degrees, positive = wearer's right / up.</summary>
    public struct LiveEyeSample
    {
        public float t;                        // Time.unscaledTime at capture
        public float leftMm, rightMm;          // pupil diameter
        public bool leftValid, rightValid;     // pupil validity per the SDK
        public float leftBlink, rightBlink;    // 0 open .. 1 closed
        public bool leftGazeValid, rightGazeValid;
        public float leftYawDeg, leftPitchDeg;
        public float rightYawDeg, rightPitchDeg;
    }

    /// <summary>Session-level context published alongside the live samples.</summary>
    public struct LiveFeedStatus
    {
        public bool trackingAvailable;
        public bool measuringLeft, measuringRight;
        public string eyeCode;                 // OD / OS / OU
        public bool recording;
        public float stimulusBrightness;       // 0 while no stimulus is lit
        public float now;                      // Time.unscaledTime when the snapshot was taken
    }

    /// <summary>
    /// Fixed-capacity ring of recent eye samples. Main thread only — the server serialises it
    /// into a parked string during Update(); the socket thread never touches it.
    /// </summary>
    public class LiveSampleRing
    {
        private readonly LiveEyeSample[] items;
        private int start, count;

        public LiveSampleRing(int capacity) { items = new LiveEyeSample[Mathf.Max(8, capacity)]; }

        public int Count => count;
        public int Capacity => items.Length;

        public void Push(in LiveEyeSample s)
        {
            if (count < items.Length)
            {
                items[(start + count) % items.Length] = s;
                count++;
            }
            else
            {
                items[start] = s;
                start = (start + 1) % items.Length;
            }
        }

        /// <summary>Index 0 = oldest, Count-1 = newest.</summary>
        public LiveEyeSample Get(int index) => items[(start + index) % items.Length];

        public void Clear() { start = 0; count = 0; }
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
        [Tooltip("How often the live eye feed (/live.json) is re-rendered. The page polls it at ~4 Hz and " +
                 "plays the buffered samples back smoothly, so this mainly bounds feed latency.")]
        [Range(1f, 30f)] public float liveUpdatesPerSecond = 10f;
        [Tooltip("TextAsset in Resources holding the operator page (without extension). A minimal built-in " +
                 "page is served if the asset is missing, so a broken import can never take down the API.")]
        public string pageResourceName = "OperatorPage";

        /// <summary>Set by the recorder so the server can poll it. Found automatically if left null.</summary>
        public PupilDataRecorder recorder;

        private TcpListener listener;
        private Thread serverThread;
        private volatile bool running;

        private readonly object payloadLock = new object();
        private string statusJson = "{}";
        private string liveJson = "{}";

        // Live feed scratch. Main thread only; reused so the 10 Hz rebuild doesn't churn the GC.
        private readonly StringBuilder liveSb = new StringBuilder(12 * 1024);
        private float nextLiveUpdateTime;
        // Only samples newer than this ride in /live.json. Must comfortably exceed the page's poll
        // interval (~250 ms) plus a WiFi hiccup, so the client never sees a gap between polls.
        private const float LiveWindowSeconds = 1.5f;

        // Loaded from Resources before the socket thread starts; immutable afterwards, so the
        // thread-start ordering is the only synchronisation needed.
        private string pageHtml = FallbackPage;

        // Commands arrive on the SERVER thread and are applied on the MAIN thread. Nothing here
        // may touch a Unity API — that is the whole reason for the hand-off.
        private readonly object commandLock = new object();
        private readonly Queue<KeyValuePair<string, Dictionary<string, string>>> commands =
            new Queue<KeyValuePair<string, Dictionary<string, string>>>();
        private const int MaxQueuedCommands = 32;
        /// <summary>Cap on the HTTP request line. Sized for a full config query — 64 positions plus
        /// luminance, size and duration fields — with plenty of headroom.</summary>
        private const int RequestLineLimit = 8192;

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
            LoadPageAsset();
            StartServer();
        }

        /// <summary>
        /// Pulls the operator page out of Resources. Must run before StartServer(): pageHtml is
        /// read by the socket thread and is only safe because it never changes after the thread starts.
        /// </summary>
        private void LoadPageAsset()
        {
            TextAsset asset = Resources.Load<TextAsset>(pageResourceName);
            if (asset != null && !string.IsNullOrEmpty(asset.text))
                pageHtml = asset.text;
            else
                Debug.LogWarning($"[OperatorStatusServer] Resources/{pageResourceName} not found — serving the built-in fallback page.");
        }

        private void Update()
        {
            if (!running || recorder == null) return;

            // Commands are drained every frame, not at the snapshot rate — a Start press should
            // not sit in a queue for a fifth of a second.
            DrainCommands();

            // Rendered on the MAIN thread — the server thread must never touch Unity API.
            if (Time.unscaledTime >= nextUpdateTime)
            {
                nextUpdateTime = Time.unscaledTime + 1f / Mathf.Max(1f, updatesPerSecond);
                string json = BuildJson(recorder.GetStatus());
                lock (payloadLock) { statusJson = json; }
            }

            // The live eye feed runs on its own, faster clock.
            if (Time.unscaledTime >= nextLiveUpdateTime)
            {
                nextLiveUpdateTime = Time.unscaledTime + 1f / Mathf.Max(1f, liveUpdatesPerSecond);
                string json = BuildLiveJson(recorder);
                lock (payloadLock) { liveJson = json; }
            }
        }

        /// <summary>Applies queued operator commands. Main thread only.</summary>
        private void DrainCommands()
        {
            while (true)
            {
                KeyValuePair<string, Dictionary<string, string>> cmd;
                lock (commandLock)
                {
                    if (commands.Count == 0) return;
                    cmd = commands.Dequeue();
                }

                try
                {
                    switch (cmd.Key)
                    {
                        case "start":
                            recorder.RequestOperatorStart();
                            break;
                        case "config":
                            recorder.ApplyOperatorConfig(cmd.Value);
                            break;
                        default:
                            Debug.LogWarning($"[OperatorStatusServer] Unknown command '{cmd.Key}'.");
                            break;
                    }
                }
                catch (Exception e)
                {
                    // A bad command must never take down the server thread's producer or the run.
                    Debug.LogError($"[OperatorStatusServer] Command '{cmd.Key}' failed: {e.Message}");
                }
            }
        }

        /// <summary>Queues a command from the server thread. Bounded so a stuck main thread cannot grow it forever.</summary>
        private bool Enqueue(string name, Dictionary<string, string> args)
        {
            lock (commandLock)
            {
                if (commands.Count >= MaxQueuedCommands) return false;
                commands.Enqueue(new KeyValuePair<string, Dictionary<string, string>>(name, args));
                return true;
            }
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
                else if (path == "/live.json")
                {
                    string body;
                    lock (payloadLock) { body = liveJson; }
                    WriteResponse(stream, "200 OK", "application/json; charset=utf-8", body);
                }
                else if (path == "/api/start" || path == "/api/config")
                {
                    // Parameters ride in the query string rather than a request body: this is a
                    // hand-rolled socket server, and not having to parse headers, chunked encoding
                    // and content-length is a meaningful reduction in what can go wrong.
                    string command = path == "/api/start" ? "start" : "config";
                    Dictionary<string, string> args = ParseQuery(requestLine);

                    bool queued = Enqueue(command, args);
                    WriteResponse(stream,
                        queued ? "202 Accepted" : "503 Service Unavailable",
                        "application/json; charset=utf-8",
                        queued ? "{\"queued\":true}" : "{\"queued\":false,\"error\":\"busy\"}");
                }
                else if (path == "/" || path == "/index.html")
                {
                    WriteResponse(stream, "200 OK", "text/html; charset=utf-8", pageHtml);
                }
                else
                {
                    WriteResponse(stream, "404 Not Found", "text/plain; charset=utf-8", "not found");
                }
            }
        }

        /// <summary>
        /// Read the HTTP request line. Bounded so a malformed request can't hang us — but generous,
        /// because config now rides in the query string and a full position list is long: 64 points
        /// at "x,y,z;" is well over the 1 KB this used to allow.
        /// </summary>
        private static string ReadRequestLine(NetworkStream stream)
        {
            byte[] buffer = new byte[RequestLineLimit];
            int read = 0;
            int scanned = 0;
            while (read < buffer.Length)
            {
                int n = stream.Read(buffer, read, buffer.Length - read);
                if (n <= 0) break;
                read += n;

                // Resume scanning where the last pass stopped instead of re-walking from zero.
                for (int i = Math.Max(0, scanned - 1); i < read - 1; i++)
                    if (buffer[i] == (byte)'\r' && buffer[i + 1] == (byte)'\n')
                        return Encoding.UTF8.GetString(buffer, 0, i);
                scanned = read;

                if (!stream.DataAvailable) break;
            }

            // No terminator inside the limit means the line was truncated. Returning the fragment
            // would hand ParseQuery a half-read config and silently apply part of it, so drop it —
            // an empty line routes to the page, which is harmless.
            if (read >= buffer.Length) return string.Empty;
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

        /// <summary>
        /// Pulls `?a=1&amp;b=2` out of the request line into a dictionary. Percent-decoding is
        /// hand-rolled rather than using WWW/UnityWebRequest helpers, which are Unity API and
        /// therefore off-limits on this thread.
        /// </summary>
        private static Dictionary<string, string> ParseQuery(string requestLine)
        {
            Dictionary<string, string> result = new Dictionary<string, string>();
            if (string.IsNullOrEmpty(requestLine)) return result;

            string[] parts = requestLine.Split(' ');
            if (parts.Length < 2) return result;

            int q = parts[1].IndexOf('?');
            if (q < 0 || q == parts[1].Length - 1) return result;

            foreach (string pair in parts[1].Substring(q + 1).Split('&'))
            {
                if (pair.Length == 0) continue;
                int eq = pair.IndexOf('=');
                string key = eq < 0 ? pair : pair.Substring(0, eq);
                string value = eq < 0 ? "" : pair.Substring(eq + 1);
                result[UrlDecode(key)] = UrlDecode(value);
            }
            return result;
        }

        private static string UrlDecode(string s)
        {
            if (string.IsNullOrEmpty(s) || (s.IndexOf('%') < 0 && s.IndexOf('+') < 0)) return s;

            StringBuilder sb = new StringBuilder(s.Length);
            for (int i = 0; i < s.Length; i++)
            {
                if (s[i] == '+') { sb.Append(' '); }
                else if (s[i] == '%' && i + 2 < s.Length &&
                         int.TryParse(s.Substring(i + 1, 2), NumberStyles.HexNumber, Inv, out int code))
                {
                    sb.Append((char)code);
                    i += 2;
                }
                else sb.Append(s[i]);
            }
            return sb.ToString();
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

            B(sb, "awaiting_start", s.awaitingOperatorStart); sb.Append(',');
            B(sb, "config_locked", s.configLocked); sb.Append(',');
            S(sb, "eye_mode", s.eyeMode); sb.Append(',');
            S(sb, "eye_code", s.eyeCode); sb.Append(',');
            N(sb, "lum_short_red", s.shortRedLuminance); sb.Append(',');
            N(sb, "lum_short_blue", s.shortBlueLuminance); sb.Append(',');
            N(sb, "lum_long_red", s.longRedLuminance); sb.Append(',');
            N(sb, "lum_long_blue", s.longBlueLuminance); sb.Append(',');

            // Sizes carry three decimals: the default 0.03 m stimulus rounds to 0.03 at F2, but the
            // 0.001 m floor would render as 0.00 and the page would echo a zero-size stimulus back.
            N(sb, "dur_short", s.shortStimDuration); sb.Append(',');
            N(sb, "dur_long", s.longStimDuration); sb.Append(',');
            N(sb, "size_short_red", s.shortRedCircleSize, "F3"); sb.Append(',');
            N(sb, "size_short_blue", s.shortBlueCircleSize, "F3"); sb.Append(',');
            N(sb, "size_long_red", s.longRedCircleSize, "F3"); sb.Append(',');
            N(sb, "size_long_blue", s.longBlueCircleSize, "F3"); sb.Append(',');
            Positions(sb, "positions", s.positionsXyz); sb.Append(',');

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

        /// <summary>
        /// Compact live eye feed: session context plus the newest ~1.5 s of samples, oldest first.
        /// Sample layout (13 values, positional — OperatorPage.html indexes these, keep in sync):
        ///   [t, lValid, lMm, lBlink, lGazeValid, lYawDeg, lPitchDeg,
        ///       rValid, rMm, rBlink, rGazeValid, rYawDeg, rPitchDeg]
        /// Bools ride as 0/1 to keep the payload small at 75-90 samples/s.
        /// Main thread only (reads the recorder and reuses liveSb).
        /// </summary>
        private string BuildLiveJson(PupilDataRecorder r)
        {
            LiveFeedStatus meta = r.GetLiveFeedStatus();
            LiveSampleRing ring = r.LiveSamples;

            StringBuilder sb = liveSb;
            sb.Length = 0;

            sb.Append("{\"now\":").Append(meta.now.ToString("F3", Inv));
            sb.Append(",\"tracking\":").Append(meta.trackingAvailable ? "true" : "false");
            sb.Append(",\"recording\":").Append(meta.recording ? "true" : "false");
            sb.Append(",\"eye_code\":\"").Append(Esc(meta.eyeCode)).Append('"');
            sb.Append(",\"meas_l\":").Append(meta.measuringLeft ? '1' : '0');
            sb.Append(",\"meas_r\":").Append(meta.measuringRight ? '1' : '0');
            sb.Append(",\"stim\":").Append(meta.stimulusBrightness.ToString("F2", Inv));
            sb.Append(",\"samples\":[");

            float cutoff = meta.now - LiveWindowSeconds;
            bool first = true;
            for (int i = 0; i < ring.Count; i++)
            {
                LiveEyeSample s = ring.Get(i);
                if (s.t < cutoff) continue;
                if (!first) sb.Append(',');
                first = false;

                sb.Append('[').Append(s.t.ToString("F3", Inv));
                sb.Append(',').Append(s.leftValid ? '1' : '0');
                sb.Append(',').Append(s.leftMm.ToString("F2", Inv));
                sb.Append(',').Append(s.leftBlink.ToString("F2", Inv));
                sb.Append(',').Append(s.leftGazeValid ? '1' : '0');
                sb.Append(',').Append(s.leftYawDeg.ToString("F1", Inv));
                sb.Append(',').Append(s.leftPitchDeg.ToString("F1", Inv));
                sb.Append(',').Append(s.rightValid ? '1' : '0');
                sb.Append(',').Append(s.rightMm.ToString("F2", Inv));
                sb.Append(',').Append(s.rightBlink.ToString("F2", Inv));
                sb.Append(',').Append(s.rightGazeValid ? '1' : '0');
                sb.Append(',').Append(s.rightYawDeg.ToString("F1", Inv));
                sb.Append(',').Append(s.rightPitchDeg.ToString("F1", Inv));
                sb.Append(']');
            }
            sb.Append("]}");
            return sb.ToString();
        }

        private static void S(StringBuilder sb, string k, string v) =>
            sb.Append('"').Append(k).Append("\":\"").Append(Esc(v)).Append('"');
        private static void N(StringBuilder sb, string k, float v) =>
            sb.Append('"').Append(k).Append("\":").Append(v.ToString("F2", Inv));
        private static void N(StringBuilder sb, string k, float v, string fmt) =>
            sb.Append('"').Append(k).Append("\":").Append(v.ToString(fmt, Inv));

        /// <summary>Emit flattened x,y,z triples as [[x,y,z],…]. A trailing partial triple is
        /// dropped rather than padded — better to serve one position fewer than a garbage one.</summary>
        private static void Positions(StringBuilder sb, string k, List<float> xyz)
        {
            sb.Append('"').Append(k).Append("\":[");
            if (xyz != null)
            {
                for (int i = 0; i + 2 < xyz.Count; i += 3)
                {
                    if (i > 0) sb.Append(',');
                    sb.Append('[').Append(xyz[i].ToString("F4", Inv))
                      .Append(',').Append(xyz[i + 1].ToString("F4", Inv))
                      .Append(',').Append(xyz[i + 2].ToString("F4", Inv)).Append(']');
                }
            }
            sb.Append(']');
        }
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
        // Fallback page. The real operator page lives in Assets/Resources/OperatorPage.html
        // (loaded in LoadPageAsset); this minimal one is served only if that asset went missing,
        // so a broken import can never take the API down with it.
        // -------------------------------------------------------

        private const string FallbackPage = @"<!doctype html>
<html lang=""en""><head><meta charset=""utf-8"">
<meta name=""viewport"" content=""width=device-width,initial-scale=1"">
<title>VRS Studio — Session Monitor</title></head>
<body style=""font:15px/1.5 sans-serif;background:#12141a;color:#e8eaf0;padding:24px"">
<h2 style=""font-size:17px"">VRS Studio — operator page asset missing</h2>
<p>Resources/OperatorPage.html was not found in this build, so only the raw endpoints are available:</p>
<p><a style=""color:#8ab4f8"" href=""/status.json"">/status.json</a> ·
<a style=""color:#8ab4f8"" href=""/live.json"">/live.json</a></p>
<p>POST /api/start and /api/config?short_red=…&amp;eye=… still work.</p>
</body></html>";
    }
}
