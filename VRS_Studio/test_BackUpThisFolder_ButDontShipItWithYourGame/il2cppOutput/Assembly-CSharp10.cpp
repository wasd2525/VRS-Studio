#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Func`3<System.Boolean,System.Boolean,System.Boolean>
struct Func_3_t8405246FA4174D01D5F07F8A51737739EE5376F3;
// HTC.UnityPlugin.Utility.IndexedSet`1<HTC.UnityPlugin.Pointer3D.IRaySegmentGenerator>
struct IndexedSet_1_t623D2AEFA48F345EF33AE4ED2F97B432123D58DC;
// HTC.UnityPlugin.Utility.IndexedSet`1<HTC.UnityPlugin.Pointer3D.IRaycastMethod>
struct IndexedSet_1_t923BE4301011B8C94C049F976825EAECB9EDC234;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<HTC.UnityPlugin.Pointer3D.Pointer3DEventData>
struct List_1_tA8ACD6D3503FCD84B54164AA786F0FB3CBD55438;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// HTC.UnityPlugin.Utility.OrderedIndexedSet`1<HTC.UnityPlugin.PoseTracker.IPoseModifier>
struct OrderedIndexedSet_1_t5CDDB31339209294007125662AA63951BC498559;
// System.Collections.ObjectModel.ReadOnlyCollection`1<HTC.UnityPlugin.Pointer3D.Pointer3DEventData>
struct ReadOnlyCollection_1_t432B936F622D8DB52A7D950BEA1A6F109D73EFF0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t0A309B56589D89FCA7F4936BD28B2C8A56EBA812;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
struct ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// HTC.UnityPlugin.Pointer3D.Pointer3DEventData[]
struct Pointer3DEventDataU5BU5D_tA37442DABCD921B9B8C326E379D9C7A98D2C0CE7;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// HTC.UnityPlugin.PoseTracker.BasePoseTracker
struct BasePoseTracker_t67F44B99844E0075E7ED8007CE043A53A8A1211E;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Wave.Essence.Eye.EyeManager
struct EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HTC.UnityPlugin.Vive.GestureCustom
struct GestureCustom_tD1AD796BA9498743B56E82503690905275155C38;
// HTC.UnityPlugin.Vive.INewPoseListener
struct INewPoseListener_t8B35116BA13C01D7CA8B088C7DFE109B73B4D6D8;
// HTC.UnityPlugin.Utility.Switchable.ISwitchableGroupMemberRegisteredHandler
struct ISwitchableGroupMemberRegisteredHandler_t49821E41C1061DDCFF3F21BACADF98DF14C91A64;
// HTC.UnityPlugin.Utility.Switchable.ISwitchableGroupMemberUnregisteredHandler
struct ISwitchableGroupMemberUnregisteredHandler_t18402EA179EABFAE4603FF777CE05889B4BBF2B8;
// HTC.UnityPlugin.Utility.Switchable.ISwitchableGroupStatusChangedHandler
struct ISwitchableGroupStatusChangedHandler_t3B27413BF60BAED4F685BB8720C123C993FD4B82;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// HTC.UnityPlugin.Pointer3D.Pointer3DEventData
struct Pointer3DEventData_t07CBD4C4C98C89D987DA1F25E08556F75AC31B86;
// HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster
struct Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// HTC.UnityPlugin.Utility.Switchable.Switchable
struct Switchable_tAC69CDB34CA5A663C6675B6A8F6F307A9CFEDA40;
// HTC.UnityPlugin.Utility.Switchable.SwitchableGroup
struct SwitchableGroup_t3A3034684BC069EF199C6D2898EEA46AE16143E6;
// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour
struct SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51;
// HTC.UnityPlugin.Pointer3D.TouchRaycaster
struct TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker
struct WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6;
// Wave.XR.Settings.WaveXRSettings
struct WaveXRSettings_tB7B3965473BD9DCA252DE141A35536CDF70319D3;
// Wave.Essence.Eye.EyeManager/EyeTrackingResultDelegate
struct EyeTrackingResultDelegate_t2D8E720F8FA8860D2BD78E0610547F77CDEF9120;
// HTC.UnityPlugin.Utility.Switchable.Switchable/Callback
struct Callback_tE62CCAA982BBC15F7DB7A2F0599C4143F77C102D;
// HTC.UnityPlugin.Utility.Switchable.Switchable/InternalGroup
struct InternalGroup_tCEAE024971C9ADFB0C4F8503FFCC10B3CAAF7F26;
// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t1F9C79BEA347212FFDD03F48CDB70B27614E7F63;
// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t718271BA7ADD8959BE0E389B03668D3103A9DF71;
// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t43A9555EB5BF271449C14C4DE8DE0D833EA1F5D2;
// HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData
struct TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364;
// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker/UnityEventBool
struct UnityEventBool_t16D01B0ED77767296D1D64D989EC4AC4DC29BB51;

IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISwitchableGroupMemberRegisteredHandler_t49821E41C1061DDCFF3F21BACADF98DF14C91A64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISwitchableGroupMemberUnregisteredHandler_t18402EA179EABFAE4603FF777CE05889B4BBF2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISwitchableGroupStatusChangedHandler_t3B27413BF60BAED4F685BB8720C123C993FD4B82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VivePose_tCD7B2260F973D0BADE25476DC6E35616E3ECBCA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeProp_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9791C42E509E84A4356E9A37A10C7178C51F5E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8569A82D42BA123E45CC281BD1E524A10C9AB99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<HTC.UnityPlugin.Pointer3D.Pointer3DEventData>
struct List_1_tA8ACD6D3503FCD84B54164AA786F0FB3CBD55438  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Pointer3DEventDataU5BU5D_tA37442DABCD921B9B8C326E379D9C7A98D2C0CE7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// HTC.UnityPlugin.Utility.Switchable.Switchable
struct Switchable_tAC69CDB34CA5A663C6675B6A8F6F307A9CFEDA40  : public RuntimeObject
{
	// System.Object HTC.UnityPlugin.Utility.Switchable.Switchable::owner
	RuntimeObject* ___owner_0;
	// HTC.UnityPlugin.Utility.Switchable.Switchable/InternalGroup HTC.UnityPlugin.Utility.Switchable.Switchable::group
	InternalGroup_tCEAE024971C9ADFB0C4F8503FFCC10B3CAAF7F26* ___group_1;
	// System.Boolean HTC.UnityPlugin.Utility.Switchable.Switchable::isChangingStatus
	bool ___isChangingStatus_2;
	// System.Boolean HTC.UnityPlugin.Utility.Switchable.Switchable::animateEndedFlag
	bool ___animateEndedFlag_3;
	// HTC.UnityPlugin.Utility.Switchable.Switchable/Callback HTC.UnityPlugin.Utility.Switchable.Switchable::OnSwitch
	Callback_tE62CCAA982BBC15F7DB7A2F0599C4143F77C102D* ___OnSwitch_4;
	// HTC.UnityPlugin.Utility.Switchable.Switchable/Callback HTC.UnityPlugin.Utility.Switchable.Switchable::OnBeforeOpen
	Callback_tE62CCAA982BBC15F7DB7A2F0599C4143F77C102D* ___OnBeforeOpen_5;
	// HTC.UnityPlugin.Utility.Switchable.Switchable/Callback HTC.UnityPlugin.Utility.Switchable.Switchable::OnOpenStart
	Callback_tE62CCAA982BBC15F7DB7A2F0599C4143F77C102D* ___OnOpenStart_6;
	// HTC.UnityPlugin.Utility.Switchable.Switchable/Callback HTC.UnityPlugin.Utility.Switchable.Switchable::OnOpenEnd
	Callback_tE62CCAA982BBC15F7DB7A2F0599C4143F77C102D* ___OnOpenEnd_7;
	// HTC.UnityPlugin.Utility.Switchable.Switchable/Callback HTC.UnityPlugin.Utility.Switchable.Switchable::OnBeforeClose
	Callback_tE62CCAA982BBC15F7DB7A2F0599C4143F77C102D* ___OnBeforeClose_8;
	// HTC.UnityPlugin.Utility.Switchable.Switchable/Callback HTC.UnityPlugin.Utility.Switchable.Switchable::OnCloseStart
	Callback_tE62CCAA982BBC15F7DB7A2F0599C4143F77C102D* ___OnCloseStart_9;
	// HTC.UnityPlugin.Utility.Switchable.Switchable/Callback HTC.UnityPlugin.Utility.Switchable.Switchable::OnCloseEnd
	Callback_tE62CCAA982BBC15F7DB7A2F0599C4143F77C102D* ___OnCloseEnd_10;
	// HTC.UnityPlugin.Utility.Switchable.SwitchableStatus HTC.UnityPlugin.Utility.Switchable.Switchable::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_11;
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

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t1F9C79BEA347212FFDD03F48CDB70B27614E7F63  : public RuntimeObject
{
	// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass31_0::<>4__this
	SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51* ___U3CU3E4__this_0;
	// HTC.UnityPlugin.Utility.Switchable.Switchable HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass31_0::switchable
	Switchable_tAC69CDB34CA5A663C6675B6A8F6F307A9CFEDA40* ___switchable_1;
};

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t718271BA7ADD8959BE0E389B03668D3103A9DF71  : public RuntimeObject
{
	// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass32_0::<>4__this
	SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51* ___U3CU3E4__this_0;
	// HTC.UnityPlugin.Utility.Switchable.Switchable HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass32_0::switchable
	Switchable_tAC69CDB34CA5A663C6675B6A8F6F307A9CFEDA40* ___switchable_1;
};

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t43A9555EB5BF271449C14C4DE8DE0D833EA1F5D2  : public RuntimeObject
{
	// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass33_0::<>4__this
	SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51* ___U3CU3E4__this_0;
	// HTC.UnityPlugin.Utility.Switchable.GroupStatus HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass33_0::status
	int32_t ___status_1;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// Wave.Native.WVR_Vector2f_t
struct WVR_Vector2f_t_t628D9AB9D812BF3ED029AA21E6007B71F57061F2 
{
	// System.Single Wave.Native.WVR_Vector2f_t::v0
	float ___v0_0;
	// System.Single Wave.Native.WVR_Vector2f_t::v1
	float ___v1_1;
};

// Wave.Native.WVR_Vector3f_t
struct WVR_Vector3f_t_tBBD8CBEE9C19BDC06F6A4058C150BAEBEF1FCB53 
{
	// System.Single Wave.Native.WVR_Vector3f_t::v0
	float ___v0_0;
	// System.Single Wave.Native.WVR_Vector3f_t::v1
	float ___v1_1;
	// System.Single Wave.Native.WVR_Vector3f_t::v2
	float ___v2_2;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
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

// HTC.UnityPlugin.Utility.RigidPose
struct RigidPose_t5E761DCFA0F0A598D599DEBEEC33C4D0177E49C2 
{
	// UnityEngine.Vector3 HTC.UnityPlugin.Utility.RigidPose::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_0;
	// UnityEngine.Quaternion HTC.UnityPlugin.Utility.RigidPose::rot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot_1;
};

// Wave.Native.WVR_CombinedEyeTracking_t
struct WVR_CombinedEyeTracking_t_t96BB6B9D99779605DD0C2E6CEACCD074CBE3AC3D 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Wave.Native.WVR_CombinedEyeTracking_t::eyeTrackingValidBitMask
			uint64_t ___eyeTrackingValidBitMask_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___eyeTrackingValidBitMask_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___gazeOrigin_1_OffsetPadding[8];
			// Wave.Native.WVR_Vector3f_t Wave.Native.WVR_CombinedEyeTracking_t::gazeOrigin
			WVR_Vector3f_t_tBBD8CBEE9C19BDC06F6A4058C150BAEBEF1FCB53 ___gazeOrigin_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___gazeOrigin_1_OffsetPadding_forAlignmentOnly[8];
			WVR_Vector3f_t_tBBD8CBEE9C19BDC06F6A4058C150BAEBEF1FCB53 ___gazeOrigin_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___gazeDirectionNormalized_2_OffsetPadding[20];
			// Wave.Native.WVR_Vector3f_t Wave.Native.WVR_CombinedEyeTracking_t::gazeDirectionNormalized
			WVR_Vector3f_t_tBBD8CBEE9C19BDC06F6A4058C150BAEBEF1FCB53 ___gazeDirectionNormalized_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___gazeDirectionNormalized_2_OffsetPadding_forAlignmentOnly[20];
			WVR_Vector3f_t_tBBD8CBEE9C19BDC06F6A4058C150BAEBEF1FCB53 ___gazeDirectionNormalized_2_forAlignmentOnly;
		};
	};
};

// Wave.Native.WVR_SingleEyeTracking_t
struct WVR_SingleEyeTracking_t_t3E3E376E409AF703DE8F8B44DF22F2D92991FBFE 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Wave.Native.WVR_SingleEyeTracking_t::eyeTrackingValidBitMask
			uint64_t ___eyeTrackingValidBitMask_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___eyeTrackingValidBitMask_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___gazeOrigin_1_OffsetPadding[8];
			// Wave.Native.WVR_Vector3f_t Wave.Native.WVR_SingleEyeTracking_t::gazeOrigin
			WVR_Vector3f_t_tBBD8CBEE9C19BDC06F6A4058C150BAEBEF1FCB53 ___gazeOrigin_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___gazeOrigin_1_OffsetPadding_forAlignmentOnly[8];
			WVR_Vector3f_t_tBBD8CBEE9C19BDC06F6A4058C150BAEBEF1FCB53 ___gazeOrigin_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___gazeDirectionNormalized_2_OffsetPadding[20];
			// Wave.Native.WVR_Vector3f_t Wave.Native.WVR_SingleEyeTracking_t::gazeDirectionNormalized
			WVR_Vector3f_t_tBBD8CBEE9C19BDC06F6A4058C150BAEBEF1FCB53 ___gazeDirectionNormalized_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___gazeDirectionNormalized_2_OffsetPadding_forAlignmentOnly[20];
			WVR_Vector3f_t_tBBD8CBEE9C19BDC06F6A4058C150BAEBEF1FCB53 ___gazeDirectionNormalized_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___eyeOpenness_3_OffsetPadding[32];
			// System.Single Wave.Native.WVR_SingleEyeTracking_t::eyeOpenness
			float ___eyeOpenness_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___eyeOpenness_3_OffsetPadding_forAlignmentOnly[32];
			float ___eyeOpenness_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___pupilDiameter_4_OffsetPadding[36];
			// System.Single Wave.Native.WVR_SingleEyeTracking_t::pupilDiameter
			float ___pupilDiameter_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___pupilDiameter_4_OffsetPadding_forAlignmentOnly[36];
			float ___pupilDiameter_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___pupilPositionInSensorArea_5_OffsetPadding[40];
			// Wave.Native.WVR_Vector2f_t Wave.Native.WVR_SingleEyeTracking_t::pupilPositionInSensorArea
			WVR_Vector2f_t_t628D9AB9D812BF3ED029AA21E6007B71F57061F2 ___pupilPositionInSensorArea_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___pupilPositionInSensorArea_5_OffsetPadding_forAlignmentOnly[40];
			WVR_Vector2f_t_t628D9AB9D812BF3ED029AA21E6007B71F57061F2 ___pupilPositionInSensorArea_5_forAlignmentOnly;
		};
	};
};

// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker/UnityEventBool
struct UnityEventBool_t16D01B0ED77767296D1D64D989EC4AC4DC29BB51  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// Wave.Native.WVR_EyeTracking_t
struct WVR_EyeTracking_t_tD7D7E748FB18B3DB84A1FA66CB45B8762B0F0E9A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Wave.Native.WVR_SingleEyeTracking_t Wave.Native.WVR_EyeTracking_t::left
			WVR_SingleEyeTracking_t_t3E3E376E409AF703DE8F8B44DF22F2D92991FBFE ___left_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			WVR_SingleEyeTracking_t_t3E3E376E409AF703DE8F8B44DF22F2D92991FBFE ___left_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___right_1_OffsetPadding[48];
			// Wave.Native.WVR_SingleEyeTracking_t Wave.Native.WVR_EyeTracking_t::right
			WVR_SingleEyeTracking_t_t3E3E376E409AF703DE8F8B44DF22F2D92991FBFE ___right_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___right_1_OffsetPadding_forAlignmentOnly[48];
			WVR_SingleEyeTracking_t_t3E3E376E409AF703DE8F8B44DF22F2D92991FBFE ___right_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___combined_2_OffsetPadding[96];
			// Wave.Native.WVR_CombinedEyeTracking_t Wave.Native.WVR_EyeTracking_t::combined
			WVR_CombinedEyeTracking_t_t96BB6B9D99779605DD0C2E6CEACCD074CBE3AC3D ___combined_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___combined_2_OffsetPadding_forAlignmentOnly[96];
			WVR_CombinedEyeTracking_t_t96BB6B9D99779605DD0C2E6CEACCD074CBE3AC3D ___combined_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___timestamp_3_OffsetPadding[128];
			// System.Int64 Wave.Native.WVR_EyeTracking_t::timestamp
			int64_t ___timestamp_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___timestamp_3_OffsetPadding_forAlignmentOnly[128];
			int64_t ___timestamp_3_forAlignmentOnly;
		};
	};
};

// System.Func`3<System.Boolean,System.Boolean,System.Boolean>
struct Func_3_t8405246FA4174D01D5F07F8A51737739EE5376F3  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// HTC.UnityPlugin.Vive.GestureCustom
struct GestureCustom_tD1AD796BA9498743B56E82503690905275155C38  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String HTC.UnityPlugin.Vive.GestureCustom::Name
	String_t* ___Name_4;
	// HTC.UnityPlugin.Vive.HandRole HTC.UnityPlugin.Vive.GestureCustom::m_role
	int32_t ___m_role_5;
	// HTC.UnityPlugin.Vive.FingerState HTC.UnityPlugin.Vive.GestureCustom::Thumb
	int32_t ___Thumb_6;
	// HTC.UnityPlugin.Vive.FingerState HTC.UnityPlugin.Vive.GestureCustom::Index
	int32_t ___Index_7;
	// HTC.UnityPlugin.Vive.FingerState HTC.UnityPlugin.Vive.GestureCustom::Middle
	int32_t ___Middle_8;
	// HTC.UnityPlugin.Vive.FingerState HTC.UnityPlugin.Vive.GestureCustom::Ring
	int32_t ___Ring_9;
	// HTC.UnityPlugin.Vive.FingerState HTC.UnityPlugin.Vive.GestureCustom::Pinky
	int32_t ___Pinky_10;
	// System.Boolean HTC.UnityPlugin.Vive.GestureCustom::allowBackAlternativeCondition
	bool ___allowBackAlternativeCondition_11;
};

// HTC.UnityPlugin.Pointer3D.Pointer3DEventData
struct Pointer3DEventData_t07CBD4C4C98C89D987DA1F25E08556F75AC31B86  : public PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB
{
	// HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster HTC.UnityPlugin.Pointer3D.Pointer3DEventData::raycaster
	Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50* ___raycaster_33;
	// UnityEngine.Vector3 HTC.UnityPlugin.Pointer3D.Pointer3DEventData::position3D
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position3D_34;
	// UnityEngine.Quaternion HTC.UnityPlugin.Pointer3D.Pointer3DEventData::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_35;
	// UnityEngine.Vector3 HTC.UnityPlugin.Pointer3D.Pointer3DEventData::position3DDelta
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position3DDelta_36;
	// UnityEngine.Quaternion HTC.UnityPlugin.Pointer3D.Pointer3DEventData::rotationDelta
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotationDelta_37;
	// UnityEngine.Vector3 HTC.UnityPlugin.Pointer3D.Pointer3DEventData::pressPosition3D
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pressPosition3D_38;
	// UnityEngine.Quaternion HTC.UnityPlugin.Pointer3D.Pointer3DEventData::pressRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pressRotation_39;
	// System.Single HTC.UnityPlugin.Pointer3D.Pointer3DEventData::pressDistance
	float ___pressDistance_40;
	// UnityEngine.GameObject HTC.UnityPlugin.Pointer3D.Pointer3DEventData::pressEnter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pressEnter_41;
	// System.Boolean HTC.UnityPlugin.Pointer3D.Pointer3DEventData::pressProcessed
	bool ___pressProcessed_42;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData
struct TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364  : public Pointer3DEventData_t07CBD4C4C98C89D987DA1F25E08556F75AC31B86
{
	// HTC.UnityPlugin.Pointer3D.TouchRaycaster HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::<touchPointerRaycaster>k__BackingField
	TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* ___U3CtouchPointerRaycasterU3Ek__BackingField_43;
};

// HTC.UnityPlugin.PoseTracker.BasePoseTracker
struct BasePoseTracker_t67F44B99844E0075E7ED8007CE043A53A8A1211E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 HTC.UnityPlugin.PoseTracker.BasePoseTracker::posOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOffset_4;
	// UnityEngine.Vector3 HTC.UnityPlugin.PoseTracker.BasePoseTracker::rotOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotOffset_5;
	// HTC.UnityPlugin.Utility.OrderedIndexedSet`1<HTC.UnityPlugin.PoseTracker.IPoseModifier> HTC.UnityPlugin.PoseTracker.BasePoseTracker::modifierSet
	OrderedIndexedSet_1_t5CDDB31339209294007125662AA63951BC498559* ___modifierSet_6;
};

// Wave.Essence.Eye.EyeManager
struct EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.Eye.EyeManager::m_sb
	StringBuilder_t* ___m_sb_5;
	// System.Boolean Wave.Essence.Eye.EyeManager::printIntervalLog
	bool ___printIntervalLog_6;
	// System.Int32 Wave.Essence.Eye.EyeManager::logFrame
	int32_t ___logFrame_7;
	// System.Text.StringBuilder Wave.Essence.Eye.EyeManager::m_EyeManagerStringBuilder
	StringBuilder_t* ___m_EyeManagerStringBuilder_8;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_EnableEyeTrackingEx
	bool ___m_EnableEyeTrackingEx_11;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_EnableEyeTracking
	bool ___m_EnableEyeTracking_12;
	// Wave.Essence.Eye.EyeManager/EyeSpace Wave.Essence.Eye.EyeManager::m_LocationSpace
	uint32_t ___m_LocationSpace_13;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_NormalizeZ
	bool ___m_NormalizeZ_14;
	// Wave.XR.Settings.WaveXRSettings Wave.Essence.Eye.EyeManager::m_WaveXRSettings
	WaveXRSettings_tB7B3965473BD9DCA252DE141A35536CDF70319D3* ___m_WaveXRSettings_16;
	// Wave.OpenXR.InputDeviceEye/TrackingStatus Wave.Essence.Eye.EyeManager::m_XRTrackingStatus
	uint32_t ___m_XRTrackingStatus_17;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_EyeTrackingDeviceConnected
	bool ___m_EyeTrackingDeviceConnected_18;
	// Wave.Essence.Eye.EyeManager/EyeTrackingStatus Wave.Essence.Eye.EyeManager::m_EyeTrackingStatus
	int32_t ___m_EyeTrackingStatus_19;
	// System.UInt32 Wave.Essence.Eye.EyeManager::m_EyeTrackingRefCount
	uint32_t ___m_EyeTrackingRefCount_21;
	// System.Object Wave.Essence.Eye.EyeManager::m_EyeTrackingThreadLock
	RuntimeObject* ___m_EyeTrackingThreadLock_22;
	// Wave.Essence.Eye.EyeManager/EyeTrackingResultDelegate Wave.Essence.Eye.EyeManager::m_EyeTrackingResultCB
	EyeTrackingResultDelegate_t2D8E720F8FA8860D2BD78E0610547F77CDEF9120* ___m_EyeTrackingResultCB_23;
	// Wave.Native.WVR_EyeTracking_t Wave.Essence.Eye.EyeManager::m_EyeData
	WVR_EyeTracking_t_tD7D7E748FB18B3DB84A1FA66CB45B8762B0F0E9A ___m_EyeData_24;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_CombinedEyeOriginValid
	bool ___m_CombinedEyeOriginValid_25;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_CombinedEyeDirectionValid
	bool ___m_CombinedEyeDirectionValid_26;
	// UnityEngine.Vector3 Wave.Essence.Eye.EyeManager::m_CombinedEyeOrigin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CombinedEyeOrigin_27;
	// UnityEngine.Vector3 Wave.Essence.Eye.EyeManager::m_CombinedEyeDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CombinedEyeDirection_28;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_LeftEyeOriginValid
	bool ___m_LeftEyeOriginValid_29;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_LeftEyeDirectionValid
	bool ___m_LeftEyeDirectionValid_30;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_LeftEyeOpennessValid
	bool ___m_LeftEyeOpennessValid_31;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_LeftEyePupilDiameterValid
	bool ___m_LeftEyePupilDiameterValid_32;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_LeftEyePupilPositionInSensorAreaValid
	bool ___m_LeftEyePupilPositionInSensorAreaValid_33;
	// UnityEngine.Vector3 Wave.Essence.Eye.EyeManager::m_LeftEyeOrigin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LeftEyeOrigin_34;
	// UnityEngine.Vector3 Wave.Essence.Eye.EyeManager::m_LeftEyeDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LeftEyeDirection_35;
	// System.Single Wave.Essence.Eye.EyeManager::m_LeftEyeOpenness
	float ___m_LeftEyeOpenness_36;
	// System.Single Wave.Essence.Eye.EyeManager::m_LeftEyePupilDiameter
	float ___m_LeftEyePupilDiameter_37;
	// UnityEngine.Vector2 Wave.Essence.Eye.EyeManager::m_LeftEyePupilPositionInSensorArea
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LeftEyePupilPositionInSensorArea_38;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_RightEyeOriginValid
	bool ___m_RightEyeOriginValid_39;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_RightEyeDirectionValid
	bool ___m_RightEyeDirectionValid_40;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_RightEyeOpennessValid
	bool ___m_RightEyeOpennessValid_41;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_RightEyePupilDiameterValid
	bool ___m_RightEyePupilDiameterValid_42;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_RightEyePupilPositionInSensorAreaValid
	bool ___m_RightEyePupilPositionInSensorAreaValid_43;
	// UnityEngine.Vector3 Wave.Essence.Eye.EyeManager::m_RightEyeOrigin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RightEyeOrigin_44;
	// UnityEngine.Vector3 Wave.Essence.Eye.EyeManager::m_RightEyeDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RightEyeDirection_45;
	// System.Single Wave.Essence.Eye.EyeManager::m_RightEyeOpenness
	float ___m_RightEyeOpenness_46;
	// System.Single Wave.Essence.Eye.EyeManager::m_RightEyePupilDiameter
	float ___m_RightEyePupilDiameter_47;
	// UnityEngine.Vector2 Wave.Essence.Eye.EyeManager::m_RightEyePupilPositionInSensorArea
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RightEyePupilPositionInSensorArea_48;
	// System.Boolean Wave.Essence.Eye.EyeManager::hasEyeTrackingData
	bool ___hasEyeTrackingData_49;
	// System.Int64 Wave.Essence.Eye.EyeManager::m_Timestamp
	int64_t ___m_Timestamp_50;
};

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour
struct SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HTC.UnityPlugin.Utility.Switchable.SwitchableGroup HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour::switchableGroup
	SwitchableGroup_t3A3034684BC069EF199C6D2898EEA46AE16143E6* ___switchableGroup_4;
	// System.Boolean HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour::sequentialSwitch
	bool ___sequentialSwitch_5;
	// System.Boolean HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour::allowSwitchOff
	bool ___allowSwitchOff_6;
	// System.Boolean HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour::isInitialized
	bool ___isInitialized_7;
	// System.Boolean HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour::<changeMemberGuard>k__BackingField
	bool ___U3CchangeMemberGuardU3Ek__BackingField_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker
struct WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6  : public BasePoseTracker_t67F44B99844E0075E7ED8007CE043A53A8A1211E
{
	// System.Boolean HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::m_isValid
	bool ___m_isValid_7;
	// UnityEngine.Transform HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::m_origin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_origin_8;
	// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker/UnityEventBool HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::m_onIsValidChanged
	UnityEventBool_t16D01B0ED77767296D1D64D989EC4AC4DC29BB51* ___m_onIsValidChanged_9;
};

// HTC.UnityPlugin.Pointer3D.BaseMultiMethodRaycaster
struct BaseMultiMethodRaycaster_t134373737D7DB4FA81B456FD4B37693D4BC2F94D  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// HTC.UnityPlugin.Utility.IndexedSet`1<HTC.UnityPlugin.Pointer3D.IRaycastMethod> HTC.UnityPlugin.Pointer3D.BaseMultiMethodRaycaster::methods
	IndexedSet_1_t923BE4301011B8C94C049F976825EAECB9EDC234* ___methods_5;
};

// HTC.UnityPlugin.Pointer3D.BaseFallbackCamRaycaster
struct BaseFallbackCamRaycaster_t557B24FD43EC06D387AD41B6E6C9FC4CA71E90C1  : public BaseMultiMethodRaycaster_t134373737D7DB4FA81B456FD4B37693D4BC2F94D
{
	// System.Boolean HTC.UnityPlugin.Pointer3D.BaseFallbackCamRaycaster::isDestroying
	bool ___isDestroying_6;
	// UnityEngine.Camera HTC.UnityPlugin.Pointer3D.BaseFallbackCamRaycaster::fallbackCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___fallbackCam_7;
	// System.Single HTC.UnityPlugin.Pointer3D.BaseFallbackCamRaycaster::nearDistance
	float ___nearDistance_8;
	// System.Single HTC.UnityPlugin.Pointer3D.BaseFallbackCamRaycaster::farDistance
	float ___farDistance_9;
};

// HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster
struct Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50  : public BaseFallbackCamRaycaster_t557B24FD43EC06D387AD41B6E6C9FC4CA71E90C1
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<HTC.UnityPlugin.Pointer3D.Pointer3DEventData> HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::buttonEventDataListReadOnly
	ReadOnlyCollection_1_t432B936F622D8DB52A7D950BEA1A6F109D73EFF0* ___buttonEventDataListReadOnly_11;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult> HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::sortedRaycastResultsReadOnly
	ReadOnlyCollection_1_t0A309B56589D89FCA7F4936BD28B2C8A56EBA812* ___sortedRaycastResultsReadOnly_12;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3> HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::breakPointsReadOnly
	ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* ___breakPointsReadOnly_13;
	// System.Collections.Generic.List`1<HTC.UnityPlugin.Pointer3D.Pointer3DEventData> HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::buttonEventDataList
	List_1_tA8ACD6D3503FCD84B54164AA786F0FB3CBD55438* ___buttonEventDataList_14;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::sortedRaycastResults
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___sortedRaycastResults_15;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::breakPoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___breakPoints_16;
	// System.Single HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::dragThreshold
	float ___dragThreshold_17;
	// System.Single HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::clickInterval
	float ___clickInterval_18;
	// System.Boolean HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::showDebugRay
	bool ___showDebugRay_19;
	// HTC.UnityPlugin.Utility.IndexedSet`1<HTC.UnityPlugin.Pointer3D.IRaySegmentGenerator> HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::generators
	IndexedSet_1_t623D2AEFA48F345EF33AE4ED2F97B432123D58DC* ___generators_20;
	// HTC.UnityPlugin.Pointer3D.RaycastMode HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::m_raycastMode
	int32_t ___m_raycastMode_21;
	// System.Single HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::m_velocity
	float ___m_velocity_22;
	// UnityEngine.Vector3 HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::m_gravity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_gravity_23;
};

// HTC.UnityPlugin.Pointer3D.TouchRaycaster
struct TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F  : public Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50
{
	// System.Single HTC.UnityPlugin.Pointer3D.TouchRaycaster::mouseButtonLeftRange
	float ___mouseButtonLeftRange_24;
	// System.Single HTC.UnityPlugin.Pointer3D.TouchRaycaster::prevHitRange
	float ___prevHitRange_25;
	// System.Single HTC.UnityPlugin.Pointer3D.TouchRaycaster::currHitRange
	float ___currHitRange_26;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<HTC.UnityPlugin.Pointer3D.Pointer3DEventData>
struct List_1_tA8ACD6D3503FCD84B54164AA786F0FB3CBD55438_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Pointer3DEventDataU5BU5D_tA37442DABCD921B9B8C326E379D9C7A98D2C0CE7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<HTC.UnityPlugin.Pointer3D.Pointer3DEventData>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// HTC.UnityPlugin.Utility.Switchable.Switchable

// HTC.UnityPlugin.Utility.Switchable.Switchable

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass31_0

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass31_0

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass32_0

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass32_0

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass33_0

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass33_0

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

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

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

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

// Wave.Native.WVR_Vector2f_t

// Wave.Native.WVR_Vector2f_t

// Wave.Native.WVR_Vector3f_t

// Wave.Native.WVR_Vector3f_t

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::1C3635C112D556F4C11A4FE6BDE6ED3F126C4B2B546811BDB64DE7BDED3A05CB
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___1C3635C112D556F4C11A4FE6BDE6ED3F126C4B2B546811BDB64DE7BDED3A05CB_0;
};

// <PrivateImplementationDetails>

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// HTC.UnityPlugin.Utility.RigidPose

// HTC.UnityPlugin.Utility.RigidPose

// Wave.Native.WVR_CombinedEyeTracking_t

// Wave.Native.WVR_CombinedEyeTracking_t

// Wave.Native.WVR_SingleEyeTracking_t

// Wave.Native.WVR_SingleEyeTracking_t

// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker/UnityEventBool

// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker/UnityEventBool

// UnityEngine.Component

// UnityEngine.Component

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// Wave.Native.WVR_EyeTracking_t

// Wave.Native.WVR_EyeTracking_t

// System.Func`3<System.Boolean,System.Boolean,System.Boolean>

// System.Func`3<System.Boolean,System.Boolean,System.Boolean>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// HTC.UnityPlugin.Vive.GestureCustom

// HTC.UnityPlugin.Vive.GestureCustom

// HTC.UnityPlugin.Pointer3D.Pointer3DEventData

// HTC.UnityPlugin.Pointer3D.Pointer3DEventData

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData

// HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData

// HTC.UnityPlugin.PoseTracker.BasePoseTracker

// HTC.UnityPlugin.PoseTracker.BasePoseTracker

// Wave.Essence.Eye.EyeManager
struct EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_StaticFields
{
	// Wave.Essence.Eye.EyeManager Wave.Essence.Eye.EyeManager::m_Instance
	EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C* ___m_Instance_9;
	// System.Boolean Wave.Essence.Eye.EyeManager::m_UseXRDevice
	bool ___m_UseXRDevice_15;
	// System.Threading.ReaderWriterLockSlim Wave.Essence.Eye.EyeManager::m_EyeTrackingStatusRWLock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ___m_EyeTrackingStatusRWLock_20;
};

// Wave.Essence.Eye.EyeManager

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour

// HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker

// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker

// HTC.UnityPlugin.Pointer3D.BaseMultiMethodRaycaster

// HTC.UnityPlugin.Pointer3D.BaseMultiMethodRaycaster

// HTC.UnityPlugin.Pointer3D.BaseFallbackCamRaycaster

// HTC.UnityPlugin.Pointer3D.BaseFallbackCamRaycaster

// HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster

// HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster

// HTC.UnityPlugin.Pointer3D.TouchRaycaster

// HTC.UnityPlugin.Pointer3D.TouchRaycaster
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean HTC.UnityPlugin.Utility.ChangeProp::Set<System.Boolean>(T&,T,System.Func`3<T,T,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChangeProp_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9791C42E509E84A4356E9A37A10C7178C51F5E4B_gshared (bool* ___0_currentValue, bool ___1_newValue, Func_3_t8405246FA4174D01D5F07F8A51737739EE5376F3* ___2_equalFunc, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean HTC.UnityPlugin.Utility.ChangeProp::Set<System.Boolean>(T&,T,System.Func`3<T,T,System.Boolean>)
inline bool ChangeProp_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9791C42E509E84A4356E9A37A10C7178C51F5E4B (bool* ___0_currentValue, bool ___1_newValue, Func_3_t8405246FA4174D01D5F07F8A51737739EE5376F3* ___2_equalFunc, const RuntimeMethod* method)
{
	return ((  bool (*) (bool*, bool, Func_3_t8405246FA4174D01D5F07F8A51737739EE5376F3*, const RuntimeMethod*))ChangeProp_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9791C42E509E84A4356E9A37A10C7178C51F5E4B_gshared)(___0_currentValue, ___1_newValue, ___2_equalFunc, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___0_arg0, method);
}
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::SetIsValid(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveEyePoseTracker_SetIsValid_mAF06BA1352F1F21091FC7502918DD3FBFC8EB69E (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, bool ___0_value, bool ___1_forceSet, const RuntimeMethod* method) ;
// System.Boolean HTC.UnityPlugin.Vive.VivePose::AddNewPosesListener(HTC.UnityPlugin.Vive.INewPoseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VivePose_AddNewPosesListener_m0AC3AD3AAD272CA07A7DE296531E1BA635360444 (RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// System.Boolean HTC.UnityPlugin.Vive.VivePose::RemoveNewPosesListener(HTC.UnityPlugin.Vive.INewPoseListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VivePose_RemoveNewPosesListener_m6AAA8530DC05F96C30D539C0F7147CE949412E0B (RuntimeObject* ___0_listener, const RuntimeMethod* method) ;
// Wave.Essence.Eye.EyeManager Wave.Essence.Eye.EyeManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C* EyeManager_get_Instance_m8FFA1396FB6E815190422ECD33BD9BAD1BDCB387_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Eye.EyeManager::GetCombindedEyeDirectionNormalized(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EyeManager_GetCombindedEyeDirectionNormalized_m265BCF64C62624B9145ED3597D227AAD6CF9FB49 (EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_direction, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Eye.EyeManager::GetCombinedEyeOrigin(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EyeManager_GetCombinedEyeOrigin_m801BD793431B34928BF92519D4E56496889B503A (EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_origin, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Utility.RigidPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidPose__ctor_m07FB7FC53A87FF1923F63F30B35786FC18801AB6 (RigidPose_t5E761DCFA0F0A598D599DEBEEC33C4D0177E49C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rot, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.PoseTracker.BasePoseTracker::TrackPose(HTC.UnityPlugin.Utility.RigidPose,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePoseTracker_TrackPose_m1435B5DA88A1F9D3CD4E6E3D5F221EDD04B4A869 (BasePoseTracker_t67F44B99844E0075E7ED8007CE043A53A8A1211E* __this, RigidPose_t5E761DCFA0F0A598D599DEBEEC33C4D0177E49C2 ___0_pose, bool ___1_useLocal, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.PoseTracker.BasePoseTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePoseTracker__ctor_m59213A419F51D147389D01B48506ECD4053DF2E6 (BasePoseTracker_t67F44B99844E0075E7ED8007CE043A53A8A1211E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, const RuntimeMethod*))UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared)(__this, method);
}
// System.Void HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer3DRaycaster_Start_m6AC1B5B8906511A263D36DEBE87CE9C79F233DEC (Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::.ctor(HTC.UnityPlugin.Pointer3D.TouchRaycaster,UnityEngine.EventSystems.EventSystem,UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchEventData__ctor_m8C2D1CE9C7E5F5B4D721803966C9B648ED07D529 (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* ___0_ownerRaycaster, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___1_eventSystem, int32_t ___2_btn, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<HTC.UnityPlugin.Pointer3D.Pointer3DEventData>::Add(T)
inline void List_1_Add_m8569A82D42BA123E45CC281BD1E524A10C9AB99E_inline (List_1_tA8ACD6D3503FCD84B54164AA786F0FB3CBD55438* __this, Pointer3DEventData_t07CBD4C4C98C89D987DA1F25E08556F75AC31B86* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA8ACD6D3503FCD84B54164AA786F0FB3CBD55438*, Pointer3DEventData_t07CBD4C4C98C89D987DA1F25E08556F75AC31B86*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::Raycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer3DRaycaster_Raycast_m84D95D1AA7BDAF998EFD870D599E694ED1C160FE (Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::FirstRaycastResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Pointer3DRaycaster_FirstRaycastResult_m79E35CE14E8763B2265F0631A783F0770C1580D7 (Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastResult_get_isValid_m69957B97C041A9E3FAF4ECA82BB8099C9FA171CE (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer3DRaycaster__ctor_mDBF5BAD36E2B60AB3FC6240B84DC4D2B0E15E260 (Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50* __this, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Pointer3D.Pointer3DEventData::.ctor(HTC.UnityPlugin.Pointer3D.Pointer3DRaycaster,UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer3DEventData__ctor_m03546D2D8CA815F90C79BFCC45E9D2D796A940E0 (Pointer3DEventData_t07CBD4C4C98C89D987DA1F25E08556F75AC31B86* __this, Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50* ___0_ownerRaycaster, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___1_eventSystem, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::set_touchPointerRaycaster(HTC.UnityPlugin.Pointer3D.TouchRaycaster)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchEventData_set_touchPointerRaycaster_m0C0496881BC1C62B0D8279352685A623E5AD3F13_inline (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// HTC.UnityPlugin.Pointer3D.TouchRaycaster HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::get_touchPointerRaycaster()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Single HTC.UnityPlugin.Pointer3D.TouchRaycaster::GetButtonHitRange(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TouchRaycaster_GetButtonHitRange_m0A422616E984660BB1A6A46594C7063F2E4D0566 (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, int32_t ___0_btn, const RuntimeMethod* method) ;
// System.Single HTC.UnityPlugin.Pointer3D.TouchRaycaster::get_CurrentFrameHitRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TouchRaycaster_get_CurrentFrameHitRange_m5CCF63917EE3F6ED66FE5FA7088B13C37DCBFAB6_inline (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, const RuntimeMethod* method) ;
// System.Single HTC.UnityPlugin.Pointer3D.TouchRaycaster::get_PreviousFrameHitRange()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TouchRaycaster_get_PreviousFrameHitRange_mDD3AAC977DCF0D60C14F63FBDA56E2431F0B039B_inline (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mA745DDA9CB55F2F39030420D2BBC143898FCF086 (U3CU3Ec__DisplayClass31_0_t1F9C79BEA347212FFDD03F48CDB70B27614E7F63* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass31_0::<SendMemberRegisteredMessage>b__0(HTC.UnityPlugin.Utility.Switchable.ISwitchableGroupMemberRegisteredHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CSendMemberRegisteredMessageU3Eb__0_m1EA11F7ADBBB0D41AAFCC93D98BA062D1A642CFC (U3CU3Ec__DisplayClass31_0_t1F9C79BEA347212FFDD03F48CDB70B27614E7F63* __this, RuntimeObject* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISwitchableGroupMemberRegisteredHandler_t49821E41C1061DDCFF3F21BACADF98DF14C91A64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.Execute<ISwitchableGroupMemberRegisteredHandler>(handler => handler.OnSwitchableGroupMemberRegistered(this, switchable));
		RuntimeObject* L_0 = ___0_handler;
		SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51* L_1 = __this->___U3CU3E4__this_0;
		Switchable_tAC69CDB34CA5A663C6675B6A8F6F307A9CFEDA40* L_2 = __this->___switchable_1;
		NullCheck(L_0);
		InterfaceActionInvoker2< SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51*, Switchable_tAC69CDB34CA5A663C6675B6A8F6F307A9CFEDA40* >::Invoke(0 /* System.Void HTC.UnityPlugin.Utility.Switchable.ISwitchableGroupMemberRegisteredHandler::OnSwitchableGroupMemberRegistered(HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour,HTC.UnityPlugin.Utility.Switchable.Switchable) */, ISwitchableGroupMemberRegisteredHandler_t49821E41C1061DDCFF3F21BACADF98DF14C91A64_il2cpp_TypeInfo_var, L_0, L_1, L_2);
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
// System.Void HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mB69CA4F28F3BA841B376AE0569C60532F947F8B8 (U3CU3Ec__DisplayClass32_0_t718271BA7ADD8959BE0E389B03668D3103A9DF71* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass32_0::<SendMemberUnregisteredMessage>b__0(HTC.UnityPlugin.Utility.Switchable.ISwitchableGroupMemberUnregisteredHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0_U3CSendMemberUnregisteredMessageU3Eb__0_m12ECECEC29DE154D2345BCC3D1E3F0A4A32FBA1E (U3CU3Ec__DisplayClass32_0_t718271BA7ADD8959BE0E389B03668D3103A9DF71* __this, RuntimeObject* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISwitchableGroupMemberUnregisteredHandler_t18402EA179EABFAE4603FF777CE05889B4BBF2B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.Execute<ISwitchableGroupMemberUnregisteredHandler>(handler => handler.OnSwitchableGroupMemberUnregistered(this, switchable));
		RuntimeObject* L_0 = ___0_handler;
		SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51* L_1 = __this->___U3CU3E4__this_0;
		Switchable_tAC69CDB34CA5A663C6675B6A8F6F307A9CFEDA40* L_2 = __this->___switchable_1;
		NullCheck(L_0);
		InterfaceActionInvoker2< SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51*, Switchable_tAC69CDB34CA5A663C6675B6A8F6F307A9CFEDA40* >::Invoke(0 /* System.Void HTC.UnityPlugin.Utility.Switchable.ISwitchableGroupMemberUnregisteredHandler::OnSwitchableGroupMemberUnregistered(HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour,HTC.UnityPlugin.Utility.Switchable.Switchable) */, ISwitchableGroupMemberUnregisteredHandler_t18402EA179EABFAE4603FF777CE05889B4BBF2B8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
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
// System.Void HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mB60BC7AB81F8BD36CEF49344D03120BC8E880802 (U3CU3Ec__DisplayClass33_0_t43A9555EB5BF271449C14C4DE8DE0D833EA1F5D2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour/<>c__DisplayClass33_0::<SendStatusChangedMessage>b__0(HTC.UnityPlugin.Utility.Switchable.ISwitchableGroupStatusChangedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CSendStatusChangedMessageU3Eb__0_mD263214668D6EC9C25504A7CDB2BB10B8094F918 (U3CU3Ec__DisplayClass33_0_t43A9555EB5BF271449C14C4DE8DE0D833EA1F5D2* __this, RuntimeObject* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISwitchableGroupStatusChangedHandler_t3B27413BF60BAED4F685BB8720C123C993FD4B82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.Execute<ISwitchableGroupStatusChangedHandler>(handler => handler.OnSwitchableGroupStatusChanged(this, status));
		RuntimeObject* L_0 = ___0_handler;
		SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51* L_1 = __this->___U3CU3E4__this_0;
		int32_t L_2 = __this->___status_1;
		NullCheck(L_0);
		InterfaceActionInvoker2< SwitchableGroupBehaviour_tCDFD614B0B7D8E15DA0D4B7692DCEAE00AF40B51*, int32_t >::Invoke(0 /* System.Void HTC.UnityPlugin.Utility.Switchable.ISwitchableGroupStatusChangedHandler::OnSwitchableGroupStatusChanged(HTC.UnityPlugin.Utility.Switchable.SwitchableGroupBehaviour,HTC.UnityPlugin.Utility.Switchable.GroupStatus) */, ISwitchableGroupStatusChangedHandler_t3B27413BF60BAED4F685BB8720C123C993FD4B82_il2cpp_TypeInfo_var, L_0, L_1, L_2);
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
// System.Void HTC.UnityPlugin.Vive.GestureCustom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureCustom__ctor_mFABD1C46265DFB40E24C36D25F93515E9241EF29 (GestureCustom_tD1AD796BA9498743B56E82503690905275155C38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Name = "Default";
		__this->___Name_4 = _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_4), (void*)_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker/UnityEventBool HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::get_onIsValidChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEventBool_t16D01B0ED77767296D1D64D989EC4AC4DC29BB51* WaveEyePoseTracker_get_onIsValidChanged_mA6A8AB2169B4C86303896B1AEA525A38526A1784 (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEventBool onIsValidChanged { get { return m_onIsValidChanged; } }
		UnityEventBool_t16D01B0ED77767296D1D64D989EC4AC4DC29BB51* L_0 = __this->___m_onIsValidChanged_9;
		return L_0;
	}
}
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::SetIsValid(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveEyePoseTracker_SetIsValid_mAF06BA1352F1F21091FC7502918DD3FBFC8EB69E (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, bool ___0_value, bool ___1_forceSet, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeProp_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9791C42E509E84A4356E9A37A10C7178C51F5E4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ChangeProp.Set(ref m_isValid, value) || forceSet)
		bool* L_0 = (&__this->___m_isValid_7);
		bool L_1 = ___0_value;
		bool L_2;
		L_2 = ChangeProp_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9791C42E509E84A4356E9A37A10C7178C51F5E4B(L_0, L_1, (Func_3_t8405246FA4174D01D5F07F8A51737739EE5376F3*)NULL, ChangeProp_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9791C42E509E84A4356E9A37A10C7178C51F5E4B_RuntimeMethod_var);
		bool L_3 = ___1_forceSet;
		if (!((int32_t)((int32_t)L_2|(int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		// if (m_onIsValidChanged != null)
		UnityEventBool_t16D01B0ED77767296D1D64D989EC4AC4DC29BB51* L_4 = __this->___m_onIsValidChanged_9;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// m_onIsValidChanged.Invoke(value);
		UnityEventBool_t16D01B0ED77767296D1D64D989EC4AC4DC29BB51* L_5 = __this->___m_onIsValidChanged_9;
		bool L_6 = ___0_value;
		NullCheck(L_5);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_5, L_6, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveEyePoseTracker_Start_m9CA2021FC537486F5540A6F1587EEC09BCF137A2 (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, const RuntimeMethod* method) 
{
	{
		// SetIsValid(false, true);
		WaveEyePoseTracker_SetIsValid_mAF06BA1352F1F21091FC7502918DD3FBFC8EB69E(__this, (bool)0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveEyePoseTracker_OnEnable_m8399F99A122AD957B5E6AD05C2A98BC058ECE06B (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivePose_tCD7B2260F973D0BADE25476DC6E35616E3ECBCA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VivePose.AddNewPosesListener(this);
		il2cpp_codegen_runtime_class_init_inline(VivePose_tCD7B2260F973D0BADE25476DC6E35616E3ECBCA4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = VivePose_AddNewPosesListener_m0AC3AD3AAD272CA07A7DE296531E1BA635360444(__this, NULL);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveEyePoseTracker_OnDisable_m25BF90E465A28F8C3A3D383A884332A34FD82618 (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VivePose_tCD7B2260F973D0BADE25476DC6E35616E3ECBCA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VivePose.RemoveNewPosesListener(this);
		il2cpp_codegen_runtime_class_init_inline(VivePose_tCD7B2260F973D0BADE25476DC6E35616E3ECBCA4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = VivePose_RemoveNewPosesListener_m6AAA8530DC05F96C30D539C0F7147CE949412E0B(__this, NULL);
		// SetIsValid(false);
		WaveEyePoseTracker_SetIsValid_mAF06BA1352F1F21091FC7502918DD3FBFC8EB69E(__this, (bool)0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::BeforeNewPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveEyePoseTracker_BeforeNewPoses_m0B807F2387B997119EFEDAC746077C8E4414F7CB (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void BeforeNewPoses() { }
		return;
	}
}
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::OnNewPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveEyePoseTracker_OnNewPoses_mCCEEADDC72892D07A014FA556204F1C3D5381F16 (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RigidPose_t5E761DCFA0F0A598D599DEBEEC33C4D0177E49C2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B4_0 = 0;
	{
		// var origin = default(Vector3);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// var direction = default(Vector3);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// var isValid = default(bool);
		V_2 = (bool)0;
		// if (EyeManager.Instance != null)
		il2cpp_codegen_runtime_class_init_inline(EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_il2cpp_TypeInfo_var);
		EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C* L_0;
		L_0 = EyeManager_get_Instance_m8FFA1396FB6E815190422ECD33BD9BAD1BDCB387_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// isValid = EyeManager.Instance.GetCombindedEyeDirectionNormalized(out direction) && EyeManager.Instance.GetCombinedEyeOrigin(out origin);
		il2cpp_codegen_runtime_class_init_inline(EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_il2cpp_TypeInfo_var);
		EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C* L_2;
		L_2 = EyeManager_get_Instance_m8FFA1396FB6E815190422ECD33BD9BAD1BDCB387_inline(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = EyeManager_GetCombindedEyeDirectionNormalized_m265BCF64C62624B9145ED3597D227AAD6CF9FB49(L_2, (&V_1), NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_il2cpp_TypeInfo_var);
		EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C* L_4;
		L_4 = EyeManager_get_Instance_m8FFA1396FB6E815190422ECD33BD9BAD1BDCB387_inline(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = EyeManager_GetCombinedEyeOrigin_m801BD793431B34928BF92519D4E56496889B503A(L_4, (&V_0), NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_003c;
	}

IL_003b:
	{
		G_B4_0 = 0;
	}

IL_003c:
	{
		V_2 = (bool)G_B4_0;
	}

IL_003d:
	{
		// if (isValid)
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_008e;
		}
	}
	{
		// var pose = default(RigidPose);
		il2cpp_codegen_initobj((&V_3), sizeof(RigidPose_t5E761DCFA0F0A598D599DEBEEC33C4D0177E49C2));
		// pose = new RigidPose(origin, Quaternion.LookRotation(direction));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_8, NULL);
		RigidPose__ctor_m07FB7FC53A87FF1923F63F30B35786FC18801AB6((&V_3), L_7, L_9, NULL);
		// if (m_origin != null && m_origin != transform.parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_origin_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___m_origin_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		// TrackPose(pose, false);
		RigidPose_t5E761DCFA0F0A598D599DEBEEC33C4D0177E49C2 L_16 = V_3;
		BasePoseTracker_TrackPose_m1435B5DA88A1F9D3CD4E6E3D5F221EDD04B4A869(__this, L_16, (bool)0, NULL);
		goto IL_008e;
	}

IL_0086:
	{
		// TrackPose(pose, true);
		RigidPose_t5E761DCFA0F0A598D599DEBEEC33C4D0177E49C2 L_17 = V_3;
		BasePoseTracker_TrackPose_m1435B5DA88A1F9D3CD4E6E3D5F221EDD04B4A869(__this, L_17, (bool)1, NULL);
	}

IL_008e:
	{
		// SetIsValid(isValid);
		bool L_18 = V_2;
		WaveEyePoseTracker_SetIsValid_mAF06BA1352F1F21091FC7502918DD3FBFC8EB69E(__this, L_18, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::AfterNewPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveEyePoseTracker_AfterNewPoses_m9834ED505F88BFAE70023A56A17986BC83CD1F0D (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void AfterNewPoses() { }
		return;
	}
}
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveEyePoseTracker__ctor_m879AEA2161BCC76CFB1D08E92F9552C6FA917C4C (WaveEyePoseTracker_t3E0F6CF1BB82214AB8A4EE08EBD04BDFBAEFC1A6* __this, const RuntimeMethod* method) 
{
	{
		BasePoseTracker__ctor_m59213A419F51D147389D01B48506ECD4053DF2E6(__this, NULL);
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
// System.Void HTC.UnityPlugin.PoseTracker.WaveEyePoseTracker/UnityEventBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBool__ctor_m2774017375880C8084BE1E2A0B3740820D9AD1D4 (UnityEventBool_t16D01B0ED77767296D1D64D989EC4AC4DC29BB51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(__this, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
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
// System.Single HTC.UnityPlugin.Pointer3D.TouchRaycaster::get_PreviousFrameHitRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TouchRaycaster_get_PreviousFrameHitRange_mDD3AAC977DCF0D60C14F63FBDA56E2431F0B039B (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, const RuntimeMethod* method) 
{
	{
		// public float PreviousFrameHitRange { get { return prevHitRange; } }
		float L_0 = __this->___prevHitRange_25;
		return L_0;
	}
}
// System.Single HTC.UnityPlugin.Pointer3D.TouchRaycaster::get_CurrentFrameHitRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TouchRaycaster_get_CurrentFrameHitRange_m5CCF63917EE3F6ED66FE5FA7088B13C37DCBFAB6 (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, const RuntimeMethod* method) 
{
	{
		// public float CurrentFrameHitRange { get { return currHitRange; } }
		float L_0 = __this->___currHitRange_26;
		return L_0;
	}
}
// System.Single HTC.UnityPlugin.Pointer3D.TouchRaycaster::GetButtonHitRange(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TouchRaycaster_GetButtonHitRange_m0A422616E984660BB1A6A46594C7063F2E4D0566 (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, int32_t ___0_btn, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_btn;
		// case PointerEventData.InputButton.Left: return mouseButtonLeftRange;
		float L_1 = __this->___mouseButtonLeftRange_24;
		return L_1;
	}
}
// System.Void HTC.UnityPlugin.Pointer3D.TouchRaycaster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchRaycaster_Start_m59CB668729FAC25828DDF84F17A5F9261BD93D73 (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8569A82D42BA123E45CC281BD1E524A10C9AB99E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Pointer3DRaycaster_Start_m6AC1B5B8906511A263D36DEBE87CE9C79F233DEC(__this, NULL);
		// buttonEventDataList.Add(new TouchEventData(this, EventSystem.current, PointerEventData.InputButton.Left));
		List_1_tA8ACD6D3503FCD84B54164AA786F0FB3CBD55438* L_0 = ((Pointer3DRaycaster_tC7A18B083B4A24021BD0B354A0FB84F420CA5E50*)__this)->___buttonEventDataList_14;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1;
		L_1 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* L_2 = (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364*)il2cpp_codegen_object_new(TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TouchEventData__ctor_m8C2D1CE9C7E5F5B4D721803966C9B648ED07D529(L_2, __this, L_1, 0, NULL);
		NullCheck(L_0);
		List_1_Add_m8569A82D42BA123E45CC281BD1E524A10C9AB99E_inline(L_0, L_2, List_1_Add_m8569A82D42BA123E45CC281BD1E524A10C9AB99E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.Pointer3D.TouchRaycaster::Raycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchRaycaster_Raycast_m93A4FBDDDB51D4CEA290610E29B46E7C5675705C (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, const RuntimeMethod* method) 
{
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* G_B2_0 = NULL;
	TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* G_B3_1 = NULL;
	{
		// base.Raycast();
		Pointer3DRaycaster_Raycast_m84D95D1AA7BDAF998EFD870D599E694ED1C160FE(__this, NULL);
		// prevHitRange = currHitRange;
		float L_0 = __this->___currHitRange_26;
		__this->___prevHitRange_25 = L_0;
		// var hitResult = FirstRaycastResult();
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_1;
		L_1 = Pointer3DRaycaster_FirstRaycastResult_m79E35CE14E8763B2265F0631A783F0770C1580D7(__this, NULL);
		V_0 = L_1;
		// currHitRange = hitResult.isValid ? hitResult.distance : float.MaxValue;
		bool L_2;
		L_2 = RaycastResult_get_isValid_m69957B97C041A9E3FAF4ECA82BB8099C9FA171CE((&V_0), NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_002a;
		}
	}
	{
		G_B3_0 = ((std::numeric_limits<float>::max)());
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002a:
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_3 = V_0;
		float L_4 = L_3.___distance_2;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		G_B3_1->___currHitRange_26 = G_B3_0;
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.Pointer3D.TouchRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchRaycaster__ctor_mA6A8E0CF258E1BA8E27A50BA13719FA8C0D3A811 (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, const RuntimeMethod* method) 
{
	{
		// public float mouseButtonLeftRange = 0.02f;
		__this->___mouseButtonLeftRange_24 = (0.0199999996f);
		// private float prevHitRange = float.MaxValue;
		__this->___prevHitRange_25 = ((std::numeric_limits<float>::max)());
		// private float currHitRange = float.MaxValue;
		__this->___currHitRange_26 = ((std::numeric_limits<float>::max)());
		Pointer3DRaycaster__ctor_mDBF5BAD36E2B60AB3FC6240B84DC4D2B0E15E260(__this, NULL);
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
// HTC.UnityPlugin.Pointer3D.TouchRaycaster HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::get_touchPointerRaycaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046 (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, const RuntimeMethod* method) 
{
	{
		// public TouchRaycaster touchPointerRaycaster { get; private set; }
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_0 = __this->___U3CtouchPointerRaycasterU3Ek__BackingField_43;
		return L_0;
	}
}
// System.Void HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::set_touchPointerRaycaster(HTC.UnityPlugin.Pointer3D.TouchRaycaster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchEventData_set_touchPointerRaycaster_m0C0496881BC1C62B0D8279352685A623E5AD3F13 (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TouchRaycaster touchPointerRaycaster { get; private set; }
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_0 = ___0_value;
		__this->___U3CtouchPointerRaycasterU3Ek__BackingField_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchPointerRaycasterU3Ek__BackingField_43), (void*)L_0);
		return;
	}
}
// System.Void HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::.ctor(HTC.UnityPlugin.Pointer3D.TouchRaycaster,UnityEngine.EventSystems.EventSystem,UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchEventData__ctor_m8C2D1CE9C7E5F5B4D721803966C9B648ED07D529 (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* ___0_ownerRaycaster, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___1_eventSystem, int32_t ___2_btn, const RuntimeMethod* method) 
{
	{
		// public TouchEventData(TouchRaycaster ownerRaycaster, EventSystem eventSystem, InputButton btn) : base(ownerRaycaster, eventSystem)
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_0 = ___0_ownerRaycaster;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1 = ___1_eventSystem;
		Pointer3DEventData__ctor_m03546D2D8CA815F90C79BFCC45E9D2D796A940E0(__this, L_0, L_1, NULL);
		// touchPointerRaycaster = ownerRaycaster;
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_2 = ___0_ownerRaycaster;
		TouchEventData_set_touchPointerRaycaster_m0C0496881BC1C62B0D8279352685A623E5AD3F13_inline(__this, L_2, NULL);
		// button = btn;
		int32_t L_3 = ___2_btn;
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::GetPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchEventData_GetPress_m0577BD4E2C4885A5401DE177B016B7666DCFD9DA (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var hitRange = touchPointerRaycaster.GetButtonHitRange(button);
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_0;
		L_0 = TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline(__this, NULL);
		int32_t L_1;
		L_1 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(__this, NULL);
		NullCheck(L_0);
		float L_2;
		L_2 = TouchRaycaster_GetButtonHitRange_m0A422616E984660BB1A6A46594C7063F2E4D0566(L_0, L_1, NULL);
		V_0 = L_2;
		// return touchPointerRaycaster.CurrentFrameHitRange <= hitRange;
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_3;
		L_3 = TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline(__this, NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = TouchRaycaster_get_CurrentFrameHitRange_m5CCF63917EE3F6ED66FE5FA7088B13C37DCBFAB6_inline(L_3, NULL);
		float L_5 = V_0;
		return (bool)((((int32_t)((!(((float)L_4) <= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::GetPressDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchEventData_GetPressDown_mFDA16FC7D0DB4930E8D519594361D1C952AFBDB8 (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var hitRange = touchPointerRaycaster.GetButtonHitRange(button);
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_0;
		L_0 = TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline(__this, NULL);
		int32_t L_1;
		L_1 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(__this, NULL);
		NullCheck(L_0);
		float L_2;
		L_2 = TouchRaycaster_GetButtonHitRange_m0A422616E984660BB1A6A46594C7063F2E4D0566(L_0, L_1, NULL);
		V_0 = L_2;
		// return touchPointerRaycaster.PreviousFrameHitRange > hitRange && touchPointerRaycaster.CurrentFrameHitRange <= hitRange;
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_3;
		L_3 = TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline(__this, NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = TouchRaycaster_get_PreviousFrameHitRange_mDD3AAC977DCF0D60C14F63FBDA56E2431F0B039B_inline(L_3, NULL);
		float L_5 = V_0;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_6;
		L_6 = TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline(__this, NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = TouchRaycaster_get_CurrentFrameHitRange_m5CCF63917EE3F6ED66FE5FA7088B13C37DCBFAB6_inline(L_6, NULL);
		float L_8 = V_0;
		return (bool)((((int32_t)((!(((float)L_7) <= ((float)L_8)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		return (bool)0;
	}
}
// System.Boolean HTC.UnityPlugin.Pointer3D.TouchRaycaster/TouchEventData::GetPressUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchEventData_GetPressUp_mA94D80D227B1BFB6C1430D187C2B47137081C5E1 (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var hitRange = touchPointerRaycaster.GetButtonHitRange(button);
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_0;
		L_0 = TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline(__this, NULL);
		int32_t L_1;
		L_1 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(__this, NULL);
		NullCheck(L_0);
		float L_2;
		L_2 = TouchRaycaster_GetButtonHitRange_m0A422616E984660BB1A6A46594C7063F2E4D0566(L_0, L_1, NULL);
		V_0 = L_2;
		// return touchPointerRaycaster.PreviousFrameHitRange <= hitRange && touchPointerRaycaster.CurrentFrameHitRange > hitRange;
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_3;
		L_3 = TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline(__this, NULL);
		NullCheck(L_3);
		float L_4;
		L_4 = TouchRaycaster_get_PreviousFrameHitRange_mDD3AAC977DCF0D60C14F63FBDA56E2431F0B039B_inline(L_3, NULL);
		float L_5 = V_0;
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_002f;
		}
	}
	{
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_6;
		L_6 = TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline(__this, NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = TouchRaycaster_get_CurrentFrameHitRange_m5CCF63917EE3F6ED66FE5FA7088B13C37DCBFAB6_inline(L_6, NULL);
		float L_8 = V_0;
		return (bool)((((float)L_7) > ((float)L_8))? 1 : 0);
	}

IL_002f:
	{
		return (bool)0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C* EyeManager_get_Instance_m8FFA1396FB6E815190422ECD33BD9BAD1BDCB387_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static EyeManager Instance { get { return m_Instance; } }
		il2cpp_codegen_runtime_class_init_inline(EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_il2cpp_TypeInfo_var);
		EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C* L_0 = ((EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_StaticFields*)il2cpp_codegen_static_fields_for(EyeManager_t571F993FE31D7991E561A87B07B4582E9EA46C0C_il2cpp_TypeInfo_var))->___m_Instance_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchEventData_set_touchPointerRaycaster_m0C0496881BC1C62B0D8279352685A623E5AD3F13_inline (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TouchRaycaster touchPointerRaycaster { get; private set; }
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_0 = ___0_value;
		__this->___U3CtouchPointerRaycasterU3Ek__BackingField_43 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtouchPointerRaycasterU3Ek__BackingField_43), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public InputButton button { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField_23 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* TouchEventData_get_touchPointerRaycaster_m84DCFBC73E63283F8E4A12882970AB0CA4129046_inline (TouchEventData_t1728FE4CD9F731D29CD9973653F4FF122AD20364* __this, const RuntimeMethod* method) 
{
	{
		// public TouchRaycaster touchPointerRaycaster { get; private set; }
		TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* L_0 = __this->___U3CtouchPointerRaycasterU3Ek__BackingField_43;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TouchRaycaster_get_CurrentFrameHitRange_m5CCF63917EE3F6ED66FE5FA7088B13C37DCBFAB6_inline (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, const RuntimeMethod* method) 
{
	{
		// public float CurrentFrameHitRange { get { return currHitRange; } }
		float L_0 = __this->___currHitRange_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TouchRaycaster_get_PreviousFrameHitRange_mDD3AAC977DCF0D60C14F63FBDA56E2431F0B039B_inline (TouchRaycaster_tD38A71C985B7FBA1820634C1D2F3176AF110C45F* __this, const RuntimeMethod* method) 
{
	{
		// public float PreviousFrameHitRange { get { return prevHitRange; } }
		float L_0 = __this->___prevHitRange_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
