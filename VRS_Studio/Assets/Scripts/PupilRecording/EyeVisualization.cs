// Eye Visualization for Mirror Display
// Shows animated 3D eyes that track user's real eye movement

using UnityEngine;
using Wave.Essence.Eye;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Visualizes the user's eyes in real-time based on eye tracking data.
    /// Position this in front of the user (like a mirror reflection).
    /// </summary>
    public class EyeVisualization : MonoBehaviour
    {
        [Header("Eye Models")]
        [Tooltip("Transform for the left eye model")]
        public Transform leftEye;
        
        [Tooltip("Transform for the right eye model")]
        public Transform rightEye;

        [Header("Pupil Visuals")]
        [Tooltip("Transform for left pupil (scaled based on data)")]
        public Transform leftPupil;
        
        [Tooltip("Transform for right pupil (scaled based on data)")]
        public Transform rightPupil;

        [Header("Settings")]
        [Tooltip("Base scale for pupil when diameter is 4mm")]
        public float basePupilScale = 0.25f;
        
        [Tooltip("How quickly eyes rotate to follow gaze")]
        [Range(1f, 20f)]
        public float eyeRotationSpeed = 10f;

        [Tooltip("Maximum eye rotation angle in degrees")]
        public float maxEyeAngle = 35f;

        [Header("Mirror Position")]
        [Tooltip("Distance in front of camera to display eyes")]
        public float mirrorDistance = 0.5f;
        
        [Tooltip("Follow the camera position")]
        public bool followCamera = true;

        // Cached reference
        private EyeManager eyeManager;
        private Camera mainCamera;
        private Light spotLight;
        
        // Default rotations to return to
        private Quaternion leftEyeDefaultRotation;
        private Quaternion rightEyeDefaultRotation;

        private void Start()
        {
            mainCamera = Camera.main;
            
            // Store default rotations
            if (leftEye != null)
                leftEyeDefaultRotation = leftEye.localRotation;
            if (rightEye != null)
                rightEyeDefaultRotation = rightEye.localRotation;
            
            // Only create spotlight if no light controller exists (we're not doing experiments)
            // Light controller handles all lighting for experiments
            if (FindObjectOfType<LightConditionController>() == null)
            {
                CreateSpotlight();
            }
        }
        
        private void CreateSpotlight()
        {
            GameObject lightObj = new GameObject("EyeSpotlight");
            lightObj.transform.SetParent(transform);
            lightObj.transform.localPosition = Vector3.zero;
            lightObj.transform.localRotation = Quaternion.identity;
            
            spotLight = lightObj.AddComponent<Light>();
            spotLight.type = LightType.Spot;
            spotLight.color = Color.white;
            spotLight.intensity = 2f;
            spotLight.range = 3f;
            spotLight.spotAngle = 60f;
        }

        private void Update()
        {
            // Get EyeManager
            if (eyeManager == null)
            {
                eyeManager = EyeManager.Instance;
                if (eyeManager == null) return;
            }

            // Check if tracking available
            if (!eyeManager.IsEyeTrackingAvailable())
            {
                return;
            }

            UpdateEyeRotations();
            UpdatePupilSizes();
        }
        
        private void LateUpdate()
        {
            // Position the eyes in front of the camera like a mirror
            if (followCamera && mainCamera != null)
            {
                UpdateMirrorPosition();
            }
        }
        
        private void UpdateMirrorPosition()
        {
            // Position in front of camera
            Vector3 targetPos = mainCamera.transform.position + mainCamera.transform.forward * mirrorDistance;
            transform.position = targetPos;
            
            // Face the camera (eyes look back at user)
            transform.rotation = Quaternion.LookRotation(-mainCamera.transform.forward, mainCamera.transform.up);
            
            // Point spotlight at eyes from camera
            if (spotLight != null)
            {
                spotLight.transform.position = mainCamera.transform.position;
                spotLight.transform.LookAt(transform.position);
            }
        }

        private void UpdateEyeRotations()
        {
            // Get gaze directions
            Vector3 leftGaze, rightGaze;
            
            // Base rotation should face backward (toward camera) since parent faces away from camera
            Quaternion baseRotation = Quaternion.identity;
            
            if (eyeManager.GetLeftEyeDirectionNormalized(out leftGaze) && leftEye != null)
            {
                if (leftGaze.sqrMagnitude > 0.01f)
                {
                    // Apply gaze as small angular offset from looking straight
                    // Mirror X for reflection effect, and use Y for up/down
                    float yawOffset = -leftGaze.x * maxEyeAngle;   // Left-right
                    float pitchOffset = leftGaze.y * maxEyeAngle;  // Up-down
                    
                    Quaternion gazeOffset = Quaternion.Euler(pitchOffset, yawOffset, 0);
                    Quaternion targetRotation = baseRotation * gazeOffset;
                    
                    // Smooth rotation
                    leftEye.localRotation = Quaternion.Slerp(
                        leftEye.localRotation, 
                        targetRotation, 
                        Time.deltaTime * eyeRotationSpeed
                    );
                }
            }

            if (eyeManager.GetRightEyeDirectionNormalized(out rightGaze) && rightEye != null)
            {
                if (rightGaze.sqrMagnitude > 0.01f)
                {
                    // Apply gaze as small angular offset
                    float yawOffset = -rightGaze.x * maxEyeAngle;
                    float pitchOffset = rightGaze.y * maxEyeAngle;
                    
                    Quaternion gazeOffset = Quaternion.Euler(pitchOffset, yawOffset, 0);
                    Quaternion targetRotation = baseRotation * gazeOffset;
                    
                    // Smooth rotation
                    rightEye.localRotation = Quaternion.Slerp(
                        rightEye.localRotation, 
                        targetRotation, 
                        Time.deltaTime * eyeRotationSpeed
                    );
                }
            }
        }

        private void UpdatePupilSizes()
        {
            // Get pupil diameters
            float leftDiameter, rightDiameter;

            if (eyeManager.GetLeftEyePupilDiameter(out leftDiameter) && leftPupil != null)
            {
                // Scale pupil based on diameter (typical range 2-8mm)
                // Normalize around 4mm as baseline
                float scaleFactor = leftDiameter / 4f;
                float newScale = basePupilScale * scaleFactor;
                leftPupil.localScale = new Vector3(newScale, newScale, leftPupil.localScale.z);
            }

            if (eyeManager.GetRightEyePupilDiameter(out rightDiameter) && rightPupil != null)
            {
                float scaleFactor = rightDiameter / 4f;
                float newScale = basePupilScale * scaleFactor;
                rightPupil.localScale = new Vector3(newScale, newScale, rightPupil.localScale.z);
            }
        }

        private Quaternion ClampRotation(Quaternion target, Quaternion neutral, float maxAngle)
        {
            float angle = Quaternion.Angle(neutral, target);
            if (angle > maxAngle)
            {
                return Quaternion.Slerp(neutral, target, maxAngle / angle);
            }
            return target;
        }

        /// <summary>
        /// Get current pupil sizes for UI display
        /// </summary>
        public bool GetCurrentPupilSizes(out float left, out float right)
        {
            left = 0;
            right = 0;
            
            if (eyeManager == null || !eyeManager.IsEyeTrackingAvailable())
                return false;

            eyeManager.GetLeftEyePupilDiameter(out left);
            eyeManager.GetRightEyePupilDiameter(out right);
            return true;
        }
    }
}
