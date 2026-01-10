// Pupil Recording UI
// Simple debug overlay showing recording status and pupil data

using UnityEngine;
using UnityEngine.UI;
using Wave.Essence.Eye;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Debug UI overlay to show recording status and current pupil values.
    /// Optional - can be disabled in production.
    /// </summary>
    public class PupilRecordingUI : MonoBehaviour
    {
        [Header("UI References")]
        public Text statusText;
        public Text leftPupilText;
        public Text rightPupilText;
        public Text dataCountText;

        [Header("References")]
        public PupilDataRecorder recorder;
        public EyeVisualization eyeVis;

        private EyeManager eyeManager;

        private void Update()
        {
            if (eyeManager == null)
                eyeManager = EyeManager.Instance;

            UpdateStatusDisplay();
            UpdatePupilDisplay();
            UpdateDataCountDisplay();
        }

        private void UpdateStatusDisplay()
        {
            if (statusText == null) return;

            if (eyeManager == null)
            {
                statusText.text = "Status: Waiting for EyeManager...";
                statusText.color = Color.yellow;
            }
            else if (!eyeManager.IsEyeTrackingAvailable())
            {
                statusText.text = "Status: Eye tracking not available";
                statusText.color = Color.red;
            }
            else if (recorder != null && recorder.IsRecording())
            {
                statusText.text = "Status: RECORDING";
                statusText.color = Color.green;
            }
            else
            {
                statusText.text = "Status: Ready";
                statusText.color = Color.white;
            }
        }

        private void UpdatePupilDisplay()
        {
            if (eyeManager == null || !eyeManager.IsEyeTrackingAvailable())
            {
                if (leftPupilText != null) leftPupilText.text = "Left: --";
                if (rightPupilText != null) rightPupilText.text = "Right: --";
                return;
            }

            if (leftPupilText != null)
            {
                if (eyeManager.GetLeftEyePupilDiameter(out float leftDiam))
                    leftPupilText.text = $"Left: {leftDiam:F2} mm";
                else
                    leftPupilText.text = "Left: N/A";
            }

            if (rightPupilText != null)
            {
                if (eyeManager.GetRightEyePupilDiameter(out float rightDiam))
                    rightPupilText.text = $"Right: {rightDiam:F2} mm";
                else
                    rightPupilText.text = "Right: N/A";
            }
        }

        private void UpdateDataCountDisplay()
        {
            if (dataCountText == null || recorder == null) return;
            dataCountText.text = $"Data Points: {recorder.GetDataPointCount()}";
        }
    }
}
