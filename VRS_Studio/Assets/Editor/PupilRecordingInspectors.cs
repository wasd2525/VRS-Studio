// Inspector additions for the pupillometry components.
//
// The reference project replaces the whole inspector with a button that opens its control
// panel. Ours keeps the default inspector — the tooltips carry a lot of hard-won context —
// and adds the two things it was missing: a jump to the field map, and a reset that puts
// every tunable back to PConfig.
//
// The reset matters more than it looks. Unity serialises component values into the scene,
// so editing a default in PConfig.cs does NOT change a component that already exists. This
// button is how a scene picks up new defaults.

using UnityEditor;
using UnityEngine;
using VRS.PupilRecording;

namespace VRS.PupilRecording.EditorTools
{
    [CustomEditor(typeof(PupilDataRecorder))]
    public class PupilDataRecorderInspector : Editor
    {
        public override void OnInspectorGUI()
        {
            PupilDataRecorder recorder = (PupilDataRecorder)target;

            EditorGUILayout.Space(4f);
            using (new EditorGUILayout.HorizontalScope())
            {
                if (GUILayout.Button("Visual Field Map", GUILayout.Height(24f)))
                    VisualFieldMapWindow.ShowWindow();

                if (GUILayout.Button("Reset to PConfig defaults", GUILayout.Height(24f)))
                {
                    if (EditorUtility.DisplayDialog(
                            "Reset to PConfig defaults",
                            "Put every timing, luminance, gaze and position value back to the defaults in " +
                            "PConfig.cs?\n\nParticipant ID, protocol, group and note are left alone.",
                            "Reset", "Cancel"))
                    {
                        ResetToDefaults(serializedObject);
                    }
                }
            }

            // Positions only mean something clinically if they sit on the Humphrey grid, and the
            // count drives how long a session runs — both worth seeing without scrolling.
            if (recorder.vectorPositions != null)
            {
                EditorGUILayout.HelpBox(
                    $"{recorder.vectorPositions.Length} stimulus positions · eye under test: {recorder.eyeUnderTest}" +
                    (recorder.randomizeBrightness
                        ? "\nBrightness randomisation is ON — it confounds brightness with position."
                        : ""),
                    recorder.randomizeBrightness ? MessageType.Warning : MessageType.None);
            }

            EditorGUILayout.Space(4f);
            DrawDefaultInspector();
        }

        private static void ResetToDefaults(SerializedObject so)
        {
            F(so, "shortStimDuration", PConfig.ShortStimDuration);
            F(so, "longStimDuration", PConfig.LongStimDuration);
            F(so, "shortInterval", PConfig.ShortInterval);
            F(so, "longInterval", PConfig.LongInterval);
            F(so, "preStimulusWindow", PConfig.PreStimulusWindow);
            F(so, "shortSamplingWindow", PConfig.ShortSamplingWindow);
            F(so, "longSamplingWindow", PConfig.LongSamplingWindow);

            F(so, "shortRedCircleSize", PConfig.ShortRedCircleSize);
            F(so, "shortBlueCircleSize", PConfig.ShortBlueCircleSize);
            F(so, "longRedCircleSize", PConfig.LongRedCircleSize);
            F(so, "longBlueCircleSize", PConfig.LongBlueCircleSize);
            F(so, "shortRedLuminance", PConfig.ShortRedLuminance);
            F(so, "shortBlueLuminance", PConfig.ShortBlueLuminance);
            F(so, "longRedLuminance", PConfig.LongRedLuminance);
            F(so, "longBlueLuminance", PConfig.LongBlueLuminance);
            F(so, "fixationLightSize", PConfig.FixationLightSize);
            F(so, "fixationLightLuminance", PConfig.FixationLightLuminance);

            B(so, "includeShortRed", PConfig.IncludeShortRed);
            B(so, "includeShortBlue", PConfig.IncludeShortBlue);
            B(so, "includeLongRed", PConfig.IncludeLongRed);
            B(so, "includeLongBlue", PConfig.IncludeLongBlue);

            B(so, "randomizeBrightness", PConfig.RandomizeBrightness);
            F(so, "minBrightness", PConfig.MinBrightness);
            F(so, "maxBrightness", PConfig.MaxBrightness);

            E(so, "eyeUnderTest", (int)PConfig.DefaultEyeUnderTest);
            F(so, "eyeDetectionSeconds", PConfig.EyeDetectionSeconds);

            F(so, "gazeToleranceDeg", PConfig.GazeToleranceDeg);
            F(so, "gazeDebounceSeconds", PConfig.GazeDebounceSeconds);
            F(so, "reBaselineWindowSeconds", PConfig.ReBaselineWindowSeconds);
            F(so, "reBaselineInlierDeg", PConfig.ReBaselineInlierDeg);
            F(so, "reBaselineMaxRateDegPerSec", PConfig.ReBaselineMaxRateDegPerSec);
            F(so, "maxTotalDriftDeg", PConfig.MaxTotalDriftDeg);
            F(so, "reBaselineStallTimeoutSeconds", PConfig.ReBaselineStallTimeoutSeconds);
            F(so, "gateRearmFraction", PConfig.GateRearmFraction);
            F(so, "gateRearmHoldSeconds", PConfig.GateRearmHoldSeconds);

            F(so, "waitBeforeStart", PConfig.WaitBeforeStart);
            F(so, "delayBetweenTypes", PConfig.DelayBetweenTypes);
            I(so, "maxRetests", PConfig.MaxRetests);

            F(so, "instructionsSeconds", PConfig.InstructionsSeconds);
            F(so, "baselineQuietTailSeconds", PConfig.BaselineQuietTailSeconds);
            F(so, "finishScreenSeconds", PConfig.FinishScreenSeconds);
            F(so, "cueLeadSeconds", PConfig.CueLeadSeconds);

            SerializedProperty positions = so.FindProperty("vectorPositions");
            if (positions != null)
            {
                positions.arraySize = PConfig.VectorPositions.Length;
                for (int i = 0; i < PConfig.VectorPositions.Length; i++)
                    positions.GetArrayElementAtIndex(i).vector3Value = PConfig.VectorPositions[i];
            }

            so.ApplyModifiedProperties();
            Debug.Log("[PupilDataRecorder] Reset to PConfig defaults.");
        }

        private static void F(SerializedObject so, string path, float value)
        {
            SerializedProperty p = so.FindProperty(path);
            if (p != null) p.floatValue = value;
            else Debug.LogWarning($"[PupilDataRecorder] Reset: no serialized field '{path}'.");
        }

        private static void I(SerializedObject so, string path, int value)
        {
            SerializedProperty p = so.FindProperty(path);
            if (p != null) p.intValue = value;
        }

        private static void B(SerializedObject so, string path, bool value)
        {
            SerializedProperty p = so.FindProperty(path);
            if (p != null) p.boolValue = value;
        }

        private static void E(SerializedObject so, string path, int value)
        {
            SerializedProperty p = so.FindProperty(path);
            if (p != null) p.enumValueIndex = value;
        }
    }
}
