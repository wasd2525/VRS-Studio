// Central default configuration for the pupillometry paradigm.
//
// Ported from the reference project's PConfig.cs so both rigs are configured from one
// comparable place. Every value under "Shared with the reference rig" is deliberately
// identical to theirs — if you change one here, change it there too, or the two datasets
// stop being comparable. Values under "VRS Studio only" cover hardware and features the
// FOVE rig does not have (drift-corrected gaze gating, participant screens, CSV output).
//
// PupilDataRecorder initialises its inspector fields from these. Note that Unity serialises
// component values into the scene: changing a default here only affects components created
// at runtime (which is how PupilRecordingSetup makes the recorder) or ones reset via the
// "Reset to PConfig defaults" button in the inspector.

using UnityEngine;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Which eye the session is measuring. The fellow eye is expected to be physically
    /// patched — that is what makes <see cref="EyeUnderTest.Auto"/> work, since a covered
    /// eye returns no valid pupil.
    /// </summary>
    public enum EyeUnderTest
    {
        /// <summary>Detect the unpatched eye from which one returns valid pupil data.</summary>
        Auto,
        /// <summary>Left eye — OS.</summary>
        Left,
        /// <summary>Right eye — OD.</summary>
        Right,
        /// <summary>Both eyes — OU. Binocular, no patch.</summary>
        Both
    }

    /// <summary>Cohort the participant belongs to. Mirrors the reference rig's SubjectGroup.</summary>
    public enum SubjectGroup
    {
        Control,
        Patient
    }

    public static class PConfig
    {
        // ─────────────────────────────────────────────────────────────────
        // Shared with the reference rig — keep byte-identical to their PConfig.cs
        // ─────────────────────────────────────────────────────────────────

        // ── Stimulus Timing ──────────────────────────────────────────────
        // Sampling windows are measured from stimulus ONSET, matching the reference rig:
        // a short trial holds fixation for 1.5 s after onset (stimulus off at 0.5 s), and a
        // long trial releases at 4 s while the 5 s stimulus is still lit.
        public const float ShortStimDuration = 0.5f;
        public const float LongStimDuration = 5f;
        public const float ShortInterval = 4.0f;
        public const float LongInterval = 8f;
        public const float PreStimulusWindow = 1.5f;
        public const float ShortSamplingWindow = 1.5f;
        public const float LongSamplingWindow = 4f;

        // ── Stimulus size & luminance ────────────────────────────────────
        // Sizes are the stimulus DIAMETER in metres on the 2 m plane, so 0.03 m subtends
        // 2*atan(0.015/2.0) = 0.86 deg. Angular size is device-independent and syncs directly.
        public const float ShortRedCircleSize = 0.03f;
        public const float ShortBlueCircleSize = 0.03f;
        public const float LongRedCircleSize = 0.05f;
        public const float LongBlueCircleSize = 0.05f;
        public const float ShortBlueLuminance = 0.5f;
        public const float ShortRedLuminance = 0.5f;
        public const float LongBlueLuminance = 1.0f;
        public const float LongRedLuminance = 1.0f;
        public const float FixationLightSize = 0.02f;
        public const float FixationLightLuminance = 0.1f;
        public const float FixationLightZIndex = 2.0f;

        // ── Include Stimulus Types ───────────────────────────────────────
        public const bool IncludeShortRed = true;
        public const bool IncludeShortBlue = true;
        public const bool IncludeLongRed = true;
        public const bool IncludeLongBlue = true;

        // ── Other Options ────────────────────────────────────────────────
        public const float GazeLostThreshold = 0.15f;
        /// <summary>Reference rig gates gaze with a sphere collider of this radius at the
        /// fixation depth. atan(0.25 / 2.0) = 7.13 deg half-angle — see GazeToleranceDeg.</summary>
        public const float GazeColliderRadius = 0.25f;
        public const float WaitBeforeStart = 30f;
        public const int MaxRetests = 3;

        // ── Vector Positions ─────────────────────────────────────────────
        // Humphrey 30-2 grid points at +-15 deg and +-3 deg on both diagonals. These are the
        // positions the reference rig's recorded sessions used. static readonly because
        // Vector3 cannot be const.
        public static readonly Vector3[] VectorPositions = new Vector3[]
        {
            new Vector3(-0.5359f, +0.5359f, 2.000f),
            new Vector3(-0.1048f, +0.1048f, 2.000f),
            new Vector3(+0.5359f, +0.5359f, 2.000f),
            new Vector3(+0.1048f, +0.1048f, 2.000f),
            new Vector3(+0.5359f, -0.5359f, 2.000f),
            new Vector3(+0.1048f, -0.1048f, 2.000f),
            new Vector3(-0.5359f, -0.5359f, 2.000f),
            new Vector3(-0.1048f, -0.1048f, 2.000f)
        };

        // ── Audio Instructions ───────────────────────────────────────────
        public const float DoubleBeepGap = 0.3f;

        // ─────────────────────────────────────────────────────────────────
        // VRS Studio only — no counterpart on the reference rig
        // ─────────────────────────────────────────────────────────────────

        // ── Eye under test ───────────────────────────────────────────────
        public const EyeUnderTest DefaultEyeUnderTest = EyeUnderTest.Auto;
        /// <summary>Seconds spent counting valid pupil frames per eye before choosing. The
        /// reference rig uses 5 s.</summary>
        public const float EyeDetectionSeconds = 5f;
        /// <summary>Fraction of frames an eye must return valid pupil data in to count as open.</summary>
        public const float EyeOpenFrameFraction = 0.5f;

        // ── Gaze gating ──────────────────────────────────────────────────
        // Expressed as an angle rather than a collider radius because this rig corrects for
        // tracker drift, which a fixed world-space collider cannot do.
        // atan(GazeColliderRadius / FixationLightZIndex) in degrees = 7.13, matching theirs.
        public const float GazeToleranceDeg = 7.13f;
        public const float GazeDebounceSeconds = GazeLostThreshold;
        public const float ReBaselineWindowSeconds = 8f;
        public const float ReBaselineInlierDeg = 8f;
        public const float ReBaselineMaxRateDegPerSec = 0.8f;
        public const float MaxTotalDriftDeg = 8f;
        public const float ReBaselineStallTimeoutSeconds = 60f;
        public const float GateRearmFraction = 0.6f;
        public const float GateRearmHoldSeconds = 3f;

        // ── Brightness randomisation ─────────────────────────────────────
        // OFF: the reference protocol holds luminance fixed for a whole session and steps it
        // ACROSS sessions. Randomising per trial assigns one brightness per position, which
        // confounds brightness with eccentricity and leaves ~2 trials per level.
        public const bool RandomizeBrightness = false;
        public const float MinBrightness = 0.1f;
        public const float MaxBrightness = 1.0f;

        // ── Participant screens ──────────────────────────────────────────
        public const float InstructionsSeconds = 6f;
        public const float BaselineQuietTailSeconds = 5f;
        public const float FinishScreenSeconds = 5f;
        public const float DelayBetweenTypes = 8f;
        /// <summary>Gap between the warning beep and the trial arming.</summary>
        public const float CueLeadSeconds = 0.25f;
    }
}
