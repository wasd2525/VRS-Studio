// Pupilometer Experiment Controller
// Main controller that combines all pupil recording and stimulus components

using UnityEngine;
using Wave.Essence.Eye;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Main experiment controller that sets up and manages all components
    /// for pupilometer experiments. Attach to a GameObject in the scene.
    /// </summary>
    public class PupilometerExperiment : MonoBehaviour
    {
        [Header("Auto-Setup")]
        [Tooltip("Automatically create missing components on Start")]
        public bool autoSetup = true;

        [Header("Experiment Settings")]
        [Tooltip("Start the experiment automatically on scene load")]
        public bool autoStartExperiment = false;
        
        [Tooltip("Start in dark mode for pupil dilation baseline")]
        public bool startInDarkMode = true;

        [Header("Component References")]
        public PupilDataRecorder dataRecorder;
        public StimulusPresenter stimulusPresenter;
        public LightConditionController lightController;
        public EyeVisualization eyeVisualization;

        // State
        private bool isInitialized = false;

        private void Awake()
        {
            if (autoSetup)
            {
                SetupComponents();
            }
        }

        private void Start()
        {
            ValidateSetup();

            if (autoStartExperiment && isInitialized)
            {
                StartExperiment();
            }
        }

        private void SetupComponents()
        {
            // Ensure EyeManager exists
            if (EyeManager.Instance == null)
            {
                GameObject eyeManagerObj = new GameObject("EyeManager");
                eyeManagerObj.AddComponent<EyeManager>();
                Debug.Log("[PupilometerExperiment] Created EyeManager");
            }

            // Ensure StimulusEventLogger exists (singleton auto-creates)
            var logger = StimulusEventLogger.Instance;
            Debug.Log("[PupilometerExperiment] StimulusEventLogger ready");

            // Setup PupilDataRecorder
            if (dataRecorder == null)
            {
                dataRecorder = FindObjectOfType<PupilDataRecorder>();
                if (dataRecorder == null)
                {
                    GameObject recorderObj = new GameObject("PupilDataRecorder");
                    dataRecorder = recorderObj.AddComponent<PupilDataRecorder>();
                    Debug.Log("[PupilometerExperiment] Created PupilDataRecorder");
                }
            }

            // Setup StimulusPresenter
            if (stimulusPresenter == null)
            {
                stimulusPresenter = FindObjectOfType<StimulusPresenter>();
                if (stimulusPresenter == null)
                {
                    GameObject presenterObj = new GameObject("StimulusPresenter");
                    stimulusPresenter = presenterObj.AddComponent<StimulusPresenter>();
                    stimulusPresenter.autoStart = false; // We'll control start
                    Debug.Log("[PupilometerExperiment] Created StimulusPresenter");
                }
            }

            // Setup LightConditionController
            if (lightController == null)
            {
                lightController = FindObjectOfType<LightConditionController>();
                if (lightController == null)
                {
                    GameObject lightObj = new GameObject("LightConditionController");
                    lightController = lightObj.AddComponent<LightConditionController>();
                    lightController.currentCondition = startInDarkMode 
                        ? LightConditionController.LightCondition.Dark 
                        : LightConditionController.LightCondition.Bright;
                    Debug.Log($"[PupilometerExperiment] Created LightConditionController in {lightController.currentCondition} mode");
                }
            }

            isInitialized = true;
        }

        private void ValidateSetup()
        {
            if (dataRecorder == null)
            {
                Debug.LogWarning("[PupilometerExperiment] PupilDataRecorder not found. Data will not be recorded.");
            }

            if (stimulusPresenter == null)
            {
                Debug.LogWarning("[PupilometerExperiment] StimulusPresenter not found. No stimuli will be presented.");
            }

            if (lightController == null)
            {
                Debug.LogWarning("[PupilometerExperiment] LightConditionController not found. Lighting won't be controlled.");
            }
        }

        /// <summary>
        /// Start the full experiment sequence.
        /// </summary>
        public void StartExperiment()
        {
            if (!isInitialized && autoSetup)
            {
                SetupComponents();
            }

            Debug.Log("[PupilometerExperiment] Starting experiment...");
            StimulusEventLogger.Instance.LogEvent("Experiment session started");

            // Ensure dark mode for baseline
            if (lightController != null && startInDarkMode)
            {
                lightController.SetCondition(LightConditionController.LightCondition.Dark);
            }

            // Enable recording if not already
            if (dataRecorder != null)
            {
                dataRecorder.enableRecording = true;
            }

            // Start stimulus presentation
            if (stimulusPresenter != null)
            {
                stimulusPresenter.StartExperiment();
            }
        }

        /// <summary>
        /// Stop the experiment immediately.
        /// </summary>
        public void StopExperiment()
        {
            Debug.Log("[PupilometerExperiment] Stopping experiment...");
            StimulusEventLogger.Instance.LogEvent("Experiment session stopped");

            // Stop stimulus presentation
            if (stimulusPresenter != null)
            {
                stimulusPresenter.StopExperiment();
            }

            // Disable recording
            if (dataRecorder != null)
            {
                dataRecorder.enableRecording = false;
            }
        }

        /// <summary>
        /// Toggle light condition between dark and bright.
        /// </summary>
        public void ToggleLightCondition()
        {
            if (lightController != null)
            {
                lightController.ToggleCondition();
                StimulusEventLogger.Instance.LogEvent($"Light changed to {lightController.GetConditionString()}");
            }
        }

        /// <summary>
        /// Check if experiment is currently running.
        /// </summary>
        public bool IsExperimentRunning()
        {
            return stimulusPresenter != null && stimulusPresenter.IsRunning();
        }

        /// <summary>
        /// Get the current data point count from the recorder.
        /// </summary>
        public int GetDataPointCount()
        {
            return dataRecorder != null ? dataRecorder.GetDataPointCount() : 0;
        }
    }
}
