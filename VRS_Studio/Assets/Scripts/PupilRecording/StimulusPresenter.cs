// Stimulus Presenter for Pupilometer Experiments
// Wave SDK-compatible adaptation of Popilometer-VR's StimuTest.cs
// Presents colored spheres at various positions for pupil light reflex studies

using System.Collections;
using UnityEngine;
using Wave.Essence;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Presents visual stimuli (colored spheres) for pupil light reflex experiments.
    /// Adapted from Popilometer-VR's StimuTest.cs for Wave SDK / HTC Vive Focus.
    /// </summary>
    public class StimulusPresenter : MonoBehaviour
    {
        [Header("Stimulus Settings")]
        [Tooltip("Size of red stimulus sphere (meters)")]
        public float redSphereSize = 0.15f;
        
        [Tooltip("Size of blue stimulus sphere (meters)")]
        public float blueSphereSize = 0.15f;
        
        [Tooltip("Luminance/intensity of red sphere (0-1)")]
        [Range(0f, 1f)]
        public float redLuminance = 0.5f;
        
        [Tooltip("Luminance/intensity of blue sphere (0-1)")]
        [Range(0f, 1f)]
        public float blueLuminance = 0.5f;
        
        [Tooltip("High luminance for long blue stimulation phase")]
        public float longBlueLuminance = 1.0f;

        [Header("Fixation Light")]
        [Tooltip("Size of fixation point")]
        public float fixationLightSize = 0.05f;
        
        [Tooltip("Luminance of fixation light")]
        [Range(0f, 1f)]
        public float fixationLightLuminance = 0.5f;

        [Header("Timing Settings")]
        [Tooltip("Duration of each red/blue stimulus (seconds)")]
        public float stimulationDurationRedBlue = 0.5f;
        
        [Tooltip("Interval between red/blue stimuli (seconds)")]
        public float intervalDurationRedBlue = 3.0f;
        
        [Tooltip("Duration of long blue light stimulation (seconds)")]
        public float stimulationDurationLongBlue = 8f;
        
        [Tooltip("Interval between long blue stimuli (seconds)")]
        public float intervalDurationLongBlue = 8f;
        
        [Tooltip("Wait time before starting experiment (seconds)")]
        public float waitBeforeStart = 20f;

        [Header("Position Settings")]
        [Tooltip("Distance from camera for stimuli (meters)")]
        public float stimulusDistance = 1.5f;
        
        [Tooltip("Offset for peripheral positions (meters)")]
        public float peripheralOffset = 0.4f;

        [Header("Auto Start")]
        [Tooltip("Automatically start the experiment sequence on Start()")]
        public bool autoStart = false;

        // Stimulus objects
        private GameObject redSphere;
        private GameObject blueSphere;
        private GameObject fixationLight;
        
        // Reference to HMD camera
        private Transform hmdTransform;
        
        // Position definitions
        private Vector3[] stimulusPositions;
        private string[] positionNames = { "Center", "Nasal", "Temporal", "Superior", "Inferior" };
        
        // State
        private bool isRunning = false;
        private Coroutine experimentCoroutine;

        private void Start()
        {
            // Get HMD camera reference - prefer WaveRig, fallback to Camera.main
            if (WaveRig.Instance != null)
            {
                Camera rigCamera = WaveRig.Instance.GetComponentInChildren<Camera>();
                if (rigCamera != null)
                {
                    hmdTransform = rigCamera.transform;
                    Debug.Log("[StimulusPresenter] Using WaveRig camera.");
                }
            }
            
            // Fallback to Camera.main
            if (hmdTransform == null && Camera.main != null)
            {
                hmdTransform = Camera.main.transform;
                Debug.Log("[StimulusPresenter] Using Camera.main as fallback.");
            }
            
            if (hmdTransform == null)
            {
                Debug.LogError("[StimulusPresenter] No camera found!");
                return;
            }

            // Define stimulus positions (relative to camera forward)
            stimulusPositions = new Vector3[]
            {
                new Vector3(0, 0, stimulusDistance),                           // Center
                new Vector3(-peripheralOffset, 0, stimulusDistance),           // Nasal (Left)
                new Vector3(peripheralOffset, 0, stimulusDistance),            // Temporal (Right)
                new Vector3(0, peripheralOffset, stimulusDistance),            // Superior (Up)
                new Vector3(0, -peripheralOffset, stimulusDistance)            // Inferior (Down)
            };

            // Create stimulus objects
            CreateRedSphere();
            CreateBlueSphere();
            CreateFixationLight();

            if (autoStart)
            {
                StartExperiment();
            }

            Debug.Log($"[StimulusPresenter] Initialized. Distance: {stimulusDistance}m, Size: {redSphereSize}m");
        }

        private void CreateRedSphere()
        {
            redSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            redSphere.name = "RedStimulusSphere";
            redSphere.transform.SetParent(transform);
            redSphere.transform.localScale = Vector3.one * redSphereSize;

            // Apply material
            ApplyUnlitMaterial(redSphere, Color.red, redLuminance);

            // Remove collider
            Destroy(redSphere.GetComponent<Collider>());

            redSphere.SetActive(false);
        }

        private void CreateBlueSphere()
        {
            blueSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            blueSphere.name = "BlueStimulusSphere";
            blueSphere.transform.SetParent(transform);
            blueSphere.transform.localScale = Vector3.one * blueSphereSize;

            // Apply material
            ApplyUnlitMaterial(blueSphere, Color.blue, blueLuminance);

            // Remove collider
            Destroy(blueSphere.GetComponent<Collider>());

            blueSphere.SetActive(false);
        }

        private void CreateFixationLight()
        {
            fixationLight = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            fixationLight.name = "FixationLight";
            fixationLight.transform.SetParent(transform);
            fixationLight.transform.localScale = Vector3.one * fixationLightSize;

            // Apply white unlit material
            ApplyUnlitMaterial(fixationLight, Color.white, fixationLightLuminance);

            // Remove collider
            Destroy(fixationLight.GetComponent<Collider>());

            fixationLight.SetActive(true);
        }

        private void ApplyUnlitMaterial(GameObject obj, Color baseColor, float luminance)
        {
            Renderer rend = obj.GetComponent<Renderer>();
            Material mat = new Material(Shader.Find("Unlit/Color"));
            mat.color = baseColor * luminance;
            rend.material = mat;
        }

        private void Update()
        {
            // Keep fixation light in front of camera
            if (fixationLight != null && fixationLight.activeSelf && hmdTransform != null)
            {
                fixationLight.transform.position = hmdTransform.position + 
                    hmdTransform.forward * stimulusDistance;
            }
        }

        /// <summary>
        /// Start the full experiment sequence.
        /// </summary>
        public void StartExperiment()
        {
            if (isRunning)
            {
                Debug.LogWarning("[StimulusPresenter] Experiment already running!");
                return;
            }

            experimentCoroutine = StartCoroutine(ExperimentSequence());
        }

        /// <summary>
        /// Stop the experiment immediately.
        /// </summary>
        public void StopExperiment()
        {
            if (experimentCoroutine != null)
            {
                StopCoroutine(experimentCoroutine);
                experimentCoroutine = null;
            }

            isRunning = false;
            HideAllStimuli();

            StimulusEventLogger.Instance.LogEvent("Experiment stopped");
            Debug.Log("[StimulusPresenter] Experiment stopped.");
        }

        private void HideAllStimuli()
        {
            if (redSphere != null) redSphere.SetActive(false);
            if (blueSphere != null) blueSphere.SetActive(false);
        }

        private IEnumerator ExperimentSequence()
        {
            isRunning = true;
            StimulusEventLogger.Instance.LogPhase("Experiment Started");
            Debug.Log("[StimulusPresenter] Experiment started.");

            // Wait before starting stimulation
            StimulusEventLogger.Instance.LogPhase($"Baseline - waiting {waitBeforeStart}s");
            yield return new WaitForSeconds(waitBeforeStart);

            // Phase 1: Red sphere stimulation at all positions
            StimulusEventLogger.Instance.LogPhase("Red Sphere Stimulation");
            yield return StartCoroutine(PresentStimuliAtAllPositions(
                redSphere, "Red Sphere", 
                stimulationDurationRedBlue, intervalDurationRedBlue));

            // Phase 2: Blue sphere stimulation at all positions
            StimulusEventLogger.Instance.LogPhase("Blue Sphere Stimulation");
            yield return StartCoroutine(PresentStimuliAtAllPositions(
                blueSphere, "Blue Sphere", 
                stimulationDurationRedBlue, intervalDurationRedBlue));

            // Phase 3: Long blue light stimulation
            StimulusEventLogger.Instance.LogPhase("Long Blue Light Stimulation");
            
            // Increase blue sphere intensity for this phase
            ApplyUnlitMaterial(blueSphere, Color.blue, longBlueLuminance);
            
            yield return StartCoroutine(PresentStimuliAtAllPositions(
                blueSphere, "High-Intensity Blue", 
                stimulationDurationLongBlue, intervalDurationLongBlue));

            // Reset blue sphere luminance
            ApplyUnlitMaterial(blueSphere, Color.blue, blueLuminance);

            // Experiment complete
            isRunning = false;
            StimulusEventLogger.Instance.LogPhase("Experiment Complete");
            Debug.Log("[StimulusPresenter] Experiment complete.");
        }

        private IEnumerator PresentStimuliAtAllPositions(GameObject stimulus, string stimulusName, 
            float duration, float interval)
        {
            for (int i = 0; i < stimulusPositions.Length; i++)
            {
                Vector3 position = stimulusPositions[i];
                string posName = positionNames[i];

                // Position stimulus relative to camera
                StartCoroutine(UpdateStimulusPosition(stimulus, position));
                stimulus.SetActive(true);

                // Log start event
                StimulusEventLogger.Instance.LogStimulusStart(stimulusName, posName, duration);

                yield return new WaitForSeconds(duration);

                // Hide stimulus
                stimulus.SetActive(false);

                // Log stop event
                StimulusEventLogger.Instance.LogStimulusStop(stimulusName, posName);

                // Wait interval before next position
                yield return new WaitForSeconds(interval);
            }
        }

        private IEnumerator UpdateStimulusPosition(GameObject stimulus, Vector3 offsetPosition)
        {
            while (stimulus.activeSelf && hmdTransform != null)
            {
                Vector3 targetPosition = hmdTransform.position + 
                    hmdTransform.rotation * offsetPosition;
                stimulus.transform.position = targetPosition;
                yield return null;
            }
        }

        /// <summary>
        /// Check if experiment is currently running.
        /// </summary>
        public bool IsRunning()
        {
            return isRunning;
        }

        /// <summary>
        /// Present a single stimulus at specified position for testing.
        /// </summary>
        public void PresentSingleStimulus(bool isRed, int positionIndex, float duration)
        {
            if (positionIndex < 0 || positionIndex >= stimulusPositions.Length)
            {
                Debug.LogError($"[StimulusPresenter] Invalid position index: {positionIndex}");
                return;
            }

            GameObject stimulus = isRed ? redSphere : blueSphere;
            string name = isRed ? "Red Sphere" : "Blue Sphere";
            
            StartCoroutine(PresentSingleStimulusCoroutine(stimulus, name, 
                stimulusPositions[positionIndex], positionNames[positionIndex], duration));
        }

        private IEnumerator PresentSingleStimulusCoroutine(GameObject stimulus, string name,
            Vector3 position, string posName, float duration)
        {
            StartCoroutine(UpdateStimulusPosition(stimulus, position));
            stimulus.SetActive(true);
            StimulusEventLogger.Instance.LogStimulusStart(name, posName, duration);

            yield return new WaitForSeconds(duration);

            stimulus.SetActive(false);
            StimulusEventLogger.Instance.LogStimulusStop(name, posName);
        }
    }
}
