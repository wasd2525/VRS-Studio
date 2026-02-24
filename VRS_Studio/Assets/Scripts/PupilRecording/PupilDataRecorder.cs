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

        public StimulusType(string name, GameObject sphere, float duration, float interval, float samplingWindow)
        {
            this.name = name;
            this.sphere = sphere;
            this.duration = duration;
            this.interval = interval;
            this.samplingWindow = samplingWindow;
        }
    }

    public class TestCase
    {
        public int id;
        public Vector3 position;

        public TestCase(int id, Vector3 pos)
        {
            this.id = id;
            this.position = pos;
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
        public float fixationLightSize = 0.005f; // reduced from 0.09f
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

        private void Start()
        {
            // Try to find head transform (Main Camera is standard in VR setups)
            headTransform = Camera.main != null ? Camera.main.transform : transform;

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
                fileWriter.WriteLine("timestamp_sec,left_pupil_mm,right_pupil_mm,left_blink,right_blink,left_gaze_x,left_gaze_y,left_gaze_z,right_gaze_x,right_gaze_y,right_gaze_z,combined_gaze_x,combined_gaze_y,combined_gaze_z,origin_x,origin_y,origin_z,light_condition,event_name,stimulus_event");
                
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

                EnqueuePositions();
                currentSphere = stim.sphere;
                failedPositions = new Dictionary<int, FailedPosition>();

                while (testCasesQueue.Count > 0)
                {
                    TestCase testCase = testCasesQueue.Dequeue();
                    Vector3 offsetPosition = testCase.position;
                    currentTrial = new TrialState();

                    yield return new WaitForSeconds(preStimulusWindow);

                    currentSphere.SetActive(true);
                    StartCoroutine(UpdateSpherePosition(currentSphere, offsetPosition));
                    LogEvent("Start", $"Start {stim.name} sphere for {stim.duration} seconds in {offsetPosition} test_case_id={testCase.id}");

                    yield return new WaitForSeconds(stim.duration);

                    currentSphere.SetActive(false);
                    LogEvent("Stop", $"Stop {stim.name} sphere in {offsetPosition} test_case_id={testCase.id}");

                    yield return new WaitForSeconds(stim.samplingWindow);

                    if (currentTrial.failed)
                    {
                        int repeat = HandleFail(testCase);
                        LogEvent("FAIL", $"FAIL stimulus={stim.name} position={offsetPosition} test_case_id={testCase.id} reason={currentTrial.failedReason} repeat_number={repeat}");
                        
                        if (messageText != null) 
                        {
                            messageText.color = Color.red;
                            messageText.text = "Blink Detected. Repeating...";
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
            while (sphere.activeSelf)
            {
                float fixedZ = offsetPosition.z;
                Vector3 targetPosition = headTransform.position
                                    + headTransform.right * offsetPosition.x
                                    + headTransform.up * offsetPosition.y
                                    + headTransform.forward * fixedZ;

                sphere.transform.position = targetPosition;
                yield return null;
            }
        }

        void EnqueuePositions() {
            testCasesQueue = new Queue<TestCase>();
            foreach (Vector3 pos in vectorPositions) {
                testCasesQueue.Enqueue(new TestCase(testCaseId, pos));
                testCaseId++;
            }
        }

        void UpdateHeadLockedVisuals()
        {
            if (headTransform != null)
            {
                if (fixationLight != null && fixationLight.activeSelf)
                {
                    // Placed at 1.95m so it sits just slightly in front of the 2.0m stimulus spheres
                    fixationLight.transform.position = headTransform.position + headTransform.forward * 1.95f;
                }

                if (canvas != null)
                {
                    canvas.transform.position = headTransform.position + headTransform.forward * 2.0f;
                    canvas.transform.rotation = headTransform.rotation;
                }
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
            fixationLight = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            fixationLight.name = "FixationLight";
            fixationLight.transform.SetParent(transform, false);
            fixationLight.layer = LayerMask.NameToLayer("Default");
            fixationLight.transform.localScale = Vector3.one * fixationLightSize;
            AdjustMaterial(fixationLight, Color.white, fixationLightLuminance);
        }

        void CreateStimuli()
        {
            stimArray = new List<StimulusType>();
            if (includeShortRed) AddStimulus("Short Red", Color.red, redCircleSize, shortRedLuminance, shortStimDuration, shortInterval, shortSamplingWindow);
            if (includeShortBlue) AddStimulus("Short Blue", Color.blue, blueCircleSize, shortBlueLuminance, shortStimDuration, shortInterval, shortSamplingWindow);
            if (includeLongRed) AddStimulus("Long Red", Color.red, redCircleSize, longRedLuminance, longStimDuration, longInterval, longSamplingWindow);
            if (includeLongBlue) AddStimulus("Long Blue", Color.blue, blueCircleSize, longBlueLuminance, longStimDuration, longInterval, longSamplingWindow);
        }

        void AddStimulus(string name, Color color, float size, float luminance, float duration, float interval, float samplingWindow)
        {
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere.name = name;
            sphere.transform.SetParent(transform, false);
            sphere.transform.localScale = Vector3.one * size;
            sphere.SetActive(false);
            AdjustMaterial(sphere, color, luminance);
            StimulusType stimu = new StimulusType(name, sphere, duration, interval, samplingWindow);
            stimArray.Add(stimu);
        }

        void AdjustMaterial(GameObject sphere, Color color, float luminance)
        {
            Renderer renderer = sphere.GetComponent<Renderer>();
            Shader unlitShader = Shader.Find("Unlit/Color");
            
            Material mat;
            if (unlitShader != null)
            {
                mat = new Material(unlitShader);
            }
            else
            {
                // Fallback to the default material from CreatePrimitive
                mat = renderer.material; 
            }

            mat.color = color;
            mat.EnableKeyword("_EMISSION");
            mat.SetColor("_EmissionColor", color * luminance);

            if (unlitShader != null)
            {
                renderer.material = mat;
            }
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
                                    $"{lightCondition},{eventData}");
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
