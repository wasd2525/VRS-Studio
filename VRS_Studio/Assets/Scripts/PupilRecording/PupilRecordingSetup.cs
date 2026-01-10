// Scene Setup Helper for Pupil Recording
// Creates necessary objects at runtime if not present in scene

using UnityEngine;
using Wave.Essence.Eye;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Automatically sets up required components for pupil recording.
    /// Attach to a GameObject in the scene to auto-configure.
    /// </summary>
    public class PupilRecordingSetup : MonoBehaviour
    {
        [Header("Auto-Create Options")]
        public bool createEyeManagerIfMissing = true;
        public bool createRecorderIfMissing = true;
        public bool createEyeVisualsIfMissing = true;
        public bool createLightControllerIfMissing = true;

        [Header("Eye Visual Settings")]
        public Material eyeballMaterial;
        public Material pupilMaterial;
        public float eyeDistance = 1.5f; // Distance in front of user
        public float eyeSeparation = 0.065f; // ~65mm interpupillary distance

        [Header("Experiment Settings")]
        [Tooltip("Start in dark mode for dilation experiments")]
        public bool startInDarkMode = true;

        private void Awake()
        {
            SetupEyeManager();
            SetupRecorder();
            SetupEyeVisuals();
            SetupLightController();
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

        private void SetupEyeVisuals()
        {
            if (!createEyeVisualsIfMissing) return;

            if (FindObjectOfType<EyeVisualization>() != null) return;

            // Create parent container
            GameObject eyeContainer = new GameObject("EyeVisualization");
            eyeContainer.transform.position = Camera.main.transform.position + Camera.main.transform.forward * eyeDistance;
            
            EyeVisualization eyeVis = eyeContainer.AddComponent<EyeVisualization>();
            eyeVis.mirrorDistance = eyeDistance;

            // Create left eye
            GameObject leftEyeObj = CreateEyeSphere("LeftEye", new Vector3(-eyeSeparation / 2f, 0, 0));
            leftEyeObj.transform.SetParent(eyeContainer.transform, false);
            eyeVis.leftEye = leftEyeObj.transform;

            // Create left pupil (positioned in front of iris)
            GameObject leftPupilObj = CreatePupilDisc("LeftPupil");
            leftPupilObj.transform.SetParent(leftEyeObj.transform, false);
            leftPupilObj.transform.localPosition = new Vector3(0, 0, 0.46f); // In front of iris
            eyeVis.leftPupil = leftPupilObj.transform;

            // Create right eye
            GameObject rightEyeObj = CreateEyeSphere("RightEye", new Vector3(eyeSeparation / 2f, 0, 0));
            rightEyeObj.transform.SetParent(eyeContainer.transform, false);
            eyeVis.rightEye = rightEyeObj.transform;

            // Create right pupil
            GameObject rightPupilObj = CreatePupilDisc("RightPupil");
            rightPupilObj.transform.SetParent(rightEyeObj.transform, false);
            rightPupilObj.transform.localPosition = new Vector3(0, 0, 0.46f);
            eyeVis.rightPupil = rightPupilObj.transform;

            Debug.Log("[PupilRecordingSetup] Created Eye Visualization");
        }

        private GameObject CreateEyeSphere(string name, Vector3 localPos)
        {
            GameObject eye = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            eye.name = name;
            eye.transform.localPosition = localPos;
            eye.transform.localScale = Vector3.one * 0.06f; // 6cm sphere (more realistic)

            // Apply material
            Renderer rend = eye.GetComponent<Renderer>();
            if (eyeballMaterial != null)
            {
                rend.material = eyeballMaterial;
            }
            else
            {
                // Default white material with slight cream tint
                rend.material.color = new Color(0.98f, 0.97f, 0.95f);
            }

            // Remove collider (not needed)
            Destroy(eye.GetComponent<Collider>());
            
            // Add iris (colored ring)
            GameObject iris = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
            iris.name = name + "_Iris";
            iris.transform.SetParent(eye.transform, false);
            iris.transform.localPosition = new Vector3(0, 0, 0.45f); // Near front of eye
            iris.transform.localScale = new Vector3(0.6f, 0.01f, 0.6f); // Flat disc
            iris.transform.localRotation = Quaternion.Euler(90, 0, 0);
            Renderer irisRend = iris.GetComponent<Renderer>();
            irisRend.material.color = new Color(0.3f, 0.2f, 0.1f); // Brown iris
            Destroy(iris.GetComponent<Collider>());

            return eye;
        }

        private GameObject CreatePupilDisc(string name)
        {
            GameObject pupil = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
            pupil.name = name;
            pupil.transform.localScale = new Vector3(0.25f, 0.02f, 0.25f); // Smaller, relative to parent eye
            pupil.transform.localRotation = Quaternion.Euler(90, 0, 0); // Face forward

            // Apply material
            Renderer rend = pupil.GetComponent<Renderer>();
            if (pupilMaterial != null)
            {
                rend.material = pupilMaterial;
            }
            else
            {
                // Default black material
                rend.material.color = Color.black;
            }

            // Remove collider
            Destroy(pupil.GetComponent<Collider>());

            return pupil;
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
