// Scene Setup Helper for Pupil Recording
// Creates necessary objects at runtime if not present in scene

using UnityEngine;
using Wave.Essence.Eye;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Automatically sets up required components for pupil recording, so the recorder can run
    /// from a near-empty scene. Dropping a PupilDataRecorder straight into a scene also works.
    /// </summary>
    public class PupilRecordingSetup : MonoBehaviour
    {
        [Header("Auto-Create Options")]
        public bool createEyeManagerIfMissing = true;
        public bool createRecorderIfMissing = true;
        public bool createLightControllerIfMissing = true;
        [Tooltip("Serve the live operator monitor over WiFi so the experimenter can watch a session without wearing the headset.")]
        public bool createOperatorServerIfMissing = true;

        [Header("Experiment Settings")]
        [Tooltip("Start in dark mode for dilation experiments")]
        public bool startInDarkMode = true;

        private void Awake()
        {
            SetupEyeManager();
            SetupRecorder();
            SetupLightController();
            SetupOperatorServer();
        }

        private void SetupOperatorServer()
        {
            if (!createOperatorServerIfMissing) return;

            if (FindObjectOfType<OperatorStatusServer>() == null)
            {
                GameObject serverObj = new GameObject("OperatorStatusServer");
                serverObj.AddComponent<OperatorStatusServer>();
                Debug.Log("[PupilRecordingSetup] Created OperatorStatusServer");
            }
        }

        private void SetupEyeManager()
        {
            if (!createEyeManagerIfMissing) return;

            if (EyeManager.Instance == null)
            {
                GameObject eyeManagerObj = new GameObject("EyeManager");
                eyeManagerObj.AddComponent<EyeManager>();
                Debug.Log("[PupilRecordingSetup] Created EyeManager");
            }
        }

        private void SetupRecorder()
        {
            if (!createRecorderIfMissing) return;

            if (FindObjectOfType<PupilDataRecorder>() == null)
            {
                GameObject recorderObj = new GameObject("PupilDataRecorder");
                recorderObj.AddComponent<PupilDataRecorder>();
                Debug.Log("[PupilRecordingSetup] Created PupilDataRecorder");
            }
        }

        private void SetupLightController()
        {
            if (!createLightControllerIfMissing) return;

            if (FindObjectOfType<LightConditionController>() == null)
            {
                GameObject controllerObj = new GameObject("LightConditionController");
                LightConditionController controller = controllerObj.AddComponent<LightConditionController>();

                // Set initial condition
                controller.currentCondition = startInDarkMode
                    ? LightConditionController.LightCondition.Dark
                    : LightConditionController.LightCondition.Bright;

                Debug.Log($"[PupilRecordingSetup] Created LightConditionController in {controller.currentCondition} mode");
            }
        }
    }
}
