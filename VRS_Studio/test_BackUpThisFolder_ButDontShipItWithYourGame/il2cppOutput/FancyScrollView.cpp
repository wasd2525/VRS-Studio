#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Func`1<System.ValueTuple`2<System.Single,System.Single>>
struct Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1;
// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EasingCore.EasingFunction
struct EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FancyScrollView.FancyGridViewContext
struct FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130;
// FancyScrollView.FancyScrollRectContext
struct FancyScrollRectContext_tA40ADF3351BAA8CA92E79C1AC0B9E38D7A02A5DF;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// FancyScrollView.NullContext
struct NullContext_tEEA3DD863C3A87D4FA2791358E1290781BBE32C2;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// FancyScrollView.Scroller
struct Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6;
// FancyScrollView.Scroller/AutoScrollState
struct AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286;
// FancyScrollView.Scroller/Snap
struct Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inBackU7C0_1_mA370F0763C9CD10D81AB4C2ACB466251E2364247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inBounceU7C0_4_mFA59E384727ADA460E19EBACB396ED7CB408FC16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inCircU7C0_7_m61FDEE9590C7BDC409A39063F11FFE0545596A7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inCubicU7C0_10_mF21EFDBFF5A4BCABCC348B83D1C7249F49FF4932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inElasticU7C0_13_m45213A2E57DE38DB02EC00E8C0193C0338CA0AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inExpoU7C0_16_m755CAFB8D89A808DBB376912433D4073BDC7D14A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutBackU7C0_3_m254A7DEE280074C825C501A17FD8A27B40E0FCBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutBounceU7C0_6_mF4E021AC40D3E77AEEA136AE65638C3403A57226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutCircU7C0_9_mB6B8AFFAE1572BB9D8D35E2D9009D285B4AC8DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutCubicU7C0_12_m6F655BD62433F94FAB90CD0F3ABC56479010F228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutElasticU7C0_15_m3EDCA4078DF214F443BBCD38B54B5E24E01E7C95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutExpoU7C0_18_mB9D55E57B63819E00FF798D2E8A27B2CC3367C37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutQuadU7C0_21_mBD63D4F52EFFC63775BA283FD0810BFB10C43A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutQuartU7C0_24_mFF1CF5EB31F88EFA60766325CD88F48FE3789B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutQuintU7C0_27_m7AEE7777C4E8D4B717749BD6E7B699D322D7F64C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inOutSineU7C0_30_m7D248B9A971535F0390290780BA5B3FA309348ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inQuadU7C0_19_m3B53D2295E4C7DCA0A4ED4B15D9AEF727364761C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inQuartU7C0_22_m25BE3F74973F216403CA86BDF19343929E94D493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inQuintU7C0_25_mFAD879BC8689EDD020B75983443BC45AD22D4468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__inSineU7C0_28_m6CA6221073C83C308EEF6618D62EB5605EB68079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__linearU7C0_0_m630740E74BB9FDE7B75229FD5C5F1981C657D6D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outBackU7C0_2_m37D292545527941A25DAD24CC731C9D9122FBF9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outBounceU7C0_5_mFCA4B6FC404ED218E358EC0E8C1293F7B7417938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outCircU7C0_8_mB89E6CA135F182931F3D8377442FEA55D3DD8F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outCubicU7C0_11_m7711FC9ABC9BA22B43C160A6459E60144EAA9943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outElasticU7C0_14_m8BBB51C3405C38BFD70DDB4E9B96764EE277EAD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outExpoU7C0_17_m2857E1F9E24BA4F8D38F7D86C36734FF124C14F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outQuadU7C0_20_m910E347858DD6F5B9224938A9AB199EFC1AA1658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outQuartU7C0_23_mAAE6AEFCFB488859717CA2AC749E8D360F2FE089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outQuintU7C0_26_mD9053E807F32204D7C03DD5001CDCCA02C8A2EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Easing_U3CGetU3Eg__outSineU7C0_29_mC5854463295964FFAD369857A8E44490B92A8E31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scroller_JumpTo_mCE2FFEFB5D3F325F669AC8B4C57013CDE6A2BDF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scroller_U3CStartU3Eb__55_0_m0817F2396FF8D04C664BF1EA1B458F61557B1239_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7985F0A94178153C3EE88712C12E4DB3C876E804 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// EasingCore.Easing
struct Easing_tE900FB1881B628628C2937769D0E8400643D8D41  : public RuntimeObject
{
};

// FancyScrollView.FancyGridViewContext
struct FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130  : public RuntimeObject
{
	// FancyScrollView.ScrollDirection FancyScrollView.FancyGridViewContext::<FancyScrollView.IFancyScrollRectContext.ScrollDirection>k__BackingField
	int32_t ___U3CFancyScrollView_IFancyScrollRectContext_ScrollDirectionU3Ek__BackingField_0;
	// System.Func`1<System.ValueTuple`2<System.Single,System.Single>> FancyScrollView.FancyGridViewContext::<FancyScrollView.IFancyScrollRectContext.CalculateScrollSize>k__BackingField
	Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* ___U3CFancyScrollView_IFancyScrollRectContext_CalculateScrollSizeU3Ek__BackingField_1;
	// UnityEngine.GameObject FancyScrollView.FancyGridViewContext::<FancyScrollView.IFancyCellGroupContext.CellTemplate>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CFancyScrollView_IFancyCellGroupContext_CellTemplateU3Ek__BackingField_2;
	// System.Func`1<System.Int32> FancyScrollView.FancyGridViewContext::<FancyScrollView.IFancyCellGroupContext.GetGroupCount>k__BackingField
	Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___U3CFancyScrollView_IFancyCellGroupContext_GetGroupCountU3Ek__BackingField_3;
	// System.Func`1<System.Single> FancyScrollView.FancyGridViewContext::<FancyScrollView.IFancyGridViewContext.GetStartAxisSpacing>k__BackingField
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___U3CFancyScrollView_IFancyGridViewContext_GetStartAxisSpacingU3Ek__BackingField_4;
	// System.Func`1<System.Single> FancyScrollView.FancyGridViewContext::<FancyScrollView.IFancyGridViewContext.GetCellSize>k__BackingField
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___U3CFancyScrollView_IFancyGridViewContext_GetCellSizeU3Ek__BackingField_5;
};

// FancyScrollView.FancyScrollRectContext
struct FancyScrollRectContext_tA40ADF3351BAA8CA92E79C1AC0B9E38D7A02A5DF  : public RuntimeObject
{
	// FancyScrollView.ScrollDirection FancyScrollView.FancyScrollRectContext::<FancyScrollView.IFancyScrollRectContext.ScrollDirection>k__BackingField
	int32_t ___U3CFancyScrollView_IFancyScrollRectContext_ScrollDirectionU3Ek__BackingField_0;
	// System.Func`1<System.ValueTuple`2<System.Single,System.Single>> FancyScrollView.FancyScrollRectContext::<FancyScrollView.IFancyScrollRectContext.CalculateScrollSize>k__BackingField
	Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* ___U3CFancyScrollView_IFancyScrollRectContext_CalculateScrollSizeU3Ek__BackingField_1;
};

// FancyScrollView.NullContext
struct NullContext_tEEA3DD863C3A87D4FA2791358E1290781BBE32C2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// FancyScrollView.Scroller/AutoScrollState
struct AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286  : public RuntimeObject
{
	// System.Boolean FancyScrollView.Scroller/AutoScrollState::Enable
	bool ___Enable_0;
	// System.Boolean FancyScrollView.Scroller/AutoScrollState::Elastic
	bool ___Elastic_1;
	// System.Single FancyScrollView.Scroller/AutoScrollState::Duration
	float ___Duration_2;
	// EasingCore.EasingFunction FancyScrollView.Scroller/AutoScrollState::EasingFunction
	EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* ___EasingFunction_3;
	// System.Single FancyScrollView.Scroller/AutoScrollState::StartTime
	float ___StartTime_4;
	// System.Single FancyScrollView.Scroller/AutoScrollState::EndPosition
	float ___EndPosition_5;
	// System.Action FancyScrollView.Scroller/AutoScrollState::OnComplete
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnComplete_6;
};

// FancyScrollView.Scroller/Snap
struct Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7  : public RuntimeObject
{
	// System.Boolean FancyScrollView.Scroller/Snap::Enable
	bool ___Enable_0;
	// System.Single FancyScrollView.Scroller/Snap::VelocityThreshold
	float ___VelocityThreshold_1;
	// System.Single FancyScrollView.Scroller/Snap::Duration
	float ___Duration_2;
	// EasingCore.Ease FancyScrollView.Scroller/Snap::Easing
	int32_t ___Easing_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.ValueTuple`2<System.Single,System.Single>
struct ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 
{
	// T1 System.ValueTuple`2::Item1
	float ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	float ___Item2_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Func`1<System.ValueTuple`2<System.Single,System.Single>>
struct Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1  : public MulticastDelegate_t
{
};

// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD  : public MulticastDelegate_t
{
};

// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// EasingCore.EasingFunction
struct EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FancyScrollView.Scroller
struct Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform FancyScrollView.Scroller::viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___viewport_4;
	// FancyScrollView.ScrollDirection FancyScrollView.Scroller::scrollDirection
	int32_t ___scrollDirection_5;
	// FancyScrollView.MovementType FancyScrollView.Scroller::movementType
	int32_t ___movementType_6;
	// System.Single FancyScrollView.Scroller::elasticity
	float ___elasticity_7;
	// System.Single FancyScrollView.Scroller::scrollSensitivity
	float ___scrollSensitivity_8;
	// System.Boolean FancyScrollView.Scroller::inertia
	bool ___inertia_9;
	// System.Single FancyScrollView.Scroller::decelerationRate
	float ___decelerationRate_10;
	// FancyScrollView.Scroller/Snap FancyScrollView.Scroller::snap
	Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* ___snap_11;
	// System.Boolean FancyScrollView.Scroller::draggable
	bool ___draggable_12;
	// UnityEngine.UI.Scrollbar FancyScrollView.Scroller::scrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___scrollbar_13;
	// FancyScrollView.Scroller/AutoScrollState FancyScrollView.Scroller::autoScrollState
	AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* ___autoScrollState_14;
	// System.Action`1<System.Single> FancyScrollView.Scroller::onValueChanged
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onValueChanged_15;
	// System.Action`1<System.Int32> FancyScrollView.Scroller::onSelectionChanged
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___onSelectionChanged_16;
	// UnityEngine.Vector2 FancyScrollView.Scroller::beginDragPointerPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___beginDragPointerPosition_17;
	// System.Single FancyScrollView.Scroller::scrollStartPosition
	float ___scrollStartPosition_18;
	// System.Single FancyScrollView.Scroller::prevPosition
	float ___prevPosition_19;
	// System.Single FancyScrollView.Scroller::currentPosition
	float ___currentPosition_20;
	// System.Int32 FancyScrollView.Scroller::totalCount
	int32_t ___totalCount_21;
	// System.Boolean FancyScrollView.Scroller::hold
	bool ___hold_22;
	// System.Boolean FancyScrollView.Scroller::scrolling
	bool ___scrolling_23;
	// System.Boolean FancyScrollView.Scroller::dragging
	bool ___dragging_24;
	// System.Single FancyScrollView.Scroller::velocity
	float ___velocity_25;
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

// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;
};

// <Module>

// <Module>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// EasingCore.Easing

// EasingCore.Easing

// FancyScrollView.FancyGridViewContext

// FancyScrollView.FancyGridViewContext

// FancyScrollView.FancyScrollRectContext

// FancyScrollView.FancyScrollRectContext

// FancyScrollView.NullContext

// FancyScrollView.NullContext

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// FancyScrollView.Scroller/AutoScrollState

// FancyScrollView.Scroller/AutoScrollState

// FancyScrollView.Scroller/Snap

// FancyScrollView.Scroller/Snap

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// System.ValueTuple`2<System.Single,System.Single>

// System.ValueTuple`2<System.Single,System.Single>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

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

// System.Double

// System.Double

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

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

// System.Void

// System.Void

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.UI.Scrollbar/ScrollEvent

// UnityEngine.UI.Scrollbar/ScrollEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// System.SystemException

// System.SystemException

// System.Action`1<System.Int32>

// System.Action`1<System.Int32>

// System.Action`1<System.Single>

// System.Action`1<System.Single>

// System.Func`1<System.ValueTuple`2<System.Single,System.Single>>

// System.Func`1<System.ValueTuple`2<System.Single,System.Single>>

// System.Func`1<System.Int32>

// System.Func`1<System.Int32>

// System.Func`1<System.Single>

// System.Func`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.Single>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// EasingCore.EasingFunction

// EasingCore.EasingFunction

// UnityEngine.Transform

// UnityEngine.Transform

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// FancyScrollView.Scroller
struct Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_StaticFields
{
	// EasingCore.EasingFunction FancyScrollView.Scroller::DefaultEasingFunction
	EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* ___DefaultEasingFunction_26;
};

// FancyScrollView.Scroller

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Scrollbar

// UnityEngine.UI.Scrollbar
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;

// System.Void EasingCore.EasingFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4 (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Single EasingCore.Easing::<Get>g__inBack|0_1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inBackU7C0_1_mA370F0763C9CD10D81AB4C2ACB466251E2364247 (float ___0_t, const RuntimeMethod* method) ;
// System.Single EasingCore.Easing::<Get>g__outBack|0_2(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outBackU7C0_2_m37D292545527941A25DAD24CC731C9D9122FBF9C (float ___0_t, const RuntimeMethod* method) ;
// System.Single EasingCore.Easing::<Get>g__outBounce|0_5(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outBounceU7C0_5_mFCA4B6FC404ED218E358EC0E8C1293F7B7417938 (float ___0_t, const RuntimeMethod* method) ;
// System.Single EasingCore.Easing::<Get>g__inBounce|0_4(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inBounceU7C0_4_mFA59E384727ADA460E19EBACB396ED7CB408FC16 (float ___0_t, const RuntimeMethod* method) ;
// System.Single EasingCore.Easing::<Get>g__inCubic|0_10(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inCubicU7C0_10_mF21EFDBFF5A4BCABCC348B83D1C7249F49FF4932 (float ___0_t, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single EasingCore.Easing::<Get>g__inQuart|0_22(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inQuartU7C0_22_m25BE3F74973F216403CA86BDF19343929E94D493 (float ___0_t, const RuntimeMethod* method) ;
// System.Single EasingCore.Easing::<Get>g__inQuint|0_25(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inQuintU7C0_25_mFAD879BC8689EDD020B75983443BC45AD22D4468 (float ___0_t, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void FancyScrollView.Scroller/AutoScrollState::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoScrollState_Reset_m951BEC0437095B54C454478B882A31987D0DC344 (AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* __this, const RuntimeMethod* method) ;
// System.Void FancyScrollView.Scroller::UpdatePosition(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UpdatePosition_m78FB1F9D91A41E3A62BD6A81FC3F25ADBC6B3FC2 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_position, bool ___1_updateScrollbar, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* Scrollbar_get_onValueChanged_m14356CECC1A2BA96576EB73279AF2ECF28B26D6A_inline (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___0_call, method);
}
// System.Void FancyScrollView.Scroller::ScrollTo(System.Single,System.Single,EasingCore.Ease,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_ScrollTo_mCCBCE347467C40FED6CC6CA362C10BC271168FE6 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_position, float ___1_duration, int32_t ___2_easing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) ;
// EasingCore.EasingFunction EasingCore.Easing::Get(EasingCore.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* Easing_Get_mF6D5893FD33B3852B9513505923A45D650A3C9F1 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void FancyScrollView.Scroller::ScrollTo(System.Single,System.Single,EasingCore.EasingFunction,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_ScrollTo_m47FB24609EF847FB9C058E2F0901CFF88790CAD0 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_position, float ___1_duration, EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* ___2_easingFunction, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) ;
// System.Single FancyScrollView.Scroller::CircularPosition(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_CircularPosition_mDA84A33E1D973E10A3FDFCE96A09808900FC59A2 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_p, int32_t ___1_size, const RuntimeMethod* method) ;
// System.Void FancyScrollView.Scroller::set_Position(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_set_Position_m88AEC11769BFB6B3BAEC5C1CBC7CE135BD0B49F8 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Single FancyScrollView.Scroller::CalculateMovementAmount(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_CalculateMovementAmount_m7A9E3DA2D15508BBF1C3699B853C75C9A1A0BF15 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_sourcePosition, float ___1_destPosition, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void FancyScrollView.Scroller::UpdateSelection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UpdateSelection_mD6054773E984A26C9CF5001943288C641DC2BF66 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventData_IsScrolling_mFB78E050A248CDF5221482334808B82500D0A564 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Single FancyScrollView.Scroller::get_ViewportSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_get_ViewportSize_m73954B58ED140B23F2C0CDD1972B567F3B4B7308 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) ;
// System.Single FancyScrollView.Scroller::CalculateOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_CalculateOffset_m4932699F35DDD31DCB400AA8CA1021650BD0FA3A (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_localPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single FancyScrollView.Scroller::RubberDelta(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_RubberDelta_m25911960A358F1D09AFF5A206F5C4E15750975FF (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_overStretching, float ___1_viewSize, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___0_obj, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804 (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___0_obj, method);
}
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void FancyScrollView.Scroller/AutoScrollState::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoScrollState_Complete_mF6A47199CF815DEEC3F6B6FB4BCCCDC0B2249FC2 (AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* __this, const RuntimeMethod* method) ;
// System.Single EasingCore.EasingFunction::Invoke(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_inline (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void FancyScrollView.Scroller/Snap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Snap__ctor_mD30C78208491AB10F7574D7620C490CF11FB2848 (Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* __this, const RuntimeMethod* method) ;
// System.Void FancyScrollView.Scroller/AutoScrollState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoScrollState__ctor_mE73045698F9AFC31C15BA0408785534DD9A12B59 (AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour__ctor_m24C66A65DDD996E779871C6655CF11B871F11337 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
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
float EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_Multicast(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* currentDelegate = reinterpret_cast<EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_t, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_OpenInst(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_t, method);
}
float EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_OpenStatic(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_t, method);
}
float EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_OpenStaticInvoker(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___0_t);
}
float EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_ClosedStaticInvoker(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< float, RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_t);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44 (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___0_t);

	return returnValue;
}
// System.Void EasingCore.EasingFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4 (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_Multicast;
}
// System.Single EasingCore.EasingFunction::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342 (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_t, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EasingCore.EasingFunction::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EasingFunction_BeginInvoke_m2E2EEF62173B2A728FF76422689AB65FA1DD0EC3 (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___0_t);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Single EasingCore.EasingFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_EndInvoke_m707BA6AB735943EBD8C6CD43F0AFFD1AF33FCD6A (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// EasingCore.EasingFunction EasingCore.Easing::Get(EasingCore.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* Easing_Get_mF6D5893FD33B3852B9513505923A45D650A3C9F1 (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inBackU7C0_1_mA370F0763C9CD10D81AB4C2ACB466251E2364247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inBounceU7C0_4_mFA59E384727ADA460E19EBACB396ED7CB408FC16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inCircU7C0_7_m61FDEE9590C7BDC409A39063F11FFE0545596A7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inCubicU7C0_10_mF21EFDBFF5A4BCABCC348B83D1C7249F49FF4932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inElasticU7C0_13_m45213A2E57DE38DB02EC00E8C0193C0338CA0AFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inExpoU7C0_16_m755CAFB8D89A808DBB376912433D4073BDC7D14A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutBackU7C0_3_m254A7DEE280074C825C501A17FD8A27B40E0FCBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutBounceU7C0_6_mF4E021AC40D3E77AEEA136AE65638C3403A57226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutCircU7C0_9_mB6B8AFFAE1572BB9D8D35E2D9009D285B4AC8DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutCubicU7C0_12_m6F655BD62433F94FAB90CD0F3ABC56479010F228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutElasticU7C0_15_m3EDCA4078DF214F443BBCD38B54B5E24E01E7C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutExpoU7C0_18_mB9D55E57B63819E00FF798D2E8A27B2CC3367C37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutQuadU7C0_21_mBD63D4F52EFFC63775BA283FD0810BFB10C43A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutQuartU7C0_24_mFF1CF5EB31F88EFA60766325CD88F48FE3789B0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutQuintU7C0_27_m7AEE7777C4E8D4B717749BD6E7B699D322D7F64C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inOutSineU7C0_30_m7D248B9A971535F0390290780BA5B3FA309348ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inQuadU7C0_19_m3B53D2295E4C7DCA0A4ED4B15D9AEF727364761C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inQuartU7C0_22_m25BE3F74973F216403CA86BDF19343929E94D493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inQuintU7C0_25_mFAD879BC8689EDD020B75983443BC45AD22D4468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__inSineU7C0_28_m6CA6221073C83C308EEF6618D62EB5605EB68079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__linearU7C0_0_m630740E74BB9FDE7B75229FD5C5F1981C657D6D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outBackU7C0_2_m37D292545527941A25DAD24CC731C9D9122FBF9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outBounceU7C0_5_mFCA4B6FC404ED218E358EC0E8C1293F7B7417938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outCircU7C0_8_mB89E6CA135F182931F3D8377442FEA55D3DD8F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outCubicU7C0_11_m7711FC9ABC9BA22B43C160A6459E60144EAA9943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outElasticU7C0_14_m8BBB51C3405C38BFD70DDB4E9B96764EE277EAD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outExpoU7C0_17_m2857E1F9E24BA4F8D38F7D86C36734FF124C14F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outQuadU7C0_20_m910E347858DD6F5B9224938A9AB199EFC1AA1658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outQuartU7C0_23_mAAE6AEFCFB488859717CA2AC749E8D360F2FE089_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outQuintU7C0_26_mD9053E807F32204D7C03DD5001CDCCA02C8A2EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Easing_U3CGetU3Eg__outSineU7C0_29_mC5854463295964FFAD369857A8E44490B92A8E31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_type;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0087;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_00ae;
			}
			case 4:
			{
				goto IL_00bb;
			}
			case 5:
			{
				goto IL_00c8;
			}
			case 6:
			{
				goto IL_00d5;
			}
			case 7:
			{
				goto IL_00e2;
			}
			case 8:
			{
				goto IL_00ef;
			}
			case 9:
			{
				goto IL_00fc;
			}
			case 10:
			{
				goto IL_0109;
			}
			case 11:
			{
				goto IL_0116;
			}
			case 12:
			{
				goto IL_0123;
			}
			case 13:
			{
				goto IL_0130;
			}
			case 14:
			{
				goto IL_013d;
			}
			case 15:
			{
				goto IL_014a;
			}
			case 16:
			{
				goto IL_0157;
			}
			case 17:
			{
				goto IL_0164;
			}
			case 18:
			{
				goto IL_0171;
			}
			case 19:
			{
				goto IL_017e;
			}
			case 20:
			{
				goto IL_018b;
			}
			case 21:
			{
				goto IL_0198;
			}
			case 22:
			{
				goto IL_01a5;
			}
			case 23:
			{
				goto IL_01b2;
			}
			case 24:
			{
				goto IL_01bf;
			}
			case 25:
			{
				goto IL_01cc;
			}
			case 26:
			{
				goto IL_01d9;
			}
			case 27:
			{
				goto IL_01e6;
			}
			case 28:
			{
				goto IL_01f3;
			}
			case 29:
			{
				goto IL_0200;
			}
			case 30:
			{
				goto IL_020d;
			}
		}
	}
	{
		goto IL_021a;
	}

IL_0087:
	{
		// case Ease.Linear: return linear;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_1 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_1, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__linearU7C0_0_m630740E74BB9FDE7B75229FD5C5F1981C657D6D9_RuntimeMethod_var), NULL);
		return L_1;
	}

IL_0094:
	{
		// case Ease.InBack: return inBack;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_2 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_2, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inBackU7C0_1_mA370F0763C9CD10D81AB4C2ACB466251E2364247_RuntimeMethod_var), NULL);
		return L_2;
	}

IL_00a1:
	{
		// case Ease.InBounce: return inBounce;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_3 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_3, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inBounceU7C0_4_mFA59E384727ADA460E19EBACB396ED7CB408FC16_RuntimeMethod_var), NULL);
		return L_3;
	}

IL_00ae:
	{
		// case Ease.InCirc: return inCirc;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_4 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_4, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inCircU7C0_7_m61FDEE9590C7BDC409A39063F11FFE0545596A7A_RuntimeMethod_var), NULL);
		return L_4;
	}

IL_00bb:
	{
		// case Ease.InCubic: return inCubic;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_5 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_5, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inCubicU7C0_10_mF21EFDBFF5A4BCABCC348B83D1C7249F49FF4932_RuntimeMethod_var), NULL);
		return L_5;
	}

IL_00c8:
	{
		// case Ease.InElastic: return inElastic;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_6 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_6, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inElasticU7C0_13_m45213A2E57DE38DB02EC00E8C0193C0338CA0AFA_RuntimeMethod_var), NULL);
		return L_6;
	}

IL_00d5:
	{
		// case Ease.InExpo: return inExpo;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_7 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_7, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inExpoU7C0_16_m755CAFB8D89A808DBB376912433D4073BDC7D14A_RuntimeMethod_var), NULL);
		return L_7;
	}

IL_00e2:
	{
		// case Ease.InQuad: return inQuad;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_8 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_8, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inQuadU7C0_19_m3B53D2295E4C7DCA0A4ED4B15D9AEF727364761C_RuntimeMethod_var), NULL);
		return L_8;
	}

IL_00ef:
	{
		// case Ease.InQuart: return inQuart;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_9 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_9, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inQuartU7C0_22_m25BE3F74973F216403CA86BDF19343929E94D493_RuntimeMethod_var), NULL);
		return L_9;
	}

IL_00fc:
	{
		// case Ease.InQuint: return inQuint;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_10 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_10, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inQuintU7C0_25_mFAD879BC8689EDD020B75983443BC45AD22D4468_RuntimeMethod_var), NULL);
		return L_10;
	}

IL_0109:
	{
		// case Ease.InSine: return inSine;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_11 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_11, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inSineU7C0_28_m6CA6221073C83C308EEF6618D62EB5605EB68079_RuntimeMethod_var), NULL);
		return L_11;
	}

IL_0116:
	{
		// case Ease.OutBack: return outBack;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_12 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_12, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outBackU7C0_2_m37D292545527941A25DAD24CC731C9D9122FBF9C_RuntimeMethod_var), NULL);
		return L_12;
	}

IL_0123:
	{
		// case Ease.OutBounce: return outBounce;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_13 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_13, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outBounceU7C0_5_mFCA4B6FC404ED218E358EC0E8C1293F7B7417938_RuntimeMethod_var), NULL);
		return L_13;
	}

IL_0130:
	{
		// case Ease.OutCirc: return outCirc;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_14 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_14, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outCircU7C0_8_mB89E6CA135F182931F3D8377442FEA55D3DD8F3C_RuntimeMethod_var), NULL);
		return L_14;
	}

IL_013d:
	{
		// case Ease.OutCubic: return outCubic;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_15 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_15, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outCubicU7C0_11_m7711FC9ABC9BA22B43C160A6459E60144EAA9943_RuntimeMethod_var), NULL);
		return L_15;
	}

IL_014a:
	{
		// case Ease.OutElastic: return outElastic;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_16 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_16, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outElasticU7C0_14_m8BBB51C3405C38BFD70DDB4E9B96764EE277EAD9_RuntimeMethod_var), NULL);
		return L_16;
	}

IL_0157:
	{
		// case Ease.OutExpo: return outExpo;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_17 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_17, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outExpoU7C0_17_m2857E1F9E24BA4F8D38F7D86C36734FF124C14F3_RuntimeMethod_var), NULL);
		return L_17;
	}

IL_0164:
	{
		// case Ease.OutQuad: return outQuad;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_18 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_18, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outQuadU7C0_20_m910E347858DD6F5B9224938A9AB199EFC1AA1658_RuntimeMethod_var), NULL);
		return L_18;
	}

IL_0171:
	{
		// case Ease.OutQuart: return outQuart;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_19 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_19, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outQuartU7C0_23_mAAE6AEFCFB488859717CA2AC749E8D360F2FE089_RuntimeMethod_var), NULL);
		return L_19;
	}

IL_017e:
	{
		// case Ease.OutQuint: return outQuint;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_20 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_20, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outQuintU7C0_26_mD9053E807F32204D7C03DD5001CDCCA02C8A2EF7_RuntimeMethod_var), NULL);
		return L_20;
	}

IL_018b:
	{
		// case Ease.OutSine: return outSine;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_21 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_21, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__outSineU7C0_29_mC5854463295964FFAD369857A8E44490B92A8E31_RuntimeMethod_var), NULL);
		return L_21;
	}

IL_0198:
	{
		// case Ease.InOutBack: return inOutBack;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_22 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_22, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutBackU7C0_3_m254A7DEE280074C825C501A17FD8A27B40E0FCBE_RuntimeMethod_var), NULL);
		return L_22;
	}

IL_01a5:
	{
		// case Ease.InOutBounce: return inOutBounce;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_23 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_23, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutBounceU7C0_6_mF4E021AC40D3E77AEEA136AE65638C3403A57226_RuntimeMethod_var), NULL);
		return L_23;
	}

IL_01b2:
	{
		// case Ease.InOutCirc: return inOutCirc;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_24 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_24, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutCircU7C0_9_mB6B8AFFAE1572BB9D8D35E2D9009D285B4AC8DE2_RuntimeMethod_var), NULL);
		return L_24;
	}

IL_01bf:
	{
		// case Ease.InOutCubic: return inOutCubic;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_25 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_25, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutCubicU7C0_12_m6F655BD62433F94FAB90CD0F3ABC56479010F228_RuntimeMethod_var), NULL);
		return L_25;
	}

IL_01cc:
	{
		// case Ease.InOutElastic: return inOutElastic;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_26 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_26, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutElasticU7C0_15_m3EDCA4078DF214F443BBCD38B54B5E24E01E7C95_RuntimeMethod_var), NULL);
		return L_26;
	}

IL_01d9:
	{
		// case Ease.InOutExpo: return inOutExpo;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_27 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_27, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutExpoU7C0_18_mB9D55E57B63819E00FF798D2E8A27B2CC3367C37_RuntimeMethod_var), NULL);
		return L_27;
	}

IL_01e6:
	{
		// case Ease.InOutQuad: return inOutQuad;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_28 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_28, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutQuadU7C0_21_mBD63D4F52EFFC63775BA283FD0810BFB10C43A38_RuntimeMethod_var), NULL);
		return L_28;
	}

IL_01f3:
	{
		// case Ease.InOutQuart: return inOutQuart;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_29 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_29, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutQuartU7C0_24_mFF1CF5EB31F88EFA60766325CD88F48FE3789B0B_RuntimeMethod_var), NULL);
		return L_29;
	}

IL_0200:
	{
		// case Ease.InOutQuint: return inOutQuint;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_30 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_30, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutQuintU7C0_27_m7AEE7777C4E8D4B717749BD6E7B699D322D7F64C_RuntimeMethod_var), NULL);
		return L_30;
	}

IL_020d:
	{
		// case Ease.InOutSine: return inOutSine;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_31 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_31, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__inOutSineU7C0_30_m7D248B9A971535F0390290780BA5B3FA309348ED_RuntimeMethod_var), NULL);
		return L_31;
	}

IL_021a:
	{
		// default: return linear;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_32 = (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44*)il2cpp_codegen_object_new(EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		EasingFunction__ctor_m35AE79F644893EADD4C10F0D3C355C906A83FCC4(L_32, NULL, (intptr_t)((void*)Easing_U3CGetU3Eg__linearU7C0_0_m630740E74BB9FDE7B75229FD5C5F1981C657D6D9_RuntimeMethod_var), NULL);
		return L_32;
	}
}
// System.Single EasingCore.Easing::<Get>g__linear|0_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__linearU7C0_0_m630740E74BB9FDE7B75229FD5C5F1981C657D6D9 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float linear(float t) => t;
		float L_0 = ___0_t;
		return L_0;
	}
}
// System.Single EasingCore.Easing::<Get>g__inBack|0_1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inBackU7C0_1_mA370F0763C9CD10D81AB4C2ACB466251E2364247 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inBack(float t) => t * t * t - t * Mathf.Sin(t * Mathf.PI);
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___0_t;
		float L_3 = ___0_t;
		float L_4 = ___0_t;
		float L_5;
		L_5 = sinf(((float)il2cpp_codegen_multiply(L_4, (3.14159274f))));
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5))));
	}
}
// System.Single EasingCore.Easing::<Get>g__outBack|0_2(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outBackU7C0_2_m37D292545527941A25DAD24CC731C9D9122FBF9C (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float outBack(float t) => 1f - inBack(1f - t);
		float L_0 = ___0_t;
		float L_1;
		L_1 = Easing_U3CGetU3Eg__inBackU7C0_1_mA370F0763C9CD10D81AB4C2ACB466251E2364247(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutBack|0_3(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutBackU7C0_3_m254A7DEE280074C825C501A17FD8A27B40E0FCBE (float ___0_t, const RuntimeMethod* method) 
{
	{
		// t < 0.5f
		//     ? 0.5f * inBack(2f * t)
		//     : 0.5f * outBack(2f * t - 1f) + 0.5f;
		float L_0 = ___0_t;
		if ((((float)L_0) < ((float)(0.5f))))
		{
			goto IL_0027;
		}
	}
	{
		float L_1 = ___0_t;
		float L_2;
		L_2 = Easing_U3CGetU3Eg__outBackU7C0_2_m37D292545527941A25DAD24CC731C9D9122FBF9C(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_1)), (1.0f))), NULL);
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((0.5f), L_2)), (0.5f)));
	}

IL_0027:
	{
		float L_3 = ___0_t;
		float L_4;
		L_4 = Easing_U3CGetU3Eg__inBackU7C0_1_mA370F0763C9CD10D81AB4C2ACB466251E2364247(((float)il2cpp_codegen_multiply((2.0f), L_3)), NULL);
		return ((float)il2cpp_codegen_multiply((0.5f), L_4));
	}
}
// System.Single EasingCore.Easing::<Get>g__inBounce|0_4(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inBounceU7C0_4_mFA59E384727ADA460E19EBACB396ED7CB408FC16 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inBounce(float t) => 1f - outBounce(1f - t);
		float L_0 = ___0_t;
		float L_1;
		L_1 = Easing_U3CGetU3Eg__outBounceU7C0_5_mFCA4B6FC404ED218E358EC0E8C1293F7B7417938(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single EasingCore.Easing::<Get>g__outBounce|0_5(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outBounceU7C0_5_mFCA4B6FC404ED218E358EC0E8C1293F7B7417938 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// t < 4f / 11.0f ?
		//     (121f * t * t) / 16.0f :
		// t < 8f / 11.0f ?
		//     (363f / 40.0f * t * t) - (99f / 10.0f * t) + 17f / 5.0f :
		// t < 9f / 10.0f ?
		//     (4356f / 361.0f * t * t) - (35442f / 1805.0f * t) + 16061f / 1805.0f :
		//     (54f / 5.0f * t * t) - (513f / 25.0f * t) + 268f / 25.0f;
		float L_0 = ___0_t;
		if ((((float)L_0) < ((float)(0.363636374f))))
		{
			goto IL_0060;
		}
	}
	{
		float L_1 = ___0_t;
		if ((((float)L_1) < ((float)(0.727272749f))))
		{
			goto IL_0048;
		}
	}
	{
		float L_2 = ___0_t;
		if ((((float)L_2) < ((float)(0.899999976f))))
		{
			goto IL_0030;
		}
	}
	{
		float L_3 = ___0_t;
		float L_4 = ___0_t;
		float L_5 = ___0_t;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((10.8000002f), L_3)), L_4)), ((float)il2cpp_codegen_multiply((20.5200005f), L_5)))), (10.7200003f)));
	}

IL_0030:
	{
		float L_6 = ___0_t;
		float L_7 = ___0_t;
		float L_8 = ___0_t;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((12.0664816f), L_6)), L_7)), ((float)il2cpp_codegen_multiply((19.635458f), L_8)))), (8.8980608f)));
	}

IL_0048:
	{
		float L_9 = ___0_t;
		float L_10 = ___0_t;
		float L_11 = ___0_t;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((9.07499981f), L_9)), L_10)), ((float)il2cpp_codegen_multiply((9.89999962f), L_11)))), (3.4000001f)));
	}

IL_0060:
	{
		float L_12 = ___0_t;
		float L_13 = ___0_t;
		return ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((121.0f), L_12)), L_13))/(16.0f)));
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutBounce|0_6(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutBounceU7C0_6_mF4E021AC40D3E77AEEA136AE65638C3403A57226 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// t < 0.5f
		//     ? 0.5f * inBounce(2f * t)
		//     : 0.5f * outBounce(2f * t - 1f) + 0.5f;
		float L_0 = ___0_t;
		if ((((float)L_0) < ((float)(0.5f))))
		{
			goto IL_0027;
		}
	}
	{
		float L_1 = ___0_t;
		float L_2;
		L_2 = Easing_U3CGetU3Eg__outBounceU7C0_5_mFCA4B6FC404ED218E358EC0E8C1293F7B7417938(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_1)), (1.0f))), NULL);
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((0.5f), L_2)), (0.5f)));
	}

IL_0027:
	{
		float L_3 = ___0_t;
		float L_4;
		L_4 = Easing_U3CGetU3Eg__inBounceU7C0_4_mFA59E384727ADA460E19EBACB396ED7CB408FC16(((float)il2cpp_codegen_multiply((2.0f), L_3)), NULL);
		return ((float)il2cpp_codegen_multiply((0.5f), L_4));
	}
}
// System.Single EasingCore.Easing::<Get>g__inCirc|0_7(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inCircU7C0_7_m61FDEE9590C7BDC409A39063F11FFE0545596A7A (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inCirc(float t) => 1f - Mathf.Sqrt(1f - (t * t));
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2;
		L_2 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_0, L_1)))));
		return ((float)il2cpp_codegen_subtract((1.0f), L_2));
	}
}
// System.Single EasingCore.Easing::<Get>g__outCirc|0_8(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outCircU7C0_8_mB89E6CA135F182931F3D8377442FEA55D3DD8F3C (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float outCirc(float t) => Mathf.Sqrt((2f - t) * t);
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2;
		L_2 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((2.0f), L_0)), L_1)));
		return L_2;
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutCirc|0_9(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutCircU7C0_9_mB6B8AFFAE1572BB9D8D35E2D9009D285B4AC8DE2 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// t < 0.5f
		//     ? 0.5f * (1 - Mathf.Sqrt(1f - 4f * (t * t)))
		//     : 0.5f * (Mathf.Sqrt(-((2f * t) - 3f) * ((2f * t) - 1f)) + 1f);
		float L_0 = ___0_t;
		if ((((float)L_0) < ((float)(0.5f))))
		{
			goto IL_0036;
		}
	}
	{
		float L_1 = ___0_t;
		float L_2 = ___0_t;
		float L_3;
		L_3 = sqrtf(((float)il2cpp_codegen_multiply(((-((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_1)), (3.0f))))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_2)), (1.0f))))));
		return ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(L_3, (1.0f)))));
	}

IL_0036:
	{
		float L_4 = ___0_t;
		float L_5 = ___0_t;
		float L_6;
		L_6 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply((4.0f), ((float)il2cpp_codegen_multiply(L_4, L_5)))))));
		return ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_subtract((1.0f), L_6))));
	}
}
// System.Single EasingCore.Easing::<Get>g__inCubic|0_10(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inCubicU7C0_10_mF21EFDBFF5A4BCABCC348B83D1C7249F49FF4932 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inCubic(float t) => t * t * t;
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___0_t;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
	}
}
// System.Single EasingCore.Easing::<Get>g__outCubic|0_11(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outCubicU7C0_11_m7711FC9ABC9BA22B43C160A6459E60144EAA9943 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float outCubic(float t) => inCubic(t - 1f) + 1f;
		float L_0 = ___0_t;
		float L_1;
		L_1 = Easing_U3CGetU3Eg__inCubicU7C0_10_mF21EFDBFF5A4BCABCC348B83D1C7249F49FF4932(((float)il2cpp_codegen_subtract(L_0, (1.0f))), NULL);
		return ((float)il2cpp_codegen_add(L_1, (1.0f)));
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutCubic|0_12(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutCubicU7C0_12_m6F655BD62433F94FAB90CD0F3ABC56479010F228 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// t < 0.5f
		//     ? 4f * t * t * t
		//     : 0.5f * inCubic(2f * t - 2f) + 1f;
		float L_0 = ___0_t;
		if ((((float)L_0) < ((float)(0.5f))))
		{
			goto IL_0027;
		}
	}
	{
		float L_1 = ___0_t;
		float L_2;
		L_2 = Easing_U3CGetU3Eg__inCubicU7C0_10_mF21EFDBFF5A4BCABCC348B83D1C7249F49FF4932(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_1)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((0.5f), L_2)), (1.0f)));
	}

IL_0027:
	{
		float L_3 = ___0_t;
		float L_4 = ___0_t;
		float L_5 = ___0_t;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((4.0f), L_3)), L_4)), L_5));
	}
}
// System.Single EasingCore.Easing::<Get>g__inElastic|0_13(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inElasticU7C0_13_m45213A2E57DE38DB02EC00E8C0193C0338CA0AFA (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inElastic(float t) => Mathf.Sin(13f * (Mathf.PI * 0.5f) * t) * Mathf.Pow(2f, 10f * (t - 1f));
		float L_0 = ___0_t;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply((20.4203529f), L_0)));
		float L_2 = ___0_t;
		float L_3;
		L_3 = powf((2.0f), ((float)il2cpp_codegen_multiply((10.0f), ((float)il2cpp_codegen_subtract(L_2, (1.0f))))));
		return ((float)il2cpp_codegen_multiply(L_1, L_3));
	}
}
// System.Single EasingCore.Easing::<Get>g__outElastic|0_14(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outElasticU7C0_14_m8BBB51C3405C38BFD70DDB4E9B96764EE277EAD9 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float outElastic(float t) => Mathf.Sin(-13f * (Mathf.PI * 0.5f) * (t + 1)) * Mathf.Pow(2f, -10f * t) + 1f;
		float L_0 = ___0_t;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply((-20.4203529f), ((float)il2cpp_codegen_add(L_0, (1.0f))))));
		float L_2 = ___0_t;
		float L_3;
		L_3 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), L_2)));
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), (1.0f)));
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutElastic|0_15(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutElasticU7C0_15_m3EDCA4078DF214F443BBCD38B54B5E24E01E7C95 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// t < 0.5f
		//     ? 0.5f * Mathf.Sin(13f * (Mathf.PI * 0.5f) * (2f * t)) * Mathf.Pow(2f, 10f * ((2f * t) - 1f))
		//     : 0.5f * (Mathf.Sin(-13f * (Mathf.PI * 0.5f) * ((2f * t - 1f) + 1f)) * Mathf.Pow(2f, -10f * (2f * t - 1f)) + 2f);
		float L_0 = ___0_t;
		if ((((float)L_0) < ((float)(0.5f))))
		{
			goto IL_0051;
		}
	}
	{
		float L_1 = ___0_t;
		float L_2;
		L_2 = sinf(((float)il2cpp_codegen_multiply((-20.4203529f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_1)), (1.0f))), (1.0f))))));
		float L_3 = ___0_t;
		float L_4;
		L_4 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_3)), (1.0f))))));
		return ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), (2.0f)))));
	}

IL_0051:
	{
		float L_5 = ___0_t;
		float L_6;
		L_6 = sinf(((float)il2cpp_codegen_multiply((20.4203529f), ((float)il2cpp_codegen_multiply((2.0f), L_5)))));
		float L_7 = ___0_t;
		float L_8;
		L_8 = powf((2.0f), ((float)il2cpp_codegen_multiply((10.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_7)), (1.0f))))));
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.5f), L_6)), L_8));
	}
}
// System.Single EasingCore.Easing::<Get>g__inExpo|0_16(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inExpoU7C0_16_m755CAFB8D89A808DBB376912433D4073BDC7D14A (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inExpo(float t) => Mathf.Approximately(0.0f, t) ? t : Mathf.Pow(2f, 10f * (t - 1f));
		float L_0 = ___0_t;
		bool L_1;
		L_1 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((0.0f), L_0, NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		float L_2 = ___0_t;
		float L_3;
		L_3 = powf((2.0f), ((float)il2cpp_codegen_multiply((10.0f), ((float)il2cpp_codegen_subtract(L_2, (1.0f))))));
		return L_3;
	}

IL_0025:
	{
		float L_4 = ___0_t;
		return L_4;
	}
}
// System.Single EasingCore.Easing::<Get>g__outExpo|0_17(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outExpoU7C0_17_m2857E1F9E24BA4F8D38F7D86C36734FF124C14F3 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float outExpo(float t) => Mathf.Approximately(1.0f, t) ? t : 1f - Mathf.Pow(2f, -10f * t);
		float L_0 = ___0_t;
		bool L_1;
		L_1 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((1.0f), L_0, NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		float L_2 = ___0_t;
		float L_3;
		L_3 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), L_2)));
		return ((float)il2cpp_codegen_subtract((1.0f), L_3));
	}

IL_0025:
	{
		float L_4 = ___0_t;
		return L_4;
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutExpo|0_18(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutExpoU7C0_18_mB9D55E57B63819E00FF798D2E8A27B2CC3367C37 (float ___0_v, const RuntimeMethod* method) 
{
	{
		// Mathf.Approximately(0.0f, v) || Mathf.Approximately(1.0f, v)
		//     ? v
		//     : v < 0.5f
		//         ?  0.5f * Mathf.Pow(2f, (20f * v) - 10f)
		//         : -0.5f * Mathf.Pow(2f, (-20f * v) + 10f) + 1f;
		float L_0 = ___0_v;
		bool L_1;
		L_1 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((0.0f), L_0, NULL);
		if (L_1)
		{
			goto IL_0064;
		}
	}
	{
		float L_2 = ___0_v;
		bool L_3;
		L_3 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((1.0f), L_2, NULL);
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		float L_4 = ___0_v;
		if ((((float)L_4) < ((float)(0.5f))))
		{
			goto IL_0046;
		}
	}
	{
		float L_5 = ___0_v;
		float L_6;
		L_6 = powf((2.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-20.0f), L_5)), (10.0f))));
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-0.5f), L_6)), (1.0f)));
	}

IL_0046:
	{
		float L_7 = ___0_v;
		float L_8;
		L_8 = powf((2.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((20.0f), L_7)), (10.0f))));
		return ((float)il2cpp_codegen_multiply((0.5f), L_8));
	}

IL_0064:
	{
		float L_9 = ___0_v;
		return L_9;
	}
}
// System.Single EasingCore.Easing::<Get>g__inQuad|0_19(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inQuadU7C0_19_m3B53D2295E4C7DCA0A4ED4B15D9AEF727364761C (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inQuad(float t) => t * t;
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Single EasingCore.Easing::<Get>g__outQuad|0_20(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outQuadU7C0_20_m910E347858DD6F5B9224938A9AB199EFC1AA1658 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float outQuad(float t) => -t * (t - 2f);
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		return ((float)il2cpp_codegen_multiply(((-L_0)), ((float)il2cpp_codegen_subtract(L_1, (2.0f)))));
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutQuad|0_21(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutQuadU7C0_21_mBD63D4F52EFFC63775BA283FD0810BFB10C43A38 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// t < 0.5f
		//     ?  2f * t * t
		//     : -2f * t * t + 4f * t - 1f;
		float L_0 = ___0_t;
		if ((((float)L_0) < ((float)(0.5f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_1 = ___0_t;
		float L_2 = ___0_t;
		float L_3 = ___0_t;
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_1)), L_2)), ((float)il2cpp_codegen_multiply((4.0f), L_3)))), (1.0f)));
	}

IL_0020:
	{
		float L_4 = ___0_t;
		float L_5 = ___0_t;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_4)), L_5));
	}
}
// System.Single EasingCore.Easing::<Get>g__inQuart|0_22(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inQuartU7C0_22_m25BE3F74973F216403CA86BDF19343929E94D493 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inQuart(float t) => t * t * t * t;
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___0_t;
		float L_3 = ___0_t;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), L_3));
	}
}
// System.Single EasingCore.Easing::<Get>g__outQuart|0_23(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outQuartU7C0_23_mAAE6AEFCFB488859717CA2AC749E8D360F2FE089 (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var u = t - 1f;
		float L_0 = ___0_t;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, (1.0f)));
		// return u * u * u * (1f - t) + 1f;
		float L_1 = V_0;
		float L_2 = V_0;
		float L_3 = V_0;
		float L_4 = ___0_t;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, L_2)), L_3)), ((float)il2cpp_codegen_subtract((1.0f), L_4)))), (1.0f)));
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutQuart|0_24(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutQuartU7C0_24_mFF1CF5EB31F88EFA60766325CD88F48FE3789B0B (float ___0_t, const RuntimeMethod* method) 
{
	{
		// t < 0.5f
		//     ? 8f * inQuart(t)
		//     : -8f * inQuart(t - 1f) + 1f;
		float L_0 = ___0_t;
		if ((((float)L_0) < ((float)(0.5f))))
		{
			goto IL_0021;
		}
	}
	{
		float L_1 = ___0_t;
		float L_2;
		L_2 = Easing_U3CGetU3Eg__inQuartU7C0_22_m25BE3F74973F216403CA86BDF19343929E94D493(((float)il2cpp_codegen_subtract(L_1, (1.0f))), NULL);
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-8.0f), L_2)), (1.0f)));
	}

IL_0021:
	{
		float L_3 = ___0_t;
		float L_4;
		L_4 = Easing_U3CGetU3Eg__inQuartU7C0_22_m25BE3F74973F216403CA86BDF19343929E94D493(L_3, NULL);
		return ((float)il2cpp_codegen_multiply((8.0f), L_4));
	}
}
// System.Single EasingCore.Easing::<Get>g__inQuint|0_25(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inQuintU7C0_25_mFAD879BC8689EDD020B75983443BC45AD22D4468 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inQuint(float t) => t * t * t * t * t;
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___0_t;
		float L_3 = ___0_t;
		float L_4 = ___0_t;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), L_3)), L_4));
	}
}
// System.Single EasingCore.Easing::<Get>g__outQuint|0_26(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outQuintU7C0_26_mD9053E807F32204D7C03DD5001CDCCA02C8A2EF7 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float outQuint(float t) => inQuint(t - 1f) + 1f;
		float L_0 = ___0_t;
		float L_1;
		L_1 = Easing_U3CGetU3Eg__inQuintU7C0_25_mFAD879BC8689EDD020B75983443BC45AD22D4468(((float)il2cpp_codegen_subtract(L_0, (1.0f))), NULL);
		return ((float)il2cpp_codegen_add(L_1, (1.0f)));
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutQuint|0_27(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutQuintU7C0_27_m7AEE7777C4E8D4B717749BD6E7B699D322D7F64C (float ___0_t, const RuntimeMethod* method) 
{
	{
		// t < 0.5f
		//     ? 16f * inQuint(t)
		//     : 0.5f * inQuint(2f * t - 2f) + 1f;
		float L_0 = ___0_t;
		if ((((float)L_0) < ((float)(0.5f))))
		{
			goto IL_0027;
		}
	}
	{
		float L_1 = ___0_t;
		float L_2;
		L_2 = Easing_U3CGetU3Eg__inQuintU7C0_25_mFAD879BC8689EDD020B75983443BC45AD22D4468(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_1)), (2.0f))), NULL);
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((0.5f), L_2)), (1.0f)));
	}

IL_0027:
	{
		float L_3 = ___0_t;
		float L_4;
		L_4 = Easing_U3CGetU3Eg__inQuintU7C0_25_mFAD879BC8689EDD020B75983443BC45AD22D4468(L_3, NULL);
		return ((float)il2cpp_codegen_multiply((16.0f), L_4));
	}
}
// System.Single EasingCore.Easing::<Get>g__inSine|0_28(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inSineU7C0_28_m6CA6221073C83C308EEF6618D62EB5605EB68079 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inSine(float t) => Mathf.Sin((t - 1f) * (Mathf.PI * 0.5f)) + 1f;
		float L_0 = ___0_t;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, (1.0f))), (1.57079637f))));
		return ((float)il2cpp_codegen_add(L_1, (1.0f)));
	}
}
// System.Single EasingCore.Easing::<Get>g__outSine|0_29(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__outSineU7C0_29_mC5854463295964FFAD369857A8E44490B92A8E31 (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float outSine(float t) => Mathf.Sin(t * (Mathf.PI * 0.5f));
		float L_0 = ___0_t;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply(L_0, (1.57079637f))));
		return L_1;
	}
}
// System.Single EasingCore.Easing::<Get>g__inOutSine|0_30(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_U3CGetU3Eg__inOutSineU7C0_30_m7D248B9A971535F0390290780BA5B3FA309348ED (float ___0_t, const RuntimeMethod* method) 
{
	{
		// float inOutSine(float t) => 0.5f * (1f - Mathf.Cos(t * Mathf.PI));
		float L_0 = ___0_t;
		float L_1;
		L_1 = cosf(((float)il2cpp_codegen_multiply(L_0, (3.14159274f))));
		return ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_subtract((1.0f), L_1))));
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
// System.Void FancyScrollView.NullContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullContext__ctor_mE9B71CEC3416F1FCBAC6E8BF9697CC6506769A4D (NullContext_tEEA3DD863C3A87D4FA2791358E1290781BBE32C2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// FancyScrollView.ScrollDirection FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyScrollRectContext.get_ScrollDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FancyGridViewContext_FancyScrollView_IFancyScrollRectContext_get_ScrollDirection_m2905FA6D0DACA4A7827C0ED9935AE1341AB69B7A (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, const RuntimeMethod* method) 
{
	{
		// ScrollDirection IFancyScrollRectContext.ScrollDirection { get; set; }
		int32_t L_0 = __this->___U3CFancyScrollView_IFancyScrollRectContext_ScrollDirectionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyScrollRectContext.set_ScrollDirection(FancyScrollView.ScrollDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyGridViewContext_FancyScrollView_IFancyScrollRectContext_set_ScrollDirection_m03FE32D0946BF841B0E8AF2701B746F3D952331B (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// ScrollDirection IFancyScrollRectContext.ScrollDirection { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFancyScrollView_IFancyScrollRectContext_ScrollDirectionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Func`1<System.ValueTuple`2<System.Single,System.Single>> FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyScrollRectContext.get_CalculateScrollSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* FancyGridViewContext_FancyScrollView_IFancyScrollRectContext_get_CalculateScrollSize_m5B458163F61B88DFC456AD2EDEA2154681003A80 (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, const RuntimeMethod* method) 
{
	{
		// Func<(float ScrollSize, float ReuseMargin)> IFancyScrollRectContext.CalculateScrollSize { get; set; }
		Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* L_0 = __this->___U3CFancyScrollView_IFancyScrollRectContext_CalculateScrollSizeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyScrollRectContext.set_CalculateScrollSize(System.Func`1<System.ValueTuple`2<System.Single,System.Single>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyGridViewContext_FancyScrollView_IFancyScrollRectContext_set_CalculateScrollSize_m8D85410FA132AE7940F91DF22BAD697362883F52 (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// Func<(float ScrollSize, float ReuseMargin)> IFancyScrollRectContext.CalculateScrollSize { get; set; }
		Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* L_0 = ___0_value;
		__this->___U3CFancyScrollView_IFancyScrollRectContext_CalculateScrollSizeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFancyScrollView_IFancyScrollRectContext_CalculateScrollSizeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyCellGroupContext.get_CellTemplate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* FancyGridViewContext_FancyScrollView_IFancyCellGroupContext_get_CellTemplate_mC17F47D5CE2D7A6596B7D04A630280EDCEFCCDC1 (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, const RuntimeMethod* method) 
{
	{
		// GameObject IFancyCellGroupContext.CellTemplate { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CFancyScrollView_IFancyCellGroupContext_CellTemplateU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyCellGroupContext.set_CellTemplate(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyGridViewContext_FancyScrollView_IFancyCellGroupContext_set_CellTemplate_m2882D1B856E1CADEBA75260557ED3CB74842569C (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// GameObject IFancyCellGroupContext.CellTemplate { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CFancyScrollView_IFancyCellGroupContext_CellTemplateU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFancyScrollView_IFancyCellGroupContext_CellTemplateU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Func`1<System.Int32> FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyCellGroupContext.get_GetGroupCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* FancyGridViewContext_FancyScrollView_IFancyCellGroupContext_get_GetGroupCount_m6B6BC0EE6204E9584FC9A57D51B2E4E23CCDCEDB (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, const RuntimeMethod* method) 
{
	{
		// Func<int> IFancyCellGroupContext.GetGroupCount { get; set; }
		Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_0 = __this->___U3CFancyScrollView_IFancyCellGroupContext_GetGroupCountU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyCellGroupContext.set_GetGroupCount(System.Func`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyGridViewContext_FancyScrollView_IFancyCellGroupContext_set_GetGroupCount_mB6D91DEE04F44A3FC30C531039392A33CFB765C5 (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___0_value, const RuntimeMethod* method) 
{
	{
		// Func<int> IFancyCellGroupContext.GetGroupCount { get; set; }
		Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_0 = ___0_value;
		__this->___U3CFancyScrollView_IFancyCellGroupContext_GetGroupCountU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFancyScrollView_IFancyCellGroupContext_GetGroupCountU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Func`1<System.Single> FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyGridViewContext.get_GetStartAxisSpacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* FancyGridViewContext_FancyScrollView_IFancyGridViewContext_get_GetStartAxisSpacing_m8829B674FCB00D050BA58CB567E2870B6C8B80A7 (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, const RuntimeMethod* method) 
{
	{
		// Func<float> IFancyGridViewContext.GetStartAxisSpacing { get; set; }
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = __this->___U3CFancyScrollView_IFancyGridViewContext_GetStartAxisSpacingU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyGridViewContext.set_GetStartAxisSpacing(System.Func`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyGridViewContext_FancyScrollView_IFancyGridViewContext_set_GetStartAxisSpacing_m6F7178B23AA4860E51CEE876FCCD9D7E9C1CAD72 (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___0_value, const RuntimeMethod* method) 
{
	{
		// Func<float> IFancyGridViewContext.GetStartAxisSpacing { get; set; }
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = ___0_value;
		__this->___U3CFancyScrollView_IFancyGridViewContext_GetStartAxisSpacingU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFancyScrollView_IFancyGridViewContext_GetStartAxisSpacingU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Func`1<System.Single> FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyGridViewContext.get_GetCellSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* FancyGridViewContext_FancyScrollView_IFancyGridViewContext_get_GetCellSize_mD8BABED1F1C4DAEFF9F512EFE09B859A994DFE34 (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, const RuntimeMethod* method) 
{
	{
		// Func<float> IFancyGridViewContext.GetCellSize { get; set; }
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = __this->___U3CFancyScrollView_IFancyGridViewContext_GetCellSizeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void FancyScrollView.FancyGridViewContext::FancyScrollView.IFancyGridViewContext.set_GetCellSize(System.Func`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyGridViewContext_FancyScrollView_IFancyGridViewContext_set_GetCellSize_mD538ABE1791E1D42F8F4610AA356962191990EE5 (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___0_value, const RuntimeMethod* method) 
{
	{
		// Func<float> IFancyGridViewContext.GetCellSize { get; set; }
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_0 = ___0_value;
		__this->___U3CFancyScrollView_IFancyGridViewContext_GetCellSizeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFancyScrollView_IFancyGridViewContext_GetCellSizeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void FancyScrollView.FancyGridViewContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyGridViewContext__ctor_m30F17221123EAD5F13222A130084AC0049819CD1 (FancyGridViewContext_t1FEB5087BB3DBA30668BF288C121FD42E7999130* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single FancyScrollView.Scroller::get_ViewportSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_get_ViewportSize_m73954B58ED140B23F2C0CDD1972B567F3B4B7308 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public float ViewportSize => scrollDirection == ScrollDirection.Horizontal
		//     ? viewport.rect.size.x
		//     : viewport.rect.size.y;
		int32_t L_0 = __this->___scrollDirection_5;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___viewport_4;
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		float L_4 = L_3.___y_1;
		return L_4;
	}

IL_0022:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___viewport_4;
		NullCheck(L_5);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_5, NULL);
		V_0 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_0), NULL);
		float L_8 = L_7.___x_0;
		return L_8;
	}
}
// FancyScrollView.ScrollDirection FancyScrollView.Scroller::get_ScrollDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scroller_get_ScrollDirection_m79B2545AFC4EABCD984CDB270DAD1DE84D105F36 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// public ScrollDirection ScrollDirection => scrollDirection;
		int32_t L_0 = __this->___scrollDirection_5;
		return L_0;
	}
}
// FancyScrollView.MovementType FancyScrollView.Scroller::get_MovementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scroller_get_MovementType_m96BDD2F4C05F5D0DFFE4AA61949DCC13F3110577 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// get => movementType;
		int32_t L_0 = __this->___movementType_6;
		return L_0;
	}
}
// System.Void FancyScrollView.Scroller::set_MovementType(FancyScrollView.MovementType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_set_MovementType_m1B641376891B05DAB8192122E291456F49FC771B (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => movementType = value;
		int32_t L_0 = ___0_value;
		__this->___movementType_6 = L_0;
		return;
	}
}
// System.Single FancyScrollView.Scroller::get_Elasticity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_get_Elasticity_m1CFD6A4A26C0F2CB1BEA6BE5FA43C289851EC2DC (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// get => elasticity;
		float L_0 = __this->___elasticity_7;
		return L_0;
	}
}
// System.Void FancyScrollView.Scroller::set_Elasticity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_set_Elasticity_mD67E0223144DC842BFC7D75A6AE6DB38F9D05914 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => elasticity = value;
		float L_0 = ___0_value;
		__this->___elasticity_7 = L_0;
		return;
	}
}
// System.Single FancyScrollView.Scroller::get_ScrollSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_get_ScrollSensitivity_mAD904EBCF154995E154346DEE7C9B5233D81E666 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// get => scrollSensitivity;
		float L_0 = __this->___scrollSensitivity_8;
		return L_0;
	}
}
// System.Void FancyScrollView.Scroller::set_ScrollSensitivity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_set_ScrollSensitivity_m45C918DA416C30BE8D1103F9E91F47442F82F481 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => scrollSensitivity = value;
		float L_0 = ___0_value;
		__this->___scrollSensitivity_8 = L_0;
		return;
	}
}
// System.Boolean FancyScrollView.Scroller::get_Inertia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scroller_get_Inertia_mEC2E0AEDF2038AEEE50F30DBBAF759814259881E (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// get => inertia;
		bool L_0 = __this->___inertia_9;
		return L_0;
	}
}
// System.Void FancyScrollView.Scroller::set_Inertia(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_set_Inertia_m2C2E456F1CC9C3D1B768C6427EE18EC03C9ABE4C (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => inertia = value;
		bool L_0 = ___0_value;
		__this->___inertia_9 = L_0;
		return;
	}
}
// System.Single FancyScrollView.Scroller::get_DecelerationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_get_DecelerationRate_mEF0DEDCD969277679EFF69F0B5154B6E041548BC (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// get => decelerationRate;
		float L_0 = __this->___decelerationRate_10;
		return L_0;
	}
}
// System.Void FancyScrollView.Scroller::set_DecelerationRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_set_DecelerationRate_mCCE5753D10891351BBAF0BB1FD2AAF55DC9F88ED (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => decelerationRate = value;
		float L_0 = ___0_value;
		__this->___decelerationRate_10 = L_0;
		return;
	}
}
// System.Boolean FancyScrollView.Scroller::get_SnapEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scroller_get_SnapEnabled_mCF56A7B5DF3B67F8C6C732CD1097AD3AE673597D (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// get => snap.Enable;
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_0 = __this->___snap_11;
		NullCheck(L_0);
		bool L_1 = L_0->___Enable_0;
		return L_1;
	}
}
// System.Void FancyScrollView.Scroller::set_SnapEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_set_SnapEnabled_m30D7270B22EB8E346E9E7BAB143F5FCCED1E9C4C (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => snap.Enable = value;
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_0 = __this->___snap_11;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___Enable_0 = L_1;
		return;
	}
}
// System.Boolean FancyScrollView.Scroller::get_Draggable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scroller_get_Draggable_m8C2AEACD9141A836CCB572FF5DC3E50AB6A0139E (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// get => draggable;
		bool L_0 = __this->___draggable_12;
		return L_0;
	}
}
// System.Void FancyScrollView.Scroller::set_Draggable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_set_Draggable_m076869E09C05E6B0FF3D412FEBAFDD0A29692435 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set => draggable = value;
		bool L_0 = ___0_value;
		__this->___draggable_12 = L_0;
		return;
	}
}
// UnityEngine.UI.Scrollbar FancyScrollView.Scroller::get_Scrollbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* Scroller_get_Scrollbar_m9A65D0A7FB409C8EBEF5055DB9FDDEDDF7796546 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// public Scrollbar Scrollbar => scrollbar;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0 = __this->___scrollbar_13;
		return L_0;
	}
}
// System.Single FancyScrollView.Scroller::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_get_Position_m7853DA97B7DC8E61A368751EC17760D22068D93D (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	{
		// get => currentPosition;
		float L_0 = __this->___currentPosition_20;
		return L_0;
	}
}
// System.Void FancyScrollView.Scroller::set_Position(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_set_Position_m88AEC11769BFB6B3BAEC5C1CBC7CE135BD0B49F8 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// autoScrollState.Reset();
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_0 = __this->___autoScrollState_14;
		NullCheck(L_0);
		AutoScrollState_Reset_m951BEC0437095B54C454478B882A31987D0DC344(L_0, NULL);
		// velocity = 0f;
		__this->___velocity_25 = (0.0f);
		// dragging = false;
		__this->___dragging_24 = (bool)0;
		// UpdatePosition(value);
		float L_1 = ___0_value;
		Scroller_UpdatePosition_m78FB1F9D91A41E3A62BD6A81FC3F25ADBC6B3FC2(__this, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_Start_m01D5D24FF856C1AB80A0DDFBE2E106A0EC04A467 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scroller_U3CStartU3Eb__55_0_m0817F2396FF8D04C664BF1EA1B458F61557B1239_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45(__this, NULL);
		// if (scrollbar)
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_0 = __this->___scrollbar_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// scrollbar.onValueChanged.AddListener(x => UpdatePosition(x * (totalCount - 1f), false));
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_2 = __this->___scrollbar_13;
		NullCheck(L_2);
		ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* L_3;
		L_3 = Scrollbar_get_onValueChanged_m14356CECC1A2BA96576EB73279AF2ECF28B26D6A_inline(L_2, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_4 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_4, __this, (intptr_t)((void*)Scroller_U3CStartU3Eb__55_0_m0817F2396FF8D04C664BF1EA1B458F61557B1239_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_3, L_4, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller::OnValueChanged(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_OnValueChanged_mE2F151B2430D9A6B68D117CE47D1ADA9425FDF80 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___0_callback, const RuntimeMethod* method) 
{
	{
		// public void OnValueChanged(Action<float> callback) => onValueChanged = callback;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = ___0_callback;
		__this->___onValueChanged_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueChanged_15), (void*)L_0);
		return;
	}
}
// System.Void FancyScrollView.Scroller::OnSelectionChanged(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_OnSelectionChanged_mB17F8A0C42B585AD1F454B0CC2FC86905801B46B (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_callback, const RuntimeMethod* method) 
{
	{
		// public void OnSelectionChanged(Action<int> callback) => onSelectionChanged = callback;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ___0_callback;
		__this->___onSelectionChanged_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onSelectionChanged_16), (void*)L_0);
		return;
	}
}
// System.Void FancyScrollView.Scroller::SetTotalCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_SetTotalCount_m33FDB34A2FCED57615027689116473682C06FA49 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, int32_t ___0_totalCount, const RuntimeMethod* method) 
{
	{
		// public void SetTotalCount(int totalCount) => this.totalCount = totalCount;
		int32_t L_0 = ___0_totalCount;
		__this->___totalCount_21 = L_0;
		return;
	}
}
// System.Void FancyScrollView.Scroller::ScrollTo(System.Single,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_ScrollTo_m5DA9701B4A23AB8BCF5F6724F9C92FD9B371B3A2 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_position, float ___1_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_onComplete, const RuntimeMethod* method) 
{
	{
		// public void ScrollTo(float position, float duration, Action onComplete = null) => ScrollTo(position, duration, Ease.OutCubic, onComplete);
		float L_0 = ___0_position;
		float L_1 = ___1_duration;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___2_onComplete;
		Scroller_ScrollTo_mCCBCE347467C40FED6CC6CA362C10BC271168FE6(__this, L_0, L_1, ((int32_t)14), L_2, NULL);
		return;
	}
}
// System.Void FancyScrollView.Scroller::ScrollTo(System.Single,System.Single,EasingCore.Ease,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_ScrollTo_mCCBCE347467C40FED6CC6CA362C10BC271168FE6 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_position, float ___1_duration, int32_t ___2_easing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) 
{
	{
		// public void ScrollTo(float position, float duration, Ease easing, Action onComplete = null) => ScrollTo(position, duration, Easing.Get(easing), onComplete);
		float L_0 = ___0_position;
		float L_1 = ___1_duration;
		int32_t L_2 = ___2_easing;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_3;
		L_3 = Easing_Get_mF6D5893FD33B3852B9513505923A45D650A3C9F1(L_2, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___3_onComplete;
		Scroller_ScrollTo_m47FB24609EF847FB9C058E2F0901CFF88790CAD0(__this, L_0, L_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void FancyScrollView.Scroller::ScrollTo(System.Single,System.Single,EasingCore.EasingFunction,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_ScrollTo_m47FB24609EF847FB9C058E2F0901CFF88790CAD0 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_position, float ___1_duration, EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* ___2_easingFunction, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* G_B6_0 = NULL;
	AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* G_B6_1 = NULL;
	EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* G_B5_0 = NULL;
	AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* G_B5_1 = NULL;
	{
		// if (duration <= 0f)
		float L_0 = ___1_duration;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// Position = CircularPosition(position, totalCount);
		float L_1 = ___0_position;
		int32_t L_2 = __this->___totalCount_21;
		float L_3;
		L_3 = Scroller_CircularPosition_mDA84A33E1D973E10A3FDFCE96A09808900FC59A2(__this, L_1, L_2, NULL);
		Scroller_set_Position_m88AEC11769BFB6B3BAEC5C1CBC7CE135BD0B49F8(__this, L_3, NULL);
		// onComplete?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___3_onComplete;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___3_onComplete;
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
	}

IL_0026:
	{
		// return;
		return;
	}

IL_0027:
	{
		// autoScrollState.Reset();
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_6 = __this->___autoScrollState_14;
		NullCheck(L_6);
		AutoScrollState_Reset_m951BEC0437095B54C454478B882A31987D0DC344(L_6, NULL);
		// autoScrollState.Enable = true;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_7 = __this->___autoScrollState_14;
		NullCheck(L_7);
		L_7->___Enable_0 = (bool)1;
		// autoScrollState.Duration = duration;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_8 = __this->___autoScrollState_14;
		float L_9 = ___1_duration;
		NullCheck(L_8);
		L_8->___Duration_2 = L_9;
		// autoScrollState.EasingFunction = easingFunction ?? DefaultEasingFunction;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_10 = __this->___autoScrollState_14;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_11 = ___2_easingFunction;
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_12 = L_11;
		G_B5_0 = L_12;
		G_B5_1 = L_10;
		if (L_12)
		{
			G_B6_0 = L_12;
			G_B6_1 = L_10;
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var);
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_13 = ((Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_StaticFields*)il2cpp_codegen_static_fields_for(Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var))->___DefaultEasingFunction_26;
		G_B6_0 = L_13;
		G_B6_1 = G_B5_1;
	}

IL_005a:
	{
		NullCheck(G_B6_1);
		G_B6_1->___EasingFunction_3 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___EasingFunction_3), (void*)G_B6_0);
		// autoScrollState.StartTime = Time.unscaledTime;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_14 = __this->___autoScrollState_14;
		float L_15;
		L_15 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		NullCheck(L_14);
		L_14->___StartTime_4 = L_15;
		// autoScrollState.EndPosition = currentPosition + CalculateMovementAmount(currentPosition, position);
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_16 = __this->___autoScrollState_14;
		float L_17 = __this->___currentPosition_20;
		float L_18 = __this->___currentPosition_20;
		float L_19 = ___0_position;
		float L_20;
		L_20 = Scroller_CalculateMovementAmount_m7A9E3DA2D15508BBF1C3699B853C75C9A1A0BF15(__this, L_18, L_19, NULL);
		NullCheck(L_16);
		L_16->___EndPosition_5 = ((float)il2cpp_codegen_add(L_17, L_20));
		// autoScrollState.OnComplete = onComplete;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_21 = __this->___autoScrollState_14;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = ___3_onComplete;
		NullCheck(L_21);
		L_21->___OnComplete_6 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___OnComplete_6), (void*)L_22);
		// velocity = 0f;
		__this->___velocity_25 = (0.0f);
		// scrollStartPosition = currentPosition;
		float L_23 = __this->___currentPosition_20;
		__this->___scrollStartPosition_18 = L_23;
		// UpdateSelection(Mathf.RoundToInt(CircularPosition(autoScrollState.EndPosition, totalCount)));
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_24 = __this->___autoScrollState_14;
		NullCheck(L_24);
		float L_25 = L_24->___EndPosition_5;
		int32_t L_26 = __this->___totalCount_21;
		float L_27;
		L_27 = Scroller_CircularPosition_mDA84A33E1D973E10A3FDFCE96A09808900FC59A2(__this, L_25, L_26, NULL);
		int32_t L_28;
		L_28 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_27, NULL);
		Scroller_UpdateSelection_mD6054773E984A26C9CF5001943288C641DC2BF66(__this, L_28, NULL);
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller::JumpTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_JumpTo_mCE2FFEFB5D3F325F669AC8B4C57013CDE6A2BDF6 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// if (index < 0 || index > totalCount - 1)
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___totalCount_21;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		// throw new ArgumentOutOfRangeException(nameof(index));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Scroller_JumpTo_mCE2FFEFB5D3F325F669AC8B4C57013CDE6A2BDF6_RuntimeMethod_var)));
	}

IL_001a:
	{
		// UpdateSelection(index);
		int32_t L_4 = ___0_index;
		Scroller_UpdateSelection_mD6054773E984A26C9CF5001943288C641DC2BF66(__this, L_4, NULL);
		// Position = index;
		int32_t L_5 = ___0_index;
		Scroller_set_Position_m88AEC11769BFB6B3BAEC5C1CBC7CE135BD0B49F8(__this, ((float)L_5), NULL);
		// }
		return;
	}
}
// FancyScrollView.MovementDirection FancyScrollView.Scroller::GetMovementDirection(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scroller_GetMovementDirection_mBC481CCE2436DE9E6DA880A543F98C6F77C871A8 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, int32_t ___0_sourceIndex, int32_t ___1_destIndex, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var movementAmount = CalculateMovementAmount(sourceIndex, destIndex);
		int32_t L_0 = ___0_sourceIndex;
		int32_t L_1 = ___1_destIndex;
		float L_2;
		L_2 = Scroller_CalculateMovementAmount_m7A9E3DA2D15508BBF1C3699B853C75C9A1A0BF15(__this, ((float)L_0), ((float)L_1), NULL);
		V_0 = L_2;
		// return scrollDirection == ScrollDirection.Horizontal
		//     ? movementAmount > 0
		//         ? MovementDirection.Left
		//         : MovementDirection.Right
		//     : movementAmount > 0
		//         ? MovementDirection.Up
		//         : MovementDirection.Down;
		int32_t L_3 = __this->___scrollDirection_5;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		float L_4 = V_0;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(3);
	}

IL_001e:
	{
		return (int32_t)(2);
	}

IL_0020:
	{
		float L_5 = V_0;
		if ((((float)L_5) > ((float)(0.0f))))
		{
			goto IL_002a;
		}
	}
	{
		return (int32_t)(1);
	}

IL_002a:
	{
		return (int32_t)(0);
	}
}
// System.Void FancyScrollView.Scroller::UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_mDE43DA9D746DFC5CCA84EC5B9AC90CF0FD564946 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if (!draggable || eventData.button != PointerEventData.InputButton.Left)
		bool L_0 = __this->___draggable_12;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// hold = true;
		__this->___hold_22 = (bool)1;
		// velocity = 0f;
		__this->___velocity_25 = (0.0f);
		// autoScrollState.Reset();
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_3 = __this->___autoScrollState_14;
		NullCheck(L_3);
		AutoScrollState_Reset_m951BEC0437095B54C454478B882A31987D0DC344(L_3, NULL);
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller::UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m5C1BDB0773A396DE8D7D42F325E4A93EF4FE4613 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if (!draggable || eventData.button != PointerEventData.InputButton.Left)
		bool L_0 = __this->___draggable_12;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// if (hold && snap.Enable)
		bool L_3 = __this->___hold_22;
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_4 = __this->___snap_11;
		NullCheck(L_4);
		bool L_5 = L_4->___Enable_0;
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		// UpdateSelection(Mathf.RoundToInt(CircularPosition(currentPosition, totalCount)));
		float L_6 = __this->___currentPosition_20;
		int32_t L_7 = __this->___totalCount_21;
		float L_8;
		L_8 = Scroller_CircularPosition_mDA84A33E1D973E10A3FDFCE96A09808900FC59A2(__this, L_6, L_7, NULL);
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_8, NULL);
		Scroller_UpdateSelection_mD6054773E984A26C9CF5001943288C641DC2BF66(__this, L_9, NULL);
		// ScrollTo(Mathf.RoundToInt(currentPosition), snap.Duration, snap.Easing);
		float L_10 = __this->___currentPosition_20;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_10, NULL);
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_12 = __this->___snap_11;
		NullCheck(L_12);
		float L_13 = L_12->___Duration_2;
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_14 = __this->___snap_11;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Easing_3;
		Scroller_ScrollTo_mCCBCE347467C40FED6CC6CA362C10BC271168FE6(__this, ((float)L_11), L_13, L_15, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_006c:
	{
		// hold = false;
		__this->___hold_22 = (bool)0;
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller::UnityEngine.EventSystems.IScrollHandler.OnScroll(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UnityEngine_EventSystems_IScrollHandler_OnScroll_m7D30A98F963A5F9E018A7EE7FF6CD9E69208FF36 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B9_0 = 0.0f;
	{
		// if (!draggable)
		bool L_0 = __this->___draggable_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var delta = eventData.scrollDelta;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline(L_1, NULL);
		V_0 = L_2;
		// delta.y *= -1;
		float* L_3 = (&(&V_0)->___y_1);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply(L_5, (-1.0f)));
		// var scrollDelta = scrollDirection == ScrollDirection.Horizontal
		//     ? Mathf.Abs(delta.y) > Mathf.Abs(delta.x)
		//             ? delta.y
		//             : delta.x
		//     : Mathf.Abs(delta.x) > Mathf.Abs(delta.y)
		//             ? delta.x
		//             : delta.y;
		int32_t L_6 = __this->___scrollDirection_5;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___x_0;
		float L_9;
		L_9 = fabsf(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___y_1;
		float L_12;
		L_12 = fabsf(L_11);
		if ((((float)L_9) > ((float)L_12)))
		{
			goto IL_0049;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		G_B9_0 = L_14;
		goto IL_0077;
	}

IL_0049:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		float L_16 = L_15.___x_0;
		G_B9_0 = L_16;
		goto IL_0077;
	}

IL_0051:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		float L_18 = L_17.___y_1;
		float L_19;
		L_19 = fabsf(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		float L_21 = L_20.___x_0;
		float L_22;
		L_22 = fabsf(L_21);
		if ((((float)L_19) > ((float)L_22)))
		{
			goto IL_0071;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		float L_24 = L_23.___x_0;
		G_B9_0 = L_24;
		goto IL_0077;
	}

IL_0071:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		float L_26 = L_25.___y_1;
		G_B9_0 = L_26;
	}

IL_0077:
	{
		V_1 = G_B9_0;
		// if (eventData.IsScrolling())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_27 = ___0_eventData;
		NullCheck(L_27);
		bool L_28;
		L_28 = PointerEventData_IsScrolling_mFB78E050A248CDF5221482334808B82500D0A564(L_27, NULL);
		if (!L_28)
		{
			goto IL_0087;
		}
	}
	{
		// scrolling = true;
		__this->___scrolling_23 = (bool)1;
	}

IL_0087:
	{
		// var position = currentPosition + scrollDelta / ViewportSize * scrollSensitivity;
		float L_29 = __this->___currentPosition_20;
		float L_30 = V_1;
		float L_31;
		L_31 = Scroller_get_ViewportSize_m73954B58ED140B23F2C0CDD1972B567F3B4B7308(__this, NULL);
		float L_32 = __this->___scrollSensitivity_8;
		V_2 = ((float)il2cpp_codegen_add(L_29, ((float)il2cpp_codegen_multiply(((float)(L_30/L_31)), L_32))));
		// if (movementType == MovementType.Clamped)
		int32_t L_33 = __this->___movementType_6;
		if ((!(((uint32_t)L_33) == ((uint32_t)2))))
		{
			goto IL_00b1;
		}
	}
	{
		// position += CalculateOffset(position);
		float L_34 = V_2;
		float L_35 = V_2;
		float L_36;
		L_36 = Scroller_CalculateOffset_m4932699F35DDD31DCB400AA8CA1021650BD0FA3A(__this, L_35, NULL);
		V_2 = ((float)il2cpp_codegen_add(L_34, L_36));
	}

IL_00b1:
	{
		// if (autoScrollState.Enable)
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_37 = __this->___autoScrollState_14;
		NullCheck(L_37);
		bool L_38 = L_37->___Enable_0;
		if (!L_38)
		{
			goto IL_00c9;
		}
	}
	{
		// autoScrollState.Reset();
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_39 = __this->___autoScrollState_14;
		NullCheck(L_39);
		AutoScrollState_Reset_m951BEC0437095B54C454478B882A31987D0DC344(L_39, NULL);
	}

IL_00c9:
	{
		// UpdatePosition(position);
		float L_40 = V_2;
		Scroller_UpdatePosition_m78FB1F9D91A41E3A62BD6A81FC3F25ADBC6B3FC2(__this, L_40, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller::UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag_m86A7C848E473BA82114CE4282F610D2474A4FD7D (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!draggable || eventData.button != PointerEventData.InputButton.Left)
		bool L_0 = __this->___draggable_12;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// hold = false;
		__this->___hold_22 = (bool)0;
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(
		//     viewport,
		//     eventData.position,
		//     eventData.pressEventCamera,
		//     out beginDragPointerPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___viewport_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_eventData;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_4, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___0_eventData;
		NullCheck(L_6);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___beginDragPointerPosition_17);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_3, L_5, L_7, L_8, NULL);
		// scrollStartPosition = currentPosition;
		float L_10 = __this->___currentPosition_20;
		__this->___scrollStartPosition_18 = L_10;
		// dragging = true;
		__this->___dragging_24 = (bool)1;
		// autoScrollState.Reset();
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_11 = __this->___autoScrollState_14;
		NullCheck(L_11);
		AutoScrollState_Reset_m951BEC0437095B54C454478B882A31987D0DC344(L_11, NULL);
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller::UnityEngine.EventSystems.IDragHandler.OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UnityEngine_EventSystems_IDragHandler_OnDrag_mDF4E365CE0F3E1D75F9B2C813B03A228C44C3E40 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float G_B9_0 = 0.0f;
	{
		// if (!draggable || eventData.button != PointerEventData.InputButton.Left || !dragging)
		bool L_0 = __this->___draggable_12;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = __this->___dragging_24;
		if (L_3)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		// return;
		return;
	}

IL_0019:
	{
		// if (!RectTransformUtility.ScreenPointToLocalPointInRectangle(
		//     viewport,
		//     eventData.position,
		//     eventData.pressEventCamera,
		//     out var dragPointerPosition))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___viewport_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___0_eventData;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_5, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___0_eventData;
		NullCheck(L_7);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_4, L_6, L_8, (&V_0), NULL);
		if (L_9)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		return;
	}

IL_0035:
	{
		// var pointerDelta = dragPointerPosition - beginDragPointerPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___beginDragPointerPosition_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_11, NULL);
		V_1 = L_12;
		// var position = (scrollDirection == ScrollDirection.Horizontal ? -pointerDelta.x : pointerDelta.y)
		//                / ViewportSize
		//                * scrollSensitivity
		//                + scrollStartPosition;
		int32_t L_13 = __this->___scrollDirection_5;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		float L_15 = L_14.___y_1;
		G_B9_0 = L_15;
		goto IL_005a;
	}

IL_0053:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		float L_17 = L_16.___x_0;
		G_B9_0 = ((-L_17));
	}

IL_005a:
	{
		float L_18;
		L_18 = Scroller_get_ViewportSize_m73954B58ED140B23F2C0CDD1972B567F3B4B7308(__this, NULL);
		float L_19 = __this->___scrollSensitivity_8;
		float L_20 = __this->___scrollStartPosition_18;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(G_B9_0/L_18)), L_19)), L_20));
		// var offset = CalculateOffset(position);
		float L_21 = V_2;
		float L_22;
		L_22 = Scroller_CalculateOffset_m4932699F35DDD31DCB400AA8CA1021650BD0FA3A(__this, L_21, NULL);
		V_3 = L_22;
		// position += offset;
		float L_23 = V_2;
		float L_24 = V_3;
		V_2 = ((float)il2cpp_codegen_add(L_23, L_24));
		// if (movementType == MovementType.Elastic)
		int32_t L_25 = __this->___movementType_6;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_009d;
		}
	}
	{
		// if (offset != 0f)
		float L_26 = V_3;
		if ((((float)L_26) == ((float)(0.0f))))
		{
			goto IL_009d;
		}
	}
	{
		// position -= RubberDelta(offset, scrollSensitivity);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = __this->___scrollSensitivity_8;
		float L_30;
		L_30 = Scroller_RubberDelta_m25911960A358F1D09AFF5A206F5C4E15750975FF(__this, L_28, L_29, NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_27, L_30));
	}

IL_009d:
	{
		// UpdatePosition(position);
		float L_31 = V_2;
		Scroller_UpdatePosition_m78FB1F9D91A41E3A62BD6A81FC3F25ADBC6B3FC2(__this, L_31, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller::UnityEngine.EventSystems.IEndDragHandler.OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UnityEngine_EventSystems_IEndDragHandler_OnEndDrag_mBFD8AED828B6F4BFCFD06B169CEB4C3C3259DFCE (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if (!draggable || eventData.button != PointerEventData.InputButton.Left)
		bool L_0 = __this->___draggable_12;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// dragging = false;
		__this->___dragging_24 = (bool)0;
		// }
		return;
	}
}
// System.Single FancyScrollView.Scroller::CalculateOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_CalculateOffset_m4932699F35DDD31DCB400AA8CA1021650BD0FA3A (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_position, const RuntimeMethod* method) 
{
	{
		// if (movementType == MovementType.Unrestricted)
		int32_t L_0 = __this->___movementType_6;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_000e:
	{
		// if (position < 0f)
		float L_1 = ___0_position;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0019;
		}
	}
	{
		// return -position;
		float L_2 = ___0_position;
		return ((-L_2));
	}

IL_0019:
	{
		// if (position > totalCount - 1)
		float L_3 = ___0_position;
		int32_t L_4 = __this->___totalCount_21;
		if ((!(((float)L_3) > ((float)((float)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))))
		{
			goto IL_0031;
		}
	}
	{
		// return totalCount - 1 - position;
		int32_t L_5 = __this->___totalCount_21;
		float L_6 = ___0_position;
		return ((float)il2cpp_codegen_subtract(((float)((int32_t)il2cpp_codegen_subtract(L_5, 1))), L_6));
	}

IL_0031:
	{
		// return 0f;
		return (0.0f);
	}
}
// System.Void FancyScrollView.Scroller::UpdatePosition(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UpdatePosition_m78FB1F9D91A41E3A62BD6A81FC3F25ADBC6B3FC2 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_position, bool ___1_updateScrollbar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B2_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B1_0 = NULL;
	{
		// onValueChanged?.Invoke(currentPosition = position);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___onValueChanged_15;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_001b;
	}

IL_000c:
	{
		float L_2 = ___0_position;
		float L_3 = L_2;
		V_0 = L_3;
		__this->___currentPosition_20 = L_3;
		float L_4 = V_0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(G_B2_0, L_4, NULL);
	}

IL_001b:
	{
		// if (scrollbar && updateScrollbar)
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_5 = __this->___scrollbar_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		bool L_7 = ___1_updateScrollbar;
		if (!((int32_t)((int32_t)L_6&(int32_t)L_7)))
		{
			goto IL_0053;
		}
	}
	{
		// scrollbar.value = Mathf.Clamp01(position / Mathf.Max(totalCount - 1f, 1e-4f));
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_8 = __this->___scrollbar_13;
		float L_9 = ___0_position;
		int32_t L_10 = __this->___totalCount_21;
		float L_11;
		L_11 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(((float)L_10), (1.0f))), (9.99999975E-05f), NULL);
		float L_12;
		L_12 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_9/L_11)), NULL);
		NullCheck(L_8);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_8, L_12, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller::UpdateSelection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_UpdateSelection_mD6054773E984A26C9CF5001943288C641DC2BF66 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B2_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B1_0 = NULL;
	{
		// void UpdateSelection(int index) => onSelectionChanged?.Invoke(index);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___onSelectionChanged_16;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___0_index;
		NullCheck(G_B2_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B2_0, L_2, NULL);
		return;
	}
}
// System.Single FancyScrollView.Scroller::RubberDelta(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_RubberDelta_m25911960A358F1D09AFF5A206F5C4E15750975FF (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_overStretching, float ___1_viewSize, const RuntimeMethod* method) 
{
	{
		// (1 - 1 / (Mathf.Abs(overStretching) * 0.55f / viewSize + 1)) * viewSize * Mathf.Sign(overStretching);
		float L_0 = ___0_overStretching;
		float L_1;
		L_1 = fabsf(L_0);
		float L_2 = ___1_viewSize;
		float L_3 = ___1_viewSize;
		float L_4 = ___0_overStretching;
		float L_5;
		L_5 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_4, NULL);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(L_1, (0.550000012f)))/L_2)), (1.0f))))))), L_3)), L_5));
	}
}
// System.Void FancyScrollView.Scroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_Update_m1F4BC59FCE097762F73FAEEA678FE49CC0B869F8 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// var deltaTime = Time.unscaledDeltaTime;
		float L_0;
		L_0 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		V_0 = L_0;
		// var offset = CalculateOffset(currentPosition);
		float L_1 = __this->___currentPosition_20;
		float L_2;
		L_2 = Scroller_CalculateOffset_m4932699F35DDD31DCB400AA8CA1021650BD0FA3A(__this, L_1, NULL);
		V_1 = L_2;
		// if (autoScrollState.Enable)
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_3 = __this->___autoScrollState_14;
		NullCheck(L_3);
		bool L_4 = L_3->___Enable_0;
		if (!L_4)
		{
			goto IL_0119;
		}
	}
	{
		// var position = 0f;
		V_2 = (0.0f);
		// if (autoScrollState.Elastic)
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_5 = __this->___autoScrollState_14;
		NullCheck(L_5);
		bool L_6 = L_5->___Elastic_1;
		if (!L_6)
		{
			goto IL_009f;
		}
	}
	{
		// position = Mathf.SmoothDamp(currentPosition, currentPosition + offset, ref velocity,
		//     elasticity, Mathf.Infinity, deltaTime);
		float L_7 = __this->___currentPosition_20;
		float L_8 = __this->___currentPosition_20;
		float L_9 = V_1;
		float* L_10 = (&__this->___velocity_25);
		float L_11 = __this->___elasticity_7;
		float L_12 = V_0;
		float L_13;
		L_13 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_7, ((float)il2cpp_codegen_add(L_8, L_9)), L_10, L_11, (std::numeric_limits<float>::infinity()), L_12, NULL);
		V_2 = L_13;
		// if (Mathf.Abs(velocity) < 0.01f)
		float L_14 = __this->___velocity_25;
		float L_15;
		L_15 = fabsf(L_14);
		if ((!(((float)L_15) < ((float)(0.00999999978f)))))
		{
			goto IL_010c;
		}
	}
	{
		// position = Mathf.Clamp(Mathf.RoundToInt(position), 0, totalCount - 1);
		float L_16 = V_2;
		int32_t L_17;
		L_17 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_16, NULL);
		int32_t L_18 = __this->___totalCount_21;
		int32_t L_19;
		L_19 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_17, 0, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), NULL);
		V_2 = ((float)L_19);
		// velocity = 0f;
		__this->___velocity_25 = (0.0f);
		// autoScrollState.Complete();
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_20 = __this->___autoScrollState_14;
		NullCheck(L_20);
		AutoScrollState_Complete_mF6A47199CF815DEEC3F6B6FB4BCCCDC0B2249FC2(L_20, NULL);
		goto IL_010c;
	}

IL_009f:
	{
		// var alpha = Mathf.Clamp01((Time.unscaledTime - autoScrollState.StartTime)
		//                            Mathf.Max(autoScrollState.Duration, float.Epsilon));
		float L_21;
		L_21 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_22 = __this->___autoScrollState_14;
		NullCheck(L_22);
		float L_23 = L_22->___StartTime_4;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_24 = __this->___autoScrollState_14;
		NullCheck(L_24);
		float L_25 = L_24->___Duration_2;
		float L_26;
		L_26 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_25, (1.40129846E-45f), NULL);
		float L_27;
		L_27 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_21, L_23))/L_26)), NULL);
		V_3 = L_27;
		// position = Mathf.LerpUnclamped(scrollStartPosition, autoScrollState.EndPosition,
		//     autoScrollState.EasingFunction(alpha));
		float L_28 = __this->___scrollStartPosition_18;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_29 = __this->___autoScrollState_14;
		NullCheck(L_29);
		float L_30 = L_29->___EndPosition_5;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_31 = __this->___autoScrollState_14;
		NullCheck(L_31);
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_32 = L_31->___EasingFunction_3;
		float L_33 = V_3;
		NullCheck(L_32);
		float L_34;
		L_34 = EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_inline(L_32, L_33, NULL);
		float L_35;
		L_35 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_28, L_30, L_34, NULL);
		V_2 = L_35;
		// if (Mathf.Approximately(alpha, 1f))
		float L_36 = V_3;
		bool L_37;
		L_37 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_36, (1.0f), NULL);
		if (!L_37)
		{
			goto IL_010c;
		}
	}
	{
		// autoScrollState.Complete();
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_38 = __this->___autoScrollState_14;
		NullCheck(L_38);
		AutoScrollState_Complete_mF6A47199CF815DEEC3F6B6FB4BCCCDC0B2249FC2(L_38, NULL);
	}

IL_010c:
	{
		// UpdatePosition(position);
		float L_39 = V_2;
		Scroller_UpdatePosition_m78FB1F9D91A41E3A62BD6A81FC3F25ADBC6B3FC2(__this, L_39, (bool)1, NULL);
		goto IL_02ca;
	}

IL_0119:
	{
		// else if (!(dragging || scrolling) && (!Mathf.Approximately(offset, 0f) || !Mathf.Approximately(velocity, 0f)))
		bool L_40 = __this->___dragging_24;
		if (L_40)
		{
			goto IL_02ca;
		}
	}
	{
		bool L_41 = __this->___scrolling_23;
		if (L_41)
		{
			goto IL_02ca;
		}
	}
	{
		float L_42 = V_1;
		bool L_43;
		L_43 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_42, (0.0f), NULL);
		if (!L_43)
		{
			goto IL_0151;
		}
	}
	{
		float L_44 = __this->___velocity_25;
		bool L_45;
		L_45 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_44, (0.0f), NULL);
		if (L_45)
		{
			goto IL_02ca;
		}
	}

IL_0151:
	{
		// var position = currentPosition;
		float L_46 = __this->___currentPosition_20;
		V_4 = L_46;
		// if (movementType == MovementType.Elastic && !Mathf.Approximately(offset, 0f))
		int32_t L_47 = __this->___movementType_6;
		if ((!(((uint32_t)L_47) == ((uint32_t)1))))
		{
			goto IL_01b2;
		}
	}
	{
		float L_48 = V_1;
		bool L_49;
		L_49 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_48, (0.0f), NULL);
		if (L_49)
		{
			goto IL_01b2;
		}
	}
	{
		// autoScrollState.Reset();
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_50 = __this->___autoScrollState_14;
		NullCheck(L_50);
		AutoScrollState_Reset_m951BEC0437095B54C454478B882A31987D0DC344(L_50, NULL);
		// autoScrollState.Enable = true;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_51 = __this->___autoScrollState_14;
		NullCheck(L_51);
		L_51->___Enable_0 = (bool)1;
		// autoScrollState.Elastic = true;
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_52 = __this->___autoScrollState_14;
		NullCheck(L_52);
		L_52->___Elastic_1 = (bool)1;
		// UpdateSelection(Mathf.Clamp(Mathf.RoundToInt(position), 0, totalCount - 1));
		float L_53 = V_4;
		int32_t L_54;
		L_54 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_53, NULL);
		int32_t L_55 = __this->___totalCount_21;
		int32_t L_56;
		L_56 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_54, 0, ((int32_t)il2cpp_codegen_subtract(L_55, 1)), NULL);
		Scroller_UpdateSelection_mD6054773E984A26C9CF5001943288C641DC2BF66(__this, L_56, NULL);
		goto IL_025b;
	}

IL_01b2:
	{
		// else if (inertia)
		bool L_57 = __this->___inertia_9;
		if (!L_57)
		{
			goto IL_0250;
		}
	}
	{
		// velocity *= Mathf.Pow(decelerationRate, deltaTime);
		float L_58 = __this->___velocity_25;
		float L_59 = __this->___decelerationRate_10;
		float L_60 = V_0;
		float L_61;
		L_61 = powf(L_59, L_60);
		__this->___velocity_25 = ((float)il2cpp_codegen_multiply(L_58, L_61));
		// if (Mathf.Abs(velocity) < 0.001f)
		float L_62 = __this->___velocity_25;
		float L_63;
		L_63 = fabsf(L_62);
		if ((!(((float)L_63) < ((float)(0.00100000005f)))))
		{
			goto IL_01f3;
		}
	}
	{
		// velocity = 0f;
		__this->___velocity_25 = (0.0f);
	}

IL_01f3:
	{
		// position += velocity * deltaTime;
		float L_64 = V_4;
		float L_65 = __this->___velocity_25;
		float L_66 = V_0;
		V_4 = ((float)il2cpp_codegen_add(L_64, ((float)il2cpp_codegen_multiply(L_65, L_66))));
		// if (snap.Enable && Mathf.Abs(velocity) < snap.VelocityThreshold)
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_67 = __this->___snap_11;
		NullCheck(L_67);
		bool L_68 = L_67->___Enable_0;
		if (!L_68)
		{
			goto IL_025b;
		}
	}
	{
		float L_69 = __this->___velocity_25;
		float L_70;
		L_70 = fabsf(L_69);
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_71 = __this->___snap_11;
		NullCheck(L_71);
		float L_72 = L_71->___VelocityThreshold_1;
		if ((!(((float)L_70) < ((float)L_72))))
		{
			goto IL_025b;
		}
	}
	{
		// ScrollTo(Mathf.RoundToInt(currentPosition), snap.Duration, snap.Easing);
		float L_73 = __this->___currentPosition_20;
		int32_t L_74;
		L_74 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_73, NULL);
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_75 = __this->___snap_11;
		NullCheck(L_75);
		float L_76 = L_75->___Duration_2;
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_77 = __this->___snap_11;
		NullCheck(L_77);
		int32_t L_78 = L_77->___Easing_3;
		Scroller_ScrollTo_mCCBCE347467C40FED6CC6CA362C10BC271168FE6(__this, ((float)L_74), L_76, L_78, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
		goto IL_025b;
	}

IL_0250:
	{
		// velocity = 0f;
		__this->___velocity_25 = (0.0f);
	}

IL_025b:
	{
		// if (!Mathf.Approximately(velocity, 0f))
		float L_79 = __this->___velocity_25;
		bool L_80;
		L_80 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_79, (0.0f), NULL);
		if (L_80)
		{
			goto IL_02ca;
		}
	}
	{
		// if (movementType == MovementType.Clamped)
		int32_t L_81 = __this->___movementType_6;
		if ((!(((uint32_t)L_81) == ((uint32_t)2))))
		{
			goto IL_02c1;
		}
	}
	{
		// offset = CalculateOffset(position);
		float L_82 = V_4;
		float L_83;
		L_83 = Scroller_CalculateOffset_m4932699F35DDD31DCB400AA8CA1021650BD0FA3A(__this, L_82, NULL);
		V_1 = L_83;
		// position += offset;
		float L_84 = V_4;
		float L_85 = V_1;
		V_4 = ((float)il2cpp_codegen_add(L_84, L_85));
		// if (Mathf.Approximately(position, 0f) || Mathf.Approximately(position, totalCount - 1f))
		float L_86 = V_4;
		bool L_87;
		L_87 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_86, (0.0f), NULL);
		if (L_87)
		{
			goto IL_02a9;
		}
	}
	{
		float L_88 = V_4;
		int32_t L_89 = __this->___totalCount_21;
		bool L_90;
		L_90 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_88, ((float)il2cpp_codegen_subtract(((float)L_89), (1.0f))), NULL);
		if (!L_90)
		{
			goto IL_02c1;
		}
	}

IL_02a9:
	{
		// velocity = 0f;
		__this->___velocity_25 = (0.0f);
		// UpdateSelection(Mathf.RoundToInt(position));
		float L_91 = V_4;
		int32_t L_92;
		L_92 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_91, NULL);
		Scroller_UpdateSelection_mD6054773E984A26C9CF5001943288C641DC2BF66(__this, L_92, NULL);
	}

IL_02c1:
	{
		// UpdatePosition(position);
		float L_93 = V_4;
		Scroller_UpdatePosition_m78FB1F9D91A41E3A62BD6A81FC3F25ADBC6B3FC2(__this, L_93, (bool)1, NULL);
	}

IL_02ca:
	{
		// if (!autoScrollState.Enable && (dragging || scrolling) && inertia)
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_94 = __this->___autoScrollState_14;
		NullCheck(L_94);
		bool L_95 = L_94->___Enable_0;
		if (L_95)
		{
			goto IL_031a;
		}
	}
	{
		bool L_96 = __this->___dragging_24;
		if (L_96)
		{
			goto IL_02e7;
		}
	}
	{
		bool L_97 = __this->___scrolling_23;
		if (!L_97)
		{
			goto IL_031a;
		}
	}

IL_02e7:
	{
		bool L_98 = __this->___inertia_9;
		if (!L_98)
		{
			goto IL_031a;
		}
	}
	{
		// var newVelocity = (currentPosition - prevPosition) / deltaTime;
		float L_99 = __this->___currentPosition_20;
		float L_100 = __this->___prevPosition_19;
		float L_101 = V_0;
		V_5 = ((float)(((float)il2cpp_codegen_subtract(L_99, L_100))/L_101));
		// velocity = Mathf.Lerp(velocity, newVelocity, deltaTime * 10f);
		float L_102 = __this->___velocity_25;
		float L_103 = V_5;
		float L_104 = V_0;
		float L_105;
		L_105 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_102, L_103, ((float)il2cpp_codegen_multiply(L_104, (10.0f))), NULL);
		__this->___velocity_25 = L_105;
	}

IL_031a:
	{
		// prevPosition = currentPosition;
		float L_106 = __this->___currentPosition_20;
		__this->___prevPosition_19 = L_106;
		// scrolling = false;
		__this->___scrolling_23 = (bool)0;
		// }
		return;
	}
}
// System.Single FancyScrollView.Scroller::CalculateMovementAmount(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_CalculateMovementAmount_m7A9E3DA2D15508BBF1C3699B853C75C9A1A0BF15 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_sourcePosition, float ___1_destPosition, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (movementType != MovementType.Unrestricted)
		int32_t L_0 = __this->___movementType_6;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// return Mathf.Clamp(destPosition, 0, totalCount - 1) - sourcePosition;
		float L_1 = ___1_destPosition;
		int32_t L_2 = __this->___totalCount_21;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_1, (0.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_2, 1))), NULL);
		float L_4 = ___0_sourcePosition;
		return ((float)il2cpp_codegen_subtract(L_3, L_4));
	}

IL_001f:
	{
		// var amount = CircularPosition(destPosition, totalCount) - CircularPosition(sourcePosition, totalCount);
		float L_5 = ___1_destPosition;
		int32_t L_6 = __this->___totalCount_21;
		float L_7;
		L_7 = Scroller_CircularPosition_mDA84A33E1D973E10A3FDFCE96A09808900FC59A2(__this, L_5, L_6, NULL);
		float L_8 = ___0_sourcePosition;
		int32_t L_9 = __this->___totalCount_21;
		float L_10;
		L_10 = Scroller_CircularPosition_mDA84A33E1D973E10A3FDFCE96A09808900FC59A2(__this, L_8, L_9, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_10));
		// if (Mathf.Abs(amount) > totalCount * 0.5f)
		float L_11 = V_0;
		float L_12;
		L_12 = fabsf(L_11);
		int32_t L_13 = __this->___totalCount_21;
		if ((!(((float)L_12) > ((float)((float)il2cpp_codegen_multiply(((float)L_13), (0.5f)))))))
		{
			goto IL_0067;
		}
	}
	{
		// amount = Mathf.Sign(-amount) * (totalCount - Mathf.Abs(amount));
		float L_14 = V_0;
		float L_15;
		L_15 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((-L_14)), NULL);
		int32_t L_16 = __this->___totalCount_21;
		float L_17 = V_0;
		float L_18;
		L_18 = fabsf(L_17);
		V_0 = ((float)il2cpp_codegen_multiply(L_15, ((float)il2cpp_codegen_subtract(((float)L_16), L_18))));
	}

IL_0067:
	{
		// return amount;
		float L_19 = V_0;
		return L_19;
	}
}
// System.Single FancyScrollView.Scroller::CircularPosition(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scroller_CircularPosition_mDA84A33E1D973E10A3FDFCE96A09808900FC59A2 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_p, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		// float CircularPosition(float p, int size) => size < 1 ? 0 : p < 0 ? size - 1 + (p + 1) % size : p % size;
		int32_t L_0 = ___1_size;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		float L_1 = ___0_p;
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_0011;
		}
	}
	{
		float L_2 = ___0_p;
		int32_t L_3 = ___1_size;
		return (fmodf(L_2, ((float)L_3)));
	}

IL_0011:
	{
		int32_t L_4 = ___1_size;
		float L_5 = ___0_p;
		int32_t L_6 = ___1_size;
		return ((float)il2cpp_codegen_add(((float)((int32_t)il2cpp_codegen_subtract(L_4, 1))), (fmodf(((float)il2cpp_codegen_add(L_5, (1.0f))), ((float)L_6)))));
	}

IL_0021:
	{
		return (0.0f);
	}
}
// System.Void FancyScrollView.Scroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller__ctor_m66E4322377A608BAB800BF8C2DE08416997F6106 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] MovementType movementType = MovementType.Elastic;
		__this->___movementType_6 = 1;
		// [SerializeField] float elasticity = 0.1f;
		__this->___elasticity_7 = (0.100000001f);
		// [SerializeField] float scrollSensitivity = 1f;
		__this->___scrollSensitivity_8 = (1.0f);
		// [SerializeField] bool inertia = true;
		__this->___inertia_9 = (bool)1;
		// [SerializeField] float decelerationRate = 0.03f;
		__this->___decelerationRate_10 = (0.0299999993f);
		// [SerializeField] Snap snap = new Snap {
		//     Enable = true,
		//     VelocityThreshold = 0.5f,
		//     Duration = 0.3f,
		//     Easing = Ease.InOutCubic
		// };
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_0 = (Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7*)il2cpp_codegen_object_new(Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Snap__ctor_mD30C78208491AB10F7574D7620C490CF11FB2848(L_0, NULL);
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___Enable_0 = (bool)1;
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_2 = L_1;
		NullCheck(L_2);
		L_2->___VelocityThreshold_1 = (0.5f);
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_3 = L_2;
		NullCheck(L_3);
		L_3->___Duration_2 = (0.300000012f);
		Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* L_4 = L_3;
		NullCheck(L_4);
		L_4->___Easing_3 = ((int32_t)24);
		__this->___snap_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___snap_11), (void*)L_4);
		// [SerializeField] bool draggable = true;
		__this->___draggable_12 = (bool)1;
		// readonly AutoScrollState autoScrollState = new AutoScrollState();
		AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* L_5 = (AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286*)il2cpp_codegen_object_new(AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AutoScrollState__ctor_mE73045698F9AFC31C15BA0408785534DD9A12B59(L_5, NULL);
		__this->___autoScrollState_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___autoScrollState_14), (void*)L_5);
		UIBehaviour__ctor_m24C66A65DDD996E779871C6655CF11B871F11337(__this, NULL);
		return;
	}
}
// System.Void FancyScrollView.Scroller::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller__cctor_m4D8BED203D8CD79BA68CB586E650E99706302626 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly EasingFunction DefaultEasingFunction = Easing.Get(Ease.OutCubic);
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_0;
		L_0 = Easing_Get_mF6D5893FD33B3852B9513505923A45D650A3C9F1(((int32_t)14), NULL);
		((Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_StaticFields*)il2cpp_codegen_static_fields_for(Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var))->___DefaultEasingFunction_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_StaticFields*)il2cpp_codegen_static_fields_for(Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var))->___DefaultEasingFunction_26), (void*)L_0);
		return;
	}
}
// System.Void FancyScrollView.Scroller::<Start>b__55_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scroller_U3CStartU3Eb__55_0_m0817F2396FF8D04C664BF1EA1B458F61557B1239 (Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E* __this, float ___0_x, const RuntimeMethod* method) 
{
	{
		// scrollbar.onValueChanged.AddListener(x => UpdatePosition(x * (totalCount - 1f), false));
		float L_0 = ___0_x;
		int32_t L_1 = __this->___totalCount_21;
		Scroller_UpdatePosition_m78FB1F9D91A41E3A62BD6A81FC3F25ADBC6B3FC2(__this, ((float)il2cpp_codegen_multiply(L_0, ((float)il2cpp_codegen_subtract(((float)L_1), (1.0f))))), (bool)0, NULL);
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
// System.Void FancyScrollView.Scroller/Snap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Snap__ctor_mD30C78208491AB10F7574D7620C490CF11FB2848 (Snap_t1EA655F4679B081FDE7175D96710414B4303ABD7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FancyScrollView.Scroller/AutoScrollState::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoScrollState_Reset_m951BEC0437095B54C454478B882A31987D0DC344 (AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enable = false;
		__this->___Enable_0 = (bool)0;
		// Elastic = false;
		__this->___Elastic_1 = (bool)0;
		// Duration = 0f;
		__this->___Duration_2 = (0.0f);
		// StartTime = 0f;
		__this->___StartTime_4 = (0.0f);
		// EasingFunction = DefaultEasingFunction;
		il2cpp_codegen_runtime_class_init_inline(Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var);
		EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* L_0 = ((Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_StaticFields*)il2cpp_codegen_static_fields_for(Scroller_t019B8166CFA3125BC44F3AE7BDDCCAE01408D53E_il2cpp_TypeInfo_var))->___DefaultEasingFunction_26;
		__this->___EasingFunction_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EasingFunction_3), (void*)L_0);
		// EndPosition = 0f;
		__this->___EndPosition_5 = (0.0f);
		// OnComplete = null;
		__this->___OnComplete_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnComplete_6), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller/AutoScrollState::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoScrollState_Complete_mF6A47199CF815DEEC3F6B6FB4BCCCDC0B2249FC2 (AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// OnComplete?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnComplete_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		// Reset();
		AutoScrollState_Reset_m951BEC0437095B54C454478B882A31987D0DC344(__this, NULL);
		// }
		return;
	}
}
// System.Void FancyScrollView.Scroller/AutoScrollState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoScrollState__ctor_mE73045698F9AFC31C15BA0408785534DD9A12B59 (AutoScrollState_t1D0E77D151FB80787187D94F6833D33A4845C286* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// FancyScrollView.ScrollDirection FancyScrollView.FancyScrollRectContext::FancyScrollView.IFancyScrollRectContext.get_ScrollDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FancyScrollRectContext_FancyScrollView_IFancyScrollRectContext_get_ScrollDirection_m0D306FC101E29BE9F35B84D52CD9522E252608BD (FancyScrollRectContext_tA40ADF3351BAA8CA92E79C1AC0B9E38D7A02A5DF* __this, const RuntimeMethod* method) 
{
	{
		// ScrollDirection IFancyScrollRectContext.ScrollDirection { get; set; }
		int32_t L_0 = __this->___U3CFancyScrollView_IFancyScrollRectContext_ScrollDirectionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void FancyScrollView.FancyScrollRectContext::FancyScrollView.IFancyScrollRectContext.set_ScrollDirection(FancyScrollView.ScrollDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyScrollRectContext_FancyScrollView_IFancyScrollRectContext_set_ScrollDirection_m3391E73633D88C32E8190ED51029D66A83D04CE9 (FancyScrollRectContext_tA40ADF3351BAA8CA92E79C1AC0B9E38D7A02A5DF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// ScrollDirection IFancyScrollRectContext.ScrollDirection { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CFancyScrollView_IFancyScrollRectContext_ScrollDirectionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Func`1<System.ValueTuple`2<System.Single,System.Single>> FancyScrollView.FancyScrollRectContext::FancyScrollView.IFancyScrollRectContext.get_CalculateScrollSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* FancyScrollRectContext_FancyScrollView_IFancyScrollRectContext_get_CalculateScrollSize_m1860E5C9C46F713B6229F3E0C92B499130605831 (FancyScrollRectContext_tA40ADF3351BAA8CA92E79C1AC0B9E38D7A02A5DF* __this, const RuntimeMethod* method) 
{
	{
		// Func<(float ScrollSize, float ReuseMargin)> IFancyScrollRectContext.CalculateScrollSize { get; set; }
		Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* L_0 = __this->___U3CFancyScrollView_IFancyScrollRectContext_CalculateScrollSizeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void FancyScrollView.FancyScrollRectContext::FancyScrollView.IFancyScrollRectContext.set_CalculateScrollSize(System.Func`1<System.ValueTuple`2<System.Single,System.Single>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyScrollRectContext_FancyScrollView_IFancyScrollRectContext_set_CalculateScrollSize_mD0CE9815F190F36B67E19BD60F39BDC6E86F025E (FancyScrollRectContext_tA40ADF3351BAA8CA92E79C1AC0B9E38D7A02A5DF* __this, Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// Func<(float ScrollSize, float ReuseMargin)> IFancyScrollRectContext.CalculateScrollSize { get; set; }
		Func_1_tD5AFC4C656B77423256A12B72F178BCDF143DFB1* L_0 = ___0_value;
		__this->___U3CFancyScrollView_IFancyScrollRectContext_CalculateScrollSizeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFancyScrollView_IFancyScrollRectContext_CalculateScrollSizeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void FancyScrollView.FancyScrollRectContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FancyScrollRectContext__ctor_mD61FBAEF8D4D18A99F3D58F6BB1EEC91B7185A0B (FancyScrollRectContext_tA40ADF3351BAA8CA92E79C1AC0B9E38D7A02A5DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* Scrollbar_get_onValueChanged_m14356CECC1A2BA96576EB73279AF2ECF28B26D6A_inline (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, const RuntimeMethod* method) 
{
	{
		// public ScrollEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* L_0 = __this->___m_OnValueChanged_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public InputButton button { get; set; }
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 scrollDelta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CscrollDeltaU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EasingFunction_Invoke_m789D0BE816D35B0D71A5A129711FA37476A9C342_inline (EasingFunction_t3197BA60C8AEDD1780B674B96EB77E452F6BCF44* __this, float ___0_t, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_t, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
