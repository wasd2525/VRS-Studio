using UnityEngine;

namespace VRS.PupilRecording
{
    public class LightConditionController : MonoBehaviour
    {
        public enum LightCondition { Dark, Bright }
        public LightCondition currentCondition = LightCondition.Dark;

        private Camera mainCamera;
        private Light sceneLight;
        private GameObject brightSphere; // Optional for extra brightness

        private void Start()
        {
            mainCamera = Camera.main;
            if (mainCamera == null) mainCamera = FindObjectOfType<Camera>();

            // Create a general scene light if missing
            sceneLight = FindObjectOfType<Light>();
            if (sceneLight == null)
            {
                GameObject lObj = new GameObject("SceneLight");
                sceneLight = lObj.AddComponent<Light>();
                sceneLight.type = LightType.Directional;
            }

            ApplyCondition();
        }

        private void Update()
        {
            // Input to Toggle
            // Keyboard Space
            if (Input.GetKeyDown(KeyCode.Space))
            {
                ToggleCondition();
            }

            // VR Controller Input (Generic Unity XR or Mouse Click as fallback)
            if (Input.GetMouseButtonDown(0))
            {
                // Simple Click/Trigger
                ToggleCondition();
            }
        }

        public void ToggleCondition()
        {
            currentCondition = (currentCondition == LightCondition.Dark) ? LightCondition.Bright : LightCondition.Dark;
            ApplyCondition();
            Debug.Log($"[LightCondition] Switched to {currentCondition}");
        }

        public void ApplyCondition()
        {
            if (mainCamera == null) return;

            if (currentCondition == LightCondition.Dark)
            {
                // Dark Mode
                mainCamera.backgroundColor = Color.black;
                mainCamera.clearFlags = CameraClearFlags.SolidColor;
                RenderSettings.ambientLight = Color.black;
                if (sceneLight != null) sceneLight.intensity = 0.0f;
                if (brightSphere != null) brightSphere.SetActive(false);
            }
            else
            {
                // Bright Mode
                mainCamera.backgroundColor = Color.white;
                mainCamera.clearFlags = CameraClearFlags.SolidColor;
                RenderSettings.ambientLight = Color.white;
                if (sceneLight != null) sceneLight.intensity = 1.0f;
                
                // Ensure visualization is visible against white? 
                // Maybe not needed if using standard materials.
            }
        }

        public string GetConditionString()
        {
            return currentCondition.ToString();
        }
    }
}
