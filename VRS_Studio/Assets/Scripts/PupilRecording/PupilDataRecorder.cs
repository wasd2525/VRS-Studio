// Pupil Data Recorder for HTC Vive Focus
// Records pupil diameter, gaze, and blink data to CSV file each session
// Uses streaming to prevent data loss if app is force-killed

using System;
using System.IO;
using UnityEngine;
using Wave.Essence.Eye;
using Wave.OpenXR;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Records pupil diameter, gaze, and blink data every frame and streams directly to CSV file.
    /// Uses streaming to prevent data loss if app is force-killed.
    /// </summary>
    public class PupilDataRecorder : MonoBehaviour
    {
        [Header("Recording Settings")]
        [Tooltip("Enable or disable recording")]
        public bool enableRecording = true;

        // File streaming
        private StreamWriter fileWriter;
        private float sessionStartTime;
        private string sessionFilePath;
        private bool isRecording = false;
        private int dataPointCount = 0;

        // Cached reference
        private EyeManager eyeManager;
        
        // Eye expression state
        private bool eyeExpressionActivated = false;

        private void Start()
        {
            // Generate unique session filename and open file immediately
            string fileName = $"pupil_session_{DateTime.Now:yyyyMMdd_HHmmss}.csv";
            sessionFilePath = GetFilePath(fileName);
            sessionStartTime = Time.time;
            
            // Activate eye expressions for blink detection
            InputDeviceEye.ActivateEyeExpression(true);
            eyeExpressionActivated = true;
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
                
                // Write header (includes blink data and stimulus events)
                fileWriter.WriteLine("timestamp_sec,left_pupil_mm,right_pupil_mm,left_blink,right_blink,left_gaze_x,left_gaze_y,left_gaze_z,right_gaze_x,right_gaze_y,right_gaze_z,combined_gaze_x,combined_gaze_y,combined_gaze_z,origin_x,origin_y,origin_z,light_condition,stimulus_event");
                
                Debug.Log($"[PupilDataRecorder] Session started. Streaming data to: {sessionFilePath}");
            }
            catch (Exception e)
            {
                Debug.LogError($"[PupilDataRecorder] Failed to create file: {e.Message}");
                enableRecording = false;
            }
        }

        private void Update()
        {
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

            // Capture and write data point directly to file
            WriteDataPoint();
        }

        private void WriteDataPoint()
        {
            float timestamp = Time.time - sessionStartTime;
            
            // Get pupil diameters
            float leftDiameter = 0f;
            float rightDiameter = 0f;
            eyeManager.GetLeftEyePupilDiameter(out leftDiameter);
            eyeManager.GetRightEyePupilDiameter(out rightDiameter);

            // Get blink values (0.0 = eye open, 1.0 = eye fully closed/blink)
            float leftBlink = 0f;
            float rightBlink = 0f;
            if (InputDeviceEye.IsEyeExpressionAvailable())
            {
                leftBlink = InputDeviceEye.GetEyeExpressionValue(InputDeviceEye.Expressions.LEFT_BLINK);
                rightBlink = InputDeviceEye.GetEyeExpressionValue(InputDeviceEye.Expressions.RIGHT_BLINK);
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

            // Get stimulus event if available
            string stimulusEvent = "";
            if (StimulusEventLogger.Instance != null)
            {
                stimulusEvent = StimulusEventLogger.Instance.GetCurrentEvent();
                // Escape quotes and commas in event string for CSV compatibility
                if (!string.IsNullOrEmpty(stimulusEvent))
                {
                    stimulusEvent = stimulusEvent.Replace("\"", "\"\"");
                    if (stimulusEvent.Contains(","))
                    {
                        stimulusEvent = $"\"{stimulusEvent}\"";
                    }
                }
            }

            // Write directly to file (includes blink data and stimulus events)
            try
            {
                fileWriter.WriteLine($"{timestamp:F4},{leftDiameter:F4},{rightDiameter:F4}," +
                                    $"{leftBlink:F4},{rightBlink:F4}," +
                                    $"{leftGaze.x:F4},{leftGaze.y:F4},{leftGaze.z:F4}," +
                                    $"{rightGaze.x:F4},{rightGaze.y:F4},{rightGaze.z:F4}," +
                                    $"{combinedGaze.x:F4},{combinedGaze.y:F4},{combinedGaze.z:F4}," +
                                    $"{origin.x:F4},{origin.y:F4},{origin.z:F4}," +
                                    $"{lightCondition},{stimulusEvent}");
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

        /// <summary>
        /// Get the number of data points recorded so far
        /// </summary>
        public int GetDataPointCount()
        {
            return dataPointCount;
        }

        /// <summary>
        /// Get the current recording status
        /// </summary>
        public bool IsRecording()
        {
            return isRecording;
        }
    }
}
