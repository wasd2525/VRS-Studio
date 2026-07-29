// Participant-facing screens for a recording session.
//
// Everything the subject sees lives here, so the recorder is left with paradigm logic and the
// wording can be changed without touching timing code.
//
// Two constraints specific to a pupillometry rig shape this file:
//   * Light is a confound. This experiment measures pupil response to luminance, so on-screen
//     text is dim by default and is removed entirely during the tail of dark adaptation and for
//     the whole of every trial. Bright instructions sitting on screen through a 30 s baseline
//     would be constricting the very pupil being measured.
//   * Nothing may sit near the fixation point. Copy is parked well above centre, clear of the
//     fixation dot and of the peripheral stimulus positions.

using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace VRS.PupilRecording
{
    public enum MessageTone
    {
        /// <summary>Dim neutral grey — the default, chosen to emit as little light as possible.</summary>
        Neutral,
        /// <summary>Slightly brighter, for confirmations the operator needs to read.</summary>
        Good,
        /// <summary>Amber, for retry notices. Still deliberately dim.</summary>
        Warning
    }

    /// <summary>
    /// Owns the head-locked world-space canvas: instruction copy, the fixation dot, and the
    /// parent transform that stimuli attach to.
    /// </summary>
    public class SessionUI : MonoBehaviour
    {
        // Canvas scale is 0.001, so 1000 canvas units == 1 metre at the canvas plane.
        private const float UnitsPerMetre = 1000f;

        [Tooltip("Distance in metres the head-locked canvas sits in front of the participant.")]
        public float canvasDistance = 2.0f;

        [Tooltip("Copy is kept dim so it does not drive the pupil response being measured. " +
                 "Raise only for debugging in a lit room.")]
        [Range(0.05f, 1f)] public float textBrightness = 0.35f;

        private Transform headTransform;
        private GameObject canvasObject;
        private TextMeshProUGUI headlineText;
        private TextMeshProUGUI bodyText;
        private Image fixationDot;

        /// <summary>Parent for stimulus images. Null until Build() has run.</summary>
        public Transform CanvasTransform => canvasObject != null ? canvasObject.transform : null;

        public bool IsBuilt => canvasObject != null;

        // -------------------------------------------------------
        // Construction
        // -------------------------------------------------------

        public void Build(Transform head, float fixationSizeMetres, float fixationLuminance)
        {
            headTransform = head;

            canvasObject = new GameObject("SessionCanvas");
            canvasObject.transform.SetParent(transform, false);

            Canvas canvas = canvasObject.AddComponent<Canvas>();
            canvas.renderMode = RenderMode.WorldSpace;
            canvasObject.AddComponent<CanvasScaler>();
            canvasObject.AddComponent<GraphicRaycaster>();

            RectTransform rect = canvasObject.GetComponent<RectTransform>();
            rect.sizeDelta = new Vector2(UnitsPerMetre, UnitsPerMetre);
            canvasObject.transform.localScale = Vector3.one * (1f / UnitsPerMetre);

            // Parked high enough to clear both the fixation dot and the peripheral stimuli.
            headlineText = CreateText("Headline", 56f, new Vector2(0f, 260f), new Vector2(900f, 160f));
            bodyText = CreateText("Body", 38f, new Vector2(0f, 150f), new Vector2(900f, 200f));

            CreateFixationDot(fixationSizeMetres, fixationLuminance);

            Clear();
            UpdateHeadLock();
        }

        private TextMeshProUGUI CreateText(string name, float size, Vector2 position, Vector2 dimensions)
        {
            GameObject go = new GameObject(name);
            go.transform.SetParent(canvasObject.transform, false);

            TextMeshProUGUI text = go.AddComponent<TextMeshProUGUI>();
            text.fontSize = size;
            text.alignment = TextAlignmentOptions.Center;
            text.enableWordWrapping = true;
            text.raycastTarget = false;
            text.rectTransform.sizeDelta = dimensions;
            text.rectTransform.anchoredPosition = position;
            text.text = string.Empty;
            return text;
        }

        private void CreateFixationDot(float sizeMetres, float luminance)
        {
            GameObject go = new GameObject("FixationDot");
            go.transform.SetParent(canvasObject.transform, false);

            fixationDot = go.AddComponent<Image>();
            fixationDot.raycastTarget = false;

            // The luminance field used to be ignored here — the dot was always pure white.
            float v = Mathf.Clamp01(luminance);
            fixationDot.color = new Color(v, v, v, 1f);

            float units = sizeMetres * UnitsPerMetre;
            fixationDot.rectTransform.sizeDelta = new Vector2(units, units);
            fixationDot.rectTransform.anchoredPosition = Vector2.zero;
        }

        /// <summary>Keeps the canvas pinned in front of the participant. Call every frame.</summary>
        public void UpdateHeadLock()
        {
            if (headTransform == null || canvasObject == null) return;
            canvasObject.transform.position = headTransform.position + headTransform.forward * canvasDistance;
            canvasObject.transform.rotation = headTransform.rotation;
        }

        public void SetFixationVisible(bool visible)
        {
            if (fixationDot != null) fixationDot.enabled = visible;
        }

        // -------------------------------------------------------
        // Screens
        // -------------------------------------------------------

        public void Clear()
        {
            SetText(string.Empty, string.Empty, MessageTone.Neutral);
        }

        public void ShowIdEntry()
        {
            SetText("Ready to begin", "Enter the participant ID on the keyboard.", MessageTone.Good);
        }

        public void ShowIdConfirmed(string participantId, string monitorUrl)
        {
            string body = string.IsNullOrEmpty(monitorUrl)
                ? "Starting shortly."
                : $"Starting shortly.\nMonitor: {monitorUrl}";
            SetText($"Participant {participantId}", body, MessageTone.Good);
        }

        public void ShowInstructions()
        {
            SetText("Please keep your eyes on the small dot",
                    "Try not to blink while a coloured dot is visible.\nRelax — the session runs itself.",
                    MessageTone.Good);
        }

        /// <summary>
        /// Dark-adaptation countdown. Text is withheld for the final stretch so the eye settles
        /// in darkness rather than reading a lit countdown right up to the first trial.
        /// </summary>
        public void ShowBaseline(float secondsRemaining, float quietTailSeconds)
        {
            if (secondsRemaining <= quietTailSeconds)
            {
                Clear();
                return;
            }
            SetText("Settling in", $"Keep your eyes on the dot — {Mathf.Ceil(secondsRemaining):0}s", MessageTone.Neutral);
        }

        public void ShowCalibration()
        {
            SetText("Hold still", "Keep looking at the dot.", MessageTone.Neutral);
        }

        /// <summary>Trials are run with a completely clear screen apart from the fixation dot.</summary>
        public void ShowTrialsRunning()
        {
            Clear();
        }

        public void ShowRetry(string failureReason)
        {
            string message;
            switch (failureReason)
            {
                case "looking_away":
                    message = "Eyes back on the dot — repeating that one.";
                    break;
                case "tracking_lost":
                    message = "Lost your eyes for a moment — repeating that one.";
                    break;
                default:
                    message = "Blink detected — repeating that one.";
                    break;
            }
            SetText(string.Empty, message, MessageTone.Warning);
        }

        public void ShowRest(float secondsRemaining)
        {
            SetText("Short break", $"Rest your eyes — back in {Mathf.Ceil(secondsRemaining):0}s", MessageTone.Neutral);
        }

        public void ShowFinished()
        {
            SetFixationVisible(false);
            SetText("All done", "Thank you — you can take the headset off.", MessageTone.Good);
        }

        public void ShowMessage(string headline, string body, MessageTone tone = MessageTone.Neutral)
        {
            SetText(headline, body, tone);
        }

        // -------------------------------------------------------

        private void SetText(string headline, string body, MessageTone tone)
        {
            Color c = ToneColor(tone);

            if (headlineText != null)
            {
                headlineText.text = headline ?? string.Empty;
                headlineText.color = c;
            }
            if (bodyText != null)
            {
                bodyText.text = body ?? string.Empty;
                bodyText.color = c;
            }
        }

        private Color ToneColor(MessageTone tone)
        {
            float v = Mathf.Clamp01(textBrightness);
            switch (tone)
            {
                // Amber, and never brighter than the neutral level by much — a retry notice is
                // not worth a luminance step change mid-session.
                case MessageTone.Warning: return new Color(v * 1.15f, v * 0.75f, v * 0.25f, 1f);
                case MessageTone.Good: return new Color(v * 0.85f, v * 1.1f, v * 0.9f, 1f);
                default: return new Color(v, v, v, 1f);
            }
        }
    }
}
