#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,Wave.Essence.BodyTracking.BodyAvatar>
struct Dictionary_2_tAB037891862C09787403230024276695AB421CF1;
// System.Collections.Generic.Dictionary`2<System.Int32,Wave.Essence.BodyTracking.BodyPose>
struct Dictionary_2_t22CBF56B2559632FCC876DE7BA5D1DCB7DB4F78E;
// System.Collections.Generic.Dictionary`2<System.Int32,Wave.Essence.BodyTracking.BodyRotationSpace_t>
struct Dictionary_2_tE7EF520458769CD7EE94299E9C156CF21A2DDFF1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Wave.Essence.BodyTracking.Demo.DebugRotation>
struct List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Wave.Essence.BodyTracking.Joint>
struct List_1_t689D8A8DC128753FB7BF7EE328C91AD9107EC7CC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Wave.Essence.BodyTracking.RolePoseTracker>
struct List_1_t804C83E790ED13E581E5AD28404D565BBBA8D4FD;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Wave.Essence.BodyTracking.Demo.DebugRotation[]
struct DebugRotationU5BU5D_t8FD980370B9843A4B334658D7C8C6F433F850031;
// Wave.Essence.BodyTracking.Demo.DefineTrackerLocation[]
struct DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Wave.Essence.BodyTracking.Joint[]
struct JointU5BU5D_tDAB68DE7B3AA83402919C2731DBF1ECE678C80A0;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Wave.Essence.BodyTracking.RotateSpace[]
struct RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Wave.Essence.BodyTracking.RuntimeDependency.TrackerLocation[]
struct TrackerLocationU5BU5D_t779BB5EB03019E67E73ED0ED3D0FD5990CE787BF;
// Wave.Essence.BodyTracking.RuntimeDependency.TrackerType[]
struct TrackerTypeU5BU5D_t3096DF81674F90340D70CBBBF554FC134E34D3C0;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Wave.Essence.BodyTracking.BodyRoleData/RoleData[]
struct RoleDataU5BU5D_t5539B1E11CCB31C62F8ABE3F6216981A355DCFE0;
// Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase[]
struct TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E;
// Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase[]
struct TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Wave.Essence.BodyTracking.AvatarCoordinate.AvatarCoordinateProducer
struct AvatarCoordinateProducer_t04158D4D303FD54139E07A72FC9153601FD72BBB;
// Wave.Essence.BodyTracking.Body
struct Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074;
// Wave.Essence.BodyTracking.BodyAvatar
struct BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2;
// Wave.Essence.BodyTracking.BodyManager
struct BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E;
// Wave.Essence.BodyTracking.BodyPose
struct BodyPose_tB35A39B83D3FE441F5CD423228BDC7E1DD828ECD;
// Wave.Essence.BodyTracking.BodyRedirectives
struct BodyRedirectives_t5A7D7348ACBE97EE26D006CCE44E0DDE3677FCE2;
// Wave.Essence.BodyTracking.BodyRoleData
struct BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C;
// Wave.Essence.BodyTracking.Demo.BodyTrackingSample
struct BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// Wave.Essence.BodyTracking.CalibrationStatusDelegate
struct CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType
struct ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Wave.Essence.BodyTracking.Demo.DebugRotation
struct DebugRotation_tC0BD5B64718318E12F1DB9CF53E0DD6ABC713974;
// Wave.Essence.BodyTracking.Demo.DebugRotationMaster
struct DebugRotationMaster_tD850C06B64021CBE302BA4654B71B4F3BA8D9945;
// Wave.Essence.BodyTracking.Demo.DefineTrackerLocation
struct DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Wave.Essence.BodyTracking.Demo.DrawBone
struct DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UniHumanoid.Humanoid
struct Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844;
// Wave.Essence.BodyTracking.Demo.HumanoidIKMenu
struct HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C;
// Wave.Essence.BodyTracking.Demo.HumanoidIKSample
struct HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670;
// Wave.Essence.BodyTracking.HumanoidTracking
struct HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B;
// Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu
struct HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36;
// Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport
struct HumanoidTrackingTeleport_tE1CF2F0A4FE9B5BFC9EE6965DCE15FD782F39915;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Wave.Essence.BodyTracking.Demo.ProfilerLogger
struct ProfilerLogger_tFF821F76D76E2314BBF6C2DEF88D8E2E9234FB21;
// System.Threading.ReaderWriterCount
struct ReaderWriterCount_tD7361BF31DEB70DC7319519D215F400357543333;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Wave.Essence.BodyTracking.RolePoseController
struct RolePoseController_t706AE56FE73EFD4EA44F938D506D6CFE2A934DB9;
// Wave.Essence.BodyTracking.RolePoseHand
struct RolePoseHand_t1077BA77E30CBE89252EAB5A70028A3F86442B5E;
// Wave.Essence.BodyTracking.RolePoseHead
struct RolePoseHead_tA28A41EADF5B284248557F43EC13EAAF7513F8EB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Wave.Essence.BodyTracking.TrackerExtrinsic
struct TrackerExtrinsic_t2ADD4856F681D705255D0487C9F05854A716A25A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase
struct TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3;
// Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase
struct TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46;
// Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41
struct U3CStartBodyTrackingU3Ed__41_t4040ACE24B90527EA05CCF98736A60F606F97025;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50
struct U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BodyTrackingUtils_t33B372876873BF1E13AE6300C400B89AEC3FA7B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingMode_t9EC95BC927F3492A7150CA83FF237FD0AB166122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingStatus_t0D732C0B3660A967CFAAA2BA0CBF95F443AEEBEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03A4B0CD9FE22CECAD9E6A863C9C44005B6D48B6;
IL2CPP_EXTERN_C String_t* _stringLiteral06038716F05A3FE1407EE9A2ACCD7E36F72E7108;
IL2CPP_EXTERN_C String_t* _stringLiteral06A589F5065EA97BDF1E93AFFBE9135C8733EAC9;
IL2CPP_EXTERN_C String_t* _stringLiteral08A809AE3B6353FBA0B954B3E9CED3C73E66D352;
IL2CPP_EXTERN_C String_t* _stringLiteral098F8A4779DBC39DF7367A03881E99F26B45FFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral09C7F4F9D456A44D2A8B20A818F795B573360C46;
IL2CPP_EXTERN_C String_t* _stringLiteral0B7DD0B7255D0E9024CA6794DB22A9E36D268CE1;
IL2CPP_EXTERN_C String_t* _stringLiteral0BB138D3A1CA8AEA3853ABF76CF06BB42C8A041C;
IL2CPP_EXTERN_C String_t* _stringLiteral11B0EB5A93FDF67D084001C6950C4D8B331A6B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral12B42E3755A3A673EB22E95E3E390BA13CA9483C;
IL2CPP_EXTERN_C String_t* _stringLiteral14F013A6CE319186B35EDC610B5093C434FAE184;
IL2CPP_EXTERN_C String_t* _stringLiteral157A71014B374913FB1A7E367187C0C8CA55C44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1BB61D0A4F44E67245D613929F94143F88828421;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8D175CFF10865393C8B56F7ADE518D69A05F04;
IL2CPP_EXTERN_C String_t* _stringLiteral1F55274EC8AB664993C7E308EED424DCEE5F791C;
IL2CPP_EXTERN_C String_t* _stringLiteral221547242E067F98F093F2EE57C29BB9DEC34F99;
IL2CPP_EXTERN_C String_t* _stringLiteral224B2F1D7307815C960A10FBB26DBE95F30A9443;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA0A5FC5480FE9917E00A23283E02B76EBCB997;
IL2CPP_EXTERN_C String_t* _stringLiteral2E267F9FC56B19B3462CE93DD93B5139B6D5D01B;
IL2CPP_EXTERN_C String_t* _stringLiteral2FB7AA8BBF5BD690367F5418DE81DF2D900EA3E9;
IL2CPP_EXTERN_C String_t* _stringLiteral31AFCC8DBC1882352662FAF08D051FDB4641295F;
IL2CPP_EXTERN_C String_t* _stringLiteral32465D04B7AFA7FA2B0613B7354E6A34A7F53284;
IL2CPP_EXTERN_C String_t* _stringLiteral32C3C4AE250B0499299A9ECB7523690CEBFE8C80;
IL2CPP_EXTERN_C String_t* _stringLiteral34D93BFDB064722883F4297523126AABAEA47E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral3A6926D5AB1CE09ED545EFAB43BA4835EFB4D6C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3A80503D4C8FFBEA73435CFD54FB066A8E491D59;
IL2CPP_EXTERN_C String_t* _stringLiteral3F45847426A5CCEBD2A2226DC7D1EA311A3121E7;
IL2CPP_EXTERN_C String_t* _stringLiteral3FDF36B419CF8B004E46F0EE7A06A3A3600B0283;
IL2CPP_EXTERN_C String_t* _stringLiteral416AF80C9E053FC2A2352CC78AE97C2B8C7137B5;
IL2CPP_EXTERN_C String_t* _stringLiteral42E3CEFC75FEDC65FDCB5FE388AFAB158E6AB804;
IL2CPP_EXTERN_C String_t* _stringLiteral43D1AE57667F16420A902D179524489E608F1BBB;
IL2CPP_EXTERN_C String_t* _stringLiteral45848DAB90A733703EDCF887E1EBFE9FE1673483;
IL2CPP_EXTERN_C String_t* _stringLiteral47E329D01F89BF548BE92B1B9E470A6CA1EDC6E1;
IL2CPP_EXTERN_C String_t* _stringLiteral4B57AD75227D130C3B3341104071D201EE7CB4B1;
IL2CPP_EXTERN_C String_t* _stringLiteral4C6A60FF727A9E5688537B669EC64B291A4E5055;
IL2CPP_EXTERN_C String_t* _stringLiteral4F7A7B752C234C0A058A1BFADF7816B20C2C2691;
IL2CPP_EXTERN_C String_t* _stringLiteral51A8FF8E280CC099C1F7178FAB191DDA1CF694BA;
IL2CPP_EXTERN_C String_t* _stringLiteral536EE7EC962721792F5B244FDC6F1CC925161129;
IL2CPP_EXTERN_C String_t* _stringLiteral549B9D496B9C9EDE7280BA216D09059C895E4ECB;
IL2CPP_EXTERN_C String_t* _stringLiteral56E72C17B6BC27637F9BFE2D9CA774AD88A7F454;
IL2CPP_EXTERN_C String_t* _stringLiteral57286D353A3D798A52FD18839E2D04711F6CBF81;
IL2CPP_EXTERN_C String_t* _stringLiteral5C1A828F68D8118F61169D99FE4E3DC6614D4D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral5DACB1929F40B4B9D63CA5DD140F5A0B3B71DDFC;
IL2CPP_EXTERN_C String_t* _stringLiteral5DC9F3D3EAC7DC13DEE14149F4CBE5AA1ADA66A7;
IL2CPP_EXTERN_C String_t* _stringLiteral5EFE4646979B4FE226DD9281CBB33148DDB09D66;
IL2CPP_EXTERN_C String_t* _stringLiteral6055C3DD6C709B2BB8DB817336BFA9B09965D03E;
IL2CPP_EXTERN_C String_t* _stringLiteral622657B61C7D71EB0EE9A15ECF8B72B7DDF7EC2C;
IL2CPP_EXTERN_C String_t* _stringLiteral631DCCC7D86B3019E03AB183FDDAF679518F901D;
IL2CPP_EXTERN_C String_t* _stringLiteral653312F642D791F4E5F1B345CC0F07D081D85A5E;
IL2CPP_EXTERN_C String_t* _stringLiteral6A200CC3BF57F91850AAB0905DE16B0CAE628D83;
IL2CPP_EXTERN_C String_t* _stringLiteral6A59B8CAD62C9BABFB834CE4DBBE357011C504AC;
IL2CPP_EXTERN_C String_t* _stringLiteral6A762F24C7973AA922A2EB5215A84560927F0BF6;
IL2CPP_EXTERN_C String_t* _stringLiteral6F864E658D0F6EA40BE221793E258DA9BE25B8A4;
IL2CPP_EXTERN_C String_t* _stringLiteral71ECEF263A81AD4B72C9E4CF8DFE403D5AA32814;
IL2CPP_EXTERN_C String_t* _stringLiteral7349968777A755DD09E82346B978838F3E377538;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral76C9E9EAB3B7C7B46A545B661D8B5D1EABE83F80;
IL2CPP_EXTERN_C String_t* _stringLiteral76D6BE1C6DCE46870C1F6DAAB0C1B31559BC90A6;
IL2CPP_EXTERN_C String_t* _stringLiteral76EF9587B82E60F93532B2090C5D98BFB82900BC;
IL2CPP_EXTERN_C String_t* _stringLiteral7A7D7D6A8625012B7D69B80F5F456DB3EA53431F;
IL2CPP_EXTERN_C String_t* _stringLiteral7B278367F7D00A96FF817A43542FCB64B3C80FAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7DBBD6DA91C2A6AD4D81FAAFE1E95F2CF265AB2E;
IL2CPP_EXTERN_C String_t* _stringLiteral7E8B89610436A439C6F07796571F5BE4CEC41D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral82F62E56C2A943107C5F3788C031E57A96C39C5E;
IL2CPP_EXTERN_C String_t* _stringLiteral84C893E7A175253E3154243B593B16AE55A95BDA;
IL2CPP_EXTERN_C String_t* _stringLiteral84C9981C9F4C4B52CD123317C7901E63EDAE05C1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F87F3C659C6553C3FB3C314F018CCE4BA277C9D;
IL2CPP_EXTERN_C String_t* _stringLiteral91865F645BC7327F72AF3162CF5882EC9F3DF502;
IL2CPP_EXTERN_C String_t* _stringLiteral91C96449EEF5884973CD053AEC3084EF3F706954;
IL2CPP_EXTERN_C String_t* _stringLiteral920F3B2EA5DD0E545B998BDDF2A44C05004D7F17;
IL2CPP_EXTERN_C String_t* _stringLiteral986DB1C107584803CF898B4AF1677C90E8620BE7;
IL2CPP_EXTERN_C String_t* _stringLiteralA4273153F0C6DDF5A3F3D1BC243CC6D92EBE91BD;
IL2CPP_EXTERN_C String_t* _stringLiteralAA57CEAAA98983455E32C16DC9FD2342687BBC43;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD80BB7C19A1903F2A896D9E49A1789F5791093;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF319C6FA0CF67C4AED3A2CC3851028D0C0B243;
IL2CPP_EXTERN_C String_t* _stringLiteralAE2CA2EC1CFA1DF2DC752BF01356C619F57D38DA;
IL2CPP_EXTERN_C String_t* _stringLiteralAF19D49FBC442F77B011D87292BB970BD8415665;
IL2CPP_EXTERN_C String_t* _stringLiteralAF3D249DEA0CB88949E4A6E926A37B4C54FD84CB;
IL2CPP_EXTERN_C String_t* _stringLiteralB2D94EC7BD729F5F0A5FF179E7CA0B1D3567D778;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB590C33CB1F77314369BCE108CD827DCFCAC5963;
IL2CPP_EXTERN_C String_t* _stringLiteralB6AE5AEB512CA5407FF83B6FCBFF0BFAB6F3A2BF;
IL2CPP_EXTERN_C String_t* _stringLiteralB7035E6560BEB2FF21F30B464D70745B15DCBEB8;
IL2CPP_EXTERN_C String_t* _stringLiteralBA26808F60DCDFC1F33F3C4EC9858632581DDCE9;
IL2CPP_EXTERN_C String_t* _stringLiteralBC87A8CABB18BBA2DA5E7B48B4DF40BF53ECDB5D;
IL2CPP_EXTERN_C String_t* _stringLiteralBDDB2320CB72EA8A2B3FAC980C9C397B098B48A1;
IL2CPP_EXTERN_C String_t* _stringLiteralBF1FB54A3EE2EF0B2548FC1B6CDCBD078A4135CD;
IL2CPP_EXTERN_C String_t* _stringLiteralC048BBCEBFF1E9895CFFF62411491F30B811E922;
IL2CPP_EXTERN_C String_t* _stringLiteralC6E949F53CD6A3F6391F0421E2B7AD43C2A96064;
IL2CPP_EXTERN_C String_t* _stringLiteralC9B69658A5E5F9A86F28B45DEE4C6176DF617F84;
IL2CPP_EXTERN_C String_t* _stringLiteralCC988E3F8B22A03CDF4C42C272A0AEC293448233;
IL2CPP_EXTERN_C String_t* _stringLiteralCEED109D73EC1C1097F3CB001F243F088899D14D;
IL2CPP_EXTERN_C String_t* _stringLiteralD0EA15804FB2355D77A7BCBE8193B505FD857BA0;
IL2CPP_EXTERN_C String_t* _stringLiteralD2F2BB2B5FA73624E198CE932674B4CD4D71FD9A;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D8205ECED8380C9417CD710318F7E3EEA71E84;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4FD0EFD4AD23D7C7007FDD2A4BCF732137D51E;
IL2CPP_EXTERN_C String_t* _stringLiteralDE3CF7762CE3022633888791CE07E35A0037D321;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE2903AFA12AA615C93893DA71DAEED17703E7D67;
IL2CPP_EXTERN_C String_t* _stringLiteralE48C98C22D1C88FBD209183A9CAD9EA3D6558AF4;
IL2CPP_EXTERN_C String_t* _stringLiteralE65ECEC452E2DCCEBB31A0477F62A5D536442F58;
IL2CPP_EXTERN_C String_t* _stringLiteralE8477F991B91E12B387117B63318857E07F96366;
IL2CPP_EXTERN_C String_t* _stringLiteralE8C3AD821181B60A8820B1A6EF5F99540B6DA0FE;
IL2CPP_EXTERN_C String_t* _stringLiteralE9147E9E17E7A19569168962EEDD0C19E02A2725;
IL2CPP_EXTERN_C String_t* _stringLiteralE937E9E52A868C56F7A93F20157C121591AE0F11;
IL2CPP_EXTERN_C String_t* _stringLiteralE9D0D642B8500233AE67CB0AC1E5C6AE4CBE1019;
IL2CPP_EXTERN_C String_t* _stringLiteralE9F8DE4BECF3649D4C19444B0361907ACA4F3B3C;
IL2CPP_EXTERN_C String_t* _stringLiteralEA3EE92B86AF5F061AEB38B1382362D92683F962;
IL2CPP_EXTERN_C String_t* _stringLiteralEA4DD82CF87728BA7AA9A6957B9AF12625C1DB04;
IL2CPP_EXTERN_C String_t* _stringLiteralEBD579DCEEC564BEA150613A9E3AE6C7DC2E6516;
IL2CPP_EXTERN_C String_t* _stringLiteralEDAB56C9C3FD0C238AAF76C9C8E2B0EA2FB73117;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC508C9C0B8CCA8F5B410A10C3EB05B7817C5BF;
IL2CPP_EXTERN_C String_t* _stringLiteralEDD43CDBC8C126EB2FD95158F71E3A7032AF410D;
IL2CPP_EXTERN_C String_t* _stringLiteralF04B14692D34C5AE03B28783F6E6C15A36C21F0F;
IL2CPP_EXTERN_C String_t* _stringLiteralF10CB564E512CB16E7421788D226A4ED794787BE;
IL2CPP_EXTERN_C String_t* _stringLiteralF144A3546D3FF730FD576C1C8E3F68126CDF22B3;
IL2CPP_EXTERN_C String_t* _stringLiteralF289538A91A7D933B13FCDB598703D47187D3D4F;
IL2CPP_EXTERN_C String_t* _stringLiteralF9AD4FD4AEB30A7880F6ABD1C85EFFFBF090656D;
IL2CPP_EXTERN_C String_t* _stringLiteralFE38312526252E4265EC765984CC6B042FB295F1;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHumanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844_mB56BF4DD0C610B5D78D36F27EA247B481C4AF024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m57E48D487188F67A8B796999E6DF0D192A35CC2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisDefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7_mCB96B6A47962DE38FB00171682764169A7947C3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HumanoidTrackingMenu_CalibrationStatusCallback_m508469A26DF33C9B571D08549B306E897023DF4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE40178F84DE4EBEE5DCADB66A6BE37CB56D10BDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m527E7770ECD44A449CA1B0500367B4BC4B031D1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartBodyTrackingU3Ed__41_System_Collections_IEnumerator_Reset_m984D1038D5170A3931EF00A1AA520CC9A4E531B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartBodyTrackingU3Ed__50_System_Collections_IEnumerator_Reset_mACA31DE560A63FB176DA0BCD53BF8CB8C6FF040D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827;
struct RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E;
struct TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Wave.Essence.BodyTracking.Demo.DebugRotation>
struct List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DebugRotationU5BU5D_t8FD980370B9843A4B334658D7C8C6F433F850031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Wave.Essence.BodyTracking.Demo.BTDemoHelper
struct BTDemoHelper_t8BFD6CA0328EFDA405C2D79785ACEAAB7E6CAE55  : public RuntimeObject
{
};

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906  : public RuntimeObject
{
	// System.Boolean System.Threading.ReaderWriterLockSlim::fIsReentrant
	bool ___fIsReentrant_0;
	// System.Int32 System.Threading.ReaderWriterLockSlim::myLock
	int32_t ___myLock_1;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteWaiters
	uint32_t ___numWriteWaiters_5;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numReadWaiters
	uint32_t ___numReadWaiters_6;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteUpgradeWaiters
	uint32_t ___numWriteUpgradeWaiters_7;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numUpgradeWaiters
	uint32_t ___numUpgradeWaiters_8;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fNoWaiters
	bool ___fNoWaiters_9;
	// System.Int32 System.Threading.ReaderWriterLockSlim::upgradeLockOwnerId
	int32_t ___upgradeLockOwnerId_10;
	// System.Int32 System.Threading.ReaderWriterLockSlim::writeLockOwnerId
	int32_t ___writeLockOwnerId_11;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::writeEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___writeEvent_12;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::readEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___readEvent_13;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::upgradeEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___upgradeEvent_14;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::waitUpgradeEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___waitUpgradeEvent_15;
	// System.Int64 System.Threading.ReaderWriterLockSlim::lockID
	int64_t ___lockID_17;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fUpgradeThreadHoldingRead
	bool ___fUpgradeThreadHoldingRead_19;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::owners
	uint32_t ___owners_21;
	// System.Boolean System.Threading.ReaderWriterLockSlim::fDisposed
	bool ___fDisposed_27;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase
struct TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3  : public RuntimeObject
{
	// Wave.Essence.BodyTracking.RuntimeDependency.TrackerLocation Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase::location
	int32_t ___location_0;
	// System.UInt32 Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase::trackerId
	uint32_t ___trackerId_1;
};

// Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase
struct TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46  : public RuntimeObject
{
	// Wave.Essence.BodyTracking.RuntimeDependency.TrackerLocation Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase::location
	int32_t ___location_0;
	// Wave.Essence.BodyTracking.RuntimeDependency.TrackerType Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase::type
	uint32_t ___type_1;
};

// Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41
struct U3CStartBodyTrackingU3Ed__41_t4040ACE24B90527EA05CCF98736A60F606F97025  : public RuntimeObject
{
	// System.Int32 Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Wave.Essence.BodyTracking.Demo.BodyTrackingSample Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::<>4__this
	BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* ___U3CU3E4__this_2;
	// Wave.Essence.BodyTracking.RotateSpace[] Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::<rotationSpaces>5__2
	RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1* ___U3CrotationSpacesU3E5__2_3;
	// System.UInt32 Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::<rotationSpaceCount>5__3
	uint32_t ___U3CrotationSpaceCountU3E5__3_4;
};

// Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50
struct U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30  : public RuntimeObject
{
	// System.Int32 Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Wave.Essence.BodyTracking.Demo.HumanoidIKSample Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::<>4__this
	HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* ___U3CU3E4__this_2;
	// Wave.Essence.BodyTracking.BodyTrackingResult Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::<result>5__2
	uint8_t ___U3CresultU3E5__2_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t725980ECF4D0FC082DFA0BAA9BC9FCC436856CAB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t725980ECF4D0FC082DFA0BAA9BC9FCC436856CAB__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tF2D13FE173790E849ADDC6691BD48F2E961B9445 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tF2D13FE173790E849ADDC6691BD48F2E961B9445__padding[64];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA47DFB5F37EEDF54A5632727E01AD47E87FA0126  : public RuntimeObject
{
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Wave.Essence.BodyTracking.Extrinsic
struct Extrinsic_tC89F03DD681976C1C5BE814CCA64399B06FCFE08 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.Vector3 Wave.Essence.BodyTracking.Extrinsic::translation
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___rotation_1_OffsetPadding[12];
			// UnityEngine.Quaternion Wave.Essence.BodyTracking.Extrinsic::rotation
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___rotation_1_OffsetPadding_forAlignmentOnly[12];
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1_forAlignmentOnly;
		};
	};
};

// Wave.Essence.BodyTracking.Joint
struct Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Wave.Essence.BodyTracking.JointType Wave.Essence.BodyTracking.Joint::jointType
			int32_t ___jointType_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___jointType_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___poseState_1_OffsetPadding[4];
			// Wave.Essence.BodyTracking.PoseState Wave.Essence.BodyTracking.Joint::poseState
			uint32_t ___poseState_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___poseState_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___poseState_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___translation_2_OffsetPadding[8];
			// UnityEngine.Vector3 Wave.Essence.BodyTracking.Joint::translation
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___translation_2_OffsetPadding_forAlignmentOnly[8];
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___velocity_3_OffsetPadding[20];
			// UnityEngine.Vector3 Wave.Essence.BodyTracking.Joint::velocity
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___velocity_3_OffsetPadding_forAlignmentOnly[20];
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___angularVelocity_4_OffsetPadding[32];
			// UnityEngine.Vector3 Wave.Essence.BodyTracking.Joint::angularVelocity
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___angularVelocity_4_OffsetPadding_forAlignmentOnly[32];
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___rotation_5_OffsetPadding[44];
			// UnityEngine.Quaternion Wave.Essence.BodyTracking.Joint::rotation
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___rotation_5_OffsetPadding_forAlignmentOnly[44];
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_5_forAlignmentOnly;
		};
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Wave.Essence.BodyTracking.RotateSpace
struct RotateSpace_tF6B3FB2158AF86D06760DD97F5ADFD4BC820BB8E 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Wave.Essence.BodyTracking.JointType Wave.Essence.BodyTracking.RotateSpace::jointType
			int32_t ___jointType_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___jointType_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___rotation_1_OffsetPadding[4];
			// UnityEngine.Quaternion Wave.Essence.BodyTracking.RotateSpace::rotation
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___rotation_1_OffsetPadding_forAlignmentOnly[4];
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1_forAlignmentOnly;
		};
	};
};

// Wave.Essence.BodyTracking.TransformData
struct TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 
{
	// UnityEngine.Vector3 Wave.Essence.BodyTracking.TransformData::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 Wave.Essence.BodyTracking.TransformData::localPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition_1;
	// UnityEngine.Quaternion Wave.Essence.BodyTracking.TransformData::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_2;
	// UnityEngine.Quaternion Wave.Essence.BodyTracking.TransformData::localRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___localRotation_3;
	// UnityEngine.Vector3 Wave.Essence.BodyTracking.TransformData::localScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localScale_4;
};

// Wave.Essence.BodyTracking.Body
struct Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074  : public RuntimeObject
{
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::root
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root_0;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::hipData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___hipData_1;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::leftThigh
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftThigh_2;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::leftThighData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___leftThighData_3;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::leftLeg
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftLeg_4;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::leftLegData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___leftLegData_5;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::leftAnkle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftAnkle_6;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::leftAnkleData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___leftAnkleData_7;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::leftFoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftFoot_8;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::leftFootData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___leftFootData_9;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::rightThigh
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightThigh_10;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::rightThighData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___rightThighData_11;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::rightLeg
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightLeg_12;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::rightLegData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___rightLegData_13;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::rightAnkle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightAnkle_14;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::rightAnkleData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___rightAnkleData_15;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::rightFoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightFoot_16;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::rightFootData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___rightFootData_17;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::waist
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___waist_18;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::waistData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___waistData_19;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::spineLower
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spineLower_20;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::spineLowerData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___spineLowerData_21;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::spineMiddle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spineMiddle_22;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::spineMiddleData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___spineMiddleData_23;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::spineHigh
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spineHigh_24;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::spineHighData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___spineHighData_25;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::chest
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___chest_26;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::chestData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___chestData_27;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::neck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___neck_28;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::neckData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___neckData_29;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::head
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___head_30;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::headData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___headData_31;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::leftClavicle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftClavicle_32;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::leftClavicleData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___leftClavicleData_33;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::leftScapula
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftScapula_34;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::leftScapulaData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___leftScapulaData_35;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::leftUpperarm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftUpperarm_36;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::leftUpperarmData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___leftUpperarmData_37;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::leftForearm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftForearm_38;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::leftForearmData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___leftForearmData_39;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::leftHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftHand_40;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::leftHandData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___leftHandData_41;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::rightClavicle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightClavicle_42;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::rightClavicleData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___rightClavicleData_43;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::rightScapula
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightScapula_44;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::rightScapulaData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___rightScapulaData_45;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::rightUpperarm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightUpperarm_46;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::rightUpperarmData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___rightUpperarmData_47;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::rightForearm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightForearm_48;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::rightForearmData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___rightForearmData_49;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Body::rightHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightHand_50;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Body::rightHandData
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___rightHandData_51;
	// System.Single Wave.Essence.BodyTracking.Body::height
	float ___height_52;
};

// Wave.Essence.BodyTracking.BodyAvatar
struct BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2  : public RuntimeObject
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.BodyAvatar::m_sb
	StringBuilder_t* ___m_sb_1;
	// System.Single Wave.Essence.BodyTracking.BodyAvatar::height
	float ___height_2;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::hip
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___hip_3;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::leftThigh
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___leftThigh_4;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::leftLeg
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___leftLeg_5;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::leftAnkle
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___leftAnkle_6;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::leftFoot
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___leftFoot_7;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::rightThigh
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___rightThigh_8;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::rightLeg
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___rightLeg_9;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::rightAnkle
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___rightAnkle_10;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::rightFoot
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___rightFoot_11;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::waist
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___waist_12;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::spineLower
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___spineLower_13;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::spineMiddle
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___spineMiddle_14;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::spineHigh
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___spineHigh_15;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::chest
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___chest_16;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::neck
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___neck_17;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::head
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___head_18;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::leftClavicle
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___leftClavicle_19;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::leftScapula
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___leftScapula_20;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::leftUpperarm
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___leftUpperarm_21;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::leftForearm
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___leftForearm_22;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::leftHand
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___leftHand_23;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::rightClavicle
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___rightClavicle_24;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::rightScapula
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___rightScapula_25;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::rightUpperarm
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___rightUpperarm_26;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::rightForearm
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___rightForearm_27;
	// Wave.Essence.BodyTracking.Joint Wave.Essence.BodyTracking.BodyAvatar::rightHand
	Joint_tB24602D2C2D875B8D9555255412F47EFE877DF91 ___rightHand_28;
	// System.Single Wave.Essence.BodyTracking.BodyAvatar::scale
	float ___scale_29;
	// System.Single Wave.Essence.BodyTracking.BodyAvatar::confidence
	float ___confidence_30;
	// Wave.Essence.BodyTracking.Joint[] Wave.Essence.BodyTracking.BodyAvatar::s_AvatarJoints
	JointU5BU5D_tDAB68DE7B3AA83402919C2731DBF1ECE678C80A0* ___s_AvatarJoints_32;
	// System.Collections.Generic.List`1<Wave.Essence.BodyTracking.Joint> Wave.Essence.BodyTracking.BodyAvatar::joints
	List_1_t689D8A8DC128753FB7BF7EE328C91AD9107EC7CC* ___joints_33;
	// System.Boolean Wave.Essence.BodyTracking.BodyAvatar::print
	bool ___print_34;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Wave.Essence.BodyTracking.ExtrinsicVector4_t
struct ExtrinsicVector4_t_tB8FDEFF83E04253A837A60401F6F212AD1D24C78 
{
	// UnityEngine.Vector3 Wave.Essence.BodyTracking.ExtrinsicVector4_t::translation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation_0;
	// UnityEngine.Vector4 Wave.Essence.BodyTracking.ExtrinsicVector4_t::m_rotation
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_rotation_1;
	// Wave.Essence.BodyTracking.Extrinsic Wave.Essence.BodyTracking.ExtrinsicVector4_t::ext
	Extrinsic_tC89F03DD681976C1C5BE814CCA64399B06FCFE08 ___ext_2;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Wave.Essence.BodyTracking.CalibrationStatusDelegate
struct CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F  : public MulticastDelegate_t
{
};

// Wave.Essence.BodyTracking.ExtrinsicInfo_t
struct ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 
{
	// System.Boolean Wave.Essence.BodyTracking.ExtrinsicInfo_t::isTracking
	bool ___isTracking_2;
	// Wave.Essence.BodyTracking.ExtrinsicVector4_t Wave.Essence.BodyTracking.ExtrinsicInfo_t::extrinsic
	ExtrinsicVector4_t_tB8FDEFF83E04253A837A60401F6F212AD1D24C78 ___extrinsic_3;
};
// Native definition for P/Invoke marshalling of Wave.Essence.BodyTracking.ExtrinsicInfo_t
struct ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951_marshaled_pinvoke
{
	int32_t ___isTracking_2;
	ExtrinsicVector4_t_tB8FDEFF83E04253A837A60401F6F212AD1D24C78 ___extrinsic_3;
};
// Native definition for COM marshalling of Wave.Essence.BodyTracking.ExtrinsicInfo_t
struct ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951_marshaled_com
{
	int32_t ___isTracking_2;
	ExtrinsicVector4_t_tB8FDEFF83E04253A837A60401F6F212AD1D24C78 ___extrinsic_3;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Wave.Essence.BodyTracking.BodyManager
struct BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.BodyManager::m_sb
	StringBuilder_t* ___m_sb_5;
	// System.Int32 Wave.Essence.BodyTracking.BodyManager::logFrame
	int32_t ___logFrame_6;
	// System.Boolean Wave.Essence.BodyTracking.BodyManager::printIntervalLog
	bool ___printIntervalLog_7;
	// System.Boolean Wave.Essence.BodyTracking.BodyManager::m_EnableTrackingLog
	bool ___m_EnableTrackingLog_8;
	// System.Collections.Generic.List`1<System.Int32> Wave.Essence.BodyTracking.BodyManager::s_SkeletonIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_SkeletonIds_10;
	// Wave.Essence.BodyTracking.BodyPose Wave.Essence.BodyTracking.BodyManager::m_StandardPose
	BodyPose_tB35A39B83D3FE441F5CD423228BDC7E1DD828ECD* ___m_StandardPose_11;
	// Wave.Essence.BodyTracking.TrackerExtrinsic Wave.Essence.BodyTracking.BodyManager::m_TrackerExtrinsic
	TrackerExtrinsic_t2ADD4856F681D705255D0487C9F05854A716A25A* ___m_TrackerExtrinsic_12;
	// Wave.Essence.BodyTracking.CalibrationStatusDelegate Wave.Essence.BodyTracking.BodyManager::upperIKLegFKCallback
	CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F* ___upperIKLegFKCallback_13;
	// Wave.Essence.BodyTracking.BodyRedirectives Wave.Essence.BodyTracking.BodyManager::m_Redirectives
	BodyRedirectives_t5A7D7348ACBE97EE26D006CCE44E0DDE3677FCE2* ___m_Redirectives_14;
	// System.Boolean Wave.Essence.BodyTracking.BodyManager::inCalibration
	bool ___inCalibration_15;
	// Wave.Essence.BodyTracking.CalibrationStatus Wave.Essence.BodyTracking.BodyManager::m_FunctionalCalibrationStatus
	int32_t ___m_FunctionalCalibrationStatus_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,Wave.Essence.BodyTracking.BodyRotationSpace_t> Wave.Essence.BodyTracking.BodyManager::s_BodyRotationSpaces
	Dictionary_2_tE7EF520458769CD7EE94299E9C156CF21A2DDFF1* ___s_BodyRotationSpaces_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,Wave.Essence.BodyTracking.BodyPose> Wave.Essence.BodyTracking.BodyManager::s_BodyPoses
	Dictionary_2_t22CBF56B2559632FCC876DE7BA5D1DCB7DB4F78E* ___s_BodyPoses_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,Wave.Essence.BodyTracking.BodyAvatar> Wave.Essence.BodyTracking.BodyManager::s_BodyAvatars
	Dictionary_2_tAB037891862C09787403230024276695AB421CF1* ___s_BodyAvatars_19;
	// System.UInt32 Wave.Essence.BodyTracking.BodyManager::m_OutputJointCount
	uint32_t ___m_OutputJointCount_21;
	// Wave.Essence.BodyTracking.Joint[] Wave.Essence.BodyTracking.BodyManager::s_OutputJoints
	JointU5BU5D_tDAB68DE7B3AA83402919C2731DBF1ECE678C80A0* ___s_OutputJoints_22;
};

// Wave.Essence.BodyTracking.BodyRoleData
struct BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.BodyRoleData::m_sb
	StringBuilder_t* ___m_sb_5;
	// Wave.Essence.BodyTracking.BodyRoleData/TrackerBase Wave.Essence.BodyTracking.BodyRoleData::m_TrackerPose
	int32_t ___m_TrackerPose_6;
	// Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase[] Wave.Essence.BodyTracking.BodyRoleData::m_TrackerIndexInputs
	TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E* ___m_TrackerIndexInputs_7;
	// Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase[] Wave.Essence.BodyTracking.BodyRoleData::m_TrackerTypeInputs
	TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6* ___m_TrackerTypeInputs_8;
	// Wave.Essence.BodyTracking.RolePoseHead Wave.Essence.BodyTracking.BodyRoleData::m_RoleHead
	RolePoseHead_tA28A41EADF5B284248557F43EC13EAAF7513F8EB* ___m_RoleHead_10;
	// Wave.Essence.BodyTracking.RolePoseController Wave.Essence.BodyTracking.BodyRoleData::m_RoleControllerL
	RolePoseController_t706AE56FE73EFD4EA44F938D506D6CFE2A934DB9* ___m_RoleControllerL_11;
	// Wave.Essence.BodyTracking.RolePoseController Wave.Essence.BodyTracking.BodyRoleData::m_RoleControllerR
	RolePoseController_t706AE56FE73EFD4EA44F938D506D6CFE2A934DB9* ___m_RoleControllerR_12;
	// Wave.Essence.BodyTracking.RolePoseHand Wave.Essence.BodyTracking.BodyRoleData::m_RoleHandL
	RolePoseHand_t1077BA77E30CBE89252EAB5A70028A3F86442B5E* ___m_RoleHandL_13;
	// Wave.Essence.BodyTracking.RolePoseHand Wave.Essence.BodyTracking.BodyRoleData::m_RoleHandR
	RolePoseHand_t1077BA77E30CBE89252EAB5A70028A3F86442B5E* ___m_RoleHandR_14;
	// System.Collections.Generic.List`1<Wave.Essence.BodyTracking.RolePoseTracker> Wave.Essence.BodyTracking.BodyRoleData::s_RoleTracker
	List_1_t804C83E790ED13E581E5AD28404D565BBBA8D4FD* ___s_RoleTracker_15;
	// System.Int32 Wave.Essence.BodyTracking.BodyRoleData::trackerFrame
	int32_t ___trackerFrame_16;
	// Wave.Essence.BodyTracking.RuntimeDependency.TrackerLocation[] Wave.Essence.BodyTracking.BodyRoleData::s_TrackerRole
	TrackerLocationU5BU5D_t779BB5EB03019E67E73ED0ED3D0FD5990CE787BF* ___s_TrackerRole_17;
	// Wave.Essence.BodyTracking.RuntimeDependency.TrackerType[] Wave.Essence.BodyTracking.BodyRoleData::s_TrackerType
	TrackerTypeU5BU5D_t3096DF81674F90340D70CBBBF554FC134E34D3C0* ___s_TrackerType_18;
};

// Wave.Essence.BodyTracking.Demo.BodyTrackingSample
struct BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.BodyTrackingSample::m_sb
	StringBuilder_t* ___m_sb_5;
	// System.Int32 Wave.Essence.BodyTracking.Demo.BodyTrackingSample::logFrame
	int32_t ___logFrame_6;
	// System.Boolean Wave.Essence.BodyTracking.Demo.BodyTrackingSample::printIntervalLog
	bool ___printIntervalLog_7;
	// Wave.Essence.BodyTracking.Demo.BodyTrackingSample/TrackingStatus Wave.Essence.BodyTracking.Demo.BodyTrackingSample::m_TrackingStatus
	int32_t ___m_TrackingStatus_8;
	// Wave.Essence.BodyTracking.Body Wave.Essence.BodyTracking.Demo.BodyTrackingSample::inputBody
	Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* ___inputBody_10;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Demo.BodyTrackingSample::avatarOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarOffset_11;
	// Wave.Essence.BodyTracking.Body Wave.Essence.BodyTracking.Demo.BodyTrackingSample::m_InitialBody
	Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* ___m_InitialBody_12;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Demo.BodyTrackingSample::m_InitialTransform
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___m_InitialTransform_13;
	// Wave.Essence.BodyTracking.Demo.BTDemoHelper/TrackingMode Wave.Essence.BodyTracking.Demo.BodyTrackingSample::m_TrackingMode
	uint32_t ___m_TrackingMode_14;
	// System.Boolean Wave.Essence.BodyTracking.Demo.BodyTrackingSample::updateTrackingData
	bool ___updateTrackingData_15;
	// System.Int32 Wave.Essence.BodyTracking.Demo.BodyTrackingSample::m_TrackerId
	int32_t ___m_TrackerId_16;
	// Wave.Essence.BodyTracking.BodyAvatar Wave.Essence.BodyTracking.Demo.BodyTrackingSample::avatarBody
	BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* ___avatarBody_17;
};

// Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType
struct ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::m_sb
	StringBuilder_t* ___m_sb_5;
	// Wave.Essence.BodyTracking.BodyRoleData Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::bodyData
	BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* ___bodyData_6;
	// UnityEngine.GameObject Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::menuIndex
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuIndex_7;
	// UnityEngine.GameObject Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::menuType
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuType_8;
};

// Wave.Essence.BodyTracking.Demo.DebugRotation
struct DebugRotation_tC0BD5B64718318E12F1DB9CF53E0DD6ABC713974  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector4 Wave.Essence.BodyTracking.Demo.DebugRotation::Rot
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Rot_4;
};

// Wave.Essence.BodyTracking.Demo.DebugRotationMaster
struct DebugRotationMaster_tD850C06B64021CBE302BA4654B71B4F3BA8D9945  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Wave.Essence.BodyTracking.Demo.DebugRotation> Wave.Essence.BodyTracking.Demo.DebugRotationMaster::DRs
	List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581* ___DRs_4;
};

// Wave.Essence.BodyTracking.Demo.DefineTrackerLocation
struct DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Wave.Essence.BodyTracking.RuntimeDependency.TrackerLocation Wave.Essence.BodyTracking.Demo.DefineTrackerLocation::location
	int32_t ___location_4;
};

// Wave.Essence.BodyTracking.Demo.DrawBone
struct DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Wave.Essence.BodyTracking.Demo.DrawBone::m_TargetJoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TargetJoint_4;
	// System.Single Wave.Essence.BodyTracking.Demo.DrawBone::m_BoneWidth
	float ___m_BoneWidth_5;
	// UnityEngine.Color Wave.Essence.BodyTracking.Demo.DrawBone::m_BoneColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_BoneColor_6;
	// UnityEngine.LineRenderer Wave.Essence.BodyTracking.Demo.DrawBone::bone
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___bone_7;
	// UnityEngine.Vector3 Wave.Essence.BodyTracking.Demo.DrawBone::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_8;
	// UnityEngine.Vector3 Wave.Essence.BodyTracking.Demo.DrawBone::endPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endPos_9;
};

// UniHumanoid.Humanoid
struct Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform UniHumanoid.Humanoid::m_Hips
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Hips_4;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftUpperLeg
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftUpperLeg_5;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightUpperLeg
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightUpperLeg_6;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftLowerLeg
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftLowerLeg_7;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightLowerLeg
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightLowerLeg_8;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftFoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftFoot_9;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightFoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightFoot_10;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftToes
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftToes_11;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightToes
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightToes_12;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_Spine
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Spine_13;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_Chest
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Chest_14;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_UpperChest
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_UpperChest_15;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_Neck
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Neck_16;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_Head
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Head_17;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftEye
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftEye_18;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightEye
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightEye_19;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_Jaw
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Jaw_20;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftShoulder
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftShoulder_21;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightShoulder
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightShoulder_22;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftUpperArm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftUpperArm_23;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightUpperArm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightUpperArm_24;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftLowerArm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftLowerArm_25;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightLowerArm
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightLowerArm_26;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftHand_27;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightHand_28;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftThumbProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftThumbProximal_29;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftThumbIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftThumbIntermediate_30;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftThumbDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftThumbDistal_31;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftIndexProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftIndexProximal_32;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftIndexIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftIndexIntermediate_33;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftIndexDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftIndexDistal_34;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftMiddleProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftMiddleProximal_35;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftMiddleIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftMiddleIntermediate_36;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftMiddleDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftMiddleDistal_37;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftRingProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftRingProximal_38;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftRingIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftRingIntermediate_39;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftRingDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftRingDistal_40;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftLittleProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftLittleProximal_41;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftLittleIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftLittleIntermediate_42;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_LeftLittleDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_LeftLittleDistal_43;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightThumbProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightThumbProximal_44;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightThumbIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightThumbIntermediate_45;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightThumbDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightThumbDistal_46;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightIndexProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightIndexProximal_47;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightIndexIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightIndexIntermediate_48;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightIndexDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightIndexDistal_49;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightMiddleProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightMiddleProximal_50;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightMiddleIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightMiddleIntermediate_51;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightMiddleDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightMiddleDistal_52;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightRingProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightRingProximal_53;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightRingIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightRingIntermediate_54;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightRingDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightRingDistal_55;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightLittleProximal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightLittleProximal_56;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightLittleIntermediate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightLittleIntermediate_57;
	// UnityEngine.Transform UniHumanoid.Humanoid::m_RightLittleDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RightLittleDistal_58;
};

// Wave.Essence.BodyTracking.Demo.HumanoidIKMenu
struct HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::m_sb
	StringBuilder_t* ___m_sb_5;
	// Wave.Essence.BodyTracking.Demo.HumanoidIKSample Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::humanoidIK
	HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* ___humanoidIK_6;
	// UnityEngine.UI.Button Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::beginTrackingButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___beginTrackingButton_7;
	// UnityEngine.UI.Button Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::endTrackingButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___endTrackingButton_8;
};

// Wave.Essence.BodyTracking.Demo.HumanoidIKSample
struct HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_sb
	StringBuilder_t* ___m_sb_5;
	// System.Int32 Wave.Essence.BodyTracking.Demo.HumanoidIKSample::logFrame
	int32_t ___logFrame_6;
	// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::printIntervalLog
	bool ___printIntervalLog_7;
	// Wave.Essence.BodyTracking.Demo.HumanoidIKSample/TrackingStatus Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_TrackingStatus
	int32_t ___m_TrackingStatus_8;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_AvatarOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AvatarOffset_10;
	// System.Single Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_AvatarScale
	float ___m_AvatarScale_11;
	// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_CustomSettings
	bool ___m_CustomSettings_12;
	// System.Single Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_AvatarHeight
	float ___m_AvatarHeight_13;
	// UniHumanoid.Humanoid Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_Humanoid
	Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* ___m_Humanoid_14;
	// Wave.Essence.BodyTracking.Body Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_Body
	Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* ___m_Body_15;
	// Wave.Essence.BodyTracking.Body Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_InitialBody
	Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* ___m_InitialBody_16;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_InitialTransform
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___m_InitialTransform_17;
	// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::updateTrackingData
	bool ___updateTrackingData_18;
	// System.Single Wave.Essence.BodyTracking.Demo.HumanoidIKSample::avatarScale
	float ___avatarScale_19;
	// Wave.Essence.BodyTracking.BodyAvatar Wave.Essence.BodyTracking.Demo.HumanoidIKSample::avatarBody
	BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* ___avatarBody_20;
};

// Wave.Essence.BodyTracking.HumanoidTracking
struct HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.HumanoidTracking::m_sb
	StringBuilder_t* ___m_sb_5;
	// System.Int32 Wave.Essence.BodyTracking.HumanoidTracking::logFrame
	int32_t ___logFrame_6;
	// System.Boolean Wave.Essence.BodyTracking.HumanoidTracking::printIntervalLog
	bool ___printIntervalLog_7;
	// Wave.Essence.BodyTracking.HumanoidTracking/TrackingStatus Wave.Essence.BodyTracking.HumanoidTracking::m_TrackingStatus
	int32_t ___m_TrackingStatus_8;
	// System.Boolean Wave.Essence.BodyTracking.HumanoidTracking::m_ControlByGesture
	bool ___m_ControlByGesture_10;
	// Wave.Essence.BodyTracking.HumanoidTracking/TrackingMode Wave.Essence.BodyTracking.HumanoidTracking::m_Tracking
	int32_t ___m_Tracking_11;
	// System.Boolean Wave.Essence.BodyTracking.HumanoidTracking::m_CustomSettings
	bool ___m_CustomSettings_12;
	// System.Single Wave.Essence.BodyTracking.HumanoidTracking::m_AvatarHeight
	float ___m_AvatarHeight_13;
	// UnityEngine.Transform Wave.Essence.BodyTracking.HumanoidTracking::m_AvatarOffset
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AvatarOffset_14;
	// System.Single Wave.Essence.BodyTracking.HumanoidTracking::m_AvatarScale
	float ___m_AvatarScale_15;
	// Wave.Essence.BodyTracking.AvatarCoordinate.AvatarCoordinateProducer Wave.Essence.BodyTracking.HumanoidTracking::m_JointCoordinate
	AvatarCoordinateProducer_t04158D4D303FD54139E07A72FC9153601FD72BBB* ___m_JointCoordinate_16;
	// System.Boolean Wave.Essence.BodyTracking.HumanoidTracking::m_AutoGround
	bool ___m_AutoGround_17;
	// System.Single Wave.Essence.BodyTracking.HumanoidTracking::m_HeightFromSole
	float ___m_HeightFromSole_18;
	// System.Boolean Wave.Essence.BodyTracking.HumanoidTracking::m_CustomizeExtrinsics
	bool ___m_CustomizeExtrinsics_19;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_Head
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_Head_20;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_LeftWrist
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_LeftWrist_21;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_RightWrist
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_RightWrist_22;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_LeftHandheld
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_LeftHandheld_23;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_RightHandheld
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_RightHandheld_24;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_LeftHand
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_LeftHand_25;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_RightHand
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_RightHand_26;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_Hips
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_Hips_27;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_LeftLowerLeg
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_LeftLowerLeg_28;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_RightLowerLeg
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_RightLowerLeg_29;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_LeftFoot
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_LeftFoot_30;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_RightFoot
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_RightFoot_31;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_LeftToes
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_LeftToes_32;
	// Wave.Essence.BodyTracking.ExtrinsicInfo_t Wave.Essence.BodyTracking.HumanoidTracking::m_RightToes
	ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951 ___m_RightToes_33;
	// UniHumanoid.Humanoid Wave.Essence.BodyTracking.HumanoidTracking::m_Humanoid
	Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* ___m_Humanoid_34;
	// Wave.Essence.BodyTracking.Body Wave.Essence.BodyTracking.HumanoidTracking::m_Body
	Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* ___m_Body_35;
	// Wave.Essence.BodyTracking.Body Wave.Essence.BodyTracking.HumanoidTracking::m_InitialBody
	Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* ___m_InitialBody_36;
	// Wave.Essence.BodyTracking.TransformData Wave.Essence.BodyTracking.HumanoidTracking::m_InitialTransform
	TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 ___m_InitialTransform_37;
	// Wave.Essence.BodyTracking.TrackerExtrinsic Wave.Essence.BodyTracking.HumanoidTracking::m_CustomExts
	TrackerExtrinsic_t2ADD4856F681D705255D0487C9F05854A716A25A* ___m_CustomExts_38;
	// System.Boolean Wave.Essence.BodyTracking.HumanoidTracking::updateTrackingData
	bool ___updateTrackingData_39;
	// System.Int32 Wave.Essence.BodyTracking.HumanoidTracking::m_AvatarID
	int32_t ___m_AvatarID_40;
};

// Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu
struct HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::m_sb
	StringBuilder_t* ___m_sb_5;
	// Wave.Essence.BodyTracking.HumanoidTracking Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::humanoidTracking
	HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* ___humanoidTracking_6;
	// UnityEngine.UI.Button Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::beginTrackingButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___beginTrackingButton_7;
	// UnityEngine.UI.Button Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::startCalibrationButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___startCalibrationButton_8;
	// UnityEngine.UI.Text Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::trackingTitle
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___trackingTitle_9;
	// UnityEngine.UI.Text Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::calibrationTitle
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___calibrationTitle_10;
	// UnityEngine.UI.Button Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::logButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___logButton_11;
};

// Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport
struct HumanoidTrackingTeleport_tE1CF2F0A4FE9B5BFC9EE6965DCE15FD782F39915  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Wave.Essence.BodyTracking.HumanoidTracking Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::humanoidTracking
	HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* ___humanoidTracking_4;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::offsetOrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___offsetOrigin_5;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::offset1
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___offset1_6;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::offset2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___offset2_7;
	// UnityEngine.Transform Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::offset3
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___offset3_8;
};

// Wave.Essence.BodyTracking.Demo.ProfilerLogger
struct ProfilerLogger_tFF821F76D76E2314BBF6C2DEF88D8E2E9234FB21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.ProfilerLogger::m_sb
	StringBuilder_t* ___m_sb_5;
	// System.String Wave.Essence.BodyTracking.Demo.ProfilerLogger::logFilePath
	String_t* ___logFilePath_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// System.Collections.Generic.List`1<Wave.Essence.BodyTracking.Demo.DebugRotation>
struct List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DebugRotationU5BU5D_t8FD980370B9843A4B334658D7C8C6F433F850031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Wave.Essence.BodyTracking.Demo.DebugRotation>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// Wave.Essence.BodyTracking.Demo.BTDemoHelper

// Wave.Essence.BodyTracking.Demo.BTDemoHelper

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_StaticFields
{
	// System.Int64 System.Threading.ReaderWriterLockSlim::s_nextLockID
	int64_t ___s_nextLockID_16;
};

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_ThreadStaticFields
{
	// System.Threading.ReaderWriterCount System.Threading.ReaderWriterLockSlim::t_rwc
	ReaderWriterCount_tD7361BF31DEB70DC7319519D215F400357543333* ___t_rwc_18;
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase

// Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase

// Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase

// Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase

// Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41

// Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41

// Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50

// Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// System.UInt32

// System.UInt32

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA47DFB5F37EEDF54A5632727E01AD47E87FA0126_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::5D85718EC594B982C252D0279E5966FFCA33A5EAF2A455038D3AB331FDE70CEA
	__StaticArrayInitTypeSizeU3D64_tF2D13FE173790E849ADDC6691BD48F2E961B9445 ___5D85718EC594B982C252D0279E5966FFCA33A5EAF2A455038D3AB331FDE70CEA_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::8667E718294E9E0DF1D30600BA3EEB201F764AAD2DAD72748643E4A285E1D1F7
	__StaticArrayInitTypeSizeU3D64_tF2D13FE173790E849ADDC6691BD48F2E961B9445 ___8667E718294E9E0DF1D30600BA3EEB201F764AAD2DAD72748643E4A285E1D1F7_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49
	__StaticArrayInitTypeSizeU3D24_t725980ECF4D0FC082DFA0BAA9BC9FCC436856CAB ___90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49_2;
};

// <PrivateImplementationDetails>

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Wave.Essence.BodyTracking.Extrinsic

// Wave.Essence.BodyTracking.Extrinsic

// Wave.Essence.BodyTracking.Joint

// Wave.Essence.BodyTracking.Joint

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Wave.Essence.BodyTracking.RotateSpace

// Wave.Essence.BodyTracking.RotateSpace

// Wave.Essence.BodyTracking.TransformData

// Wave.Essence.BodyTracking.TransformData

// Wave.Essence.BodyTracking.Body

// Wave.Essence.BodyTracking.Body

// Wave.Essence.BodyTracking.BodyAvatar

// Wave.Essence.BodyTracking.BodyAvatar

// UnityEngine.Component

// UnityEngine.Component

// Wave.Essence.BodyTracking.ExtrinsicVector4_t

// Wave.Essence.BodyTracking.ExtrinsicVector4_t

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Shader

// UnityEngine.Shader

// System.SystemException

// System.SystemException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Wave.Essence.BodyTracking.CalibrationStatusDelegate

// Wave.Essence.BodyTracking.CalibrationStatusDelegate

// Wave.Essence.BodyTracking.ExtrinsicInfo_t
struct ExtrinsicInfo_t_t1FD49BDFDB1151D93C8FD6C90564539058EC0951_StaticFields
{
	// System.Text.StringBuilder Wave.Essence.BodyTracking.ExtrinsicInfo_t::m_sb
	StringBuilder_t* ___m_sb_1;
};

// Wave.Essence.BodyTracking.ExtrinsicInfo_t

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Wave.Essence.BodyTracking.BodyManager
struct BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E_StaticFields
{
	// Wave.Essence.BodyTracking.BodyManager Wave.Essence.BodyTracking.BodyManager::m_Instance
	BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* ___m_Instance_9;
};

// Wave.Essence.BodyTracking.BodyManager

// Wave.Essence.BodyTracking.BodyRoleData
struct BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C_StaticFields
{
	// Wave.Essence.BodyTracking.BodyRoleData/RoleData[] Wave.Essence.BodyTracking.BodyRoleData::s_RoleData
	RoleDataU5BU5D_t5539B1E11CCB31C62F8ABE3F6216981A355DCFE0* ___s_RoleData_9;
};

// Wave.Essence.BodyTracking.BodyRoleData

// Wave.Essence.BodyTracking.Demo.BodyTrackingSample
struct BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB_StaticFields
{
	// System.Threading.ReaderWriterLockSlim Wave.Essence.BodyTracking.Demo.BodyTrackingSample::m_TrackingStatusRWLock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ___m_TrackingStatusRWLock_9;
};

// Wave.Essence.BodyTracking.Demo.BodyTrackingSample

// Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType

// Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType

// Wave.Essence.BodyTracking.Demo.DebugRotation

// Wave.Essence.BodyTracking.Demo.DebugRotation

// Wave.Essence.BodyTracking.Demo.DebugRotationMaster

// Wave.Essence.BodyTracking.Demo.DebugRotationMaster

// Wave.Essence.BodyTracking.Demo.DefineTrackerLocation

// Wave.Essence.BodyTracking.Demo.DefineTrackerLocation

// Wave.Essence.BodyTracking.Demo.DrawBone

// Wave.Essence.BodyTracking.Demo.DrawBone

// UniHumanoid.Humanoid

// UniHumanoid.Humanoid

// Wave.Essence.BodyTracking.Demo.HumanoidIKMenu

// Wave.Essence.BodyTracking.Demo.HumanoidIKMenu

// Wave.Essence.BodyTracking.Demo.HumanoidIKSample
struct HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_StaticFields
{
	// System.Threading.ReaderWriterLockSlim Wave.Essence.BodyTracking.Demo.HumanoidIKSample::m_TrackingStatusRWLock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ___m_TrackingStatusRWLock_9;
};

// Wave.Essence.BodyTracking.Demo.HumanoidIKSample

// Wave.Essence.BodyTracking.HumanoidTracking
struct HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B_StaticFields
{
	// System.Threading.ReaderWriterLockSlim Wave.Essence.BodyTracking.HumanoidTracking::m_TrackingStatusRWLock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ___m_TrackingStatusRWLock_9;
};

// Wave.Essence.BodyTracking.HumanoidTracking

// Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu

// Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu

// Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport

// Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport

// Wave.Essence.BodyTracking.Demo.ProfilerLogger

// Wave.Essence.BodyTracking.Demo.ProfilerLogger

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Wave.Essence.BodyTracking.RotateSpace[]
struct RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1  : public RuntimeArray
{
	ALIGN_FIELD (8) RotateSpace_tF6B3FB2158AF86D06760DD97F5ADFD4BC820BB8E m_Items[1];

	inline RotateSpace_tF6B3FB2158AF86D06760DD97F5ADFD4BC820BB8E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RotateSpace_tF6B3FB2158AF86D06760DD97F5ADFD4BC820BB8E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RotateSpace_tF6B3FB2158AF86D06760DD97F5ADFD4BC820BB8E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RotateSpace_tF6B3FB2158AF86D06760DD97F5ADFD4BC820BB8E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RotateSpace_tF6B3FB2158AF86D06760DD97F5ADFD4BC820BB8E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RotateSpace_tF6B3FB2158AF86D06760DD97F5ADFD4BC820BB8E value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Wave.Essence.BodyTracking.Demo.DefineTrackerLocation[]
struct DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827  : public RuntimeArray
{
	ALIGN_FIELD (8) DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* m_Items[1];

	inline DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase[]
struct TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E  : public RuntimeArray
{
	ALIGN_FIELD (8) TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3* m_Items[1];

	inline TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase[]
struct TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6  : public RuntimeArray
{
	ALIGN_FIELD (8) TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46* m_Items[1];

	inline TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.BodyManager Wave.Essence.BodyTracking.BodyManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.BodyTrackingSample::SetTrackingStatus(Wave.Essence.BodyTracking.Demo.BodyTrackingSample/TrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyTrackingSample_SetTrackingStatus_mC099C1ADC89268A08BEFD8A0B2C7F96D13F50939 (BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* __this, int32_t ___0_status, const RuntimeMethod* method) ;
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.BodyTrackingSample::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4 (BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Wave.Essence.BodyTracking.Demo.BTDemoHelper::Name(Wave.Essence.BodyTracking.Demo.BTDemoHelper/TrackingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BTDemoHelper_Name_mB8B562A3B37DCD4F248CACE648359BC9D9DB9252 (uint32_t ___0_mode, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.BodyTrackingSample::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyTrackingSample_DEBUG_m31FF95AAC13F6BB1A96708F7B50E699DE2927951 (BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.BodyTrackingResult Wave.Essence.BodyTracking.BodyManager::CreateBodyTracking(System.Int32&,Wave.Essence.BodyTracking.BodyTrackingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BodyManager_CreateBodyTracking_m5C110646B4D29B5459E98756E0D8D39A80C9F1E1 (BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* __this, int32_t* ___0_skeletonId, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String Wave.Essence.BodyTracking.BodyTrackingUtils::Name(Wave.Essence.BodyTracking.BodyTrackingResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BodyTrackingUtils_Name_m6FD313E3C69CB058ADDD331719E90C7A7F7361A6 (uint8_t ___0_result, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.BodyTrackingResult Wave.Essence.BodyTracking.BodyManager::GetDefaultRotationSpace(System.Int32,Wave.Essence.BodyTracking.RotateSpace[]&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BodyManager_GetDefaultRotationSpace_m3CE74183B3858F853B65A538C5B7B15F9943F92D (BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* __this, int32_t ___0_skeletonId, RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1** ___1_spaces, uint32_t* ___2_count, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3C5F10B877B802CA99FA61EC5360B30631270062 (StringBuilder_t* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E (StringBuilder_t* __this, float ___0_value, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.BodyTrackingResult Wave.Essence.BodyTracking.BodyManager::GetBodyTrackingInfo(System.Int32,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BodyManager_GetBodyTrackingInfo_m45EC63B0910FE447837B2E5049B54E977E05390E (BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* __this, int32_t ___0_skeletonId, float* ___1_avatarHeight, float* ___2_avatarScale, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.BodyTrackingSample::ApplyBodyScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyTrackingSample_ApplyBodyScale_m9DE1DCE8B7AFE1F529C1136173DF0C47914BF899 (BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* __this, float ___0_scale, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.BodyTrackingResult Wave.Essence.BodyTracking.BodyManager::GetBodyTrackingPoseOnce(System.Int32,Wave.Essence.BodyTracking.BodyAvatar&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BodyManager_GetBodyTrackingPoseOnce_m0462A87BC38B34E3DD76172A0D90246903B88514 (BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* __this, int32_t ___0_skeletonId, BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2** ___1_avatarBody, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.BodyTrackingSample::RecoverBodyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyTrackingSample_RecoverBodyOffset_m3982BD2343FC96B495A80432FD67A6F9AD0F927C (BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.BodyTrackingSample::UpdateBodyPosesInOrder(Wave.Essence.BodyTracking.BodyAvatar,Wave.Essence.BodyTracking.RotateSpace[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyTrackingSample_UpdateBodyPosesInOrder_m186359A895D65BFD43A57F1F7DED8FE115C3B7A9 (BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* __this, BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* ___0_avatarBody, RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1* ___1_rotationSpaces, uint32_t ___2_rotationSpaceCount, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.BodyTrackingSample::ApplyBodyOffsetEachFrame(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyTrackingSample_ApplyBodyOffsetEachFrame_mC33B63CAA28166BF68D5F81711EA7BF1374FF9A1 (BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_offset, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.BodyTrackingResult Wave.Essence.BodyTracking.BodyManager::DestroyBodyTracking(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BodyManager_DestroyBodyTracking_m5188756E32D3DBD2969B84CBCB8365457BADB0A6 (BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* __this, int32_t ___0_skeletonId, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.RuntimeDependency.Rdp::d(System.String,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rdp_d_mF35489EADD63997A0A4979F1991FF1730344709F (String_t* ___0_tag, StringBuilder_t* ___1_sb, bool ___2_logInEditor, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* HumanoidIKMenu_get_sb_m45758CEF81A9BB4B0CCA37049452905D349CC5A5 (HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKMenu_DEBUG_m96C0709141DD241F69D552817F58F9C8E700765D (HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::BeginTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_BeginTracking_m035E9A91F82B04AA76AF9951BF12603B0D80B964 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::StopTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_StopTracking_mE46993FA1AB1EEA999EE6F5398B6EF035331025F (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.Demo.HumanoidIKSample/TrackingStatus Wave.Essence.BodyTracking.Demo.HumanoidIKSample::GetTrackingStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanoidIKSample_GetTrackingStatus_mBCAE2D9261D6461B76D6B12570DD845B1DB4EFB8 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.RuntimeDependency.Rdp::w(System.String,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rdp_w_mF45F5AE4C43CFEF7AF13302B4076923AF70932B1 (String_t* ___0_tag, StringBuilder_t* ___1_sb, bool ___2_logInEditor, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.RuntimeDependency.Rdp::e(System.String,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rdp_e_mED692C1C3F5F3FE7CD0961510F14CB93C7CD7B87 (String_t* ___0_tag, StringBuilder_t* ___1_sb, bool ___2_logInEditor, const RuntimeMethod* method) ;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitReadLock_m49891BB1D1FA606B9EBD354D575D7F1ECBD53E87 (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterReadLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterReadLock_m5CB81D34821FE3C460F14CB964434C6A23F4E6EA (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* __this, int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.HumanoidIKSample::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::ERROR(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim_ExitWriteLock_m84F7F58C2B3552C5B32744FB06004CACDFCE57E6 (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReaderWriterLockSlim_TryEnterWriteLock_mE43F653D65A448225134E0CE1A289C4E112C62A2 (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* __this, int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::WARNING(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_WARNING_m12C121D9942FDC4C2E2F5BDE9AD7BD474AF80D75 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UniHumanoid.Humanoid>()
inline Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* Component_GetComponent_TisHumanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844_mB56BF4DD0C610B5D78D36F27EA247B481C4AF024 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UniHumanoid.Humanoid::get_Hips()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Hips_mDD9C3B9D0AAA448418D92DCC1752D6924F8B3132_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_LeftUpperLeg()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftUpperLeg_mFDB7ED0DCED5797D0016841E88D58485EF8FDB78_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_LeftLowerLeg()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftLowerLeg_m85BACB7FAFC528B5BF17341DDC81B78B7C20508E_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_LeftFoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftFoot_mD06D709FE0E1EBF59675CC1788EAC1192C4AB9CB_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_LeftToes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftToes_mFC1B26A87208410951D46832CFA5437ECAFEC8CB_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_RightUpperLeg()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightUpperLeg_m6D2A5038F4537C297B4E623B3DA838F867208D8C_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_RightLowerLeg()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightLowerLeg_m2C63F86F3C80CB343C3E5FBB65C9AF13C9E951E7_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_RightFoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightFoot_mFAF4AC98BC70B380AA4C529826815BCA0CAA491F_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_RightToes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightToes_mEFD1E6053C543E7AF74BC7A3FE89187ACD127843_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_Spine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Spine_m3E444C1B073E2E3F0BC5C26AF736EBDD0F74D728_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_UpperChest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_UpperChest_mCA49FA8AD9E5036B2DF24156B8B4A20BD3CABBC5_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_Chest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Chest_mF77FA45E291C75FA9EAA3D4DECBC7835D57262AC_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_Neck()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Neck_m456F2CA9C60B275DCF5FF030BA6E636A57A05B46_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_Head()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Head_mD48ECFF180BA2AC19891B1992BC304EE91F3C416_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_LeftShoulder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftShoulder_mECF444F0A6EC318B41FF9046757AF0CA5C0D8725_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_LeftUpperArm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftUpperArm_m1EF30A2E544B3A3EB0E294377406B29A9D7DAC49_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_LeftLowerArm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftLowerArm_mFEC136E30E3BD3EE4500403B11B869B70A56D6BF_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_LeftHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftHand_m795FE11FAD4A321C5973ECB8424A44923442E823_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_RightShoulder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightShoulder_m4F699A4AD703AC7FA898CFE4221CE546443930EF_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_RightUpperArm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightUpperArm_m713F6972F45EC35BD57754B56B6E9780B8724265_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_RightLowerArm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightLowerArm_m1E1A68D79C267A2BFAA4798F5A1E7B4BA8CC5D4A_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UniHumanoid.Humanoid::get_RightHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightHand_m747531F73CC9425073DC74CC85A1DB2156E543AF_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.TransformData::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformData__ctor_m794ABEA3209CCDAE9F7034B8BC8F7C8B81A5E461 (TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_trans, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Body::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body__ctor_m304CA93992C84D6B2EAD2389644CEBBCEF6E6E92 (Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* __this, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::AssignHumanoidToBody(Wave.Essence.BodyTracking.Body&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanoidIKSample_AssignHumanoidToBody_mF7EBCB43B39392E6C77E21DCF3E6FDDD27F5291D (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** ___0_body, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Body::UpdateData(Wave.Essence.BodyTracking.Body)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_UpdateData_mE401B5CC75954EC602B99CF18AA13A6946148C2C (Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* __this, Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* ___0_in_body, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::CanStartTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanoidIKSample_CanStartTracking_m8569974C09B502DD111DE6659EC62E3D2AC2D272 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::SetTrackingStatus(Wave.Essence.BodyTracking.Demo.HumanoidIKSample/TrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_SetTrackingStatus_m960D072542BC95DB9028E824E3F33AF49142D7F6 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, int32_t ___0_status, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Wave.Essence.BodyTracking.Demo.HumanoidIKSample::StartBodyTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HumanoidIKSample_StartBodyTracking_mDC30F5825D981E84126B4781D319758717F26BDF (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::CanStopTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanoidIKSample_CanStopTracking_m21A63B022D6379B367273E15DFB535031C98AFF2 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Body::UpdateBody(Wave.Essence.BodyTracking.Body&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Body_UpdateBody_m06F1D926E88D37B42A07E0EF5AE0A9831CE6EA35 (Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* __this, Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** ___0_body, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::RecoverBodyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_RecoverBodyScale_mE890CED651D1CA40184B0C8346F1BDE38968B4C5 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::RecoverBodyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_RecoverBodyOffset_mA87C27C1C3B6B124F5D13D959A1DFFE879FC2D13 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBodyTrackingU3Ed__50__ctor_m789505CA5CEF8C4521FB0ABEB41B114B060900B1 (U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.BodyAvatar::Update(Wave.Essence.BodyTracking.JointType,UnityEngine.Transform&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801 (BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* __this, int32_t ___0_jointType, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___1_trans, float ___2_scale, const RuntimeMethod* method) ;
// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderWriterLockSlim__ctor_m617A86382C7F076BC04E68726F50961C799688E8 (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::ApplyBodyScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_ApplyBodyScale_m25CB18B6BEAE25BB005D5B07ACC53ED662DA26D1 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, float ___0_scale, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.BodyTracking.BodyManager::get_EnableTrackingLog()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyManager_get_EnableTrackingLog_m44037CFAD5AA2C84E87B10CC48FAE79E56757F01_inline (BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::UpdateBodyPosesInOrder(Wave.Essence.BodyTracking.BodyAvatar,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_UpdateBodyPosesInOrder_mCD5F885808157F16D105809550B59E6F674FA3A7 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* ___0_avatarBody, float ___1_scale, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::ApplyBodyOffsetEachFrame(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_ApplyBodyOffsetEachFrame_mF06C121CF7510EE3161BBAB4BDE28F84F3D2EB07 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_offset, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.HumanoidTracking/TrackingMode Wave.Essence.BodyTracking.HumanoidTracking::get_Tracking()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HumanoidTracking_get_Tracking_m9D1C84FBD07F1832E9901A6C88116BEB093C3D1B_inline (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void Wave.Essence.BodyTracking.HumanoidTracking::set_Tracking(Wave.Essence.BodyTracking.HumanoidTracking/TrackingMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HumanoidTracking_set_Tracking_m004E244B05EC6923E0384CBD0F7F362D1C8F07D5_inline (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.HumanoidTracking::BeginTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTracking_BeginTracking_mDC5D7037C99BEF10A4E257156895ED1C16B4C8A6 (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.HumanoidTracking::StopTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTracking_StopTracking_m52BC7E5009A477C09C2DEDEBFFD3DA471E97F0F4 (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, const RuntimeMethod* method) ;
// System.String Wave.Essence.BodyTracking.BodyTrackingUtils::Name(Wave.Essence.BodyTracking.CalibrationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BodyTrackingUtils_Name_mFFFA3A3E90C7379A6AEFD9677A76E5EA25DC2EB0 (int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.CalibrationStatusDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CalibrationStatusDelegate__ctor_m5B9BF3D65DCEC6D1B4E3F7D685E62EFB4F187E2C (CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.HumanoidTracking::BeginCalibration(Wave.Essence.BodyTracking.CalibrationStatusDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTracking_BeginCalibration_m4FC0FEF67A4E1FD240ABBAB7A8993B88D5A31B00 (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F* ___0_callback, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.HumanoidTracking::StopCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTracking_StopCalibration_mC1EEC096FE8E459E453C0A4837BE9D3054BB6AF0 (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::StartCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_StartCalibration_m137B0148FF228DD5E8E8741FA7CD24CDBB7B0EFC (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::BeginTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_BeginTracking_m5C4A211E5B53906170F1E31A2A0BD9A2D2BA9BE4 (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::EndTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_EndTracking_mD4E55C8687605B0EE67645C21822DCE42220223D (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.BodyManager::set_EnableTrackingLog(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyManager_set_EnableTrackingLog_m24ECB8E335453BC3B1F1375893FB66231DA3D692_inline (BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.HumanoidTracking::set_AvatarOffset(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HumanoidTracking_set_AvatarOffset_m103BF761E4126D5E589EA40263AB89F444FB5C15_inline (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Wave.Essence.BodyTracking.Demo.DebugRotation>::get_Item(System.Int32)
inline DebugRotation_tC0BD5B64718318E12F1DB9CF53E0DD6ABC713974* List_1_get_Item_m527E7770ECD44A449CA1B0500367B4BC4B031D1A (List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  DebugRotation_tC0BD5B64718318E12F1DB9CF53E0DD6ABC713974* (*) (List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void Wave.Essence.BodyTracking.Demo.DebugRotation::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugRotation_Rotate_m3979F0B972ACD98D8EA38B13D7AEBC007396B111 (DebugRotation_tC0BD5B64718318E12F1DB9CF53E0DD6ABC713974* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Wave.Essence.BodyTracking.Demo.DebugRotation>::get_Count()
inline int32_t List_1_get_Count_mE40178F84DE4EBEE5DCADB66A6BE37CB56D10BDA_inline (List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29 (StringBuilder_t* __this, int32_t ___0_index, String_t* ___1_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.ProfilerLogger::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* ProfilerLogger_get_sb_mE96A598C5A853C5B731AF4B76E4C016C5368DDFA (ProfilerLogger_tFF821F76D76E2314BBF6C2DEF88D8E2E9234FB21* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.ProfilerLogger::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerLogger_DEBUG_mC78439B3E082775BFCDA09BA9DC6DD6FF9BDDE67 (ProfilerLogger_tFF821F76D76E2314BBF6C2DEF88D8E2E9234FB21* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::set_logFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_set_logFile_m169323E7FFAAF95B6D771AB8DBC4B3BB9042E072 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::set_enableBinaryLog(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_set_enableBinaryLog_mA859BD8D6D193C5E3FAF1888B76722C4D2B55024 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_set_enabled_m54CE46AB03F2D012299B0E52A6651BDA3B3BBDC1 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.BodyRoleData/TrackerIndexBase[] Wave.Essence.BodyTracking.BodyRoleData::get_TrackerIndexInputs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E* BodyRoleData_get_TrackerIndexInputs_mE1DCA44D560251A1937F9040D70735362B2AD6C7_inline (BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<Wave.Essence.BodyTracking.Demo.DefineTrackerLocation>()
inline DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* GameObject_GetComponentsInChildren_TisDefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7_mCB96B6A47962DE38FB00171682764169A7947C3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Dropdown>()
inline Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* GameObject_GetComponentInChildren_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m57E48D487188F67A8B796999E6DF0D192A35CC2E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.BodyRoleData/TrackerTypeBase[] Wave.Essence.BodyTracking.BodyRoleData::get_TrackerTypeInputs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6* BodyRoleData_get_TrackerTypeInputs_mFEEB3C5D0310A30334C4C3FEA16286CB3A893C49_inline (BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* __this, const RuntimeMethod* method) ;
// System.Int32 Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::GetTypeDropdownValue(Wave.Essence.BodyTracking.RuntimeDependency.TrackerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigTrackerIndexType_GetTypeDropdownValue_mC89A045BE4DB6B29299D3983D958075B29665C2E (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, uint32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.BodyRoleData/TrackerBase Wave.Essence.BodyTracking.BodyRoleData::get_TrackerPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyRoleData_get_TrackerPose_mBBB7B14B5DBDDEB75BCB1CE1CF69571A06CA1EFD_inline (BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.BodyRoleData::SetTrackerIndex(Wave.Essence.BodyTracking.RuntimeDependency.TrackerLocation,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyRoleData_SetTrackerIndex_m99F43010FE095650EE33C804228491E1E1E15E4A (BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* __this, int32_t ___0_location, int32_t ___1_index, const RuntimeMethod* method) ;
// Wave.Essence.BodyTracking.RuntimeDependency.TrackerType Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::GetDropdownValueType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConfigTrackerIndexType_GetDropdownValueType_m474705B9DDFF3E8F17733688EA33647DF375BB98 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String Wave.Essence.BodyTracking.RuntimeDependency.Rdp::Name(Wave.Essence.BodyTracking.RuntimeDependency.TrackerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rdp_Name_m8E19758B52F1F492AEB959EC5B9F4BF45DE1376D (uint32_t ___0_type, const RuntimeMethod* method) ;
// System.Void Wave.Essence.BodyTracking.BodyRoleData::SetTrackerType(Wave.Essence.BodyTracking.RuntimeDependency.TrackerLocation,Wave.Essence.BodyTracking.RuntimeDependency.TrackerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyRoleData_SetTrackerType_mFF44E45397CA75A2FDF5F95B9246F8A4AD0F3775 (BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* __this, int32_t ___0_location, uint32_t ___1_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBodyTrackingU3Ed__41__ctor_m6F14AD4C219A16B9348ED1FCA8D0C83E3211FF1B (U3CStartBodyTrackingU3Ed__41_t4040ACE24B90527EA05CCF98736A60F606F97025* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBodyTrackingU3Ed__41_System_IDisposable_Dispose_mDA093FF366764A025BF9429CE03BBC7CB594061A (U3CStartBodyTrackingU3Ed__41_t4040ACE24B90527EA05CCF98736A60F606F97025* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartBodyTrackingU3Ed__41_MoveNext_m61ABDE81E20EA9DABA81F696934DD580F2ACCA2B (U3CStartBodyTrackingU3Ed__41_t4040ACE24B90527EA05CCF98736A60F606F97025* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyTrackingUtils_t33B372876873BF1E13AE6300C400B89AEC3FA7B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral098F8A4779DBC39DF7367A03881E99F26B45FFC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09C7F4F9D456A44D2A8B20A818F795B573360C46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8D175CFF10865393C8B56F7ADE518D69A05F04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43D1AE57667F16420A902D179524489E608F1BBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51A8FF8E280CC099C1F7178FAB191DDA1CF694BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56E72C17B6BC27637F9BFE2D9CA774AD88A7F454);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76D6BE1C6DCE46870C1F6DAAB0C1B31559BC90A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF19D49FBC442F77B011D87292BB970BD8415665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9147E9E17E7A19569168962EEDD0C19E02A2725);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBD579DCEEC564BEA150613A9E3AE6C7DC2E6516);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC508C9C0B8CCA8F5B410A10C3EB05B7817C5BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF289538A91A7D933B13FCDB598703D47187D3D4F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* V_1 = NULL;
	uint8_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	uint32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0351;
			}
			case 2:
			{
				goto IL_03c3;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (BodyManager.Instance == null || inputBody == null)
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_3;
		L_3 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_5 = V_1;
		NullCheck(L_5);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_6 = L_5->___inputBody_10;
		if (L_6)
		{
			goto IL_0047;
		}
	}

IL_003e:
	{
		// SetTrackingStatus(TrackingStatus.StartFailure);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_7 = V_1;
		NullCheck(L_7);
		BodyTrackingSample_SetTrackingStatus_mC099C1ADC89268A08BEFD8A0B2C7F96D13F50939(L_7, 1, NULL);
		// yield break;
		return (bool)0;
	}

IL_0047:
	{
		// sb.Clear().Append("StartBodyTracking() ").Append(m_TrackingMode.Name()); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_8 = V_1;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_8, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_9, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteralF289538A91A7D933B13FCDB598703D47187D3D4F, NULL);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_12 = V_1;
		NullCheck(L_12);
		uint32_t L_13 = L_12->___m_TrackingMode_14;
		String_t* L_14;
		L_14 = BTDemoHelper_Name_mB8B562A3B37DCD4F248CACE648359BC9D9DB9252(L_13, NULL);
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_14, NULL);
		// sb.Clear().Append("StartBodyTracking() ").Append(m_TrackingMode.Name()); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_16 = V_1;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_17 = V_1;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_17, NULL);
		NullCheck(L_16);
		BodyTrackingSample_DEBUG_m31FF95AAC13F6BB1A96708F7B50E699DE2927951(L_16, L_18, NULL);
		// BodyTrackingResult result = BodyTrackingResult.ERROR_FATAL_ERROR;
		V_2 = ((int32_t)255);
		// result = BodyManager.Instance.CreateBodyTracking(ref m_TrackerId, (BodyTrackingMode)m_TrackingMode);
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_19;
		L_19 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_20 = V_1;
		NullCheck(L_20);
		int32_t* L_21 = (&L_20->___m_TrackerId_16);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_22 = V_1;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___m_TrackingMode_14;
		NullCheck(L_19);
		uint8_t L_24;
		L_24 = BodyManager_CreateBodyTracking_m5C110646B4D29B5459E98756E0D8D39A80C9F1E1(L_19, L_21, L_23, NULL);
		V_2 = L_24;
		// sb.Clear().Append("StartBodyTracking() CreateBodyTracking(").Append(m_TrackerId).Append(") result: ").Append(result.Name()); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_25 = V_1;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_25, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_26, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteral098F8A4779DBC39DF7367A03881E99F26B45FFC9, NULL);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = L_29->___m_TrackerId_16;
		NullCheck(L_28);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_28, L_30, NULL);
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, _stringLiteral09C7F4F9D456A44D2A8B20A818F795B573360C46, NULL);
		uint8_t L_33 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BodyTrackingUtils_t33B372876873BF1E13AE6300C400B89AEC3FA7B9_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = BodyTrackingUtils_Name_m6FD313E3C69CB058ADDD331719E90C7A7F7361A6(L_33, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, L_34, NULL);
		// sb.Clear().Append("StartBodyTracking() CreateBodyTracking(").Append(m_TrackerId).Append(") result: ").Append(result.Name()); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_36 = V_1;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_37, NULL);
		NullCheck(L_36);
		BodyTrackingSample_DEBUG_m31FF95AAC13F6BB1A96708F7B50E699DE2927951(L_36, L_38, NULL);
		// if (result != BodyTrackingResult.SUCCESS)
		uint8_t L_39 = V_2;
		if (!L_39)
		{
			goto IL_00e4;
		}
	}
	{
		// SetTrackingStatus(TrackingStatus.StartFailure);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_40 = V_1;
		NullCheck(L_40);
		BodyTrackingSample_SetTrackingStatus_mC099C1ADC89268A08BEFD8A0B2C7F96D13F50939(L_40, 1, NULL);
		// yield break;
		return (bool)0;
	}

IL_00e4:
	{
		// float userCalibrationHeight = 0, avatarScale = 0;
		V_3 = (0.0f);
		// float userCalibrationHeight = 0, avatarScale = 0;
		V_4 = (0.0f);
		// result = BodyManager.Instance.GetDefaultRotationSpace(m_TrackerId, out RotateSpace[] rotationSpaces, out UInt32 rotationSpaceCount);
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_41;
		L_41 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = L_42->___m_TrackerId_16;
		RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1** L_44 = (&__this->___U3CrotationSpacesU3E5__2_3);
		uint32_t* L_45 = (&__this->___U3CrotationSpaceCountU3E5__3_4);
		NullCheck(L_41);
		uint8_t L_46;
		L_46 = BodyManager_GetDefaultRotationSpace_m3CE74183B3858F853B65A538C5B7B15F9943F92D(L_41, L_43, L_44, L_45, NULL);
		V_2 = L_46;
		// sb.Clear().Append("StartBodyTracking() GetBodyRotationSpaces result: ").Append(result.Name()).Append(", jointCount: ").Append(rotationSpaceCount); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_47 = V_1;
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_47, NULL);
		NullCheck(L_48);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_48, NULL);
		NullCheck(L_49);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, _stringLiteralE9147E9E17E7A19569168962EEDD0C19E02A2725, NULL);
		uint8_t L_51 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BodyTrackingUtils_t33B372876873BF1E13AE6300C400B89AEC3FA7B9_il2cpp_TypeInfo_var);
		String_t* L_52;
		L_52 = BodyTrackingUtils_Name_m6FD313E3C69CB058ADDD331719E90C7A7F7361A6(L_51, NULL);
		NullCheck(L_50);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_50, L_52, NULL);
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteral56E72C17B6BC27637F9BFE2D9CA774AD88A7F454, NULL);
		uint32_t L_55 = __this->___U3CrotationSpaceCountU3E5__3_4;
		NullCheck(L_54);
		StringBuilder_t* L_56;
		L_56 = StringBuilder_Append_m3C5F10B877B802CA99FA61EC5360B30631270062(L_54, L_55, NULL);
		// sb.Clear().Append("StartBodyTracking() GetBodyRotationSpaces result: ").Append(result.Name()).Append(", jointCount: ").Append(rotationSpaceCount); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_57 = V_1;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_58 = V_1;
		NullCheck(L_58);
		StringBuilder_t* L_59;
		L_59 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_58, NULL);
		NullCheck(L_57);
		BodyTrackingSample_DEBUG_m31FF95AAC13F6BB1A96708F7B50E699DE2927951(L_57, L_59, NULL);
		// for (UInt32 i = 0; i < rotationSpaceCount; i++)
		V_5 = 0;
		goto IL_0233;
	}

IL_0158:
	{
		// sb.Clear().Append("StartBodyTracking() rotationSpaces[").Append(i).Append("]")
		//     .Append(", rotation(").Append(rotationSpaces[i].rotation.x)
		//     .Append(", ").Append(rotationSpaces[i].rotation.y)
		//     .Append(", ").Append(rotationSpaces[i].rotation.z)
		//     .Append(", ").Append(rotationSpaces[i].rotation.w).Append(")");
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_60 = V_1;
		NullCheck(L_60);
		StringBuilder_t* L_61;
		L_61 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_60, NULL);
		NullCheck(L_61);
		StringBuilder_t* L_62;
		L_62 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_61, NULL);
		NullCheck(L_62);
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_62, _stringLiteralEBD579DCEEC564BEA150613A9E3AE6C7DC2E6516, NULL);
		uint32_t L_64 = V_5;
		NullCheck(L_63);
		StringBuilder_t* L_65;
		L_65 = StringBuilder_Append_m3C5F10B877B802CA99FA61EC5360B30631270062(L_63, L_64, NULL);
		NullCheck(L_65);
		StringBuilder_t* L_66;
		L_66 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_65, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		NullCheck(L_66);
		StringBuilder_t* L_67;
		L_67 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_66, _stringLiteral43D1AE57667F16420A902D179524489E608F1BBB, NULL);
		RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1* L_68 = __this->___U3CrotationSpacesU3E5__2_3;
		uint32_t L_69 = V_5;
		NullCheck(L_68);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_70 = (&((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___rotation_1);
		float L_71 = L_70->___x_0;
		NullCheck(L_67);
		StringBuilder_t* L_72;
		L_72 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_67, L_71, NULL);
		NullCheck(L_72);
		StringBuilder_t* L_73;
		L_73 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_72, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1* L_74 = __this->___U3CrotationSpacesU3E5__2_3;
		uint32_t L_75 = V_5;
		NullCheck(L_74);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_76 = (&((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___rotation_1);
		float L_77 = L_76->___y_1;
		NullCheck(L_73);
		StringBuilder_t* L_78;
		L_78 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_73, L_77, NULL);
		NullCheck(L_78);
		StringBuilder_t* L_79;
		L_79 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_78, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1* L_80 = __this->___U3CrotationSpacesU3E5__2_3;
		uint32_t L_81 = V_5;
		NullCheck(L_80);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_82 = (&((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___rotation_1);
		float L_83 = L_82->___z_2;
		NullCheck(L_79);
		StringBuilder_t* L_84;
		L_84 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_79, L_83, NULL);
		NullCheck(L_84);
		StringBuilder_t* L_85;
		L_85 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_84, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1* L_86 = __this->___U3CrotationSpacesU3E5__2_3;
		uint32_t L_87 = V_5;
		NullCheck(L_86);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_88 = (&((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___rotation_1);
		float L_89 = L_88->___w_3;
		NullCheck(L_85);
		StringBuilder_t* L_90;
		L_90 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_85, L_89, NULL);
		NullCheck(L_90);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_90, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		// DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_92 = V_1;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_93 = V_1;
		NullCheck(L_93);
		StringBuilder_t* L_94;
		L_94 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_93, NULL);
		NullCheck(L_92);
		BodyTrackingSample_DEBUG_m31FF95AAC13F6BB1A96708F7B50E699DE2927951(L_92, L_94, NULL);
		// for (UInt32 i = 0; i < rotationSpaceCount; i++)
		uint32_t L_95 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, 1));
	}

IL_0233:
	{
		// for (UInt32 i = 0; i < rotationSpaceCount; i++)
		uint32_t L_96 = V_5;
		uint32_t L_97 = __this->___U3CrotationSpaceCountU3E5__3_4;
		if ((!(((uint32_t)L_96) >= ((uint32_t)L_97))))
		{
			goto IL_0158;
		}
	}
	{
		// result = BodyManager.Instance.GetBodyTrackingInfo(m_TrackerId, out userCalibrationHeight, out avatarScale);
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_98;
		L_98 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_99 = V_1;
		NullCheck(L_99);
		int32_t L_100 = L_99->___m_TrackerId_16;
		NullCheck(L_98);
		uint8_t L_101;
		L_101 = BodyManager_GetBodyTrackingInfo_m45EC63B0910FE447837B2E5049B54E977E05390E(L_98, L_100, (&V_3), (&V_4), NULL);
		V_2 = L_101;
		// sb.Clear().Append("StartBodyTracking() GetBodyTrackingInfo result ").Append(result.Name()).Append(", userCalibrationHeight ").Append(userCalibrationHeight).Append(", avatarScale ").Append(avatarScale); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_102 = V_1;
		NullCheck(L_102);
		StringBuilder_t* L_103;
		L_103 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_102, NULL);
		NullCheck(L_103);
		StringBuilder_t* L_104;
		L_104 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_103, NULL);
		NullCheck(L_104);
		StringBuilder_t* L_105;
		L_105 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_104, _stringLiteralEDC508C9C0B8CCA8F5B410A10C3EB05B7817C5BF, NULL);
		uint8_t L_106 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BodyTrackingUtils_t33B372876873BF1E13AE6300C400B89AEC3FA7B9_il2cpp_TypeInfo_var);
		String_t* L_107;
		L_107 = BodyTrackingUtils_Name_m6FD313E3C69CB058ADDD331719E90C7A7F7361A6(L_106, NULL);
		NullCheck(L_105);
		StringBuilder_t* L_108;
		L_108 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_105, L_107, NULL);
		NullCheck(L_108);
		StringBuilder_t* L_109;
		L_109 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_108, _stringLiteral51A8FF8E280CC099C1F7178FAB191DDA1CF694BA, NULL);
		float L_110 = V_3;
		NullCheck(L_109);
		StringBuilder_t* L_111;
		L_111 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_109, L_110, NULL);
		NullCheck(L_111);
		StringBuilder_t* L_112;
		L_112 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_111, _stringLiteralAF19D49FBC442F77B011D87292BB970BD8415665, NULL);
		float L_113 = V_4;
		NullCheck(L_112);
		StringBuilder_t* L_114;
		L_114 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_112, L_113, NULL);
		// sb.Clear().Append("StartBodyTracking() GetBodyTrackingInfo result ").Append(result.Name()).Append(", userCalibrationHeight ").Append(userCalibrationHeight).Append(", avatarScale ").Append(avatarScale); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_115 = V_1;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_116 = V_1;
		NullCheck(L_116);
		StringBuilder_t* L_117;
		L_117 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_116, NULL);
		NullCheck(L_115);
		BodyTrackingSample_DEBUG_m31FF95AAC13F6BB1A96708F7B50E699DE2927951(L_115, L_117, NULL);
		// if (result == BodyTrackingResult.SUCCESS)
		uint8_t L_118 = V_2;
		if (L_118)
		{
			goto IL_0360;
		}
	}
	{
		// float scale = userCalibrationHeight / m_InitialBody.height;
		float L_119 = V_3;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_120 = V_1;
		NullCheck(L_120);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_121 = L_120->___m_InitialBody_12;
		NullCheck(L_121);
		float L_122 = L_121->___height_52;
		V_6 = ((float)(L_119/L_122));
		// sb.Clear().Append("StartBodyTracking() Apply avatar scale with ").Append(scale); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_123 = V_1;
		NullCheck(L_123);
		StringBuilder_t* L_124;
		L_124 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_123, NULL);
		NullCheck(L_124);
		StringBuilder_t* L_125;
		L_125 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_124, NULL);
		NullCheck(L_125);
		StringBuilder_t* L_126;
		L_126 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_125, _stringLiteral76D6BE1C6DCE46870C1F6DAAB0C1B31559BC90A6, NULL);
		float L_127 = V_6;
		NullCheck(L_126);
		StringBuilder_t* L_128;
		L_128 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_126, L_127, NULL);
		// sb.Clear().Append("StartBodyTracking() Apply avatar scale with ").Append(scale); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_129 = V_1;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_130 = V_1;
		NullCheck(L_130);
		StringBuilder_t* L_131;
		L_131 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_130, NULL);
		NullCheck(L_129);
		BodyTrackingSample_DEBUG_m31FF95AAC13F6BB1A96708F7B50E699DE2927951(L_129, L_131, NULL);
		// ApplyBodyScale(scale);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_132 = V_1;
		float L_133 = V_6;
		NullCheck(L_132);
		BodyTrackingSample_ApplyBodyScale_m9DE1DCE8B7AFE1F529C1136173DF0C47914BF899(L_132, L_133, NULL);
		// SetTrackingStatus(TrackingStatus.Available); // Tracking is available then going into the loop for retrieving poses.
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_134 = V_1;
		NullCheck(L_134);
		BodyTrackingSample_SetTrackingStatus_mC099C1ADC89268A08BEFD8A0B2C7F96D13F50939(L_134, 4, NULL);
		// updateTrackingData = true;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_135 = V_1;
		NullCheck(L_135);
		L_135->___updateTrackingData_15 = (bool)1;
		goto IL_0358;
	}

IL_02f9:
	{
		// result = BodyManager.Instance.GetBodyTrackingPoseOnce(m_TrackerId, out avatarBody);
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_136;
		L_136 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_137 = V_1;
		NullCheck(L_137);
		int32_t L_138 = L_137->___m_TrackerId_16;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_139 = V_1;
		NullCheck(L_139);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2** L_140 = (&L_139->___avatarBody_17);
		NullCheck(L_136);
		uint8_t L_141;
		L_141 = BodyManager_GetBodyTrackingPoseOnce_m0462A87BC38B34E3DD76172A0D90246903B88514(L_136, L_138, L_140, NULL);
		V_2 = L_141;
		// if (result == BodyTrackingResult.SUCCESS)
		uint8_t L_142 = V_2;
		if (L_142)
		{
			goto IL_033d;
		}
	}
	{
		// RecoverBodyOffset();
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_143 = V_1;
		NullCheck(L_143);
		BodyTrackingSample_RecoverBodyOffset_m3982BD2343FC96B495A80432FD67A6F9AD0F927C(L_143, NULL);
		// UpdateBodyPosesInOrder(avatarBody, rotationSpaces, rotationSpaceCount);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_144 = V_1;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_145 = V_1;
		NullCheck(L_145);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_146 = L_145->___avatarBody_17;
		RotateSpaceU5BU5D_tAB46B4B26C807527769E92317DC5D49F503EFAD1* L_147 = __this->___U3CrotationSpacesU3E5__2_3;
		uint32_t L_148 = __this->___U3CrotationSpaceCountU3E5__3_4;
		NullCheck(L_144);
		BodyTrackingSample_UpdateBodyPosesInOrder_m186359A895D65BFD43A57F1F7DED8FE115C3B7A9(L_144, L_146, L_147, L_148, NULL);
		// ApplyBodyOffsetEachFrame(avatarOffset);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_149 = V_1;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_150 = V_1;
		NullCheck(L_150);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_151 = L_150->___avatarOffset_11;
		NullCheck(L_149);
		BodyTrackingSample_ApplyBodyOffsetEachFrame_mC33B63CAA28166BF68D5F81711EA7BF1374FF9A1(L_149, L_151, NULL);
	}

IL_033d:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_152 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_152);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_152, NULL);
		__this->___U3CU3E2__current_1 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_152);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0351:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0358:
	{
		// while (updateTrackingData)
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_153 = V_1;
		NullCheck(L_153);
		bool L_154 = L_153->___updateTrackingData_15;
		if (L_154)
		{
			goto IL_02f9;
		}
	}

IL_0360:
	{
		// result = BodyManager.Instance.DestroyBodyTracking(m_TrackerId);
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_155;
		L_155 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_156 = V_1;
		NullCheck(L_156);
		int32_t L_157 = L_156->___m_TrackerId_16;
		NullCheck(L_155);
		uint8_t L_158;
		L_158 = BodyManager_DestroyBodyTracking_m5188756E32D3DBD2969B84CBCB8365457BADB0A6(L_155, L_157, NULL);
		V_2 = L_158;
		// sb.Clear().Append("StartBodyTracking() DestroyBodyTracking(").Append(m_TrackerId).Append(") result: ").Append(result.Name()); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_159 = V_1;
		NullCheck(L_159);
		StringBuilder_t* L_160;
		L_160 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_159, NULL);
		NullCheck(L_160);
		StringBuilder_t* L_161;
		L_161 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_160, NULL);
		NullCheck(L_161);
		StringBuilder_t* L_162;
		L_162 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_161, _stringLiteral1D8D175CFF10865393C8B56F7ADE518D69A05F04, NULL);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_163 = V_1;
		NullCheck(L_163);
		int32_t L_164 = L_163->___m_TrackerId_16;
		NullCheck(L_162);
		StringBuilder_t* L_165;
		L_165 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_162, L_164, NULL);
		NullCheck(L_165);
		StringBuilder_t* L_166;
		L_166 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_165, _stringLiteral09C7F4F9D456A44D2A8B20A818F795B573360C46, NULL);
		uint8_t L_167 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BodyTrackingUtils_t33B372876873BF1E13AE6300C400B89AEC3FA7B9_il2cpp_TypeInfo_var);
		String_t* L_168;
		L_168 = BodyTrackingUtils_Name_m6FD313E3C69CB058ADDD331719E90C7A7F7361A6(L_167, NULL);
		NullCheck(L_166);
		StringBuilder_t* L_169;
		L_169 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_166, L_168, NULL);
		// sb.Clear().Append("StartBodyTracking() DestroyBodyTracking(").Append(m_TrackerId).Append(") result: ").Append(result.Name()); DEBUG(sb);
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_170 = V_1;
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_171 = V_1;
		NullCheck(L_171);
		StringBuilder_t* L_172;
		L_172 = BodyTrackingSample_get_sb_m67C1663B3907E69CA62C07576C4DCE6A298E9CC4(L_171, NULL);
		NullCheck(L_170);
		BodyTrackingSample_DEBUG_m31FF95AAC13F6BB1A96708F7B50E699DE2927951(L_170, L_172, NULL);
		// yield return null; // waits next frame
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_03c3:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetTrackingStatus(TrackingStatus.NotStart); // Resets the tracking status last.
		BodyTrackingSample_tBEB448BF3D16B3E3FACC1F8CAC2AFBA8B1B343CB* L_173 = V_1;
		NullCheck(L_173);
		BodyTrackingSample_SetTrackingStatus_mC099C1ADC89268A08BEFD8A0B2C7F96D13F50939(L_173, 0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartBodyTrackingU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m352F06464BD67B448B0557DA6668E7C4C1A1A831 (U3CStartBodyTrackingU3Ed__41_t4040ACE24B90527EA05CCF98736A60F606F97025* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBodyTrackingU3Ed__41_System_Collections_IEnumerator_Reset_m984D1038D5170A3931EF00A1AA520CC9A4E531B9 (U3CStartBodyTrackingU3Ed__41_t4040ACE24B90527EA05CCF98736A60F606F97025* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartBodyTrackingU3Ed__41_System_Collections_IEnumerator_Reset_m984D1038D5170A3931EF00A1AA520CC9A4E531B9_RuntimeMethod_var)));
	}
}
// System.Object Wave.Essence.BodyTracking.Demo.BodyTrackingSample/<StartBodyTracking>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartBodyTrackingU3Ed__41_System_Collections_IEnumerator_get_Current_m6B47811CFC4BF16C593AC8F26998053F63F916C8 (U3CStartBodyTrackingU3Ed__41_t4040ACE24B90527EA05CCF98736A60F606F97025* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Wave.Essence.BodyTracking.Demo.BTDemoHelper::Name(Wave.Essence.BodyTracking.Demo.BTDemoHelper/TrackingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BTDemoHelper_Name_mB8B562A3B37DCD4F248CACE648359BC9D9DB9252 (uint32_t ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F45847426A5CCEBD2A2226DC7D1EA311A3121E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B278367F7D00A96FF817A43542FCB64B3C80FAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F87F3C659C6553C3FB3C314F018CCE4BA277C9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA3EE92B86AF5F061AEB38B1382362D92683F962);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mode == TrackingMode.Arm) { return "Arm"; }
		uint32_t L_0 = ___0_mode;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (mode == TrackingMode.Arm) { return "Arm"; }
		return _stringLiteralEA3EE92B86AF5F061AEB38B1382362D92683F962;
	}

IL_0009:
	{
		// if (mode == TrackingMode.FullBody) { return "FullBody"; }
		uint32_t L_1 = ___0_mode;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		// if (mode == TrackingMode.FullBody) { return "FullBody"; }
		return _stringLiteral7B278367F7D00A96FF817A43542FCB64B3C80FAD;
	}

IL_0013:
	{
		// if (mode == TrackingMode.UpperBody) { return "UpperBody"; }
		uint32_t L_2 = ___0_mode;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// if (mode == TrackingMode.UpperBody) { return "UpperBody"; }
		return _stringLiteral3F45847426A5CCEBD2A2226DC7D1EA311A3121E7;
	}

IL_001d:
	{
		// if (mode == TrackingMode.UpperBodyAndLeg) { return "UpperLeg"; }
		uint32_t L_3 = ___0_mode;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0027;
		}
	}
	{
		// if (mode == TrackingMode.UpperBodyAndLeg) { return "UpperLeg"; }
		return _stringLiteral8F87F3C659C6553C3FB3C314F018CCE4BA277C9D;
	}

IL_0027:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* HumanoidIKMenu_get_sb_m45758CEF81A9BB4B0CCA37049452905D349CC5A5 (HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_0 = __this->___m_sb_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___m_sb_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_sb_5), (void*)L_1);
	}

IL_0013:
	{
		// return m_sb;
		StringBuilder_t* L_2 = __this->___m_sb_5;
		return L_2;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKMenu_DEBUG_m96C0709141DD241F69D552817F58F9C8E700765D (HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DACB1929F40B4B9D63CA5DD140F5A0B3B71DDFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void DEBUG(StringBuilder msg) { Rdp.d(LOG_TAG, msg, true); }
		StringBuilder_t* L_0 = ___0_msg;
		Rdp_d_mF35489EADD63997A0A4979F1991FF1730344709F(_stringLiteral5DACB1929F40B4B9D63CA5DD140F5A0B3B71DDFC, L_0, (bool)1, NULL);
		// void DEBUG(StringBuilder msg) { Rdp.d(LOG_TAG, msg, true); }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::BeginTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKMenu_BeginTracking_m037E9AC21C77594EDE33A3F2736CC2A8972DA199 (HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F55274EC8AB664993C7E308EED424DCEE5F791C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidIK != null)
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_0 = __this->___humanoidIK_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// sb.Clear().Append("BeginTracking()"); DEBUG(sb);
		StringBuilder_t* L_2;
		L_2 = HumanoidIKMenu_get_sb_m45758CEF81A9BB4B0CCA37049452905D349CC5A5(__this, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_2, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral1F55274EC8AB664993C7E308EED424DCEE5F791C, NULL);
		// sb.Clear().Append("BeginTracking()"); DEBUG(sb);
		StringBuilder_t* L_5;
		L_5 = HumanoidIKMenu_get_sb_m45758CEF81A9BB4B0CCA37049452905D349CC5A5(__this, NULL);
		HumanoidIKMenu_DEBUG_m96C0709141DD241F69D552817F58F9C8E700765D(__this, L_5, NULL);
		// humanoidIK.BeginTracking();
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_6 = __this->___humanoidIK_6;
		NullCheck(L_6);
		HumanoidIKSample_BeginTracking_m035E9A91F82B04AA76AF9951BF12603B0D80B964(L_6, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::EndTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKMenu_EndTracking_m74C9378650CF99BB70F6336973085045B373DA7B (HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9AD4FD4AEB30A7880F6ABD1C85EFFFBF090656D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidIK != null)
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_0 = __this->___humanoidIK_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// sb.Clear().Append("EndTracking()"); DEBUG(sb);
		StringBuilder_t* L_2;
		L_2 = HumanoidIKMenu_get_sb_m45758CEF81A9BB4B0CCA37049452905D349CC5A5(__this, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_2, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralF9AD4FD4AEB30A7880F6ABD1C85EFFFBF090656D, NULL);
		// sb.Clear().Append("EndTracking()"); DEBUG(sb);
		StringBuilder_t* L_5;
		L_5 = HumanoidIKMenu_get_sb_m45758CEF81A9BB4B0CCA37049452905D349CC5A5(__this, NULL);
		HumanoidIKMenu_DEBUG_m96C0709141DD241F69D552817F58F9C8E700765D(__this, L_5, NULL);
		// humanoidIK.StopTracking();
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_6 = __this->___humanoidIK_6;
		NullCheck(L_6);
		HumanoidIKSample_StopTracking_mE46993FA1AB1EEA999EE6F5398B6EF035331025F(L_6, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKMenu_Update_m18FD134BDAE468032C69F682679E9C5ED6171A54 (HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B4_0 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B5_1 = NULL;
	{
		// if (humanoidIK != null)
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_0 = __this->___humanoidIK_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		// var status = humanoidIK.GetTrackingStatus();
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_2 = __this->___humanoidIK_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = HumanoidIKSample_GetTrackingStatus_mBCAE2D9261D6461B76D6B12570DD845B1DB4EFB8(L_2, NULL);
		V_0 = L_3;
		// if (beginTrackingButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___beginTrackingButton_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// beginTrackingButton.interactable = (
		//     status == HumanoidIKSample.TrackingStatus.NotStart ||
		//     status == HumanoidIKSample.TrackingStatus.StartFailure
		// );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___beginTrackingButton_7;
		int32_t L_7 = V_0;
		G_B3_0 = L_6;
		if (!L_7)
		{
			G_B4_0 = L_6;
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		G_B5_0 = ((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		NullCheck(G_B5_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(G_B5_1, (bool)G_B5_0, NULL);
	}

IL_003d:
	{
		// if (endTrackingButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___endTrackingButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// endTrackingButton.interactable = (status == HumanoidIKSample.TrackingStatus.Available);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___endTrackingButton_8;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_11, (bool)((((int32_t)L_12) == ((int32_t)4))? 1 : 0), NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKMenu__ctor_mEA9AFDD9A2C0D7C758EC3EC9AF624AA914150B21 (HumanoidIKMenu_t5063882FCD2429C610477C3D77DD988372D3975C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.HumanoidIKSample::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_0 = __this->___m_sb_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___m_sb_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_sb_5), (void*)L_1);
	}

IL_0013:
	{
		// return m_sb;
		StringBuilder_t* L_2 = __this->___m_sb_5;
		return L_2;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F7A7B752C234C0A058A1BFADF7816B20C2C2691);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void DEBUG(StringBuilder msg) { Rdp.d(LOG_TAG, msg, true); }
		StringBuilder_t* L_0 = ___0_msg;
		Rdp_d_mF35489EADD63997A0A4979F1991FF1730344709F(_stringLiteral4F7A7B752C234C0A058A1BFADF7816B20C2C2691, L_0, (bool)1, NULL);
		// void DEBUG(StringBuilder msg) { Rdp.d(LOG_TAG, msg, true); }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::WARNING(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_WARNING_m12C121D9942FDC4C2E2F5BDE9AD7BD474AF80D75 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F7A7B752C234C0A058A1BFADF7816B20C2C2691);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void WARNING(StringBuilder msg) { Rdp.w(LOG_TAG, msg, true); }
		StringBuilder_t* L_0 = ___0_msg;
		Rdp_w_mF45F5AE4C43CFEF7AF13302B4076923AF70932B1(_stringLiteral4F7A7B752C234C0A058A1BFADF7816B20C2C2691, L_0, (bool)1, NULL);
		// void WARNING(StringBuilder msg) { Rdp.w(LOG_TAG, msg, true); }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::ERROR(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F7A7B752C234C0A058A1BFADF7816B20C2C2691);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void ERROR(StringBuilder msg) { Rdp.e(LOG_TAG, msg, true); }
		StringBuilder_t* L_0 = ___0_msg;
		Rdp_e_mED692C1C3F5F3FE7CD0961510F14CB93C7CD7B87(_stringLiteral4F7A7B752C234C0A058A1BFADF7816B20C2C2691, L_0, (bool)1, NULL);
		// void ERROR(StringBuilder msg) { Rdp.e(LOG_TAG, msg, true); }
		return;
	}
}
// Wave.Essence.BodyTracking.Demo.HumanoidIKSample/TrackingStatus Wave.Essence.BodyTracking.Demo.HumanoidIKSample::GetTrackingStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanoidIKSample_GetTrackingStatus_mBCAE2D9261D6461B76D6B12570DD845B1DB4EFB8 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				// m_TrackingStatusRWLock.ExitReadLock();
				il2cpp_codegen_runtime_class_init_inline(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var);
				ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* L_0 = ((HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var))->___m_TrackingStatusRWLock_9;
				NullCheck(L_0);
				ReaderWriterLockSlim_ExitReadLock_m49891BB1D1FA606B9EBD354D575D7F1ECBD53E87(L_0, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// m_TrackingStatusRWLock.TryEnterReadLock(2000);
				il2cpp_codegen_runtime_class_init_inline(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var);
				ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* L_1 = ((HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var))->___m_TrackingStatusRWLock_9;
				NullCheck(L_1);
				bool L_2;
				L_2 = ReaderWriterLockSlim_TryEnterReadLock_m5CB81D34821FE3C460F14CB964434C6A23F4E6EA(L_1, ((int32_t)2000), NULL);
				// return m_TrackingStatus;
				int32_t L_3 = __this->___m_TrackingStatus_8;
				V_0 = L_3;
				goto IL_0054;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0019_1;
				}
				throw e;
			}

CATCH_0019_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// sb.Clear().Append("GetTrackingStatus() ").Append(e.Message); ERROR(sb);
				StringBuilder_t* L_4;
				L_4 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
				NullCheck(L_4);
				StringBuilder_t* L_5;
				L_5 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_4, NULL);
				NullCheck(L_5);
				StringBuilder_t* L_6;
				L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral986DB1C107584803CF898B4AF1677C90E8620BE7)), NULL);
				Exception_t* L_7 = V_1;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
				NullCheck(L_6);
				StringBuilder_t* L_9;
				L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_8, NULL);
				// sb.Clear().Append("GetTrackingStatus() ").Append(e.Message); ERROR(sb);
				StringBuilder_t* L_10;
				L_10 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
				HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_10, NULL);
				// throw;
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// }
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::SetTrackingStatus(Wave.Essence.BodyTracking.Demo.HumanoidIKSample/TrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_SetTrackingStatus_m960D072542BC95DB9028E824E3F33AF49142D7F6 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				// m_TrackingStatusRWLock.ExitWriteLock();
				il2cpp_codegen_runtime_class_init_inline(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var);
				ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* L_0 = ((HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var))->___m_TrackingStatusRWLock_9;
				NullCheck(L_0);
				ReaderWriterLockSlim_ExitWriteLock_m84F7F58C2B3552C5B32744FB06004CACDFCE57E6(L_0, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// m_TrackingStatusRWLock.TryEnterWriteLock(2000);
				il2cpp_codegen_runtime_class_init_inline(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var);
				ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* L_1 = ((HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var))->___m_TrackingStatusRWLock_9;
				NullCheck(L_1);
				bool L_2;
				L_2 = ReaderWriterLockSlim_TryEnterWriteLock_mE43F653D65A448225134E0CE1A289C4E112C62A2(L_1, ((int32_t)2000), NULL);
				// m_TrackingStatus = status;
				int32_t L_3 = ___0_status;
				__this->___m_TrackingStatus_8 = L_3;
				// }
				goto IL_0054;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0019_1;
				}
				throw e;
			}

CATCH_0019_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// sb.Clear().Append("SetTrackingStatus() ").Append(e.Message); ERROR(sb);
				StringBuilder_t* L_4;
				L_4 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
				NullCheck(L_4);
				StringBuilder_t* L_5;
				L_5 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_4, NULL);
				NullCheck(L_5);
				StringBuilder_t* L_6;
				L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC048BBCEBFF1E9895CFFF62411491F30B811E922)), NULL);
				Exception_t* L_7 = V_0;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
				NullCheck(L_6);
				StringBuilder_t* L_9;
				L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_8, NULL);
				// sb.Clear().Append("SetTrackingStatus() ").Append(e.Message); ERROR(sb);
				StringBuilder_t* L_10;
				L_10 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
				HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_10, NULL);
				// throw;
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::CanStartTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanoidIKSample_CanStartTracking_m8569974C09B502DD111DE6659EC62E3D2AC2D272 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingStatus_t0D732C0B3660A967CFAAA2BA0CBF95F443AEEBEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BA0A5FC5480FE9917E00A23283E02B76EBCB997);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// TrackingStatus status = GetTrackingStatus();
		int32_t L_0;
		L_0 = HumanoidIKSample_GetTrackingStatus_mBCAE2D9261D6461B76D6B12570DD845B1DB4EFB8(__this, NULL);
		V_0 = L_0;
		// if (status == TrackingStatus.NotStart || status == TrackingStatus.StartFailure) { return true; }
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		// if (status == TrackingStatus.NotStart || status == TrackingStatus.StartFailure) { return true; }
		return (bool)1;
	}

IL_0010:
	{
		// sb.Clear().Append("CanStartTracking() Cannot start tracking, status: ").Append(status); WARNING(sb);
		StringBuilder_t* L_3;
		L_3 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral2BA0A5FC5480FE9917E00A23283E02B76EBCB997, NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(TrackingStatus_t0D732C0B3660A967CFAAA2BA0CBF95F443AEEBEA_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, L_8, NULL);
		// sb.Clear().Append("CanStartTracking() Cannot start tracking, status: ").Append(status); WARNING(sb);
		StringBuilder_t* L_10;
		L_10 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_WARNING_m12C121D9942FDC4C2E2F5BDE9AD7BD474AF80D75(__this, L_10, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::CanStopTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanoidIKSample_CanStopTracking_m21A63B022D6379B367273E15DFB535031C98AFF2 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingStatus_t0D732C0B3660A967CFAAA2BA0CBF95F443AEEBEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC87A8CABB18BBA2DA5E7B48B4DF40BF53ECDB5D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// TrackingStatus status = GetTrackingStatus();
		int32_t L_0;
		L_0 = HumanoidIKSample_GetTrackingStatus_mBCAE2D9261D6461B76D6B12570DD845B1DB4EFB8(__this, NULL);
		V_0 = L_0;
		// if (status == TrackingStatus.Available) { return true; }
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_000d;
		}
	}
	{
		// if (status == TrackingStatus.Available) { return true; }
		return (bool)1;
	}

IL_000d:
	{
		// sb.Clear().Append("CanStopTracking() Cannot stop tracking, status: ").Append(status); WARNING(sb);
		StringBuilder_t* L_2;
		L_2 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_2, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralBC87A8CABB18BBA2DA5E7B48B4DF40BF53ECDB5D, NULL);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(TrackingStatus_t0D732C0B3660A967CFAAA2BA0CBF95F443AEEBEA_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_4, L_7, NULL);
		// sb.Clear().Append("CanStopTracking() Cannot stop tracking, status: ").Append(status); WARNING(sb);
		StringBuilder_t* L_9;
		L_9 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_WARNING_m12C121D9942FDC4C2E2F5BDE9AD7BD474AF80D75(__this, L_9, NULL);
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Transform Wave.Essence.BodyTracking.Demo.HumanoidIKSample::get_AvatarOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* HumanoidIKSample_get_AvatarOffset_m3A976AB6E4DD41752DB75ECB93B0922E3E7F427A (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	{
		// public Transform AvatarOffset { get { return m_AvatarOffset; } set { m_AvatarOffset = value; } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_AvatarOffset_10;
		return L_0;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::set_AvatarOffset(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_set_AvatarOffset_m2EA5D976EB892D4C972C5895DEA5B0D2A68439D4 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform AvatarOffset { get { return m_AvatarOffset; } set { m_AvatarOffset = value; } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___m_AvatarOffset_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AvatarOffset_10), (void*)L_0);
		// public Transform AvatarOffset { get { return m_AvatarOffset; } set { m_AvatarOffset = value; } }
		return;
	}
}
// System.Single Wave.Essence.BodyTracking.Demo.HumanoidIKSample::get_AvatarScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HumanoidIKSample_get_AvatarScale_m275F0D42DDB0EC3BA499F3303AE6577434DF71FA (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	{
		// public float AvatarScale { get { return m_AvatarScale; } set { m_AvatarScale = value; } }
		float L_0 = __this->___m_AvatarScale_11;
		return L_0;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::set_AvatarScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_set_AvatarScale_mA27F3DE27ED378657C9A4C7DF83DEA2ECAE159B6 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AvatarScale { get { return m_AvatarScale; } set { m_AvatarScale = value; } }
		float L_0 = ___0_value;
		__this->___m_AvatarScale_11 = L_0;
		// public float AvatarScale { get { return m_AvatarScale; } set { m_AvatarScale = value; } }
		return;
	}
}
// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::get_CustomSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanoidIKSample_get_CustomSettings_mB3FC256ECAA9B1322DE15FC698207E6A26E0D9A2 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	{
		// public bool CustomSettings { get { return m_CustomSettings; } set { m_CustomSettings = value; } }
		bool L_0 = __this->___m_CustomSettings_12;
		return L_0;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::set_CustomSettings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_set_CustomSettings_m5B95B44BCF6FC529829626DE92D5E45F572B93F6 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool CustomSettings { get { return m_CustomSettings; } set { m_CustomSettings = value; } }
		bool L_0 = ___0_value;
		__this->___m_CustomSettings_12 = L_0;
		// public bool CustomSettings { get { return m_CustomSettings; } set { m_CustomSettings = value; } }
		return;
	}
}
// System.Single Wave.Essence.BodyTracking.Demo.HumanoidIKSample::get_AvatarHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HumanoidIKSample_get_AvatarHeight_m75FC7FEE95002BF88FC2869273E278C8A121A276 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AvatarHeight; }
		float L_0 = __this->___m_AvatarHeight_13;
		return L_0;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::set_AvatarHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_set_AvatarHeight_mC6E0880D072C9A4BC138BC973888DB9996D08F3D (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value > 0) { m_AvatarHeight = value; }
		float L_0 = ___0_value;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		// if (value > 0) { m_AvatarHeight = value; }
		float L_1 = ___0_value;
		__this->___m_AvatarHeight_13 = L_1;
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample::AssignHumanoidToBody(Wave.Essence.BodyTracking.Body&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HumanoidIKSample_AssignHumanoidToBody_mF7EBCB43B39392E6C77E21DCF3E6FDDD27F5291D (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** ___0_body, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHumanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844_mB56BF4DD0C610B5D78D36F27EA247B481C4AF024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03A4B0CD9FE22CECAD9E6A863C9C44005B6D48B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06038716F05A3FE1407EE9A2ACCD7E36F72E7108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B7DD0B7255D0E9024CA6794DB22A9E36D268CE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BB138D3A1CA8AEA3853ABF76CF06BB42C8A041C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11B0EB5A93FDF67D084001C6950C4D8B331A6B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14F013A6CE319186B35EDC610B5093C434FAE184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BB61D0A4F44E67245D613929F94143F88828421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral224B2F1D7307815C960A10FBB26DBE95F30A9443);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E267F9FC56B19B3462CE93DD93B5139B6D5D01B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31AFCC8DBC1882352662FAF08D051FDB4641295F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32465D04B7AFA7FA2B0613B7354E6A34A7F53284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A80503D4C8FFBEA73435CFD54FB066A8E491D59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FDF36B419CF8B004E46F0EE7A06A3A3600B0283);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416AF80C9E053FC2A2352CC78AE97C2B8C7137B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45848DAB90A733703EDCF887E1EBFE9FE1673483);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E329D01F89BF548BE92B1B9E470A6CA1EDC6E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B57AD75227D130C3B3341104071D201EE7CB4B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C6A60FF727A9E5688537B669EC64B291A4E5055);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57286D353A3D798A52FD18839E2D04711F6CBF81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C1A828F68D8118F61169D99FE4E3DC6614D4D9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DC9F3D3EAC7DC13DEE14149F4CBE5AA1ADA66A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6055C3DD6C709B2BB8DB817336BFA9B09965D03E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622657B61C7D71EB0EE9A15ECF8B72B7DDF7EC2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral653312F642D791F4E5F1B345CC0F07D081D85A5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A200CC3BF57F91850AAB0905DE16B0CAE628D83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A762F24C7973AA922A2EB5215A84560927F0BF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F864E658D0F6EA40BE221793E258DA9BE25B8A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71ECEF263A81AD4B72C9E4CF8DFE403D5AA32814);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7349968777A755DD09E82346B978838F3E377538);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C9E9EAB3B7C7B46A545B661D8B5D1EABE83F80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76EF9587B82E60F93532B2090C5D98BFB82900BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F62E56C2A943107C5F3788C031E57A96C39C5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral920F3B2EA5DD0E545B998BDDF2A44C05004D7F17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4273153F0C6DDF5A3F3D1BC243CC6D92EBE91BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAD80BB7C19A1903F2A896D9E49A1789F5791093);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF319C6FA0CF67C4AED3A2CC3851028D0C0B243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6AE5AEB512CA5407FF83B6FCBFF0BFAB6F3A2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7035E6560BEB2FF21F30B464D70745B15DCBEB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA26808F60DCDFC1F33F3C4EC9858632581DDCE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDDB2320CB72EA8A2B3FAC980C9C397B098B48A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9B69658A5E5F9A86F28B45DEE4C6176DF617F84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEED109D73EC1C1097F3CB001F243F088899D14D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0EA15804FB2355D77A7BCBE8193B505FD857BA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D8205ECED8380C9417CD710318F7E3EEA71E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE48C98C22D1C88FBD209183A9CAD9EA3D6558AF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE937E9E52A868C56F7A93F20157C121591AE0F11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9D0D642B8500233AE67CB0AC1E5C6AE4CBE1019);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDD43CDBC8C126EB2FD95158F71E3A7032AF410D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF10CB564E512CB16E7421788D226A4ED794787BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE38312526252E4265EC765984CC6B042FB295F1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (body == null) { return false; }
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_0 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_1 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_0);
		if (L_1)
		{
			goto IL_0006;
		}
	}
	{
		// if (body == null) { return false; }
		return (bool)0;
	}

IL_0006:
	{
		// m_Humanoid = GetComponent<UniHumanoid.Humanoid>();
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_2;
		L_2 = Component_GetComponent_TisHumanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844_mB56BF4DD0C610B5D78D36F27EA247B481C4AF024(__this, Component_GetComponent_TisHumanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844_mB56BF4DD0C610B5D78D36F27EA247B481C4AF024_RuntimeMethod_var);
		__this->___m_Humanoid_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Humanoid_14), (void*)L_2);
		// if (m_Humanoid == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_3 = __this->___m_Humanoid_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid."); ERROR(sb);
		StringBuilder_t* L_5;
		L_5 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_5, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral11B0EB5A93FDF67D084001C6950C4D8B331A6B9F, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid."); ERROR(sb);
		StringBuilder_t* L_8;
		L_8 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_8, NULL);
		// return false;
		return (bool)0;
	}

IL_0044:
	{
		// if (m_Humanoid.Hips == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_9 = __this->___m_Humanoid_14;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Humanoid_get_Hips_mDD9C3B9D0AAA448418D92DCC1752D6924F8B3132_inline(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid Hips."); ERROR(sb);
		StringBuilder_t* L_12;
		L_12 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_12, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral14F013A6CE319186B35EDC610B5093C434FAE184, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid Hips."); ERROR(sb);
		StringBuilder_t* L_15;
		L_15 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_15, NULL);
		// return false;
		return (bool)0;
	}

IL_007b:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Hips -> Body root."); DEBUG(sb);
		StringBuilder_t* L_16;
		L_16 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_16, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralE9D0D642B8500233AE67CB0AC1E5C6AE4CBE1019, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Hips -> Body root."); DEBUG(sb);
		StringBuilder_t* L_19;
		L_19 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_19, NULL);
		// body.root = m_Humanoid.Hips;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_20 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_21 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_20);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_22 = __this->___m_Humanoid_14;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Humanoid_get_Hips_mDD9C3B9D0AAA448418D92DCC1752D6924F8B3132_inline(L_22, NULL);
		NullCheck(L_21);
		L_21->___root_0 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___root_0), (void*)L_23);
		// if (m_Humanoid.LeftUpperLeg == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_24 = __this->___m_Humanoid_14;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Humanoid_get_LeftUpperLeg_mFDB7ED0DCED5797D0016841E88D58485EF8FDB78_inline(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_00e6;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftUpperLeg."); ERROR(sb);
		StringBuilder_t* L_27;
		L_27 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_27, NULL);
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral47E329D01F89BF548BE92B1B9E470A6CA1EDC6E1, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftUpperLeg."); ERROR(sb);
		StringBuilder_t* L_30;
		L_30 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_30, NULL);
		// return false;
		return (bool)0;
	}

IL_00e6:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftUpperLeg -> Body leftThigh."); DEBUG(sb);
		StringBuilder_t* L_31;
		L_31 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_31, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteral224B2F1D7307815C960A10FBB26DBE95F30A9443, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftUpperLeg -> Body leftThigh."); DEBUG(sb);
		StringBuilder_t* L_34;
		L_34 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_34, NULL);
		// body.leftThigh = m_Humanoid.LeftUpperLeg;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_35 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_36 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_35);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_37 = __this->___m_Humanoid_14;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Humanoid_get_LeftUpperLeg_mFDB7ED0DCED5797D0016841E88D58485EF8FDB78_inline(L_37, NULL);
		NullCheck(L_36);
		L_36->___leftThigh_2 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->___leftThigh_2), (void*)L_38);
		// if (m_Humanoid.LeftLowerLeg == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_39 = __this->___m_Humanoid_14;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Humanoid_get_LeftLowerLeg_m85BACB7FAFC528B5BF17341DDC81B78B7C20508E_inline(L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_41)
		{
			goto IL_0151;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftLowerLeg."); ERROR(sb);
		StringBuilder_t* L_42;
		L_42 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_42);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_42, NULL);
		NullCheck(L_43);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_43, _stringLiteral82F62E56C2A943107C5F3788C031E57A96C39C5E, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftLowerLeg."); ERROR(sb);
		StringBuilder_t* L_45;
		L_45 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_45, NULL);
		// return false;
		return (bool)0;
	}

IL_0151:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftLowerLeg -> Body leftLeg."); DEBUG(sb);
		StringBuilder_t* L_46;
		L_46 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_46);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_46, NULL);
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_47, _stringLiteralAAD80BB7C19A1903F2A896D9E49A1789F5791093, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftLowerLeg -> Body leftLeg."); DEBUG(sb);
		StringBuilder_t* L_49;
		L_49 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_49, NULL);
		// body.leftLeg = m_Humanoid.LeftLowerLeg;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_50 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_51 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_50);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_52 = __this->___m_Humanoid_14;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Humanoid_get_LeftLowerLeg_m85BACB7FAFC528B5BF17341DDC81B78B7C20508E_inline(L_52, NULL);
		NullCheck(L_51);
		L_51->___leftLeg_4 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&L_51->___leftLeg_4), (void*)L_53);
		// if (m_Humanoid.LeftFoot == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_54 = __this->___m_Humanoid_14;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Humanoid_get_LeftFoot_mD06D709FE0E1EBF59675CC1788EAC1192C4AB9CB_inline(L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_55, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_56)
		{
			goto IL_01bc;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftFoot."); ERROR(sb);
		StringBuilder_t* L_57;
		L_57 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_57);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_57, NULL);
		NullCheck(L_58);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_58, _stringLiteral0BB138D3A1CA8AEA3853ABF76CF06BB42C8A041C, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftFoot."); ERROR(sb);
		StringBuilder_t* L_60;
		L_60 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_60, NULL);
		// return false;
		return (bool)0;
	}

IL_01bc:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftFoot -> Body leftAnkle."); DEBUG(sb);
		StringBuilder_t* L_61;
		L_61 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_61);
		StringBuilder_t* L_62;
		L_62 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_61, NULL);
		NullCheck(L_62);
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_62, _stringLiteralE48C98C22D1C88FBD209183A9CAD9EA3D6558AF4, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftFoot -> Body leftAnkle."); DEBUG(sb);
		StringBuilder_t* L_64;
		L_64 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_64, NULL);
		// body.leftAnkle = m_Humanoid.LeftFoot;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_65 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_66 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_65);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_67 = __this->___m_Humanoid_14;
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Humanoid_get_LeftFoot_mD06D709FE0E1EBF59675CC1788EAC1192C4AB9CB_inline(L_67, NULL);
		NullCheck(L_66);
		L_66->___leftAnkle_6 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&L_66->___leftAnkle_6), (void*)L_68);
		// if (m_Humanoid.LeftToes == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_69 = __this->___m_Humanoid_14;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Humanoid_get_LeftToes_mFC1B26A87208410951D46832CFA5437ECAFEC8CB_inline(L_69, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_70, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_71)
		{
			goto IL_0227;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftToes."); ERROR(sb);
		StringBuilder_t* L_72;
		L_72 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_72);
		StringBuilder_t* L_73;
		L_73 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_72, NULL);
		NullCheck(L_73);
		StringBuilder_t* L_74;
		L_74 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_73, _stringLiteralD3D8205ECED8380C9417CD710318F7E3EEA71E84, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftToes."); ERROR(sb);
		StringBuilder_t* L_75;
		L_75 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_75, NULL);
		// return false;
		return (bool)0;
	}

IL_0227:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftToes -> Body leftFoot."); DEBUG(sb);
		StringBuilder_t* L_76;
		L_76 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_76);
		StringBuilder_t* L_77;
		L_77 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_76, NULL);
		NullCheck(L_77);
		StringBuilder_t* L_78;
		L_78 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_77, _stringLiteralA4273153F0C6DDF5A3F3D1BC243CC6D92EBE91BD, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftToes -> Body leftFoot."); DEBUG(sb);
		StringBuilder_t* L_79;
		L_79 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_79, NULL);
		// body.leftFoot = m_Humanoid.LeftToes;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_80 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_81 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_80);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_82 = __this->___m_Humanoid_14;
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = Humanoid_get_LeftToes_mFC1B26A87208410951D46832CFA5437ECAFEC8CB_inline(L_82, NULL);
		NullCheck(L_81);
		L_81->___leftFoot_8 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&L_81->___leftFoot_8), (void*)L_83);
		// if (m_Humanoid.RightUpperLeg == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_84 = __this->___m_Humanoid_14;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = Humanoid_get_RightUpperLeg_m6D2A5038F4537C297B4E623B3DA838F867208D8C_inline(L_84, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_85, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_86)
		{
			goto IL_0292;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightUpperLeg."); ERROR(sb);
		StringBuilder_t* L_87;
		L_87 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_87);
		StringBuilder_t* L_88;
		L_88 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_87, NULL);
		NullCheck(L_88);
		StringBuilder_t* L_89;
		L_89 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_88, _stringLiteral0B7DD0B7255D0E9024CA6794DB22A9E36D268CE1, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightUpperLeg."); ERROR(sb);
		StringBuilder_t* L_90;
		L_90 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_90, NULL);
		// return false;
		return (bool)0;
	}

IL_0292:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightUpperLeg -> Body rightThigh."); DEBUG(sb);
		StringBuilder_t* L_91;
		L_91 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_91);
		StringBuilder_t* L_92;
		L_92 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_91, NULL);
		NullCheck(L_92);
		StringBuilder_t* L_93;
		L_93 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_92, _stringLiteralBA26808F60DCDFC1F33F3C4EC9858632581DDCE9, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightUpperLeg -> Body rightThigh."); DEBUG(sb);
		StringBuilder_t* L_94;
		L_94 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_94, NULL);
		// body.rightThigh = m_Humanoid.RightUpperLeg;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_95 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_96 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_95);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_97 = __this->___m_Humanoid_14;
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = Humanoid_get_RightUpperLeg_m6D2A5038F4537C297B4E623B3DA838F867208D8C_inline(L_97, NULL);
		NullCheck(L_96);
		L_96->___rightThigh_10 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___rightThigh_10), (void*)L_98);
		// if (m_Humanoid.RightLowerLeg == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_99 = __this->___m_Humanoid_14;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
		L_100 = Humanoid_get_RightLowerLeg_m2C63F86F3C80CB343C3E5FBB65C9AF13C9E951E7_inline(L_99, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_101;
		L_101 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_100, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_101)
		{
			goto IL_02fd;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightLowerLeg."); ERROR(sb);
		StringBuilder_t* L_102;
		L_102 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_102);
		StringBuilder_t* L_103;
		L_103 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_102, NULL);
		NullCheck(L_103);
		StringBuilder_t* L_104;
		L_104 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_103, _stringLiteral03A4B0CD9FE22CECAD9E6A863C9C44005B6D48B6, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightLowerLeg."); ERROR(sb);
		StringBuilder_t* L_105;
		L_105 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_105, NULL);
		// return false;
		return (bool)0;
	}

IL_02fd:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightLowerLeg -> Body rightLeg."); DEBUG(sb);
		StringBuilder_t* L_106;
		L_106 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_106);
		StringBuilder_t* L_107;
		L_107 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_106, NULL);
		NullCheck(L_107);
		StringBuilder_t* L_108;
		L_108 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_107, _stringLiteral3A80503D4C8FFBEA73435CFD54FB066A8E491D59, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightLowerLeg -> Body rightLeg."); DEBUG(sb);
		StringBuilder_t* L_109;
		L_109 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_109, NULL);
		// body.rightLeg = m_Humanoid.RightLowerLeg;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_110 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_111 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_110);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_112 = __this->___m_Humanoid_14;
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Humanoid_get_RightLowerLeg_m2C63F86F3C80CB343C3E5FBB65C9AF13C9E951E7_inline(L_112, NULL);
		NullCheck(L_111);
		L_111->___rightLeg_12 = L_113;
		Il2CppCodeGenWriteBarrier((void**)(&L_111->___rightLeg_12), (void*)L_113);
		// if (m_Humanoid.RightFoot == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_114 = __this->___m_Humanoid_14;
		NullCheck(L_114);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_115;
		L_115 = Humanoid_get_RightFoot_mFAF4AC98BC70B380AA4C529826815BCA0CAA491F_inline(L_114, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_116;
		L_116 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_115, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_116)
		{
			goto IL_0368;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightFoot."); ERROR(sb);
		StringBuilder_t* L_117;
		L_117 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_117);
		StringBuilder_t* L_118;
		L_118 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_117, NULL);
		NullCheck(L_118);
		StringBuilder_t* L_119;
		L_119 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_118, _stringLiteral71ECEF263A81AD4B72C9E4CF8DFE403D5AA32814, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightFoot."); ERROR(sb);
		StringBuilder_t* L_120;
		L_120 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_120, NULL);
		// return false;
		return (bool)0;
	}

IL_0368:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightFoot -> Body rightAnkle."); DEBUG(sb);
		StringBuilder_t* L_121;
		L_121 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_121);
		StringBuilder_t* L_122;
		L_122 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_121, NULL);
		NullCheck(L_122);
		StringBuilder_t* L_123;
		L_123 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_122, _stringLiteral06038716F05A3FE1407EE9A2ACCD7E36F72E7108, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightFoot -> Body rightAnkle."); DEBUG(sb);
		StringBuilder_t* L_124;
		L_124 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_124, NULL);
		// body.rightAnkle = m_Humanoid.RightFoot;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_125 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_126 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_125);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_127 = __this->___m_Humanoid_14;
		NullCheck(L_127);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128;
		L_128 = Humanoid_get_RightFoot_mFAF4AC98BC70B380AA4C529826815BCA0CAA491F_inline(L_127, NULL);
		NullCheck(L_126);
		L_126->___rightAnkle_14 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&L_126->___rightAnkle_14), (void*)L_128);
		// if (m_Humanoid.RightToes == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_129 = __this->___m_Humanoid_14;
		NullCheck(L_129);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = Humanoid_get_RightToes_mEFD1E6053C543E7AF74BC7A3FE89187ACD127843_inline(L_129, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_131;
		L_131 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_130, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_131)
		{
			goto IL_03d3;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightToes."); ERROR(sb);
		StringBuilder_t* L_132;
		L_132 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_132);
		StringBuilder_t* L_133;
		L_133 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_132, NULL);
		NullCheck(L_133);
		StringBuilder_t* L_134;
		L_134 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_133, _stringLiteral622657B61C7D71EB0EE9A15ECF8B72B7DDF7EC2C, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightToes."); ERROR(sb);
		StringBuilder_t* L_135;
		L_135 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_135, NULL);
		// return false;
		return (bool)0;
	}

IL_03d3:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightToes -> Body rightFoot."); DEBUG(sb);
		StringBuilder_t* L_136;
		L_136 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_136);
		StringBuilder_t* L_137;
		L_137 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_136, NULL);
		NullCheck(L_137);
		StringBuilder_t* L_138;
		L_138 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_137, _stringLiteral6F864E658D0F6EA40BE221793E258DA9BE25B8A4, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightToes -> Body rightFoot."); DEBUG(sb);
		StringBuilder_t* L_139;
		L_139 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_139, NULL);
		// body.rightFoot = m_Humanoid.RightToes;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_140 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_141 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_140);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_142 = __this->___m_Humanoid_14;
		NullCheck(L_142);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143;
		L_143 = Humanoid_get_RightToes_mEFD1E6053C543E7AF74BC7A3FE89187ACD127843_inline(L_142, NULL);
		NullCheck(L_141);
		L_141->___rightFoot_16 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&L_141->___rightFoot_16), (void*)L_143);
		// body.spineLower = m_Humanoid.Spine;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_144 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_145 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_144);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_146 = __this->___m_Humanoid_14;
		NullCheck(L_146);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_147;
		L_147 = Humanoid_get_Spine_m3E444C1B073E2E3F0BC5C26AF736EBDD0F74D728_inline(L_146, NULL);
		NullCheck(L_145);
		L_145->___spineLower_20 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&L_145->___spineLower_20), (void*)L_147);
		// if (m_Humanoid.UpperChest == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_148 = __this->___m_Humanoid_14;
		NullCheck(L_148);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_149;
		L_149 = Humanoid_get_UpperChest_mCA49FA8AD9E5036B2DF24156B8B4A20BD3CABBC5_inline(L_148, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_150;
		L_150 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_149, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_150)
		{
			goto IL_04be;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid UpperChest."); WARNING(sb);
		StringBuilder_t* L_151;
		L_151 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_151);
		StringBuilder_t* L_152;
		L_152 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_151, NULL);
		NullCheck(L_152);
		StringBuilder_t* L_153;
		L_153 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_152, _stringLiteral6A762F24C7973AA922A2EB5215A84560927F0BF6, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid UpperChest."); WARNING(sb);
		StringBuilder_t* L_154;
		L_154 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_WARNING_m12C121D9942FDC4C2E2F5BDE9AD7BD474AF80D75(__this, L_154, NULL);
		// if (m_Humanoid.Chest == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_155 = __this->___m_Humanoid_14;
		NullCheck(L_155);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_156;
		L_156 = Humanoid_get_Chest_mF77FA45E291C75FA9EAA3D4DECBC7835D57262AC_inline(L_155, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_157;
		L_157 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_156, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_157)
		{
			goto IL_0488;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid Chest."); ERROR(sb);
		StringBuilder_t* L_158;
		L_158 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_158);
		StringBuilder_t* L_159;
		L_159 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_158, NULL);
		NullCheck(L_159);
		StringBuilder_t* L_160;
		L_160 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_159, _stringLiteralEDD43CDBC8C126EB2FD95158F71E3A7032AF410D, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid Chest."); ERROR(sb);
		StringBuilder_t* L_161;
		L_161 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_161, NULL);
		// return false;
		return (bool)0;
	}

IL_0488:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Chest -> Body chest."); DEBUG(sb);
		StringBuilder_t* L_162;
		L_162 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_162);
		StringBuilder_t* L_163;
		L_163 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_162, NULL);
		NullCheck(L_163);
		StringBuilder_t* L_164;
		L_164 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_163, _stringLiteral920F3B2EA5DD0E545B998BDDF2A44C05004D7F17, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Chest -> Body chest."); DEBUG(sb);
		StringBuilder_t* L_165;
		L_165 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_165, NULL);
		// body.chest = m_Humanoid.Chest;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_166 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_167 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_166);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_168 = __this->___m_Humanoid_14;
		NullCheck(L_168);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_169;
		L_169 = Humanoid_get_Chest_mF77FA45E291C75FA9EAA3D4DECBC7835D57262AC_inline(L_168, NULL);
		NullCheck(L_167);
		L_167->___chest_26 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&L_167->___chest_26), (void*)L_169);
		goto IL_0526;
	}

IL_04be:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid UpperChest -> Body chest."); DEBUG(sb);
		StringBuilder_t* L_170;
		L_170 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_170);
		StringBuilder_t* L_171;
		L_171 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_170, NULL);
		NullCheck(L_171);
		StringBuilder_t* L_172;
		L_172 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_171, _stringLiteral57286D353A3D798A52FD18839E2D04711F6CBF81, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid UpperChest -> Body chest."); DEBUG(sb);
		StringBuilder_t* L_173;
		L_173 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_173, NULL);
		// body.chest = m_Humanoid.UpperChest;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_174 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_175 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_174);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_176 = __this->___m_Humanoid_14;
		NullCheck(L_176);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_177;
		L_177 = Humanoid_get_UpperChest_mCA49FA8AD9E5036B2DF24156B8B4A20BD3CABBC5_inline(L_176, NULL);
		NullCheck(L_175);
		L_175->___chest_26 = L_177;
		Il2CppCodeGenWriteBarrier((void**)(&L_175->___chest_26), (void*)L_177);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Chest -> Body spineHigh."); DEBUG(sb);
		StringBuilder_t* L_178;
		L_178 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_178);
		StringBuilder_t* L_179;
		L_179 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_178, NULL);
		NullCheck(L_179);
		StringBuilder_t* L_180;
		L_180 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_179, _stringLiteralBDDB2320CB72EA8A2B3FAC980C9C397B098B48A1, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Chest -> Body spineHigh."); DEBUG(sb);
		StringBuilder_t* L_181;
		L_181 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_181, NULL);
		// body.spineHigh = m_Humanoid.Chest;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_182 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_183 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_182);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_184 = __this->___m_Humanoid_14;
		NullCheck(L_184);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_185;
		L_185 = Humanoid_get_Chest_mF77FA45E291C75FA9EAA3D4DECBC7835D57262AC_inline(L_184, NULL);
		NullCheck(L_183);
		L_183->___spineHigh_24 = L_185;
		Il2CppCodeGenWriteBarrier((void**)(&L_183->___spineHigh_24), (void*)L_185);
	}

IL_0526:
	{
		// if (m_Humanoid.Neck == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_186 = __this->___m_Humanoid_14;
		NullCheck(L_186);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_187;
		L_187 = Humanoid_get_Neck_m456F2CA9C60B275DCF5FF030BA6E636A57A05B46_inline(L_186, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_188;
		L_188 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_187, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_188)
		{
			goto IL_055d;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid Neck."); ERROR(sb);
		StringBuilder_t* L_189;
		L_189 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_189);
		StringBuilder_t* L_190;
		L_190 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_189, NULL);
		NullCheck(L_190);
		StringBuilder_t* L_191;
		L_191 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_190, _stringLiteral6A200CC3BF57F91850AAB0905DE16B0CAE628D83, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid Neck."); ERROR(sb);
		StringBuilder_t* L_192;
		L_192 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_192, NULL);
		// return false;
		return (bool)0;
	}

IL_055d:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Neck -> Body neck."); DEBUG(sb);
		StringBuilder_t* L_193;
		L_193 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_193);
		StringBuilder_t* L_194;
		L_194 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_193, NULL);
		NullCheck(L_194);
		StringBuilder_t* L_195;
		L_195 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_194, _stringLiteralC9B69658A5E5F9A86F28B45DEE4C6176DF617F84, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Neck -> Body neck."); DEBUG(sb);
		StringBuilder_t* L_196;
		L_196 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_196, NULL);
		// body.neck = m_Humanoid.Neck;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_197 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_198 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_197);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_199 = __this->___m_Humanoid_14;
		NullCheck(L_199);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_200;
		L_200 = Humanoid_get_Neck_m456F2CA9C60B275DCF5FF030BA6E636A57A05B46_inline(L_199, NULL);
		NullCheck(L_198);
		L_198->___neck_28 = L_200;
		Il2CppCodeGenWriteBarrier((void**)(&L_198->___neck_28), (void*)L_200);
		// if (m_Humanoid.Head == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_201 = __this->___m_Humanoid_14;
		NullCheck(L_201);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_202;
		L_202 = Humanoid_get_Head_mD48ECFF180BA2AC19891B1992BC304EE91F3C416_inline(L_201, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_203;
		L_203 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_202, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_203)
		{
			goto IL_05c8;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid Head."); ERROR(sb);
		StringBuilder_t* L_204;
		L_204 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_204);
		StringBuilder_t* L_205;
		L_205 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_204, NULL);
		NullCheck(L_205);
		StringBuilder_t* L_206;
		L_206 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_205, _stringLiteral7349968777A755DD09E82346B978838F3E377538, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid Head."); ERROR(sb);
		StringBuilder_t* L_207;
		L_207 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_207, NULL);
		// return false;
		return (bool)0;
	}

IL_05c8:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Head -> Body head."); DEBUG(sb);
		StringBuilder_t* L_208;
		L_208 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_208);
		StringBuilder_t* L_209;
		L_209 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_208, NULL);
		NullCheck(L_209);
		StringBuilder_t* L_210;
		L_210 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_209, _stringLiteral76EF9587B82E60F93532B2090C5D98BFB82900BC, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid Head -> Body head."); DEBUG(sb);
		StringBuilder_t* L_211;
		L_211 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_211, NULL);
		// body.head = m_Humanoid.Head;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_212 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_213 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_212);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_214 = __this->___m_Humanoid_14;
		NullCheck(L_214);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_215;
		L_215 = Humanoid_get_Head_mD48ECFF180BA2AC19891B1992BC304EE91F3C416_inline(L_214, NULL);
		NullCheck(L_213);
		L_213->___head_30 = L_215;
		Il2CppCodeGenWriteBarrier((void**)(&L_213->___head_30), (void*)L_215);
		// if (m_Humanoid.LeftShoulder == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_216 = __this->___m_Humanoid_14;
		NullCheck(L_216);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_217;
		L_217 = Humanoid_get_LeftShoulder_mECF444F0A6EC318B41FF9046757AF0CA5C0D8725_inline(L_216, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_218;
		L_218 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_217, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_218)
		{
			goto IL_0633;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftShoulder."); ERROR(sb);
		StringBuilder_t* L_219;
		L_219 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_219);
		StringBuilder_t* L_220;
		L_220 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_219, NULL);
		NullCheck(L_220);
		StringBuilder_t* L_221;
		L_221 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_220, _stringLiteral76C9E9EAB3B7C7B46A545B661D8B5D1EABE83F80, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftShoulder."); ERROR(sb);
		StringBuilder_t* L_222;
		L_222 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_222, NULL);
		// return false;
		return (bool)0;
	}

IL_0633:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftShoulder -> Body leftClavicle."); DEBUG(sb);
		StringBuilder_t* L_223;
		L_223 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_223);
		StringBuilder_t* L_224;
		L_224 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_223, NULL);
		NullCheck(L_224);
		StringBuilder_t* L_225;
		L_225 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_224, _stringLiteral32465D04B7AFA7FA2B0613B7354E6A34A7F53284, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftShoulder -> Body leftClavicle."); DEBUG(sb);
		StringBuilder_t* L_226;
		L_226 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_226, NULL);
		// body.leftClavicle = m_Humanoid.LeftShoulder;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_227 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_228 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_227);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_229 = __this->___m_Humanoid_14;
		NullCheck(L_229);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_230;
		L_230 = Humanoid_get_LeftShoulder_mECF444F0A6EC318B41FF9046757AF0CA5C0D8725_inline(L_229, NULL);
		NullCheck(L_228);
		L_228->___leftClavicle_32 = L_230;
		Il2CppCodeGenWriteBarrier((void**)(&L_228->___leftClavicle_32), (void*)L_230);
		// if (m_Humanoid.LeftUpperArm == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_231 = __this->___m_Humanoid_14;
		NullCheck(L_231);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_232;
		L_232 = Humanoid_get_LeftUpperArm_m1EF30A2E544B3A3EB0E294377406B29A9D7DAC49_inline(L_231, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_233;
		L_233 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_232, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_233)
		{
			goto IL_069e;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftUpperArm."); ERROR(sb);
		StringBuilder_t* L_234;
		L_234 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_234);
		StringBuilder_t* L_235;
		L_235 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_234, NULL);
		NullCheck(L_235);
		StringBuilder_t* L_236;
		L_236 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_235, _stringLiteral4C6A60FF727A9E5688537B669EC64B291A4E5055, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftUpperArm."); ERROR(sb);
		StringBuilder_t* L_237;
		L_237 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_237, NULL);
		// return false;
		return (bool)0;
	}

IL_069e:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftUpperArm -> Body leftUpperarm."); DEBUG(sb);
		StringBuilder_t* L_238;
		L_238 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_238);
		StringBuilder_t* L_239;
		L_239 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_238, NULL);
		NullCheck(L_239);
		StringBuilder_t* L_240;
		L_240 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_239, _stringLiteral416AF80C9E053FC2A2352CC78AE97C2B8C7137B5, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftUpperArm -> Body leftUpperarm."); DEBUG(sb);
		StringBuilder_t* L_241;
		L_241 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_241, NULL);
		// body.leftUpperarm = m_Humanoid.LeftUpperArm;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_242 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_243 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_242);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_244 = __this->___m_Humanoid_14;
		NullCheck(L_244);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_245;
		L_245 = Humanoid_get_LeftUpperArm_m1EF30A2E544B3A3EB0E294377406B29A9D7DAC49_inline(L_244, NULL);
		NullCheck(L_243);
		L_243->___leftUpperarm_36 = L_245;
		Il2CppCodeGenWriteBarrier((void**)(&L_243->___leftUpperarm_36), (void*)L_245);
		// if (m_Humanoid.LeftLowerArm == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_246 = __this->___m_Humanoid_14;
		NullCheck(L_246);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_247;
		L_247 = Humanoid_get_LeftLowerArm_mFEC136E30E3BD3EE4500403B11B869B70A56D6BF_inline(L_246, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_248;
		L_248 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_247, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_248)
		{
			goto IL_0709;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftLowerArm."); ERROR(sb);
		StringBuilder_t* L_249;
		L_249 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_249);
		StringBuilder_t* L_250;
		L_250 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_249, NULL);
		NullCheck(L_250);
		StringBuilder_t* L_251;
		L_251 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_250, _stringLiteralCEED109D73EC1C1097F3CB001F243F088899D14D, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftLowerArm."); ERROR(sb);
		StringBuilder_t* L_252;
		L_252 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_252, NULL);
		// return false;
		return (bool)0;
	}

IL_0709:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftLowerArm -> Body leftForearm."); DEBUG(sb);
		StringBuilder_t* L_253;
		L_253 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_253);
		StringBuilder_t* L_254;
		L_254 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_253, NULL);
		NullCheck(L_254);
		StringBuilder_t* L_255;
		L_255 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_254, _stringLiteralB6AE5AEB512CA5407FF83B6FCBFF0BFAB6F3A2BF, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftLowerArm -> Body leftForearm."); DEBUG(sb);
		StringBuilder_t* L_256;
		L_256 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_256, NULL);
		// body.leftForearm = m_Humanoid.LeftLowerArm;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_257 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_258 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_257);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_259 = __this->___m_Humanoid_14;
		NullCheck(L_259);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_260;
		L_260 = Humanoid_get_LeftLowerArm_mFEC136E30E3BD3EE4500403B11B869B70A56D6BF_inline(L_259, NULL);
		NullCheck(L_258);
		L_258->___leftForearm_38 = L_260;
		Il2CppCodeGenWriteBarrier((void**)(&L_258->___leftForearm_38), (void*)L_260);
		// if (m_Humanoid.LeftHand == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_261 = __this->___m_Humanoid_14;
		NullCheck(L_261);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_262;
		L_262 = Humanoid_get_LeftHand_m795FE11FAD4A321C5973ECB8424A44923442E823_inline(L_261, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_263;
		L_263 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_262, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_263)
		{
			goto IL_0774;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftHand."); ERROR(sb);
		StringBuilder_t* L_264;
		L_264 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_264);
		StringBuilder_t* L_265;
		L_265 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_264, NULL);
		NullCheck(L_265);
		StringBuilder_t* L_266;
		L_266 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_265, _stringLiteral653312F642D791F4E5F1B345CC0F07D081D85A5E, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid LeftHand."); ERROR(sb);
		StringBuilder_t* L_267;
		L_267 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_267, NULL);
		// return false;
		return (bool)0;
	}

IL_0774:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftHand -> Body leftHand."); DEBUG(sb);
		StringBuilder_t* L_268;
		L_268 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_268);
		StringBuilder_t* L_269;
		L_269 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_268, NULL);
		NullCheck(L_269);
		StringBuilder_t* L_270;
		L_270 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_269, _stringLiteralFE38312526252E4265EC765984CC6B042FB295F1, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid LeftHand -> Body leftHand."); DEBUG(sb);
		StringBuilder_t* L_271;
		L_271 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_271, NULL);
		// body.leftHand = m_Humanoid.LeftHand;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_272 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_273 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_272);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_274 = __this->___m_Humanoid_14;
		NullCheck(L_274);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_275;
		L_275 = Humanoid_get_LeftHand_m795FE11FAD4A321C5973ECB8424A44923442E823_inline(L_274, NULL);
		NullCheck(L_273);
		L_273->___leftHand_40 = L_275;
		Il2CppCodeGenWriteBarrier((void**)(&L_273->___leftHand_40), (void*)L_275);
		// if (m_Humanoid.RightShoulder == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_276 = __this->___m_Humanoid_14;
		NullCheck(L_276);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_277;
		L_277 = Humanoid_get_RightShoulder_m4F699A4AD703AC7FA898CFE4221CE546443930EF_inline(L_276, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_278;
		L_278 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_277, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_278)
		{
			goto IL_07df;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightShoulder."); ERROR(sb);
		StringBuilder_t* L_279;
		L_279 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_279);
		StringBuilder_t* L_280;
		L_280 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_279, NULL);
		NullCheck(L_280);
		StringBuilder_t* L_281;
		L_281 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_280, _stringLiteral4B57AD75227D130C3B3341104071D201EE7CB4B1, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightShoulder."); ERROR(sb);
		StringBuilder_t* L_282;
		L_282 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_282, NULL);
		// return false;
		return (bool)0;
	}

IL_07df:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightShoulder -> Body rightClavicle."); DEBUG(sb);
		StringBuilder_t* L_283;
		L_283 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_283);
		StringBuilder_t* L_284;
		L_284 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_283, NULL);
		NullCheck(L_284);
		StringBuilder_t* L_285;
		L_285 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_284, _stringLiteral31AFCC8DBC1882352662FAF08D051FDB4641295F, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightShoulder -> Body rightClavicle."); DEBUG(sb);
		StringBuilder_t* L_286;
		L_286 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_286, NULL);
		// body.rightClavicle = m_Humanoid.RightShoulder;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_287 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_288 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_287);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_289 = __this->___m_Humanoid_14;
		NullCheck(L_289);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_290;
		L_290 = Humanoid_get_RightShoulder_m4F699A4AD703AC7FA898CFE4221CE546443930EF_inline(L_289, NULL);
		NullCheck(L_288);
		L_288->___rightClavicle_42 = L_290;
		Il2CppCodeGenWriteBarrier((void**)(&L_288->___rightClavicle_42), (void*)L_290);
		// if (m_Humanoid.RightUpperArm == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_291 = __this->___m_Humanoid_14;
		NullCheck(L_291);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_292;
		L_292 = Humanoid_get_RightUpperArm_m713F6972F45EC35BD57754B56B6E9780B8724265_inline(L_291, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_293;
		L_293 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_292, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_293)
		{
			goto IL_084a;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightUpperArm."); ERROR(sb);
		StringBuilder_t* L_294;
		L_294 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_294);
		StringBuilder_t* L_295;
		L_295 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_294, NULL);
		NullCheck(L_295);
		StringBuilder_t* L_296;
		L_296 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_295, _stringLiteralB7035E6560BEB2FF21F30B464D70745B15DCBEB8, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightUpperArm."); ERROR(sb);
		StringBuilder_t* L_297;
		L_297 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_297, NULL);
		// return false;
		return (bool)0;
	}

IL_084a:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightUpperArm -> Body rightUpperarm."); DEBUG(sb);
		StringBuilder_t* L_298;
		L_298 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_298);
		StringBuilder_t* L_299;
		L_299 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_298, NULL);
		NullCheck(L_299);
		StringBuilder_t* L_300;
		L_300 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_299, _stringLiteralD0EA15804FB2355D77A7BCBE8193B505FD857BA0, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightUpperArm -> Body rightUpperarm."); DEBUG(sb);
		StringBuilder_t* L_301;
		L_301 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_301, NULL);
		// body.rightUpperarm = m_Humanoid.RightUpperArm;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_302 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_303 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_302);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_304 = __this->___m_Humanoid_14;
		NullCheck(L_304);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_305;
		L_305 = Humanoid_get_RightUpperArm_m713F6972F45EC35BD57754B56B6E9780B8724265_inline(L_304, NULL);
		NullCheck(L_303);
		L_303->___rightUpperarm_46 = L_305;
		Il2CppCodeGenWriteBarrier((void**)(&L_303->___rightUpperarm_46), (void*)L_305);
		// if (m_Humanoid.RightLowerArm == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_306 = __this->___m_Humanoid_14;
		NullCheck(L_306);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_307;
		L_307 = Humanoid_get_RightLowerArm_m1E1A68D79C267A2BFAA4798F5A1E7B4BA8CC5D4A_inline(L_306, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_308;
		L_308 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_307, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_308)
		{
			goto IL_08b5;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightLowerArm."); ERROR(sb);
		StringBuilder_t* L_309;
		L_309 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_309);
		StringBuilder_t* L_310;
		L_310 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_309, NULL);
		NullCheck(L_310);
		StringBuilder_t* L_311;
		L_311 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_310, _stringLiteralF10CB564E512CB16E7421788D226A4ED794787BE, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightLowerArm."); ERROR(sb);
		StringBuilder_t* L_312;
		L_312 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_312, NULL);
		// return false;
		return (bool)0;
	}

IL_08b5:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightLowerArm -> Body rightForearm."); DEBUG(sb);
		StringBuilder_t* L_313;
		L_313 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_313);
		StringBuilder_t* L_314;
		L_314 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_313, NULL);
		NullCheck(L_314);
		StringBuilder_t* L_315;
		L_315 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_314, _stringLiteral2E267F9FC56B19B3462CE93DD93B5139B6D5D01B, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightLowerArm -> Body rightForearm."); DEBUG(sb);
		StringBuilder_t* L_316;
		L_316 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_316, NULL);
		// body.rightForearm = m_Humanoid.RightLowerArm;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_317 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_318 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_317);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_319 = __this->___m_Humanoid_14;
		NullCheck(L_319);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_320;
		L_320 = Humanoid_get_RightLowerArm_m1E1A68D79C267A2BFAA4798F5A1E7B4BA8CC5D4A_inline(L_319, NULL);
		NullCheck(L_318);
		L_318->___rightForearm_48 = L_320;
		Il2CppCodeGenWriteBarrier((void**)(&L_318->___rightForearm_48), (void*)L_320);
		// if (m_Humanoid.RightHand == null)
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_321 = __this->___m_Humanoid_14;
		NullCheck(L_321);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_322;
		L_322 = Humanoid_get_RightHand_m747531F73CC9425073DC74CC85A1DB2156E543AF_inline(L_321, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_323;
		L_323 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_322, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_323)
		{
			goto IL_0920;
		}
	}
	{
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightHand."); ERROR(sb);
		StringBuilder_t* L_324;
		L_324 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_324);
		StringBuilder_t* L_325;
		L_325 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_324, NULL);
		NullCheck(L_325);
		StringBuilder_t* L_326;
		L_326 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_325, _stringLiteral1BB61D0A4F44E67245D613929F94143F88828421, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() no Humanoid RightHand."); ERROR(sb);
		StringBuilder_t* L_327;
		L_327 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_327, NULL);
		// return false;
		return (bool)0;
	}

IL_0920:
	{
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightHand -> Body rightHand."); DEBUG(sb);
		StringBuilder_t* L_328;
		L_328 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_328);
		StringBuilder_t* L_329;
		L_329 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_328, NULL);
		NullCheck(L_329);
		StringBuilder_t* L_330;
		L_330 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_329, _stringLiteral3FDF36B419CF8B004E46F0EE7A06A3A3600B0283, NULL);
		// sb.Clear().Append("AssignHumanoidToBody() Humanoid RightHand -> Body rightHand."); DEBUG(sb);
		StringBuilder_t* L_331;
		L_331 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_331, NULL);
		// body.rightHand = m_Humanoid.RightHand;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_332 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_333 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_332);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_334 = __this->___m_Humanoid_14;
		NullCheck(L_334);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_335;
		L_335 = Humanoid_get_RightHand_m747531F73CC9425073DC74CC85A1DB2156E543AF_inline(L_334, NULL);
		NullCheck(L_333);
		L_333->___rightHand_50 = L_335;
		Il2CppCodeGenWriteBarrier((void**)(&L_333->___rightHand_50), (void*)L_335);
		// if (m_CustomSettings)
		bool L_336 = __this->___m_CustomSettings_12;
		if (!L_336)
		{
			goto IL_099c;
		}
	}
	{
		// body.height = m_AvatarHeight;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_337 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_338 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_337);
		float L_339 = __this->___m_AvatarHeight_13;
		NullCheck(L_338);
		L_338->___height_52 = L_339;
		// sb.Clear().Append("AssignHumanoidToBody() height: ").Append(body.height);
		StringBuilder_t* L_340;
		L_340 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_340);
		StringBuilder_t* L_341;
		L_341 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_340, NULL);
		NullCheck(L_341);
		StringBuilder_t* L_342;
		L_342 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_341, _stringLiteralE937E9E52A868C56F7A93F20157C121591AE0F11, NULL);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_343 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_344 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_343);
		NullCheck(L_344);
		float L_345 = L_344->___height_52;
		NullCheck(L_342);
		StringBuilder_t* L_346;
		L_346 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_342, L_345, NULL);
		// DEBUG(sb);
		StringBuilder_t* L_347;
		L_347 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_347, NULL);
		goto IL_0aac;
	}

IL_099c:
	{
		// float floor = Mathf.Min(m_Humanoid.LeftToes.position.y, m_Humanoid.RightToes.position.y);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_348 = __this->___m_Humanoid_14;
		NullCheck(L_348);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_349;
		L_349 = Humanoid_get_LeftToes_mFC1B26A87208410951D46832CFA5437ECAFEC8CB_inline(L_348, NULL);
		NullCheck(L_349);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_350;
		L_350 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_349, NULL);
		float L_351 = L_350.___y_3;
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_352 = __this->___m_Humanoid_14;
		NullCheck(L_352);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_353;
		L_353 = Humanoid_get_RightToes_mEFD1E6053C543E7AF74BC7A3FE89187ACD127843_inline(L_352, NULL);
		NullCheck(L_353);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_354;
		L_354 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_353, NULL);
		float L_355 = L_354.___y_3;
		float L_356;
		L_356 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_351, L_355, NULL);
		V_0 = L_356;
		// body.height = m_Humanoid.Head.position.y - floor;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_357 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_358 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_357);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_359 = __this->___m_Humanoid_14;
		NullCheck(L_359);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_360;
		L_360 = Humanoid_get_Head_mD48ECFF180BA2AC19891B1992BC304EE91F3C416_inline(L_359, NULL);
		NullCheck(L_360);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_361;
		L_361 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_360, NULL);
		float L_362 = L_361.___y_3;
		float L_363 = V_0;
		NullCheck(L_358);
		L_358->___height_52 = ((float)il2cpp_codegen_subtract(L_362, L_363));
		// sb.Clear().Append("AssignHumanoidToBody() Calculates height:")
		//     .Append(" LeftToes (").Append(m_Humanoid.LeftToes.position.y).Append(")")
		//     .Append(", RightToes(").Append(m_Humanoid.RightToes.position.y).Append(")")
		//     .Append(", Head(").Append(m_Humanoid.Head.position.y).Append(")")
		//     .Append(", height: ").Append(body.height);
		StringBuilder_t* L_364;
		L_364 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_364);
		StringBuilder_t* L_365;
		L_365 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_364, NULL);
		NullCheck(L_365);
		StringBuilder_t* L_366;
		L_366 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_365, _stringLiteral6055C3DD6C709B2BB8DB817336BFA9B09965D03E, NULL);
		NullCheck(L_366);
		StringBuilder_t* L_367;
		L_367 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_366, _stringLiteral45848DAB90A733703EDCF887E1EBFE9FE1673483, NULL);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_368 = __this->___m_Humanoid_14;
		NullCheck(L_368);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_369;
		L_369 = Humanoid_get_LeftToes_mFC1B26A87208410951D46832CFA5437ECAFEC8CB_inline(L_368, NULL);
		NullCheck(L_369);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_370;
		L_370 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_369, NULL);
		float L_371 = L_370.___y_3;
		NullCheck(L_367);
		StringBuilder_t* L_372;
		L_372 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_367, L_371, NULL);
		NullCheck(L_372);
		StringBuilder_t* L_373;
		L_373 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_372, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_373);
		StringBuilder_t* L_374;
		L_374 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_373, _stringLiteral5C1A828F68D8118F61169D99FE4E3DC6614D4D9F, NULL);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_375 = __this->___m_Humanoid_14;
		NullCheck(L_375);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_376;
		L_376 = Humanoid_get_RightToes_mEFD1E6053C543E7AF74BC7A3FE89187ACD127843_inline(L_375, NULL);
		NullCheck(L_376);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_377;
		L_377 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_376, NULL);
		float L_378 = L_377.___y_3;
		NullCheck(L_374);
		StringBuilder_t* L_379;
		L_379 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_374, L_378, NULL);
		NullCheck(L_379);
		StringBuilder_t* L_380;
		L_380 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_379, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_380);
		StringBuilder_t* L_381;
		L_381 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_380, _stringLiteralAAF319C6FA0CF67C4AED3A2CC3851028D0C0B243, NULL);
		Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* L_382 = __this->___m_Humanoid_14;
		NullCheck(L_382);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_383;
		L_383 = Humanoid_get_Head_mD48ECFF180BA2AC19891B1992BC304EE91F3C416_inline(L_382, NULL);
		NullCheck(L_383);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_384;
		L_384 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_383, NULL);
		float L_385 = L_384.___y_3;
		NullCheck(L_381);
		StringBuilder_t* L_386;
		L_386 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_381, L_385, NULL);
		NullCheck(L_386);
		StringBuilder_t* L_387;
		L_387 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_386, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_387);
		StringBuilder_t* L_388;
		L_388 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_387, _stringLiteral5DC9F3D3EAC7DC13DEE14149F4CBE5AA1ADA66A7, NULL);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_389 = ___0_body;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_390 = *((Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074**)L_389);
		NullCheck(L_390);
		float L_391 = L_390->___height_52;
		NullCheck(L_388);
		StringBuilder_t* L_392;
		L_392 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_388, L_391, NULL);
		// DEBUG(sb);
		StringBuilder_t* L_393;
		L_393 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_393, NULL);
	}

IL_0aac:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_Awake_m7A4284C203E32A23E90D77CA84A209A4A31C301C (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral631DCCC7D86B3019E03AB183FDDAF679518F901D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A7D7D6A8625012B7D69B80F5F456DB3EA53431F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE2CA2EC1CFA1DF2DC752BF01356C619F57D38DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8477F991B91E12B387117B63318857E07F96366);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sb.Clear().Append("Awake() Records the initial body position and scale."); DEBUG(sb);
		StringBuilder_t* L_0;
		L_0 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_0, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralE8477F991B91E12B387117B63318857E07F96366, NULL);
		// sb.Clear().Append("Awake() Records the initial body position and scale."); DEBUG(sb);
		StringBuilder_t* L_3;
		L_3 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_3, NULL);
		// m_InitialTransform = new TransformData(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171 L_5;
		memset((&L_5), 0, sizeof(L_5));
		TransformData__ctor_m794ABEA3209CCDAE9F7034B8BC8F7C8B81A5E461((&L_5), L_4, /*hidden argument*/NULL);
		__this->___m_InitialTransform_17 = L_5;
		// if (m_Body == null)
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_6 = __this->___m_Body_15;
		if (L_6)
		{
			goto IL_00a0;
		}
	}
	{
		// sb.Clear().Append("Awake() Configures Humanoid avatar."); DEBUG(sb);
		StringBuilder_t* L_7;
		L_7 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_7, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteralAE2CA2EC1CFA1DF2DC752BF01356C619F57D38DA, NULL);
		// sb.Clear().Append("Awake() Configures Humanoid avatar."); DEBUG(sb);
		StringBuilder_t* L_10;
		L_10 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_10, NULL);
		// m_Body = new Body();
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_11 = (Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074*)il2cpp_codegen_object_new(Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Body__ctor_m304CA93992C84D6B2EAD2389644CEBBCEF6E6E92(L_11, NULL);
		__this->___m_Body_15 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Body_15), (void*)L_11);
		// if (!AssignHumanoidToBody(ref m_Body))
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_12 = (&__this->___m_Body_15);
		bool L_13;
		L_13 = HumanoidIKSample_AssignHumanoidToBody_mF7EBCB43B39392E6C77E21DCF3E6FDDD27F5291D(__this, L_12, NULL);
		if (L_13)
		{
			goto IL_00a0;
		}
	}
	{
		// sb.Clear().Append("Awake() AssignHumanoidToBody failed."); ERROR(sb);
		StringBuilder_t* L_14;
		L_14 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_14, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral7A7D7D6A8625012B7D69B80F5F456DB3EA53431F, NULL);
		// sb.Clear().Append("Awake() AssignHumanoidToBody failed."); ERROR(sb);
		StringBuilder_t* L_17;
		L_17 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_ERROR_m1CED12D49C79864232DE81414D7D738B21CD4A63(__this, L_17, NULL);
		// m_Body = null;
		__this->___m_Body_15 = (Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Body_15), (void*)(Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074*)NULL);
		// return;
		return;
	}

IL_00a0:
	{
		// if (m_InitialBody == null)
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_18 = __this->___m_InitialBody_16;
		if (L_18)
		{
			goto IL_00e6;
		}
	}
	{
		// sb.Clear().Append("Awake() Records the initial standard pose."); DEBUG(sb);
		StringBuilder_t* L_19;
		L_19 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_19, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral631DCCC7D86B3019E03AB183FDDAF679518F901D, NULL);
		// sb.Clear().Append("Awake() Records the initial standard pose."); DEBUG(sb);
		StringBuilder_t* L_22;
		L_22 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_22, NULL);
		// m_InitialBody = new Body();
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_23 = (Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074*)il2cpp_codegen_object_new(Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Body__ctor_m304CA93992C84D6B2EAD2389644CEBBCEF6E6E92(L_23, NULL);
		__this->___m_InitialBody_16 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InitialBody_16), (void*)L_23);
		// m_InitialBody.UpdateData(m_Body);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_24 = __this->___m_InitialBody_16;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_25 = __this->___m_Body_15;
		NullCheck(L_24);
		Body_UpdateData_mE401B5CC75954EC602B99CF18AA13A6946148C2C(L_24, L_25, NULL);
	}

IL_00e6:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_Update_mDAFDACBB5689864EC9FB03869D53FFC94573CCBD (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	{
		// logFrame++;
		int32_t L_0 = __this->___logFrame_6;
		__this->___logFrame_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// logFrame %= 300;
		int32_t L_1 = __this->___logFrame_6;
		__this->___logFrame_6 = ((int32_t)(L_1%((int32_t)300)));
		// printIntervalLog = (logFrame == 0);
		int32_t L_2 = __this->___logFrame_6;
		__this->___printIntervalLog_7 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_OnDisable_mCEA6A5917CEB9D410E2511B0CC522FB9C114A883 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C893E7A175253E3154243B593B16AE55A95BDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sb.Clear().Append("OnDisable()"); DEBUG(sb);
		StringBuilder_t* L_0;
		L_0 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_0, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral84C893E7A175253E3154243B593B16AE55A95BDA, NULL);
		// sb.Clear().Append("OnDisable()"); DEBUG(sb);
		StringBuilder_t* L_3;
		L_3 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_3, NULL);
		// StopTracking();
		HumanoidIKSample_StopTracking_mE46993FA1AB1EEA999EE6F5398B6EF035331025F(__this, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::BeginTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_BeginTracking_m035E9A91F82B04AA76AF9951BF12603B0D80B964 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	{
		// if (!CanStartTracking()) { return; }
		bool L_0;
		L_0 = HumanoidIKSample_CanStartTracking_m8569974C09B502DD111DE6659EC62E3D2AC2D272(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!CanStartTracking()) { return; }
		return;
	}

IL_0009:
	{
		// SetTrackingStatus(TrackingStatus.Starting);
		HumanoidIKSample_SetTrackingStatus_m960D072542BC95DB9028E824E3F33AF49142D7F6(__this, 2, NULL);
		// StartCoroutine(StartBodyTracking());
		RuntimeObject* L_1;
		L_1 = HumanoidIKSample_StartBodyTracking_mDC30F5825D981E84126B4781D319758717F26BDF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::StopTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_StopTracking_mE46993FA1AB1EEA999EE6F5398B6EF035331025F (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral157A71014B374913FB1A7E367187C0C8CA55C44A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CanStopTracking()) { return; }
		bool L_0;
		L_0 = HumanoidIKSample_CanStopTracking_m21A63B022D6379B367273E15DFB535031C98AFF2(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!CanStopTracking()) { return; }
		return;
	}

IL_0009:
	{
		// SetTrackingStatus(TrackingStatus.Stopping);
		HumanoidIKSample_SetTrackingStatus_m960D072542BC95DB9028E824E3F33AF49142D7F6(__this, 3, NULL);
		// updateTrackingData = false;
		__this->___updateTrackingData_18 = (bool)0;
		// sb.Clear().Append("StopTracking() Recovers the initial standard pose, body position and scale."); DEBUG(sb);
		StringBuilder_t* L_1;
		L_1 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_1, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteral157A71014B374913FB1A7E367187C0C8CA55C44A, NULL);
		// sb.Clear().Append("StopTracking() Recovers the initial standard pose, body position and scale."); DEBUG(sb);
		StringBuilder_t* L_4;
		L_4 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_4, NULL);
		// if (m_Body != null && m_InitialBody != null) { m_InitialBody.UpdateBody(ref m_Body); }
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_5 = __this->___m_Body_15;
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_6 = __this->___m_InitialBody_16;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		// if (m_Body != null && m_InitialBody != null) { m_InitialBody.UpdateBody(ref m_Body); }
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_7 = __this->___m_InitialBody_16;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074** L_8 = (&__this->___m_Body_15);
		NullCheck(L_7);
		Body_UpdateBody_m06F1D926E88D37B42A07E0EF5AE0A9831CE6EA35(L_7, L_8, NULL);
	}

IL_005a:
	{
		// RecoverBodyScale();
		HumanoidIKSample_RecoverBodyScale_mE890CED651D1CA40184B0C8346F1BDE38968B4C5(__this, NULL);
		// RecoverBodyOffset();
		HumanoidIKSample_RecoverBodyOffset_mA87C27C1C3B6B124F5D13D959A1DFFE879FC2D13(__this, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::ApplyBodyScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_ApplyBodyScale_m25CB18B6BEAE25BB005D5B07ACC53ED662DA26D1 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, float ___0_scale, const RuntimeMethod* method) 
{
	{
		// transform.localScale *= scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = ___0_scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::RecoverBodyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_RecoverBodyScale_mE890CED651D1CA40184B0C8346F1BDE38968B4C5 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	{
		// transform.localScale = m_InitialTransform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171* L_1 = (&__this->___m_InitialTransform_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___localScale_4;
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::ApplyBodyOffsetEachFrame(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_ApplyBodyOffsetEachFrame_mF06C121CF7510EE3161BBAB4BDE28F84F3D2EB07 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (offset != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_offset;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// transform.localPosition = offset.rotation * transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_offset;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_4, L_6, NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_7, NULL);
		// transform.localPosition += offset.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___0_offset;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_12, NULL);
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_13, NULL);
		// transform.localRotation *= offset.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_14;
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___0_offset;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_16, L_18, NULL);
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_19, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::RecoverBodyOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_RecoverBodyOffset_mA87C27C1C3B6B124F5D13D959A1DFFE879FC2D13 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = m_InitialTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171* L_1 = (&__this->___m_InitialTransform_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___localPosition_1;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_2, NULL);
		// transform.localRotation = m_InitialTransform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformData_t724B15ECF31475454D59E4425AAE2ED57CA32171* L_4 = (&__this->___m_InitialTransform_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = L_4->___localRotation_3;
		NullCheck(L_3);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Wave.Essence.BodyTracking.Demo.HumanoidIKSample::StartBodyTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HumanoidIKSample_StartBodyTracking_mDC30F5825D981E84126B4781D319758717F26BDF (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30* L_0 = (U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30*)il2cpp_codegen_object_new(U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartBodyTrackingU3Ed__50__ctor_m789505CA5CEF8C4521FB0ABEB41B114B060900B1(L_0, 0, NULL);
		U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::UpdateBodyPosesInOrder(Wave.Essence.BodyTracking.BodyAvatar,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample_UpdateBodyPosesInOrder_mCD5F885808157F16D105809550B59E6F674FA3A7 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* ___0_avatarBody, float ___1_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B42E3755A3A673EB22E95E3E390BA13CA9483C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DBBD6DA91C2A6AD4D81FAAFE1E95F2CF265AB2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC4FD0EFD4AD23D7C7007FDD2A4BCF732137D51E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF04B14692D34C5AE03B28783F6E6C15A36C21F0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Body == null || avatarBody == null) { return; }
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_0 = __this->___m_Body_15;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_1 = ___0_avatarBody;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		// if (m_Body == null || avatarBody == null) { return; }
		return;
	}

IL_000c:
	{
		// if (printIntervalLog)
		bool L_2 = __this->___printIntervalLog_7;
		if (!L_2)
		{
			goto IL_0085;
		}
	}
	{
		// sb.Clear().Append("UpdateBodyPosesInOrder() new avatar height ").Append(avatarBody.height)
		//     .Append(", original avatar height ").Append(m_InitialBody.height)
		//     .Append(", scale: ").Append(avatarBody.scale)
		//     .Append(", confidence: ").Append(avatarBody.confidence);
		StringBuilder_t* L_3;
		L_3 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralF04B14692D34C5AE03B28783F6E6C15A36C21F0F, NULL);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_6 = ___0_avatarBody;
		NullCheck(L_6);
		float L_7 = L_6->___height_2;
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_5, L_7, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral12B42E3755A3A673EB22E95E3E390BA13CA9483C, NULL);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_10 = __this->___m_InitialBody_16;
		NullCheck(L_10);
		float L_11 = L_10->___height_52;
		NullCheck(L_9);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_9, L_11, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral7DBBD6DA91C2A6AD4D81FAAFE1E95F2CF265AB2E, NULL);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_14 = ___0_avatarBody;
		NullCheck(L_14);
		float L_15 = L_14->___scale_29;
		NullCheck(L_13);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_13, L_15, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralDC4FD0EFD4AD23D7C7007FDD2A4BCF732137D51E, NULL);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_18 = ___0_avatarBody;
		NullCheck(L_18);
		float L_19 = L_18->___confidence_30;
		NullCheck(L_17);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_17, L_19, NULL);
		// DEBUG(sb);
		StringBuilder_t* L_21;
		L_21 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(__this, NULL);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(__this, L_21, NULL);
	}

IL_0085:
	{
		// if (m_Body.root != null) avatarBody.Update(JointType.HIP, ref m_Body.root, scale); // 0
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_22 = __this->___m_Body_15;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->___root_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00ab;
		}
	}
	{
		// if (m_Body.root != null) avatarBody.Update(JointType.HIP, ref m_Body.root, scale); // 0
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_25 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_26 = __this->___m_Body_15;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_27 = (&L_26->___root_0);
		float L_28 = ___1_scale;
		NullCheck(L_25);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_25, 0, L_27, L_28, NULL);
	}

IL_00ab:
	{
		// if (m_Body.leftThigh != null) avatarBody.Update(JointType.LEFTTHIGH, ref m_Body.leftThigh, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_29 = __this->___m_Body_15;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = L_29->___leftThigh_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_00d1;
		}
	}
	{
		// if (m_Body.leftThigh != null) avatarBody.Update(JointType.LEFTTHIGH, ref m_Body.leftThigh, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_32 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_33 = __this->___m_Body_15;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_34 = (&L_33->___leftThigh_2);
		float L_35 = ___1_scale;
		NullCheck(L_32);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_32, 1, L_34, L_35, NULL);
	}

IL_00d1:
	{
		// if (m_Body.leftLeg != null) avatarBody.Update(JointType.LEFTLEG, ref m_Body.leftLeg, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_36 = __this->___m_Body_15;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = L_36->___leftLeg_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_00f7;
		}
	}
	{
		// if (m_Body.leftLeg != null) avatarBody.Update(JointType.LEFTLEG, ref m_Body.leftLeg, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_39 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_40 = __this->___m_Body_15;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_41 = (&L_40->___leftLeg_4);
		float L_42 = ___1_scale;
		NullCheck(L_39);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_39, 2, L_41, L_42, NULL);
	}

IL_00f7:
	{
		// if (m_Body.leftAnkle != null) avatarBody.Update(JointType.LEFTANKLE, ref m_Body.leftAnkle, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_43 = __this->___m_Body_15;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = L_43->___leftAnkle_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_45)
		{
			goto IL_011d;
		}
	}
	{
		// if (m_Body.leftAnkle != null) avatarBody.Update(JointType.LEFTANKLE, ref m_Body.leftAnkle, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_46 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_47 = __this->___m_Body_15;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_48 = (&L_47->___leftAnkle_6);
		float L_49 = ___1_scale;
		NullCheck(L_46);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_46, 3, L_48, L_49, NULL);
	}

IL_011d:
	{
		// if (m_Body.leftFoot != null) avatarBody.Update(JointType.LEFTFOOT, ref m_Body.leftFoot, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_50 = __this->___m_Body_15;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = L_50->___leftFoot_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0143;
		}
	}
	{
		// if (m_Body.leftFoot != null) avatarBody.Update(JointType.LEFTFOOT, ref m_Body.leftFoot, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_53 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_54 = __this->___m_Body_15;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_55 = (&L_54->___leftFoot_8);
		float L_56 = ___1_scale;
		NullCheck(L_53);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_53, 4, L_55, L_56, NULL);
	}

IL_0143:
	{
		// if (m_Body.rightThigh != null) avatarBody.Update(JointType.RIGHTTHIGH, ref m_Body.rightThigh, scale); // 5
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_57 = __this->___m_Body_15;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = L_57->___rightThigh_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_58, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_59)
		{
			goto IL_0169;
		}
	}
	{
		// if (m_Body.rightThigh != null) avatarBody.Update(JointType.RIGHTTHIGH, ref m_Body.rightThigh, scale); // 5
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_60 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_61 = __this->___m_Body_15;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_62 = (&L_61->___rightThigh_10);
		float L_63 = ___1_scale;
		NullCheck(L_60);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_60, 5, L_62, L_63, NULL);
	}

IL_0169:
	{
		// if (m_Body.rightLeg != null) avatarBody.Update(JointType.RIGHTLEG, ref m_Body.rightLeg, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_64 = __this->___m_Body_15;
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = L_64->___rightLeg_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_65, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_66)
		{
			goto IL_018f;
		}
	}
	{
		// if (m_Body.rightLeg != null) avatarBody.Update(JointType.RIGHTLEG, ref m_Body.rightLeg, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_67 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_68 = __this->___m_Body_15;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_69 = (&L_68->___rightLeg_12);
		float L_70 = ___1_scale;
		NullCheck(L_67);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_67, 6, L_69, L_70, NULL);
	}

IL_018f:
	{
		// if (m_Body.rightAnkle != null) avatarBody.Update(JointType.RIGHTANKLE, ref m_Body.rightAnkle, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_71 = __this->___m_Body_15;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72 = L_71->___rightAnkle_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_72, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_73)
		{
			goto IL_01b5;
		}
	}
	{
		// if (m_Body.rightAnkle != null) avatarBody.Update(JointType.RIGHTANKLE, ref m_Body.rightAnkle, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_74 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_75 = __this->___m_Body_15;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_76 = (&L_75->___rightAnkle_14);
		float L_77 = ___1_scale;
		NullCheck(L_74);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_74, 7, L_76, L_77, NULL);
	}

IL_01b5:
	{
		// if (m_Body.rightFoot != null) avatarBody.Update(JointType.RIGHTFOOT, ref m_Body.rightFoot, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_78 = __this->___m_Body_15;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79 = L_78->___rightFoot_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_79, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_80)
		{
			goto IL_01db;
		}
	}
	{
		// if (m_Body.rightFoot != null) avatarBody.Update(JointType.RIGHTFOOT, ref m_Body.rightFoot, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_81 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_82 = __this->___m_Body_15;
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_83 = (&L_82->___rightFoot_16);
		float L_84 = ___1_scale;
		NullCheck(L_81);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_81, 8, L_83, L_84, NULL);
	}

IL_01db:
	{
		// if (m_Body.waist != null) avatarBody.Update(JointType.WAIST, ref m_Body.waist, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_85 = __this->___m_Body_15;
		NullCheck(L_85);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86 = L_85->___waist_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_87;
		L_87 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_86, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_87)
		{
			goto IL_0202;
		}
	}
	{
		// if (m_Body.waist != null) avatarBody.Update(JointType.WAIST, ref m_Body.waist, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_88 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_89 = __this->___m_Body_15;
		NullCheck(L_89);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_90 = (&L_89->___waist_18);
		float L_91 = ___1_scale;
		NullCheck(L_88);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_88, ((int32_t)9), L_90, L_91, NULL);
	}

IL_0202:
	{
		// if (m_Body.spineLower != null) avatarBody.Update(JointType.SPINELOWER, ref m_Body.spineLower, scale); // 10
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_92 = __this->___m_Body_15;
		NullCheck(L_92);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = L_92->___spineLower_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_93, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_94)
		{
			goto IL_0229;
		}
	}
	{
		// if (m_Body.spineLower != null) avatarBody.Update(JointType.SPINELOWER, ref m_Body.spineLower, scale); // 10
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_95 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_96 = __this->___m_Body_15;
		NullCheck(L_96);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_97 = (&L_96->___spineLower_20);
		float L_98 = ___1_scale;
		NullCheck(L_95);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_95, ((int32_t)10), L_97, L_98, NULL);
	}

IL_0229:
	{
		// if (m_Body.spineMiddle != null) avatarBody.Update(JointType.SPINEMIDDLE, ref m_Body.spineMiddle, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_99 = __this->___m_Body_15;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100 = L_99->___spineMiddle_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_101;
		L_101 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_100, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_101)
		{
			goto IL_0250;
		}
	}
	{
		// if (m_Body.spineMiddle != null) avatarBody.Update(JointType.SPINEMIDDLE, ref m_Body.spineMiddle, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_102 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_103 = __this->___m_Body_15;
		NullCheck(L_103);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_104 = (&L_103->___spineMiddle_22);
		float L_105 = ___1_scale;
		NullCheck(L_102);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_102, ((int32_t)11), L_104, L_105, NULL);
	}

IL_0250:
	{
		// if (m_Body.spineHigh != null) avatarBody.Update(JointType.SPINEHIGH, ref m_Body.spineHigh, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_106 = __this->___m_Body_15;
		NullCheck(L_106);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107 = L_106->___spineHigh_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_107, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_108)
		{
			goto IL_0277;
		}
	}
	{
		// if (m_Body.spineHigh != null) avatarBody.Update(JointType.SPINEHIGH, ref m_Body.spineHigh, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_109 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_110 = __this->___m_Body_15;
		NullCheck(L_110);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_111 = (&L_110->___spineHigh_24);
		float L_112 = ___1_scale;
		NullCheck(L_109);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_109, ((int32_t)12), L_111, L_112, NULL);
	}

IL_0277:
	{
		// if (m_Body.chest != null) avatarBody.Update(JointType.CHEST, ref m_Body.chest, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_113 = __this->___m_Body_15;
		NullCheck(L_113);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114 = L_113->___chest_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_114, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_115)
		{
			goto IL_029e;
		}
	}
	{
		// if (m_Body.chest != null) avatarBody.Update(JointType.CHEST, ref m_Body.chest, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_116 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_117 = __this->___m_Body_15;
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_118 = (&L_117->___chest_26);
		float L_119 = ___1_scale;
		NullCheck(L_116);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_116, ((int32_t)13), L_118, L_119, NULL);
	}

IL_029e:
	{
		// if (m_Body.neck != null) avatarBody.Update(JointType.NECK, ref m_Body.neck, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_120 = __this->___m_Body_15;
		NullCheck(L_120);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121 = L_120->___neck_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_122;
		L_122 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_121, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_122)
		{
			goto IL_02c5;
		}
	}
	{
		// if (m_Body.neck != null) avatarBody.Update(JointType.NECK, ref m_Body.neck, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_123 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_124 = __this->___m_Body_15;
		NullCheck(L_124);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_125 = (&L_124->___neck_28);
		float L_126 = ___1_scale;
		NullCheck(L_123);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_123, ((int32_t)14), L_125, L_126, NULL);
	}

IL_02c5:
	{
		// if (m_Body.head != null) avatarBody.Update(JointType.HEAD, ref m_Body.head, scale); // 15
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_127 = __this->___m_Body_15;
		NullCheck(L_127);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128 = L_127->___head_30;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_129;
		L_129 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_128, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_129)
		{
			goto IL_02ec;
		}
	}
	{
		// if (m_Body.head != null) avatarBody.Update(JointType.HEAD, ref m_Body.head, scale); // 15
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_130 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_131 = __this->___m_Body_15;
		NullCheck(L_131);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_132 = (&L_131->___head_30);
		float L_133 = ___1_scale;
		NullCheck(L_130);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_130, ((int32_t)15), L_132, L_133, NULL);
	}

IL_02ec:
	{
		// if (m_Body.leftClavicle != null) avatarBody.Update(JointType.LEFTCLAVICLE, ref m_Body.leftClavicle, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_134 = __this->___m_Body_15;
		NullCheck(L_134);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135 = L_134->___leftClavicle_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_136;
		L_136 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_135, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_136)
		{
			goto IL_0313;
		}
	}
	{
		// if (m_Body.leftClavicle != null) avatarBody.Update(JointType.LEFTCLAVICLE, ref m_Body.leftClavicle, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_137 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_138 = __this->___m_Body_15;
		NullCheck(L_138);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_139 = (&L_138->___leftClavicle_32);
		float L_140 = ___1_scale;
		NullCheck(L_137);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_137, ((int32_t)16), L_139, L_140, NULL);
	}

IL_0313:
	{
		// if (m_Body.leftScapula != null) avatarBody.Update(JointType.LEFTSCAPULA, ref m_Body.leftScapula, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_141 = __this->___m_Body_15;
		NullCheck(L_141);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142 = L_141->___leftScapula_34;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_143;
		L_143 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_142, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_143)
		{
			goto IL_033a;
		}
	}
	{
		// if (m_Body.leftScapula != null) avatarBody.Update(JointType.LEFTSCAPULA, ref m_Body.leftScapula, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_144 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_145 = __this->___m_Body_15;
		NullCheck(L_145);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_146 = (&L_145->___leftScapula_34);
		float L_147 = ___1_scale;
		NullCheck(L_144);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_144, ((int32_t)17), L_146, L_147, NULL);
	}

IL_033a:
	{
		// if (m_Body.leftUpperarm != null) avatarBody.Update(JointType.LEFTUPPERARM, ref m_Body.leftUpperarm, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_148 = __this->___m_Body_15;
		NullCheck(L_148);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_149 = L_148->___leftUpperarm_36;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_150;
		L_150 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_149, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_150)
		{
			goto IL_0361;
		}
	}
	{
		// if (m_Body.leftUpperarm != null) avatarBody.Update(JointType.LEFTUPPERARM, ref m_Body.leftUpperarm, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_151 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_152 = __this->___m_Body_15;
		NullCheck(L_152);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_153 = (&L_152->___leftUpperarm_36);
		float L_154 = ___1_scale;
		NullCheck(L_151);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_151, ((int32_t)18), L_153, L_154, NULL);
	}

IL_0361:
	{
		// if (m_Body.leftForearm != null) avatarBody.Update(JointType.LEFTFOREARM, ref m_Body.leftForearm, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_155 = __this->___m_Body_15;
		NullCheck(L_155);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_156 = L_155->___leftForearm_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_157;
		L_157 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_156, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_157)
		{
			goto IL_0388;
		}
	}
	{
		// if (m_Body.leftForearm != null) avatarBody.Update(JointType.LEFTFOREARM, ref m_Body.leftForearm, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_158 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_159 = __this->___m_Body_15;
		NullCheck(L_159);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_160 = (&L_159->___leftForearm_38);
		float L_161 = ___1_scale;
		NullCheck(L_158);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_158, ((int32_t)19), L_160, L_161, NULL);
	}

IL_0388:
	{
		// if (m_Body.leftHand != null) avatarBody.Update(JointType.LEFTHAND, ref m_Body.leftHand, scale); // 20
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_162 = __this->___m_Body_15;
		NullCheck(L_162);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_163 = L_162->___leftHand_40;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_164;
		L_164 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_163, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_164)
		{
			goto IL_03af;
		}
	}
	{
		// if (m_Body.leftHand != null) avatarBody.Update(JointType.LEFTHAND, ref m_Body.leftHand, scale); // 20
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_165 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_166 = __this->___m_Body_15;
		NullCheck(L_166);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_167 = (&L_166->___leftHand_40);
		float L_168 = ___1_scale;
		NullCheck(L_165);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_165, ((int32_t)20), L_167, L_168, NULL);
	}

IL_03af:
	{
		// if (m_Body.rightClavicle != null) avatarBody.Update(JointType.RIGHTCLAVICLE, ref m_Body.rightClavicle, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_169 = __this->___m_Body_15;
		NullCheck(L_169);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_170 = L_169->___rightClavicle_42;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_171;
		L_171 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_170, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_171)
		{
			goto IL_03d6;
		}
	}
	{
		// if (m_Body.rightClavicle != null) avatarBody.Update(JointType.RIGHTCLAVICLE, ref m_Body.rightClavicle, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_172 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_173 = __this->___m_Body_15;
		NullCheck(L_173);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_174 = (&L_173->___rightClavicle_42);
		float L_175 = ___1_scale;
		NullCheck(L_172);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_172, ((int32_t)21), L_174, L_175, NULL);
	}

IL_03d6:
	{
		// if (m_Body.rightScapula != null) avatarBody.Update(JointType.RIGHTSCAPULA, ref m_Body.rightScapula, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_176 = __this->___m_Body_15;
		NullCheck(L_176);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_177 = L_176->___rightScapula_44;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_178;
		L_178 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_177, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_178)
		{
			goto IL_03fd;
		}
	}
	{
		// if (m_Body.rightScapula != null) avatarBody.Update(JointType.RIGHTSCAPULA, ref m_Body.rightScapula, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_179 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_180 = __this->___m_Body_15;
		NullCheck(L_180);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_181 = (&L_180->___rightScapula_44);
		float L_182 = ___1_scale;
		NullCheck(L_179);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_179, ((int32_t)22), L_181, L_182, NULL);
	}

IL_03fd:
	{
		// if (m_Body.rightUpperarm != null) avatarBody.Update(JointType.RIGHTUPPERARM, ref m_Body.rightUpperarm, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_183 = __this->___m_Body_15;
		NullCheck(L_183);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_184 = L_183->___rightUpperarm_46;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_185;
		L_185 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_184, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_185)
		{
			goto IL_0424;
		}
	}
	{
		// if (m_Body.rightUpperarm != null) avatarBody.Update(JointType.RIGHTUPPERARM, ref m_Body.rightUpperarm, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_186 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_187 = __this->___m_Body_15;
		NullCheck(L_187);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_188 = (&L_187->___rightUpperarm_46);
		float L_189 = ___1_scale;
		NullCheck(L_186);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_186, ((int32_t)23), L_188, L_189, NULL);
	}

IL_0424:
	{
		// if (m_Body.rightForearm != null) avatarBody.Update(JointType.RIGHTFOREARM, ref m_Body.rightForearm, scale);
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_190 = __this->___m_Body_15;
		NullCheck(L_190);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_191 = L_190->___rightForearm_48;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_192;
		L_192 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_191, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_192)
		{
			goto IL_044b;
		}
	}
	{
		// if (m_Body.rightForearm != null) avatarBody.Update(JointType.RIGHTFOREARM, ref m_Body.rightForearm, scale);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_193 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_194 = __this->___m_Body_15;
		NullCheck(L_194);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_195 = (&L_194->___rightForearm_48);
		float L_196 = ___1_scale;
		NullCheck(L_193);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_193, ((int32_t)24), L_195, L_196, NULL);
	}

IL_044b:
	{
		// if (m_Body.rightHand != null) avatarBody.Update(JointType.RIGHTHAND, ref m_Body.rightHand, scale); // 25
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_197 = __this->___m_Body_15;
		NullCheck(L_197);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_198 = L_197->___rightHand_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_199;
		L_199 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_198, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_199)
		{
			goto IL_0472;
		}
	}
	{
		// if (m_Body.rightHand != null) avatarBody.Update(JointType.RIGHTHAND, ref m_Body.rightHand, scale); // 25
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_200 = ___0_avatarBody;
		Body_t0ABDF8C6FAFD5D8E4F7EE522F825A6ACFC51B074* L_201 = __this->___m_Body_15;
		NullCheck(L_201);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_202 = (&L_201->___rightHand_50);
		float L_203 = ___1_scale;
		NullCheck(L_200);
		BodyAvatar_Update_mAA157FADA9F655B90AE304ECA307E4332974C801(L_200, ((int32_t)25), L_202, L_203, NULL);
	}

IL_0472:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample__ctor_m30EFA161525C9423942C51B84D383A78AC4AFDE8 (HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* __this, const RuntimeMethod* method) 
{
	{
		// int logFrame = -1;
		__this->___logFrame_6 = (-1);
		// private float m_AvatarScale = 1;
		__this->___m_AvatarScale_11 = (1.0f);
		// private float m_AvatarHeight = 1.5f;
		__this->___m_AvatarHeight_13 = (1.5f);
		// private float avatarScale = 1;
		__this->___avatarScale_19 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidIKSample__cctor_mAE3B01D6371B6862FE5228AB46BC4FF0D1013F56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ReaderWriterLockSlim m_TrackingStatusRWLock = new ReaderWriterLockSlim();
		ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* L_0 = (ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906*)il2cpp_codegen_object_new(ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReaderWriterLockSlim__ctor_m617A86382C7F076BC04E68726F50961C799688E8(L_0, NULL);
		((HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var))->___m_TrackingStatusRWLock_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670_il2cpp_TypeInfo_var))->___m_TrackingStatusRWLock_9), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBodyTrackingU3Ed__50__ctor_m789505CA5CEF8C4521FB0ABEB41B114B060900B1 (U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBodyTrackingU3Ed__50_System_IDisposable_Dispose_m297976CD202E56539D5075C59A5B34D53762183E (U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartBodyTrackingU3Ed__50_MoveNext_m2CF7863C3D0D0BDAD2A63B182F87BE14468268D6 (U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral536EE7EC962721792F5B244FDC6F1CC925161129);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76D6BE1C6DCE46870C1F6DAAB0C1B31559BC90A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB590C33CB1F77314369BCE108CD827DCFCAC5963);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0159;
			}
			case 2:
			{
				goto IL_017b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (BodyManager.Instance == null)
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_3;
		L_3 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// SetTrackingStatus(TrackingStatus.StartFailure);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_5 = V_1;
		NullCheck(L_5);
		HumanoidIKSample_SetTrackingStatus_m960D072542BC95DB9028E824E3F33AF49142D7F6(L_5, 1, NULL);
		// yield break;
		return (bool)0;
	}

IL_003f:
	{
		// sb.Clear().Append("StartBodyTracking()"); DEBUG(sb);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_6 = V_1;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_7, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral536EE7EC962721792F5B244FDC6F1CC925161129, NULL);
		// sb.Clear().Append("StartBodyTracking()"); DEBUG(sb);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_10 = V_1;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_11 = V_1;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(L_11, NULL);
		NullCheck(L_10);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(L_10, L_12, NULL);
		// BodyTrackingResult result = BodyTrackingResult.ERROR_FATAL_ERROR;
		__this->___U3CresultU3E5__2_3 = ((int32_t)255);
		// if (result != BodyTrackingResult.SUCCESS)
		uint8_t L_13 = __this->___U3CresultU3E5__2_3;
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// SetTrackingStatus(TrackingStatus.StartFailure);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_14 = V_1;
		NullCheck(L_14);
		HumanoidIKSample_SetTrackingStatus_m960D072542BC95DB9028E824E3F33AF49142D7F6(L_14, 1, NULL);
		// yield break;
		return (bool)0;
	}

IL_007d:
	{
		// if (result == BodyTrackingResult.SUCCESS)
		uint8_t L_15 = __this->___U3CresultU3E5__2_3;
		if (L_15)
		{
			goto IL_016b;
		}
	}
	{
		// sb.Clear().Append("StartBodyTracking() Apply avatar scale with ").Append(avatarScale); DEBUG(sb);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_16 = V_1;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(L_16, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_17, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral76D6BE1C6DCE46870C1F6DAAB0C1B31559BC90A6, NULL);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->___avatarScale_19;
		NullCheck(L_19);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_19, L_21, NULL);
		// sb.Clear().Append("StartBodyTracking() Apply avatar scale with ").Append(avatarScale); DEBUG(sb);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_23 = V_1;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(L_24, NULL);
		NullCheck(L_23);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(L_23, L_25, NULL);
		// ApplyBodyScale(avatarScale * m_AvatarScale);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_26 = V_1;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->___avatarScale_19;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_29 = V_1;
		NullCheck(L_29);
		float L_30 = L_29->___m_AvatarScale_11;
		NullCheck(L_26);
		HumanoidIKSample_ApplyBodyScale_m25CB18B6BEAE25BB005D5B07ACC53ED662DA26D1(L_26, ((float)il2cpp_codegen_multiply(L_28, L_30)), NULL);
		// SetTrackingStatus(TrackingStatus.Available); // Tracking is available then going into the loop for retrieving poses.
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_31 = V_1;
		NullCheck(L_31);
		HumanoidIKSample_SetTrackingStatus_m960D072542BC95DB9028E824E3F33AF49142D7F6(L_31, 4, NULL);
		// updateTrackingData = true;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_32 = V_1;
		NullCheck(L_32);
		L_32->___updateTrackingData_18 = (bool)1;
		goto IL_0160;
	}

IL_00db:
	{
		// if (result == BodyTrackingResult.SUCCESS)
		uint8_t L_33 = __this->___U3CresultU3E5__2_3;
		if (L_33)
		{
			goto IL_0145;
		}
	}
	{
		// if (BodyManager.Instance.EnableTrackingLog)
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_34;
		L_34 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		NullCheck(L_34);
		bool L_35;
		L_35 = BodyManager_get_EnableTrackingLog_m44037CFAD5AA2C84E87B10CC48FAE79E56757F01_inline(L_34, NULL);
		if (!L_35)
		{
			goto IL_0121;
		}
	}
	{
		// sb.Clear().Append("StartBodyTracking() avatarBody confidence: ").Append(avatarBody.confidence);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_36 = V_1;
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(L_36, NULL);
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_37, NULL);
		NullCheck(L_38);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_38, _stringLiteralB590C33CB1F77314369BCE108CD827DCFCAC5963, NULL);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_40 = V_1;
		NullCheck(L_40);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_41 = L_40->___avatarBody_20;
		NullCheck(L_41);
		float L_42 = L_41->___confidence_30;
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_39, L_42, NULL);
		// DEBUG(sb);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_44 = V_1;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_45 = V_1;
		NullCheck(L_45);
		StringBuilder_t* L_46;
		L_46 = HumanoidIKSample_get_sb_mF870CDA9BBA9FB6BD1B86DB2A121857F119225C6(L_45, NULL);
		NullCheck(L_44);
		HumanoidIKSample_DEBUG_mAB7C064317F5C1F2E76C168748CB6EE8A619D20D(L_44, L_46, NULL);
	}

IL_0121:
	{
		// RecoverBodyOffset();
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_47 = V_1;
		NullCheck(L_47);
		HumanoidIKSample_RecoverBodyOffset_mA87C27C1C3B6B124F5D13D959A1DFFE879FC2D13(L_47, NULL);
		// UpdateBodyPosesInOrder(avatarBody, m_AvatarScale);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_48 = V_1;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_49 = V_1;
		NullCheck(L_49);
		BodyAvatar_t2C8E331178D60F0E95118D7D9D0F887523923AD2* L_50 = L_49->___avatarBody_20;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_51 = V_1;
		NullCheck(L_51);
		float L_52 = L_51->___m_AvatarScale_11;
		NullCheck(L_48);
		HumanoidIKSample_UpdateBodyPosesInOrder_mCD5F885808157F16D105809550B59E6F674FA3A7(L_48, L_50, L_52, NULL);
		// ApplyBodyOffsetEachFrame(m_AvatarOffset);
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_53 = V_1;
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_54 = V_1;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = L_54->___m_AvatarOffset_10;
		NullCheck(L_53);
		HumanoidIKSample_ApplyBodyOffsetEachFrame_mF06C121CF7510EE3161BBAB4BDE28F84F3D2EB07(L_53, L_55, NULL);
	}

IL_0145:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_56 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_56, NULL);
		__this->___U3CU3E2__current_1 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_56);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0159:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0160:
	{
		// while (updateTrackingData)
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_57 = V_1;
		NullCheck(L_57);
		bool L_58 = L_57->___updateTrackingData_18;
		if (L_58)
		{
			goto IL_00db;
		}
	}

IL_016b:
	{
		// yield return null; // waits next frame
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_017b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetTrackingStatus(TrackingStatus.NotStart); // Resets the tracking status last.
		HumanoidIKSample_t299AC6AE30503274166DF4AD9CDA94C4DEA6A670* L_59 = V_1;
		NullCheck(L_59);
		HumanoidIKSample_SetTrackingStatus_m960D072542BC95DB9028E824E3F33AF49142D7F6(L_59, 0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartBodyTrackingU3Ed__50_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF1B2B921FE98F0764E51295D10DE7A558778C117 (U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartBodyTrackingU3Ed__50_System_Collections_IEnumerator_Reset_mACA31DE560A63FB176DA0BCD53BF8CB8C6FF040D (U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartBodyTrackingU3Ed__50_System_Collections_IEnumerator_Reset_mACA31DE560A63FB176DA0BCD53BF8CB8C6FF040D_RuntimeMethod_var)));
	}
}
// System.Object Wave.Essence.BodyTracking.Demo.HumanoidIKSample/<StartBodyTracking>d__50::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartBodyTrackingU3Ed__50_System_Collections_IEnumerator_get_Current_m5F6CA7755BC82B94EAA34E9667568F7DF65A213E (U3CStartBodyTrackingU3Ed__50_t0767E7148951B09C10FFD24036FA5C0F08C1AA30* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* HumanoidTrackingMenu_get_sb_mE60B51F60F1D89DE4A791BAC14D0569EEB1703A9 (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_0 = __this->___m_sb_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___m_sb_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_sb_5), (void*)L_1);
	}

IL_0013:
	{
		// return m_sb;
		StringBuilder_t* L_2 = __this->___m_sb_5;
		return L_2;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_DEBUG_mB0DDB01E9774A642C6D1B460BC4F3684DEB7EC18 (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2D94EC7BD729F5F0A5FF179E7CA0B1D3567D778);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void DEBUG(StringBuilder msg) { Rdp.d(LOG_TAG, msg, true); }
		StringBuilder_t* L_0 = ___0_msg;
		Rdp_d_mF35489EADD63997A0A4979F1991FF1730344709F(_stringLiteralB2D94EC7BD729F5F0A5FF179E7CA0B1D3567D778, L_0, (bool)1, NULL);
		// void DEBUG(StringBuilder msg) { Rdp.d(LOG_TAG, msg, true); }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_Update_m579511A45343CBBE2812CF87C334B2FE2607F8A9 (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingMode_t9EC95BC927F3492A7150CA83FF237FD0AB166122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FB7AA8BBF5BD690367F5418DE81DF2D900EA3E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549B9D496B9C9EDE7280BA216D09059C895E4ECB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9F8DE4BECF3649D4C19444B0361907ACA4F3B3C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_1 = NULL;
	{
		// if (humanoidTracking == null || trackingTitle == null) { return; }
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___trackingTitle_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		// if (humanoidTracking == null || trackingTitle == null) { return; }
		return;
	}

IL_001d:
	{
		// trackingTitle.text = humanoidTracking.Tracking + "\n" + "Manually Tracking";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___trackingTitle_9;
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_5 = __this->___humanoidTracking_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = HumanoidTracking_get_Tracking_m9D1C84FBD07F1832E9901A6C88116BEB093C3D1B_inline(L_5, NULL);
		V_0 = L_6;
		Il2CppFakeBox<int32_t> L_7(TrackingMode_t9EC95BC927F3492A7150CA83FF237FD0AB166122_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteralE9F8DE4BECF3649D4C19444B0361907ACA4F3B3C, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_9);
		// if (logButton != null && BodyManager.Instance != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___logButton_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_12;
		L_12 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		// logButton.GetComponentInChildren<Text>().text = BodyManager.Instance.EnableTrackingLog ? "Log\nOn" : "Log\nOff";
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___logButton_11;
		NullCheck(L_14);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15;
		L_15 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_14, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_16;
		L_16 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = BodyManager_get_EnableTrackingLog_m44037CFAD5AA2C84E87B10CC48FAE79E56757F01_inline(L_16, NULL);
		G_B6_0 = L_15;
		if (L_17)
		{
			G_B7_0 = L_15;
			goto IL_0084;
		}
	}
	{
		G_B8_0 = _stringLiteral2FB7AA8BBF5BD690367F5418DE81DF2D900EA3E9;
		G_B8_1 = G_B6_0;
		goto IL_0089;
	}

IL_0084:
	{
		G_B8_0 = _stringLiteral549B9D496B9C9EDE7280BA216D09059C895E4ECB;
		G_B8_1 = G_B7_0;
	}

IL_0089:
	{
		NullCheck(G_B8_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B8_1, G_B8_0);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::SetArmMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_SetArmMode_m3658A29BB33ED302910F25DF97E7F25E36968D33 (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// humanoidTracking.Tracking = HumanoidTracking.TrackingMode.Arm;
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_2 = __this->___humanoidTracking_6;
		NullCheck(L_2);
		HumanoidTracking_set_Tracking_m004E244B05EC6923E0384CBD0F7F362D1C8F07D5_inline(L_2, 0, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::SetUpperMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_SetUpperMode_m46222EF2D2DFD5FADC9481647F04C55041E65176 (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// humanoidTracking.Tracking = HumanoidTracking.TrackingMode.UpperBody;
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_2 = __this->___humanoidTracking_6;
		NullCheck(L_2);
		HumanoidTracking_set_Tracking_m004E244B05EC6923E0384CBD0F7F362D1C8F07D5_inline(L_2, 1, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::SetFullMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_SetFullMode_m1ECC0577EDD18F7D89682FE51BF9DE114899D30C (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// humanoidTracking.Tracking = HumanoidTracking.TrackingMode.FullBody;
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_2 = __this->___humanoidTracking_6;
		NullCheck(L_2);
		HumanoidTracking_set_Tracking_m004E244B05EC6923E0384CBD0F7F362D1C8F07D5_inline(L_2, 2, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::SetUpperBodyAndLegMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_SetUpperBodyAndLegMode_mDA10C581D38C2389FCADEB122C628D6838C7A76F (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// humanoidTracking.Tracking = HumanoidTracking.TrackingMode.UpperBodyAndLeg;
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_2 = __this->___humanoidTracking_6;
		NullCheck(L_2);
		HumanoidTracking_set_Tracking_m004E244B05EC6923E0384CBD0F7F362D1C8F07D5_inline(L_2, 3, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::BeginTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_BeginTracking_m5C4A211E5B53906170F1E31A2A0BD9A2D2BA9BE4 (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// if (beginTrackingButton != null) { beginTrackingButton.interactable = false; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___beginTrackingButton_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// if (beginTrackingButton != null) { beginTrackingButton.interactable = false; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___beginTrackingButton_7;
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
	}

IL_0028:
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = false; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___startCalibrationButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = false; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___startCalibrationButton_8;
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)0, NULL);
	}

IL_0042:
	{
		// humanoidTracking.BeginTracking();
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_8 = __this->___humanoidTracking_6;
		NullCheck(L_8);
		HumanoidTracking_BeginTracking_mDC5D7037C99BEF10A4E257156895ED1C16B4C8A6(L_8, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::EndTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_EndTracking_mD4E55C8687605B0EE67645C21822DCE42220223D (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// if (beginTrackingButton != null) { beginTrackingButton.interactable = true; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___beginTrackingButton_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// if (beginTrackingButton != null) { beginTrackingButton.interactable = true; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___beginTrackingButton_7;
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)1, NULL);
	}

IL_0028:
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = true; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___startCalibrationButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = true; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___startCalibrationButton_8;
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)1, NULL);
	}

IL_0042:
	{
		// humanoidTracking.StopTracking();
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_8 = __this->___humanoidTracking_6;
		NullCheck(L_8);
		HumanoidTracking_StopTracking_m52BC7E5009A477C09C2DEDEBFFD3DA471E97F0F4(L_8, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::CalibrationStatusCallback(System.Object,Wave.Essence.BodyTracking.CalibrationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_CalibrationStatusCallback_m508469A26DF33C9B571D08549B306E897023DF4F (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, RuntimeObject* ___0_sender, int32_t ___1_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyTrackingUtils_t33B372876873BF1E13AE6300C400B89AEC3FA7B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32C3C4AE250B0499299A9ECB7523690CEBFE8C80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = (status >= CalibrationStatus.STATUS_FINISHED); }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___startCalibrationButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = (status >= CalibrationStatus.STATUS_FINISHED); }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___startCalibrationButton_8;
		int32_t L_3 = ___1_status;
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0020:
	{
		// if (calibrationTitle != null) { calibrationTitle.text = "Calibration " + status.Name(); }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___calibrationTitle_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// if (calibrationTitle != null) { calibrationTitle.text = "Calibration " + status.Name(); }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___calibrationTitle_10;
		int32_t L_7 = ___1_status;
		il2cpp_codegen_runtime_class_init_inline(BodyTrackingUtils_t33B372876873BF1E13AE6300C400B89AEC3FA7B9_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = BodyTrackingUtils_Name_mFFFA3A3E90C7379A6AEFD9677A76E5EA25DC2EB0(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral32C3C4AE250B0499299A9ECB7523690CEBFE8C80, L_8, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::StartCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_StartCalibration_m137B0148FF228DD5E8E8741FA7CD24CDBB7B0EFC (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanoidTrackingMenu_CalibrationStatusCallback_m508469A26DF33C9B571D08549B306E897023DF4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EFE4646979B4FE226DD9281CBB33148DDB09D66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = false; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___startCalibrationButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = false; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___startCalibrationButton_8;
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
	}

IL_0028:
	{
		// if (calibrationTitle != null) { calibrationTitle.text = "Calibration"; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___calibrationTitle_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// if (calibrationTitle != null) { calibrationTitle.text = "Calibration"; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___calibrationTitle_10;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral5EFE4646979B4FE226DD9281CBB33148DDB09D66);
	}

IL_0046:
	{
		// humanoidTracking.BeginCalibration(CalibrationStatusCallback);
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_8 = __this->___humanoidTracking_6;
		CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F* L_9 = (CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F*)il2cpp_codegen_object_new(CalibrationStatusDelegate_t601170B744CA987C050CD4509ACAAA073B90485F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CalibrationStatusDelegate__ctor_m5B9BF3D65DCEC6D1B4E3F7D685E62EFB4F187E2C(L_9, __this, (intptr_t)((void*)HumanoidTrackingMenu_CalibrationStatusCallback_m508469A26DF33C9B571D08549B306E897023DF4F_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		HumanoidTracking_BeginCalibration_m4FC0FEF67A4E1FD240ABBAB7A8993B88D5A31B00(L_8, L_9, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::StopCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_StopCalibration_mC5ACF5458163FF1EA11B0725875FE3953235752E (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EFE4646979B4FE226DD9281CBB33148DDB09D66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = true; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___startCalibrationButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// if (startCalibrationButton != null) { startCalibrationButton.interactable = true; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___startCalibrationButton_8;
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)1, NULL);
	}

IL_0028:
	{
		// if (calibrationTitle != null) { calibrationTitle.text = "Calibration"; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___calibrationTitle_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// if (calibrationTitle != null) { calibrationTitle.text = "Calibration"; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___calibrationTitle_10;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral5EFE4646979B4FE226DD9281CBB33148DDB09D66);
	}

IL_0046:
	{
		// humanoidTracking.StopCalibration();
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_8 = __this->___humanoidTracking_6;
		NullCheck(L_8);
		HumanoidTracking_StopCalibration_mC1EEC096FE8E459E453C0A4837BE9D3054BB6AF0(L_8, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::OneStepStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_OneStepStart_mFC3936E3DD1F1135644C954C30E2BB5B6C20A354 (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	{
		// StartCalibration();
		HumanoidTrackingMenu_StartCalibration_m137B0148FF228DD5E8E8741FA7CD24CDBB7B0EFC(__this, NULL);
		// BeginTracking();
		HumanoidTrackingMenu_BeginTracking_m5C4A211E5B53906170F1E31A2A0BD9A2D2BA9BE4(__this, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::OneStepStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_OneStepStop_mC7E0D35A82E0E31DEACD6A519996B52C33B0B90B (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	{
		// EndTracking();
		HumanoidTrackingMenu_EndTracking_mD4E55C8687605B0EE67645C21822DCE42220223D(__this, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::ActivateTrackingLog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu_ActivateTrackingLog_m293E290DFCDE7832BB112E99B88E28E39B0DB6A3 (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BodyManager.Instance == null) { return; }
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_0;
		L_0 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (BodyManager.Instance == null) { return; }
		return;
	}

IL_000e:
	{
		// BodyManager.Instance.EnableTrackingLog = !BodyManager.Instance.EnableTrackingLog;
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_2;
		L_2 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_3;
		L_3 = BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = BodyManager_get_EnableTrackingLog_m44037CFAD5AA2C84E87B10CC48FAE79E56757F01_inline(L_3, NULL);
		NullCheck(L_2);
		BodyManager_set_EnableTrackingLog_m24ECB8E335453BC3B1F1375893FB66231DA3D692_inline(L_2, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingMenu__ctor_mBF682FC3CE5160BD59FACEB21C6CC37A7549D33E (HumanoidTrackingMenu_t8175FB70944D063AF380F1CCEB40764019040E36* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::TeleportOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingTeleport_TeleportOrigin_m7FB809D6B2C767516992FF1B9C3BB8AC314B18E4 (HumanoidTrackingTeleport_tE1CF2F0A4FE9B5BFC9EE6965DCE15FD782F39915* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null && offsetOrigin != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___offsetOrigin_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// humanoidTracking.AvatarOffset = offsetOrigin;
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_4 = __this->___humanoidTracking_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___offsetOrigin_5;
		NullCheck(L_4);
		HumanoidTracking_set_AvatarOffset_m103BF761E4126D5E589EA40263AB89F444FB5C15_inline(L_4, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::Teleport1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingTeleport_Teleport1_m3B4B51CC66C0B8AFA9801DAD5831665F8C46134A (HumanoidTrackingTeleport_tE1CF2F0A4FE9B5BFC9EE6965DCE15FD782F39915* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null && offset1 != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___offset1_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// humanoidTracking.AvatarOffset = offset1;
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_4 = __this->___humanoidTracking_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___offset1_6;
		NullCheck(L_4);
		HumanoidTracking_set_AvatarOffset_m103BF761E4126D5E589EA40263AB89F444FB5C15_inline(L_4, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::Teleport2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingTeleport_Teleport2_m393753D15D56DEABBFBFEDE37D9A1CDBE5CF3DD9 (HumanoidTrackingTeleport_tE1CF2F0A4FE9B5BFC9EE6965DCE15FD782F39915* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null && offset2 != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___offset2_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// humanoidTracking.AvatarOffset = offset2;
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_4 = __this->___humanoidTracking_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___offset2_7;
		NullCheck(L_4);
		HumanoidTracking_set_AvatarOffset_m103BF761E4126D5E589EA40263AB89F444FB5C15_inline(L_4, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::Teleport3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingTeleport_Teleport3_m96C4FF474DEB1631DC76F3110C5CCCA74B0E2151 (HumanoidTrackingTeleport_tE1CF2F0A4FE9B5BFC9EE6965DCE15FD782F39915* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (humanoidTracking != null && offset3 != null)
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_0 = __this->___humanoidTracking_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___offset3_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// humanoidTracking.AvatarOffset = offset3;
		HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* L_4 = __this->___humanoidTracking_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___offset3_8;
		NullCheck(L_4);
		HumanoidTracking_set_AvatarOffset_m103BF761E4126D5E589EA40263AB89F444FB5C15_inline(L_4, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.HumanoidTrackingTeleport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidTrackingTeleport__ctor_m2FDA50A9CFB05F6D4424FF476D1B45C890A70603 (HumanoidTrackingTeleport_tE1CF2F0A4FE9B5BFC9EE6965DCE15FD782F39915* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wave.Essence.BodyTracking.Demo.DebugRotation::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugRotation_Rotate_m3979F0B972ACD98D8EA38B13D7AEBC007396B111 (DebugRotation_tC0BD5B64718318E12F1DB9CF53E0DD6ABC713974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF3D249DEA0CB88949E4A6E926A37B4C54FD84CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE65ECEC452E2DCCEBB31A0477F62A5D536442F58);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// transform.rotation = new Quaternion(Rot.x, Rot.y, Rot.z, Rot.w);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_1 = (&__this->___Rot_4);
		float L_2 = L_1->___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_3 = (&__this->___Rot_4);
		float L_4 = L_3->___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5 = (&__this->___Rot_4);
		float L_6 = L_5->___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_7 = (&__this->___Rot_4);
		float L_8 = L_7->___w_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_9), L_2, L_4, L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_9, NULL);
		// Debug.Log("Wave.Essence.BodyTracking.Demo.DebugRotation " + gameObject.name
		//     + " rotation ("
		//     + transform.rotation.eulerAngles.x.ToString() + ", "
		//     + transform.rotation.eulerAngles.y.ToString() + ", "
		//     + transform.rotation.eulerAngles.z.ToString() + ")");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralE65ECEC452E2DCCEBB31A0477F62A5D536442F58);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE65ECEC452E2DCCEBB31A0477F62A5D536442F58);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralAF3D249DEA0CB88949E4A6E926A37B4C54FD84CB);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAF3D249DEA0CB88949E4A6E926A37B4C54FD84CB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		V_0 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		V_1 = L_19;
		float* L_20 = (&(&V_1)->___x_2);
		String_t* L_21;
		L_21 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_20, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_21);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_16;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_24, NULL);
		V_0 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		V_1 = L_26;
		float* L_27 = (&(&V_1)->___y_3);
		String_t* L_28;
		L_28 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_27, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_28);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_23;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_31, NULL);
		V_0 = L_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		V_1 = L_33;
		float* L_34 = (&(&V_1)->___z_4);
		String_t* L_35;
		L_35 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_34, NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_35);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_30;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_37;
		L_37 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_37, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.DebugRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugRotation__ctor_mFEA080355138B8FA8D83E0BFC553F894DA2761D1 (DebugRotation_tC0BD5B64718318E12F1DB9CF53E0DD6ABC713974* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wave.Essence.BodyTracking.Demo.DebugRotationMaster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugRotationMaster_Start_mEBC31C834A90CED7DFE355239ED7A222884383D6 (DebugRotationMaster_tD850C06B64021CBE302BA4654B71B4F3BA8D9945* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE40178F84DE4EBEE5DCADB66A6BE37CB56D10BDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m527E7770ECD44A449CA1B0500367B4BC4B031D1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < DRs.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// DRs[i].Rotate();
		List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581* L_0 = __this->___DRs_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		DebugRotation_tC0BD5B64718318E12F1DB9CF53E0DD6ABC713974* L_2;
		L_2 = List_1_get_Item_m527E7770ECD44A449CA1B0500367B4BC4B031D1A(L_0, L_1, List_1_get_Item_m527E7770ECD44A449CA1B0500367B4BC4B031D1A_RuntimeMethod_var);
		NullCheck(L_2);
		DebugRotation_Rotate_m3979F0B972ACD98D8EA38B13D7AEBC007396B111(L_2, NULL);
		// for (int i = 0; i < DRs.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < DRs.Count; i++)
		int32_t L_4 = V_0;
		List_1_t18DD5C186FDB88B79F0BCEB1D9AD20923D298581* L_5 = __this->___DRs_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mE40178F84DE4EBEE5DCADB66A6BE37CB56D10BDA_inline(L_5, List_1_get_Count_mE40178F84DE4EBEE5DCADB66A6BE37CB56D10BDA_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.DebugRotationMaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugRotationMaster__ctor_mFEF436CACAB9B5AE83B20D12D2D37ABB023481C3 (DebugRotationMaster_tD850C06B64021CBE302BA4654B71B4F3BA8D9945* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.ProfilerLogger::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* ProfilerLogger_get_sb_mE96A598C5A853C5B731AF4B76E4C016C5368DDFA (ProfilerLogger_tFF821F76D76E2314BBF6C2DEF88D8E2E9234FB21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_0 = __this->___m_sb_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___m_sb_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_sb_5), (void*)L_1);
	}

IL_0013:
	{
		// return m_sb;
		StringBuilder_t* L_2 = __this->___m_sb_5;
		return L_2;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ProfilerLogger::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerLogger_DEBUG_mC78439B3E082775BFCDA09BA9DC6DD6FF9BDDE67 (ProfilerLogger_tFF821F76D76E2314BBF6C2DEF88D8E2E9234FB21* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA57CEAAA98983455E32C16DC9FD2342687BBC43);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sb.Insert(0, LOG_TAG);
		StringBuilder_t* L_0 = ___0_sb;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_0, 0, _stringLiteralAA57CEAAA98983455E32C16DC9FD2342687BBC43, NULL);
		// Debug.Log(sb);
		StringBuilder_t* L_2 = ___0_sb;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ProfilerLogger::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerLogger_Awake_m80FC53957D4670341E4FC5424522E606F4C0CFFA (ProfilerLogger_tFF821F76D76E2314BBF6C2DEF88D8E2E9234FB21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91C96449EEF5884973CD053AEC3084EF3F706954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC988E3F8B22A03CDF4C42C272A0AEC293448233);
		s_Il2CppMethodInitialized = true;
	}
	{
		// logFilePath = Path.Combine(Application.persistentDataPath, "profiler_log");
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, _stringLiteralCC988E3F8B22A03CDF4C42C272A0AEC293448233, NULL);
		__this->___logFilePath_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logFilePath_6), (void*)L_1);
		// sb.Clear().Append("Profiler log file path: ").Append(logFilePath); DEBUG(sb);
		StringBuilder_t* L_2;
		L_2 = ProfilerLogger_get_sb_mE96A598C5A853C5B731AF4B76E4C016C5368DDFA(__this, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_2, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral91C96449EEF5884973CD053AEC3084EF3F706954, NULL);
		String_t* L_5 = __this->___logFilePath_6;
		NullCheck(L_4);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_5, NULL);
		// sb.Clear().Append("Profiler log file path: ").Append(logFilePath); DEBUG(sb);
		StringBuilder_t* L_7;
		L_7 = ProfilerLogger_get_sb_mE96A598C5A853C5B731AF4B76E4C016C5368DDFA(__this, NULL);
		ProfilerLogger_DEBUG_mC78439B3E082775BFCDA09BA9DC6DD6FF9BDDE67(__this, L_7, NULL);
		// UnityEngine.Profiling.Profiler.logFile = logFilePath;
		String_t* L_8 = __this->___logFilePath_6;
		Profiler_set_logFile_m169323E7FFAAF95B6D771AB8DBC4B3BB9042E072(L_8, NULL);
		// UnityEngine.Profiling.Profiler.enableBinaryLog = true;
		Profiler_set_enableBinaryLog_mA859BD8D6D193C5E3FAF1888B76722C4D2B55024((bool)1, NULL);
		// UnityEngine.Profiling.Profiler.enabled = true;
		Profiler_set_enabled_m54CE46AB03F2D012299B0E52A6651BDA3B3BBDC1((bool)1, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ProfilerLogger::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerLogger_ExitGame_m332D7142CB10AA51AEFD20A4E37B2F096F29B308 (ProfilerLogger_tFF821F76D76E2314BBF6C2DEF88D8E2E9234FB21* __this, const RuntimeMethod* method) 
{
	{
		// UnityEngine.Profiling.Profiler.enableBinaryLog = false;
		Profiler_set_enableBinaryLog_mA859BD8D6D193C5E3FAF1888B76722C4D2B55024((bool)0, NULL);
		// UnityEngine.Profiling.Profiler.enabled = false;
		Profiler_set_enabled_m54CE46AB03F2D012299B0E52A6651BDA3B3BBDC1((bool)0, NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ProfilerLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerLogger__ctor_m0FC4B38A9E8A08EADD27DEF75C627A75CDB6BC62 (ProfilerLogger_tFF821F76D76E2314BBF6C2DEF88D8E2E9234FB21* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject Wave.Essence.BodyTracking.Demo.DrawBone::get_TargetJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DrawBone_get_TargetJoint_m99DF7FB46A65AFEC617BA204DB9916957F9F1262 (DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject TargetJoint { get { return m_TargetJoint; } set { m_TargetJoint = value; } }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_TargetJoint_4;
		return L_0;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.DrawBone::set_TargetJoint(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBone_set_TargetJoint_mE6EADF6693773E931C397A6C0CCA81B5C9E311CB (DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject TargetJoint { get { return m_TargetJoint; } set { m_TargetJoint = value; } }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___m_TargetJoint_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetJoint_4), (void*)L_0);
		// public GameObject TargetJoint { get { return m_TargetJoint; } set { m_TargetJoint = value; } }
		return;
	}
}
// System.Single Wave.Essence.BodyTracking.Demo.DrawBone::get_BoneWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DrawBone_get_BoneWidth_mB945B4A4837BFBB03AA9AF479BFBAEAAF63A504D (DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396* __this, const RuntimeMethod* method) 
{
	{
		// public float BoneWidth { get { return m_BoneWidth; } set { m_BoneWidth = value; } }
		float L_0 = __this->___m_BoneWidth_5;
		return L_0;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.DrawBone::set_BoneWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBone_set_BoneWidth_mB7BA17533914E5784BB8D1712FC170F29E446886 (DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float BoneWidth { get { return m_BoneWidth; } set { m_BoneWidth = value; } }
		float L_0 = ___0_value;
		__this->___m_BoneWidth_5 = L_0;
		// public float BoneWidth { get { return m_BoneWidth; } set { m_BoneWidth = value; } }
		return;
	}
}
// UnityEngine.Color Wave.Essence.BodyTracking.Demo.DrawBone::get_BoneColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F DrawBone_get_BoneColor_mF5958BF462C155BC8B0484F041DFB31989E9CD08 (DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396* __this, const RuntimeMethod* method) 
{
	{
		// public Color BoneColor { get { return m_BoneColor; } set { m_BoneColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_BoneColor_6;
		return L_0;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.DrawBone::set_BoneColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBone_set_BoneColor_m73507B14D749E56069A70B1202A86C5B3C5B0DC7 (DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color BoneColor { get { return m_BoneColor; } set { m_BoneColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_BoneColor_6 = L_0;
		// public Color BoneColor { get { return m_BoneColor; } set { m_BoneColor = value; } }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.DrawBone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBone_Start_m4E58D823D3F5157197BD6D891B8E057031B7C15C (DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2F2BB2B5FA73624E198CE932674B4CD4D71FD9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_TargetJoint != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_TargetJoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// bone = gameObject.AddComponent<LineRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3;
		L_3 = GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056(L_2, GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		__this->___bone_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bone_7), (void*)L_3);
		// bone.material = new Material(Shader.Find("Legacy Shaders/Particles/Additive"));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = __this->___bone_7;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5;
		L_5 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralD2F2BB2B5FA73624E198CE932674B4CD4D71FD9A, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_6, L_5, NULL);
		NullCheck(L_4);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_4, L_6, NULL);
		// bone.positionCount = 2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = __this->___bone_7;
		NullCheck(L_7);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_7, 2, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.DrawBone::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBone_Update_m10768FD5B1649B5759EDC0DAA73B307BFEF96DE3 (DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bone == null)
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___bone_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (m_TargetJoint.GetComponent<MeshRenderer>() != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_TargetJoint_4;
		NullCheck(L_2);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_2, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// bone.enabled = m_TargetJoint.GetComponent<MeshRenderer>().enabled;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___bone_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_TargetJoint_4;
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_6, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_8;
		L_8 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_7, NULL);
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, L_8, NULL);
	}

IL_003d:
	{
		// startPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		__this->___startPos_8 = L_10;
		// endPos = m_TargetJoint.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_TargetJoint_4;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		__this->___endPos_9 = L_13;
		// bone.startColor = m_BoneColor;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_14 = __this->___bone_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___m_BoneColor_6;
		NullCheck(L_14);
		LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91(L_14, L_15, NULL);
		// bone.endColor = m_BoneColor;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_16 = __this->___bone_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___m_BoneColor_6;
		NullCheck(L_16);
		LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D(L_16, L_17, NULL);
		// bone.startWidth = m_BoneWidth;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_18 = __this->___bone_7;
		float L_19 = __this->___m_BoneWidth_5;
		NullCheck(L_18);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_18, L_19, NULL);
		// bone.endWidth = m_BoneWidth;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_20 = __this->___bone_7;
		float L_21 = __this->___m_BoneWidth_5;
		NullCheck(L_20);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_20, L_21, NULL);
		// bone.SetPosition(0, startPos);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_22 = __this->___bone_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___startPos_8;
		NullCheck(L_22);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_22, 0, L_23, NULL);
		// bone.SetPosition(1, endPos);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_24 = __this->___bone_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___endPos_9;
		NullCheck(L_24);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_24, 1, L_25, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.DrawBone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawBone__ctor_mD0D22100613F7C528FE4C40474A0797662DBA5F0 (DrawBone_t52CCA6DF8D057A10EC83BD011F9FF65B442F9396* __this, const RuntimeMethod* method) 
{
	{
		// private float m_BoneWidth = 0.001f;
		__this->___m_BoneWidth_5 = (0.00100000005f);
		// private Color m_BoneColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		__this->___m_BoneColor_6 = L_0;
		// private Vector3 startPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___startPos_8 = L_1;
		// private Vector3 endPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___endPos_9 = L_2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Text.StringBuilder Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_0 = __this->___m_sb_5;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___m_sb_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_sb_5), (void*)L_1);
	}

IL_0013:
	{
		// return m_sb;
		StringBuilder_t* L_2 = __this->___m_sb_5;
		return L_2;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE3CF7762CE3022633888791CE07E35A0037D321);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void DEBUG(StringBuilder msg) { Rdp.d(LOG_TAG, msg, true); }
		StringBuilder_t* L_0 = ___0_msg;
		Rdp_d_mF35489EADD63997A0A4979F1991FF1730344709F(_stringLiteralDE3CF7762CE3022633888791CE07E35A0037D321, L_0, (bool)1, NULL);
		// void DEBUG(StringBuilder msg) { Rdp.d(LOG_TAG, msg, true); }
		return;
	}
}
// System.Int32 Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::GetTypeDropdownValue(Wave.Essence.BodyTracking.RuntimeDependency.TrackerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigTrackerIndexType_GetTypeDropdownValue_mC89A045BE4DB6B29299D3983D958075B29665C2E (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, uint32_t ___0_type, const RuntimeMethod* method) 
{
	{
		// if (type == TrackerType.ViveWristTracker) { return 1; }
		uint32_t L_0 = ___0_type;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0006;
		}
	}
	{
		// if (type == TrackerType.ViveWristTracker) { return 1; }
		return 1;
	}

IL_0006:
	{
		// if (type == TrackerType.ViveSelfTracker) { return 2; }
		uint32_t L_1 = ___0_type;
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_000c;
		}
	}
	{
		// if (type == TrackerType.ViveSelfTracker) { return 2; }
		return 2;
	}

IL_000c:
	{
		// if (type == TrackerType.ViveSelfTrackerIM) { return 3; }
		uint32_t L_2 = ___0_type;
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			goto IL_0012;
		}
	}
	{
		// if (type == TrackerType.ViveSelfTrackerIM) { return 3; }
		return 3;
	}

IL_0012:
	{
		// return 0;
		return 0;
	}
}
// Wave.Essence.BodyTracking.RuntimeDependency.TrackerType Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::GetDropdownValueType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ConfigTrackerIndexType_GetDropdownValueType_m474705B9DDFF3E8F17733688EA33647DF375BB98 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value == 1) { return TrackerType.ViveWristTracker; }
		int32_t L_0 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0006;
		}
	}
	{
		// if (value == 1) { return TrackerType.ViveWristTracker; }
		return (uint32_t)(4);
	}

IL_0006:
	{
		// if (value == 2) { return TrackerType.ViveSelfTracker; }
		int32_t L_1 = ___0_value;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_000c;
		}
	}
	{
		// if (value == 2) { return TrackerType.ViveSelfTracker; }
		return (uint32_t)(5);
	}

IL_000c:
	{
		// if (value == 3) { return TrackerType.ViveSelfTrackerIM; }
		int32_t L_2 = ___0_value;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		// if (value == 3) { return TrackerType.ViveSelfTrackerIM; }
		return (uint32_t)(6);
	}

IL_0012:
	{
		// return TrackerType.Undefined;
		return (uint32_t)(0);
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_Start_m161635A4A6DDF654F7CEDA1E997C64F9953A72BA (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m57E48D487188F67A8B796999E6DF0D192A35CC2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisDefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7_mCB96B6A47962DE38FB00171682764169A7947C3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34D93BFDB064722883F4297523126AABAEA47E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A6926D5AB1CE09ED545EFAB43BA4835EFB4D6C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6E949F53CD6A3F6391F0421E2B7AD43C2A96064);
		s_Il2CppMethodInitialized = true;
	}
	DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// if (bodyData == null) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (bodyData == null) { return; }
		return;
	}

IL_000f:
	{
		// if (menuIndex != null && bodyData.TrackerIndexInputs != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___menuIndex_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_00fa;
		}
	}
	{
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_4 = __this->___bodyData_6;
		NullCheck(L_4);
		TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E* L_5;
		L_5 = BodyRoleData_get_TrackerIndexInputs_mE1DCA44D560251A1937F9040D70735362B2AD6C7_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_00fa;
		}
	}
	{
		// DefineTrackerLocation[] types = menuIndex.GetComponentsInChildren<DefineTrackerLocation>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___menuIndex_7;
		NullCheck(L_6);
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_7;
		L_7 = GameObject_GetComponentsInChildren_TisDefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7_mCB96B6A47962DE38FB00171682764169A7947C3F(L_6, GameObject_GetComponentsInChildren_TisDefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7_mCB96B6A47962DE38FB00171682764169A7947C3F_RuntimeMethod_var);
		V_0 = L_7;
		// if (types != null)
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_8 = V_0;
		if (!L_8)
		{
			goto IL_00fa;
		}
	}
	{
		// for (int location_index = 0; location_index < types.Length; location_index++)
		V_1 = 0;
		goto IL_00f1;
	}

IL_0049:
	{
		// for (int i = 0; i < bodyData.TrackerIndexInputs.Length; i++)
		V_2 = 0;
		goto IL_00da;
	}

IL_0050:
	{
		// if (types[location_index].location == bodyData.TrackerIndexInputs[i].location)
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		int32_t L_13 = L_12->___location_4;
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_14 = __this->___bodyData_6;
		NullCheck(L_14);
		TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E* L_15;
		L_15 = BodyRoleData_get_TrackerIndexInputs_mE1DCA44D560251A1937F9040D70735362B2AD6C7_inline(L_14, NULL);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		int32_t L_19 = L_18->___location_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		// int value = (int)bodyData.TrackerIndexInputs[i].trackerId;
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_20 = __this->___bodyData_6;
		NullCheck(L_20);
		TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E* L_21;
		L_21 = BodyRoleData_get_TrackerIndexInputs_mE1DCA44D560251A1937F9040D70735362B2AD6C7_inline(L_20, NULL);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TrackerIndexBase_t768ED669DED93CE00FF25C67C43315B1730AAAB3* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		uint32_t L_25 = L_24->___trackerId_1;
		V_3 = L_25;
		// sb.Clear().Append("Start() Set ").Append(types[location_index].gameObject.name).Append(" index to ").Append(value); DEBUG(sb);
		StringBuilder_t* L_26;
		L_26 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_26, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteral34D93BFDB064722883F4297523126AABAEA47E8E, NULL);
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_29 = V_0;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_33, NULL);
		NullCheck(L_28);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, L_34, NULL);
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral3A6926D5AB1CE09ED545EFAB43BA4835EFB4D6C7, NULL);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_36, L_37, NULL);
		// sb.Clear().Append("Start() Set ").Append(types[location_index].gameObject.name).Append(" index to ").Append(value); DEBUG(sb);
		StringBuilder_t* L_39;
		L_39 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_39, NULL);
		// types[location_index].gameObject.GetComponentInChildren<Dropdown>().value = value;
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_40 = V_0;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_43, NULL);
		NullCheck(L_44);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_45;
		L_45 = GameObject_GetComponentInChildren_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m57E48D487188F67A8B796999E6DF0D192A35CC2E(L_44, GameObject_GetComponentInChildren_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m57E48D487188F67A8B796999E6DF0D192A35CC2E_RuntimeMethod_var);
		int32_t L_46 = V_3;
		NullCheck(L_45);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_45, L_46, NULL);
	}

IL_00d6:
	{
		// for (int i = 0; i < bodyData.TrackerIndexInputs.Length; i++)
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00da:
	{
		// for (int i = 0; i < bodyData.TrackerIndexInputs.Length; i++)
		int32_t L_48 = V_2;
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_49 = __this->___bodyData_6;
		NullCheck(L_49);
		TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E* L_50;
		L_50 = BodyRoleData_get_TrackerIndexInputs_mE1DCA44D560251A1937F9040D70735362B2AD6C7_inline(L_49, NULL);
		NullCheck(L_50);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		// for (int location_index = 0; location_index < types.Length; location_index++)
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00f1:
	{
		// for (int location_index = 0; location_index < types.Length; location_index++)
		int32_t L_52 = V_1;
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_53 = V_0;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_0049;
		}
	}

IL_00fa:
	{
		// if (menuType != null && bodyData.TrackerTypeInputs != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___menuType_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_0201;
		}
	}
	{
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_56 = __this->___bodyData_6;
		NullCheck(L_56);
		TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6* L_57;
		L_57 = BodyRoleData_get_TrackerTypeInputs_mFEEB3C5D0310A30334C4C3FEA16286CB3A893C49_inline(L_56, NULL);
		if (!L_57)
		{
			goto IL_0201;
		}
	}
	{
		// DefineTrackerLocation[] types = menuType.GetComponentsInChildren<DefineTrackerLocation>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___menuType_8;
		NullCheck(L_58);
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_59;
		L_59 = GameObject_GetComponentsInChildren_TisDefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7_mCB96B6A47962DE38FB00171682764169A7947C3F(L_58, GameObject_GetComponentsInChildren_TisDefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7_mCB96B6A47962DE38FB00171682764169A7947C3F_RuntimeMethod_var);
		V_4 = L_59;
		// if (types != null)
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_60 = V_4;
		if (!L_60)
		{
			goto IL_0201;
		}
	}
	{
		// for (int location_index = 0; location_index < types.Length; location_index++)
		V_5 = 0;
		goto IL_01f6;
	}

IL_0137:
	{
		// for (int i = 0; i < bodyData.TrackerTypeInputs.Length; i++)
		V_6 = 0;
		goto IL_01dc;
	}

IL_013f:
	{
		// if (types[location_index].location == bodyData.TrackerTypeInputs[i].location)
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_61 = V_4;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_64);
		int32_t L_65 = L_64->___location_4;
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_66 = __this->___bodyData_6;
		NullCheck(L_66);
		TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6* L_67;
		L_67 = BodyRoleData_get_TrackerTypeInputs_mFEEB3C5D0310A30334C4C3FEA16286CB3A893C49_inline(L_66, NULL);
		int32_t L_68 = V_6;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		int32_t L_71 = L_70->___location_0;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_71))))
		{
			goto IL_01d6;
		}
	}
	{
		// int value = GetTypeDropdownValue(bodyData.TrackerTypeInputs[i].type);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_72 = __this->___bodyData_6;
		NullCheck(L_72);
		TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6* L_73;
		L_73 = BodyRoleData_get_TrackerTypeInputs_mFEEB3C5D0310A30334C4C3FEA16286CB3A893C49_inline(L_72, NULL);
		int32_t L_74 = V_6;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		TrackerTypeBase_t686FCEF20967E3CDF632B5174088352DC0D72E46* L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		uint32_t L_77 = L_76->___type_1;
		int32_t L_78;
		L_78 = ConfigTrackerIndexType_GetTypeDropdownValue_mC89A045BE4DB6B29299D3983D958075B29665C2E(__this, L_77, NULL);
		V_7 = L_78;
		// sb.Clear().Append("Start() Set ").Append(types[location_index].gameObject.name).Append(" type to ").Append(value); DEBUG(sb);
		StringBuilder_t* L_79;
		L_79 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_79);
		StringBuilder_t* L_80;
		L_80 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_79, NULL);
		NullCheck(L_80);
		StringBuilder_t* L_81;
		L_81 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_80, _stringLiteral34D93BFDB064722883F4297523126AABAEA47E8E, NULL);
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_82 = V_4;
		int32_t L_83 = V_5;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86;
		L_86 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_85, NULL);
		NullCheck(L_86);
		String_t* L_87;
		L_87 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_86, NULL);
		NullCheck(L_81);
		StringBuilder_t* L_88;
		L_88 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_81, L_87, NULL);
		NullCheck(L_88);
		StringBuilder_t* L_89;
		L_89 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_88, _stringLiteralC6E949F53CD6A3F6391F0421E2B7AD43C2A96064, NULL);
		int32_t L_90 = V_7;
		NullCheck(L_89);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_89, L_90, NULL);
		// sb.Clear().Append("Start() Set ").Append(types[location_index].gameObject.name).Append(" type to ").Append(value); DEBUG(sb);
		StringBuilder_t* L_92;
		L_92 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_92, NULL);
		// types[location_index].gameObject.GetComponentInChildren<Dropdown>().value = value;
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_93 = V_4;
		int32_t L_94 = V_5;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_96);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97;
		L_97 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_96, NULL);
		NullCheck(L_97);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_98;
		L_98 = GameObject_GetComponentInChildren_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m57E48D487188F67A8B796999E6DF0D192A35CC2E(L_97, GameObject_GetComponentInChildren_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m57E48D487188F67A8B796999E6DF0D192A35CC2E_RuntimeMethod_var);
		int32_t L_99 = V_7;
		NullCheck(L_98);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_98, L_99, NULL);
	}

IL_01d6:
	{
		// for (int i = 0; i < bodyData.TrackerTypeInputs.Length; i++)
		int32_t L_100 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_01dc:
	{
		// for (int i = 0; i < bodyData.TrackerTypeInputs.Length; i++)
		int32_t L_101 = V_6;
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_102 = __this->___bodyData_6;
		NullCheck(L_102);
		TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6* L_103;
		L_103 = BodyRoleData_get_TrackerTypeInputs_mFEEB3C5D0310A30334C4C3FEA16286CB3A893C49_inline(L_102, NULL);
		NullCheck(L_103);
		if ((((int32_t)L_101) < ((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))))
		{
			goto IL_013f;
		}
	}
	{
		// for (int location_index = 0; location_index < types.Length; location_index++)
		int32_t L_104 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_01f6:
	{
		// for (int location_index = 0; location_index < types.Length; location_index++)
		int32_t L_105 = V_5;
		DefineTrackerLocationU5BU5D_t6758737851C020052AA915C602A8204E44324827* L_106 = V_4;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length)))))
		{
			goto IL_0137;
		}
	}

IL_0201:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_Update_mEEE8AC519C78D149831A2DAC4A434845DF18025A (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bodyData == null)
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// if (menuIndex != null && menuIndex.activeSelf) { menuIndex.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___menuIndex_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___menuIndex_7;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// if (menuIndex != null && menuIndex.activeSelf) { menuIndex.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___menuIndex_7;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_0035:
	{
		// if (menuType != null && menuType.activeSelf) { menuType.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___menuType_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___menuType_8;
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_9, NULL);
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		// if (menuType != null && menuType.activeSelf) { menuType.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___menuType_8;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_005c:
	{
		// return;
		return;
	}

IL_005d:
	{
		// if (bodyData.TrackerPose == BodyRoleData.TrackerBase.IndexBase)
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_12 = __this->___bodyData_6;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = BodyRoleData_get_TrackerPose_mBBB7B14B5DBDDEB75BCB1CE1CF69571A06CA1EFD_inline(L_12, NULL);
		if (L_13)
		{
			goto IL_00b9;
		}
	}
	{
		// if (menuIndex != null && !menuIndex.activeSelf) { menuIndex.SetActive(true); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___menuIndex_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0091;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___menuIndex_7;
		NullCheck(L_16);
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_16, NULL);
		if (L_17)
		{
			goto IL_0091;
		}
	}
	{
		// if (menuIndex != null && !menuIndex.activeSelf) { menuIndex.SetActive(true); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___menuIndex_7;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
	}

IL_0091:
	{
		// if (menuType != null  && menuType.activeSelf) { menuType.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___menuType_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_0107;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___menuType_8;
		NullCheck(L_21);
		bool L_22;
		L_22 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_21, NULL);
		if (!L_22)
		{
			goto IL_0107;
		}
	}
	{
		// if (menuType != null  && menuType.activeSelf) { menuType.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___menuType_8;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		return;
	}

IL_00b9:
	{
		// if (menuIndex != null && menuIndex.activeSelf) { menuIndex.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___menuIndex_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00e0;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___menuIndex_7;
		NullCheck(L_26);
		bool L_27;
		L_27 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_26, NULL);
		if (!L_27)
		{
			goto IL_00e0;
		}
	}
	{
		// if (menuIndex != null && menuIndex.activeSelf) { menuIndex.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___menuIndex_7;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
	}

IL_00e0:
	{
		// if (menuType != null  && !menuType.activeSelf) { menuType.SetActive(true); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___menuType_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_30)
		{
			goto IL_0107;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___menuType_8;
		NullCheck(L_31);
		bool L_32;
		L_32 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_31, NULL);
		if (L_32)
		{
			goto IL_0107;
		}
	}
	{
		// if (menuType != null  && !menuType.activeSelf) { menuType.SetActive(true); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___menuType_8;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)1, NULL);
	}

IL_0107:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnLeftWristIndexChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnLeftWristIndexChanged_m27CE2448B8BD72137792BA09F4FEA454364A6331 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08A809AE3B6353FBA0B954B3E9CED3C73E66D352);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)6)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		return;
	}

IL_0017:
	{
		// sb.Clear().Append("OnLeftWristIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_4;
		L_4 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral08A809AE3B6353FBA0B954B3E9CED3C73E66D352, NULL);
		int32_t L_7 = ___0_value;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_6, L_7, NULL);
		// sb.Clear().Append("OnLeftWristIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_9;
		L_9 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_9, NULL);
		// bodyData.SetTrackerIndex(TrackerLocation.WristLeft, value);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_10 = __this->___bodyData_6;
		int32_t L_11 = ___0_value;
		NullCheck(L_10);
		BodyRoleData_SetTrackerIndex_m99F43010FE095650EE33C804228491E1E1E15E4A(L_10, 4, L_11, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnRightWristIndexChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnRightWristIndexChanged_m35F2055C1292BBB103805BE1EFE38E2A432C4C05 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF144A3546D3FF730FD576C1C8E3F68126CDF22B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)6)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		return;
	}

IL_0017:
	{
		// sb.Clear().Append("OnRightWristIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_4;
		L_4 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralF144A3546D3FF730FD576C1C8E3F68126CDF22B3, NULL);
		int32_t L_7 = ___0_value;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_6, L_7, NULL);
		// sb.Clear().Append("OnRightWristIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_9;
		L_9 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_9, NULL);
		// bodyData.SetTrackerIndex(TrackerLocation.WristRight, value);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_10 = __this->___bodyData_6;
		int32_t L_11 = ___0_value;
		NullCheck(L_10);
		BodyRoleData_SetTrackerIndex_m99F43010FE095650EE33C804228491E1E1E15E4A(L_10, 8, L_11, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnWaistIndexChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnWaistIndexChanged_mEBA9F191C2A11A91533E13816F5A23F9B49300F4 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2903AFA12AA615C93893DA71DAEED17703E7D67);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)6)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		return;
	}

IL_0017:
	{
		// sb.Clear().Append("OnWaistIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_4;
		L_4 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralE2903AFA12AA615C93893DA71DAEED17703E7D67, NULL);
		int32_t L_7 = ___0_value;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_6, L_7, NULL);
		// sb.Clear().Append("OnWaistIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_9;
		L_9 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_9, NULL);
		// bodyData.SetTrackerIndex(TrackerLocation.Waist, value);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_10 = __this->___bodyData_6;
		int32_t L_11 = ___0_value;
		NullCheck(L_10);
		BodyRoleData_SetTrackerIndex_m99F43010FE095650EE33C804228491E1E1E15E4A(L_10, 0, L_11, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnLeftKneeIndexChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnLeftKneeIndexChanged_mA4FA0E077C04B408526F409B6B117356A87E52EE (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8C3AD821181B60A8820B1A6EF5F99540B6DA0FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)6)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		return;
	}

IL_0017:
	{
		// sb.Clear().Append("OnLeftKneeIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_4;
		L_4 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralE8C3AD821181B60A8820B1A6EF5F99540B6DA0FE, NULL);
		int32_t L_7 = ___0_value;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_6, L_7, NULL);
		// sb.Clear().Append("OnLeftKneeIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_9;
		L_9 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_9, NULL);
		// bodyData.SetTrackerIndex(TrackerLocation.KneeLeft, value);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_10 = __this->___bodyData_6;
		int32_t L_11 = ___0_value;
		NullCheck(L_10);
		BodyRoleData_SetTrackerIndex_m99F43010FE095650EE33C804228491E1E1E15E4A(L_10, ((int32_t)11), L_11, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnRightKneeIndexChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnRightKneeIndexChanged_mA711190C7D5E366E43E040D34B4ECE0B23AAD981 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E3CEFC75FEDC65FDCB5FE388AFAB158E6AB804);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)6)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		return;
	}

IL_0017:
	{
		// sb.Clear().Append("OnRightKneeIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_4;
		L_4 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral42E3CEFC75FEDC65FDCB5FE388AFAB158E6AB804, NULL);
		int32_t L_7 = ___0_value;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_6, L_7, NULL);
		// sb.Clear().Append("OnRightKneeIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_9;
		L_9 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_9, NULL);
		// bodyData.SetTrackerIndex(TrackerLocation.KneeRight, value);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_10 = __this->___bodyData_6;
		int32_t L_11 = ___0_value;
		NullCheck(L_10);
		BodyRoleData_SetTrackerIndex_m99F43010FE095650EE33C804228491E1E1E15E4A(L_10, ((int32_t)14), L_11, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnLeftAnkleIndexChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnLeftAnkleIndexChanged_m90D7CB6BE08C5F30F3AA656B2514C51D1BE8EC1F (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA4DD82CF87728BA7AA9A6957B9AF12625C1DB04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)6)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		return;
	}

IL_0017:
	{
		// sb.Clear().Append("OnLeftAnkleIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_4;
		L_4 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralEA4DD82CF87728BA7AA9A6957B9AF12625C1DB04, NULL);
		int32_t L_7 = ___0_value;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_6, L_7, NULL);
		// sb.Clear().Append("OnLeftAnkleIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_9;
		L_9 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_9, NULL);
		// bodyData.SetTrackerIndex(TrackerLocation.AnkleLeft, value);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_10 = __this->___bodyData_6;
		int32_t L_11 = ___0_value;
		NullCheck(L_10);
		BodyRoleData_SetTrackerIndex_m99F43010FE095650EE33C804228491E1E1E15E4A(L_10, ((int32_t)12), L_11, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnRightAnkleIndexChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnRightAnkleIndexChanged_mCE777978DB31D269F2E4EC8092E340E7D1FE17DE (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E8B89610436A439C6F07796571F5BE4CEC41D0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)6)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > 6) { return; }
		return;
	}

IL_0017:
	{
		// sb.Clear().Append("OnRightAnkleIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_4;
		L_4 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_4, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral7E8B89610436A439C6F07796571F5BE4CEC41D0E, NULL);
		int32_t L_7 = ___0_value;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_6, L_7, NULL);
		// sb.Clear().Append("OnRightAnkleIndexChanged() ").Append(value); DEBUG(sb);
		StringBuilder_t* L_9;
		L_9 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_9, NULL);
		// bodyData.SetTrackerIndex(TrackerLocation.AnkleRight, value);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_10 = __this->___bodyData_6;
		int32_t L_11 = ___0_value;
		NullCheck(L_10);
		BodyRoleData_SetTrackerIndex_m99F43010FE095650EE33C804228491E1E1E15E4A(L_10, ((int32_t)15), L_11, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnLeftWristTypeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnLeftWristTypeChanged_mC9276A70DF654A77C7FC0A82743AA197480A3884 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A59B8CAD62C9BABFB834CE4DBBE357011C504AC);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)3)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		return;
	}

IL_0017:
	{
		// TrackerType type = GetDropdownValueType(value);
		int32_t L_4 = ___0_value;
		uint32_t L_5;
		L_5 = ConfigTrackerIndexType_GetDropdownValueType_m474705B9DDFF3E8F17733688EA33647DF375BB98(__this, L_4, NULL);
		V_0 = L_5;
		// sb.Clear().Append("OnLeftWristTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_6;
		L_6 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral6A59B8CAD62C9BABFB834CE4DBBE357011C504AC, NULL);
		uint32_t L_9 = V_0;
		String_t* L_10;
		L_10 = Rdp_Name_m8E19758B52F1F492AEB959EC5B9F4BF45DE1376D(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		// sb.Clear().Append("OnLeftWristTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_12;
		L_12 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_12, NULL);
		// bodyData.SetTrackerType(TrackerLocation.WristLeft, type);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_13 = __this->___bodyData_6;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		BodyRoleData_SetTrackerType_mFF44E45397CA75A2FDF5F95B9246F8A4AD0F3775(L_13, 4, L_14, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnRightWristTypeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnRightWristTypeChanged_m2E75A880A044BE120F546DEE5591B1E6C86F7D2E (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91865F645BC7327F72AF3162CF5882EC9F3DF502);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)3)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		return;
	}

IL_0017:
	{
		// TrackerType type = GetDropdownValueType(value);
		int32_t L_4 = ___0_value;
		uint32_t L_5;
		L_5 = ConfigTrackerIndexType_GetDropdownValueType_m474705B9DDFF3E8F17733688EA33647DF375BB98(__this, L_4, NULL);
		V_0 = L_5;
		// sb.Clear().Append("OnRightWristTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_6;
		L_6 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral91865F645BC7327F72AF3162CF5882EC9F3DF502, NULL);
		uint32_t L_9 = V_0;
		String_t* L_10;
		L_10 = Rdp_Name_m8E19758B52F1F492AEB959EC5B9F4BF45DE1376D(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		// sb.Clear().Append("OnRightWristTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_12;
		L_12 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_12, NULL);
		// bodyData.SetTrackerType(TrackerLocation.WristRight, type);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_13 = __this->___bodyData_6;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		BodyRoleData_SetTrackerType_mFF44E45397CA75A2FDF5F95B9246F8A4AD0F3775(L_13, 8, L_14, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnWaistTypeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnWaistTypeChanged_mADAFD814A238104C1446364D3E4567FEBF478988 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06A589F5065EA97BDF1E93AFFBE9135C8733EAC9);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)3)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		return;
	}

IL_0017:
	{
		// TrackerType type = GetDropdownValueType(value);
		int32_t L_4 = ___0_value;
		uint32_t L_5;
		L_5 = ConfigTrackerIndexType_GetDropdownValueType_m474705B9DDFF3E8F17733688EA33647DF375BB98(__this, L_4, NULL);
		V_0 = L_5;
		// sb.Clear().Append("OnWaistTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_6;
		L_6 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral06A589F5065EA97BDF1E93AFFBE9135C8733EAC9, NULL);
		uint32_t L_9 = V_0;
		String_t* L_10;
		L_10 = Rdp_Name_m8E19758B52F1F492AEB959EC5B9F4BF45DE1376D(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		// sb.Clear().Append("OnWaistTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_12;
		L_12 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_12, NULL);
		// bodyData.SetTrackerType(TrackerLocation.Waist, type);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_13 = __this->___bodyData_6;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		BodyRoleData_SetTrackerType_mFF44E45397CA75A2FDF5F95B9246F8A4AD0F3775(L_13, 0, L_14, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnLeftKneeTypeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnLeftKneeTypeChanged_m3C60C140F5EC909B1A8E1451A3D9D83145B5820C (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral221547242E067F98F093F2EE57C29BB9DEC34F99);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)3)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		return;
	}

IL_0017:
	{
		// TrackerType type = GetDropdownValueType(value);
		int32_t L_4 = ___0_value;
		uint32_t L_5;
		L_5 = ConfigTrackerIndexType_GetDropdownValueType_m474705B9DDFF3E8F17733688EA33647DF375BB98(__this, L_4, NULL);
		V_0 = L_5;
		// sb.Clear().Append("OnLeftKneeTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_6;
		L_6 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral221547242E067F98F093F2EE57C29BB9DEC34F99, NULL);
		uint32_t L_9 = V_0;
		String_t* L_10;
		L_10 = Rdp_Name_m8E19758B52F1F492AEB959EC5B9F4BF45DE1376D(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		// sb.Clear().Append("OnLeftKneeTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_12;
		L_12 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_12, NULL);
		// bodyData.SetTrackerType(TrackerLocation.KneeLeft, type);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_13 = __this->___bodyData_6;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		BodyRoleData_SetTrackerType_mFF44E45397CA75A2FDF5F95B9246F8A4AD0F3775(L_13, ((int32_t)11), L_14, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnRightKneeTypeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnRightKneeTypeChanged_m4A740DDD990FB49067E966C38F57E39434639A95 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDAB56C9C3FD0C238AAF76C9C8E2B0EA2FB73117);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)3)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		return;
	}

IL_0017:
	{
		// TrackerType type = GetDropdownValueType(value);
		int32_t L_4 = ___0_value;
		uint32_t L_5;
		L_5 = ConfigTrackerIndexType_GetDropdownValueType_m474705B9DDFF3E8F17733688EA33647DF375BB98(__this, L_4, NULL);
		V_0 = L_5;
		// sb.Clear().Append("OnRightKneeTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_6;
		L_6 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralEDAB56C9C3FD0C238AAF76C9C8E2B0EA2FB73117, NULL);
		uint32_t L_9 = V_0;
		String_t* L_10;
		L_10 = Rdp_Name_m8E19758B52F1F492AEB959EC5B9F4BF45DE1376D(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		// sb.Clear().Append("OnRightKneeTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_12;
		L_12 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_12, NULL);
		// bodyData.SetTrackerType(TrackerLocation.KneeRight, type);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_13 = __this->___bodyData_6;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		BodyRoleData_SetTrackerType_mFF44E45397CA75A2FDF5F95B9246F8A4AD0F3775(L_13, ((int32_t)14), L_14, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnLeftAnkleTypeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnLeftAnkleTypeChanged_m464EE14F46E5985C9BE8C0564711684FABB5196C (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF1FB54A3EE2EF0B2548FC1B6CDCBD078A4135CD);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)3)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		return;
	}

IL_0017:
	{
		// TrackerType type = GetDropdownValueType(value);
		int32_t L_4 = ___0_value;
		uint32_t L_5;
		L_5 = ConfigTrackerIndexType_GetDropdownValueType_m474705B9DDFF3E8F17733688EA33647DF375BB98(__this, L_4, NULL);
		V_0 = L_5;
		// sb.Clear().Append("OnLeftAnkleTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_6;
		L_6 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralBF1FB54A3EE2EF0B2548FC1B6CDCBD078A4135CD, NULL);
		uint32_t L_9 = V_0;
		String_t* L_10;
		L_10 = Rdp_Name_m8E19758B52F1F492AEB959EC5B9F4BF45DE1376D(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		// sb.Clear().Append("OnLeftAnkleTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_12;
		L_12 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_12, NULL);
		// bodyData.SetTrackerType(TrackerLocation.AnkleLeft, type);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_13 = __this->___bodyData_6;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		BodyRoleData_SetTrackerType_mFF44E45397CA75A2FDF5F95B9246F8A4AD0F3775(L_13, ((int32_t)12), L_14, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::OnRightAnkleTypeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType_OnRightAnkleTypeChanged_mA9BBBBC5365BFD3057612DF2F51C53758F871DEB (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C9981C9F4C4B52CD123317C7901E63EDAE05C1);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_0 = __this->___bodyData_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_value;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) <= ((int32_t)3)))
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (bodyData == null || value < 0 || value > kTypeCount) { return; }
		return;
	}

IL_0017:
	{
		// TrackerType type = GetDropdownValueType(value);
		int32_t L_4 = ___0_value;
		uint32_t L_5;
		L_5 = ConfigTrackerIndexType_GetDropdownValueType_m474705B9DDFF3E8F17733688EA33647DF375BB98(__this, L_4, NULL);
		V_0 = L_5;
		// sb.Clear().Append("OnRightAnkleTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_6;
		L_6 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral84C9981C9F4C4B52CD123317C7901E63EDAE05C1, NULL);
		uint32_t L_9 = V_0;
		String_t* L_10;
		L_10 = Rdp_Name_m8E19758B52F1F492AEB959EC5B9F4BF45DE1376D(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		// sb.Clear().Append("OnRightAnkleTypeChanged() ").Append(type.Name()); DEBUG(sb);
		StringBuilder_t* L_12;
		L_12 = ConfigTrackerIndexType_get_sb_mB0887FC28E798A4C7259A686E9703C4EB2C94AAD(__this, NULL);
		ConfigTrackerIndexType_DEBUG_mF133AA828FEC3A03EC0F00CBC8DBEB7E6494A824(__this, L_12, NULL);
		// bodyData.SetTrackerType(TrackerLocation.AnkleRight, type);
		BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* L_13 = __this->___bodyData_6;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		BodyRoleData_SetTrackerType_mFF44E45397CA75A2FDF5F95B9246F8A4AD0F3775(L_13, ((int32_t)15), L_14, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.BodyTracking.Demo.ConfigTrackerIndexType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigTrackerIndexType__ctor_mD4A7948D66560271754035B95AF77DFF89408F28 (ConfigTrackerIndexType_t9C8F8BA67729DEF1D3AF84F4338C4967E42E1BD4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wave.Essence.BodyTracking.Demo.DefineTrackerLocation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefineTrackerLocation__ctor_mBAA54F7E1658B8791E7DD5E32762A30FF1480529 (DefineTrackerLocation_tCCC8237A6E3297065C02329F350F4E9A60D6A6A7* __this, const RuntimeMethod* method) 
{
	{
		// public TrackerLocation location = TrackerLocation.Undefined;
		__this->___location_4 = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* BodyManager_get_Instance_m7CE8CA31564F7791BAFB402E1B733815750ACC59_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BodyManager Instance { get { return m_Instance; } }
		BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* L_0 = ((BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E_StaticFields*)il2cpp_codegen_static_fields_for(BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E_il2cpp_TypeInfo_var))->___m_Instance_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Hips_mDD9C3B9D0AAA448418D92DCC1752D6924F8B3132_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_Hips; public Transform Hips => m_Hips;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Hips_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftUpperLeg_mFDB7ED0DCED5797D0016841E88D58485EF8FDB78_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_LeftUpperLeg; public Transform LeftUpperLeg => m_LeftUpperLeg;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftUpperLeg_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftLowerLeg_m85BACB7FAFC528B5BF17341DDC81B78B7C20508E_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_LeftLowerLeg; public Transform LeftLowerLeg => m_LeftLowerLeg;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftLowerLeg_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftFoot_mD06D709FE0E1EBF59675CC1788EAC1192C4AB9CB_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_LeftFoot; public Transform LeftFoot => m_LeftFoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftFoot_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftToes_mFC1B26A87208410951D46832CFA5437ECAFEC8CB_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_LeftToes; public Transform LeftToes => m_LeftToes;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftToes_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightUpperLeg_m6D2A5038F4537C297B4E623B3DA838F867208D8C_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_RightUpperLeg; public Transform RightUpperLeg => m_RightUpperLeg;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightUpperLeg_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightLowerLeg_m2C63F86F3C80CB343C3E5FBB65C9AF13C9E951E7_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_RightLowerLeg; public Transform RightLowerLeg => m_RightLowerLeg;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightLowerLeg_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightFoot_mFAF4AC98BC70B380AA4C529826815BCA0CAA491F_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_RightFoot; public Transform RightFoot => m_RightFoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightFoot_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightToes_mEFD1E6053C543E7AF74BC7A3FE89187ACD127843_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_RightToes; public Transform RightToes => m_RightToes;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightToes_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Spine_m3E444C1B073E2E3F0BC5C26AF736EBDD0F74D728_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_Spine; public Transform Spine => m_Spine;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Spine_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_UpperChest_mCA49FA8AD9E5036B2DF24156B8B4A20BD3CABBC5_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_UpperChest; public Transform UpperChest => m_UpperChest;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_UpperChest_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Chest_mF77FA45E291C75FA9EAA3D4DECBC7835D57262AC_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_Chest; public Transform Chest => m_Chest;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Chest_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Neck_m456F2CA9C60B275DCF5FF030BA6E636A57A05B46_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_Neck; public Transform Neck => m_Neck;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Neck_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_Head_mD48ECFF180BA2AC19891B1992BC304EE91F3C416_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_Head; public Transform Head => m_Head;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Head_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftShoulder_mECF444F0A6EC318B41FF9046757AF0CA5C0D8725_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_LeftShoulder; public Transform LeftShoulder => m_LeftShoulder;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftShoulder_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftUpperArm_m1EF30A2E544B3A3EB0E294377406B29A9D7DAC49_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_LeftUpperArm; public Transform LeftUpperArm => m_LeftUpperArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftUpperArm_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftLowerArm_mFEC136E30E3BD3EE4500403B11B869B70A56D6BF_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_LeftLowerArm; public Transform LeftLowerArm => m_LeftLowerArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftLowerArm_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_LeftHand_m795FE11FAD4A321C5973ECB8424A44923442E823_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_LeftHand; public Transform LeftHand => m_LeftHand;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_LeftHand_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightShoulder_m4F699A4AD703AC7FA898CFE4221CE546443930EF_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_RightShoulder; public Transform RightShoulder => m_RightShoulder;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightShoulder_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightUpperArm_m713F6972F45EC35BD57754B56B6E9780B8724265_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_RightUpperArm; public Transform RightUpperArm => m_RightUpperArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightUpperArm_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightLowerArm_m1E1A68D79C267A2BFAA4798F5A1E7B4BA8CC5D4A_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_RightLowerArm; public Transform RightLowerArm => m_RightLowerArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightLowerArm_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Humanoid_get_RightHand_m747531F73CC9425073DC74CC85A1DB2156E543AF_inline (Humanoid_tB149403A4890B40D8B0CF5125A6E6F59098E3844* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Transform m_RightHand; public Transform RightHand => m_RightHand;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_RightHand_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BodyManager_get_EnableTrackingLog_m44037CFAD5AA2C84E87B10CC48FAE79E56757F01_inline (BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableTrackingLog { get { return m_EnableTrackingLog; } set { m_EnableTrackingLog = value; } }
		bool L_0 = __this->___m_EnableTrackingLog_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HumanoidTracking_get_Tracking_m9D1C84FBD07F1832E9901A6C88116BEB093C3D1B_inline (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingMode Tracking { get { return m_Tracking; } set { m_Tracking = value; } }
		int32_t L_0 = __this->___m_Tracking_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HumanoidTracking_set_Tracking_m004E244B05EC6923E0384CBD0F7F362D1C8F07D5_inline (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackingMode Tracking { get { return m_Tracking; } set { m_Tracking = value; } }
		int32_t L_0 = ___0_value;
		__this->___m_Tracking_11 = L_0;
		// public TrackingMode Tracking { get { return m_Tracking; } set { m_Tracking = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BodyManager_set_EnableTrackingLog_m24ECB8E335453BC3B1F1375893FB66231DA3D692_inline (BodyManager_t33248D59E5367A79FBADED3676FECDE4A5E4554E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool EnableTrackingLog { get { return m_EnableTrackingLog; } set { m_EnableTrackingLog = value; } }
		bool L_0 = ___0_value;
		__this->___m_EnableTrackingLog_8 = L_0;
		// public bool EnableTrackingLog { get { return m_EnableTrackingLog; } set { m_EnableTrackingLog = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HumanoidTracking_set_AvatarOffset_m103BF761E4126D5E589EA40263AB89F444FB5C15_inline (HumanoidTracking_tC1C8FE4BD778E1E0EE70D081E6135BAB4B57C22B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform AvatarOffset { get { return m_AvatarOffset; } set { m_AvatarOffset = value; } }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___m_AvatarOffset_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AvatarOffset_14), (void*)L_0);
		// public Transform AvatarOffset { get { return m_AvatarOffset; } set { m_AvatarOffset = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E* BodyRoleData_get_TrackerIndexInputs_mE1DCA44D560251A1937F9040D70735362B2AD6C7_inline (BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* __this, const RuntimeMethod* method) 
{
	{
		// public TrackerIndexBase[] TrackerIndexInputs => m_TrackerIndexInputs;
		TrackerIndexBaseU5BU5D_t245B5E196FF610F43AA156C7A848965AD7893C0E* L_0 = __this->___m_TrackerIndexInputs_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6* BodyRoleData_get_TrackerTypeInputs_mFEEB3C5D0310A30334C4C3FEA16286CB3A893C49_inline (BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* __this, const RuntimeMethod* method) 
{
	{
		// public TrackerTypeBase[] TrackerTypeInputs => m_TrackerTypeInputs;
		TrackerTypeBaseU5BU5D_t382D7DB3DC1783A1D267ED225DE8A3EEF9D91BC6* L_0 = __this->___m_TrackerTypeInputs_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BodyRoleData_get_TrackerPose_mBBB7B14B5DBDDEB75BCB1CE1CF69571A06CA1EFD_inline (BodyRoleData_t5DB86622E3B3E9252E2500DF19A3C51C4F059F4C* __this, const RuntimeMethod* method) 
{
	{
		// public TrackerBase TrackerPose => m_TrackerPose;
		int32_t L_0 = __this->___m_TrackerPose_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
