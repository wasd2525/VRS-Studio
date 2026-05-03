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
- 4 toggleable types: Short Red, Short Blue, Long Red, Long Blue (short = 0.5 s low-luminance, long = 8 s high-luminance)
- 5 fixed positions per type (Center, Nasal, Temporal, Superior, Inferior at ~20° eccentricity, hardcoded as `vectorPositions`)
- Stimuli render as `UnityEngine.UI.Image` on a head-locked World-Space Canvas (scale `0.001` so 1000 canvas units = 1 m; `UpdateHeadLockedVisuals()` repositions every frame to `headTransform + forward * 2.0`)
- Blink during a trial → `currentTrial.Failed("blink")` → trial re-enqueued up to `maxRetests` times

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

## Sibling directories

- `Popilometer-VR-main/` — original Fove+LSL Unity project this paradigm was ported from. Reference only, **not compiled** (excluded by being outside `Assets/`). Includes `otherScripts/resultCalculator.py` for analyzing `.xdf` recordings — useful prior art if asked to write CSV analysis.
- `PupilData/`, `pupil_session_*.csv`, `*.apk` at the repo root are session artifacts/builds pulled from devices; do not commit new ones (`*.apk` is gitignored).
