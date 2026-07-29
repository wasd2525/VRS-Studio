// Gaze fixation math for the stimulus paradigm.
//
// Two pieces, deliberately kept free of MonoBehaviour/SDK dependencies so they can be
// reasoned about (and self-tested) without a headset:
//   GazeFixationMonitor  - debounced "is the subject off the fixation target?" decision
//   GazeBaselineTracker  - rolling estimate of the eye tracker's drifting centre bias

using System.Collections.Generic;
using UnityEngine;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Monitors whether combined gaze stays within a tolerance cone of the fixation
    /// direction. The decision is debounced over time and HOLDS (ignores) invalid
    /// frames, so blinks/dropouts and single-frame micro-saccades do not break a trial.
    ///
    /// Direction inputs are world space and need NOT be unit length: Vector3.Angle
    /// normalizes internally. This matters because Wave's EyeManager returns a
    /// z-normalized gaze vector (z = 1), not a unit vector — feeding that into a raw
    /// acos(dot()) would give a wrong angle, which is one reason the earlier attempt failed.
    /// </summary>
    public class GazeFixationMonitor
    {
        public float toleranceDeg;
        public float debounceSeconds;

        private float offTargetTimer;
        private float lastDeviationDeg;
        private bool tripped;

        public GazeFixationMonitor(float toleranceDeg, float debounceSeconds)
        {
            this.toleranceDeg = toleranceDeg;
            this.debounceSeconds = debounceSeconds;
            Reset();
        }

        public float LastDeviationDeg => lastDeviationDeg;
        public bool IsOffTarget => tripped;

        /// <summary>Pure, unit-testable: angle in degrees between two world-space directions.</summary>
        public static float DeviationDeg(Vector3 gazeDir, Vector3 fixationDir)
        {
            if (gazeDir.sqrMagnitude < 1e-8f || fixationDir.sqrMagnitude < 1e-8f) return 0f;
            return Vector3.Angle(gazeDir, fixationDir);
        }

        /// <summary>
        /// Advance the monitor one frame. Returns true once gaze has been continuously
        /// off-target for longer than debounceSeconds. Invalid frames hold state
        /// (neither accumulate nor reset) so a blink is not mistaken for looking away.
        /// </summary>
        public bool Evaluate(Vector3 gazeDirWorld, Vector3 fixationDirWorld, bool gazeValid, float deltaTime)
        {
            if (!gazeValid) return tripped; // no information this frame

            lastDeviationDeg = DeviationDeg(gazeDirWorld, fixationDirWorld);

            if (lastDeviationDeg > toleranceDeg) offTargetTimer += deltaTime;
            else offTargetTimer = 0f;

            tripped = offTargetTimer >= debounceSeconds;
            return tripped;
        }

        public void Reset()
        {
            offTargetTimer = 0f;
            lastDeviationDeg = 0f;
            tripped = false;
        }
    }

    /// <summary>
    /// Tracks the eye tracker's centre bias as it DRIFTS over a session.
    ///
    /// Measured on this rig (2026-06-21 sessions): a one-shot calibration zeroes the ~10°
    /// bias for roughly 15 s, then it decays back out — 2.75° → 5.95° → 7.22° → 8.45° in
    /// 15 s bins, and 1.14° → 13.32° in a worse run. Deviation was independent of trial
    /// position (centre 6.67° vs 20°-peripheral 7.31–9.06°), which rules out "subject
    /// saccaded to the stimulus" and identifies it as baseline drift. Drift rate is
    /// ~0.3°/s, so a slew-limited rolling median tracks it comfortably.
    ///
    /// Samples are fed in HEAD-LOCAL space, so the estimate is independent of head pose.
    /// The caller must only feed samples from moments when the subject is believed to be
    /// fixating the centre dot (i.e. between trials) — never mid-trial, or a genuine
    /// look-away would be absorbed into the reference and the gate would stop working.
    /// </summary>
    public class GazeBaselineTracker
    {
        /// <summary>
        /// Only samples from the last this-many seconds inform the estimate.
        ///
        /// A trailing median lags the true bias by roughly (window / 2) * drift_rate, and that lag
        /// shows up as permanent residual deviation. Simulated against the measured 0.29 deg/s:
        /// 20 s window leaves 3.15 deg residual, 8 s leaves 1.47 deg, 4 s leaves 0.89 deg. 8 s is
        /// the balance point — it still buffers ~475 samples between trials at 90 Hz, so the median
        /// stays robust, while keeping the residual well inside the tolerance budget.
        /// </summary>
        public float windowSeconds = 8f;
        /// <summary>
        /// Samples further than this from the current reference are treated as look-aways and discarded.
        ///
        /// The 2026-07-29 session showed why this must be tight: at 15 deg, a ~10 deg between-trial
        /// gaze wander was inside the band, got absorbed into the reference, and when the subject
        /// returned to the dot the stranded reference reported 8.37 deg while the raw deviation was
        /// only 3.81 deg — four false "looking_away" failures. At 8 deg that wander is rejected outright.
        /// </summary>
        public float inlierDeg = 8f;

        /// <summary>
        /// The reference may move at most this fast — the second line of defence.
        ///
        /// The inlier band rejects large wanders outright, but one just UNDER it still gets absorbed,
        /// and then only the slew limit bounds the damage. Simulated worst case over 3-8 deg wanders:
        /// 1.2 deg/s -> 5.54 deg false positive (fails the 5 deg gate), 0.8 -> 3.97, 0.5 -> 2.80.
        /// Going too slow breaks real drift tracking though: at 0.5 deg/s the tracker cannot keep up
        /// with 0.5 deg/s drift (9.88 deg residual). 0.8 satisfies both with ~1 deg of margin.
        /// </summary>
        public float maxRateDegPerSec = 0.8f;
        /// <summary>Below this many buffered samples the estimate is not recomputed.</summary>
        public int minSamplesForUpdate = 30;
        /// <summary>Median recompute cadence. Sorting the buffer every frame would be wasteful and is not needed at ~0.3°/s drift.</summary>
        public float candidateIntervalSeconds = 0.5f;

        private readonly List<Vector3> samples = new List<Vector3>(2048);
        private readonly List<float> sampleTimes = new List<float>(2048);

        // Reused across median computations so the steady state does not allocate.
        private readonly List<float> xs = new List<float>(2048);
        private readonly List<float> ys = new List<float>(2048);
        private readonly List<float> zs = new List<float>(2048);

        private Vector3 reference = Vector3.forward;
        private Vector3 seedReference = Vector3.forward;
        private Vector3 candidate = Vector3.forward;
        private bool seeded;
        private bool hasCandidate;
        private float lastCandidateTime = -999f;
        private float lastUpdateTime = -999f;

        /// <summary>Current best estimate of "looking at the fixation dot", in head-local space.</summary>
        public Vector3 Reference => reference;
        public bool IsSeeded => seeded;
        public int BufferedSamples => samples.Count;

        /// <summary>How far the reference sits from raw head forward — the drift we are correcting for.</summary>
        public float BiasDeg => Vector3.Angle(reference, Vector3.forward);

        /// <summary>How far the reference has wandered from the initial calibration. Sanity bound for the caller.</summary>
        public float DriftFromSeedDeg => Vector3.Angle(reference, seedReference);

        public float SecondsSinceUpdate(float now) => now - lastUpdateTime;

        public void Seed(Vector3 localDir, float now)
        {
            if (localDir.sqrMagnitude < 1e-8f) return;
            reference = localDir.normalized;
            seedReference = reference;
            candidate = reference;
            seeded = true;
            hasCandidate = false;
            lastCandidateTime = now;
            lastUpdateTime = now;
            samples.Clear();
            sampleTimes.Clear();
        }

        /// <summary>
        /// Offer one head-local gaze sample. Call ONLY when the subject should be fixating
        /// centre (between trials). Grossly off-axis samples are rejected as look-aways.
        /// </summary>
        public void AddSample(Vector3 localDir, float now)
        {
            if (!seeded || localDir.sqrMagnitude < 1e-8f) return;

            Vector3 dir = localDir.normalized;
            if (dir.z <= 0.1f) return;                              // behind/beside the head — not a fixation
            if (Vector3.Angle(dir, reference) > inlierDeg) return;  // look-away, not drift

            samples.Add(dir);
            sampleTimes.Add(now);
        }

        /// <summary>
        /// Recompute (at most every candidateIntervalSeconds) and slew the reference toward it.
        /// Returns true if the reference actually moved this call; movedDeg reports by how much.
        /// </summary>
        public bool TryUpdate(float now, float deltaTime, out float movedDeg)
        {
            movedDeg = 0f;
            if (!seeded) return false;

            Prune(now);

            if (now - lastCandidateTime >= candidateIntervalSeconds && samples.Count >= minSamplesForUpdate)
            {
                Vector3 median = ComputeMedian();
                if (median.sqrMagnitude > 1e-8f)
                {
                    candidate = median.normalized;
                    hasCandidate = true;
                    lastUpdateTime = now;
                }
                lastCandidateTime = now;
            }

            if (!hasCandidate) return false;

            Vector3 before = reference;
            reference = SlerpTowards(reference, candidate, maxRateDegPerSec * Mathf.Max(0f, deltaTime));

            movedDeg = Vector3.Angle(before, reference);
            return movedDeg > 0f;
        }

        /// <summary>
        /// Rotate `from` toward `to` by at most maxDegrees, along the great circle.
        ///
        /// Deliberately hand-rolled rather than Vector3.RotateTowards/Slerp: those are native
        /// engine calls, and keeping this managed means the whole tracker can be exercised in a
        /// plain test harness without a Unity runtime — which is how the drift behaviour below
        /// was verified before ever putting the headset on.
        /// </summary>
        public static Vector3 SlerpTowards(Vector3 from, Vector3 to, float maxDegrees)
        {
            if (from.sqrMagnitude < 1e-8f || to.sqrMagnitude < 1e-8f) return from;

            Vector3 a = from.normalized;
            Vector3 b = to.normalized;

            float angle = Vector3.Angle(a, b);
            if (angle <= 1e-4f || maxDegrees >= angle) return b;

            float rad = angle * Mathf.Deg2Rad;
            float sinRad = Mathf.Sin(rad);
            if (sinRad < 1e-6f) return b;

            float t = maxDegrees / angle;
            Vector3 result = a * (Mathf.Sin((1f - t) * rad) / sinRad) + b * (Mathf.Sin(t * rad) / sinRad);
            return result.normalized;
        }

        private void Prune(float now)
        {
            float cutoff = now - windowSeconds;
            int keepFrom = 0;
            while (keepFrom < sampleTimes.Count && sampleTimes[keepFrom] < cutoff) keepFrom++;
            if (keepFrom > 0)
            {
                samples.RemoveRange(0, keepFrom);
                sampleTimes.RemoveRange(0, keepFrom);
            }
        }

        /// <summary>
        /// Component-wise median of the buffered unit vectors. Median rather than mean because
        /// it shrugs off the occasional saccade that survives the inlier filter; the mean used
        /// by the original one-shot calibration does not.
        /// </summary>
        private Vector3 ComputeMedian()
        {
            xs.Clear(); ys.Clear(); zs.Clear();
            for (int i = 0; i < samples.Count; i++)
            {
                xs.Add(samples[i].x);
                ys.Add(samples[i].y);
                zs.Add(samples[i].z);
            }
            xs.Sort(); ys.Sort(); zs.Sort();
            return new Vector3(Median(xs), Median(ys), Median(zs));
        }

        private static float Median(List<float> sorted)
        {
            int n = sorted.Count;
            if (n == 0) return 0f;
            return (n % 2 == 1) ? sorted[n / 2] : 0.5f * (sorted[n / 2 - 1] + sorted[n / 2]);
        }
    }
}
