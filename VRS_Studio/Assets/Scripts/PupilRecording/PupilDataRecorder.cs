// Pupil Data Recorder for HTC Vive Focus
// Records pupil diameter, gaze, and blink data to CSV file each session
// Integrates the StimuTest paradigm (timing, luminance, and test cases)
// Uses streaming to prevent data loss if app is force-killed

using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Wave.Essence.Eye;
using Wave.Essence.InputModule; // For InputDeviceEye if needed; using Wave.OpenXR directly below

namespace VRS.PupilRecording
{
    // --- Data structures for the experiment ---
    public class StimulusType
    {
        public string name;
        public GameObject sphere;
        public float duration;
        public float interval;
        public float samplingWindow;
        public Color baseColor; // Pure hue (e.g. (1,0,0)); brightness is multiplied at trial time.
        public UnityEngine.UI.Image image;

        public StimulusType(string name, GameObject sphere, float duration, float interval, float samplingWindow, Color baseColor, UnityEngine.UI.Image image)
        {
            this.name = name;
            this.sphere = sphere;
            this.duration = duration;
            this.interval = interval;
            this.samplingWindow = samplingWindow;
            this.baseColor = baseColor;
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
        public bool failed = false;
        public string failedReason = "";

        public void Failed(string reason)
        {
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
        [Header("Stimulus Timing")]
        public float shortStimDuration = 0.5f;
        public float longStimDuration = 8f;
        public float shortInterval = 3.0f;
        public float longInterval = 8f;
        public float preStimulusWindow = 0.5f;
        public float shortSamplingWindow = 0.5f;
        public float longSamplingWindow = 3.5f;

        [Space(10)]
        [Header("Luminance Settings")]
        public float blueCircleSize = 0.1f;
        public float redCircleSize = 0.1f;
        public float shortBlueLuminance = 0.3f;
        public float shortRedLuminance = 0.3f;
        public float longBlueLuminance = 6000.0f;
        public float longRedLuminance = 6000.0f;
        public float fixationLightSize = 0.015f; // 0.015 m at 2 m canvas distance ≈ 0.43° visual angle
        public float fixationLightLuminance = 0.5f;

        [Space(10)]
        [Header("Vectors")]
        public Vector3[] vectorPositions = new Vector3[]
        {
            new Vector3(0, 0, 2.0f),     // Center
            new Vector3(-0.73f, 0, 2.0f), // Nasal (Left)
            new Vector3(0.73f, 0, 2.0f),  // Temporal (Right)
            new Vector3(0, 0.73f, 2.0f),  // Superior (Up)
            new Vector3(0, -0.73f, 2.0f)  // Inferior (Down)
        };

        [Space(10)]
        [Header("Include Stimulus Types")]
        [InspectorName("Short Red")] public bool includeShortRed = true;
        [InspectorName("Short Blue")] public bool includeShortBlue = true;
        [InspectorName("Long Red")] public bool includeLongRed = true;
        [InspectorName("Long Blue")] public bool includeLongBlue = true;

        [Space(10)]
        [Header("Brightness Randomization")]
        [Tooltip("Per stim type, pick brightnesses evenly spaced across [min, max] (one per position) and shuffle the order. Overrides the per-stimulus luminance fields above. When off, brightness stays at 1.0.")]
        public bool randomizeBrightness = true;
        [Range(0f, 1f)] public float minBrightness = 0.1f;
        [Range(0f, 1f)] public float maxBrightness = 1.0f;

        [Space(10)]
        [Header("Gaze Fixation")]
        [Tooltip("Fail the trial if gaze deviates more than maxGazeDeviationDeg from the head-forward direction.")]
        public bool enforceGazeFixation = true;
        [Range(0f, 10f)] public float maxGazeDeviationDeg = 1f;

        [Space(10)]
        [Header("Other Options")]
        public float waitBeforeStart = 30f;
        public float delayBetweenTypes = 8f;
        public float maxRetests = 3;

        // File streaming
        private StreamWriter fileWriter;
        private float sessionStartTime;
        private string sessionFilePath;
        private bool isRecording = false;
        private int dataPointCount = 0;

        // Cached references
        private EyeManager eyeManager;
        private Transform headTransform; // Used to track head rotation for vectors

        // Paradigm States
        private GameObject canvas;
        private UnityEngine.UI.Text messageText;
        private GameObject fixationLight;
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

        private void Start()
        {
            // Try to find head transform (Main Camera is standard in VR setups)
            Camera cam = Camera.main;
            if (cam == null) cam = FindObjectOfType<Camera>();
            headTransform = cam != null ? cam.transform : transform;
            Debug.Log($"[PupilDataRecorder] headTransform resolved to: {headTransform.name} pos={headTransform.position}");

            // Generate unique session filename and open file immediately
            string fileName = $"pupil_session_{DateTime.Now:yyyyMMdd_HHmmss}.csv";
            sessionFilePath = GetFilePath(fileName);
            
            // Activate eye expressions for blink detection
            Wave.OpenXR.InputDeviceEye.ActivateEyeExpression(true);
            Debug.Log("[PupilDataRecorder] Eye expression tracking activated for blink detection.");
            
            // Create directory and open file for streaming
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
                
                // Write header
                fileWriter.WriteLine("timestamp_sec,left_pupil_mm,right_pupil_mm,left_blink,right_blink,left_gaze_x,left_gaze_y,left_gaze_z,right_gaze_x,right_gaze_y,right_gaze_z,combined_gaze_x,combined_gaze_y,combined_gaze_z,origin_x,origin_y,origin_z,light_condition,stimulus_brightness,event_name,stimulus_event");
                
                Debug.Log($"[PupilDataRecorder] Session started. Streaming data to: {sessionFilePath}");
            }
            catch (Exception e)
            {
                Debug.LogError($"[PupilDataRecorder] Failed to create file: {e.Message}");
                enableRecording = false;
                return;
            }

            // Setup Paradigm
            CreateCanvas();
            CreateStimuli();
            CreateFixationLight();
            
            // Append paradigm metadata to file early on. 
            // In a real CSV it might be tricky to append metadata lines after headers, but we can do it via event stream
            LogEvent("Experiment Configuration", $"Version: {currentVersion}");

            StartCoroutine(ShowStimuliSequence());
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
            float waitTimer = waitBeforeStart;
            while (waitTimer > 0)
            {
                if (messageText != null) messageText.text = $"Baseline wait: {Mathf.Ceil(waitTimer)}s";
                yield return new WaitForSeconds(1.0f);
                waitTimer -= 1.0f;
            }

            if (messageText != null) messageText.text = "Starting Stimuli...";
            yield return new WaitForSeconds(2.0f);
            if (messageText != null) messageText.text = ""; // Clear text during stimuli

            for (int i = 0; i < stimArray.Count; i++)
            {
                StimulusType stim = stimArray[i];

                EnqueuePositions(stim.name);
                currentSphere = stim.sphere;
                failedPositions = new Dictionary<int, FailedPosition>();

                while (testCasesQueue.Count > 0)
                {
                    TestCase testCase = testCasesQueue.Dequeue();
                    Vector3 offsetPosition = testCase.position;
                    currentTrial = new TrialState();

                    yield return new WaitForSeconds(preStimulusWindow);

                    float trialBrightness = testCase.brightness;
                    ApplyBrightness(stim, trialBrightness);
                    currentStimulusBrightness = trialBrightness;

                    currentSphere.SetActive(true);
                    StartCoroutine(UpdateSpherePosition(currentSphere, offsetPosition));
                    LogEvent("Start", $"Start {stim.name} sphere for {stim.duration} seconds in {offsetPosition} test_case_id={testCase.id} brightness={trialBrightness:F2}");
                    Debug.Log($"[PupilDataRecorder] Sphere {stim.name} ACTIVATED at {offsetPosition}, brightness={trialBrightness:F2}, color={stim.image.color}, activeInHierarchy={currentSphere.activeInHierarchy}");

                    yield return new WaitForSeconds(stim.duration);

                    currentSphere.SetActive(false);
                    LogEvent("Stop", $"Stop {stim.name} sphere in {offsetPosition} test_case_id={testCase.id} brightness={trialBrightness:F2}");

                    yield return new WaitForSeconds(stim.samplingWindow);

                    if (currentTrial.failed)
                    {
                        int repeat = HandleFail(testCase);
                        LogEvent("FAIL", $"FAIL stimulus={stim.name} position={offsetPosition} test_case_id={testCase.id} reason={currentTrial.failedReason} repeat_number={repeat}");

                        if (messageText != null)
                        {
                            messageText.color = Color.red;
                            messageText.text = currentTrial.failedReason == "gaze_deviation"
                                ? "Gaze Off Target. Repeating..."
                                : "Blink Detected. Repeating...";
                        }

                        // Give them a moment to read the message before continuing the interval
                        yield return new WaitForSeconds(1.5f);
                        if (messageText != null) 
                        {
                            messageText.text = "";
                            messageText.color = Color.green; // Restore normal color
                        }
                    }

                    currentTrial = null;
                    currentStimulusBrightness = 0f;
                    yield return new WaitForSeconds(Mathf.Max(0f, stim.interval - stim.samplingWindow));
                }

                if (i < stimArray.Count - 1)
                {
                    yield return new WaitForSeconds(delayBetweenTypes);
                }
            }
            
            if (messageText != null) messageText.text = "Experiment Finished.";
            EndRun();
        }

        private int HandleFail(TestCase testCase)
        {
            FailedPosition fp;
            if (!failedPositions.ContainsKey(testCase.id)) {
                fp = new FailedPosition();
                failedPositions[testCase.id] = fp;
            }
            else
            {
                fp = failedPositions[testCase.id];
            }

            if (fp.repeat <= maxRetests + 1) {
                fp.AddFailure(currentTrial.failedReason);
                testCasesQueue.Enqueue(testCase);
            }
            return fp.repeat;
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

        void EnqueuePositions(string stimName)
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
                for (int i = 0; i < n; i++) brightnesses.Add(1f);
            }

            Debug.Log($"[PupilDataRecorder] {stimName} brightness schedule: [{string.Join(", ", brightnesses.ConvertAll(b => b.ToString("F2")))}]");

            for (int i = 0; i < n; i++)
            {
                testCasesQueue.Enqueue(new TestCase(testCaseId, vectorPositions[i], brightnesses[i]));
                testCaseId++;
            }
        }

        void UpdateHeadLockedVisuals()
        {
            if (headTransform != null && canvas != null)
            {
                canvas.transform.position = headTransform.position + headTransform.forward * 2.0f;
                canvas.transform.rotation = headTransform.rotation;
            }
        }

        // ------------------------------
        // Stimulus and UI Creation
        // ------------------------------

        public void CreateCanvas()
        {
            canvas = new GameObject("BlinkingCanvas");
            canvas.transform.SetParent(transform, false);
            Canvas canvasComponent = canvas.AddComponent<Canvas>();
            canvasComponent.renderMode = RenderMode.WorldSpace;
            canvas.AddComponent<UnityEngine.UI.CanvasScaler>();
            canvas.AddComponent<UnityEngine.UI.GraphicRaycaster>();

            RectTransform canvasRect = canvas.GetComponent<RectTransform>();
            canvasRect.sizeDelta = new Vector2(1000, 1000);
            canvas.transform.localScale = Vector3.one * 0.001f;

            GameObject textObj = new GameObject("MessageText");
            textObj.transform.SetParent(canvas.transform, false);
            messageText = textObj.AddComponent<UnityEngine.UI.Text>();
            messageText.font = Resources.GetBuiltinResource<Font>("Arial.ttf");
            messageText.fontSize = 50;
            messageText.alignment = TextAnchor.MiddleCenter;
            messageText.color = Color.green;
            messageText.rectTransform.sizeDelta = new Vector2(1000, 200);
            messageText.rectTransform.anchoredPosition = new Vector2(0, 150);
            messageText.text = "Initializing...";
        }

        public void CreateFixationLight()
        {
            // Create fixation dot as a UI Image on the canvas (guaranteed to render)
            GameObject fixObj = new GameObject("FixationDot");
            fixObj.transform.SetParent(canvas.transform, false);
            UnityEngine.UI.Image fixImage = fixObj.AddComponent<UnityEngine.UI.Image>();
            fixImage.color = Color.white;
            // Size in canvas units: fixationLightSize in meters * 1000 (canvas scale is 0.001)
            float dotSizeUnits = fixationLightSize * 1000f;
            fixImage.rectTransform.sizeDelta = new Vector2(dotSizeUnits, dotSizeUnits);
            fixImage.rectTransform.anchoredPosition = Vector2.zero; // Center of canvas
            fixationLight = fixObj;
            Debug.Log($"[PupilDataRecorder] Fixation dot created as UI Image, size={dotSizeUnits} canvas units");
        }

        void CreateStimuli()
        {
            stimArray = new List<StimulusType>();
            if (includeShortRed) AddStimulus("Short Red", Color.red, redCircleSize, shortRedLuminance, shortStimDuration, shortInterval, shortSamplingWindow);
            if (includeShortBlue) AddStimulus("Short Blue", Color.blue, blueCircleSize, shortBlueLuminance, shortStimDuration, shortInterval, shortSamplingWindow);
            if (includeLongRed) AddStimulus("Long Red", Color.red, redCircleSize, longRedLuminance, longStimDuration, longInterval, longSamplingWindow);
            if (includeLongBlue) AddStimulus("Long Blue", Color.blue, blueCircleSize, longBlueLuminance, longStimDuration, longInterval, longSamplingWindow);
            Debug.Log($"[PupilDataRecorder] Created {stimArray.Count} stimulus types");
        }

        void AddStimulus(string name, Color color, float size, float luminance, float duration, float interval, float samplingWindow)
        {
            // Create stimulus as a UI Image on the canvas
            GameObject stimObj = new GameObject(name);
            stimObj.transform.SetParent(canvas.transform, false);
            UnityEngine.UI.Image stimImage = stimObj.AddComponent<UnityEngine.UI.Image>();

            // baseColor is the pure hue at full intensity — runtime brightness multiplies this.
            Color baseColor = new Color(Mathf.Clamp01(color.r), Mathf.Clamp01(color.g), Mathf.Clamp01(color.b), 1f);

            // Initial color applies the legacy luminance field; gets overridden each trial when randomization is on.
            Color finalColor = baseColor * Mathf.Max(luminance, 1f);
            finalColor.a = 1f;
            finalColor = new Color(Mathf.Clamp01(finalColor.r), Mathf.Clamp01(finalColor.g), Mathf.Clamp01(finalColor.b), 1f);
            stimImage.color = finalColor;

            // Size in canvas units: size in meters * 1000
            float sizeUnits = size * 1000f;
            stimImage.rectTransform.sizeDelta = new Vector2(sizeUnits, sizeUnits);
            stimImage.rectTransform.anchoredPosition = Vector2.zero;

            stimObj.SetActive(false); // Hidden until needed

            StimulusType stimu = new StimulusType(name, stimObj, duration, interval, samplingWindow, baseColor, stimImage);
            stimArray.Add(stimu);
            Debug.Log($"[PupilDataRecorder] Created UI stimulus: {name} baseColor={baseColor} size={sizeUnits}");
        }

        private void ApplyBrightness(StimulusType stim, float brightness)
        {
            if (stim?.image == null) return;
            Color c = stim.baseColor * Mathf.Clamp01(brightness);
            c.a = 1f;
            stim.image.color = new Color(Mathf.Clamp01(c.r), Mathf.Clamp01(c.g), Mathf.Clamp01(c.b), 1f);
        }

        void EndRun()
        {
            Debug.Log("[PupilDataRecorder] Stimuli sequence finished.");
            #if UNITY_EDITOR
                UnityEditor.EditorApplication.isPlaying = false;
            #else
                Application.Quit();
            #endif
        }

        // ------------------------------
        // Data Recording & Logging
        // ------------------------------

        private void LogEvent(string eventName, string details)
        {
            string safeName = eventName.Replace("\"", "\"\"");
            string safeDetails = details.Replace("\"", "\"\"");
            currentEventString = $"\"{safeName}\",\"{safeDetails}\"";
            Debug.Log($"[PupilDataRecorder] Paradigm Event: {eventName} - {details}");
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

            // Evaluate if we are blinking
            // A blink can be considered if the eye expression says so OR if pupil data isn't valid
            bool isBlinking = leftBlink > 0.5f || rightBlink > 0.5f || !leftValid || !rightValid;
            if (isBlinking && currentTrial != null)
            {
                currentTrial.Failed("blink");
            }

            // Get gaze directions
            Vector3 leftGaze, rightGaze, combinedGaze, origin;
            eyeManager.GetLeftEyeDirectionNormalized(out leftGaze);
            eyeManager.GetRightEyeDirectionNormalized(out rightGaze);
            eyeManager.GetCombindedEyeDirectionNormalized(out combinedGaze);
            eyeManager.GetCombinedEyeOrigin(out origin);

            // Gaze fixation tolerance: fail trial if combined gaze deviates beyond threshold from head-forward.
            // Skip when eye data is invalid (already counted as blink) or magnitude near zero.
            if (enforceGazeFixation && !isBlinking && currentTrial != null && combinedGaze.sqrMagnitude > 0.01f)
            {
                float dot = Vector3.Dot(combinedGaze.normalized, headTransform.forward);
                float deviationDeg = Mathf.Acos(Mathf.Clamp(dot, -1f, 1f)) * Mathf.Rad2Deg;
                if (deviationDeg > maxGazeDeviationDeg)
                {
                    currentTrial.Failed("gaze_deviation");
                }
            }

            // Get light condition if available
            string lightCondition = "Unknown";
            LightConditionController lightController = FindObjectOfType<LightConditionController>();
            if (lightController != null)
            {
                lightCondition = lightController.GetConditionString();
            }

            // We log currentEventString and then clear it so it only appears on one frame
            string eventData = currentEventString;
            if (string.IsNullOrEmpty(eventData))
            {
                eventData = ",\"\""; // Empty event string (need the comma placeholder for event_name vs stimulus_event)
            }
            currentEventString = "";

            // Write directly to file
            try
            {
                fileWriter.WriteLine($"{timestamp:F4},{leftDiameter:F4},{rightDiameter:F4}," +
                                    $"{leftBlink:F4},{rightBlink:F4}," +
                                    $"{leftGaze.x:F4},{leftGaze.y:F4},{leftGaze.z:F4}," +
                                    $"{rightGaze.x:F4},{rightGaze.y:F4},{rightGaze.z:F4}," +
                                    $"{combinedGaze.x:F4},{combinedGaze.y:F4},{combinedGaze.z:F4}," +
                                    $"{origin.x:F4},{origin.y:F4},{origin.z:F4}," +
                                    $"{lightCondition},{currentStimulusBrightness:F2},{eventData}");
                dataPointCount++;
            }
            catch (Exception e)
            {
                Debug.LogError($"[PupilDataRecorder] Failed to write data: {e.Message}");
            }
        }

        private void OnDestroy()
        {
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
