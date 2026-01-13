using UnityEngine;

namespace VRS.PupilRecording
{
    public class StimulusEventLogger : MonoBehaviour
    {
        public static StimulusEventLogger Instance;
        private string currentEvent = "";

        private void Awake()
        {
            if (Instance == null) Instance = this;
            else Destroy(gameObject);
        }

        public void LogEvent(string eventName)
        {
            currentEvent = eventName;
            Debug.Log($"[StimulusEvent] {eventName}");
        }

        public string GetCurrentEvent()
        {
            // Return current event and clear it so it's only logged once per frame key
            // Actually PupilDataRecorder calls this every frame.
            // We should just return the string. The Recorder writes it.
            // If we want it to persist for the duration of the event?
            // The previous logic likely just returned the string.
            return currentEvent;
        }
    }
}
