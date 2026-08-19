# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project

Unity 2021.3.16f1 VR application for **HTC Vive Focus** (Android target, IL2CPP/ARM64). Bundle ID `com.htc.vrs.vrsstudio.dev`, Min/Target SDK 29. The app records pupil/gaze/blink data during visual stimulus paradigms or video playback.

There is **no CI, no test runner, and no command-line build script**. All build/run goes through the Unity Editor; install via ADB from `Build/`.

## Build & Deploy

Open in Unity 2021.3.16f1, set platform to Android, then `File → Build And Run` (or `Build`) with the desired scene enabled in `ProjectSettings/EditorBuildSettings.asset`. Two scenes act as alternate entry points — only one should be enabled at a time:

- `Assets/Scenes/PupilRecording.unity` — stimulus paradigm session (currently enabled)
- `Assets/Scenes/VideoRecording.unity` — video-playback session (currently disabled)
- `Assets/Scenes/BaseScene.unity` — empty/template

Vive packages come from a **scoped registry** (`https://npm-registry.vive.com`) plus GitHub URLs in `Packages/manifest.json` (wave.essence/native/xrsdk). After dependency churn, delete `Library/` to force a clean re-resolve.

ADB is bundled with the Wave XR SDK package, not on PATH. Local settings already permit invoking it as:
```
"$ADB" shell ls /sdcard/Android/data/
```
where `$ADB = ~/AppData/Local/Unity/cache/packages/npm-registry.vive.com/com.htc.upm.wave.xrsdk@<ver>/Runtime/DirectPreview/Binary/RRServer/Tools/ADB/adb.exe`. Recorded CSVs live on the device at `Application.persistentDataPath/PupilData/` (i.e. `/sdcard/Android/data/com.htc.vrs.vrsstudio.dev/files/PupilData/`).

## Architecture

### Two parallel session types, one CSV format

`PupilDataRecorder` (paradigm) and `VideoSessionRecorder` (video) are **independent MonoBehaviours** that each open their own `StreamWriter` with `AutoFlush = true` and write **identical 20-column CSV schemas** so downstream analysis is shared. The header is in both `Start()` methods — keep them in sync if the schema changes.

Eye data sources used by both:
- `Wave.Essence.Eye.EyeManager.Instance` — pupil diameter, gaze direction, gaze origin
- `Wave.OpenXR.InputDeviceEye` — blink expressions (`LEFT_BLINK`/`RIGHT_BLINK`); must be activated once via `ActivateEyeExpression(true)`

Recording only starts after `eyeManager.IsEyeTrackingAvailable()` flips true; `sessionStartTime` is captured at that moment so timestamps are zero-based to first valid sample.

### Paradigm logic lives inside `PupilDataRecorder`

The stimulus paradigm (timing, luminance, retest-on-blink, position rotation) is **integrated directly into `PupilDataRecorder.cs`**, driven by `ShowStimuliSequence()` coroutine. It is a Unity port of the Fove-based `Popilometer-VR-main/StimuTest.cs` (kept in-tree for reference; do not modify, it doesn't compile here — references `Fove.Unity` and `LSL`).

Stimulus presentation:
- **All defaults live in `PConfig.cs`**, mirroring the reference project's file of the same name. Anything under "Shared with the reference rig" must stay byte-identical to theirs or the two datasets stop being comparable. Note Unity serialises component values into the scene, so editing a default only reaches components created at runtime — use the **Reset to PConfig defaults** button on the recorder's inspector otherwise.
- 4 toggleable types: Short Red, Short Blue, Long Red, Long Blue (short = 0.5 s at luminance 0.5, long = 5 s at 1.0; red and blue always equal). `randomizeBrightness` is **off** by default and should stay off — it assigns one brightness per position, confounding brightness with eccentricity at ~1 trial per level. The reference protocol holds luminance fixed per session and steps it across sessions.
- 8 default positions on the **Humphrey 30-2** grid (±15° and ±3° diagonals), from `PConfig.VectorPositions`
- Stimuli render as **circular** `UnityEngine.UI.Image` (procedural sprite from `CircleSprite()`) on a head-locked World-Space Canvas (scale `0.001` so 1000 canvas units = 1 m; `UpdateHeadLockedVisuals()` repositions every frame to `headTransform + forward * 2.0`). A bare Image is a square quad — 27% more emitting area than a disc of the same nominal size — which is why the sprite is not optional.
- **Sampling windows are measured from stimulus ONSET**, matching the reference rig: a short trial holds fixation 1.5 s past onset though the light is out at 0.5 s; a long trial releases at 4 s while the 5 s light is still on. `PostWindowSettleSeconds` and `IntervalWait()` reproduce their spacing exactly (verified: onset-to-onset 5.25 s short / 13.25 s long).
- Trial waits are **unconditional** — a failed trial runs its full timeline so it delivers the same light dose and recovery time as a clean one. Immediate feedback is the error tone, not an early exit.
- Blink during a trial → `currentTrial.Failed("blink")` → trial re-enqueued up to `maxRetests` times
- `AudioInstructions` plays `start` once at the trial sequence, a beep 0.25 s before each trial arms, a double beep when the measured window closes, and `error1` the instant a trial fails. Cues are audio, not on-screen text, because this rig measures pupil response to light and a visual instruction is a luminance step inside the measurement. Clips live in `Assets/Resources/`; a missing clip warns once then stays silent.

### Operator control (`OperatorStatusServer`)

Serves a control page over WiFi from the headset (`http://<headset-ip>:8080/`, URL logged at startup and shown in-headset). Two hard constraints, both load-bearing:

- **Hand-rolled HTTP over `TcpListener`, not `HttpListener`** — this project builds IL2CPP with `managedStrippingLevel 4`, which breaks HttpListener's reflection-heavy internals.
- **No Unity API on the server thread.** The main thread renders a JSON snapshot and parks the string; the server thread only hands it out. Commands go the other way through a bounded queue (`Enqueue` from the socket thread, `DrainCommands()` on the main thread every frame).

Endpoints: `GET /` (page), `GET /status.json` (~2 Hz session snapshot), `GET /live.json` (~10 Hz live eye feed), `POST /api/start`, `POST /api/config?…`. **Parameters ride in the query string, not a request body** — that keeps the socket server from having to parse headers, content-length and chunked encoding. Because of that the request line is the size limit for a whole config: it allows `RequestLineLimit` (8 KB), and a line that overruns it is **dropped entirely** rather than handed on as a fragment, which would apply half a config silently.

`/api/config` keys — only the keys present are touched, so the page can send one field at a time, and all of them are refused once `ConfigLocked`:

| Key | Meaning | Bounds |
|---|---|---|
| `short_red` `short_blue` `long_red` `long_blue` | luminance | clamped 0–1 |
| `dur_short` `dur_long` | stimulus duration, seconds | clamped 0.02–120 |
| `size_short_red` `size_short_blue` `size_long_red` `size_long_blue` | stimulus **diameter** in metres on the fixation plane | clamped 0.001–1 |
| `pos` | positions as `x,y,z;x,y,z;…` metres | ≤64 points, z 0.05–100, **all-or-nothing** |
| `eye` | `Auto` / `Left` / `Right` / `Both` | — |

Scalars **clamp** but positions **reject wholesale**: a half-applied position list is a session that quietly tested different points than the operator asked for, and the sidecar would faithfully record the wrong intent. NaN/Infinity are rejected rather than clamped — `Mathf.Clamp(NaN)` returns NaN, which would poison a duration for the whole run.

Luminance, size and duration are all baked into `StimulusType` (and the `Image`'s `sizeDelta`) by `CreateStimuli()`, which runs *before* the operator gate — so `SyncStimulusSettings()` pushes all three back onto the built stimuli, both on each config change and once more at lock. `vectorPositions` needs no such sync: `EnqueuePositions()` reads it per block during the trial sequence, i.e. after the lock. Sampling windows are deliberately *not* operator-settable — they are a separate protocol parameter measured from onset, so changing a duration does not move them.

The page itself lives in `Assets/Resources/OperatorPage.html`, loaded as a TextAsset before the socket thread starts (a built-in fallback page serves if the asset is missing). It renders a **live 3D eye pair** — raw WebGL, zero dependencies, because the lab network may be offline — plus a 60 s pupil-diameter sparkline and the control/stats UI, shown facing the participant (OD on screen-left, yaw mirrored). The feed behind it is a `LiveSampleRing` (192 samples ≈ 2.5 s) that `PupilDataRecorder.CaptureLiveSample()` fills every frame, **including while the session is parked** — the operator watches the patched eye go invalid before pressing Start. `BuildLiveJson` serialises samples as 13-value positional tuples that the page indexes positionally: **keep `BuildLiveJson` and `OperatorPage.html` in sync**. Page extras: `?demo=1` (or opening the file directly) runs it on synthetic data with no headset, and dropping a session CSV onto the eyes panel replays it — pupil/blink exactly as recorded, gaze relative to a rolling reference since the CSV carries no head pose.

Session flow: the participant types their ID in-headset → the session parks at "waiting for operator" (`requireOperatorStart`) → the operator sets stimulus luminance and the eye under test on the page → presses Start. Config then **locks** (`ConfigLocked`) so the protocol cannot change mid-run, and the sidecar written immediately after describes the session that actually ran. If the server is not running the gate is skipped with a warning — a failed server must never strand a participant in a headset.

`Assets/Plugins/Android/AndroidManifest.xml` must keep `android.permission.INTERNET`.

**Testing it offline:** the scratchpad harness compiles the real `OperatorStatusServer.cs` against a ~60-line UnityEngine shim (including a `Resources.Load<TextAsset>` registry for the page asset) plus a stub recorder, invokes the private `Start`/`Update`/`OnDestroy` by reflection, and drives it with a real `HttpClient` — 34 tests over live sockets covering routing, the `/live.json` wire format (tuple arity, 0/1 bools, the 1.5 s window, invariant culture under de-DE), the `/status.json` config fields (durations, sizes at 3 decimals, `positions` as `[[x,y,z],…]`), a 64-position query surviving the request line and an oversized one being dropped whole, query decoding, the command hand-off, queue bounding and Content-Length byte correctness. Two more suites sit alongside it: `postest.js` runs the page's `parsePositions`/`eccDeg` in Node (30 cases), and `parsetest/` brace-extracts `TryPositions`/`TryRange`/`TryCoord` **verbatim from `PupilDataRecorder.cs`** and runs them against a 15-line Vector3/Mathf shim (30 cases) — so the page's accept/reject rules and the recorder's are tested against the same table and cannot drift apart. `dotnet run -- serve` keeps the real server up on synthetic eye data so the actual served page can be eyeballed in a browser; headless Chrome (`--headless=new --enable-unsafe-swiftshader --user-data-dir=<fresh dir> --screenshot=<abs path>`) renders it without any extension — the isolated user-data-dir is required or the screenshot write fails with access-denied.

### Monocular testing (`eyeUnderTest`)

The reference protocol tests **one eye at a time with the fellow eye physically patched**. `EyeUnderTest.Auto` counts valid pupil frames per eye for 5 s and picks the open one — a covered eye returns none. If *both* eyes report valid data the patch is missing, so it stays binocular (OU) and warns loudly rather than mislabelling a binocular exposure as monocular (the reference rig picks one anyway; ours does not).

Everything trial-gating must then follow the tested eye, and this is the part that breaks silently if forgotten: `trackingLost` and `expressionBlink` are computed only over the measured eye(s) — the old `!leftValid || !rightValid` would fail *every* trial with one eye patched — and the fixation gate, calibration and drift baseline all read gaze via `TryGetGateGaze()` rather than combined gaze. The CSV still logs both eyes' columns; which one is the signal is recorded in the sidecar (`eye`, `eye_mode`) and in the filename (`pupil_<id>_<OD|OS|OU>_<protocol>_<datetime>.csv`).

`occludeFellowEyeInSoftware` additionally restricts `Camera.stereoTargetEye`. It is **off by default and unverified on the Focus Vision** — it changes the XR render path; the physical patch is the protocol.

Events are logged through `LogEvent(name, details)` which stashes a string into `currentEventString`; the next `SamplePupilAndWriteDataPoint()` call writes it to that frame's CSV row and clears it (so an event appears on **exactly one row**, not duplicated). Don't change this single-frame-flush invariant without updating downstream parsers.

### Auto-setup pattern

`PupilRecordingSetup` (attached to a scene GameObject) creates `EyeManager`, `PupilDataRecorder`, and `LightConditionController` in `Awake()` if missing. This means the recorder can run from a near-empty scene; conversely, dropping a `PupilDataRecorder` directly into a scene also works. `LightConditionController` toggles dark/bright background on Space or mouse-click and exposes `GetConditionString()`, which the recorder samples per-frame into the `light_condition` CSV column.

### Deprecated/legacy in `Assets/Scripts/PupilRecording/`

These files predate the integrated paradigm and are **not on the active code path** but still compile:
- `VisualStimulusController.cs` — old standalone stimulus loop (replaced by `ShowStimuliSequence()` in `PupilDataRecorder`)
- `StimulusEventLogger.cs` — old event-string singleton (replaced by `currentEventString` field)
- `EyeVisualization.cs` — mirrored 3D-eye visualization (explicitly disabled in `PupilRecordingSetup.SetupEyeVisuals()` — early-returns)

Don't extend these; either delete them or change behaviour through `PupilDataRecorder` instead.

### Common namespaces

- `VRS.PupilRecording` — recording, paradigm, light, video session
- `VRSStudio.Common.Input` (`Assets/Scripts/Common/InputDeviceTools.cs`) — generic XR controller/hand/tracker/HMD wrappers around `UnityEngine.XR.InputDevices`. Used by other scripts that consume button/axis state with frame-coherent caching.
- `VRSStudio.Utils` — currently almost empty (just `HandState`)

### Editor tooling

`Assets/Editor/` contains workflow helpers, not part of runtime: `HierarchyTools` (search/select/replace in Hierarchy window), `GrepCSharpInFolder` (regex grep across .cs files via `Assets/Wave/Grep c# in folder` context-menu), `MeshSaveEditor`.

`VisualFieldMapWindow` (`Window → Pupilometer → Visual Field Map`) is the exception that touches experiment config: it draws the clinical 76-point **Humphrey 30-2** perimetry grid, overlays the `PupilDataRecorder`'s configured `vectorPositions` at true angular size, flags any position that is off-grid, and writes edits back through `SerializedObject` (undoable). The paradigm's default ~20° cross is *not* on the Humphrey grid; the reference project's recorded sessions used grid points at ±15° and ±3°. Positions only mean something clinically if they sit on the grid — that is what makes a pupil-derived field map comparable point-for-point with a Humphrey printout.

**Compile-checking editor scripts offline:** same Roslyn setup as runtime scripts, plus `-r:Editor/Data/Managed/UnityEditor.dll` and a reference to the compiled runtime assembly.

## Sibling directories

- `Popilometer-VR-main/` — original Fove+LSL Unity project this paradigm was ported from. Reference only, **not compiled** (excluded by being outside `Assets/`). Includes `otherScripts/resultCalculator.py` for analyzing `.xdf` recordings — useful prior art if asked to write CSV analysis.
- `test from fove with oled/` — five FOVE-OLED sessions in LabRecorder `.xdf` form, plus `converted_csv/` (pupil / events / merged CSVs per session). The pupil stream is **one channel of radius in mm** (`-1` = invalid), so diameter = 2 × value. Used for the Aug 2026 OLED-vs-LCD dark-adaptation comparison.
- A **newer upstream** of the reference project lives outside the repo at `~/Downloads/pupilometer-unity-master/`. It is ahead of `Popilometer-VR-main/`: monocular eye auto-detection, per-block background adaptation, audio cues, the Humphrey grid editor window. Consult it before re-deriving paradigm behaviour; several differences are deliberate on our side (gaze drift correction, CSV instead of LSL, blink vs tracking-loss split).
- `PupilData/`, `pupil_session_*.csv`, `*.apk` at the repo root are session artifacts/builds pulled from devices; do not commit new ones (`*.apk` is gitignored).
