// Visual field map for the pupillometry paradigm.
//
// Two jobs in one window:
//   1. SHOW where the configured stimuli actually land in the participant's visual field,
//      drawn at true angular size against the clinical Humphrey 30-2 grid. Reading a list of
//      Vector3s tells you nothing about coverage; this does.
//   2. EDIT that set by clicking grid points, writing straight back to the PupilDataRecorder
//      in the open scene (undoable) instead of hand-typing metres into the Inspector.
//
// Ported and extended from the reference FOVE project's Editor/VisualFieldMapWindow.cs, which
// was a standalone picker that copied a Vector3 to the clipboard.
//
// Coordinate convention matches PupilDataRecorder.vectorPositions: metres on a plane z metres
// in front of the head, so a point sits at horizontal angle atan(x/z) and vertical atan(y/z).

using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using VRS.PupilRecording;

namespace VRS.PupilRecording.EditorTools
{
    public class VisualFieldMapWindow : EditorWindow
    {
        // ── Humphrey 30-2 grid ─────────────────────────────────────────────
        // Points sit 3° either side of the principal meridians and every 6° out from there,
        // which is what the "-2" in "30-2" means. The inclusion rule below yields exactly the
        // clinical 76 points: 19 per quadrant.
        //   level: 3°->0  9°->1  15°->2  21°->3  27°->4 ;  keep when level(|x|)+level(|y|) <= 5

        private static readonly int[] GridDegrees = { -27, -21, -15, -9, -3, 3, 9, 15, 21, 27 };
        private const float DefaultDepth = 2.0f;

        private struct FieldPoint
        {
            public int DegX, DegY;
            public int Number;          // 1..76, reading order (top row first, left to right)
            public float GridEccentricity;  // sqrt(dx^2+dy^2), the perimetry grid convention
        }

        private List<FieldPoint> fieldPoints;
        private int selectedIndex = -1;

        // ── Bound target ───────────────────────────────────────────────────
        private PupilDataRecorder recorder;
        private List<Vector3> working = new List<Vector3>();
        private bool dirty;

        // ── Canvas layout ──────────────────────────────────────────────────
        private const float CanvasSize = 430f;
        private const float FieldExtent = 33f;   // degrees from centre to canvas edge
        private const float GridDotRadius = 9f;

        private Vector2 scroll;

        // ── Skin-aware palette ─────────────────────────────────────────────
        private static bool Pro => EditorGUIUtility.isProSkin;
        private static Color ColBg => Pro ? new Color(0.15f, 0.15f, 0.15f) : new Color(0.22f, 0.22f, 0.22f);
        private static Color ColGrid => new Color(0.33f, 0.33f, 0.33f);
        private static Color ColBoundary => new Color(0.50f, 0.50f, 0.50f);
        private static Color ColDot => new Color(0.42f, 0.45f, 0.42f);
        private static Color ColActive => new Color(0.30f, 0.78f, 0.45f);
        private static Color ColOffGrid => new Color(0.95f, 0.62f, 0.20f);
        private static Color ColSelected => new Color(1.00f, 0.85f, 0.20f);
        private static Color ColLabel => new Color(0.62f, 0.62f, 0.62f);

        private GUIStyle styleMini, stylePointNum, styleTitle, styleValue;
        private bool stylesReady;

        // ── Entry point ────────────────────────────────────────────────────

        [MenuItem("Window/Pupilometer/Visual Field Map")]
        public static void ShowWindow()
        {
            VisualFieldMapWindow win = GetWindow<VisualFieldMapWindow>("Visual Field Map");
            win.minSize = new Vector2(470, 700);
            win.BindToScene();
        }

        private void OnEnable()
        {
            BuildGrid();
            BindToScene();
        }

        private void OnFocus()
        {
            // The bound recorder can be deleted, or the scene swapped, while the window is open.
            if (recorder == null) BindToScene();
        }

        private void BuildGrid()
        {
            fieldPoints = new List<FieldPoint>(76);
            foreach (int dy in GridDegrees)
            {
                foreach (int dx in GridDegrees)
                {
                    int lx = (Mathf.Abs(dx) - 3) / 6;
                    int ly = (Mathf.Abs(dy) - 3) / 6;
                    if (lx + ly > 5) continue;

                    fieldPoints.Add(new FieldPoint
                    {
                        DegX = dx,
                        DegY = dy,
                        GridEccentricity = Mathf.Sqrt(dx * dx + dy * dy)
                    });
                }
            }

            fieldPoints.Sort((a, b) => a.DegY != b.DegY ? b.DegY.CompareTo(a.DegY) : a.DegX.CompareTo(b.DegX));

            for (int i = 0; i < fieldPoints.Count; i++)
            {
                FieldPoint fp = fieldPoints[i];
                fp.Number = i + 1;
                fieldPoints[i] = fp;
            }
        }

        private void BindToScene()
        {
            recorder = FindObjectOfType<PupilDataRecorder>();
            ReloadWorkingSet();
        }

        private void ReloadWorkingSet()
        {
            working.Clear();
            if (recorder != null && recorder.vectorPositions != null)
                working.AddRange(recorder.vectorPositions);
            dirty = false;
            selectedIndex = -1;
        }

        private void InitStyles()
        {
            styleMini = new GUIStyle(EditorStyles.miniLabel) { normal = { textColor = ColLabel } };
            styleTitle = new GUIStyle(EditorStyles.boldLabel) { fontSize = 13 };
            styleValue = new GUIStyle(EditorStyles.label)
            {
                fontStyle = FontStyle.Bold,
                normal = { textColor = Pro ? new Color(0.94f, 0.94f, 0.94f) : new Color(0.10f, 0.10f, 0.10f) }
            };
            stylePointNum = new GUIStyle(EditorStyles.label)
            {
                fontSize = 8,
                fontStyle = FontStyle.Bold,
                alignment = TextAnchor.MiddleCenter,
                normal = { textColor = new Color(0.06f, 0.06f, 0.06f) }
            };
            stylesReady = true;
        }

        // ── Geometry helpers ───────────────────────────────────────────────

        /// <summary>Depth to place newly added points at — follows whatever the set already uses.</summary>
        private float WorkingDepth()
        {
            for (int i = 0; i < working.Count; i++)
                if (Mathf.Abs(working[i].z) > 1e-4f) return working[i].z;
            return DefaultDepth;
        }

        /// <summary>Position (metres) -> visual field angles (degrees), honouring the point's own depth.</summary>
        private static Vector2 ToDegrees(Vector3 p)
        {
            float z = Mathf.Abs(p.z) < 1e-4f ? DefaultDepth : p.z;
            return new Vector2(Mathf.Atan2(p.x, z) * Mathf.Rad2Deg,
                               Mathf.Atan2(p.y, z) * Mathf.Rad2Deg);
        }

        private static Vector3 FromDegrees(float degX, float degY, float depth)
        {
            return new Vector3(depth * Mathf.Tan(degX * Mathf.Deg2Rad),
                               depth * Mathf.Tan(degY * Mathf.Deg2Rad),
                               depth);
        }

        /// <summary>True angular eccentricity from straight ahead — what the gaze maths measures.</summary>
        private static float TrueEccentricity(Vector3 p)
        {
            float z = Mathf.Abs(p.z) < 1e-4f ? DefaultDepth : p.z;
            return Mathf.Atan2(new Vector2(p.x, p.y).magnitude, z) * Mathf.Rad2Deg;
        }

        /// <summary>Index into fieldPoints of the grid point this position sits on, or -1 if off-grid.</summary>
        private int GridIndexOf(Vector3 position)
        {
            Vector2 deg = ToDegrees(position);
            for (int i = 0; i < fieldPoints.Count; i++)
            {
                if (Mathf.Abs(deg.x - fieldPoints[i].DegX) < 0.75f &&
                    Mathf.Abs(deg.y - fieldPoints[i].DegY) < 0.75f)
                    return i;
            }
            return -1;
        }

        private int WorkingIndexOnGridPoint(int gridIndex)
        {
            for (int i = 0; i < working.Count; i++)
                if (GridIndexOf(working[i]) == gridIndex) return i;
            return -1;
        }

        private static Vector2 DegToPixel(float dx, float dy, Vector2 centre, float scale)
        {
            return new Vector2(centre.x + dx * scale, centre.y - dy * scale); // +deg Y is up
        }

        // ── OnGUI ──────────────────────────────────────────────────────────

        private void OnGUI()
        {
            if (!stylesReady) InitStyles();
            if (fieldPoints == null) BuildGrid();

            DrawHeader();

            scroll = EditorGUILayout.BeginScrollView(scroll);

            Rect canvasRect = GUILayoutUtility.GetRect(CanvasSize, CanvasSize, GUILayout.ExpandWidth(false));
            canvasRect.x += Mathf.Max(0f, (EditorGUIUtility.currentViewWidth - CanvasSize - 20f) * 0.5f);
            canvasRect.width = CanvasSize;
            canvasRect.height = CanvasSize;

            DrawCanvas(canvasRect);
            HandleClick(canvasRect);

            EditorGUILayout.Space(8f);
            DrawLegend();
            EditorGUILayout.Space(6f);
            DrawSelectionInfo();
            EditorGUILayout.Space(6f);
            DrawPositionList();
            EditorGUILayout.Space(8f);
            DrawActions();

            EditorGUILayout.EndScrollView();
        }

        private void DrawHeader()
        {
            Rect r = GUILayoutUtility.GetRect(position.width, 40f);
            EditorGUI.DrawRect(r, Pro ? new Color(0.12f, 0.12f, 0.12f) : new Color(0.72f, 0.72f, 0.72f));
            GUI.Label(new Rect(r.x + 10, r.y + 4, r.width - 20, 18), "Visual Field Map — Humphrey 30-2", styleTitle);

            string sub = recorder != null
                ? $"Bound to \"{recorder.gameObject.name}\" · {working.Count} stimulus positions{(dirty ? " · UNAPPLIED CHANGES" : "")}"
                : "No PupilDataRecorder in the open scene — reference mode, nothing to edit.";
            GUI.Label(new Rect(r.x + 10, r.y + 21, r.width - 20, 14), sub, styleMini);
        }

        // ── Canvas ─────────────────────────────────────────────────────────

        private void DrawCanvas(Rect c)
        {
            EditorGUI.DrawRect(c, ColBg);

            Vector2 ctr = new Vector2(c.x + c.width * 0.5f, c.y + c.height * 0.5f);
            float scale = c.width * 0.5f / FieldExtent;

            foreach (float d in new[] { 10f, 20f, 30f })
            {
                float o = d * scale;
                DrawLine(new Vector2(c.xMin, ctr.y - o), new Vector2(c.xMax, ctr.y - o), ColGrid);
                DrawLine(new Vector2(c.xMin, ctr.y + o), new Vector2(c.xMax, ctr.y + o), ColGrid);
                DrawLine(new Vector2(ctr.x - o, c.yMin), new Vector2(ctr.x - o, c.yMax), ColGrid);
                DrawLine(new Vector2(ctr.x + o, c.yMin), new Vector2(ctr.x + o, c.yMax), ColGrid);
            }

            DrawLine(new Vector2(c.xMin, ctr.y), new Vector2(c.xMax, ctr.y), ColGrid);
            DrawLine(new Vector2(ctr.x, c.yMin), new Vector2(ctr.x, c.yMax), ColGrid);
            DrawCircle(ctr, 30f * scale, ColBoundary);

            foreach (float d in new[] { 10f, 20f, 30f })
                GUI.Label(new Rect(ctr.x + d * scale + 2, ctr.y + 2, 30, 14), $"{(int)d}°", styleMini);

            // Deliberately NOT labelled nasal/temporal: which side is which flips with the eye
            // under test (for OD the right hemifield is temporal, for OS it is nasal), and this
            // rig records both eyes, so asserting either would be wrong half the time.
            GUI.Label(new Rect(c.xMax - 74, ctr.y + 4, 72, 14), "right hemifield →", styleMini);
            GUI.Label(new Rect(c.xMin + 2, ctr.y + 4, 72, 14), "← left hemifield", styleMini);
            GUI.Label(new Rect(ctr.x + 4, c.yMin + 2, 66, 14), "↑ superior", styleMini);
            GUI.Label(new Rect(ctr.x + 4, c.yMax - 15, 66, 14), "↓ inferior", styleMini);

            // Grid points, highlighted where a stimulus is configured.
            for (int i = 0; i < fieldPoints.Count; i++)
            {
                FieldPoint fp = fieldPoints[i];
                Vector2 px = DegToPixel(fp.DegX, fp.DegY, ctr, scale);
                bool active = WorkingIndexOnGridPoint(i) >= 0;
                bool sel = i == selectedIndex;

                DrawDisc(px, GridDotRadius, sel ? ColSelected : (active ? ColActive : ColDot));
                if (sel) DrawWireDisc(px, GridDotRadius + 3f, Color.white);

                GUI.Label(new Rect(px.x - GridDotRadius, px.y - GridDotRadius,
                                   GridDotRadius * 2f, GridDotRadius * 2f),
                          fp.Number.ToString(), stylePointNum);
            }

            // Configured stimuli: true angular size, plus presentation order. Off-grid positions
            // get their own colour — that is the tell that a set is not on the clinical grid.
            float stimDiameterDeg = StimulusDiameterDeg();
            for (int i = 0; i < working.Count; i++)
            {
                Vector2 deg = ToDegrees(working[i]);
                Vector2 px = DegToPixel(deg.x, deg.y, ctr, scale);
                bool onGrid = GridIndexOf(working[i]) >= 0;

                if (!onGrid)
                {
                    DrawWireDisc(px, GridDotRadius + 1f, ColOffGrid);
                    DrawWireDisc(px, GridDotRadius + 3f, ColOffGrid);
                }

                // The stimulus itself, to scale against the 6° grid spacing.
                float rPx = Mathf.Max(1.5f, stimDiameterDeg * 0.5f * scale);
                DrawDisc(px, rPx, onGrid ? Color.white : ColOffGrid);

                GUI.Label(new Rect(px.x + GridDotRadius - 1f, px.y - GridDotRadius - 7f, 26, 12),
                          (i + 1).ToString(), styleMini);
            }
        }

        /// <summary>Angular diameter of the stimulus as configured, for the to-scale overlay.</summary>
        private float StimulusDiameterDeg()
        {
            float metres = recorder != null
                ? Mathf.Max(recorder.shortRedCircleSize, recorder.shortBlueCircleSize)
                : PConfig.ShortRedCircleSize;
            return 2f * Mathf.Atan2(metres * 0.5f, WorkingDepth()) * Mathf.Rad2Deg;
        }

        private void HandleClick(Rect c)
        {
            Event e = Event.current;
            if (e.type != EventType.MouseDown || e.button != 0 || !c.Contains(e.mousePosition)) return;

            Vector2 ctr = new Vector2(c.x + c.width * 0.5f, c.y + c.height * 0.5f);
            float scale = c.width * 0.5f / FieldExtent;

            float bestDist = float.MaxValue;
            int bestIdx = -1;
            for (int i = 0; i < fieldPoints.Count; i++)
            {
                float d = Vector2.Distance(e.mousePosition,
                              DegToPixel(fieldPoints[i].DegX, fieldPoints[i].DegY, ctr, scale));
                if (d < bestDist) { bestDist = d; bestIdx = i; }
            }

            if (bestDist <= GridDotRadius * 2.2f)
            {
                selectedIndex = bestIdx;
                // Alt/right-of-selection is fiddly in a tool used one-handed; plain click selects,
                // and the toggle is an explicit button in the info panel.
                if (e.clickCount == 2) ToggleGridPoint(bestIdx);
            }
            else
            {
                selectedIndex = -1;
            }

            e.Use();
            Repaint();
        }

        private void ToggleGridPoint(int gridIndex)
        {
            if (recorder == null) return;

            int existing = WorkingIndexOnGridPoint(gridIndex);
            if (existing >= 0)
            {
                working.RemoveAt(existing);
            }
            else
            {
                FieldPoint fp = fieldPoints[gridIndex];
                working.Add(FromDegrees(fp.DegX, fp.DegY, WorkingDepth()));
            }
            dirty = true;
        }

        // ── Panels ─────────────────────────────────────────────────────────

        private void DrawLegend()
        {
            EditorGUILayout.BeginHorizontal();
            GUILayout.Space(6f);
            LegendSwatch(ColActive, "configured");
            LegendSwatch(ColDot, "grid point");
            LegendSwatch(ColOffGrid, "off-grid");
            GUILayout.FlexibleSpace();
            GUILayout.Label($"stimulus ≈ {StimulusDiameterDeg():F2}° across", styleMini);
            GUILayout.Space(6f);
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            GUILayout.Space(6f);
            GUILayout.Label("Field space, 76-point Humphrey 30-2. For OD the right hemifield is temporal; for OS it is nasal.",
                            styleMini);
            EditorGUILayout.EndHorizontal();
        }

        private void LegendSwatch(Color c, string label)
        {
            Rect r = GUILayoutUtility.GetRect(11f, 11f, GUILayout.Width(11f), GUILayout.Height(11f));
            r.y += 3f;
            EditorGUI.DrawRect(r, c);
            GUILayout.Label(label, styleMini, GUILayout.Width(70f));
        }

        private void DrawSelectionInfo()
        {
            Rect box = GUILayoutUtility.GetRect(position.width, 74f);
            box.x += 6f; box.width -= 18f;
            EditorGUI.DrawRect(box, Pro ? new Color(0.17f, 0.17f, 0.17f) : new Color(0.78f, 0.78f, 0.78f));

            if (selectedIndex < 0)
            {
                GUI.Label(new Rect(box.x + 10, box.y + 28, box.width - 20, 16),
                          "Click a grid point to inspect it. Double-click to add or remove it.", styleMini);
                return;
            }

            FieldPoint fp = fieldPoints[selectedIndex];
            Vector3 v = FromDegrees(fp.DegX, fp.DegY, WorkingDepth());
            bool configured = WorkingIndexOnGridPoint(selectedIndex) >= 0;

            GUI.Label(new Rect(box.x + 10, box.y + 6, 300, 14),
                      $"POINT #{fp.Number}{(configured ? "  ·  IN THIS PROTOCOL" : "")}", styleMini);
            GUI.Label(new Rect(box.x + 10, box.y + 22, box.width - 20, 16),
                      $"X {fp.DegX,+3}°   Y {fp.DegY,+3}°   grid ecc {fp.GridEccentricity:F1}°   true ecc {TrueEccentricity(v):F1}°",
                      styleValue);
            GUI.Label(new Rect(box.x + 10, box.y + 42, box.width - 20, 16),
                      $"Vector3({v.x:F4}f, {v.y:F4}f, {v.z:F4}f)", styleValue);

            if (recorder != null)
            {
                Rect btn = new Rect(box.xMax - 150, box.y + 44, 140, 22);
                if (GUI.Button(btn, configured ? "Remove from protocol" : "Add to protocol"))
                    ToggleGridPoint(selectedIndex);
            }
        }

        private void DrawPositionList()
        {
            EditorGUILayout.LabelField($"Stimulus positions ({working.Count})", EditorStyles.boldLabel);

            if (working.Count == 0)
            {
                EditorGUILayout.HelpBox("No positions configured — the paradigm would run no trials.", MessageType.Warning);
                return;
            }

            int offGrid = 0;
            for (int i = 0; i < working.Count; i++)
                if (GridIndexOf(working[i]) < 0) offGrid++;

            if (offGrid > 0)
            {
                EditorGUILayout.HelpBox(
                    $"{offGrid} of {working.Count} positions are not on the Humphrey 30-2 grid. " +
                    "They are still valid stimulus locations, but results cannot be indexed against " +
                    "a clinical field map or compared point-for-point with a Humphrey printout.",
                    MessageType.Info);
            }

            for (int i = 0; i < working.Count; i++)
            {
                Vector2 deg = ToDegrees(working[i]);
                int gi = GridIndexOf(working[i]);

                EditorGUILayout.BeginHorizontal();
                GUILayout.Label($"{i + 1,2}.", styleMini, GUILayout.Width(24f));
                GUILayout.Label(gi >= 0 ? $"#{fieldPoints[gi].Number}" : "off-grid",
                                styleMini, GUILayout.Width(58f));
                GUILayout.Label($"{deg.x,+6:F1}°, {deg.y,+6:F1}°", styleMini, GUILayout.Width(110f));
                GUILayout.Label($"ecc {TrueEccentricity(working[i]),5:F1}°", styleMini, GUILayout.Width(70f));

                using (new EditorGUI.DisabledScope(recorder == null))
                {
                    if (GUILayout.Button("×", GUILayout.Width(22f)))
                    {
                        working.RemoveAt(i);
                        dirty = true;
                        EditorGUILayout.EndHorizontal();
                        break;
                    }
                }
                EditorGUILayout.EndHorizontal();
            }
        }

        private void DrawActions()
        {
            EditorGUILayout.BeginHorizontal();

            using (new EditorGUI.DisabledScope(recorder == null || !dirty))
            {
                if (GUILayout.Button("Apply to recorder", GUILayout.Height(24f))) ApplyToRecorder();
                if (GUILayout.Button("Revert", GUILayout.Height(24f))) ReloadWorkingSet();
            }

            if (GUILayout.Button("Copy as C#", GUILayout.Height(24f))) CopyAsCSharp();

            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            GUILayout.Label("Presets:", styleMini, GUILayout.Width(52f));
            using (new EditorGUI.DisabledScope(recorder == null))
            {
                // The 8-point set the reference FOVE sessions actually ran (±15° and ±3° diagonals).
                if (GUILayout.Button("FOVE 8-point")) LoadPreset(new[]
                {
                    new Vector2(-15, 15), new Vector2(-3, 3), new Vector2(15, 15), new Vector2(3, 3),
                    new Vector2(15, -15), new Vector2(3, -3), new Vector2(-15, -15), new Vector2(-3, -3)
                });
                // Centre plus the four principal meridians at 21°, the nearest on-grid stand-in for
                // the paradigm's current ~20° cross.
                if (GUILayout.Button("Cross 21°")) LoadPreset(new[]
                {
                    new Vector2(3, 3), new Vector2(-21, 3), new Vector2(21, 3),
                    new Vector2(3, 21), new Vector2(3, -21)
                });
                if (GUILayout.Button("Clear")) { working.Clear(); dirty = true; }
            }
            EditorGUILayout.EndHorizontal();

            if (recorder == null)
            {
                EditorGUILayout.HelpBox(
                    "Open a scene containing a PupilDataRecorder to edit its positions. " +
                    "The map still works as a reference and \"Copy as C#\" is available.",
                    MessageType.Info);
            }
        }

        private void LoadPreset(Vector2[] degrees)
        {
            float depth = WorkingDepth();
            working.Clear();
            foreach (Vector2 d in degrees) working.Add(FromDegrees(d.x, d.y, depth));
            dirty = true;
            selectedIndex = -1;
        }

        private void ApplyToRecorder()
        {
            if (recorder == null) return;

            // SerializedObject rather than a direct field write: it registers the Undo entry and
            // dirties the scene, so the change survives a domain reload and can be ctrl-Z'd.
            SerializedObject so = new SerializedObject(recorder);
            SerializedProperty prop = so.FindProperty("vectorPositions");
            if (prop == null)
            {
                Debug.LogError("[VisualFieldMap] PupilDataRecorder has no serialized 'vectorPositions' field.");
                return;
            }

            prop.arraySize = working.Count;
            for (int i = 0; i < working.Count; i++)
                prop.GetArrayElementAtIndex(i).vector3Value = working[i];

            so.ApplyModifiedProperties();
            dirty = false;

            Debug.Log($"[VisualFieldMap] Wrote {working.Count} stimulus positions to {recorder.gameObject.name}.");
        }

        private void CopyAsCSharp()
        {
            System.Text.StringBuilder sb = new System.Text.StringBuilder();
            sb.AppendLine("new Vector3[]");
            sb.AppendLine("{");
            for (int i = 0; i < working.Count; i++)
            {
                Vector3 v = working[i];
                Vector2 deg = ToDegrees(v);
                sb.AppendLine($"    new Vector3({v.x:F4}f, {v.y:F4}f, {v.z:F4}f), // {deg.x:+0.#;-0.#;0}°, {deg.y:+0.#;-0.#;0}°");
            }
            sb.AppendLine("};");
            EditorGUIUtility.systemCopyBuffer = sb.ToString();
            ShowNotification(new GUIContent($"Copied {working.Count} positions"));
        }

        // ── Drawing primitives ─────────────────────────────────────────────

        private static void DrawLine(Vector2 a, Vector2 b, Color col)
        {
            if (Event.current.type != EventType.Repaint) return;
            Handles.BeginGUI();
            Handles.color = col;
            Handles.DrawLine(new Vector3(a.x, a.y), new Vector3(b.x, b.y));
            Handles.EndGUI();
        }

        private static void DrawCircle(Vector2 centre, float radius, Color col)
        {
            if (Event.current.type != EventType.Repaint) return;
            Handles.BeginGUI();
            Handles.color = col;
            Handles.DrawWireDisc(new Vector3(centre.x, centre.y), Vector3.forward, radius);
            Handles.EndGUI();
        }

        private static void DrawDisc(Vector2 centre, float radius, Color col)
        {
            if (Event.current.type != EventType.Repaint) return;
            Handles.BeginGUI();
            Handles.color = col;
            Handles.DrawSolidDisc(new Vector3(centre.x, centre.y), Vector3.forward, radius);
            Handles.EndGUI();
        }

        private static void DrawWireDisc(Vector2 centre, float radius, Color col)
        {
            if (Event.current.type != EventType.Repaint) return;
            Handles.BeginGUI();
            Handles.color = col;
            Handles.DrawWireDisc(new Vector3(centre.x, centre.y), Vector3.forward, radius);
            Handles.EndGUI();
        }
    }
}
