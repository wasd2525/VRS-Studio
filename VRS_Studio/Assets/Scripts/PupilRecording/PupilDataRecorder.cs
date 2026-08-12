// Pupil Data Recorder for HTC Vive Focus
// Records pupil diameter, gaze, and blink data to CSV file each session
// Integrates the StimuTest paradigm (timing, luminance, and test cases)
// Uses streaming to prevent data loss if app is force-killed

using System;
using System.Globalization;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Wave.Essence.Eye;
using Wave.Essence.InputModule; // For InputDeviceEye if needed; using Wave.OpenXR directly below

namespace VRS.PupilRecording
{
    /// <summary>
    /// Stable identity for the four stimulus types. Used to push operator-set luminance back
    /// onto the right stimulus — matching on the display name would break the moment someone
    /// renames one.
    /// </summary>
    public enum StimulusKind { ShortRed, ShortBlue, LongRed, LongBlue }

    // --- Data structures for the experiment ---
    public class StimulusType
    {
        public string name;
        public StimulusKind kind;
        public GameObject sphere;
        public float duration;
        public float interval;
        public float samplingWindow;
        public Color baseColor; // Pure hue (e.g. (1,0,0)); brightness is multiplied at trial time.
        public float baseLuminance; // Inspector luminance for this type, used when randomization is off.
        public UnityEngine.UI.Image image;

        public StimulusType(string name, StimulusKind kind, GameObject sphere, float duration, float interval, float samplingWindow, Color baseColor, float baseLuminance, UnityEngine.UI.Image image)
        {
            this.name = name;
            this.kind = kind;
            this.sphere = sphere;
            this.duration = duration;
            this.interval = interval;
            this.samplingWindow = samplingWindow;
            this.baseColor = baseColor;
            this.baseLuminance = baseLuminance;
            this.image = image;
        }
    }

    public class TestCase
    {
        public int id;
        public Vector3 position;
        public float brightness; // Pinned at enqueue so retries reuse the same condition.

        public TestCase(int id, Vector3 pos, float brightness)
        {
            this.id = id;
            this.position = pos;
            this.brightness = brightness;
        }
    }

    public class TrialState
    {
        /// <summary>
        /// True while the participant is required to hold fixation. Goes false when the
        /// measured window closes, which for a long stimulus happens BEFORE the stimulus
        /// goes out — the reference rig releases the subject at the sampling window and
        /// leaves the light on for the remainder.
        /// </summary>
        public bool active = true;

        public bool failed = false;
        public string failedReason = "";

        public void Failed(string reason)
        {
            // Keep the FIRST reason: a blink that then drags gaze off target should be
            // recorded as a blink, not relabelled by whatever happened next.
            if (failed) return;
            failed = true;
            failedReason = reason;
        }
    }

    public class FailedPosition
    {
        public int repeat = 0;
        public List<string> history = new List<string>();

        public void AddFailure(string reason)
        {
            repeat++;
            history.Add(reason);
        }
    }

    // GazeFixationMonitor and GazeBaselineTracker live in GazeFixation.cs.

    /// <summary>
    /// Records pupil diameter, gaze, and blink data every frame and streams directly to CSV file.
    /// Manages the Stimulus logic natively.
    /// </summary>
    public class PupilDataRecorder : MonoBehaviour
    {
        [Header("Recording Settings")]
        [Tooltip("Enable or disable recording")]
        public bool enableRecording = true;

        [Space(10)]
        [Header("Version")]
        public string currentVersion = "2.0.0";

        [Space(10)]
        [Header("Participant")]
        [Tooltip("Ask for a participant ID in-headset (Wave native keyboard) before the session starts. " +
                 "Turn off for unattended testing; the fallback ID is used instead.")]
        public bool askForParticipantId = true;
        [Tooltip("Used when ID entry is skipped, times out, is left empty, or the IME is unavailable (e.g. in the Editor).")]
        public string participantIdFallback = "anon";
        [Tooltip("Short protocol code (the reference rig uses 4 letters). Goes into the filename and sidecar.")]
        public string protocol = "";
        [Tooltip("Recorded in the sidecar so control and patient sessions can be separated in analysis.")]
        public SubjectGroup subjectGroup = SubjectGroup.Control;
        [Tooltip("Free-text note attached to the session metadata.")]
        public string note = "";
        [Tooltip("How long to wait for the operator to finish typing before falling back.")]
        public float participantPromptTimeoutSeconds = 120f;

        [Space(10)]
        [Header("Operator Control")]
        [Tooltip("Hold the session at a ready screen after the participant ID is entered, until the " +
                 "operator presses Start on the web monitor. Ignored (and logged) if the server is not " +
                 "running, so a failed server can never strand a session.")]
        public bool requireOperatorStart = true;
        [Tooltip("Give up waiting and start anyway after this long. 0 = wait indefinitely, which is the " +
                 "safe default for a lab: an unattended auto-start is worse than a session that waits.")]
        public float operatorStartTimeoutSeconds = 0f;

        [Space(10)]
        [Header("Eye Under Test")]
        [Tooltip("Which eye this session measures. The fellow eye is expected to be physically patched. " +
                 "Auto picks whichever eye still returns valid pupil data — a covered eye returns none.")]
        public EyeUnderTest eyeUnderTest = PConfig.DefaultEyeUnderTest;
        [Tooltip("How long Auto spends counting valid pupil frames per eye before deciding.")]
        [Range(1f, 15f)] public float eyeDetectionSeconds = PConfig.EyeDetectionSeconds;
        [Tooltip("Also blank the fellow eye's display via Camera.stereoTargetEye, so it sees black even " +
                 "without a patch. OFF by default: this changes the XR render path and has NOT been " +
                 "verified on the Focus Vision. The physical patch is the protocol; this is belt-and-braces.")]
        public bool occludeFellowEyeInSoftware = false;

        [Space(10)]
        [Header("Stimulus Timing")]
        [Tooltip("Sampling windows are measured from stimulus ONSET, matching the reference rig. A short " +
                 "trial holds fixation 1.5 s past onset though the light is out at 0.5 s; a long trial " +
                 "releases at 4 s while the 5 s light is still on.")]
        public float shortStimDuration = PConfig.ShortStimDuration;
        public float longStimDuration = PConfig.LongStimDuration;
        public float shortInterval = PConfig.ShortInterval;
        public float longInterval = PConfig.LongInterval;
        public float preStimulusWindow = PConfig.PreStimulusWindow;
        public float shortSamplingWindow = PConfig.ShortSamplingWindow;
        public float longSamplingWindow = PConfig.LongSamplingWindow;

        [Space(10)]
        [Header("Luminance Settings")]
        // Stimulus DIAMETER in metres on the 2 m plane. 0.03 m → 2*atan(0.015/2.0) ≈ 0.86° visual angle,
        // matching the reference rig's 0.03 m sphere. Angular size is device-independent, so this syncs
        // directly. Stimuli render as filled circles (see CircleSprite) — they were square quads before,
        // which is 27% more emitting area than a disc of the same nominal size.
        public float shortRedCircleSize = PConfig.ShortRedCircleSize;
        public float shortBlueCircleSize = PConfig.ShortBlueCircleSize;
        public float longRedCircleSize = PConfig.LongRedCircleSize;
        public float longBlueCircleSize = PConfig.LongBlueCircleSize;
        public float shortBlueLuminance = PConfig.ShortBlueLuminance;
        public float shortRedLuminance = PConfig.ShortRedLuminance;
        public float longBlueLuminance = PConfig.LongBlueLuminance;
        public float longRedLuminance = PConfig.LongRedLuminance;
        public float fixationLightSize = PConfig.FixationLightSize;
        public float fixationLightLuminance = PConfig.FixationLightLuminance;

        [Space(10)]
        [Header("Vectors")]
        [Tooltip("Humphrey 30-2 grid points. Edit visually with Window ▸ Pupilometer ▸ Visual Field Map.")]
        public Vector3[] vectorPositions = (Vector3[])PConfig.VectorPositions.Clone();

        [Space(10)]
        [Header("Include Stimulus Types")]
        [InspectorName("Short Red")] public bool includeShortRed = PConfig.IncludeShortRed;
        [InspectorName("Short Blue")] public bool includeShortBlue = PConfig.IncludeShortBlue;
        [InspectorName("Long Red")] public bool includeLongRed = PConfig.IncludeLongRed;
        [InspectorName("Long Blue")] public bool includeLongBlue = PConfig.IncludeLongBlue;

        [Space(10)]
        [Header("Brightness Randomization")]
        [Tooltip("Per stim type, pick brightnesses evenly spaced across [min, max] (one per position) and " +
                 "shuffle the order. Overrides the per-stimulus luminance fields above.\n\n" +
                 "OFF by default and it should stay off: this assigns ONE brightness per position, so " +
                 "brightness is perfectly confounded with eccentricity and a session yields ~1 trial per " +
                 "level. The reference protocol instead holds luminance fixed for a whole session and steps " +
                 "it across sessions, which is what produced their clean dose-response curve.")]
        public bool randomizeBrightness = PConfig.RandomizeBrightness;
        [Range(0f, 1f)] public float minBrightness = PConfig.MinBrightness;
        [Range(0f, 1f)] public float maxBrightness = PConfig.MaxBrightness;

        [Space(10)]
        [Header("Gaze Fixation")]
        [Tooltip("Fail/repeat a trial if combined gaze leaves a cone around the fixation point for longer than the debounce. Auto-disables if calibration can't capture or drift tracking stalls.")]
        public bool enforceGazeFixation = true;
        [Tooltip("Half-angle of the on-target cone. The FOVE reference rig used ~3.4° (atan(0.5/8.5)). This was widened to 8° only to paper over baseline drift; with rolling re-baselining on, bring it back down once a clean session confirms the corrected deviation stays low.")]
        [Range(0.5f, 15f)] public float gazeToleranceDeg = PConfig.GazeToleranceDeg;
        [Tooltip("Gaze must be continuously off-target this long (seconds) before the trial fails. Filters momentary saccades/jitter; the systematic offset is handled by re-baselining, not this.")]
        [Range(0f, 0.5f)] public float gazeDebounceSeconds = PConfig.GazeDebounceSeconds;
        [Tooltip("After baseline, average gaze while the subject fixates center and use it as the initial fixation reference. The rig shows a ~10° eye-tracker offset, so this seed is required for the gate to work at all.")]
        public bool useCenterBiasCorrection = true;

        [Space(6)]
        [Tooltip("Keep re-estimating the fixation reference from between-trial gaze. The one-shot calibration only holds for ~15 s before the ~10° bias drifts back out (measured 2.75°->8.45° over 45 s), which failed every trial as 'looking_away'. Leave ON.")]
        public bool useRollingReBaseline = true;
        [Tooltip("Only between-trial gaze from the last this-many seconds informs the drift estimate. A trailing " +
                 "median lags the true bias by about (window/2) * drift_rate, and that lag becomes permanent residual " +
                 "deviation: simulated at the measured 0.29 deg/s, 20 s leaves 3.15 deg residual and 8 s leaves 1.47 deg. " +
                 "Shorter reacts faster but buffers fewer samples.")]
        [Range(3f, 60f)] public float reBaselineWindowSeconds = PConfig.ReBaselineWindowSeconds;
        [Tooltip("Between-trial gaze further than this from the current reference is rejected as a look-away rather than absorbed into the baseline. " +
                 "Must be tight: at 15 deg a ~10 deg between-trial wander was absorbed, stranding the reference and causing false 'looking_away' " +
                 "failures once the subject returned to the dot (2026-07-29 session).")]
        [Range(3f, 30f)] public float reBaselineInlierDeg = PConfig.ReBaselineInlierDeg;
        [Tooltip("Maximum speed the reference may move — bounds the damage from a wander just under the inlier band. " +
                 "Too fast lets false positives through (1.2 deg/s -> 5.5 deg); too slow stops tracking real drift (0.5 deg/s can't follow 0.5 deg/s drift).")]
        [Range(0.1f, 5f)] public float reBaselineMaxRateDegPerSec = PConfig.ReBaselineMaxRateDegPerSec;
        [Tooltip("Safety bound: if the reference wanders further than this from the initial calibration, disarm the gate and log it rather than failing trials against a reference that has run away.\n\n" +
                 "NOTE the interaction with Gaze Tolerance: a reference stranded X deg from truth can produce up to X deg of false deviation, so false failures become possible once this exceeds the tolerance. " +
                 "At 8 deg with a 5 deg tolerance there is a window where false failures can still occur before the guard trips. Set this at or below the tolerance to close that window, " +
                 "at the cost of disarming more often on sessions with genuine drift.")]
        [Range(2f, 60f)] public float maxTotalDriftDeg = PConfig.MaxTotalDriftDeg;
        [Tooltip("Safety bound: if no drift update lands for this long, disarm the gate and log it.")]
        [Range(10f, 300f)] public float reBaselineStallTimeoutSeconds = PConfig.ReBaselineStallTimeoutSeconds;
        [Tooltip("Once disarmed, re-arm the gate if the reference returns below this fraction of the drift bound and stays there. Prevents one excursion from disabling the gate for the rest of the session.")]
        [Range(0.1f, 1f)] public float gateRearmFraction = PConfig.GateRearmFraction;
        [Tooltip("How long the reference must stay healthy before the gate re-arms.")]
        [Range(0f, 30f)] public float gateRearmHoldSeconds = PConfig.GateRearmHoldSeconds;

        [Space(6)]
        [Tooltip("Show a live deviation readout + gaze reticle in-headset and draw the gaze ray in Scene view. Setup/validation only — turn OFF for real sessions.")]
        public bool showGazeDebug = false;
        [Tooltip("Run the known-eccentricity gaze VALIDATION routine INSTEAD of the experiment: look at each target (0° and ~20°) and confirm the logged deviation matches.")]
        public bool gazeValidationMode = false;

        [Space(10)]
        [Header("Audio Cues")]
        [Tooltip("Beep before each trial and double-beep when the measured window closes, so the " +
                 "participant knows when they must hold fixation and when they may blink again. " +
                 "Ported from the reference FOVE rig; needs Assets/Resources/beep2.mp3.")]
        public bool enableAudioCues = true;
        [Tooltip("Gap between the warning beep and the moment the trial arms. Long enough to react, " +
                 "short enough that the cue still reads as 'this trial', not 'some trial'.")]
        [Range(0f, 2f)] public float cueLeadSeconds = PConfig.CueLeadSeconds;

        [Space(10)]
        [Header("Participant Screens")]
        [Tooltip("How long the instruction screen is shown before dark adaptation begins.")]
        public float instructionsSeconds = PConfig.InstructionsSeconds;
        [Tooltip("Hide the baseline countdown for this many seconds before the first trial. The screen is the " +
                 "only light source here, so a countdown running to the last second is light shining into the " +
                 "dark-adaptation period being measured.")]
        [Range(0f, 30f)] public float baselineQuietTailSeconds = PConfig.BaselineQuietTailSeconds;
        [Tooltip("How long the closing screen is held before the app exits.")]
        public float finishScreenSeconds = PConfig.FinishScreenSeconds;

        [Space(10)]
        [Header("Other Options")]
        public float waitBeforeStart = PConfig.WaitBeforeStart;
        public float delayBetweenTypes = PConfig.DelayBetweenTypes;
        [Tooltip("How many times a failed trial may be re-presented before it is abandoned and logged as TrialAbandoned.")]
        public int maxRetests = PConfig.MaxRetests;
        [Tooltip("Fail a trial if the subject blinks during the pre-stimulus window, before the stimulus appears. This was previously always on but only implicitly, because the trial state was created before the wait.")]
        public bool failOnPreStimulusBlink = true;
        [Tooltip("Log per-trial and per-object detail. Leave OFF for real sessions — session milestones, " +
                 "warnings and errors are always logged regardless of this setting.")]
        public bool verboseLogging = false;

        // File streaming
        private string participantId = "anon";
        private StreamWriter fileWriter;
        private float sessionStartTime;
        private string sessionFilePath;
        private bool isRecording = false;
        private int dataPointCount = 0;

        // Cached references
        private EyeManager eyeManager;
        private Transform headTransform; // Used to track head rotation for vectors

        // Eye under test, resolved once at session start. Never EyeUnderTest.Auto after that.
        private EyeUnderTest activeEye = EyeUnderTest.Both;
        private bool MeasuringLeft => activeEye == EyeUnderTest.Left || activeEye == EyeUnderTest.Both;
        private bool MeasuringRight => activeEye == EyeUnderTest.Right || activeEye == EyeUnderTest.Both;

        // ------------------------------
        // Operator control (driven from the web monitor; all calls arrive on the main thread)
        // ------------------------------

        private bool operatorStartRequested;
        private bool awaitingOperatorStart;

        /// <summary>True while the session is parked waiting for the operator to press Start.</summary>
        public bool AwaitingOperatorStart => awaitingOperatorStart;

        /// <summary>
        /// Config is frozen once the trial sequence begins. Changing stimulus luminance mid-session
        /// would silently split the data into two protocols, which is not something a UI should
        /// allow by accident.
        /// </summary>
        public bool ConfigLocked { get; private set; }

        /// <summary>Operator pressed Start. Ignored once the session is already running.</summary>
        public void RequestOperatorStart()
        {
            if (!awaitingOperatorStart)
            {
                Debug.LogWarning("[PupilDataRecorder] Start requested but the session is not waiting for it.");
                return;
            }
            operatorStartRequested = true;
            Debug.Log("[PupilDataRecorder] Operator pressed Start.");
        }

        /// <summary>
        /// Apply operator-set values. Only keys present are touched, so the page can send one field
        /// at a time. Returns a human-readable summary for the log; refuses once config is locked.
        /// </summary>
        public string ApplyOperatorConfig(Dictionary<string, string> args)
        {
            if (args == null || args.Count == 0) return "no values";
            if (ConfigLocked) return "rejected: session already running";

            List<string> changed = new List<string>();

            if (TryLuminance(args, "short_red", ref shortRedLuminance)) changed.Add($"short_red={shortRedLuminance:F2}");
            if (TryLuminance(args, "short_blue", ref shortBlueLuminance)) changed.Add($"short_blue={shortBlueLuminance:F2}");
            if (TryLuminance(args, "long_red", ref longRedLuminance)) changed.Add($"long_red={longRedLuminance:F2}");
            if (TryLuminance(args, "long_blue", ref longBlueLuminance)) changed.Add($"long_blue={longBlueLuminance:F2}");

            if (args.TryGetValue("eye", out string eyeRaw))
            {
                foreach (EyeUnderTest candidate in (EyeUnderTest[])Enum.GetValues(typeof(EyeUnderTest)))
                {
                    if (string.Equals(candidate.ToString(), eyeRaw, StringComparison.OrdinalIgnoreCase))
                    {
                        eyeUnderTest = candidate;
                        changed.Add($"eye={candidate}");
                        break;
                    }
                }
            }

            if (changed.Count == 0) return "no recognised values";

            SyncStimulusLuminance();
            string summary = string.Join(" ", changed.ToArray());
            Debug.Log($"[PupilDataRecorder] Operator config: {summary}");
            LogEvent("OperatorConfig", summary);
            return summary;
        }

        private static bool TryLuminance(Dictionary<string, string> args, string key, ref float target)
        {
            if (!args.TryGetValue(key, out string raw)) return false;
            if (!float.TryParse(raw, NumberStyles.Float, CultureInfo.InvariantCulture, out float value)) return false;
            target = Mathf.Clamp01(value);
            return true;
        }

        /// <summary>
        /// Push the current luminance fields onto the built stimuli. Needed because StimulusType
        /// caches its luminance at creation time, which happens in Start() — long before the
        /// operator has had a chance to set anything.
        /// </summary>
        private void SyncStimulusLuminance()
        {
            if (stimArray == null) return;
            foreach (StimulusType s in stimArray)
            {
                switch (s.kind)
                {
                    case StimulusKind.ShortRed: s.baseLuminance = shortRedLuminance; break;
                    case StimulusKind.ShortBlue: s.baseLuminance = shortBlueLuminance; break;
                    case StimulusKind.LongRed: s.baseLuminance = longRedLuminance; break;
                    case StimulusKind.LongBlue: s.baseLuminance = longBlueLuminance; break;
                }
            }
        }

        /// <summary>
        /// Park until the operator presses Start on the web monitor. Skipped when the server is not
        /// actually serving — otherwise a server that failed to bind would leave the participant
        /// sitting in a headset forever with no way to proceed.
        /// </summary>
        private IEnumerator WaitForOperatorStart(OperatorStatusServer server)
        {
            if (!requireOperatorStart) yield break;

            if (server == null || !server.IsRunning)
            {
                Debug.LogWarning("[PupilDataRecorder] requireOperatorStart is on but the operator server is not running — starting without it.");
                yield break;
            }

            awaitingOperatorStart = true;
            currentPhase = "waiting for operator";
            ui.ShowWaitingForOperator(participantId, server.Url);
            Debug.Log($"[PupilDataRecorder] Waiting for operator to press Start at {server.Url}");

            float waited = 0f;
            while (!operatorStartRequested)
            {
                if (operatorStartTimeoutSeconds > 0f && waited >= operatorStartTimeoutSeconds)
                {
                    Debug.LogWarning($"[PupilDataRecorder] No operator Start within {operatorStartTimeoutSeconds:F0}s — starting anyway.");
                    break;
                }
                waited += Time.deltaTime;
                yield return null;
            }

            awaitingOperatorStart = false;
            ui.Clear();
        }

        /// <summary>Eye actually being measured, after Auto has resolved. Valid from session start.</summary>
        public EyeUnderTest ResolvedEye => activeEye;

        /// <summary>Ophthalmic code for the resolved eye: OD / OS / OU.</summary>
        public string ResolvedEyeCode => EyeCode();

        /// <summary>Ophthalmic code for the eye under test: OD right, OS left, OU both.</summary>
        private string EyeCode()
        {
            switch (activeEye)
            {
                case EyeUnderTest.Left: return "OS";
                case EyeUnderTest.Right: return "OD";
                default: return "OU";
            }
        }

        /// <summary>
        /// Gaze direction used for the fixation gate. In monocular mode the fellow eye is
        /// patched, so combined gaze is either invalid or pulled toward a non-seeing eye —
        /// the gate has to follow the eye actually doing the looking.
        /// </summary>
        private bool TryGetGateGaze(out Vector3 dir)
        {
            dir = Vector3.forward;
            if (eyeManager == null) return false;

            switch (activeEye)
            {
                case EyeUnderTest.Left: return eyeManager.GetLeftEyeDirectionNormalized(out dir);
                case EyeUnderTest.Right: return eyeManager.GetRightEyeDirectionNormalized(out dir);
                default: return eyeManager.GetCombindedEyeDirectionNormalized(out dir);
            }
        }

        // Paradigm States
        private SessionUI ui; // participant-facing canvas, copy and fixation dot
        private AudioInstructions audioCues; // trial start / trial end tones; null when disabled
        private List<StimulusType> stimArray;
        private int testCaseId = 1;
        private Queue<TestCase> testCasesQueue;
        private TrialState currentTrial;
        private GameObject currentSphere;
        private Dictionary<int, FailedPosition> failedPositions;
        
        // Instantaneous Event Storage (written to CSV then cleared)
        private string currentEventString = "";

        // Brightness held across stim-on + sampling window for analysis; 0 between trials.
        private float currentStimulusBrightness = 0f;

        // Gaze fixation monitoring
        private GazeFixationMonitor gazeMonitor;
        private GazeBaselineTracker baselineTracker;
        private Vector3 centerReferenceLocal = Vector3.forward; // head-local "looking at fixation" dir; seeded by calibration, then tracked
        private bool gazeCalibrated = false; // true only after a successful center-bias capture
        private bool locationSpacePinned = false;
        private float currentGazeDeviationDeg = -1f;    // per-frame, drift-corrected; -1 = gaze invalid this frame
        private float currentGazeDeviationRawDeg = -1f; // per-frame, vs raw head forward; -1 = gaze invalid this frame
        private float currentGazeBiasDeg = 0f;          // how far the rolling reference sits from head forward
        private bool currentGazeOffTarget = false;
        private SampleQuality currentSampleQuality = SampleQuality.Ok;
        private bool gazeGateDisarmed = false;          // tripped by a drift/stall guard; latched + logged once
        private UnityEngine.UI.Image gazeReticle;   // debug-only
        private UnityEngine.UI.Text gazeDebugText;  // debug-only

        // Cached because FindObjectOfType is a full scene scan and this used to run every frame.
        private LightConditionController lightController;

        // Session tallies (also the basis for the operator view).
        private int trialsCompleted = 0;
        private int trialsFailed = 0;
        private int trialsAbandoned = 0;

        // Live session state, surfaced to the operator web view.
        private string currentPhase = "starting";
        private string currentStimulusName = "";
        private string currentPositionLabel = "";
        private int currentTestCaseId = 0;
        private int samplesOk = 0;
        private int samplesBlink = 0;
        private int samplesTrackingLost = 0;
        private const int RecentEventCapacity = 12;
        private readonly List<string> recentEvents = new List<string>(RecentEventCapacity);

        // False between trial start and stimulus onset — i.e. during the pre-stimulus window.
        private bool trialStimulusHasAppeared = false;

        // Bias at the last GazeReBaseline event, so drift is logged on movement rather than on a timer.
        private float lastLoggedBiasDeg = float.NaN;

        // When the reference first became healthy again after a disarm; -1 = not currently eligible.
        private float gateRearmEligibleSince = -1f;

        /// <summary>
        /// Whether eye loss / gaze break should fail the current trial right now. Before the
        /// stimulus appears this is governed by failOnPreStimulusBlink; previously the
        /// pre-stimulus window always failed, purely as a side effect of creating the trial
        /// state before the wait.
        /// </summary>
        private bool TrialFailuresArmed()
        {
            return trialStimulusHasAppeared || failOnPreStimulusBlink;
        }

        /// <summary>
        /// True when a failure right now should invalidate the current trial. `active` goes false
        /// once the measured window closes — which for a long stimulus is before the light goes
        /// out, so a blink during that tail is not a failure.
        /// </summary>
        private bool TrialArmed()
        {
            return currentTrial != null && currentTrial.active && TrialFailuresArmed();
        }

        private void Start()
        {
            // Try to find head transform (Main Camera is standard in VR setups)
            Camera cam = Camera.main;
            if (cam == null) cam = FindObjectOfType<Camera>();
            headTransform = cam != null ? cam.transform : transform;
            LogVerbose($"[PupilDataRecorder] headTransform resolved to: {headTransform.name} pos={headTransform.position}");

            // Activate eye expressions for blink detection
            Wave.OpenXR.InputDeviceEye.ActivateEyeExpression(true);
            LogVerbose("[PupilDataRecorder] Eye expression tracking activated for blink detection.");

            // Visuals first — the participant prompt needs the canvas to show instructions,
            // and the file cannot be opened until the participant ID is known (it's in the name).
            ui = GetComponent<SessionUI>();
            if (ui == null) ui = gameObject.AddComponent<SessionUI>();
            ui.Build(headTransform, fixationLightSize, fixationLightLuminance);

            // Audio, not text: on a rig that measures pupil response to light, an on-screen
            // "hold still" would be a luminance step change inside the measurement.
            if (enableAudioCues)
            {
                audioCues = GetComponent<AudioInstructions>();
                if (audioCues == null) audioCues = gameObject.AddComponent<AudioInstructions>();
            }

            CreateStimuli();
            if (showGazeDebug) CreateGazeDebugVisuals();

            // Cached once — this used to be a FindObjectOfType on every recorded frame.
            lightController = FindObjectOfType<LightConditionController>();
            if (lightController != null) lightController.ConditionChanged += OnLightConditionChanged;

            gazeMonitor = new GazeFixationMonitor(gazeToleranceDeg, gazeDebounceSeconds);
            baselineTracker = new GazeBaselineTracker
            {
                windowSeconds = reBaselineWindowSeconds,
                inlierDeg = reBaselineInlierDeg,
                maxRateDegPerSec = reBaselineMaxRateDegPerSec
            };

            StartCoroutine(RunSession());
        }

        /// <summary>
        /// Identify the participant, open the file, then run the paradigm. Recording cannot begin
        /// until the ID is known because it is part of the filename, and Update() no-ops while
        /// fileWriter is still null.
        /// </summary>
        private IEnumerator RunSession()
        {
            currentPhase = "participant id";
            yield return StartCoroutine(ResolveParticipantId());

            // Resolved before the gate so the waiting screen can show the operator where to go.
            OperatorStatusServer server = FindObjectOfType<OperatorStatusServer>();
            if (server != null && server.IsRunning)
                Debug.Log($"[PupilDataRecorder] Operator monitor: {server.Url}");

            // The participant is now identified and seated; the operator sets stimulus levels and
            // presses Start from the web monitor.
            bool gated = requireOperatorStart && server != null && server.IsRunning;
            yield return StartCoroutine(WaitForOperatorStart(server));

            // Everything the operator can change is frozen here, before the sidecar is written —
            // the metadata has to describe the session that actually runs.
            ConfigLocked = true;
            SyncStimulusLuminance();

            if (!gated)
            {
                ui.ShowIdConfirmed(participantId, server != null && server.IsRunning ? server.Url : null);
                yield return new WaitForSeconds(3.0f);
                ui.Clear();
            }

            // Before the file is opened — the eye code is part of the filename.
            currentPhase = "eye detection";
            yield return StartCoroutine(ResolveEyeUnderTest());

            if (!OpenSessionFile()) yield break;

            SessionMetadata.Write(sessionFilePath, participantId, this);

            if (server != null && server.IsRunning) LogEvent("OperatorMonitor", $"url={server.Url}");

            LogEvent("SessionConfig",
                $"participant={participantId} version={currentVersion} schema_version={SessionCsvSchema.SchemaVersion} " +
                $"eye={EyeCode()} eye_mode={activeEye} protocol={protocol} group={subjectGroup} " +
                $"lum_short_red={shortRedLuminance:F2} lum_short_blue={shortBlueLuminance:F2} " +
                $"lum_long_red={longRedLuminance:F2} lum_long_blue={longBlueLuminance:F2} " +
                $"operator_start={gated} randomize_brightness={randomizeBrightness} " +
                $"audio_cues={(audioCues != null)} cue_lead_s={cueLeadSeconds:F2} " +
                $"sidecar={Path.GetFileName(SessionMetadata.SidecarPathFor(sessionFilePath))}");

            if (gazeValidationMode) yield return StartCoroutine(RunGazeValidationSequence());
            else yield return StartCoroutine(ShowStimuliSequence());
        }

        private IEnumerator ResolveParticipantId()
        {
            participantId = ParticipantIdPrompt.Sanitize(participantIdFallback, "anon");

            if (!askForParticipantId)
            {
                Debug.Log($"[PupilDataRecorder] Participant prompt disabled; using '{participantId}'.");
                yield break;
            }

            // The Wave IME is a device service — in the Editor it never calls back, so prompting
            // there would just stall for the whole timeout before falling back anyway.
            if (Application.isEditor)
            {
                LogVerbose($"[PupilDataRecorder] Editor play mode: skipping in-headset ID prompt, using '{participantId}'.");
                yield break;
            }

            ui.ShowIdEntry();

            ParticipantIdPrompt prompt = new ParticipantIdPrompt();
            yield return StartCoroutine(prompt.Prompt("Participant ID", "", participantPromptTimeoutSeconds));

            if (prompt.Succeeded)
            {
                participantId = ParticipantIdPrompt.Sanitize(prompt.Result, participantId);
                Debug.Log($"[PupilDataRecorder] Participant ID: '{participantId}' (typed: '{prompt.Result}')");
            }
            else
            {
                Debug.LogWarning($"[PupilDataRecorder] Participant ID not captured ({prompt.FailureReason}); using '{participantId}'.");
            }

            ui.ShowIdConfirmed(participantId, null);
            yield return new WaitForSeconds(2.0f);
            ui.Clear();
        }

        /// <summary>
        /// Decide which eye this session measures. Auto counts valid pupil frames per eye for a
        /// few seconds and picks the eye that is actually open — a patched eye returns none.
        ///
        /// If BOTH eyes report valid data the patch is missing, so this stays binocular and says
        /// so loudly rather than silently labelling a binocular exposure as monocular. The
        /// reference rig picks one anyway and only warns; a mislabelled session is worse than an
        /// honestly-binocular one.
        /// </summary>
        private IEnumerator ResolveEyeUnderTest()
        {
            if (eyeUnderTest != EyeUnderTest.Auto)
            {
                activeEye = eyeUnderTest;
                Debug.Log($"[PupilDataRecorder] Eye under test set explicitly: {activeEye} ({EyeCode()}).");
                ApplySoftwareOcclusion();
                yield break;
            }

            activeEye = EyeUnderTest.Both; // safe default if detection cannot run

            // Update() has not acquired the EyeManager yet (it waits on fileWriter, which waits on
            // this), so acquire it here.
            float guard = 0f;
            while (guard < 10f)
            {
                if (eyeManager == null) eyeManager = EyeManager.Instance;
                if (eyeManager != null && eyeManager.IsEyeTrackingAvailable()) break;
                guard += Time.deltaTime;
                yield return null;
            }

            if (eyeManager == null || !eyeManager.IsEyeTrackingAvailable())
            {
                Debug.LogWarning("[PupilDataRecorder] Eye detection skipped: eye tracking unavailable. Recording binocular (OU).");
                yield break;
            }

            int leftValid = 0, rightValid = 0, frames = 0;
            float t = 0f;
            while (t < eyeDetectionSeconds)
            {
                if (eyeManager.GetLeftEyePupilDiameter(out float ld) && ld > 0f) leftValid++;
                if (eyeManager.GetRightEyePupilDiameter(out float rd) && rd > 0f) rightValid++;
                frames++;
                t += Time.deltaTime;
                yield return null;
            }

            int threshold = Mathf.Max(1, Mathf.RoundToInt(frames * PConfig.EyeOpenFrameFraction));
            bool leftOpen = leftValid >= threshold;
            bool rightOpen = rightValid >= threshold;

            if (leftOpen && rightOpen)
            {
                activeEye = EyeUnderTest.Both;
                Debug.LogWarning($"[PupilDataRecorder] Both eyes returned valid pupil data " +
                                 $"(L {leftValid}/{frames}, R {rightValid}/{frames}). No patch detected — " +
                                 $"recording BINOCULAR (OU). Patch the fellow eye, or set Eye Under Test explicitly.");
            }
            else if (leftOpen) activeEye = EyeUnderTest.Left;
            else if (rightOpen) activeEye = EyeUnderTest.Right;
            else
            {
                activeEye = EyeUnderTest.Both;
                Debug.LogWarning($"[PupilDataRecorder] Neither eye returned usable pupil data " +
                                 $"(L {leftValid}/{frames}, R {rightValid}/{frames}). Check headset fit. Recording binocular (OU).");
            }

            Debug.Log($"[PupilDataRecorder] Eye under test: {activeEye} ({EyeCode()}) — " +
                      $"valid frames L {leftValid}/{frames}, R {rightValid}/{frames}.");
            ApplySoftwareOcclusion();
        }

        /// <summary>
        /// Optionally blank the fellow eye by restricting the camera to one eye. OFF by default:
        /// it changes the XR render path and is unverified on this headset, and with a physical
        /// patch it is redundant anyway.
        /// </summary>
        private void ApplySoftwareOcclusion()
        {
            if (!occludeFellowEyeInSoftware) return;
            if (activeEye == EyeUnderTest.Both) return;

            Camera cam = headTransform != null ? headTransform.GetComponent<Camera>() : null;
            if (cam == null) cam = Camera.main;
            if (cam == null)
            {
                Debug.LogWarning("[PupilDataRecorder] Software occlusion requested but no camera found.");
                return;
            }

            cam.stereoTargetEye = activeEye == EyeUnderTest.Left
                ? StereoTargetEyeMask.Left
                : StereoTargetEyeMask.Right;
            Debug.LogWarning($"[PupilDataRecorder] Software occlusion ON: camera restricted to {cam.stereoTargetEye}. " +
                             "Verify on device that the fellow eye is black and the tested eye still renders.");
        }

        private bool OpenSessionFile()
        {
            // subject_eye_protocol_datetime — the naming the reference team asked for, so a file
            // says which eye it measured without opening it. Protocol is omitted when unset.
            string protocolPart = string.IsNullOrEmpty(ParticipantIdPrompt.Sanitize(protocol, ""))
                ? ""
                : ParticipantIdPrompt.Sanitize(protocol, "") + "_";
            sessionFilePath = GetFilePath(
                $"pupil_{participantId}_{EyeCode()}_{protocolPart}{DateTime.Now:yyyyMMdd_HHmmss}.csv");

            try
            {
                string directory = Path.GetDirectoryName(sessionFilePath);
                if (!Directory.Exists(directory))
                {
                    Directory.CreateDirectory(directory);
                }

                // Open file for writing with auto-flush
                fileWriter = new StreamWriter(sessionFilePath, false);
                fileWriter.AutoFlush = true; // Ensures data is written immediately

                // Write header (shared with VideoSessionRecorder — see SessionCsvSchema)
                fileWriter.WriteLine(SessionCsvSchema.Header);

                Debug.Log($"[PupilDataRecorder] Session started. Streaming data to: {sessionFilePath}");
                return true;
            }
            catch (Exception e)
            {
                Debug.LogError($"[PupilDataRecorder] Failed to create file: {e.Message}");
                enableRecording = false;
                return false;
            }
        }

        private void Update()
        {
            UpdateHeadLockedVisuals();

            if (!enableRecording || fileWriter == null) return;

            // Get EyeManager instance
            if (eyeManager == null)
            {
                eyeManager = EyeManager.Instance;
                if (eyeManager == null) return;
            }

            // Pin gaze to WORLD space (the SDK default, but a serialized field a sample can flip).
            // We compare gaze against headTransform.forward in world space, so this must hold.
            if (!locationSpacePinned)
            {
                eyeManager.LocationSpace = EyeManager.EyeSpace.World;
                locationSpacePinned = true;
                LogVerbose($"[PupilDataRecorder] EyeManager.LocationSpace pinned to {eyeManager.LocationSpace}, NormalizeZ={eyeManager.NormalizeZ}");
            }

            // Check if eye tracking is available
            if (!eyeManager.IsEyeTrackingAvailable())
            {
                return;
            }

            // Start recording once eye tracking becomes available
            if (!isRecording)
            {
                isRecording = true;
                sessionStartTime = Time.time;
                Debug.Log("[PupilDataRecorder] Eye tracking available. Recording started.");
            }

            // Evaluate Blink State & Record Data Point
            SamplePupilAndWriteDataPoint();
        }

        // ------------------------------
        // Paradigm Logic (Coroutines)
        // ------------------------------
        IEnumerator ShowStimuliSequence()
        {
            currentPhase = "instructions";
            ui.ShowInstructions();
            yield return new WaitForSeconds(instructionsSeconds);

            currentPhase = "baseline";
            float waitTimer = waitBeforeStart;
            while (waitTimer > 0)
            {
                // Copy is withheld for the tail of dark adaptation — a lit countdown running right
                // up to the first trial is light shining into the measurement.
                ui.ShowBaseline(waitTimer, baselineQuietTailSeconds);
                yield return new WaitForSeconds(1.0f);
                waitTimer -= 1.0f;
            }
            ui.Clear();

            // Calibrate AFTER baseline: eye tracking is warm and the subject is settled on the dot.
            // (Running it at t=0 captured 0 valid samples and fell back to forward -> uncorrected ~10° offset.)
            yield return StartCoroutine(CalibrateCenterReference());

            ui.ShowTrialsRunning(); // trials run with nothing on screen but the fixation dot

            // One tone to mark the transition out of dark adaptation into the trial sequence.
            if (audioCues != null) audioCues.PlayStart();
            LogEvent("TrialsStart", $"eye={EyeCode()} blocks={stimArray.Count} positions={vectorPositions.Length}");

            yield return new WaitForSeconds(2.0f);

            for (int i = 0; i < stimArray.Count; i++)
            {
                StimulusType stim = stimArray[i];

                EnqueuePositions(stim);
                currentSphere = stim.sphere;
                currentStimulusName = stim.name;
                currentPhase = $"block {i + 1}/{stimArray.Count}: {stim.name}";
                failedPositions = new Dictionary<int, FailedPosition>();

                while (testCasesQueue.Count > 0)
                {
                    TestCase testCase = testCasesQueue.Dequeue();
                    Vector3 offsetPosition = testCase.position;
                    currentTestCaseId = testCase.id;
                    currentPositionLabel = $"({offsetPosition.x:F2}, {offsetPosition.y:F2})";

                    // Warn before the no-blink window opens, then arm the trial — the participant
                    // cannot comply with a fixation requirement they were never told about.
                    if (audioCues != null) audioCues.PlayBeep();
                    if (cueLeadSeconds > 0f) yield return new WaitForSeconds(cueLeadSeconds);

                    currentTrial = new TrialState();
                    trialStimulusHasAppeared = false;
                    if (gazeMonitor != null) gazeMonitor.Reset(); // fresh debounce per trial

                    yield return new WaitForSeconds(preStimulusWindow);

                    float trialBrightness = testCase.brightness;
                    ApplyBrightness(stim, trialBrightness);
                    currentStimulusBrightness = trialBrightness;

                    currentSphere.SetActive(true);
                    trialStimulusHasAppeared = true;
                    StartCoroutine(UpdateSpherePosition(currentSphere, offsetPosition));
                    LogEvent("Start", $"Start {stim.name} sphere for {stim.duration} seconds in {offsetPosition} test_case_id={testCase.id} brightness={trialBrightness:F2}");
                    LogVerbose($"[PupilDataRecorder] Sphere {stim.name} ACTIVATED at {offsetPosition}, brightness={trialBrightness:F2}, color={stim.image.color}, activeInHierarchy={currentSphere.activeInHierarchy}");

                    // Sampling windows run from ONSET, matching the reference rig. A short trial's
                    // light is out well before the window closes; a long trial's window closes
                    // while the light is still on, and the subject is released at that point.
                    // Waits are UNCONDITIONAL, even once the trial has failed. A failed trial that
                    // ended early would deliver less light and less recovery time than a clean one,
                    // and the retest would start from a different adaptation state. Immediate
                    // feedback comes from the error tone, which fires the moment the failure is
                    // detected — the timeline does not need to change to deliver it.
                    bool isShort = stim.duration < stim.samplingWindow;

                    if (isShort)
                    {
                        yield return new WaitForSeconds(stim.duration);

                        currentSphere.SetActive(false);
                        currentStimulusBrightness = 0f;
                        LogEvent("Stop", $"Stop {stim.name} sphere in {offsetPosition} test_case_id={testCase.id} brightness={trialBrightness:F2}");

                        yield return new WaitForSeconds(Mathf.Max(0f, stim.samplingWindow - stim.duration));

                        CloseMeasuredWindow();
                        yield return new WaitForSeconds(PostWindowSettleSeconds);
                    }
                    else
                    {
                        yield return new WaitForSeconds(stim.samplingWindow);

                        // Released here: the remaining seconds of a long stimulus are not measured,
                        // and holding a blink for the whole 5 s is not something a subject can do.
                        CloseMeasuredWindow();

                        yield return new WaitForSeconds(Mathf.Max(0f, stim.duration - stim.samplingWindow));

                        currentSphere.SetActive(false);
                        currentStimulusBrightness = 0f;
                        LogEvent("Stop", $"Stop {stim.name} sphere in {offsetPosition} test_case_id={testCase.id} brightness={trialBrightness:F2}");
                    }

                    if (currentTrial.failed)
                    {
                        trialsFailed++;
                        string reason = currentTrial.failedReason;
                        bool requeued = HandleFail(testCase, out int repeat, out FailedPosition fp);
                        LogEvent("FAIL", $"FAIL stimulus={stim.name} position={offsetPosition} test_case_id={testCase.id} reason={reason} repeat_number={repeat} requeued={requeued}");

                        // A test case that exhausts its retests used to vanish silently, so analysis
                        // could not tell an abandoned condition from one that was never scheduled.
                        if (!requeued)
                        {
                            trialsAbandoned++;
                            string history = fp != null ? string.Join("|", fp.history) : reason;
                            Debug.LogWarning($"[PupilDataRecorder] Trial ABANDONED after {repeat} attempts: {stim.name} at {offsetPosition} (test_case_id={testCase.id}); reasons: {history}");
                            LogEvent("TrialAbandoned", $"stimulus={stim.name} position={offsetPosition} test_case_id={testCase.id} attempts={repeat} max_retests={maxRetests} reasons={history}");
                        }

                        ui.ShowRetry(reason);

                        // Give them a moment to read the message before continuing the interval
                        yield return new WaitForSeconds(1.5f);
                        ui.Clear();
                    }
                    else
                    {
                        trialsCompleted++;
                    }

                    currentTrial = null;
                    currentStimulusBrightness = 0f;
                    yield return new WaitForSeconds(IntervalWait(stim));
                }

                if (i < stimArray.Count - 1)
                {
                    currentPhase = "rest between blocks";
                    currentStimulusName = "";
                    currentPositionLabel = "";

                    float rest = delayBetweenTypes;
                    while (rest > 0f)
                    {
                        ui.ShowRest(rest);
                        yield return new WaitForSeconds(1.0f);
                        rest -= 1.0f;
                    }
                    ui.Clear();
                }
            }
            
            // Hold the closing screen briefly — EndRun() quits the app, so without this the
            // participant never actually sees it.
            ui.ShowFinished();
            yield return new WaitForSeconds(finishScreenSeconds);
            EndRun();
        }

        /// <summary>
        /// Record the failure and decide whether the test case gets another attempt.
        /// Returns true if it was re-enqueued, false if its retests are exhausted.
        ///
        /// The old bound was `fp.repeat &lt;= maxRetests + 1`, which kept re-enqueueing while
        /// repeat was 0..4 — five retests for a configured maxRetests of 3.
        /// </summary>
        private bool HandleFail(TestCase testCase, out int repeat, out FailedPosition fp)
        {
            if (!failedPositions.TryGetValue(testCase.id, out fp))
            {
                fp = new FailedPosition();
                failedPositions[testCase.id] = fp;
            }

            fp.AddFailure(currentTrial.failedReason);
            repeat = fp.repeat;

            bool requeue = fp.repeat <= maxRetests;
            if (requeue) testCasesQueue.Enqueue(testCase);
            return requeue;
        }

        IEnumerator UpdateSpherePosition(GameObject sphere, Vector3 offsetPosition)
        {
            // Position the UI element on the canvas using RectTransform
            // offsetPosition.x and .y are in meters; canvas scale is 0.001 so multiply by 1000 to get canvas units
            RectTransform rt = sphere.GetComponent<RectTransform>();
            if (rt != null)
            {
                rt.anchoredPosition = new Vector2(offsetPosition.x * 1000f, offsetPosition.y * 1000f);
            }
            // No continuous update needed since the canvas is head-locked in Update()
            yield break;
        }

        /// <summary>
        /// Ends the measured window: the participant is no longer required to hold fixation, and
        /// the double beep tells them so. Separated out because a long stimulus reaches this point
        /// while its light is still on.
        /// </summary>
        private void CloseMeasuredWindow()
        {
            if (currentTrial != null) currentTrial.active = false;
            if (audioCues != null) audioCues.PlayDoubleBeep();
        }

        /// <summary>
        /// Gap between the end of one trial's measured window and the next trial's cue. The
        /// pre-stimulus window is subtracted because the next trial adds it back, so `interval`
        /// remains the onset-to-onset spacing the operator configured. Mirrors the reference
        /// rig's GetIntervalWait.
        /// </summary>
        private float IntervalWait(StimulusType stim)
        {
            float wait = stim.duration < stim.samplingWindow
                ? stim.interval - preStimulusWindow - (stim.samplingWindow - stim.duration)
                : stim.interval - preStimulusWindow;
            return Mathf.Max(0f, wait);
        }

        /// <summary>
        /// Pause after the double beep before the interval proper starts, so the release cue does
        /// not land on top of the next trial's warning cue. Matches the reference rig's fixed 0.5 s.
        /// </summary>
        private const float PostWindowSettleSeconds = 0.5f;

        void EnqueuePositions(StimulusType stim)
        {
            testCasesQueue = new Queue<TestCase>();
            int n = vectorPositions.Length;

            // Build a balanced brightness schedule: n levels evenly spanning [min, max], then shuffle the order.
            List<float> brightnesses = new List<float>(n);
            if (randomizeBrightness && n > 0)
            {
                float lo = Mathf.Min(minBrightness, maxBrightness);
                float hi = Mathf.Max(minBrightness, maxBrightness);
                for (int i = 0; i < n; i++)
                {
                    float t = (n == 1) ? 1f : (float)i / (n - 1);
                    brightnesses.Add(Mathf.Lerp(lo, hi, t));
                }
                // Fisher-Yates shuffle
                for (int i = n - 1; i > 0; i--)
                {
                    int j = UnityEngine.Random.Range(0, i + 1);
                    float tmp = brightnesses[i];
                    brightnesses[i] = brightnesses[j];
                    brightnesses[j] = tmp;
                }
            }
            else
            {
                // Without randomization every trial runs at this stimulus type's configured
                // luminance. It previously ran at 1.0 instead, which made the four luminance
                // fields inert in every code path — nothing on the rig could be dimmed.
                float lum = Mathf.Clamp01(stim.baseLuminance);
                for (int i = 0; i < n; i++) brightnesses.Add(lum);
            }

            LogVerbose($"[PupilDataRecorder] {stim.name} brightness schedule: [{string.Join(", ", brightnesses.ConvertAll(b => b.ToString("F2")))}]");

            for (int i = 0; i < n; i++)
            {
                testCasesQueue.Enqueue(new TestCase(testCaseId, vectorPositions[i], brightnesses[i]));
                testCaseId++;
            }
        }

        void UpdateHeadLockedVisuals()
        {
            if (ui != null) ui.UpdateHeadLock();
        }

        // ------------------------------
        // Stimulus Creation
        // (canvas, copy and fixation dot are owned by SessionUI)
        // ------------------------------

        void CreateStimuli()
        {
            stimArray = new List<StimulusType>();
            if (includeShortRed) AddStimulus("Short Red", StimulusKind.ShortRed, Color.red, shortRedCircleSize, shortRedLuminance, shortStimDuration, shortInterval, shortSamplingWindow);
            if (includeShortBlue) AddStimulus("Short Blue", StimulusKind.ShortBlue, Color.blue, shortBlueCircleSize, shortBlueLuminance, shortStimDuration, shortInterval, shortSamplingWindow);
            if (includeLongRed) AddStimulus("Long Red", StimulusKind.LongRed, Color.red, longRedCircleSize, longRedLuminance, longStimDuration, longInterval, longSamplingWindow);
            if (includeLongBlue) AddStimulus("Long Blue", StimulusKind.LongBlue, Color.blue, longBlueCircleSize, longBlueLuminance, longStimDuration, longInterval, longSamplingWindow);
            LogVerbose($"[PupilDataRecorder] Created {stimArray.Count} stimulus types");
        }

        void AddStimulus(string name, StimulusKind kind, Color color, float size, float luminance, float duration, float interval, float samplingWindow)
        {
            // Create stimulus as a UI Image on the canvas
            GameObject stimObj = new GameObject(name);
            stimObj.transform.SetParent(ui.CanvasTransform, false);
            UnityEngine.UI.Image stimImage = stimObj.AddComponent<UnityEngine.UI.Image>();

            // A bare Image draws a SQUARE quad. The reference rig presents a sphere, which reads
            // as a disc, and perimetry stimuli are circular by definition — a square of side d has
            // 4/pi (27%) more emitting area than a disc of diameter d.
            stimImage.sprite = CircleSprite();
            stimImage.type = UnityEngine.UI.Image.Type.Simple;
            stimImage.preserveAspect = true;

            // baseColor is the pure hue at full intensity — runtime brightness multiplies this.
            Color baseColor = new Color(Mathf.Clamp01(color.r), Mathf.Clamp01(color.g), Mathf.Clamp01(color.b), 1f);

            // Apply the inspector luminance, matching the reference rig (`color * luminance`,
            // clamped at 1). This used to be `Mathf.Max(luminance, 1f)`, which forced every
            // stimulus to full brightness and silently discarded the "short = low luminance"
            // distinction the field exists to express.
            Color finalColor = baseColor * Mathf.Clamp01(luminance);
            finalColor.a = 1f;
            stimImage.color = finalColor;

            // Size in canvas units: size in meters * 1000
            float sizeUnits = size * 1000f;
            stimImage.rectTransform.sizeDelta = new Vector2(sizeUnits, sizeUnits);
            stimImage.rectTransform.anchoredPosition = Vector2.zero;

            stimObj.SetActive(false); // Hidden until needed

            StimulusType stimu = new StimulusType(name, kind, stimObj, duration, interval, samplingWindow, baseColor, luminance, stimImage);
            stimArray.Add(stimu);
            LogVerbose($"[PupilDataRecorder] Created UI stimulus: {name} baseColor={baseColor} size={sizeUnits}");
        }

        // Generated once and shared. Built in code rather than shipped as an asset so the paradigm
        // still runs from a near-empty scene, which is the whole point of the auto-setup pattern.
        private static Sprite circleSprite;

        private static Sprite CircleSprite()
        {
            if (circleSprite != null) return circleSprite;

            const int res = 128;
            const float radius = res * 0.5f;
            Texture2D tex = new Texture2D(res, res, TextureFormat.RGBA32, false)
            {
                wrapMode = TextureWrapMode.Clamp,
                filterMode = FilterMode.Bilinear
            };

            Color[] pixels = new Color[res * res];
            for (int y = 0; y < res; y++)
            {
                for (int x = 0; x < res; x++)
                {
                    float dx = x + 0.5f - radius;
                    float dy = y + 0.5f - radius;
                    // One-pixel alpha feather; without it the rim aliases into a visible polygon.
                    float alpha = Mathf.Clamp01(radius - Mathf.Sqrt(dx * dx + dy * dy));
                    pixels[y * res + x] = new Color(1f, 1f, 1f, alpha);
                }
            }
            tex.SetPixels(pixels);
            tex.Apply();

            circleSprite = Sprite.Create(tex, new Rect(0f, 0f, res, res), new Vector2(0.5f, 0.5f));
            circleSprite.name = "StimulusCircle";
            return circleSprite;
        }

        private void ApplyBrightness(StimulusType stim, float brightness)
        {
            if (stim?.image == null) return;
            Color c = stim.baseColor * Mathf.Clamp01(brightness);
            c.a = 1f;
            stim.image.color = new Color(Mathf.Clamp01(c.r), Mathf.Clamp01(c.g), Mathf.Clamp01(c.b), 1f);
        }

        // ------------------------------
        // Gaze calibration & validation
        // ------------------------------

        /// <summary>
        /// Averages combined gaze (in head-local space) while the subject fixates the center
        /// dot, and stores it as centerReferenceLocal. Subtracting this static offset corrects
        /// eye-tracker calibration bias and headset slippage. Falls back to forward if disabled
        /// or too few valid samples. Runs in head-local space so it is head-orientation independent.
        /// </summary>
        IEnumerator CalibrateCenterReference()
        {
            currentPhase = "calibration";
            centerReferenceLocal = Vector3.forward;
            gazeCalibrated = false;
            if (!useCenterBiasCorrection) yield break;

            ui.ShowCalibration();

            // Wait until the combined-gaze getter actually returns VALID data. IsEyeTrackingAvailable()
            // can be true a moment before combined gaze validates, which is why the t=0 attempt got 0 samples.
            float guard = 0f;
            while (guard < 5f)
            {
                if (TryGetGateGaze(out Vector3 probe) && probe.sqrMagnitude > 1e-6f)
                    break;
                guard += Time.deltaTime;
                yield return null;
            }

            // Collect valid samples (up to 3 s or 90 samples) and average in head-local space.
            Vector3 sum = Vector3.zero;
            int samples = 0;
            float t = 0f;
            while (t < 3f && samples < 90)
            {
                if (TryGetGateGaze(out Vector3 g) && g.sqrMagnitude > 1e-6f)
                {
                    Vector3 local = Quaternion.Inverse(headTransform.rotation) * g.normalized; // world -> head-local
                    if (local.z > 0.1f) { sum += local; samples++; }
                }
                t += Time.deltaTime;
                yield return null;
            }

            if (samples >= 20)
            {
                centerReferenceLocal = (sum / samples).normalized;
                gazeCalibrated = true;
                float biasDeg = Vector3.Angle(centerReferenceLocal, Vector3.forward);

                // Seed the rolling tracker with this snapshot; from here it keeps re-estimating,
                // because this value alone decays within ~15 s.
                if (baselineTracker != null) baselineTracker.Seed(centerReferenceLocal, Time.time);
                lastLoggedBiasDeg = biasDeg;

                Debug.Log($"[PupilDataRecorder] Center-bias calibration OK: {samples} samples, offset {biasDeg:F2}° from forward. Rolling re-baseline {(useRollingReBaseline ? "ON" : "OFF")}.");

                // Record the tuning alongside the result. Without this a recorded session does not
                // say which parameters produced it, and the only way to tell two builds apart is to
                // reverse-engineer the slew limit from how fast gaze_bias_deg moves — which is
                // exactly what had to be done to diagnose the 2026-07-29 sessions.
                LogEvent("GazeCalibration",
                    $"ok samples={samples} center_bias_deg={biasDeg:F2} " +
                    $"rolling_rebaseline={useRollingReBaseline} " +
                    $"tolerance_deg={gazeToleranceDeg:F2} debounce_s={gazeDebounceSeconds:F2} " +
                    $"window_s={reBaselineWindowSeconds:F1} inlier_deg={reBaselineInlierDeg:F1} " +
                    $"max_rate_dps={reBaselineMaxRateDegPerSec:F2} max_total_drift_deg={maxTotalDriftDeg:F1} " +
                    $"stall_timeout_s={reBaselineStallTimeoutSeconds:F0} " +
                    $"reference_local=({centerReferenceLocal.x:F4};{centerReferenceLocal.y:F4};{centerReferenceLocal.z:F4})");
            }
            else
            {
                Debug.LogWarning($"[PupilDataRecorder] Center-bias calibration FAILED: only {samples} valid samples; using forward; gaze enforcement disabled this run.");
                LogEvent("GazeCalibration", $"failed samples={samples} using_forward enforcement_off");
            }

            ui.Clear();
        }

        /// <summary>
        /// Emit a GazeReBaseline event once the tracked reference has moved a meaningful amount.
        /// Logging on movement rather than on a timer keeps the event stream sparse while still
        /// making the whole drift trajectory reconstructable from the CSV afterwards.
        /// </summary>
        private void MaybeLogReBaseline()
        {
            float bias = baselineTracker.BiasDeg;
            if (float.IsNaN(lastLoggedBiasDeg) || Mathf.Abs(bias - lastLoggedBiasDeg) >= 1.0f)
            {
                lastLoggedBiasDeg = bias;
                LogEvent("GazeReBaseline",
                    $"bias_deg={bias:F2} drift_from_seed_deg={baselineTracker.DriftFromSeedDeg:F2} samples={baselineTracker.BufferedSamples}");
            }
        }

        /// <summary>
        /// Safety bounds on the rolling reference.
        ///
        /// The tracker cannot tell instrument drift from a subject sustainedly looking off-target —
        /// both look like a steady offset — so the reference can be pulled away from truth and then
        /// judge trials against the wrong direction. These bounds do not resolve that ambiguity;
        /// they cap how far it can go before the gate stops trusting itself and says so.
        ///
        /// Disarming is reversible: a single excursion should not silently disable the gate for the
        /// rest of the session, so the gate re-arms once the reference returns and stays healthy.
        /// </summary>
        private void EvaluateDriftGuards()
        {
            if (!gazeCalibrated || baselineTracker == null) return;

            float drift = baselineTracker.DriftFromSeedDeg;
            float stalled = baselineTracker.SecondsSinceUpdate(Time.time);

            if (!gazeGateDisarmed)
            {
                if (drift > maxTotalDriftDeg)
                {
                    DisarmGate("drift_exceeded",
                        $"drift_deg={drift:F2} limit_deg={maxTotalDriftDeg:F2}",
                        $"reference drifted {drift:F1}° from calibration (limit {maxTotalDriftDeg:F1}°)");
                }
                else if (stalled > reBaselineStallTimeoutSeconds)
                {
                    DisarmGate("rebaseline_stalled",
                        $"seconds_since_update={stalled:F1} limit_s={reBaselineStallTimeoutSeconds:F1}",
                        $"no drift update for {stalled:F0}s (limit {reBaselineStallTimeoutSeconds:F0}s)");
                }
                return;
            }

            // Disarmed — re-arm only after the reference has come back well inside the bound
            // (hysteresis, so it cannot flap around the threshold) and held there.
            bool healthy = drift <= maxTotalDriftDeg * gateRearmFraction
                           && stalled <= reBaselineStallTimeoutSeconds;

            if (!healthy) { gateRearmEligibleSince = -1f; return; }

            if (gateRearmEligibleSince < 0f) gateRearmEligibleSince = Time.time;

            if (Time.time - gateRearmEligibleSince >= gateRearmHoldSeconds)
            {
                gazeGateDisarmed = false;
                gateRearmEligibleSince = -1f;
                if (gazeMonitor != null) gazeMonitor.Reset(); // don't carry a stale trip into the re-armed gate
                Debug.Log($"[PupilDataRecorder] Gaze gate RE-ARMED: drift back to {drift:F1}° (under {maxTotalDriftDeg * gateRearmFraction:F1}°).");
                LogEvent("GazeGateRearmed", $"drift_deg={drift:F2} threshold_deg={maxTotalDriftDeg * gateRearmFraction:F2} held_s={gateRearmHoldSeconds:F1}");
            }
        }

        private void DisarmGate(string reason, string details, string humanReadable)
        {
            gazeGateDisarmed = true;
            gateRearmEligibleSince = -1f;
            Debug.LogWarning($"[PupilDataRecorder] Gaze gate DISARMED: {humanReadable}.");
            LogEvent("GazeGateDisarmed", $"reason={reason} {details}");
        }

        /// <summary>
        /// Validation routine (run instead of the experiment when gazeValidationMode is on).
        /// Shows a target at each known position (0° center, ~20° peripheral) and asks the
        /// subject to look directly at it; logs measured-vs-expected deviation. If "look at the
        /// 20° target" reads ~20°, the whole chain (SDK → world transform → angle) is verified.
        /// </summary>
        IEnumerator RunGazeValidationSequence()
        {
            // Layer (a): pure-math self-test — no headset needed, proves the angle function.
            RunGazeMathSelfTest();

            float guard = 0f;
            while (!isRecording && guard < 10f) { guard += Time.deltaTime; yield return null; }

            yield return StartCoroutine(CalibrateCenterReference());

            LogEvent("GazeValidationStart", $"tolerance_deg={gazeToleranceDeg} debounce_s={gazeDebounceSeconds} bias_correction={useCenterBiasCorrection}");

            GameObject target = stimArray.Count > 0 ? stimArray[0].sphere : null;

            foreach (Vector3 pos in vectorPositions)
            {
                // Expected eccentricity of this target = atan(sqrt(x^2+y^2)/z).
                float expectedDeg = Vector3.Angle(pos, Vector3.forward);

                if (target != null)
                {
                    RectTransform rt = target.GetComponent<RectTransform>();
                    if (rt != null) rt.anchoredPosition = new Vector2(pos.x * 1000f, pos.y * 1000f);
                    target.SetActive(true);
                }
                ui.ShowMessage("Look at the dot", "Look directly at the coloured dot.", MessageTone.Good);

                yield return new WaitForSeconds(1.0f); // settle / saccade to target

                // Measure mean deviation-from-center over a window (this IS the target's eccentricity).
                float sum = 0f; int n = 0; float t = 0f;
                while (t < 2.0f)
                {
                    if (currentGazeDeviationDeg >= 0f) { sum += currentGazeDeviationDeg; n++; }
                    t += Time.deltaTime;
                    yield return null;
                }
                float measured = n > 0 ? sum / n : -1f;
                string verdict = (measured >= 0f && Mathf.Abs(measured - expectedDeg) <= 3f) ? "PASS" : "CHECK";
                Debug.Log($"[PupilDataRecorder] GazeValidation pos={pos} expected={expectedDeg:F1}° measured={measured:F1}° n={n} [{verdict}]");
                LogEvent("GazeValidation", $"position={pos} expected_deg={expectedDeg:F2} measured_deg={measured:F2} n={n} verdict={verdict}");

                if (target != null) target.SetActive(false);
                yield return new WaitForSeconds(0.5f);
            }

            ui.ShowMessage("Validation complete", "", MessageTone.Good);
            Debug.Log("[PupilDataRecorder] Gaze validation complete.");
            yield return new WaitForSeconds(finishScreenSeconds);
            EndRun();
        }

        /// <summary>Layer (a): asserts the pure angle math on known inputs and logs PASS/FAIL.</summary>
        private void RunGazeMathSelfTest()
        {
            void Check(string label, float actual, float expected)
            {
                bool ok = Mathf.Abs(actual - expected) < 0.05f;
                Debug.Log($"[PupilDataRecorder] GazeMathSelfTest {label}: got {actual:F3}°, expect {expected:F3}° [{(ok ? "PASS" : "FAIL")}]");
            }
            Check("forward-vs-forward", GazeFixationMonitor.DeviationDeg(Vector3.forward, Vector3.forward), 0f);
            Check("20deg-x", GazeFixationMonitor.DeviationDeg(new Vector3(Mathf.Tan(20f * Mathf.Deg2Rad), 0f, 1f), Vector3.forward), 20f);
            Check("3.4deg-y", GazeFixationMonitor.DeviationDeg(new Vector3(0f, Mathf.Tan(3.4f * Mathf.Deg2Rad), 1f), Vector3.forward), 3.4f);
            // z-normalized (non-unit) input must still give the right angle — the bug that bit the first attempt:
            Check("znorm-20deg", GazeFixationMonitor.DeviationDeg(new Vector3(0.36397f, 0f, 1f), Vector3.forward), 20f);
        }

        // ------------------------------
        // Gaze debug visuals (showGazeDebug only)
        // ------------------------------

        private void CreateGazeDebugVisuals()
        {
            // Reticle that tracks the projected gaze point on the canvas.
            GameObject ret = new GameObject("GazeReticle");
            ret.transform.SetParent(ui.CanvasTransform, false);
            gazeReticle = ret.AddComponent<UnityEngine.UI.Image>();
            gazeReticle.color = new Color(0f, 1f, 0f, 0.6f);
            float s = 0.02f * 1000f;
            gazeReticle.rectTransform.sizeDelta = new Vector2(s, s);
            gazeReticle.rectTransform.anchoredPosition = Vector2.zero;

            GameObject txt = new GameObject("GazeDebugText");
            txt.transform.SetParent(ui.CanvasTransform, false);
            gazeDebugText = txt.AddComponent<UnityEngine.UI.Text>();
            gazeDebugText.font = Resources.GetBuiltinResource<Font>("Arial.ttf");
            gazeDebugText.fontSize = 36;
            gazeDebugText.alignment = TextAnchor.UpperCenter;
            gazeDebugText.color = Color.cyan;
            gazeDebugText.rectTransform.sizeDelta = new Vector2(1000, 120);
            gazeDebugText.rectTransform.anchoredPosition = new Vector2(0, -200);
            LogVerbose("[PupilDataRecorder] Gaze debug visuals created (reticle + readout).");
        }

        private void UpdateGazeDebugVisuals(Vector3 gazeWorld, bool gazeValid)
        {
            if (gazeReticle != null && gazeValid)
            {
                // Project gaze into head-local space, then onto the 2 m canvas plane (metres -> canvas units * 1000).
                Vector3 local = Quaternion.Inverse(headTransform.rotation) * gazeWorld;
                if (local.z > 0.05f)
                {
                    float mx = local.x / local.z * 2.0f;
                    float my = local.y / local.z * 2.0f;
                    gazeReticle.rectTransform.anchoredPosition = new Vector2(mx * 1000f, my * 1000f);
                }
                gazeReticle.color = currentGazeOffTarget ? new Color(1f, 0f, 0f, 0.7f) : new Color(0f, 1f, 0f, 0.6f);
            }

            if (gazeDebugText != null)
                gazeDebugText.text = gazeValid ? $"dev {currentGazeDeviationDeg:F1}°   tol {gazeToleranceDeg:F1}°" : "gaze invalid";

            Debug.DrawRay(headTransform.position, gazeWorld.normalized * 3f, currentGazeOffTarget ? Color.red : Color.green);
        }

        void EndRun()
        {
            currentPhase = "finished";
            currentStimulusName = "";
            currentPositionLabel = "";
            Debug.Log($"[PupilDataRecorder] Stimuli sequence finished. completed={trialsCompleted} failed={trialsFailed} abandoned={trialsAbandoned}");

            // Close explicitly rather than relying on OnApplicationQuit/OnDestroy firing before the
            // process goes away — VideoSessionRecorder already did this and the paradigm did not.
            CloseFile();

            #if UNITY_EDITOR
                UnityEditor.EditorApplication.isPlaying = false;
            #else
                Application.Quit();
            #endif
        }

        // ------------------------------
        // Data Recording & Logging
        // ------------------------------

        /// <summary>
        /// Informational logging, silenced outside verbose mode. Warnings and errors call
        /// Debug directly so they are never suppressed.
        /// </summary>
        private void LogVerbose(string message)
        {
            if (verboseLogging) Debug.Log(message);
        }

        private void LogEvent(string eventName, string details)
        {
            currentEventString = SessionCsvSchema.FormatEvent(eventName, details);
            LogVerbose($"[PupilDataRecorder] Paradigm Event: {eventName} - {details}");

            // Keep a short tail for the operator view.
            float t = isRecording ? Time.time - sessionStartTime : 0f;
            recentEvents.Add($"{t,7:F1}s|{eventName}: {details}");
            if (recentEvents.Count > RecentEventCapacity) recentEvents.RemoveAt(0);
        }

        /// <summary>
        /// Snapshot for the operator web view. Called on the main thread only; the server
        /// serialises it and hands the resulting string to its own socket thread.
        /// </summary>
        public SessionStatus GetStatus()
        {
            int totalSamples = samplesOk + samplesBlink + samplesTrackingLost;
            float inv = totalSamples > 0 ? 100f / totalSamples : 0f;

            return new SessionStatus
            {
                participantId = participantId,
                phase = currentPhase,
                elapsedSeconds = isRecording ? Time.time - sessionStartTime : 0f,
                recording = isRecording && fileWriter != null,

                stimulusName = currentStimulusName,
                stimulusPosition = currentPositionLabel,
                stimulusBrightness = currentStimulusBrightness,
                testCaseId = currentTestCaseId,

                trialsCompleted = trialsCompleted,
                trialsFailed = trialsFailed,
                trialsAbandoned = trialsAbandoned,
                trialsRemaining = testCasesQueue != null ? testCasesQueue.Count : 0,

                awaitingOperatorStart = awaitingOperatorStart,
                configLocked = ConfigLocked,
                eyeMode = eyeUnderTest.ToString(),
                eyeCode = EyeCode(),
                shortRedLuminance = shortRedLuminance,
                shortBlueLuminance = shortBlueLuminance,
                longRedLuminance = longRedLuminance,
                longBlueLuminance = longBlueLuminance,

                gazeDeviationDeg = currentGazeDeviationDeg,
                gazeBiasDeg = currentGazeBiasDeg,
                gazeOffTarget = currentGazeOffTarget,
                gateArmed = enforceGazeFixation && !gazeGateDisarmed && (gazeCalibrated || !useCenterBiasCorrection),
                calibrated = gazeCalibrated,

                qualityOkPercent = samplesOk * inv,
                qualityBlinkPercent = samplesBlink * inv,
                qualityTrackingLostPercent = samplesTrackingLost * inv,

                csvFileName = string.IsNullOrEmpty(sessionFilePath) ? "" : Path.GetFileName(sessionFilePath),
                dataPoints = dataPointCount,
                recentEvents = recentEvents
            };
        }

        private void SamplePupilAndWriteDataPoint()
        {
            float timestamp = Time.time - sessionStartTime;
            
            // Get pupil diameters (0 means invalid/blink generally, but Wave uses valid flag)
            float leftDiameter = 0f;
            float rightDiameter = 0f;
            bool leftValid = eyeManager.GetLeftEyePupilDiameter(out leftDiameter);
            bool rightValid = eyeManager.GetRightEyePupilDiameter(out rightDiameter);

            // Get blink values (0.0 = eye open, 1.0 = eye fully closed/blink)
            float leftBlink = 0f;
            float rightBlink = 0f;
            if (Wave.OpenXR.InputDeviceEye.IsEyeExpressionAvailable())
            {
                leftBlink = Wave.OpenXR.InputDeviceEye.GetEyeExpressionValue(Wave.OpenXR.InputDeviceEye.Expressions.LEFT_BLINK);
                rightBlink = Wave.OpenXR.InputDeviceEye.GetEyeExpressionValue(Wave.OpenXR.InputDeviceEye.Expressions.RIGHT_BLINK);
            }

            // Separate a genuine blink from eye-tracking loss. These used to be folded together
            // (`|| !leftValid || !rightValid`), so sustained dropouts were recorded as "blink" and
            // were indistinguishable from real blinks in analysis.
            // Only the eye(s) under test may invalidate a sample. In monocular mode the fellow eye
            // is patched, so its pupil is permanently invalid and its blink expression is whatever
            // the tracker makes of a covered eye — folding either in would fail every single trial.
            bool expressionBlink = (MeasuringLeft && leftBlink > 0.5f) || (MeasuringRight && rightBlink > 0.5f);
            bool trackingLost = (MeasuringLeft && !leftValid) || (MeasuringRight && !rightValid);

            if (expressionBlink) { currentSampleQuality = SampleQuality.Blink; samplesBlink++; }
            else if (trackingLost) { currentSampleQuality = SampleQuality.TrackingLost; samplesTrackingLost++; }
            else { currentSampleQuality = SampleQuality.Ok; samplesOk++; }

            // Both still invalidate the trial, but they are now attributed correctly.
            bool eyesUnusable = expressionBlink || trackingLost;
            if (eyesUnusable && TrialArmed())
            {
                bool wasAlreadyFailed = currentTrial.failed;
                currentTrial.Failed(expressionBlink ? "blink" : "tracking_lost");
                if (!wasAlreadyFailed && audioCues != null) audioCues.PlayError();
            }

            // Get gaze directions (honor the validity bools — the SDK writes Vector3.zero when invalid,
            // and a zero vector would read as a ~90° deviation, which previously fired "looking away" constantly).
            Vector3 leftGaze, rightGaze, combinedGaze, origin;
            eyeManager.GetLeftEyeDirectionNormalized(out leftGaze);
            eyeManager.GetRightEyeDirectionNormalized(out rightGaze);
            bool combinedGazeValid = eyeManager.GetCombindedEyeDirectionNormalized(out combinedGaze);
            eyeManager.GetCombinedEyeOrigin(out origin);

            // The gate follows the eye under test; all three gaze vectors are still logged.
            bool gateGazeValid = TryGetGateGaze(out Vector3 gateGaze);
            bool gazeValid = gateGazeValid && !eyesUnusable; // eye loss already fails the trial separately

            // --- Rolling fixation reference (drift correction) ---
            // A one-shot calibration only holds for ~15 s before the tracker's ~10° bias drifts back
            // out, which is what failed every trial as "looking_away". Between trials the subject is
            // on the fixation dot, so those frames are used to keep re-estimating the reference.
            // Mid-trial samples are deliberately excluded: a genuine look-away must never be absorbed
            // into the baseline, or the gate would quietly stop detecting anything.
            if (useRollingReBaseline && baselineTracker != null && baselineTracker.IsSeeded && currentTrial == null)
            {
                if (gazeValid)
                {
                    Vector3 gazeLocal = Quaternion.Inverse(headTransform.rotation) * gateGaze.normalized;
                    baselineTracker.AddSample(gazeLocal, Time.time);
                }

                if (baselineTracker.TryUpdate(Time.time, Time.deltaTime, out float _))
                {
                    centerReferenceLocal = baselineTracker.Reference;
                    MaybeLogReBaseline();
                }

                EvaluateDriftGuards();
            }

            // The fixation dot is head-locked at canvas center, so the world direction to it is the
            // head forward rotated by the current (tracked) fixation reference.
            Vector3 fixationDirWorld = headTransform.rotation * centerReferenceLocal;
            Vector3 headForwardWorld = headTransform.rotation * Vector3.forward;

            currentGazeDeviationDeg = gazeValid ? GazeFixationMonitor.DeviationDeg(gateGaze, fixationDirWorld) : -1f;
            currentGazeDeviationRawDeg = gazeValid ? GazeFixationMonitor.DeviationDeg(gateGaze, headForwardWorld) : -1f;
            currentGazeBiasDeg = baselineTracker != null ? baselineTracker.BiasDeg
                                                         : Vector3.Angle(centerReferenceLocal, Vector3.forward);

            // Only enforce if calibration succeeded (or bias correction is intentionally off), and
            // only while the drift guards are happy. This prevents an uncorrected or runaway offset
            // from failing every trial.
            bool gazeGateArmed = enforceGazeFixation
                                 && !gazeGateDisarmed
                                 && (gazeCalibrated || !useCenterBiasCorrection);

            if (gazeGateArmed && TrialArmed())
            {
                gazeMonitor.toleranceDeg = gazeToleranceDeg;     // live-tunable from the Inspector
                gazeMonitor.debounceSeconds = gazeDebounceSeconds;
                bool broke = gazeMonitor.Evaluate(gateGaze, fixationDirWorld, gazeValid, Time.deltaTime);
                currentGazeOffTarget = gazeMonitor.IsOffTarget;
                if (broke && !currentTrial.failed)
                {
                    currentTrial.Failed("looking_away");
                    if (audioCues != null) audioCues.PlayError();
                }
            }
            else
            {
                currentGazeOffTarget = false;
            }

            if (showGazeDebug) UpdateGazeDebugVisuals(gateGaze, gazeValid);

            // Light condition (controller cached in Start — this was a per-frame scene scan)
            string lightCondition = lightController != null
                ? lightController.GetConditionString()
                : LightConditionController.UnknownCondition;

            // We log currentEventString and then clear it so it only appears on one frame.
            // (SessionCsvSchema.FormatRow substitutes the empty-event placeholder.)
            string eventData = currentEventString;
            currentEventString = "";

            // Write directly to file (row layout shared with VideoSessionRecorder)
            try
            {
                SampleRow row = new SampleRow
                {
                    timestampSec = timestamp,
                    leftPupilMm = leftDiameter,
                    rightPupilMm = rightDiameter,
                    leftPupilValid = leftValid,
                    rightPupilValid = rightValid,
                    leftBlink = leftBlink,
                    rightBlink = rightBlink,
                    leftGaze = leftGaze,
                    rightGaze = rightGaze,
                    combinedGaze = combinedGaze,
                    combinedGazeValid = combinedGazeValid,
                    origin = origin,
                    lightCondition = lightCondition,
                    stimulusBrightness = currentStimulusBrightness,
                    gazeDeviationDeg = currentGazeDeviationDeg,
                    gazeDeviationRawDeg = currentGazeDeviationRawDeg,
                    gazeBiasDeg = currentGazeBiasDeg,
                    gazeOffTarget = currentGazeOffTarget,
                    quality = currentSampleQuality,
                    eventData = eventData
                };
                fileWriter.WriteLine(SessionCsvSchema.FormatRow(row));
                dataPointCount++;
            }
            catch (Exception e)
            {
                Debug.LogError($"[PupilDataRecorder] Failed to write data: {e.Message}");
            }
        }

        /// <summary>A mid-session light change is a paradigm event; record it rather than only
        /// having it appear as a silent value change in the light_condition column.</summary>
        private void OnLightConditionChanged(LightConditionController.LightCondition condition)
        {
            LogEvent("LightConditionChanged", $"condition={condition}");
        }

        private void OnDestroy()
        {
            if (lightController != null) lightController.ConditionChanged -= OnLightConditionChanged;
            CloseFile();
        }

        private void OnApplicationQuit()
        {
            CloseFile();
        }

        private void CloseFile()
        {
            if (fileWriter != null)
            {
                try
                {
                    fileWriter.Flush();
                    fileWriter.Close();
                    fileWriter = null;
                    Debug.Log($"[PupilDataRecorder] Recording complete. {dataPointCount} data points saved to: {sessionFilePath}");
                }
                catch (Exception e)
                {
                    Debug.LogError($"[PupilDataRecorder] Error closing file: {e.Message}");
                }
            }
        }

        private string GetFilePath(string fileName)
        {
            return Path.Combine(Application.persistentDataPath, "PupilData", fileName);
        }

        public int GetDataPointCount()
        {
            return dataPointCount;
        }

        public bool IsRecording()
        {
            return isRecording;
        }
    }
}
