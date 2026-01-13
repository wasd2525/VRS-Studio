// Stimulus Event Logger for synchronized event logging with eye data
// Singleton service that records stimulus events to be included in CSV output

using System;
using UnityEngine;

namespace VRS.PupilRecording
{
    /// <summary>
    /// Singleton service for logging stimulus events that can be synchronized with eye data recording.
    /// Events are timestamped and can be retrieved by PupilDataRecorder for CSV output.
    /// </summary>
    public class StimulusEventLogger : MonoBehaviour
    {
        private static StimulusEventLogger _instance;
        public static StimulusEventLogger Instance
        {
            get
            {
                if (_instance == null)
                {
                    // Try to find existing instance
                    _instance = FindObjectOfType<StimulusEventLogger>();
                    
                    // Create new instance if none exists
                    if (_instance == null)
                    {
                        GameObject go = new GameObject("StimulusEventLogger");
                        _instance = go.AddComponent<StimulusEventLogger>();
                        DontDestroyOnLoad(go);
                    }
                }
                return _instance;
            }
        }

        // Current event state
        private string currentEvent = "";
        private float eventTimestamp = 0f;
        private float eventDuration = 0f;
        private bool hasActiveEvent = false;

        [Header("Settings")]
        [Tooltip("How long events remain active after being logged (seconds). 0 = single frame only.")]
        public float defaultEventDuration = 0.1f;

        private void Awake()
        {
            // Singleton pattern - destroy duplicate
            if (_instance != null && _instance != this)
            {
                Destroy(gameObject);
                return;
            }
            _instance = this;
            DontDestroyOnLoad(gameObject);
        }

        private void Update()
        {
            // Clear event after duration expires
            if (hasActiveEvent && eventDuration > 0f)
            {
                if (Time.time - eventTimestamp > eventDuration)
                {
                    ClearEvent();
                }
            }
        }

        /// <summary>
        /// Log a stimulus event. This will be included in the next CSV data point.
        /// </summary>
        /// <param name="eventName">Description of the event (e.g., "Start Red sphere in Center")</param>
        /// <param name="duration">How long the event should remain active. Default uses defaultEventDuration.</param>
        public void LogEvent(string eventName, float duration = -1f)
        {
            currentEvent = eventName;
            eventTimestamp = Time.time;
            eventDuration = duration < 0 ? defaultEventDuration : duration;
            hasActiveEvent = true;

            Debug.Log($"[StimulusEventLogger] Event logged: {eventName}");
        }

        /// <summary>
        /// Log a stimulus start event with automatic naming.
        /// </summary>
        public void LogStimulusStart(string stimulusName, string position, float duration)
        {
            LogEvent($"Start {stimulusName} at {position} for {duration:F1}s", duration);
        }

        /// <summary>
        /// Log a stimulus stop event.
        /// </summary>
        public void LogStimulusStop(string stimulusName, string position)
        {
            LogEvent($"Stop {stimulusName} at {position}");
        }

        /// <summary>
        /// Log an experiment phase event.
        /// </summary>
        public void LogPhase(string phaseName)
        {
            LogEvent($"Phase: {phaseName}", 0.5f);
        }

        /// <summary>
        /// Get the current event string for CSV output.
        /// Returns empty string if no active event.
        /// </summary>
        public string GetCurrentEvent()
        {
            return hasActiveEvent ? currentEvent : "";
        }

        /// <summary>
        /// Check if there is an active event.
        /// </summary>
        public bool HasActiveEvent()
        {
            return hasActiveEvent;
        }

        /// <summary>
        /// Clear the current event immediately.
        /// </summary>
        public void ClearEvent()
        {
            currentEvent = "";
            hasActiveEvent = false;
        }

        /// <summary>
        /// Get the timestamp of when the current event was logged.
        /// </summary>
        public float GetEventTimestamp()
        {
            return eventTimestamp;
        }
    }
}
