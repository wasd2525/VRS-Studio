// Video Session Recorder for HTC Vive Focus
// Plays anim1.mp4 on a virtual screen and records pupil/gaze data to CSV.
// No stimulus paradigm — records continuously from video start to video end.

using System;
using System.IO;
using UnityEngine;
using UnityEngine.Video;
using Wave.Essence.Eye;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Plays a VideoClip on a world-locked quad screen and streams pupil, gaze,
    /// and blink data to a CSV file. Recording starts when eye tracking becomes
    /// available and stops (with app quit) when the video ends.
    /// CSV columns match PupilDataRecorder for data compatibility.
    /// </summary>
    public class VideoSessionRecorder : MonoBehaviour
    {
        [Header("Video")]
        [Tooltip("Assign anim1.mp4 here in the Inspector after Unity imports it")]
        public VideoClip videoClip;

        [Header("Screen Settings")]
        [Tooltip("Distance in metres in front of the camera's starting position")]
        public float screenDistance = 3f;
        [Tooltip("Screen width in metres (16:9 at 3m gives ~60 deg horizontal FOV)")]
        public float screenWidth = 5.33f;
        [Tooltip("Screen height in metres")]
        public float screenHeight = 3f;

        [Header("Recording Settings")]
        public bool enableRecording = true;

        // --- private state ---
        private StreamWriter fileWriter;
        private string sessionFilePath;
        private float sessionStartTime;
        private bool isRecording = false;
        private int dataPointCount = 0;
        private string currentEventString = "";

        private EyeManager eyeManager;
        private VideoPlayer videoPlayer;
        private LightConditionController lightController; // cached; may legitimately be absent in the video scene

        // -------------------------------------------------------
        // Lifecycle
        // -------------------------------------------------------

        private void Start()
        {
            lightController = FindObjectOfType<LightConditionController>();
            OpenCSVFile();
            SetupVideoScreen();
            PlayVideo();
        }

        private void Update()
        {
            if (!enableRecording || fileWriter == null) return;

            if (eyeManager == null)
            {
                eyeManager = EyeManager.Instance;
                if (eyeManager == null) return;
            }

            if (!eyeManager.IsEyeTrackingAvailable()) return;

            if (!isRecording)
            {
                isRecording = true;
                sessionStartTime = Time.time;
                Debug.Log("[VideoSessionRecorder] Eye tracking available. Recording started.");
            }

            SamplePupilAndWriteDataPoint();
        }

        private void OnDestroy()   => CloseFile();
        private void OnApplicationQuit() => CloseFile();

        // -------------------------------------------------------
        // Setup
        // -------------------------------------------------------

        private void OpenCSVFile()
        {
            string fileName = $"video_session_{DateTime.Now:yyyyMMdd_HHmmss}.csv";
            sessionFilePath = Path.Combine(Application.persistentDataPath, "PupilData", fileName);

            Wave.OpenXR.InputDeviceEye.ActivateEyeExpression(true);
            Debug.Log("[VideoSessionRecorder] Eye expression tracking activated.");

            try
            {
                string dir = Path.GetDirectoryName(sessionFilePath);
                if (!Directory.Exists(dir))
                    Directory.CreateDirectory(dir);

                fileWriter = new StreamWriter(sessionFilePath, false);
                fileWriter.AutoFlush = true;
                // Header shared with PupilDataRecorder — see SessionCsvSchema
                fileWriter.WriteLine(SessionCsvSchema.Header);

                Debug.Log($"[VideoSessionRecorder] CSV opened: {sessionFilePath} (schema v{SessionCsvSchema.SchemaVersion})");
            }
            catch (Exception e)
            {
                Debug.LogError($"[VideoSessionRecorder] Failed to create CSV: {e.Message}");
                enableRecording = false;
            }
        }

        private void SetupVideoScreen()
        {
            // Place the screen at the camera's current forward position (world-locked)
            Transform cam = Camera.main != null ? Camera.main.transform : transform;
            Vector3 screenPos = cam.position + cam.forward * screenDistance;

            // Create quad
            GameObject screen = GameObject.CreatePrimitive(PrimitiveType.Quad);
            screen.name = "VideoScreen";
            Destroy(screen.GetComponent<Collider>());
            screen.transform.position = screenPos;
            screen.transform.rotation = Quaternion.LookRotation(screenPos - cam.position);
            screen.transform.localScale = new Vector3(screenWidth, screenHeight, 1f);

            // Create render texture and unlit material
            RenderTexture rt = new RenderTexture(1920, 1080, 0);
            rt.name = "VideoRT";
            rt.Create();

            Material mat = new Material(Shader.Find("Unlit/Texture"));
            mat.mainTexture = rt;
            screen.GetComponent<Renderer>().material = mat;

            // Create VideoPlayer on this GameObject
            videoPlayer = gameObject.AddComponent<VideoPlayer>();
            videoPlayer.clip = videoClip;
            videoPlayer.renderMode = VideoRenderMode.RenderTexture;
            videoPlayer.targetTexture = rt;
            videoPlayer.isLooping = false;
            videoPlayer.audioOutputMode = VideoAudioOutputMode.Direct;
            videoPlayer.loopPointReached += OnVideoFinished;
        }

        private void PlayVideo()
        {
            if (videoPlayer == null || videoClip == null)
            {
                Debug.LogError("[VideoSessionRecorder] No VideoClip assigned. Assign anim1.mp4 in the Inspector.");
                return;
            }

            LogEvent("VideoStart", $"clip={videoClip.name} duration={videoClip.length:F2}s");
            videoPlayer.Play();
            Debug.Log($"[VideoSessionRecorder] Playing: {videoClip.name}");
        }

        // -------------------------------------------------------
        // Video finished
        // -------------------------------------------------------

        private void OnVideoFinished(VideoPlayer vp)
        {
            LogEvent("VideoEnd", $"clip={(videoClip != null ? videoClip.name : "unknown")} frames={vp.frameCount}");
            CloseFile();

            Debug.Log("[VideoSessionRecorder] Video finished. Ending session.");
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
#else
            Application.Quit();
#endif
        }

        // -------------------------------------------------------
        // Data recording (mirrors PupilDataRecorder logic exactly)
        // -------------------------------------------------------

        private void LogEvent(string eventName, string details)
        {
            currentEventString = SessionCsvSchema.FormatEvent(eventName, details);
            Debug.Log($"[VideoSessionRecorder] Event: {eventName} – {details}");
        }

        private void SamplePupilAndWriteDataPoint()
        {
            float timestamp = Time.time - sessionStartTime;

            // Every one of these getters reports validity and writes Vector3.zero / 0 when invalid.
            // The return values used to be discarded here, so dropouts were indistinguishable from
            // genuine zeros in the recorded data.
            float leftDiameter = 0f, rightDiameter = 0f;
            bool leftValid  = eyeManager.GetLeftEyePupilDiameter(out leftDiameter);
            bool rightValid = eyeManager.GetRightEyePupilDiameter(out rightDiameter);

            float leftBlink = 0f, rightBlink = 0f;
            if (Wave.OpenXR.InputDeviceEye.IsEyeExpressionAvailable())
            {
                leftBlink  = Wave.OpenXR.InputDeviceEye.GetEyeExpressionValue(Wave.OpenXR.InputDeviceEye.Expressions.LEFT_BLINK);
                rightBlink = Wave.OpenXR.InputDeviceEye.GetEyeExpressionValue(Wave.OpenXR.InputDeviceEye.Expressions.RIGHT_BLINK);
            }

            Vector3 leftGaze, rightGaze, combinedGaze, origin;
            eyeManager.GetLeftEyeDirectionNormalized(out leftGaze);
            eyeManager.GetRightEyeDirectionNormalized(out rightGaze);
            bool combinedGazeValid = eyeManager.GetCombindedEyeDirectionNormalized(out combinedGaze);
            eyeManager.GetCombinedEyeOrigin(out origin);

            bool expressionBlink = leftBlink > 0.5f || rightBlink > 0.5f;
            bool trackingLost    = !leftValid || !rightValid;
            SampleQuality quality = expressionBlink ? SampleQuality.Blink
                                  : trackingLost   ? SampleQuality.TrackingLost
                                                   : SampleQuality.Ok;

            string eventData = currentEventString;
            currentEventString = "";

            try
            {
                // Video playback has no fixation target, so the gaze-deviation columns are N/A (-1).
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
                    lightCondition = lightController != null
                        ? lightController.GetConditionString()
                        : LightConditionController.UnknownCondition,
                    stimulusBrightness = 0f,
                    gazeDeviationDeg = -1f,
                    gazeDeviationRawDeg = -1f,
                    gazeBiasDeg = 0f,
                    gazeOffTarget = false,
                    quality = quality,
                    eventData = eventData
                };
                fileWriter.WriteLine(SessionCsvSchema.FormatRow(row));
                dataPointCount++;
            }
            catch (Exception e)
            {
                Debug.LogError($"[VideoSessionRecorder] Write error: {e.Message}");
            }
        }

        private void CloseFile()
        {
            if (fileWriter == null) return;
            try
            {
                fileWriter.Flush();
                fileWriter.Close();
                fileWriter = null;
                Debug.Log($"[VideoSessionRecorder] Saved {dataPointCount} data points to: {sessionFilePath}");
            }
            catch (Exception e)
            {
                Debug.LogError($"[VideoSessionRecorder] Error closing file: {e.Message}");
            }
        }
    }
}
