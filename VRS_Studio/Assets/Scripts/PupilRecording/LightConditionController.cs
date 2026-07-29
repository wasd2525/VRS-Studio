using UnityEngine;

namespace VRS.PupilRecording
{
    public class LightConditionController : MonoBehaviour
    {
        public enum LightCondition { Dark, Bright }

        /// <summary>Written to the CSV when no controller is present, so the column vocabulary stays closed.</summary>
        public const string UnknownCondition = "Unknown";

        public LightCondition currentCondition = LightCondition.Dark;

        [Tooltip("Allow the Space key to toggle the condition. Desktop testing convenience; harmless on device.")]
        public bool allowKeyboardToggle = true;

        [Tooltip("Allow a click/trigger to toggle the condition. OFF by default: on a headset this fires from a " +
                 "controller trigger and silently changes the logged light condition mid-session.")]
        public bool allowClickToggle = false;

        /// <summary>Raised on every toggle so the recorder can log it into the event stream.</summary>
        public event System.Action<LightCondition> ConditionChanged;

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
            if (allowKeyboardToggle && Input.GetKeyDown(KeyCode.Space))
            {
                ToggleCondition();
            }

            // Deliberately opt-in: a controller trigger registers as mouse button 0 on this platform,
            // so leaving this on meant a stray trigger pull could flip the recorded light condition
            // in the middle of a session with no indication in the data.
            if (allowClickToggle && Input.GetMouseButtonDown(0))
            {
                ToggleCondition();
            }
        }

        public void ToggleCondition()
        {
            currentCondition = (currentCondition == LightCondition.Dark) ? LightCondition.Bright : LightCondition.Dark;
            ApplyCondition();
            Debug.Log($"[LightCondition] Switched to {currentCondition}");
            ConditionChanged?.Invoke(currentCondition);
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
