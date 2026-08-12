// Auditory trial cues, ported from the reference FOVE project (AudioInstructions.cs).
//
// The cues are not decoration — they are how the participant knows when the no-blink
// window is running. Without them the subject has to guess, which is the likely source
// of the blink/look-away failure rate in the 2026-07-29 sessions: the paradigm silently
// demanded fixation for seconds at a time and never signalled when it started or ended.
//
//   start        -> "the session is beginning"            (once, after dark adaptation)
//   single beep  -> "hold still, a trial is starting"     (fires before the trial arms)
//   double beep  -> "measurement done, you may blink"     (fires when the trial closes)
//   error        -> "that one failed, we'll repeat it"    (fires the instant a trial fails)
//
// Sound is used rather than on-screen text on purpose: this rig measures pupil response
// to light, so anything visual is a confound. Audio carries the instruction for free.

using UnityEngine;
using System.Collections;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Plays the session start, trial start, trial end and failure tones. Safe to leave in
    /// the scene with clips missing: it warns once per clip and then no-ops, rather than
    /// erroring every trial.
    /// </summary>
    public class AudioInstructions : MonoBehaviour
    {
        [Tooltip("Master switch for the auditory cues. Turn off for a silent session.")]
        public bool enableCues = true;

        [Header("Clips (loaded from Assets/Resources by name, without extension)")]
        public string startClipName = "start";
        public string beepClipName = "beep2";
        public string errorClipName = "error1";

        [Range(0f, 1f)] public float volume = 0.7f;

        [Tooltip("Gap between the two tones of the 'you may blink now' double beep.")]
        [Range(0.05f, 1f)] public float doubleBeepGap = PConfig.DoubleBeepGap;

        private AudioClip startClip;
        private AudioClip beepClip;
        private AudioClip errorClip;
        private AudioSource audioSource;

        private void Awake()
        {
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.playOnAwake = false;
            // 2D playback: a cue is an instruction to the participant, not a thing in the
            // scene, so it must not attenuate or pan with head position.
            audioSource.spatialBlend = 0f;

            startClip = Load(startClipName);
            beepClip = Load(beepClipName);
            errorClip = Load(errorClipName);
        }

        private AudioClip Load(string clipName)
        {
            if (string.IsNullOrEmpty(clipName)) return null;
            AudioClip clip = Resources.Load<AudioClip>(clipName);
            if (clip == null)
            {
                Debug.LogWarning($"[AudioInstructions] Clip '{clipName}' not found. " +
                                 $"Expected Assets/Resources/{clipName}.mp3 — that cue will stay silent.");
            }
            return clip;
        }

        /// <summary>One-off tone marking the start of the trial sequence.</summary>
        public void PlayStart() => PlayOnce(startClip);

        /// <summary>Single tone: a trial is about to start, hold fixation and don't blink.</summary>
        public void PlayBeep() => PlayOnce(beepClip);

        /// <summary>Failure tone: the trial was invalidated and will be repeated.</summary>
        public void PlayError() => PlayOnce(errorClip);

        /// <summary>Double tone: the measured window has closed, blinking is fine again.</summary>
        public void PlayDoubleBeep()
        {
            if (!enableCues || audioSource == null || beepClip == null) return;
            StartCoroutine(DoubleBeepRoutine());
        }

        private IEnumerator DoubleBeepRoutine()
        {
            audioSource.PlayOneShot(beepClip, volume);
            yield return new WaitForSeconds(doubleBeepGap);
            // Re-check: the component can be disabled, or the app can quit, during the gap.
            if (enableCues && audioSource != null && beepClip != null)
                audioSource.PlayOneShot(beepClip, volume);
        }

        private void PlayOnce(AudioClip clip)
        {
            if (!enableCues || audioSource == null || clip == null) return;
            audioSource.PlayOneShot(clip, volume);
        }
    }
}
