// Participant identity and session metadata.
//
// Sessions used to be identified only by a timestamp, which is unworkable once real
// participants are involved. The ID is typed in-headset using Wave's native IME (no custom
// keyboard or controller-pointer rig needed — the scene has neither), and every paradigm
// parameter is written to a sidecar JSON next to the CSV so a recording is reproducible
// without having to know which build produced it.

using System;
using System.Collections;
using System.Globalization;
using System.IO;
using System.Text;
using UnityEngine;
using Wave.Essence;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Shows the native Wave keyboard and waits for the operator to type a participant ID.
    /// </summary>
    public class ParticipantIdPrompt
    {
        // Written from the IME callback, which does NOT run on the Unity main thread.
        private volatile string pendingResult;
        private volatile bool pendingDone;

        public string Result { get; private set; }
        public bool Succeeded { get; private set; }
        public string FailureReason { get; private set; }

        /// <summary>
        /// Drive from a coroutine (main thread). Completes when the operator confirms, or when
        /// timeoutSeconds elapses, or immediately if the IME is unavailable (e.g. in the Editor).
        /// </summary>
        public IEnumerator Prompt(string title, string initialText, float timeoutSeconds)
        {
            pendingResult = null;
            pendingDone = false;
            Result = null;
            Succeeded = false;
            FailureReason = null;

            IMEManagerWrapper ime = null;
            try
            {
                ime = IMEManagerWrapper.GetInstance();
            }
            catch (Exception e)
            {
                FailureReason = $"ime_unavailable: {e.Message}";
                Debug.LogWarning($"[ParticipantIdPrompt] Wave IME unavailable ({e.Message}); falling back.");
                yield break;
            }

            if (ime == null)
            {
                FailureReason = "ime_null";
                Debug.LogWarning("[ParticipantIdPrompt] Wave IME returned no instance; falling back.");
                yield break;
            }

            // Any of these can throw if the IME service is not present on the device.
            try
            {
                ime.InitParameter();
                ime.SetTitle(title);
                ime.SetText(initialText ?? string.Empty);
                ime.SetLocale(IMEManagerWrapper.Locale.en_US);
                ime.SetAction(IMEManagerWrapper.Action.Done);
                ime.SetDoneCallback(OnInputDone);
                ime.Show();
            }
            catch (Exception e)
            {
                FailureReason = $"ime_show_failed: {e.Message}";
                Debug.LogWarning($"[ParticipantIdPrompt] Could not show Wave IME ({e.Message}); falling back.");
                yield break;
            }

            float elapsed = 0f;
            while (!pendingDone && elapsed < timeoutSeconds)
            {
                elapsed += Time.deltaTime;
                yield return null;
            }

            try { ime.Hide(); } catch (Exception) { /* already gone */ }

            if (!pendingDone)
            {
                FailureReason = "timeout";
                Debug.LogWarning($"[ParticipantIdPrompt] No ID entered within {timeoutSeconds:F0}s; falling back.");
                yield break;
            }

            Result = pendingResult;
            Succeeded = !string.IsNullOrEmpty(Result);
            if (!Succeeded) FailureReason = "empty";
        }

        /// <summary>
        /// IME callback. NOT the Unity main thread — the SDK's own sample warns that touching UI
        /// here throws, so this only parks the value for the coroutine to pick up.
        /// </summary>
        private void OnInputDone(IMEManagerWrapper.InputResult results)
        {
            pendingResult = results != null ? results.GetContent() : null;
            pendingDone = true;
        }

        /// <summary>
        /// Reduce free text to something safe for a filename on device, over ADB, and in analysis
        /// scripts: ASCII alphanumerics plus - and _, spaces folded to underscores, length-capped.
        /// </summary>
        public static string Sanitize(string raw, string fallback = "anon", int maxLength = 24)
        {
            if (string.IsNullOrEmpty(raw)) return fallback;

            StringBuilder sb = new StringBuilder(maxLength);
            foreach (char c in raw.Trim())
            {
                if (sb.Length >= maxLength) break;

                if (c < 128 && char.IsLetterOrDigit(c)) sb.Append(c);
                else if (c == '-' || c == '_') sb.Append(c);
                else if (c == ' ') sb.Append('_');
                // everything else silently dropped
            }

            string cleaned = sb.ToString().Trim('_', '-');
            return string.IsNullOrEmpty(cleaned) ? fallback : cleaned;
        }
    }

    /// <summary>
    /// Builds the sidecar JSON describing exactly how a session was run.
    /// Hand-rolled rather than JsonUtility so nested/array shapes stay readable and there is no
    /// dependency on [Serializable] mirror classes drifting from the real fields.
    /// </summary>
    public static class SessionMetadata
    {
        private static readonly CultureInfo Inv = CultureInfo.InvariantCulture;

        public static string SidecarPathFor(string csvPath)
        {
            string dir = Path.GetDirectoryName(csvPath);
            string name = Path.GetFileNameWithoutExtension(csvPath);
            return Path.Combine(dir, name + ".meta.json");
        }

        public static bool Write(string csvPath, string participantId, PupilDataRecorder r)
        {
            try
            {
                string json = Build(csvPath, participantId, r);
                File.WriteAllText(SidecarPathFor(csvPath), json);
                Debug.Log($"[SessionMetadata] Wrote {SidecarPathFor(csvPath)}");
                return true;
            }
            catch (Exception e)
            {
                Debug.LogError($"[SessionMetadata] Failed to write sidecar: {e.Message}");
                return false;
            }
        }

        private static string Build(string csvPath, string participantId, PupilDataRecorder r)
        {
            StringBuilder sb = new StringBuilder(2048);
            sb.Append("{\n");

            sb.Append("  \"schema_version\": ").Append(SessionCsvSchema.SchemaVersion).Append(",\n");
            Str(sb, "  ", "paradigm_version", r.currentVersion, true);
            Str(sb, "  ", "participant_id", participantId, true);
            Str(sb, "  ", "csv_file", Path.GetFileName(csvPath), true);
            Str(sb, "  ", "started_utc", DateTime.UtcNow.ToString("o", Inv), true);
            Str(sb, "  ", "started_local", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss", Inv), true);

            sb.Append("  \"device\": {\n");
            Str(sb, "    ", "model", SystemInfo.deviceModel, true);
            Str(sb, "    ", "name", SystemInfo.deviceName, true);
            Str(sb, "    ", "os", SystemInfo.operatingSystem, true);
            Str(sb, "    ", "unity", Application.unityVersion, true);
            Str(sb, "    ", "app_version", Application.version, false);
            sb.Append("  },\n");

            sb.Append("  \"timing\": {\n");
            Num(sb, "    ", "short_stim_duration_s", r.shortStimDuration, true);
            Num(sb, "    ", "long_stim_duration_s", r.longStimDuration, true);
            Num(sb, "    ", "short_interval_s", r.shortInterval, true);
            Num(sb, "    ", "long_interval_s", r.longInterval, true);
            Num(sb, "    ", "pre_stimulus_window_s", r.preStimulusWindow, true);
            Num(sb, "    ", "short_sampling_window_s", r.shortSamplingWindow, true);
            Num(sb, "    ", "long_sampling_window_s", r.longSamplingWindow, true);
            Num(sb, "    ", "wait_before_start_s", r.waitBeforeStart, true);
            Num(sb, "    ", "delay_between_types_s", r.delayBetweenTypes, false);
            sb.Append("  },\n");

            sb.Append("  \"stimulus\": {\n");
            Num(sb, "    ", "blue_circle_size_m", r.blueCircleSize, true);
            Num(sb, "    ", "red_circle_size_m", r.redCircleSize, true);
            Num(sb, "    ", "fixation_dot_size_m", r.fixationLightSize, true);
            Num(sb, "    ", "fixation_dot_luminance", r.fixationLightLuminance, true);
            Bool(sb, "    ", "randomize_brightness", r.randomizeBrightness, true);
            Num(sb, "    ", "min_brightness", r.minBrightness, true);
            Num(sb, "    ", "max_brightness", r.maxBrightness, true);
            Bool(sb, "    ", "include_short_red", r.includeShortRed, true);
            Bool(sb, "    ", "include_short_blue", r.includeShortBlue, true);
            Bool(sb, "    ", "include_long_red", r.includeLongRed, true);
            Bool(sb, "    ", "include_long_blue", r.includeLongBlue, false);
            sb.Append("  },\n");

            sb.Append("  \"positions_m\": [");
            for (int i = 0; i < r.vectorPositions.Length; i++)
            {
                Vector3 p = r.vectorPositions[i];
                if (i > 0) sb.Append(", ");
                sb.Append('[').Append(F(p.x)).Append(", ").Append(F(p.y)).Append(", ").Append(F(p.z)).Append(']');
            }
            sb.Append("],\n");

            sb.Append("  \"gaze\": {\n");
            Bool(sb, "    ", "enforce_fixation", r.enforceGazeFixation, true);
            Num(sb, "    ", "tolerance_deg", r.gazeToleranceDeg, true);
            Num(sb, "    ", "debounce_s", r.gazeDebounceSeconds, true);
            Bool(sb, "    ", "center_bias_correction", r.useCenterBiasCorrection, true);
            Bool(sb, "    ", "rolling_rebaseline", r.useRollingReBaseline, true);
            Num(sb, "    ", "rebaseline_window_s", r.reBaselineWindowSeconds, true);
            Num(sb, "    ", "rebaseline_inlier_deg", r.reBaselineInlierDeg, true);
            Num(sb, "    ", "rebaseline_max_rate_dps", r.reBaselineMaxRateDegPerSec, true);
            Num(sb, "    ", "max_total_drift_deg", r.maxTotalDriftDeg, true);
            Num(sb, "    ", "rebaseline_stall_timeout_s", r.reBaselineStallTimeoutSeconds, true);
            Num(sb, "    ", "gate_rearm_fraction", r.gateRearmFraction, true);
            Num(sb, "    ", "gate_rearm_hold_s", r.gateRearmHoldSeconds, false);
            sb.Append("  },\n");

            sb.Append("  \"trials\": {\n");
            Int(sb, "    ", "max_retests", r.maxRetests, true);
            Bool(sb, "    ", "fail_on_pre_stimulus_blink", r.failOnPreStimulusBlink, false);
            sb.Append("  }\n");

            sb.Append("}\n");
            return sb.ToString();
        }

        private static string F(float v) => v.ToString("G9", Inv);

        private static void Str(StringBuilder sb, string indent, string key, string value, bool comma)
        {
            sb.Append(indent).Append('"').Append(key).Append("\": \"").Append(Escape(value)).Append('"');
            sb.Append(comma ? ",\n" : "\n");
        }

        private static void Num(StringBuilder sb, string indent, string key, float value, bool comma)
        {
            sb.Append(indent).Append('"').Append(key).Append("\": ").Append(F(value));
            sb.Append(comma ? ",\n" : "\n");
        }

        private static void Int(StringBuilder sb, string indent, string key, int value, bool comma)
        {
            sb.Append(indent).Append('"').Append(key).Append("\": ").Append(value.ToString(Inv));
            sb.Append(comma ? ",\n" : "\n");
        }

        private static void Bool(StringBuilder sb, string indent, string key, bool value, bool comma)
        {
            sb.Append(indent).Append('"').Append(key).Append("\": ").Append(value ? "true" : "false");
            sb.Append(comma ? ",\n" : "\n");
        }

        private static string Escape(string s)
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
    }
}
