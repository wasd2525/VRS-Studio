using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace VRS.PupilRecording
{
    public class VisualStimulusController : MonoBehaviour
    {
        // Settings derived from StimuTest.cs
        private float canvasDistance = 2.0f; // 2 meters
        private float stimulusOffset = 0.73f; // ~20 degrees at 2m
        private Vector2[] positions;
        private string[] positionNames;

        private Canvas messageCanvas;
        private Text messageText;
        private Image fixationCross;
        private Image stimulusPanel;

        void Awake()
        {
            // Define positions: Center, Left, Right, Up, Down
            positions = new Vector2[] {
                Vector2.zero, // Center
                new Vector2(-stimulusOffset, 0), // Left
                new Vector2(stimulusOffset, 0),  // Right
                new Vector2(0, stimulusOffset),  // Up
                new Vector2(0, -stimulusOffset)  // Down
            };
            positionNames = new string[] { "Center", "Left", "Right", "Up", "Down" };

            CreateCanvas();
        }

        void Start()
        {
            StartCoroutine(ExperimentSequence());
        }

        void Update()
        {
            // FORCE Head-Locking
            Camera cam = Camera.main;
            if (cam == null) cam = FindObjectOfType<Camera>();

            if (cam != null)
            {
                // Position canvas exactly 2.0m in front of camera
                transform.position = cam.transform.position + cam.transform.forward * canvasDistance;
                transform.rotation = cam.transform.rotation;
                
                // Debug log occasionally
                if (Time.frameCount % 300 == 0)
                {
                    Debug.Log($"[VisualStimulus] HUD Position: {transform.position}");
                }
            }
        }

        private void CreateCanvas()
        {
            // Create Canvas Object
            GameObject canvasObj = new GameObject("StimulusCanvas");
            canvasObj.transform.SetParent(this.transform);
            
            messageCanvas = canvasObj.AddComponent<Canvas>();
            messageCanvas.renderMode = RenderMode.WorldSpace;
            
            // Important: Scale needs to be small for World Space
            // 1 unit in UI = 1 meter in World Space if pixelsPerUnit is 1
            // Let's use scale 0.001 to make 1000px = 1 meter
            canvasObj.transform.localScale = Vector3.one * 0.001f;
            
            // Add Raycaster (optional)
            canvasObj.AddComponent<GraphicRaycaster>();

            // 1. Create Stimulus Panel (The Flashing Color)
            GameObject panelObj = new GameObject("StimulusPanel");
            panelObj.transform.SetParent(canvasObj.transform, false);
            stimulusPanel = panelObj.AddComponent<Image>();
            stimulusPanel.color = Color.clear; // Start invisible
            // Size: 20cm x 20cm (0.2m) -> 200 units at 0.001 scale
            stimulusPanel.rectTransform.sizeDelta = new Vector2(200, 200); 

            // 2. Create Fixation Cross
            GameObject crossObj = new GameObject("FixationCross");
            crossObj.transform.SetParent(canvasObj.transform, false);
            fixationCross = crossObj.AddComponent<Image>();
            fixationCross.color = Color.white;
            fixationCross.rectTransform.sizeDelta = new Vector2(20, 20); // 2cm
            fixationCross.rectTransform.anchoredPosition = Vector2.zero;

            // 3. Create Message Text (for Status)
            GameObject textObj = new GameObject("MessageText");
            textObj.transform.SetParent(canvasObj.transform, false);
            messageText = textObj.AddComponent<Text>();
            messageText.font = Resources.GetBuiltinResource<Font>("Arial.ttf");
            messageText.fontSize = 50;
            messageText.alignment = TextAnchor.MiddleCenter;
            messageText.color = Color.green;
            messageText.rectTransform.sizeDelta = new Vector2(1000, 200);
            messageText.rectTransform.anchoredPosition = new Vector2(0, 150); // Above center
            messageText.text = "Initializing...";
        }

        IEnumerator ExperimentSequence()
        {
            yield return new WaitForSeconds(1.0f); // Allow initialization
            
            messageText.text = "Baseline: 20s (Dark)";
            // Log Event
            if (StimulusEventLogger.Instance) StimulusEventLogger.Instance.LogEvent("Baseline Start");

            // Hide Stimulus
            stimulusPanel.color = Color.clear;
            fixationCross.enabled = true;

            // Wait 20s
            yield return new WaitForSeconds(20.0f);

            messageText.text = "Starting Stimuli...";
            yield return new WaitForSeconds(2.0f);
            messageText.text = ""; // Clear text to avoid distraction

            // Loop through colors: Red then Blue
            Color[] colors = new Color[] { Color.red, Color.blue };
            string[] colorNames = new string[] { "Red", "Blue" };

            for (int c = 0; c < colors.Length; c++)
            {
                Color experimentColor = colors[c];
                string cName = colorNames[c];

                // Loop through positions
                for (int i = 0; i < positions.Length; i++)
                {
                    // 1. Move Panel to Position (Convert meters to Canvas Units)
                    // Scale is 0.001, so 0.73m = 730 units.
                    // positions array is in meters (0.73), so multiply by 1000
                    stimulusPanel.rectTransform.anchoredPosition = positions[i] * 1000f;

                    // 2. Show Stimulus
                    stimulusPanel.color = experimentColor;
                    if (StimulusEventLogger.Instance) 
                        StimulusEventLogger.Instance.LogEvent($"Stimulus Start: {cName} at {positionNames[i]}");
                    
                    // Duration: 1s
                    yield return new WaitForSeconds(1.0f);

                    // 3. Hide (ISI)
                    stimulusPanel.color = Color.clear;
                    if (StimulusEventLogger.Instance) 
                        StimulusEventLogger.Instance.LogEvent($"Stimulus Stop");

                    // ISI: 1s
                    yield return new WaitForSeconds(1.0f);
                }
            }

            messageText.text = "Experiment Finished.";
            if (StimulusEventLogger.Instance) StimulusEventLogger.Instance.LogEvent("Experiment Finished");
        }
    }
}
