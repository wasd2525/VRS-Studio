// Shared CSV schema for all recording session types.
//
// PupilDataRecorder (paradigm) and VideoSessionRecorder (video) are independent
// MonoBehaviours that write the SAME row format so downstream analysis is shared.
// Both previously carried their own copy of the header string, which is exactly the
// kind of duplication that drifts. Both now go through this one file: change the
// schema here and both recorders follow.

using System.Globalization;
using System.Text;
using UnityEngine;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Why a sample is or isn't usable. Previously a tracker dropout was recorded as a
    /// "blink" because the validity bools were folded into the blink test, which made
    /// genuine blinks and eye-tracking loss indistinguishable in analysis.
    /// </summary>
    public enum SampleQuality
    {
        Ok,
        Blink,
        TrackingLost
    }

    /// <summary>
    /// One frame of eye data plus the paradigm context it was captured in.
    /// </summary>
    public struct SampleRow
    {
        public float timestampSec;

        public float leftPupilMm;
        public float rightPupilMm;
        public bool leftPupilValid;
        public bool rightPupilValid;

        public float leftBlink;
        public float rightBlink;

        public Vector3 leftGaze;
        public Vector3 rightGaze;
        public Vector3 combinedGaze;
        public bool combinedGazeValid;
        public Vector3 origin;

        public string lightCondition;
        public float stimulusBrightness;

        /// <summary>Deviation from the drift-corrected fixation reference. -1 when gaze is invalid.</summary>
        public float gazeDeviationDeg;
        /// <summary>Deviation from raw head forward, uncorrected. -1 when gaze is invalid.</summary>
        public float gazeDeviationRawDeg;
        /// <summary>How far the rolling reference currently sits from head forward — i.e. the tracked drift.</summary>
        public float gazeBiasDeg;
        public bool gazeOffTarget;

        public SampleQuality quality;

        /// <summary>Pre-formatted, already-quoted `"name","details"` pair, or `,""` when there is no event.</summary>
        public string eventData;
    }

    public static class SessionCsvSchema
    {
        /// <summary>
        /// v3 (2026-07): added validity bools, sample_quality, gaze_deviation_raw_deg, gaze_bias_deg.
        /// Columns 1-21 are byte-identical to v2, so positional parsers reading those still work;
        /// the two event columns moved from 22/23 to 28/29.
        /// </summary>
        public const int SchemaVersion = 3;

        public const string Header =
            "timestamp_sec,left_pupil_mm,right_pupil_mm,left_blink,right_blink," +
            "left_gaze_x,left_gaze_y,left_gaze_z," +
            "right_gaze_x,right_gaze_y,right_gaze_z," +
            "combined_gaze_x,combined_gaze_y,combined_gaze_z," +
            "origin_x,origin_y,origin_z," +
            "light_condition,stimulus_brightness,gaze_deviation_deg,gaze_off_target," +
            "left_pupil_valid,right_pupil_valid,combined_gaze_valid,sample_quality," +
            "gaze_deviation_raw_deg,gaze_bias_deg," +
            "event_name,stimulus_event";

        /// <summary>Event placeholder for rows that carry no event (fills both trailing columns).</summary>
        public const string NoEvent = ",\"\"";

        // Every number is formatted with InvariantCulture. Without this, a device whose locale
        // uses a comma decimal separator would emit "1,2345" and split one value across two
        // CSV columns, silently corrupting the whole file.
        private static readonly CultureInfo Inv = CultureInfo.InvariantCulture;

        public static string FormatRow(in SampleRow r)
        {
            StringBuilder sb = new StringBuilder(320);

            sb.Append(r.timestampSec.ToString("F4", Inv)).Append(',');
            sb.Append(r.leftPupilMm.ToString("F4", Inv)).Append(',');
            sb.Append(r.rightPupilMm.ToString("F4", Inv)).Append(',');
            sb.Append(r.leftBlink.ToString("F4", Inv)).Append(',');
            sb.Append(r.rightBlink.ToString("F4", Inv)).Append(',');

            AppendVector(sb, r.leftGaze);
            AppendVector(sb, r.rightGaze);
            AppendVector(sb, r.combinedGaze);
            AppendVector(sb, r.origin);

            sb.Append(r.lightCondition).Append(',');
            sb.Append(r.stimulusBrightness.ToString("F2", Inv)).Append(',');
            sb.Append(r.gazeDeviationDeg.ToString("F2", Inv)).Append(',');
            sb.Append(r.gazeOffTarget).Append(',');

            sb.Append(r.leftPupilValid).Append(',');
            sb.Append(r.rightPupilValid).Append(',');
            sb.Append(r.combinedGazeValid).Append(',');
            sb.Append(QualityString(r.quality)).Append(',');

            sb.Append(r.gazeDeviationRawDeg.ToString("F2", Inv)).Append(',');
            sb.Append(r.gazeBiasDeg.ToString("F2", Inv)).Append(',');

            sb.Append(string.IsNullOrEmpty(r.eventData) ? NoEvent : r.eventData);

            return sb.ToString();
        }

        private static void AppendVector(StringBuilder sb, Vector3 v)
        {
            sb.Append(v.x.ToString("F4", Inv)).Append(',');
            sb.Append(v.y.ToString("F4", Inv)).Append(',');
            sb.Append(v.z.ToString("F4", Inv)).Append(',');
        }

        public static string QualityString(SampleQuality q)
        {
            switch (q)
            {
                case SampleQuality.Blink: return "blink";
                case SampleQuality.TrackingLost: return "tracking_lost";
                default: return "ok";
            }
        }

        /// <summary>Quotes a name/details pair into the trailing two event columns.</summary>
        public static string FormatEvent(string eventName, string details)
        {
            string safeName = (eventName ?? "").Replace("\"", "\"\"");
            string safeDetails = (details ?? "").Replace("\"", "\"\"");
            return $"\"{safeName}\",\"{safeDetails}\"";
        }
    }
}
