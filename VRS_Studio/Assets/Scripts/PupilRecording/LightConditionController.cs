// Light Condition Controller for Pupil Dilation Experiments
// Switches between dark and bright conditions

using UnityEngine;
using Wave.Native;
using Wave.Essence;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Controls lighting conditions for pupil dilation experiments.
    /// Switch between pitch black and bright light modes.
    /// </summary>
    public class LightConditionController : MonoBehaviour
    {
        public enum LightCondition
        {
            Dark,   // Pitch black - no lights
            Bright  // Bright white light
        }

        [Header("Current Condition")]
        public LightCondition currentCondition = LightCondition.Dark;

        [Header("Bright Mode Settings")]
        [Tooltip("Intensity of bright light (0-8)")]
        public float brightIntensity = 3f;
        
        [Tooltip("Color of bright light")]
        public Color brightColor = Color.white;

        [Header("References")]
        public Camera mainCamera;

        // Internal
        private Light[] sceneLights;
        private Light brightLight;
        private GameObject brightSphere;
        private LightCondition lastCondition;

        private void Start()
        {
            // Find main camera
            if (mainCamera == null)
                mainCamera = Camera.main;

            // Cache all scene lights
            sceneLights = FindObjectsOfType<Light>();

            // Create the bright light source
            CreateBrightLight();

            // Apply initial condition
            ApplyCondition(currentCondition);
            lastCondition = currentCondition;
            
            Debug.Log($"[LightConditionController] Started in {currentCondition} mode. Press trigger to switch.");
        }

        private bool triggerWasPressed = false;

        private void Update()
        {
            // Check if condition changed in inspector
            if (currentCondition != lastCondition)
            {
                ApplyCondition(currentCondition);
                lastCondition = currentCondition;
            }

            // Check for controller trigger press (Wave SDK)
            bool triggerPressed = false;
            
            // Try Wave SDK input - check both controllers
            try
            {
                // Check right controller trigger
                triggerPressed = WXRDevice.ButtonPress(
                    WVR_DeviceType.WVR_DeviceType_Controller_Right, 
                    WVR_InputId.WVR_InputId_Alias1_Trigger);
                
                // Also check left controller
                if (!triggerPressed)
                {
                    triggerPressed = WXRDevice.ButtonPress(
                        WVR_DeviceType.WVR_DeviceType_Controller_Left, 
                        WVR_InputId.WVR_InputId_Alias1_Trigger);
                }
            }
            catch
            {
                // Fallback: controller not available
            }
            
            // Also check keyboard/mouse for editor testing
            if (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0))
            {
                ToggleCondition();
            }
            
            // VR trigger: ButtonPress already returns true only on the frame it was pressed
            if (triggerPressed)
            {
                ToggleCondition();
            }
        }

        private void CreateBrightLight()
        {
            // Create a bright sphere that surrounds the user
            brightSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            brightSphere.name = "BrightEnvironment";
            brightSphere.transform.localScale = Vector3.one * 10f;
            
            // Flip normals by inverting scale (render inside)
            // Use a simple unlit white material
            Renderer rend = brightSphere.GetComponent<Renderer>();
            Material mat = new Material(Shader.Find("Unlit/Color"));
            mat.color = Color.white;
            rend.material = mat;
            
            // Remove collider
            Destroy(brightSphere.GetComponent<Collider>());
            
            // Create bright point light
            GameObject lightObj = new GameObject("BrightLight");
            lightObj.transform.position = Vector3.zero;
            brightLight = lightObj.AddComponent<Light>();
            brightLight.type = LightType.Point;
            brightLight.color = brightColor;
            brightLight.intensity = brightIntensity;
            brightLight.range = 20f;
            
            // Start disabled
            brightSphere.SetActive(false);
            brightLight.enabled = false;
        }

        public void ToggleCondition()
        {
            if (currentCondition == LightCondition.Dark)
                SetCondition(LightCondition.Bright);
            else
                SetCondition(LightCondition.Dark);
        }

        public void SetCondition(LightCondition condition)
        {
            currentCondition = condition;
            ApplyCondition(condition);
            lastCondition = condition;
        }

        private void ApplyCondition(LightCondition condition)
        {
            switch (condition)
            {
                case LightCondition.Dark:
                    ApplyDarkMode();
                    break;
                case LightCondition.Bright:
                    ApplyBrightMode();
                    break;
            }

            Debug.Log($"[LightConditionController] Switched to {condition} mode");
        }

        private void ApplyDarkMode()
        {
            // Disable all lights
            foreach (Light light in sceneLights)
            {
                if (light != null && light != brightLight)
                    light.enabled = false;
            }

            // Disable bright environment
            if (brightLight != null)
                brightLight.enabled = false;
            if (brightSphere != null)
                brightSphere.SetActive(false);

            // Set camera to pure black
            if (mainCamera != null)
            {
                mainCamera.clearFlags = CameraClearFlags.SolidColor;
                mainCamera.backgroundColor = Color.black;
            }

            // Disable ambient light
            RenderSettings.ambientLight = Color.black;
            RenderSettings.ambientIntensity = 0f;
        }

        private void ApplyBrightMode()
        {
            // Enable bright light
            if (brightLight != null)
            {
                brightLight.enabled = true;
                brightLight.intensity = brightIntensity;
                brightLight.color = brightColor;
            }

            // Enable bright environment sphere
            if (brightSphere != null)
                brightSphere.SetActive(true);

            // Set camera to white/bright
            if (mainCamera != null)
            {
                mainCamera.clearFlags = CameraClearFlags.SolidColor;
                mainCamera.backgroundColor = Color.white;
            }

            // Bright ambient light
            RenderSettings.ambientLight = Color.white;
            RenderSettings.ambientIntensity = 1f;
        }

        /// <summary>
        /// Get current condition as string for logging
        /// </summary>
        public string GetConditionString()
        {
            return currentCondition.ToString();
        }
    }
}
