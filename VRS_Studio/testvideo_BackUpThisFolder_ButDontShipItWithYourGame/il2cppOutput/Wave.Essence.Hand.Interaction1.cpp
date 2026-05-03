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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Collections.Generic.Dictionary`2<System.Boolean,System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.FingerBendingLevel,UnityEngine.Quaternion[]>>
struct Dictionary_2_tF788638AE1F25EB366F52760253EC99ECB26592F;
// System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>
struct Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785;
// System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>
struct Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Quaternion>
struct IEnumerable_1_t2BB095AB2DF67A05AFA977F9A716C856D31DC5DA;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEqualityComparer`1<Wave.Essence.Hand.Interaction.HandPoseType>
struct IEqualityComparer_1_t2D3CAF4F29718EA3D84E88200CF97B7B07F3CB8A;
// System.Collections.Generic.Dictionary`2/KeyCollection<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>
struct KeyCollection_tF6C7AE7EFBBB0CCF853D323503BF44A5155D0839;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<Wave.Essence.Hand.Interaction.GrabPose>
struct List_1_tF01DF282963EB807608A856FA166240FF538A041;
// System.Collections.Generic.List`1<Wave.Essence.Hand.Interaction.Samples.ModeEvent>
struct List_1_tB0A0F950296A8B4664793E12CB4C1A506A14D005;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Pose>
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.Dictionary`2/ValueCollection<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>
struct ValueCollection_tFB0BB38EC63CA5C1E646FF04F54E269A3AA210AB;
// System.Collections.Generic.Dictionary`2/Entry<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>[]
struct EntryU5BU5D_t341FB786F7967FF8E273819CDA45E413FCFF2B0A;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Wave.Essence.Hand.Interaction.FingerData[]
struct FingerDataU5BU5D_tBD9F9FD5952B45A8C1C27A58C9217A6FA56BB688;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Wave.Essence.Hand.Interaction.Samples.ModeEvent[]
struct ModeEventU5BU5D_t552AFDB161955FE48A212FFE2826EDDFD6F7713A;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap[]
struct BoneMapU5BU5D_t4D8CBEE46C663A7235DCFC7BBF9BF9E2C62A901A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Wave.Essence.Hand.Interaction.Samples.BackEvent
struct BackEvent_t03F12F2FF315D7591503655A94C3D675CCCDC869;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Wave.Essence.Hand.Interaction.HandColliderController
struct HandColliderController_tB35F938211CF3C8893CA529ECE7829BE81FDD2F9;
// Wave.Essence.Hand.Interaction.HandData
struct HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC;
// Wave.Essence.Hand.Interaction.HandGrabInteractable
struct HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843;
// Wave.Essence.Hand.Interaction.HandGrabInteractor
struct HandGrabInteractor_tFCF4E22175DF05758994D7AD8C23091BCBE0ABFD;
// Wave.Essence.Hand.Interaction.HandGrabbableEvent
struct HandGrabbableEvent_t3E0DEDDB6135CF2F7842DCEBC8F620F0A2096A71;
// Wave.Essence.Hand.Interaction.HandMeshRenderer
struct HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2;
// Wave.Essence.Hand.Interaction.HandPose
struct HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Wave.Essence.Hand.Interaction.IGrabbable
struct IGrabbable_t7E71F95C8DF74D65682F7FD2A674F9A60A4D7A7D;
// Wave.Essence.Hand.Interaction.IOneHandContraintMovement
struct IOneHandContraintMovement_t06A5C39347E07F0E13629A234D8B9789D1CA8593;
// Wave.Essence.Extra.JSON_HandModelDesc_Ext
struct JSON_HandModelDesc_Ext_tE1C5E539B9C2C7629A0F0EDAE086A99BA9510F82;
// Wave.Essence.Hand.Interaction.JointCollider
struct JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// Wave.Essence.Hand.Interaction.MeshHandPose
struct MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Wave.Essence.Hand.Interaction.Samples.ModeEvent
struct ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A;
// Wave.Essence.Hand.Interaction.Samples.ModeManager
struct ModeManager_t2574019FAE42F8E312D76D0D5134701063F266F3;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Wave.Essence.Hand.Interaction.PhysicsInteractable
struct PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878;
// Wave.Essence.Hand.Interaction.RealHandPose
struct RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474;
// Wave.Essence.Hand.Interaction.Samples.ResetEvent
struct ResetEvent_tBAC28084651281717E84706A3C3CFBB7895D5EC2;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision
struct OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8;
// Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7
struct U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604;
// Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6
struct U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD;
// Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler
struct CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE;
// Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56;
// Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313;
// Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8
struct U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674;
// Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7
struct U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedHand_t59014EAE31FBA886FEF58DD00936AADF13777358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionMode_tBE9A011E320DB760B4AA7232E6904056AE59A112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollisionState_t6D54A6BF54FDEC1EFE3258AC9D4B0CA16D551165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPoseType_t4298CD626C5E85B92FD70BC31447EEBFB16AEC1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t87779F8BC65034B7F2F363C362BA672BDAED0E61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parallel_tEDD920942C8F814D55C6B029EACB00C81620BD14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0359C18E339D26983713927098C7FFA63B3CC4BD;
IL2CPP_EXTERN_C String_t* _stringLiteral1148B3290820C5F94874005D30C76F25899D1390;
IL2CPP_EXTERN_C String_t* _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539;
IL2CPP_EXTERN_C String_t* _stringLiteral183747E7EC977010805EAAF8319F6D25F0ED515E;
IL2CPP_EXTERN_C String_t* _stringLiteral39E8508782A92F848E97D10E6D820A71061DC562;
IL2CPP_EXTERN_C String_t* _stringLiteral7B507619947011DCF870E1408A03270EEEDDC7B3;
IL2CPP_EXTERN_C String_t* _stringLiteral7FA66199F17628A60899492234E048617FDF539B;
IL2CPP_EXTERN_C String_t* _stringLiteral80D0342A2777B360564CC648407396A1BB16EE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral9125A3DAE5F940B2B69F5209C7FA28985EF7D61B;
IL2CPP_EXTERN_C String_t* _stringLiteralD4997865563C2FA2912566ED71F32AC76E542C29;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisJointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2_m92DBEEC8FA36277FD7A6F14741F48BA2C56E7940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE782E974A22EEF84B340F06C0460839839A38E3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3D8C36C19F1B8550A89AB849881C535AD844FDBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6B1D26ECB4DD4FF6621F564159AED612B54AA7BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m78B101000B0D8F69C450273CD3CBA29DCB7FA4DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Repeat_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m427CABFB2996376721BEBC685E2146B04D2921DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Repeat_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE87FC33D808E8197941E1F3C4FE8BFC6F5D7DC52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4D3A526B9591A2E379DA54A1F38D7CF5CB4D7D32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB267DBD9EBD012316EA5F14638C3593F754A34C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m31C01F0DABDE2B17771A2A66C1BCEA5B9E733B08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5D09EAC550BA645F29306F322D324F87B0F5C64D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_m087EDC8264FE711DB3867692C3CC57229F1AE998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1AB3815922EAB4210EC4D8F2053BEE86A700CE89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6CEE758544FE55D971D9F1F74E4B1AD6E49BB6BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3FFC8568966728D6FA8DFCEE3B7308034749B00C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mEEA11EEF96F3DDA1D99D1ADB236D4C87D27FB686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6C9BC48FF099B7CF07ADD778D1DDD6B7D42ED791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshHandPose_U3CWaitInitU3Eb__6_0_mFA1364E437FE8CC8DF326AC0ACCB496F5620BBF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModeManager_OnListenCollisionEvent_m1371488DED2E64C3F982312B12B6659869FB7E35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RealHandPose_U3CWaitInitU3Eb__7_0_m92F82DF9A2CB6A23C11AC6CBE4ADB24CA3CE27CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CFindBestVelocityU3Eb__0_m562D0EE57DAE13CF1140D001016883C03E30B5FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CFindBestAngularVelocitiesU3Eb__0_mA73C09BF25C1D3FD1B04BBA22E0539B7E047057D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdatePoseU3Ed__7_System_Collections_IEnumerator_Reset_mD07D409546183071935F285F56075A35BC2D6497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdatePoseU3Ed__8_System_Collections_IEnumerator_Reset_mA264F5AE2005FA928CB215B3B66EB1611BB773E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitInitU3Ed__6_System_Collections_IEnumerator_Reset_m93CA026D6DA6CD81976568A0D94B3552FAABF62E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitInitU3Ed__7_System_Collections_IEnumerator_Reset_m784266820FC6B68A2ADD92D6CFC9966024EA27CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_0_0_0_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>
struct Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t341FB786F7967FF8E273819CDA45E413FCFF2B0A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF6C7AE7EFBBB0CCF853D323503BF44A5155D0839* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFB0BB38EC63CA5C1E646FF04F54E269A3AA210AB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Wave.Essence.Hand.Interaction.Samples.ModeEvent>
struct List_1_tB0A0F950296A8B4664793E12CB4C1A506A14D005  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ModeEventU5BU5D_t552AFDB161955FE48A212FFE2826EDDFD6F7713A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Pose>
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Wave.Essence.Hand.Interaction.HandPoseProvider
struct HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7
struct U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604  : public RuntimeObject
{
	// System.Int32 Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Wave.Essence.Hand.Interaction.MeshHandPose Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::<>4__this
	MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* ___U3CU3E4__this_2;
};

// Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6
struct U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD  : public RuntimeObject
{
	// System.Int32 Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Wave.Essence.Hand.Interaction.MeshHandPose Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::<>4__this
	MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* ___U3CU3E4__this_2;
};

// Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7
struct U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302  : public RuntimeObject
{
	// System.Int32 Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Wave.Essence.Hand.Interaction.RealHandPose Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::<>4__this
	RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<Wave.Essence.Hand.Interaction.Samples.ModeEvent>
struct Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB0A0F950296A8B4664793E12CB4C1A506A14D005* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Wave.Essence.Hand.Interaction.FingerRequirement
struct FingerRequirement_tC57DC2CC0AC6740ABB00B22DCBD4F2DB7F19937A 
{
	// Wave.Essence.Hand.Interaction.GrabRequirement Wave.Essence.Hand.Interaction.FingerRequirement::thumb
	int32_t ___thumb_0;
	// Wave.Essence.Hand.Interaction.GrabRequirement Wave.Essence.Hand.Interaction.FingerRequirement::index
	int32_t ___index_1;
	// Wave.Essence.Hand.Interaction.GrabRequirement Wave.Essence.Hand.Interaction.FingerRequirement::middle
	int32_t ___middle_2;
	// Wave.Essence.Hand.Interaction.GrabRequirement Wave.Essence.Hand.Interaction.FingerRequirement::ring
	int32_t ___ring_3;
	// Wave.Essence.Hand.Interaction.GrabRequirement Wave.Essence.Hand.Interaction.FingerRequirement::pinky
	int32_t ___pinky_4;
};

// Wave.Essence.Hand.Interaction.HandGrabGesture
struct HandGrabGesture_t214B0D8EB7D34CDE4FE219B9A3A3C4836DE9105A 
{
	// Wave.Essence.Hand.Interaction.FingerBendingLevel Wave.Essence.Hand.Interaction.HandGrabGesture::thumbPose
	uint32_t ___thumbPose_0;
	// Wave.Essence.Hand.Interaction.FingerBendingLevel Wave.Essence.Hand.Interaction.HandGrabGesture::indexPose
	uint32_t ___indexPose_1;
	// Wave.Essence.Hand.Interaction.FingerBendingLevel Wave.Essence.Hand.Interaction.HandGrabGesture::middlePose
	uint32_t ___middlePose_2;
	// Wave.Essence.Hand.Interaction.FingerBendingLevel Wave.Essence.Hand.Interaction.HandGrabGesture::ringPose
	uint32_t ___ringPose_3;
	// Wave.Essence.Hand.Interaction.FingerBendingLevel Wave.Essence.Hand.Interaction.HandGrabGesture::pinkyPose
	uint32_t ___pinkyPose_4;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tBBA4C491159C220BD0D1C968C03C237AF712C427 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tBBA4C491159C220BD0D1C968C03C237AF712C427__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t6044E6DDACFF53A946EC20CC482674B4FA23A58F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t6044E6DDACFF53A946EC20CC482674B4FA23A58F__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t6C7CAC2B239F0784B1CBB53DABBCEA348B1FA485 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t6C7CAC2B239F0784B1CBB53DABBCEA348B1FA485__padding[28];
	};
};

// Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap
struct BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025 
{
	// Wave.Essence.Hand.HandManager/HandJoint Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap::BoneID
	int32_t ___BoneID_0;
	// System.String Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap::DisplayName
	String_t* ___DisplayName_1;
	// Wave.Essence.Hand.HandManager/HandJoint Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap::BoneParentID
	int32_t ___BoneParentID_2;
};
// Native definition for P/Invoke marshalling of Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap
struct BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshaled_pinvoke
{
	int32_t ___BoneID_0;
	char* ___DisplayName_1;
	int32_t ___BoneParentID_2;
};
// Native definition for COM marshalling of Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap
struct BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshaled_com
{
	int32_t ___BoneID_0;
	Il2CppChar* ___DisplayName_1;
	int32_t ___BoneParentID_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tCCC96E1565B875DD627D89CB9C4C55B6E113C0DC  : public RuntimeObject
{
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// Wave.Essence.Hand.Interaction.GrabOffset
struct GrabOffset_t4398BA26F0E6C8A441DCD4E6B2A60D8289DF83B6 
{
	// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.GrabOffset::sourcePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition_0;
	// UnityEngine.Quaternion Wave.Essence.Hand.Interaction.GrabOffset::sourceRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___sourceRotation_1;
	// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.GrabOffset::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_2;
	// UnityEngine.Quaternion Wave.Essence.Hand.Interaction.GrabOffset::targetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation_3;
};

// Wave.Essence.Hand.Interaction.JointData
struct JointData_tC69B8295550D3B5A67AD8A202895B6E8583C8DC1 
{
	// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.JointData::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion Wave.Essence.Hand.Interaction.JointData::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
	// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.JointData::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_2;
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

// System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734 
{
	// System.Boolean System.Threading.Tasks.ParallelLoopResult::_completed
	bool ____completed_0;
	// System.Nullable`1<System.Int64> System.Threading.Tasks.ParallelLoopResult::_lowestBreakIteration
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____lowestBreakIteration_1;
};
// Native definition for P/Invoke marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshaled_pinvoke
{
	int32_t ____completed_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____lowestBreakIteration_1;
};
// Native definition for COM marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshaled_com
{
	int32_t ____completed_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____lowestBreakIteration_1;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0::velocities
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___velocities_0;
	// Wave.Essence.Hand.Interaction.PhysicsInteractable Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0::<>4__this
	PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* ___U3CU3E4__this_1;
	// System.Single Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0::bestScore
	float ___bestScore_2;
	// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0::bestVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bestVelocity_3;
};

// Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0::velocities
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___velocities_0;
	// Wave.Essence.Hand.Interaction.PhysicsInteractable Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0::<>4__this
	PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* ___U3CU3E4__this_1;
	// System.Single Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0::bestScore
	float ___bestScore_2;
	// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0::bestVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bestVelocity_3;
};

// Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8
struct U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674  : public RuntimeObject
{
	// System.Int32 Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Wave.Essence.Hand.Interaction.RealHandPose Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::<>4__this
	RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::<position>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpositionU3E5__2_3;
	// UnityEngine.Quaternion Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::<rotation>5__3
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CrotationU3E5__3_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Wave.Essence.Hand.Interaction.HandData
struct HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC  : public RuntimeObject
{
	// System.Boolean Wave.Essence.Hand.Interaction.HandData::valid
	bool ___valid_1;
	// System.Boolean Wave.Essence.Hand.Interaction.HandData::isTracked
	bool ___isTracked_2;
	// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.HandData::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_3;
	// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.HandData::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_4;
	// Wave.Essence.Hand.Interaction.JointData Wave.Essence.Hand.Interaction.HandData::palm
	JointData_tC69B8295550D3B5A67AD8A202895B6E8583C8DC1 ___palm_5;
	// Wave.Essence.Hand.Interaction.JointData Wave.Essence.Hand.Interaction.HandData::wrist
	JointData_tC69B8295550D3B5A67AD8A202895B6E8583C8DC1 ___wrist_6;
	// Wave.Essence.Hand.Interaction.FingerData[] Wave.Essence.Hand.Interaction.HandData::fingers
	FingerDataU5BU5D_tBD9F9FD5952B45A8C1C27A58C9217A6FA56BB688* ___fingers_7;
};

// Wave.Essence.Hand.Interaction.Indicator
struct Indicator_tFCCF73CB9516FF1308DB683E4A858DABDDEC1E8B 
{
	// System.Boolean Wave.Essence.Hand.Interaction.Indicator::enableIndicator
	bool ___enableIndicator_0;
	// System.Boolean Wave.Essence.Hand.Interaction.Indicator::autoIndicator
	bool ___autoIndicator_1;
	// UnityEngine.GameObject Wave.Essence.Hand.Interaction.Indicator::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_2;
	// Wave.Essence.Hand.Interaction.GrabOffset Wave.Essence.Hand.Interaction.Indicator::grabOffset
	GrabOffset_t4398BA26F0E6C8A441DCD4E6B2A60D8289DF83B6 ___grabOffset_3;
};
// Native definition for P/Invoke marshalling of Wave.Essence.Hand.Interaction.Indicator
struct Indicator_tFCCF73CB9516FF1308DB683E4A858DABDDEC1E8B_marshaled_pinvoke
{
	int32_t ___enableIndicator_0;
	int32_t ___autoIndicator_1;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_2;
	GrabOffset_t4398BA26F0E6C8A441DCD4E6B2A60D8289DF83B6 ___grabOffset_3;
};
// Native definition for COM marshalling of Wave.Essence.Hand.Interaction.Indicator
struct Indicator_tFCCF73CB9516FF1308DB683E4A858DABDDEC1E8B_marshaled_com
{
	int32_t ___enableIndicator_0;
	int32_t ___autoIndicator_1;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_2;
	GrabOffset_t4398BA26F0E6C8A441DCD4E6B2A60D8289DF83B6 ___grabOffset_3;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Wave.Essence.Hand.Interaction.GrabPose
struct GrabPose_tD8CFD3286067C1DB5E6A8CAAEE8AA6903BFBB3CB 
{
	// System.String Wave.Essence.Hand.Interaction.GrabPose::grabPoseName
	String_t* ___grabPoseName_0;
	// Wave.Essence.Hand.Interaction.HandGrabGesture Wave.Essence.Hand.Interaction.GrabPose::handGrabGesture
	HandGrabGesture_t214B0D8EB7D34CDE4FE219B9A3A3C4836DE9105A ___handGrabGesture_1;
	// UnityEngine.Quaternion[] Wave.Essence.Hand.Interaction.GrabPose::recordedGrabRotations
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___recordedGrabRotations_2;
	// System.Boolean Wave.Essence.Hand.Interaction.GrabPose::isLeft
	bool ___isLeft_3;
	// Wave.Essence.Hand.Interaction.Indicator Wave.Essence.Hand.Interaction.GrabPose::indicator
	Indicator_tFCCF73CB9516FF1308DB683E4A858DABDDEC1E8B ___indicator_4;
	// Wave.Essence.Hand.Interaction.GrabOffset Wave.Essence.Hand.Interaction.GrabPose::grabOffset
	GrabOffset_t4398BA26F0E6C8A441DCD4E6B2A60D8289DF83B6 ___grabOffset_5;
};
// Native definition for P/Invoke marshalling of Wave.Essence.Hand.Interaction.GrabPose
struct GrabPose_tD8CFD3286067C1DB5E6A8CAAEE8AA6903BFBB3CB_marshaled_pinvoke
{
	char* ___grabPoseName_0;
	HandGrabGesture_t214B0D8EB7D34CDE4FE219B9A3A3C4836DE9105A ___handGrabGesture_1;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___recordedGrabRotations_2;
	int32_t ___isLeft_3;
	Indicator_tFCCF73CB9516FF1308DB683E4A858DABDDEC1E8B_marshaled_pinvoke ___indicator_4;
	GrabOffset_t4398BA26F0E6C8A441DCD4E6B2A60D8289DF83B6 ___grabOffset_5;
};
// Native definition for COM marshalling of Wave.Essence.Hand.Interaction.GrabPose
struct GrabPose_tD8CFD3286067C1DB5E6A8CAAEE8AA6903BFBB3CB_marshaled_com
{
	Il2CppChar* ___grabPoseName_0;
	HandGrabGesture_t214B0D8EB7D34CDE4FE219B9A3A3C4836DE9105A ___handGrabGesture_1;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___recordedGrabRotations_2;
	int32_t ___isLeft_3;
	Indicator_tFCCF73CB9516FF1308DB683E4A858DABDDEC1E8B_marshaled_com ___indicator_4;
	GrabOffset_t4398BA26F0E6C8A441DCD4E6B2A60D8289DF83B6 ___grabOffset_5;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision
struct OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8  : public MulticastDelegate_t
{
};

// Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler
struct CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE  : public MulticastDelegate_t
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Wave.Essence.Hand.Interaction.Samples.BackEvent
struct BackEvent_t03F12F2FF315D7591503655A94C3D675CCCDC869  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.DateTime Wave.Essence.Hand.Interaction.Samples.BackEvent::lastEventTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastEventTime_4;
	// System.Int32 Wave.Essence.Hand.Interaction.Samples.BackEvent::intervalTime
	int32_t ___intervalTime_5;
};

// Wave.Essence.Hand.Interaction.HandGrabInteractable
struct HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Text.StringBuilder Wave.Essence.Hand.Interaction.HandGrabInteractable::m_sb
	StringBuilder_t* ___m_sb_5;
	// System.Int32 Wave.Essence.Hand.Interaction.HandGrabInteractable::logFrame
	int32_t ___logFrame_6;
	// Wave.Essence.Hand.Interaction.HandGrabInteractor Wave.Essence.Hand.Interaction.HandGrabInteractable::m_Grabber
	HandGrabInteractor_tFCF4E22175DF05758994D7AD8C23091BCBE0ABFD* ___m_Grabber_7;
	// System.Boolean Wave.Essence.Hand.Interaction.HandGrabInteractable::m_IsGrabbable
	bool ___m_IsGrabbable_8;
	// Wave.Essence.Hand.Interaction.FingerRequirement Wave.Essence.Hand.Interaction.HandGrabInteractable::m_FingerRequirement
	FingerRequirement_tC57DC2CC0AC6740ABB00B22DCBD4F2DB7F19937A ___m_FingerRequirement_9;
	// Wave.Essence.Hand.Interaction.HandGrabbableEvent Wave.Essence.Hand.Interaction.HandGrabInteractable::m_OnBeginGrabbed
	HandGrabbableEvent_t3E0DEDDB6135CF2F7842DCEBC8F620F0A2096A71* ___m_OnBeginGrabbed_10;
	// Wave.Essence.Hand.Interaction.HandGrabbableEvent Wave.Essence.Hand.Interaction.HandGrabInteractable::m_OnEndGrabbed
	HandGrabbableEvent_t3E0DEDDB6135CF2F7842DCEBC8F620F0A2096A71* ___m_OnEndGrabbed_11;
	// UnityEngine.Rigidbody Wave.Essence.Hand.Interaction.HandGrabInteractable::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_12;
	// System.Collections.Generic.List`1<Wave.Essence.Hand.Interaction.GrabPose> Wave.Essence.Hand.Interaction.HandGrabInteractable::m_GrabPoses
	List_1_tF01DF282963EB807608A856FA166240FF538A041* ___m_GrabPoses_13;
	// Wave.Essence.Hand.Interaction.GrabPose Wave.Essence.Hand.Interaction.HandGrabInteractable::m_BestGrabPose
	GrabPose_tD8CFD3286067C1DB5E6A8CAAEE8AA6903BFBB3CB ___m_BestGrabPose_14;
	// System.Boolean Wave.Essence.Hand.Interaction.HandGrabInteractable::m_ShowAllIndicator
	bool ___m_ShowAllIndicator_15;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Wave.Essence.Hand.Interaction.HandGrabInteractable::allColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___allColliders_16;
	// Wave.Essence.Hand.Interaction.HandGrabInteractor Wave.Essence.Hand.Interaction.HandGrabInteractable::closestGrabber
	HandGrabInteractor_tFCF4E22175DF05758994D7AD8C23091BCBE0ABFD* ___closestGrabber_17;
	// Wave.Essence.Hand.Interaction.IOneHandContraintMovement Wave.Essence.Hand.Interaction.HandGrabInteractable::m_OneHandContraintMovement
	IOneHandContraintMovement_t06A5C39347E07F0E13629A234D8B9789D1CA8593* ___m_OneHandContraintMovement_18;
	// System.Int32 Wave.Essence.Hand.Interaction.HandGrabInteractable::m_PreviewIndex
	int32_t ___m_PreviewIndex_19;
	// UnityEngine.RaycastHit[] Wave.Essence.Hand.Interaction.HandGrabInteractable::hitResults
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___hitResults_20;
};

// Wave.Essence.Hand.Interaction.HandMeshRenderer
struct HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Wave.Essence.Hand.Interaction.HandMeshRenderer::BNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___BNames_6;
	// Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap[] Wave.Essence.Hand.Interaction.HandMeshRenderer::boneMap
	BoneMapU5BU5D_t4D8CBEE46C663A7235DCFC7BBF9BF9E2C62A901A* ___boneMap_7;
	// Wave.Essence.Hand.Interaction.Handedness Wave.Essence.Hand.Interaction.HandMeshRenderer::m_Handedness
	int32_t ___m_Handedness_9;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::m_EnableCollider
	bool ___m_EnableCollider_10;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::m_UseRuntimeModel
	bool ___m_UseRuntimeModel_11;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::m_UseScale
	bool ___m_UseScale_12;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::showElectronicHandInControllerMode
	bool ___showElectronicHandInControllerMode_13;
	// UnityEngine.GameObject Wave.Essence.Hand.Interaction.HandMeshRenderer::Hand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Hand_14;
	// UnityEngine.Transform[] Wave.Essence.Hand.Interaction.HandMeshRenderer::BonePoses
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___BonePoses_15;
	// UnityEngine.Transform[] Wave.Essence.Hand.Interaction.HandMeshRenderer::runtimeBonePoses
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___runtimeBonePoses_16;
	// UnityEngine.Transform[] Wave.Essence.Hand.Interaction.HandMeshRenderer::customizedBonePoses
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___customizedBonePoses_17;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::showConfidenceAsAlpha
	bool ___showConfidenceAsAlpha_18;
	// UnityEngine.GameObject Wave.Essence.Hand.Interaction.HandMeshRenderer::m_SystemHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_SystemHand_19;
	// UnityEngine.GameObject Wave.Essence.Hand.Interaction.HandMeshRenderer::m_SystemHandMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_SystemHandMesh_20;
	// UnityEngine.GameObject[] Wave.Essence.Hand.Interaction.HandMeshRenderer::handTran
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___handTran_21;
	// UnityEngine.Mesh Wave.Essence.Hand.Interaction.HandMeshRenderer::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_22;
	// UnityEngine.SkinnedMeshRenderer Wave.Essence.Hand.Interaction.HandMeshRenderer::skinMeshRend
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___skinMeshRend_23;
	// UnityEngine.SkinnedMeshRenderer Wave.Essence.Hand.Interaction.HandMeshRenderer::customizedSkinMeshRend
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___customizedSkinMeshRend_24;
	// System.IntPtr Wave.Essence.Hand.Interaction.HandMeshRenderer::handModel
	intptr_t ___handModel_25;
	// Wave.Essence.Extra.JSON_HandModelDesc_Ext Wave.Essence.Hand.Interaction.HandMeshRenderer::handModelDesc
	JSON_HandModelDesc_Ext_tE1C5E539B9C2C7629A0F0EDAE086A99BA9510F82* ___handModelDesc_26;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::isHandStable
	bool ___isHandStable_27;
	// System.Int32 Wave.Essence.Hand.Interaction.HandMeshRenderer::rootId
	int32_t ___rootId_28;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::updateRoot
	bool ___updateRoot_29;
	// System.Int32 Wave.Essence.Hand.Interaction.HandMeshRenderer::updatedFrameCount
	int32_t ___updatedFrameCount_30;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::isGrabbing
	bool ___isGrabbing_31;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::isConstraint
	bool ___isConstraint_32;
	// Wave.Essence.Hand.Interaction.HandGrabInteractor Wave.Essence.Hand.Interaction.HandMeshRenderer::handGrabber
	HandGrabInteractor_tFCF4E22175DF05758994D7AD8C23091BCBE0ABFD* ___handGrabber_33;
	// UnityEngine.Quaternion[] Wave.Essence.Hand.Interaction.HandMeshRenderer::grabJointsRotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___grabJointsRotation_34;
	// Wave.Essence.Hand.Interaction.HandColliderController Wave.Essence.Hand.Interaction.HandMeshRenderer::m_HandCollider
	HandColliderController_tB35F938211CF3C8893CA529ECE7829BE81FDD2F9* ___m_HandCollider_35;
	// Wave.Essence.XR_InteractionMode Wave.Essence.Hand.Interaction.HandMeshRenderer::preInteractionMode
	int32_t ___preInteractionMode_36;
	// Wave.Essence.XR_InteractionMode Wave.Essence.Hand.Interaction.HandMeshRenderer::currInteractionMode
	int32_t ___currInteractionMode_37;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::showECHand
	bool ___showECHand_38;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::enableDirectPreview
	bool ___enableDirectPreview_39;
	// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::hasIMManager
	bool ___hasIMManager_40;
};

// Wave.Essence.Hand.Interaction.HandPose
struct HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Wave.Essence.Hand.Interaction.HandPoseType Wave.Essence.Hand.Interaction.HandPose::m_PoseType
	uint32_t ___m_PoseType_6;
	// System.Boolean Wave.Essence.Hand.Interaction.HandPose::m_Initialized
	bool ___m_Initialized_7;
	// System.Boolean Wave.Essence.Hand.Interaction.HandPose::m_IsTracked
	bool ___m_IsTracked_8;
	// UnityEngine.Vector3[] Wave.Essence.Hand.Interaction.HandPose::m_Position
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Position_10;
	// UnityEngine.Vector3[] Wave.Essence.Hand.Interaction.HandPose::m_LocalPosition
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_LocalPosition_11;
	// UnityEngine.Quaternion[] Wave.Essence.Hand.Interaction.HandPose::m_Rotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___m_Rotation_12;
	// UnityEngine.Quaternion[] Wave.Essence.Hand.Interaction.HandPose::m_LocalRotation
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___m_LocalRotation_13;
};

// Wave.Essence.Hand.Interaction.JointCollider
struct JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CapsuleCollider Wave.Essence.Hand.Interaction.JointCollider::m_Collider
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___m_Collider_4;
	// Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision Wave.Essence.Hand.Interaction.JointCollider::onJointCollision
	OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* ___onJointCollision_5;
	// Wave.Essence.Hand.Interaction.JointType Wave.Essence.Hand.Interaction.JointCollider::jointType
	int32_t ___jointType_8;
};

// Wave.Essence.Hand.Interaction.Samples.ModeEvent
struct ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionMode Wave.Essence.Hand.Interaction.Samples.ModeEvent::collisionMode
	int32_t ___collisionMode_4;
	// Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler Wave.Essence.Hand.Interaction.Samples.ModeEvent::m_CollisionHandler
	CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* ___m_CollisionHandler_5;
};

// Wave.Essence.Hand.Interaction.Samples.ModeManager
struct ModeManager_t2574019FAE42F8E312D76D0D5134701063F266F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Wave.Essence.Hand.Interaction.Samples.ModeEvent> Wave.Essence.Hand.Interaction.Samples.ModeManager::modeEvents
	List_1_tB0A0F950296A8B4664793E12CB4C1A506A14D005* ___modeEvents_4;
};

// Wave.Essence.Hand.Interaction.PhysicsInteractable
struct PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Wave.Essence.Hand.Interaction.PhysicsInteractable::forceMultiplier
	float ___forceMultiplier_4;
	// System.Int32 Wave.Essence.Hand.Interaction.PhysicsInteractable::MIN_POSE_SAMPLES
	int32_t ___MIN_POSE_SAMPLES_5;
	// System.Int32 Wave.Essence.Hand.Interaction.PhysicsInteractable::MAX_POSE_SAMPLES
	int32_t ___MAX_POSE_SAMPLES_6;
	// UnityEngine.Rigidbody Wave.Essence.Hand.Interaction.PhysicsInteractable::interactableRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___interactableRigidbody_7;
	// System.Collections.Generic.List`1<UnityEngine.Pose> Wave.Essence.Hand.Interaction.PhysicsInteractable::movementPoses
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___movementPoses_8;
	// System.Collections.Generic.List`1<System.Single> Wave.Essence.Hand.Interaction.PhysicsInteractable::timestamps
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___timestamps_9;
	// System.Boolean Wave.Essence.Hand.Interaction.PhysicsInteractable::isBegin
	bool ___isBegin_10;
	// System.Boolean Wave.Essence.Hand.Interaction.PhysicsInteractable::isEnd
	bool ___isEnd_11;
	// System.Object Wave.Essence.Hand.Interaction.PhysicsInteractable::lockVel
	RuntimeObject* ___lockVel_12;
	// System.Object Wave.Essence.Hand.Interaction.PhysicsInteractable::lockAngVel
	RuntimeObject* ___lockAngVel_13;
};

// Wave.Essence.Hand.Interaction.Samples.ResetEvent
struct ResetEvent_tBAC28084651281717E84706A3C3CFBB7895D5EC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.DateTime Wave.Essence.Hand.Interaction.Samples.ResetEvent::lastEventTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastEventTime_4;
	// System.Int32 Wave.Essence.Hand.Interaction.Samples.ResetEvent::intervalTime
	int32_t ___intervalTime_5;
};

// Wave.Essence.Hand.Interaction.MeshHandPose
struct MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB  : public HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78
{
	// Wave.Essence.Hand.Interaction.HandMeshRenderer Wave.Essence.Hand.Interaction.MeshHandPose::m_HandMesh
	HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* ___m_HandMesh_14;
	// System.Boolean Wave.Essence.Hand.Interaction.MeshHandPose::keepUpdate
	bool ___keepUpdate_15;
};

// Wave.Essence.Hand.Interaction.RealHandPose
struct RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474  : public HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78
{
	// Wave.Essence.Hand.Interaction.Handedness Wave.Essence.Hand.Interaction.RealHandPose::m_Handedness
	int32_t ___m_Handedness_14;
	// System.Boolean Wave.Essence.Hand.Interaction.RealHandPose::keepUpdate
	bool ___keepUpdate_15;
};

// System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>

// System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>

// System.Collections.Generic.List`1<Wave.Essence.Hand.Interaction.Samples.ModeEvent>
struct List_1_tB0A0F950296A8B4664793E12CB4C1A506A14D005_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ModeEventU5BU5D_t552AFDB161955FE48A212FFE2826EDDFD6F7713A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Wave.Essence.Hand.Interaction.Samples.ModeEvent>

// System.Collections.Generic.List`1<UnityEngine.Pose>
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Pose>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// Wave.Essence.Hand.Interaction.HandPoseProvider
struct HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose> Wave.Essence.Hand.Interaction.HandPoseProvider::m_HandPoseMap
	Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* ___m_HandPoseMap_0;
};

// Wave.Essence.Hand.Interaction.HandPoseProvider

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

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

// Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7

// Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7

// Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6

// Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6

// Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7

// Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7

// System.Collections.Generic.List`1/Enumerator<Wave.Essence.Hand.Interaction.Samples.ModeEvent>

// System.Collections.Generic.List`1/Enumerator<Wave.Essence.Hand.Interaction.Samples.ModeEvent>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// Wave.Essence.Hand.Interaction.FingerRequirement

// Wave.Essence.Hand.Interaction.FingerRequirement

// Wave.Essence.Hand.Interaction.HandGrabGesture

// Wave.Essence.Hand.Interaction.HandGrabGesture

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

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

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

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForFixedUpdate

// UnityEngine.WaitForFixedUpdate

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap

// Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tCCC96E1565B875DD627D89CB9C4C55B6E113C0DC_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1F255A9F2D2C2D94C278D49C6EBAF460FC4F812DED8D0C7823661BEE38B8C19E
	__StaticArrayInitTypeSizeU3D20_t6044E6DDACFF53A946EC20CC482674B4FA23A58F ___1F255A9F2D2C2D94C278D49C6EBAF460FC4F812DED8D0C7823661BEE38B8C19E_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::2D03BE73C0FF750EA8FA725F1FE7EA1264E167B77571E93CFF67CAAB434702CA
	__StaticArrayInitTypeSizeU3D20_t6044E6DDACFF53A946EC20CC482674B4FA23A58F ___2D03BE73C0FF750EA8FA725F1FE7EA1264E167B77571E93CFF67CAAB434702CA_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21
	__StaticArrayInitTypeSizeU3D16_tBBA4C491159C220BD0D1C968C03C237AF712C427 ___5B3F9EC0646608DAE43294162F92F82B97E7011A2BFA51A25FE477D18BDC6B21_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::7336197F030DDE061C0E7CDD1A503412D1C844DF360DA1EFC3B25422E0ACD1D2
	__StaticArrayInitTypeSizeU3D28_t6C7CAC2B239F0784B1CBB53DABBCEA348B1FA485 ___7336197F030DDE061C0E7CDD1A503412D1C844DF360DA1EFC3B25422E0ACD1D2_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::73E6E64B64CCADF091BE8790DD4A758DB959C64B0FB0C09024A160357331B89E
	__StaticArrayInitTypeSizeU3D20_t6044E6DDACFF53A946EC20CC482674B4FA23A58F ___73E6E64B64CCADF091BE8790DD4A758DB959C64B0FB0C09024A160357331B89E_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::D44D06471CB6B96FFF644FE4106EDD239A87582CE268C3AB7E8CA1745869E497
	__StaticArrayInitTypeSizeU3D20_t6044E6DDACFF53A946EC20CC482674B4FA23A58F ___D44D06471CB6B96FFF644FE4106EDD239A87582CE268C3AB7E8CA1745869E497_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A
	__StaticArrayInitTypeSizeU3D20_t6044E6DDACFF53A946EC20CC482674B4FA23A58F ___E528F4309E1413E6BC35AEA5D8DB8519384D2FCC33F9DD5D1126D73F104CF92A_6;
};

// <PrivateImplementationDetails>

// UnityEngine.Collision

// UnityEngine.Collision

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

// Wave.Essence.Hand.Interaction.GrabOffset

// Wave.Essence.Hand.Interaction.GrabOffset

// Wave.Essence.Hand.Interaction.JointData

// Wave.Essence.Hand.Interaction.JointData

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Threading.Tasks.ParallelLoopResult

// System.Threading.Tasks.ParallelLoopResult

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0

// Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0

// Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0

// Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0

// Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8

// Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Wave.Essence.Hand.Interaction.HandData
struct HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Boolean,System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.FingerBendingLevel,UnityEngine.Quaternion[]>> Wave.Essence.Hand.Interaction.HandData::s_FingersBending
	Dictionary_2_tF788638AE1F25EB366F52760253EC99ECB26592F* ___s_FingersBending_0;
};

// Wave.Essence.Hand.Interaction.HandData

// Wave.Essence.Hand.Interaction.Indicator

// Wave.Essence.Hand.Interaction.Indicator

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Int32>

// System.Action`1<System.Int32>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// Wave.Essence.Hand.Interaction.GrabPose

// Wave.Essence.Hand.Interaction.GrabPose

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision

// Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision

// Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler

// Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler

// UnityEngine.CapsuleCollider

// UnityEngine.CapsuleCollider

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Wave.Essence.Hand.Interaction.Samples.BackEvent

// Wave.Essence.Hand.Interaction.Samples.BackEvent

// Wave.Essence.Hand.Interaction.HandGrabInteractable

// Wave.Essence.Hand.Interaction.HandGrabInteractable

// Wave.Essence.Hand.Interaction.HandMeshRenderer

// Wave.Essence.Hand.Interaction.HandMeshRenderer

// Wave.Essence.Hand.Interaction.HandPose
struct HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_StaticFields
{
	// System.Text.StringBuilder Wave.Essence.Hand.Interaction.HandPose::m_sb
	StringBuilder_t* ___m_sb_5;
};

// Wave.Essence.Hand.Interaction.HandPose

// Wave.Essence.Hand.Interaction.JointCollider

// Wave.Essence.Hand.Interaction.JointCollider

// Wave.Essence.Hand.Interaction.Samples.ModeEvent

// Wave.Essence.Hand.Interaction.Samples.ModeEvent

// Wave.Essence.Hand.Interaction.Samples.ModeManager

// Wave.Essence.Hand.Interaction.Samples.ModeManager

// Wave.Essence.Hand.Interaction.PhysicsInteractable

// Wave.Essence.Hand.Interaction.PhysicsInteractable

// Wave.Essence.Hand.Interaction.Samples.ResetEvent

// Wave.Essence.Hand.Interaction.Samples.ResetEvent

// Wave.Essence.Hand.Interaction.MeshHandPose

// Wave.Essence.Hand.Interaction.MeshHandPose

// Wave.Essence.Hand.Interaction.RealHandPose

// Wave.Essence.Hand.Interaction.RealHandPose
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB  : public RuntimeArray
{
	ALIGN_FIELD (8) Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 m_Items[1];

	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Repeat<UnityEngine.Vector3>(TResult,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Repeat_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE87FC33D808E8197941E1F3C4FE8BFC6F5D7DC52_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_element, int32_t ___1_count, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Repeat<UnityEngine.Quaternion>(TResult,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Repeat_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m427CABFB2996376721BEBC685E2146B04D2921DA_gshared (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_element, int32_t ___1_count, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Quaternion>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Enumerable_ToArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4D3A526B9591A2E379DA54A1F38D7CF5CB4D7D32_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m552218E4B68F6C7C51DCF1A45DE0F527A167E835_gshared (Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m08968B4E444D2F86EDAE12EC321BE5C00EEBF145_gshared (Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84* __this, uint32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6CEDA0FA9D12BAB0B1B8656CCA79E803D146D4B9_gshared (Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84* __this, uint32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1BE3497D38F844A1C05435F03A1212DE36DEF33B_gshared (Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84* __this, uint32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.UInt32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mA5693CB49EC406D4BE0FE048A8CE588129FFCDA1_gshared (Dictionary_2_tE16E3D7F052319FEE5BEBD869B503332D5DC5F84* __this, uint32_t ___0_key, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Pose>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CEE758544FE55D971D9F1F74E4B1AD6E49BB6BC_gshared_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Pose>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_gshared_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Pose>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1AB3815922EAB4210EC4D8F2053BEE86A700CE89_gshared_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Pose>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mEEA11EEF96F3DDA1D99D1ADB236D4C87D27FB686_gshared (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Pose>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431_gshared (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Pose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6C9BC48FF099B7CF07ADD778D1DDD6B7D42ED791_gshared (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap::.ctor(Wave.Essence.Hand.HandManager/HandJoint,System.String,Wave.Essence.Hand.HandManager/HandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap__ctor_m70E14C684B07C1F28C7240356CCEC9C302DDABED (BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025* __this, int32_t ___0_b, String_t* ___1_name, int32_t ___2_p, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void Wave.Native.Log::d(System.String,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_d_m7AAD323334283E3F8E0ADE1331DF033FC9F88F08 (String_t* ___0_tag, StringBuilder_t* ___1_sb, bool ___2_logInEditor, const RuntimeMethod* method) ;
// System.Void Wave.Native.Log::w(System.String,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_w_m1D9666DBC6BF72FF3EF2C22698DFA87BB3989BDF (String_t* ___0_tag, StringBuilder_t* ___1_sb, bool ___2_logInEditor, const RuntimeMethod* method) ;
// System.Void Wave.Native.Log::e(System.String,System.Text.StringBuilder,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_e_m655F511B71803F04CF5F3FE05E0B2A8D2E34F08E (String_t* ___0_tag, StringBuilder_t* ___1_sb, bool ___2_logInEditor, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Hand.Interaction.HandPoseProvider::RegisterHandPose(Wave.Essence.Hand.Interaction.HandPoseType&,Wave.Essence.Hand.Interaction.HandPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPoseProvider_RegisterHandPose_m4728D2EE68D709EF2CA9C62D2F5765E68DCCF069 (uint32_t* ___0_poseType, HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78** ___1_handPose, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Hand.Interaction.HandPoseProvider::UnregisterHandPose(Wave.Essence.Hand.Interaction.HandPoseType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPoseProvider_UnregisterHandPose_m15B8FB10F5C794AC7F6DD3C98463AEAA6B0DA20C (uint32_t* ___0_poseType, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Repeat<UnityEngine.Vector3>(TResult,System.Int32)
inline RuntimeObject* Enumerable_Repeat_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE87FC33D808E8197941E1F3C4FE8BFC6F5D7DC52 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_element, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*))Enumerable_Repeat_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE87FC33D808E8197941E1F3C4FE8BFC6F5D7DC52_gshared)(___0_element, ___1_count, method);
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Vector3>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_gshared)(___0_source, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Repeat<UnityEngine.Quaternion>(TResult,System.Int32)
inline RuntimeObject* Enumerable_Repeat_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m427CABFB2996376721BEBC685E2146B04D2921DA (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_element, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, int32_t, const RuntimeMethod*))Enumerable_Repeat_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m427CABFB2996376721BEBC685E2146B04D2921DA_gshared)(___0_element, ___1_count, method);
}
// TSource[] System.Linq.Enumerable::ToArray<UnityEngine.Quaternion>(System.Collections.Generic.IEnumerable`1<TSource>)
inline QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* Enumerable_ToArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4D3A526B9591A2E379DA54A1F38D7CF5CB4D7D32 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4D3A526B9591A2E379DA54A1F38D7CF5CB4D7D32_gshared)(___0_source, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>::.ctor()
inline void Dictionary_2__ctor_m6B1D26ECB4DD4FF6621F564159AED612B54AA7BA (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785*, const RuntimeMethod*))Dictionary_2__ctor_m552218E4B68F6C7C51DCF1A45DE0F527A167E835_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose> Wave.Essence.Hand.Interaction.HandPoseProvider::get_HandPoseMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* __this, uint32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785*, uint32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m08968B4E444D2F86EDAE12EC321BE5C00EEBF145_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>::Add(TKey,TValue)
inline void Dictionary_2_Add_mE782E974A22EEF84B340F06C0460839839A38E3B (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* __this, uint32_t ___0_key, HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785*, uint32_t, HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*, const RuntimeMethod*))Dictionary_2_Add_m6CEDA0FA9D12BAB0B1B8656CCA79E803D146D4B9_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>::Remove(TKey)
inline bool Dictionary_2_Remove_m3D8C36C19F1B8550A89AB849881C535AD844FDBF (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* __this, uint32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785*, uint32_t, const RuntimeMethod*))Dictionary_2_Remove_m1BE3497D38F844A1C05435F03A1212DE36DEF33B_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>::get_Item(TKey)
inline HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* Dictionary_2_get_Item_m78B101000B0D8F69C450273CD3CBA29DCB7FA4DA (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* __this, uint32_t ___0_key, const RuntimeMethod* method)
{
	return ((  HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* (*) (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785*, uint32_t, const RuntimeMethod*))Dictionary_2_get_Item_mA5693CB49EC406D4BE0FE048A8CE588129FFCDA1_gshared)(__this, ___0_key, method);
}
// Wave.Essence.Hand.Interaction.HandPose Wave.Essence.Hand.Interaction.HandPoseProvider::GetDefaultHandPose(System.String,Wave.Essence.Hand.Interaction.HandPoseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* HandPoseProvider_GetDefaultHandPose_mDCDEB424BDD5C964A6F04CB12BAD156947D4F068 (String_t* ___0_poseName, uint32_t ___1_poseType, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Hand.Interaction.RealHandPose::get_isLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealHandPose_get_isLeft_m07A81796F31F2D4FB29EF5331DA000944CB50111 (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Wave.Essence.Hand.Interaction.RealHandPose>()
inline RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* GameObject_AddComponent_TisRealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_m087EDC8264FE711DB3867692C3CC57229F1AE998 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Collections.IEnumerator Wave.Essence.Hand.Interaction.MeshHandPose::WaitInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeshHandPose_WaitInit_m525F6C5B155996AC0DA39B33E1BB78CEE34AA5AC (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.HandPose::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_OnDisable_mBCCFFB858015EFB07B74848F2DE67AE5D371F712 (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Wave.Essence.Hand.Interaction.MeshHandPose::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeshHandPose_UpdatePose_mF0546806B0C952FF618E485BEB4DF63547F88D29 (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::get_isLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandMeshRenderer_get_isLeft_m0B3E545441F70BF056A4D55D69A28D800E29D740 (HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::SetJointPositionAndRotation(Wave.Essence.Hand.Interaction.JointType,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandMeshRenderer_SetJointPositionAndRotation_m5C069360768840142C06B9F1B1F7ADD634D0CCAA (HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* __this, int32_t ___0_joint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_local, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitInitU3Ed__6__ctor_mA41ED6D0F4EE8007EAC9048E612EEC0AB931F86B (U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePoseU3Ed__7__ctor_m73F38BFD9D41FC4BCFEB2B8A43A2C393B160125F (U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.HandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_mAA4614F8C5D549F49A562453924406DF7F20D3ED (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.HandPose::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_OnEnable_mF2556BE8DB17C4E495ABF32260B803DC6A598E9B (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHandPose_U3CU3En__0_mBD170F149587D1578D10CE0C5EC298DB5F4BE2F4 (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7 (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* __this, const RuntimeMethod* method) ;
// Wave.Essence.Hand.Interaction.HandPose Wave.Essence.Hand.Interaction.HandPoseProvider::GetHandPose(Wave.Essence.Hand.Interaction.HandPoseType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* HandPoseProvider_GetHandPose_m6DD03960DE54B296BFFC7B7EF007F67A3C5F2311 (uint32_t* ___0_poseType, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Hand.Interaction.HandMeshRenderer::GetJointPositionAndRotation(Wave.Essence.Hand.Interaction.JointType,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandMeshRenderer_GetJointPositionAndRotation_m9762C9A13C3A950EAE26C824860D8369F2EBBC51 (HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* __this, int32_t ___0_joint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, bool ___3_local, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Wave.Essence.Hand.Interaction.RealHandPose::WaitInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealHandPose_WaitInit_mDA568E86308CB2EA12C5A502E32887F8C228FBCD (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Wave.Essence.Hand.Interaction.RealHandPose::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealHandPose_UpdatePose_mE1E6341AE38BAA82CF4B61257BC3FFB47015674B (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.HandPose::SetType(Wave.Essence.Hand.Interaction.HandPoseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_SetType_m8309FBEEB029B86CABA311A0E3F89B5D34D9D0BE (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, uint32_t ___0_poseType, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitInitU3Ed__7__ctor_m2618147AD3497254C78FCA206D29CC872AED0369 (U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePoseU3Ed__8__ctor_m497CF97194298F39BBF3110212F5692125D277E7 (U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.RealHandPose::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealHandPose_U3CU3En__0_mAF30A31769F448834D0F1E738DA5E9D3A5EE4F9B (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// Wave.Essence.Hand.Interaction.HandData Wave.Essence.Hand.Interaction.CachedHand::Get(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC* CachedHand_Get_m59A488116C5A1A621D90A97803DD303729E070D4 (bool ___0_isLeft, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Hand.Interaction.HandData::GetJointPosition(Wave.Essence.Hand.Interaction.JointType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandData_GetJointPosition_mF537F11D34A357B786403E03400585506A27F879 (HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC* __this, int32_t ___0_joint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Hand.Interaction.HandData::GetJointRotation(Wave.Essence.Hand.Interaction.JointType,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandData_GetJointRotation_m80058F8DCD93370E7DB97F9A63FB127FDDEBE9EB (HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC* __this, int32_t ___0_joint, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_rotation, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.JointCollider::InitCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider_InitCollider_m31AEACED760BC88420AD1FC9C65921F454911F8D (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_direction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_direction_m3064DADA49F7F48DA8D62659B1D3545C83C553CB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_solverIterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_solverIterations_m533625CFDF6CB3E9412AD2ACD3FA13A6636A401C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_solverVelocityIterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_solverVelocityIterations_m53C09CB42CA4DA944D52E012BAF8112719AD753B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean Wave.Essence.Hand.Interaction.JointCollider::IsJointCollider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JointCollider_IsJointCollider_m7BB5E3B003C662BF39DE2C271B7D8E75353062AC (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision::Invoke(UnityEngine.Collision,Wave.Essence.Hand.Interaction.JointCollider/CollisionState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_inline (OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Wave.Essence.Hand.Interaction.JointCollider>()
inline JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* Component_GetComponent_TisJointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2_m92DBEEC8FA36277FD7A6F14741F48BA2C56E7940 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable::RecordMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsInteractable_RecordMovement_m1257F3EC321073930236A0C2A90F7A1AE10E8A11 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::CalculateVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_CalculateVelocity_m7B24037F26CA32B0ADF298A98C019725214AAD7B (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::CalculateAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_CalculateAngularVelocity_mDDECAB3C9BAD01017B032D2595605D698B596788 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::ResetInertiaTensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_ResetInertiaTensor_m34020552CA2D42DEA3E01562641A9B292848BD01 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Pose>::Clear()
inline void List_1_Clear_m6CEE758544FE55D971D9F1F74E4B1AD6E49BB6BC_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, const RuntimeMethod*))List_1_Clear_m6CEE758544FE55D971D9F1F74E4B1AD6E49BB6BC_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
inline void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Pose>::get_Count()
inline int32_t List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, const RuntimeMethod*))List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Pose>::Add(T)
inline void List_1_Add_m1AB3815922EAB4210EC4D8F2053BEE86A700CE89_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))List_1_Add_m1AB3815922EAB4210EC4D8F2053BEE86A700CE89_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Pose>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mEEA11EEF96F3DDA1D99D1ADB236D4C87D27FB686 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mEEA11EEF96F3DDA1D99D1ADB236D4C87D27FB686_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::GetVelocity(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_GetVelocity_m4DE6EC9E08C489824C5EF44CBF93C5CF0580CF12 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, int32_t ___0_idx1, int32_t ___1_idx2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::FindBestVelocity(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_FindBestVelocity_mF59EDE7A4E2D6FAC7FEE052C8F491980BB1F77C5 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_velocities, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Pose>::get_Item(System.Int32)
inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, int32_t, const RuntimeMethod*))List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m6A327EA57AB7E49BFEA42E4E6A18BB2E92E7D183 (U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::For(System.Int32,System.Int32,System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734 Parallel_For_mD3332AD2F9C519769F2BEF201C54F3C57EFCF6EC (int32_t ___0_fromInclusive, int32_t ___1_toExclusive, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___2_body, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::GetAngularVelocity(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_GetAngularVelocity_m2CB616EB469C3FCA52A7B914D4194DB09E051AEF (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, int32_t ___0_idx1, int32_t ___1_idx2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::FindBestAngularVelocities(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_FindBestAngularVelocities_mBDC4CF3EECDF1946B49B7348DDFCEF00198646F2 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_velocities, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_axis, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m42E0AFF052F7EC816D9F0BE430724B7632700E08 (U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody Wave.Essence.Hand.Interaction.HandGrabInteractable::get_rigidbody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* HandGrabInteractable_get_rigidbody_mA658BD346AA6EB77CA0A83F3D497A41D63F7FA8C_inline (HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Pose>::.ctor()
inline void List_1__ctor_m6C9BC48FF099B7CF07ADD778D1DDD6B7D42ED791 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, const RuntimeMethod*))List_1__ctor_m6C9BC48FF099B7CF07ADD778D1DDD6B7D42ED791_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___0_index, method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler::Invoke(Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_inline (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Wave.Essence.Hand.Interaction.Samples.ModeEvent>::GetEnumerator()
inline Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1 List_1_GetEnumerator_m3FFC8568966728D6FA8DFCEE3B7308034749B00C (List_1_tB0A0F950296A8B4664793E12CB4C1A506A14D005* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1 (*) (List_1_tB0A0F950296A8B4664793E12CB4C1A506A14D005*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Wave.Essence.Hand.Interaction.Samples.ModeEvent>::Dispose()
inline void Enumerator_Dispose_mB267DBD9EBD012316EA5F14638C3593F754A34C1 (Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Wave.Essence.Hand.Interaction.Samples.ModeEvent>::get_Current()
inline ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* Enumerator_get_Current_m5D09EAC550BA645F29306F322D324F87B0F5C64D_inline (Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1* __this, const RuntimeMethod* method)
{
	return ((  ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* (*) (Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionHandler__ctor_m2AA266CBE88E25812E9686BCC45E982EAE03DBF3 (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent::AddListener(Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeEvent_AddListener_mD59AEBDB05FD0FAD463832A52F015510389A3F4E (ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* __this, CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* ___0_handler, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Wave.Essence.Hand.Interaction.Samples.ModeEvent>::MoveNext()
inline bool Enumerator_MoveNext_m31C01F0DABDE2B17771A2A66C1BCEA5B9E733B08 (Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent::RemoveListener(Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeEvent_RemoveListener_m29DF2D16BFD7136EC09DE9C8FAC94413ADD4884F (ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* __this, CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* ___0_handler, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Internal_ToAxisAngleRad_m36090778CAC5E93CADAD17A95B7C7028E93CA1BF (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_axis, float* ___2_angle, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap
IL2CPP_EXTERN_C void BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshal_pinvoke(const BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025& unmarshaled, BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshaled_pinvoke& marshaled)
{
	marshaled.___BoneID_0 = unmarshaled.___BoneID_0;
	marshaled.___DisplayName_1 = il2cpp_codegen_marshal_string(unmarshaled.___DisplayName_1);
	marshaled.___BoneParentID_2 = unmarshaled.___BoneParentID_2;
}
IL2CPP_EXTERN_C void BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshal_pinvoke_back(const BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshaled_pinvoke& marshaled, BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025& unmarshaled)
{
	int32_t unmarshaledBoneID_temp_0 = 0;
	unmarshaledBoneID_temp_0 = marshaled.___BoneID_0;
	unmarshaled.___BoneID_0 = unmarshaledBoneID_temp_0;
	unmarshaled.___DisplayName_1 = il2cpp_codegen_marshal_string_result(marshaled.___DisplayName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DisplayName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___DisplayName_1));
	int32_t unmarshaledBoneParentID_temp_2 = 0;
	unmarshaledBoneParentID_temp_2 = marshaled.___BoneParentID_2;
	unmarshaled.___BoneParentID_2 = unmarshaledBoneParentID_temp_2;
}
// Conversion method for clean up from marshalling of: Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap
IL2CPP_EXTERN_C void BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshal_pinvoke_cleanup(BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___DisplayName_1);
	marshaled.___DisplayName_1 = NULL;
}
// Conversion methods for marshalling of: Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap
IL2CPP_EXTERN_C void BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshal_com(const BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025& unmarshaled, BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshaled_com& marshaled)
{
	marshaled.___BoneID_0 = unmarshaled.___BoneID_0;
	marshaled.___DisplayName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___DisplayName_1);
	marshaled.___BoneParentID_2 = unmarshaled.___BoneParentID_2;
}
IL2CPP_EXTERN_C void BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshal_com_back(const BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshaled_com& marshaled, BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025& unmarshaled)
{
	int32_t unmarshaledBoneID_temp_0 = 0;
	unmarshaledBoneID_temp_0 = marshaled.___BoneID_0;
	unmarshaled.___BoneID_0 = unmarshaledBoneID_temp_0;
	unmarshaled.___DisplayName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___DisplayName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DisplayName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___DisplayName_1));
	int32_t unmarshaledBoneParentID_temp_2 = 0;
	unmarshaledBoneParentID_temp_2 = marshaled.___BoneParentID_2;
	unmarshaled.___BoneParentID_2 = unmarshaledBoneParentID_temp_2;
}
// Conversion method for clean up from marshalling of: Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap
IL2CPP_EXTERN_C void BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshal_com_cleanup(BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___DisplayName_1);
	marshaled.___DisplayName_1 = NULL;
}
// System.Void Wave.Essence.Hand.Interaction.HandMeshRenderer/BoneMap::.ctor(Wave.Essence.Hand.HandManager/HandJoint,System.String,Wave.Essence.Hand.HandManager/HandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneMap__ctor_m70E14C684B07C1F28C7240356CCEC9C302DDABED (BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025* __this, int32_t ___0_b, String_t* ___1_name, int32_t ___2_p, const RuntimeMethod* method) 
{
	{
		// BoneID = b;
		int32_t L_0 = ___0_b;
		__this->___BoneID_0 = L_0;
		// DisplayName = name;
		String_t* L_1 = ___1_name;
		__this->___DisplayName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DisplayName_1), (void*)L_1);
		// BoneParentID = p;
		int32_t L_2 = ___2_p;
		__this->___BoneParentID_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoneMap__ctor_m70E14C684B07C1F28C7240356CCEC9C302DDABED_AdjustorThunk (RuntimeObject* __this, int32_t ___0_b, String_t* ___1_name, int32_t ___2_p, const RuntimeMethod* method)
{
	BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BoneMap_tCEB6E5C60FE1E811DFD25DD4372791F2DB2B7025*>(__this + _offset);
	BoneMap__ctor_m70E14C684B07C1F28C7240356CCEC9C302DDABED(_thisAdjusted, ___0_b, ___1_name, ___2_p, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Text.StringBuilder Wave.Essence.Hand.Interaction.HandPose::get_sb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* HandPose_get_sb_m5C137F2B374430CFB5986A64371A1C591B08AB3E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_0 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_StaticFields*)il2cpp_codegen_static_fields_for(HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_il2cpp_TypeInfo_var))->___m_sb_5;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// if (m_sb == null) { m_sb = new StringBuilder(); }
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_StaticFields*)il2cpp_codegen_static_fields_for(HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_il2cpp_TypeInfo_var))->___m_sb_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_StaticFields*)il2cpp_codegen_static_fields_for(HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_il2cpp_TypeInfo_var))->___m_sb_5), (void*)L_1);
	}

IL_0011:
	{
		// return m_sb;
		StringBuilder_t* L_2 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_StaticFields*)il2cpp_codegen_static_fields_for(HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78_il2cpp_TypeInfo_var))->___m_sb_5;
		return L_2;
	}
}
// System.Void Wave.Essence.Hand.Interaction.HandPose::DEBUG(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_DEBUG_m3F855E999EAC7624401825BF819EDA9E8ED3399E (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseType_t4298CD626C5E85B92FD70BC31447EEBFB16AEC1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t87779F8BC65034B7F2F363C362BA672BDAED0E61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4997865563C2FA2912566ED71F32AC76E542C29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected void DEBUG(StringBuilder msg) { Log.d($"{LOG_TAG}.{m_PoseType}", msg, true); }
		uint32_t L_0 = __this->___m_PoseType_6;
		uint32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(HandPoseType_t4298CD626C5E85B92FD70BC31447EEBFB16AEC1F_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, _stringLiteralD4997865563C2FA2912566ED71F32AC76E542C29, L_2, NULL);
		StringBuilder_t* L_4 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_t87779F8BC65034B7F2F363C362BA672BDAED0E61_il2cpp_TypeInfo_var);
		Log_d_m7AAD323334283E3F8E0ADE1331DF033FC9F88F08(L_3, L_4, (bool)1, NULL);
		// protected void DEBUG(StringBuilder msg) { Log.d($"{LOG_TAG}.{m_PoseType}", msg, true); }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.HandPose::WARNING(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_WARNING_mB4616E91EBB3E2A67DF6C1551D9B788FCD5EA57D (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseType_t4298CD626C5E85B92FD70BC31447EEBFB16AEC1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t87779F8BC65034B7F2F363C362BA672BDAED0E61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4997865563C2FA2912566ED71F32AC76E542C29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected void WARNING(StringBuilder msg) { Log.w($"{LOG_TAG}.{m_PoseType}", msg, true); }
		uint32_t L_0 = __this->___m_PoseType_6;
		uint32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(HandPoseType_t4298CD626C5E85B92FD70BC31447EEBFB16AEC1F_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, _stringLiteralD4997865563C2FA2912566ED71F32AC76E542C29, L_2, NULL);
		StringBuilder_t* L_4 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_t87779F8BC65034B7F2F363C362BA672BDAED0E61_il2cpp_TypeInfo_var);
		Log_w_m1D9666DBC6BF72FF3EF2C22698DFA87BB3989BDF(L_3, L_4, (bool)1, NULL);
		// protected void WARNING(StringBuilder msg) { Log.w($"{LOG_TAG}.{m_PoseType}", msg, true); }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.HandPose::ERROR(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_ERROR_m4A5DE8BF024D2EEAC4321966DAC662F349D8E15C (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, StringBuilder_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseType_t4298CD626C5E85B92FD70BC31447EEBFB16AEC1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t87779F8BC65034B7F2F363C362BA672BDAED0E61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4997865563C2FA2912566ED71F32AC76E542C29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected void ERROR(StringBuilder msg) { Log.e($"{LOG_TAG}.{m_PoseType}", msg, true); }
		uint32_t L_0 = __this->___m_PoseType_6;
		uint32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(HandPoseType_t4298CD626C5E85B92FD70BC31447EEBFB16AEC1F_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, _stringLiteralD4997865563C2FA2912566ED71F32AC76E542C29, L_2, NULL);
		StringBuilder_t* L_4 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Log_t87779F8BC65034B7F2F363C362BA672BDAED0E61_il2cpp_TypeInfo_var);
		Log_e_m655F511B71803F04CF5F3FE05E0B2A8D2E34F08E(L_3, L_4, (bool)1, NULL);
		// protected void ERROR(StringBuilder msg) { Log.e($"{LOG_TAG}.{m_PoseType}", msg, true); }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.HandPose::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_OnEnable_mF2556BE8DB17C4E495ABF32260B803DC6A598E9B (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandPoseProvider.RegisterHandPose(m_PoseType, this);
		uint32_t* L_0 = (&__this->___m_PoseType_6);
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HandPoseProvider_RegisterHandPose_m4728D2EE68D709EF2CA9C62D2F5765E68DCCF069(L_0, (&__this), NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.HandPose::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_OnDisable_mBCCFFB858015EFB07B74848F2DE67AE5D371F712 (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandPoseProvider.UnregisterHandPose(m_PoseType);
		uint32_t* L_0 = (&__this->___m_PoseType_6);
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HandPoseProvider_UnregisterHandPose_m15B8FB10F5C794AC7F6DD3C98463AEAA6B0DA20C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.HandPose::SetType(Wave.Essence.Hand.Interaction.HandPoseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose_SetType_m8309FBEEB029B86CABA311A0E3F89B5D34D9D0BE (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, uint32_t ___0_poseType, const RuntimeMethod* method) 
{
	{
		// m_PoseType = poseType;
		uint32_t L_0 = ___0_poseType;
		__this->___m_PoseType_6 = L_0;
		// m_Initialized = true;
		__this->___m_Initialized_7 = (bool)1;
		// }
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.HandPose::IsTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPose_IsTracked_mDF96C8017A11E4AC7ABA1811570CF6852D1CE82A (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, const RuntimeMethod* method) 
{
	{
		// return m_IsTracked;
		bool L_0 = __this->___m_IsTracked_8;
		return L_0;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.HandPose::GetRotation(Wave.Essence.Hand.Interaction.JointType,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPose_GetRotation_mEDADC52264BFCC77E99A802A4547F06E62C8E867 (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, int32_t ___0_joint, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_value, bool ___2_local, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B3_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B2_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B4_1 = NULL;
	{
		// value = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___1_value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_0 = L_1;
		// if (joint != JointType.Count)
		int32_t L_2 = ___0_joint;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)26))))
		{
			goto IL_0035;
		}
	}
	{
		// value = local ? m_LocalRotation[(int)joint] : m_Rotation[(int)joint];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___1_value;
		bool L_4 = ___2_local;
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_0022;
		}
	}
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_5 = __this->___m_Rotation_12;
		int32_t L_6 = ___0_joint;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B4_0 = L_8;
		G_B4_1 = G_B2_0;
		goto IL_002e;
	}

IL_0022:
	{
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_9 = __this->___m_LocalRotation_13;
		int32_t L_10 = ___0_joint;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		G_B4_0 = L_12;
		G_B4_1 = G_B3_0;
	}

IL_002e:
	{
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)G_B4_1 = G_B4_0;
		// return true;
		return (bool)1;
	}

IL_0035:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.HandPose::GetPosition(Wave.Essence.Hand.Interaction.JointType,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPose_GetPosition_m51181DF6A0667065D29FCA638D64B7EBA44E066A (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, int32_t ___0_joint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, bool ___2_local, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_1 = NULL;
	{
		// value = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_1;
		// if (joint != JointType.Count)
		int32_t L_2 = ___0_joint;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)26))))
		{
			goto IL_0035;
		}
	}
	{
		// value = local ? m_LocalPosition[(int)joint] : m_Position[(int)joint];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___1_value;
		bool L_4 = ___2_local;
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_0022;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = __this->___m_Position_10;
		int32_t L_6 = ___0_joint;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		G_B4_0 = L_8;
		G_B4_1 = G_B2_0;
		goto IL_002e;
	}

IL_0022:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___m_LocalPosition_11;
		int32_t L_10 = ___0_joint;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		G_B4_0 = L_12;
		G_B4_1 = G_B3_0;
	}

IL_002e:
	{
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)G_B4_1 = G_B4_0;
		// return true;
		return (bool)1;
	}

IL_0035:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Wave.Essence.Hand.Interaction.HandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPose__ctor_mAA4614F8C5D549F49A562453924406DF7F20D3ED (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Repeat_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m427CABFB2996376721BEBC685E2146B04D2921DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Repeat_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE87FC33D808E8197941E1F3C4FE8BFC6F5D7DC52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4D3A526B9591A2E379DA54A1F38D7CF5CB4D7D32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected HandPoseType m_PoseType = HandPoseType.UNKNOWN;
		__this->___m_PoseType_6 = ((int32_t)2147483647LL);
		// protected Vector3[] m_Position = Enumerable.Repeat(Vector3.zero, poseCount).ToArray();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		RuntimeObject* L_1;
		L_1 = Enumerable_Repeat_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE87FC33D808E8197941E1F3C4FE8BFC6F5D7DC52(L_0, ((int32_t)26), Enumerable_Repeat_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE87FC33D808E8197941E1F3C4FE8BFC6F5D7DC52_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2;
		L_2 = Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790(L_1, Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var);
		__this->___m_Position_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Position_10), (void*)L_2);
		// protected Vector3[] m_LocalPosition = Enumerable.Repeat(Vector3.zero, poseCount).ToArray();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		RuntimeObject* L_4;
		L_4 = Enumerable_Repeat_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE87FC33D808E8197941E1F3C4FE8BFC6F5D7DC52(L_3, ((int32_t)26), Enumerable_Repeat_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE87FC33D808E8197941E1F3C4FE8BFC6F5D7DC52_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5;
		L_5 = Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790(L_4, Enumerable_ToArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m86F205DD4D5F3E96A8588BC389B20C86541EA790_RuntimeMethod_var);
		__this->___m_LocalPosition_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalPosition_11), (void*)L_5);
		// protected Quaternion[] m_Rotation = Enumerable.Repeat(Quaternion.identity, poseCount).ToArray();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		RuntimeObject* L_7;
		L_7 = Enumerable_Repeat_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m427CABFB2996376721BEBC685E2146B04D2921DA(L_6, ((int32_t)26), Enumerable_Repeat_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m427CABFB2996376721BEBC685E2146B04D2921DA_RuntimeMethod_var);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_8;
		L_8 = Enumerable_ToArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4D3A526B9591A2E379DA54A1F38D7CF5CB4D7D32(L_7, Enumerable_ToArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4D3A526B9591A2E379DA54A1F38D7CF5CB4D7D32_RuntimeMethod_var);
		__this->___m_Rotation_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rotation_12), (void*)L_8);
		// protected Quaternion[] m_LocalRotation = Enumerable.Repeat(Quaternion.identity, poseCount).ToArray();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		RuntimeObject* L_10;
		L_10 = Enumerable_Repeat_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m427CABFB2996376721BEBC685E2146B04D2921DA(L_9, ((int32_t)26), Enumerable_Repeat_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m427CABFB2996376721BEBC685E2146B04D2921DA_RuntimeMethod_var);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_11;
		L_11 = Enumerable_ToArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4D3A526B9591A2E379DA54A1F38D7CF5CB4D7D32(L_10, Enumerable_ToArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m4D3A526B9591A2E379DA54A1F38D7CF5CB4D7D32_RuntimeMethod_var);
		__this->___m_LocalRotation_13 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalRotation_13), (void*)L_11);
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
// System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose> Wave.Essence.Hand.Interaction.HandPoseProvider::get_HandPoseMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6B1D26ECB4DD4FF6621F564159AED612B54AA7BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_HandPoseMap == null) { m_HandPoseMap = new Dictionary<HandPoseType, HandPose>(); }
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_0 = ((HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_StaticFields*)il2cpp_codegen_static_fields_for(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var))->___m_HandPoseMap_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// if (m_HandPoseMap == null) { m_HandPoseMap = new Dictionary<HandPoseType, HandPose>(); }
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_1 = (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785*)il2cpp_codegen_object_new(Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m6B1D26ECB4DD4FF6621F564159AED612B54AA7BA(L_1, Dictionary_2__ctor_m6B1D26ECB4DD4FF6621F564159AED612B54AA7BA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		((HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_StaticFields*)il2cpp_codegen_static_fields_for(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var))->___m_HandPoseMap_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_StaticFields*)il2cpp_codegen_static_fields_for(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var))->___m_HandPoseMap_0), (void*)L_1);
	}

IL_0011:
	{
		// return m_HandPoseMap;
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_2 = ((HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_StaticFields*)il2cpp_codegen_static_fields_for(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var))->___m_HandPoseMap_0;
		return L_2;
	}
}
// System.Void Wave.Essence.Hand.Interaction.HandPoseProvider::set_HandPoseMap(System.Collections.Generic.Dictionary`2<Wave.Essence.Hand.Interaction.HandPoseType,Wave.Essence.Hand.Interaction.HandPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPoseProvider_set_HandPoseMap_mE11DDEC9E032A055423AED2A02C048C94155217D (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private set { m_HandPoseMap = value; }
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		((HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_StaticFields*)il2cpp_codegen_static_fields_for(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var))->___m_HandPoseMap_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_StaticFields*)il2cpp_codegen_static_fields_for(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var))->___m_HandPoseMap_0), (void*)L_0);
		// private set { m_HandPoseMap = value; }
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.HandPoseProvider::RegisterHandPose(Wave.Essence.Hand.Interaction.HandPoseType&,Wave.Essence.Hand.Interaction.HandPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPoseProvider_RegisterHandPose_m4728D2EE68D709EF2CA9C62D2F5765E68DCCF069 (uint32_t* ___0_poseType, HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78** ___1_handPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE782E974A22EEF84B340F06C0460839839A38E3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!HandPoseMap.ContainsKey(poseType))
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_0;
		L_0 = HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA(NULL);
		uint32_t* L_1 = ___0_poseType;
		int32_t L_2 = *((uint32_t*)L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE(L_0, L_2, Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// HandPoseMap.Add(poseType, handPose);
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_4;
		L_4 = HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA(NULL);
		uint32_t* L_5 = ___0_poseType;
		int32_t L_6 = *((uint32_t*)L_5);
		HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78** L_7 = ___1_handPose;
		HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* L_8 = *((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78**)L_7);
		NullCheck(L_4);
		Dictionary_2_Add_mE782E974A22EEF84B340F06C0460839839A38E3B(L_4, L_6, L_8, Dictionary_2_Add_mE782E974A22EEF84B340F06C0460839839A38E3B_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_001e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.HandPoseProvider::UnregisterHandPose(Wave.Essence.Hand.Interaction.HandPoseType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPoseProvider_UnregisterHandPose_m15B8FB10F5C794AC7F6DD3C98463AEAA6B0DA20C (uint32_t* ___0_poseType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3D8C36C19F1B8550A89AB849881C535AD844FDBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HandPoseMap.ContainsKey(poseType))
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_0;
		L_0 = HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA(NULL);
		uint32_t* L_1 = ___0_poseType;
		int32_t L_2 = *((uint32_t*)L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE(L_0, L_2, Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// HandPoseMap.Remove(poseType);
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_4;
		L_4 = HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA(NULL);
		uint32_t* L_5 = ___0_poseType;
		int32_t L_6 = *((uint32_t*)L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_Remove_m3D8C36C19F1B8550A89AB849881C535AD844FDBF(L_4, L_6, Dictionary_2_Remove_m3D8C36C19F1B8550A89AB849881C535AD844FDBF_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// return false;
		return (bool)0;
	}
}
// Wave.Essence.Hand.Interaction.HandPose Wave.Essence.Hand.Interaction.HandPoseProvider::GetHandPose(Wave.Essence.Hand.Interaction.HandPoseType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* HandPoseProvider_GetHandPose_m6DD03960DE54B296BFFC7B7EF007F67A3C5F2311 (uint32_t* ___0_poseType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m78B101000B0D8F69C450273CD3CBA29DCB7FA4DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0359C18E339D26983713927098C7FFA63B3CC4BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D0342A2777B360564CC648407396A1BB16EE0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HandPoseMap.ContainsKey(poseType))
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_0;
		L_0 = HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA(NULL);
		uint32_t* L_1 = ___0_poseType;
		int32_t L_2 = *((uint32_t*)L_1);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE(L_0, L_2, Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return HandPoseMap[poseType];
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_4;
		L_4 = HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA(NULL);
		uint32_t* L_5 = ___0_poseType;
		int32_t L_6 = *((uint32_t*)L_5);
		NullCheck(L_4);
		HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* L_7;
		L_7 = Dictionary_2_get_Item_m78B101000B0D8F69C450273CD3CBA29DCB7FA4DA(L_4, L_6, Dictionary_2_get_Item_m78B101000B0D8F69C450273CD3CBA29DCB7FA4DA_RuntimeMethod_var);
		return L_7;
	}

IL_001b:
	{
		// if (poseType == HandPoseType.HAND_LEFT || poseType == HandPoseType.MESH_LEFT)
		uint32_t* L_8 = ___0_poseType;
		int32_t L_9 = *((uint32_t*)L_8);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)100))))
		{
			goto IL_002a;
		}
	}
	{
		uint32_t* L_10 = ___0_poseType;
		int32_t L_11 = *((uint32_t*)L_10);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)200)))))
		{
			goto IL_0037;
		}
	}

IL_002a:
	{
		// return GetDefaultHandPose("LeftHandPose", HandPoseType.HAND_LEFT);
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* L_12;
		L_12 = HandPoseProvider_GetDefaultHandPose_mDCDEB424BDD5C964A6F04CB12BAD156947D4F068(_stringLiteral80D0342A2777B360564CC648407396A1BB16EE0A, ((int32_t)100), NULL);
		return L_12;
	}

IL_0037:
	{
		// else if (poseType == HandPoseType.HAND_RIGHT || poseType == HandPoseType.MESH_RIGHT)
		uint32_t* L_13 = ___0_poseType;
		int32_t L_14 = *((uint32_t*)L_13);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)101))))
		{
			goto IL_0046;
		}
	}
	{
		uint32_t* L_15 = ___0_poseType;
		int32_t L_16 = *((uint32_t*)L_15);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)201)))))
		{
			goto IL_0053;
		}
	}

IL_0046:
	{
		// return GetDefaultHandPose("RightHandPose", HandPoseType.HAND_RIGHT);
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* L_17;
		L_17 = HandPoseProvider_GetDefaultHandPose_mDCDEB424BDD5C964A6F04CB12BAD156947D4F068(_stringLiteral0359C18E339D26983713927098C7FFA63B3CC4BD, ((int32_t)101), NULL);
		return L_17;
	}

IL_0053:
	{
		// return null;
		return (HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)NULL;
	}
}
// System.String Wave.Essence.Hand.Interaction.HandPoseProvider::Name(Wave.Essence.Hand.Interaction.HandPoseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HandPoseProvider_Name_mBED0CFD653AADE7C2DA1B71FC2E5CA9F346122EE (uint32_t ___0_poseType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1148B3290820C5F94874005D30C76F25899D1390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral183747E7EC977010805EAAF8319F6D25F0ED515E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E8508782A92F848E97D10E6D820A71061DC562);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string name = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		uint32_t L_0 = ___0_poseType;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)101)))))
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_1 = ___0_poseType;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)100))))
		{
			goto IL_0029;
		}
	}
	{
		uint32_t L_2 = ___0_poseType;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)101))))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0047;
	}

IL_0017:
	{
		uint32_t L_3 = ___0_poseType;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)200))))
		{
			goto IL_0039;
		}
	}
	{
		uint32_t L_4 = ___0_poseType;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)201))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0047;
	}

IL_0029:
	{
		// case HandPoseType.HAND_LEFT: name = "HAND_LEFT"; break;
		V_0 = _stringLiteral39E8508782A92F848E97D10E6D820A71061DC562;
		// case HandPoseType.HAND_LEFT: name = "HAND_LEFT"; break;
		goto IL_0047;
	}

IL_0031:
	{
		// case HandPoseType.HAND_RIGHT: name = "HAND_LEFT"; break;
		V_0 = _stringLiteral39E8508782A92F848E97D10E6D820A71061DC562;
		// case HandPoseType.HAND_RIGHT: name = "HAND_LEFT"; break;
		goto IL_0047;
	}

IL_0039:
	{
		// case HandPoseType.MESH_LEFT: name = "MESH_LEFT"; break;
		V_0 = _stringLiteral183747E7EC977010805EAAF8319F6D25F0ED515E;
		// case HandPoseType.MESH_LEFT: name = "MESH_LEFT"; break;
		goto IL_0047;
	}

IL_0041:
	{
		// case HandPoseType.MESH_RIGHT: name = "MESH_RIGHT"; break;
		V_0 = _stringLiteral1148B3290820C5F94874005D30C76F25899D1390;
	}

IL_0047:
	{
		// return name;
		String_t* L_5 = V_0;
		return L_5;
	}
}
// Wave.Essence.Hand.Interaction.HandPose Wave.Essence.Hand.Interaction.HandPoseProvider::GetDefaultHandPose(System.String,Wave.Essence.Hand.Interaction.HandPoseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* HandPoseProvider_GetDefaultHandPose_mDCDEB424BDD5C964A6F04CB12BAD156947D4F068 (String_t* ___0_poseName, uint32_t ___1_poseType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m78B101000B0D8F69C450273CD3CBA29DCB7FA4DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_m087EDC8264FE711DB3867692C3CC57229F1AE998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* V_1 = NULL;
	int32_t V_2 = 0;
	RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* V_3 = NULL;
	HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* V_4 = NULL;
	int32_t G_B6_0 = 0;
	{
		// if (!HandPoseMap.ContainsKey(poseType))
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_0;
		L_0 = HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA(NULL);
		uint32_t L_1 = ___1_poseType;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE(L_0, L_1, Dictionary_2_ContainsKey_m1E6F7D25992765D0653188FFF0944623296BCFDE_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0085;
		}
	}
	{
		// UnityEngine.Object[] handObjects = UnityEngine.Object.FindObjectsOfType(typeof(RealHandPose));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_5;
		L_5 = Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A(L_4, NULL);
		V_0 = L_5;
		// for (int i = 0; i < handObjects.Length; i++)
		V_2 = 0;
		goto IL_005d;
	}

IL_0021:
	{
		// UnityEngine.Object handObject = handObjects[i];
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		// if (handObject is RealHandPose realHand &&
		//    (realHand.isLeft ? poseType == HandPoseType.HAND_LEFT : poseType == HandPoseType.HAND_RIGHT))
		V_3 = ((RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474*)IsInstClass((RuntimeObject*)L_9, RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_il2cpp_TypeInfo_var));
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_11 = V_3;
		NullCheck(L_11);
		bool L_12;
		L_12 = RealHandPose_get_isLeft_m07A81796F31F2D4FB29EF5331DA000944CB50111(L_11, NULL);
		if (L_12)
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_13 = ___1_poseType;
		G_B6_0 = ((((int32_t)L_13) == ((int32_t)((int32_t)101)))? 1 : 0);
		goto IL_0041;
	}

IL_003c:
	{
		uint32_t L_14 = ___1_poseType;
		G_B6_0 = ((((int32_t)L_14) == ((int32_t)((int32_t)100)))? 1 : 0);
	}

IL_0041:
	{
		if (!G_B6_0)
		{
			goto IL_0059;
		}
	}
	{
		// realHand.SetType(poseType);
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_15 = V_3;
		uint32_t L_16 = ___1_poseType;
		NullCheck(L_15);
		VirtualActionInvoker1< uint32_t >::Invoke(6 /* System.Void Wave.Essence.Hand.Interaction.HandPose::SetType(Wave.Essence.Hand.Interaction.HandPoseType) */, L_15, L_16);
		// RegisterHandPose(poseType, realHand);
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_17 = V_3;
		V_4 = L_17;
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = HandPoseProvider_RegisterHandPose_m4728D2EE68D709EF2CA9C62D2F5765E68DCCF069((&___1_poseType), (&V_4), NULL);
		// return realHand;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_19 = V_3;
		return L_19;
	}

IL_0059:
	{
		// for (int i = 0; i < handObjects.Length; i++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005d:
	{
		// for (int i = 0; i < handObjects.Length; i++)
		int32_t L_21 = V_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// GameObject handPoseObject = new GameObject(poseName);
		String_t* L_23 = ___0_poseName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_24, L_23, NULL);
		// RealHandPose newRealHand = handPoseObject.AddComponent<RealHandPose>();
		NullCheck(L_24);
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_25;
		L_25 = GameObject_AddComponent_TisRealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_m087EDC8264FE711DB3867692C3CC57229F1AE998(L_24, GameObject_AddComponent_TisRealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474_m087EDC8264FE711DB3867692C3CC57229F1AE998_RuntimeMethod_var);
		V_1 = L_25;
		// newRealHand.SetType(poseType);
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_26 = V_1;
		uint32_t L_27 = ___1_poseType;
		NullCheck(L_26);
		VirtualActionInvoker1< uint32_t >::Invoke(6 /* System.Void Wave.Essence.Hand.Interaction.HandPose::SetType(Wave.Essence.Hand.Interaction.HandPoseType) */, L_26, L_27);
		// RegisterHandPose(poseType, newRealHand);
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_28 = V_1;
		V_4 = L_28;
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = HandPoseProvider_RegisterHandPose_m4728D2EE68D709EF2CA9C62D2F5765E68DCCF069((&___1_poseType), (&V_4), NULL);
		// return newRealHand;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_30 = V_1;
		return L_30;
	}

IL_0085:
	{
		// return HandPoseMap[poseType];
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_31;
		L_31 = HandPoseProvider_get_HandPoseMap_mF4B38788F655E21680AACBB894D5C07A02BF4ECA(NULL);
		uint32_t L_32 = ___1_poseType;
		NullCheck(L_31);
		HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* L_33;
		L_33 = Dictionary_2_get_Item_m78B101000B0D8F69C450273CD3CBA29DCB7FA4DA(L_31, L_32, Dictionary_2_get_Item_m78B101000B0D8F69C450273CD3CBA29DCB7FA4DA_RuntimeMethod_var);
		return L_33;
	}
}
// System.Void Wave.Essence.Hand.Interaction.HandPoseProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPoseProvider__cctor_m5AD4372034E97584733E9B696DB1E2AE6F83C3F9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6B1D26ECB4DD4FF6621F564159AED612B54AA7BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<HandPoseType, HandPose> m_HandPoseMap = new Dictionary<HandPoseType, HandPose>();
		Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785* L_0 = (Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785*)il2cpp_codegen_object_new(Dictionary_2_t35A3119E113B5FC1DE4BFEC25967371566774785_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6B1D26ECB4DD4FF6621F564159AED612B54AA7BA(L_0, Dictionary_2__ctor_m6B1D26ECB4DD4FF6621F564159AED612B54AA7BA_RuntimeMethod_var);
		((HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_StaticFields*)il2cpp_codegen_static_fields_for(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var))->___m_HandPoseMap_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_StaticFields*)il2cpp_codegen_static_fields_for(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var))->___m_HandPoseMap_0), (void*)L_0);
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
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHandPose_OnEnable_m024BF84DD0033184C2CCC11816FA516DF757577E (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaitInit());
		RuntimeObject* L_0;
		L_0 = MeshHandPose_WaitInit_m525F6C5B155996AC0DA39B33E1BB78CEE34AA5AC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHandPose_OnDisable_m55B0E5A87FBABFEA3EDD504178B9283F54F7680D (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) 
{
	{
		// base.OnDisable();
		HandPose_OnDisable_mBCCFFB858015EFB07B74848F2DE67AE5D371F712(__this, NULL);
		// if (keepUpdate)
		bool L_0 = __this->___keepUpdate_15;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// keepUpdate = false;
		__this->___keepUpdate_15 = (bool)0;
		// StopCoroutine(UpdatePose());
		RuntimeObject* L_1;
		L_1 = MeshHandPose_UpdatePose_mF0546806B0C952FF618E485BEB4DF63547F88D29(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_1, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose::SetHandMeshRenderer(Wave.Essence.Hand.Interaction.HandMeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHandPose_SetHandMeshRenderer_m4EB39CC7226CCA2DB6612FE28E9F7CF8AD23A468 (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* ___0_handMeshRenderer, const RuntimeMethod* method) 
{
	MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* G_B2_0 = NULL;
	MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* G_B3_1 = NULL;
	{
		// m_HandMesh = handMeshRenderer;
		HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* L_0 = ___0_handMeshRenderer;
		__this->___m_HandMesh_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HandMesh_14), (void*)L_0);
		// SetType(handMeshRenderer.isLeft ? HandPoseType.MESH_LEFT : HandPoseType.MESH_RIGHT);
		HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* L_1 = ___0_handMeshRenderer;
		NullCheck(L_1);
		bool L_2;
		L_2 = HandMeshRenderer_get_isLeft_m0B3E545441F70BF056A4D55D69A28D800E29D740(L_1, NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = ((int32_t)201);
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0017:
	{
		G_B3_0 = ((int32_t)200);
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< uint32_t >::Invoke(6 /* System.Void Wave.Essence.Hand.Interaction.HandPose::SetType(Wave.Essence.Hand.Interaction.HandPoseType) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.MeshHandPose::SetJointPose(Wave.Essence.Hand.Interaction.JointType,UnityEngine.Pose,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshHandPose_SetJointPose_mD8C5723F4A58696A84E63F22B4EAA12171FB295F (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, int32_t ___0_joint, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_jointPose, bool ___2_local, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_HandMesh != null)
		HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* L_0 = __this->___m_HandMesh_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// return m_HandMesh.SetJointPositionAndRotation(joint, jointPose.position, jointPose.rotation, local);
		HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* L_2 = __this->___m_HandMesh_14;
		int32_t L_3 = ___0_joint;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = ___1_jointPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = ___1_jointPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6.___rotation_1;
		bool L_8 = ___2_local;
		NullCheck(L_2);
		bool L_9;
		L_9 = HandMeshRenderer_SetJointPositionAndRotation_m5C069360768840142C06B9F1B1F7ADD634D0CCAA(L_2, L_3, L_5, L_7, L_8, NULL);
		return L_9;
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.IEnumerator Wave.Essence.Hand.Interaction.MeshHandPose::WaitInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeshHandPose_WaitInit_m525F6C5B155996AC0DA39B33E1BB78CEE34AA5AC (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD* L_0 = (U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD*)il2cpp_codegen_object_new(U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitInitU3Ed__6__ctor_mA41ED6D0F4EE8007EAC9048E612EEC0AB931F86B(L_0, 0, NULL);
		U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Wave.Essence.Hand.Interaction.MeshHandPose::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeshHandPose_UpdatePose_mF0546806B0C952FF618E485BEB4DF63547F88D29 (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604* L_0 = (U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604*)il2cpp_codegen_object_new(U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdatePoseU3Ed__7__ctor_m73F38BFD9D41FC4BCFEB2B8A43A2C393B160125F(L_0, 0, NULL);
		U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHandPose__ctor_m1C39D4E23BA29CE34B76CB3B0DEB7C746A2C3DA3 (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) 
{
	{
		HandPose__ctor_mAA4614F8C5D549F49A562453924406DF7F20D3ED(__this, NULL);
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.MeshHandPose::<WaitInit>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshHandPose_U3CWaitInitU3Eb__6_0_mFA1364E437FE8CC8DF326AC0ACCB496F5620BBF3 (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => m_Initialized);
		bool L_0 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)__this)->___m_Initialized_7;
		return L_0;
	}
}
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHandPose_U3CU3En__0_mBD170F149587D1578D10CE0C5EC298DB5F4BE2F4 (MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* __this, const RuntimeMethod* method) 
{
	{
		HandPose_OnEnable_mF2556BE8DB17C4E495ABF32260B803DC6A598E9B(__this, NULL);
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
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitInitU3Ed__6__ctor_mA41ED6D0F4EE8007EAC9048E612EEC0AB931F86B (U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitInitU3Ed__6_System_IDisposable_Dispose_m61A14AB2723D1CA50125FC92AA86A54F0C3DFF7A (U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitInitU3Ed__6_MoveNext_m4E8C317725EC9D5A3CDEAB80DCA5436CFABE6750 (U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHandPose_U3CWaitInitU3Eb__6_0_mFA1364E437FE8CC8DF326AC0ACCB496F5620BBF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => m_Initialized);
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_4 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, L_4, (intptr_t)((void*)MeshHandPose_U3CWaitInitU3Eb__6_0_mFA1364E437FE8CC8DF326AC0ACCB496F5620BBF3_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_6 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// base.OnEnable();
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_7 = V_1;
		NullCheck(L_7);
		MeshHandPose_U3CU3En__0_mBD170F149587D1578D10CE0C5EC298DB5F4BE2F4(L_7, NULL);
		// if (!keepUpdate)
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->___keepUpdate_15;
		if (L_9)
		{
			goto IL_0067;
		}
	}
	{
		// keepUpdate = true;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_10 = V_1;
		NullCheck(L_10);
		L_10->___keepUpdate_15 = (bool)1;
		// StartCoroutine(UpdatePose());
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_11 = V_1;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = MeshHandPose_UpdatePose_mF0546806B0C952FF618E485BEB4DF63547F88D29(L_12, NULL);
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_13, NULL);
	}

IL_0067:
	{
		// }
		return (bool)0;
	}
}
// System.Object Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitInitU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m315C70B161B8187469D21FD4FF8469D24E7D3BEB (U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitInitU3Ed__6_System_Collections_IEnumerator_Reset_m93CA026D6DA6CD81976568A0D94B3552FAABF62E (U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitInitU3Ed__6_System_Collections_IEnumerator_Reset_m93CA026D6DA6CD81976568A0D94B3552FAABF62E_RuntimeMethod_var)));
	}
}
// System.Object Wave.Essence.Hand.Interaction.MeshHandPose/<WaitInit>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitInitU3Ed__6_System_Collections_IEnumerator_get_Current_m82F25F560D39F4D3649F225BFF2678F697A0C320 (U3CWaitInitU3Ed__6_t09F7E0CBAF0C042A630A0670E6095058554B85BD* __this, const RuntimeMethod* method) 
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
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePoseU3Ed__7__ctor_m73F38BFD9D41FC4BCFEB2B8A43A2C393B160125F (U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePoseU3Ed__7_System_IDisposable_Dispose_mBAA2BA5A1CB0A31B633E10A2A1DC6F191EC1AE97 (U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdatePoseU3Ed__7_MoveNext_m7F7BA3C7303FD03B1593662768060126578A1212 (U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* V_1 = NULL;
	HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_012b;
	}

IL_0023:
	{
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_4 = (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7*)il2cpp_codegen_object_new(WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// HandPose handPose = HandPoseProvider.GetHandPose(m_HandMesh.isLeft ? HandPoseType.HAND_LEFT : HandPoseType.HAND_RIGHT);
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_5 = V_1;
		NullCheck(L_5);
		HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* L_6 = L_5->___m_HandMesh_14;
		NullCheck(L_6);
		bool L_7;
		L_7 = HandMeshRenderer_get_isLeft_m0B3E545441F70BF056A4D55D69A28D800E29D740(L_6, NULL);
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		G_B8_0 = ((int32_t)101);
		goto IL_0051;
	}

IL_004f:
	{
		G_B8_0 = ((int32_t)100);
	}

IL_0051:
	{
		V_3 = G_B8_0;
		il2cpp_codegen_runtime_class_init_inline(HandPoseProvider_t8868032BE983DFA235FEEDCD78A6A7330AF0C0BC_il2cpp_TypeInfo_var);
		HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* L_8;
		L_8 = HandPoseProvider_GetHandPose_m6DD03960DE54B296BFFC7B7EF007F67A3C5F2311((&V_3), NULL);
		V_2 = L_8;
		// m_IsTracked = handPose.IsTracked();
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_9 = V_1;
		HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78* L_10 = V_2;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean Wave.Essence.Hand.Interaction.HandPose::IsTracked() */, L_10);
		NullCheck(L_9);
		((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_9)->___m_IsTracked_8 = L_11;
		// for (int i = 0; i < poseCount; i++)
		V_4 = 0;
		goto IL_0122;
	}

IL_006e:
	{
		// if (m_HandMesh.GetJointPositionAndRotation((JointType)i, out Vector3 position, out Quaternion rotation) &&
		//     m_HandMesh.GetJointPositionAndRotation((JointType)i, out Vector3 localPosition, out Quaternion localRotation, local: true))
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_12 = V_1;
		NullCheck(L_12);
		HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* L_13 = L_12->___m_HandMesh_14;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		bool L_15;
		L_15 = HandMeshRenderer_GetJointPositionAndRotation_m9762C9A13C3A950EAE26C824860D8369F2EBBC51(L_13, L_14, (&V_5), (&V_6), (bool)0, NULL);
		if (!L_15)
		{
			goto IL_00d4;
		}
	}
	{
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_16 = V_1;
		NullCheck(L_16);
		HandMeshRenderer_tEB2FEC6108A3E26C18516E846CF875C9E3D305A2* L_17 = L_16->___m_HandMesh_14;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		bool L_19;
		L_19 = HandMeshRenderer_GetJointPositionAndRotation_m9762C9A13C3A950EAE26C824860D8369F2EBBC51(L_17, L_18, (&V_7), (&V_8), (bool)1, NULL);
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		// m_Position[i] = position;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_20 = V_1;
		NullCheck(L_20);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_20)->___m_Position_10;
		int32_t L_22 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_5;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_23);
		// m_Rotation[i] = rotation;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_24 = V_1;
		NullCheck(L_24);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_25 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_24)->___m_Rotation_12;
		int32_t L_26 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = V_6;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_27);
		// m_LocalPosition[i] = localPosition;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_28 = V_1;
		NullCheck(L_28);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_28)->___m_LocalPosition_11;
		int32_t L_30 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_31);
		// m_LocalRotation[i] = localRotation;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_32 = V_1;
		NullCheck(L_32);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_33 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_32)->___m_LocalRotation_13;
		int32_t L_34 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_8;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_35);
		goto IL_011c;
	}

IL_00d4:
	{
		// m_Position[i] = Vector3.zero;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_36 = V_1;
		NullCheck(L_36);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_36)->___m_Position_10;
		int32_t L_38 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_39);
		// m_Rotation[i] = Quaternion.identity;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_40 = V_1;
		NullCheck(L_40);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_41 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_40)->___m_Rotation_12;
		int32_t L_42 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_43);
		// m_LocalPosition[i] = Vector3.zero;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_44 = V_1;
		NullCheck(L_44);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_44)->___m_LocalPosition_11;
		int32_t L_46 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_47);
		// m_LocalRotation[i] = Quaternion.identity;
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_48 = V_1;
		NullCheck(L_48);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_49 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_48)->___m_LocalRotation_13;
		int32_t L_50 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_51);
	}

IL_011c:
	{
		// for (int i = 0; i < poseCount; i++)
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0122:
	{
		// for (int i = 0; i < poseCount; i++)
		int32_t L_53 = V_4;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)26))))
		{
			goto IL_006e;
		}
	}

IL_012b:
	{
		// while (keepUpdate)
		MeshHandPose_tDECA09EFD9FBF817AB99022CEBF3E285B4C5BEAB* L_54 = V_1;
		NullCheck(L_54);
		bool L_55 = L_54->___keepUpdate_15;
		if (L_55)
		{
			goto IL_0023;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePoseU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m04814A56C7F8ECA32047BD9A983784E1E7F27849 (U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePoseU3Ed__7_System_Collections_IEnumerator_Reset_mD07D409546183071935F285F56075A35BC2D6497 (U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdatePoseU3Ed__7_System_Collections_IEnumerator_Reset_mD07D409546183071935F285F56075A35BC2D6497_RuntimeMethod_var)));
	}
}
// System.Object Wave.Essence.Hand.Interaction.MeshHandPose/<UpdatePose>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePoseU3Ed__7_System_Collections_IEnumerator_get_Current_m6F51AE756331559115C465413D676D2021D8E86C (U3CUpdatePoseU3Ed__7_tA2E690CB47D8C95D98BB7F606A11BCE62F2DD604* __this, const RuntimeMethod* method) 
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
// System.Boolean Wave.Essence.Hand.Interaction.RealHandPose::get_isLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealHandPose_get_isLeft_m07A81796F31F2D4FB29EF5331DA000944CB50111 (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) 
{
	{
		// public bool isLeft => m_Handedness == Handedness.Left;
		int32_t L_0 = __this->___m_Handedness_14;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Wave.Essence.Hand.Interaction.RealHandPose::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealHandPose_OnEnable_mBCE8DC3158414871676659D722DA4E2412870B5C (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaitInit());
		RuntimeObject* L_0;
		L_0 = RealHandPose_WaitInit_mDA568E86308CB2EA12C5A502E32887F8C228FBCD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.RealHandPose::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealHandPose_OnDisable_m3658CED5558560EBEF827DA64DC62F8C421A9633 (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) 
{
	{
		// base.OnDisable();
		HandPose_OnDisable_mBCCFFB858015EFB07B74848F2DE67AE5D371F712(__this, NULL);
		// if (keepUpdate)
		bool L_0 = __this->___keepUpdate_15;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// keepUpdate = false;
		__this->___keepUpdate_15 = (bool)0;
		// StopCoroutine(UpdatePose());
		RuntimeObject* L_1;
		L_1 = RealHandPose_UpdatePose_mE1E6341AE38BAA82CF4B61257BC3FFB47015674B(__this, NULL);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_1, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.RealHandPose::SetType(Wave.Essence.Hand.Interaction.HandPoseType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealHandPose_SetType_m7F240986D83B7482FE892842BE0033BA9CCDB8D3 (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, uint32_t ___0_poseType, const RuntimeMethod* method) 
{
	{
		// if (poseType == HandPoseType.HAND_LEFT)
		uint32_t L_0 = ___0_poseType;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_000e;
		}
	}
	{
		// m_Handedness = Handedness.Left;
		__this->___m_Handedness_14 = 1;
		goto IL_001a;
	}

IL_000e:
	{
		// else if (poseType == HandPoseType.HAND_RIGHT)
		uint32_t L_1 = ___0_poseType;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_001a;
		}
	}
	{
		// m_Handedness = Handedness.Right;
		__this->___m_Handedness_14 = 0;
	}

IL_001a:
	{
		// base.SetType(poseType);
		uint32_t L_2 = ___0_poseType;
		HandPose_SetType_m8309FBEEB029B86CABA311A0E3F89B5D34D9D0BE(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Wave.Essence.Hand.Interaction.RealHandPose::WaitInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealHandPose_WaitInit_mDA568E86308CB2EA12C5A502E32887F8C228FBCD (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302* L_0 = (U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302*)il2cpp_codegen_object_new(U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitInitU3Ed__7__ctor_m2618147AD3497254C78FCA206D29CC872AED0369(L_0, 0, NULL);
		U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Wave.Essence.Hand.Interaction.RealHandPose::UpdatePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealHandPose_UpdatePose_mE1E6341AE38BAA82CF4B61257BC3FFB47015674B (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674* L_0 = (U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674*)il2cpp_codegen_object_new(U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdatePoseU3Ed__8__ctor_m497CF97194298F39BBF3110212F5692125D277E7(L_0, 0, NULL);
		U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Wave.Essence.Hand.Interaction.RealHandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealHandPose__ctor_m64AC4C3EFF2B184DAD026447A4D1C02C4A8BF3B3 (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) 
{
	{
		HandPose__ctor_mAA4614F8C5D549F49A562453924406DF7F20D3ED(__this, NULL);
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.RealHandPose::<WaitInit>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealHandPose_U3CWaitInitU3Eb__7_0_m92F82DF9A2CB6A23C11AC6CBE4ADB24CA3CE27CA (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => m_Initialized);
		bool L_0 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)__this)->___m_Initialized_7;
		return L_0;
	}
}
// System.Void Wave.Essence.Hand.Interaction.RealHandPose::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealHandPose_U3CU3En__0_mAF30A31769F448834D0F1E738DA5E9D3A5EE4F9B (RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* __this, const RuntimeMethod* method) 
{
	{
		HandPose_OnEnable_mF2556BE8DB17C4E495ABF32260B803DC6A598E9B(__this, NULL);
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
// System.Void Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitInitU3Ed__7__ctor_m2618147AD3497254C78FCA206D29CC872AED0369 (U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitInitU3Ed__7_System_IDisposable_Dispose_m4C86CDEA24E5EBF5839EEA5B96BF5D0A82E446C6 (U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitInitU3Ed__7_MoveNext_m11727DDF2BB1183A06EAA6E096646446E540E24C (U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealHandPose_U3CWaitInitU3Eb__7_0_m92F82DF9A2CB6A23C11AC6CBE4ADB24CA3CE27CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => m_Initialized);
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_4 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, L_4, (intptr_t)((void*)RealHandPose_U3CWaitInitU3Eb__7_0_m92F82DF9A2CB6A23C11AC6CBE4ADB24CA3CE27CA_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_6 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// base.OnEnable();
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_7 = V_1;
		NullCheck(L_7);
		RealHandPose_U3CU3En__0_mAF30A31769F448834D0F1E738DA5E9D3A5EE4F9B(L_7, NULL);
		// if (!keepUpdate)
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->___keepUpdate_15;
		if (L_9)
		{
			goto IL_0067;
		}
	}
	{
		// keepUpdate = true;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_10 = V_1;
		NullCheck(L_10);
		L_10->___keepUpdate_15 = (bool)1;
		// StartCoroutine(UpdatePose());
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_11 = V_1;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = RealHandPose_UpdatePose_mE1E6341AE38BAA82CF4B61257BC3FFB47015674B(L_12, NULL);
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_13, NULL);
	}

IL_0067:
	{
		// }
		return (bool)0;
	}
}
// System.Object Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitInitU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m13FB1BA5C793536E4E3A86AE5D2332AAD1CDEA2F (U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitInitU3Ed__7_System_Collections_IEnumerator_Reset_m784266820FC6B68A2ADD92D6CFC9966024EA27CA (U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitInitU3Ed__7_System_Collections_IEnumerator_Reset_m784266820FC6B68A2ADD92D6CFC9966024EA27CA_RuntimeMethod_var)));
	}
}
// System.Object Wave.Essence.Hand.Interaction.RealHandPose/<WaitInit>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitInitU3Ed__7_System_Collections_IEnumerator_get_Current_m4165BB97C7123823878BCE49F3CAE1C7AF23E8CD (U3CWaitInitU3Ed__7_t44D8A4AED588D69451A078FB170F3ADF64275302* __this, const RuntimeMethod* method) 
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
// System.Void Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePoseU3Ed__8__ctor_m497CF97194298F39BBF3110212F5692125D277E7 (U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePoseU3Ed__8_System_IDisposable_Dispose_m7F5E251E876394D4D0B23B70E3A8AE3E8AA96AB7 (U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdatePoseU3Ed__8_MoveNext_m80038DABDF02113BB9C4C17BF951982B63260969 (U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedHand_t59014EAE31FBA886FEF58DD00936AADF13777358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* V_1 = NULL;
	HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector3 position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___U3CpositionU3E5__2_3 = L_4;
		// Quaternion rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___U3CrotationU3E5__3_4 = L_5;
		goto IL_0169;
	}

IL_0039:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_6 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_6, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// HandData handData = CachedHand.Get(isLeft);
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = RealHandPose_get_isLeft_m07A81796F31F2D4FB29EF5331DA000944CB50111(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(CachedHand_t59014EAE31FBA886FEF58DD00936AADF13777358_il2cpp_TypeInfo_var);
		HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC* L_9;
		L_9 = CachedHand_Get_m59A488116C5A1A621D90A97803DD303729E070D4(L_8, NULL);
		V_2 = L_9;
		// m_IsTracked = handData.isTracked;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_10 = V_1;
		HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC* L_11 = V_2;
		NullCheck(L_11);
		bool L_12 = L_11->___isTracked_2;
		NullCheck(L_10);
		((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_10)->___m_IsTracked_8 = L_12;
		// if (!m_IsTracked) { continue; }
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_13)->___m_IsTracked_8;
		if (!L_14)
		{
			goto IL_0169;
		}
	}
	{
		// for (int i = 0; i < poseCount; i++)
		V_3 = 0;
		goto IL_0161;
	}

IL_007e:
	{
		// if (handData.GetJointPosition((JointType)i, ref position) && handData.GetJointRotation((JointType)i, ref rotation))
		HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC* L_15 = V_2;
		int32_t L_16 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___U3CpositionU3E5__2_3);
		NullCheck(L_15);
		bool L_18;
		L_18 = HandData_GetJointPosition_mF537F11D34A357B786403E03400585506A27F879(L_15, L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0119;
		}
	}
	{
		HandData_t5AB3676A6EC42F73A57E6BF6AEF024A1B2A060DC* L_19 = V_2;
		int32_t L_20 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_21 = (&__this->___U3CrotationU3E5__3_4);
		NullCheck(L_19);
		bool L_22;
		L_22 = HandData_GetJointRotation_m80058F8DCD93370E7DB97F9A63FB127FDDEBE9EB(L_19, L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_0119;
		}
	}
	{
		// m_Position[i] = transform.position + transform.rotation * position;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_23 = V_1;
		NullCheck(L_23);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_23)->___m_Position_10;
		int32_t L_25 = V_3;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_26 = V_1;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_29 = V_1;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___U3CpositionU3E5__2_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_33, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_34);
		// m_Rotation[i] = transform.rotation * rotation;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_35 = V_1;
		NullCheck(L_35);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_36 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_35)->___m_Rotation_12;
		int32_t L_37 = V_3;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_38 = V_1;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		NullCheck(L_39);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_39, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = __this->___U3CrotationU3E5__3_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_40, L_41, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_42);
		// m_LocalPosition[i] = position;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_43 = V_1;
		NullCheck(L_43);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_44 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_43)->___m_LocalPosition_11;
		int32_t L_45 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___U3CpositionU3E5__2_3;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_46);
		// m_LocalRotation[i] = rotation;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_47 = V_1;
		NullCheck(L_47);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_48 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_47)->___m_LocalRotation_13;
		int32_t L_49 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = __this->___U3CrotationU3E5__3_4;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_50);
		goto IL_015d;
	}

IL_0119:
	{
		// m_Position[i] = Vector3.zero;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_51 = V_1;
		NullCheck(L_51);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_51)->___m_Position_10;
		int32_t L_53 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_54);
		// m_Rotation[i] = Quaternion.identity;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_55 = V_1;
		NullCheck(L_55);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_56 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_55)->___m_Rotation_12;
		int32_t L_57 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_58);
		// m_LocalPosition[i] = Vector3.zero;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_59 = V_1;
		NullCheck(L_59);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_59)->___m_LocalPosition_11;
		int32_t L_61 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_62);
		// m_LocalRotation[i] = Quaternion.identity;
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_63 = V_1;
		NullCheck(L_63);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_64 = ((HandPose_tA66FDB0D1130576A00F92D49CFB2044CCF853F78*)L_63)->___m_LocalRotation_13;
		int32_t L_65 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66;
		L_66 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_66);
	}

IL_015d:
	{
		// for (int i = 0; i < poseCount; i++)
		int32_t L_67 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0161:
	{
		// for (int i = 0; i < poseCount; i++)
		int32_t L_68 = V_3;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)26))))
		{
			goto IL_007e;
		}
	}

IL_0169:
	{
		// while (keepUpdate)
		RealHandPose_t54EE92F7921BA4DBBACAA869D7BCC7A734B4A474* L_69 = V_1;
		NullCheck(L_69);
		bool L_70 = L_69->___keepUpdate_15;
		if (L_70)
		{
			goto IL_0039;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePoseU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB8AAD32E55F65E06DDAE0EAACBD48169C1281133 (U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePoseU3Ed__8_System_Collections_IEnumerator_Reset_mA264F5AE2005FA928CB215B3B66EB1611BB773E4 (U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdatePoseU3Ed__8_System_Collections_IEnumerator_Reset_mA264F5AE2005FA928CB215B3B66EB1611BB773E4_RuntimeMethod_var)));
	}
}
// System.Object Wave.Essence.Hand.Interaction.RealHandPose/<UpdatePose>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePoseU3Ed__8_System_Collections_IEnumerator_get_Current_mAEAFAB50D73B02EF44384E245AE50A2B394A4566 (U3CUpdatePoseU3Ed__8_t829AFC097DA504C07DB0CAC47AD3D541F2E9D674* __this, const RuntimeMethod* method) 
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
// UnityEngine.Collider Wave.Essence.Hand.Interaction.JointCollider::get_Collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* JointCollider_get_Collider_m525B0B81C0FEB2E0342D6E9D8B95DCA6B153EACC (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, const RuntimeMethod* method) 
{
	{
		// public Collider Collider => m_Collider;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = __this->___m_Collider_4;
		return L_0;
	}
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider_OnEnable_m6AC31ED36620B72E3162952B5C3A4BAFB4756F31 (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, const RuntimeMethod* method) 
{
	{
		// InitCollider();
		JointCollider_InitCollider_m31AEACED760BC88420AD1FC9C65921F454911F8D(__this, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider::SetJointId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider_SetJointId_mD17EDF54D5F81C590E1CBA075F941FAF9B1D8B67 (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// InitCollider();
		JointCollider_InitCollider_m31AEACED760BC88420AD1FC9C65921F454911F8D(__this, NULL);
		// jointType = (JointType)id;
		int32_t L_0 = ___0_id;
		__this->___jointType_8 = L_0;
		// switch (jointType)
		int32_t L_1 = __this->___jointType_8;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0083;
			}
			case 1:
			{
				goto IL_00cf;
			}
			case 2:
			{
				goto IL_011b;
			}
			case 3:
			{
				goto IL_015b;
			}
			case 4:
			{
				goto IL_018c;
			}
			case 5:
			{
				goto IL_01cc;
			}
			case 6:
			{
				goto IL_020c;
			}
			case 7:
			{
				goto IL_024c;
			}
			case 8:
			{
				goto IL_028c;
			}
			case 9:
			{
				goto IL_02bd;
			}
			case 10:
			{
				goto IL_02ee;
			}
			case 11:
			{
				goto IL_032e;
			}
			case 12:
			{
				goto IL_036e;
			}
			case 13:
			{
				goto IL_03ae;
			}
			case 14:
			{
				goto IL_03df;
			}
			case 15:
			{
				goto IL_0410;
			}
			case 16:
			{
				goto IL_0450;
			}
			case 17:
			{
				goto IL_0490;
			}
			case 18:
			{
				goto IL_04d0;
			}
			case 19:
			{
				goto IL_0501;
			}
			case 20:
			{
				goto IL_0532;
			}
			case 21:
			{
				goto IL_0572;
			}
			case 22:
			{
				goto IL_05b2;
			}
			case 23:
			{
				goto IL_05f2;
			}
			case 24:
			{
				goto IL_0623;
			}
			case 25:
			{
				goto IL_0654;
			}
		}
	}
	{
		return;
	}

IL_0083:
	{
		// m_Collider.center = new Vector3(0f, -0.006f, -0.0025f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_3 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (-0.00600000005f), (-0.00249999994f), /*hidden argument*/NULL);
		NullCheck(L_3);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_3, L_4, NULL);
		// m_Collider.radius = 0.016f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_5 = __this->___m_Collider_4;
		NullCheck(L_5);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_5, (0.0160000008f), NULL);
		// m_Collider.height = 0.075f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_6 = __this->___m_Collider_4;
		NullCheck(L_6);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_6, (0.075000003f), NULL);
		// m_Collider.direction = 0;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_7 = __this->___m_Collider_4;
		NullCheck(L_7);
		CapsuleCollider_set_direction_m3064DADA49F7F48DA8D62659B1D3545C83C553CB(L_7, 0, NULL);
		// break;
		return;
	}

IL_00cf:
	{
		// m_Collider.center = new Vector3(0f, -0.003f, 0f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_8 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), (-0.00300000003f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_8, L_9, NULL);
		// m_Collider.radius = 0.02f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_10 = __this->___m_Collider_4;
		NullCheck(L_10);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_10, (0.0199999996f), NULL);
		// m_Collider.height = 0.055f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_11 = __this->___m_Collider_4;
		NullCheck(L_11);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_11, (0.0549999997f), NULL);
		// m_Collider.direction = 0;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_12 = __this->___m_Collider_4;
		NullCheck(L_12);
		CapsuleCollider_set_direction_m3064DADA49F7F48DA8D62659B1D3545C83C553CB(L_12, 0, NULL);
		// break;
		return;
	}

IL_011b:
	{
		// m_Collider.center = new Vector3(0f, -0.005f, 0f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_13 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.0f), (-0.00499999989f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_13, L_14, NULL);
		// m_Collider.radius = 0.02f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_15 = __this->___m_Collider_4;
		NullCheck(L_15);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_15, (0.0199999996f), NULL);
		// m_Collider.height = 0.05f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_16 = __this->___m_Collider_4;
		NullCheck(L_16);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_16, (0.0500000007f), NULL);
		// break;
		return;
	}

IL_015b:
	{
		// m_Collider.center = Vector3.zero;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_17 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_17);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_17, L_18, NULL);
		// m_Collider.radius = 0.012f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_19 = __this->___m_Collider_4;
		NullCheck(L_19);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_19, (0.0120000001f), NULL);
		// m_Collider.height = 0.040f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_20 = __this->___m_Collider_4;
		NullCheck(L_20);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_20, (0.0399999991f), NULL);
		// break;
		return;
	}

IL_018c:
	{
		// m_Collider.center = new Vector3(0f, -0.003f, 0f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_21 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (-0.00300000003f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_21, L_22, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_23 = __this->___m_Collider_4;
		NullCheck(L_23);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_23, (0.00999999978f), NULL);
		// m_Collider.height = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_24 = __this->___m_Collider_4;
		NullCheck(L_24);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_24, (0.00999999978f), NULL);
		// break;
		return;
	}

IL_01cc:
	{
		// m_Collider.center = new Vector3(0f, 0f, -0.005f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_25 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), (-0.00499999989f), /*hidden argument*/NULL);
		NullCheck(L_25);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_25, L_26, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_27 = __this->___m_Collider_4;
		NullCheck(L_27);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_27, (0.00999999978f), NULL);
		// m_Collider.height = 0.025f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_28 = __this->___m_Collider_4;
		NullCheck(L_28);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_28, (0.0250000004f), NULL);
		// break;
		return;
	}

IL_020c:
	{
		// m_Collider.center = new Vector3(0f, 0f, 0.02f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_29 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), (0.0f), (0.0f), (0.0199999996f), /*hidden argument*/NULL);
		NullCheck(L_29);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_29, L_30, NULL);
		// m_Collider.radius = 0.012f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_31 = __this->___m_Collider_4;
		NullCheck(L_31);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_31, (0.0120000001f), NULL);
		// m_Collider.height = 0.1f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_32 = __this->___m_Collider_4;
		NullCheck(L_32);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_32, (0.100000001f), NULL);
		// break;
		return;
	}

IL_024c:
	{
		// m_Collider.center = new Vector3(0f, 0f, 0.01f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_33 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), (0.0f), (0.0f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_33);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_33, L_34, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_35 = __this->___m_Collider_4;
		NullCheck(L_35);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_35, (0.00999999978f), NULL);
		// m_Collider.height = 0.04f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_36 = __this->___m_Collider_4;
		NullCheck(L_36);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_36, (0.0399999991f), NULL);
		// break;
		return;
	}

IL_028c:
	{
		// m_Collider.center = Vector3.zero;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_37 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_37);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_37, L_38, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_39 = __this->___m_Collider_4;
		NullCheck(L_39);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_39, (0.00999999978f), NULL);
		// m_Collider.height = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_40 = __this->___m_Collider_4;
		NullCheck(L_40);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_40, (0.00999999978f), NULL);
		// break;
		return;
	}

IL_02bd:
	{
		// m_Collider.center = Vector3.zero;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_41 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_41);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_41, L_42, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_43 = __this->___m_Collider_4;
		NullCheck(L_43);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_43, (0.00999999978f), NULL);
		// m_Collider.height = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_44 = __this->___m_Collider_4;
		NullCheck(L_44);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_44, (0.00999999978f), NULL);
		// break;
		return;
	}

IL_02ee:
	{
		// m_Collider.center = new Vector3(0f, -0.001f, -0.0025f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_45 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), (0.0f), (-0.00100000005f), (-0.00249999994f), /*hidden argument*/NULL);
		NullCheck(L_45);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_45, L_46, NULL);
		// m_Collider.radius = 0.008f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_47 = __this->___m_Collider_4;
		NullCheck(L_47);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_47, (0.00800000038f), NULL);
		// m_Collider.height = 0.015f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_48 = __this->___m_Collider_4;
		NullCheck(L_48);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_48, (0.0149999997f), NULL);
		// break;
		return;
	}

IL_032e:
	{
		// m_Collider.center = new Vector3(0f, 0f, 0.02f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_49 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), (0.0f), (0.0f), (0.0199999996f), /*hidden argument*/NULL);
		NullCheck(L_49);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_49, L_50, NULL);
		// m_Collider.radius = 0.012f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_51 = __this->___m_Collider_4;
		NullCheck(L_51);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_51, (0.0120000001f), NULL);
		// m_Collider.height = 0.1f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_52 = __this->___m_Collider_4;
		NullCheck(L_52);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_52, (0.100000001f), NULL);
		// break;
		return;
	}

IL_036e:
	{
		// m_Collider.center = new Vector3(0f, 0f, 0.01f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_53 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_54), (0.0f), (0.0f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_53);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_53, L_54, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_55 = __this->___m_Collider_4;
		NullCheck(L_55);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_55, (0.00999999978f), NULL);
		// m_Collider.height = 0.04f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_56 = __this->___m_Collider_4;
		NullCheck(L_56);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_56, (0.0399999991f), NULL);
		// break;
		return;
	}

IL_03ae:
	{
		// m_Collider.center = Vector3.zero;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_57 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_57);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_57, L_58, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_59 = __this->___m_Collider_4;
		NullCheck(L_59);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_59, (0.00999999978f), NULL);
		// m_Collider.height = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_60 = __this->___m_Collider_4;
		NullCheck(L_60);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_60, (0.00999999978f), NULL);
		// break;
		return;
	}

IL_03df:
	{
		// m_Collider.center = Vector3.zero;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_61 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_61);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_61, L_62, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_63 = __this->___m_Collider_4;
		NullCheck(L_63);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_63, (0.00999999978f), NULL);
		// m_Collider.height = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_64 = __this->___m_Collider_4;
		NullCheck(L_64);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_64, (0.00999999978f), NULL);
		// break;
		return;
	}

IL_0410:
	{
		// m_Collider.center = new Vector3(0f, -0.002f, -0.0025f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_65 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_66), (0.0f), (-0.00200000009f), (-0.00249999994f), /*hidden argument*/NULL);
		NullCheck(L_65);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_65, L_66, NULL);
		// m_Collider.radius = 0.008f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_67 = __this->___m_Collider_4;
		NullCheck(L_67);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_67, (0.00800000038f), NULL);
		// m_Collider.height = 0.015f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_68 = __this->___m_Collider_4;
		NullCheck(L_68);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_68, (0.0149999997f), NULL);
		// break;
		return;
	}

IL_0450:
	{
		// m_Collider.center = new Vector3(0f, 0f, 0.02f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_69 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), (0.0f), (0.0f), (0.0199999996f), /*hidden argument*/NULL);
		NullCheck(L_69);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_69, L_70, NULL);
		// m_Collider.radius = 0.012f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_71 = __this->___m_Collider_4;
		NullCheck(L_71);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_71, (0.0120000001f), NULL);
		// m_Collider.height = 0.1f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_72 = __this->___m_Collider_4;
		NullCheck(L_72);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_72, (0.100000001f), NULL);
		// break;
		return;
	}

IL_0490:
	{
		// m_Collider.center = new Vector3(0f, 0f, 0.01f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_73 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_74), (0.0f), (0.0f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_73);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_73, L_74, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_75 = __this->___m_Collider_4;
		NullCheck(L_75);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_75, (0.00999999978f), NULL);
		// m_Collider.height = 0.04f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_76 = __this->___m_Collider_4;
		NullCheck(L_76);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_76, (0.0399999991f), NULL);
		// break;
		return;
	}

IL_04d0:
	{
		// m_Collider.center = Vector3.zero;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_77 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_77);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_77, L_78, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_79 = __this->___m_Collider_4;
		NullCheck(L_79);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_79, (0.00999999978f), NULL);
		// m_Collider.height = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_80 = __this->___m_Collider_4;
		NullCheck(L_80);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_80, (0.00999999978f), NULL);
		// break;
		return;
	}

IL_0501:
	{
		// m_Collider.center = Vector3.zero;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_81 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_81);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_81, L_82, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_83 = __this->___m_Collider_4;
		NullCheck(L_83);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_83, (0.00999999978f), NULL);
		// m_Collider.height = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_84 = __this->___m_Collider_4;
		NullCheck(L_84);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_84, (0.00999999978f), NULL);
		// break;
		return;
	}

IL_0532:
	{
		// m_Collider.center = new Vector3(0f, -0.002f, -0.0025f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_85 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		memset((&L_86), 0, sizeof(L_86));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_86), (0.0f), (-0.00200000009f), (-0.00249999994f), /*hidden argument*/NULL);
		NullCheck(L_85);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_85, L_86, NULL);
		// m_Collider.radius = 0.008f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_87 = __this->___m_Collider_4;
		NullCheck(L_87);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_87, (0.00800000038f), NULL);
		// m_Collider.height = 0.015f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_88 = __this->___m_Collider_4;
		NullCheck(L_88);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_88, (0.0149999997f), NULL);
		// break;
		return;
	}

IL_0572:
	{
		// m_Collider.center = new Vector3(0f, 0f, 0.02f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_89 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		memset((&L_90), 0, sizeof(L_90));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_90), (0.0f), (0.0f), (0.0199999996f), /*hidden argument*/NULL);
		NullCheck(L_89);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_89, L_90, NULL);
		// m_Collider.radius = 0.012f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_91 = __this->___m_Collider_4;
		NullCheck(L_91);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_91, (0.0120000001f), NULL);
		// m_Collider.height = 0.1f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_92 = __this->___m_Collider_4;
		NullCheck(L_92);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_92, (0.100000001f), NULL);
		// break;
		return;
	}

IL_05b2:
	{
		// m_Collider.center = new Vector3(0f, 0f, 0.01f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_93 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_94), (0.0f), (0.0f), (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_93);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_93, L_94, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_95 = __this->___m_Collider_4;
		NullCheck(L_95);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_95, (0.00999999978f), NULL);
		// m_Collider.height = 0.04f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_96 = __this->___m_Collider_4;
		NullCheck(L_96);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_96, (0.0399999991f), NULL);
		// break;
		return;
	}

IL_05f2:
	{
		// m_Collider.center = Vector3.zero;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_97 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_97);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_97, L_98, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_99 = __this->___m_Collider_4;
		NullCheck(L_99);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_99, (0.00999999978f), NULL);
		// m_Collider.height = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_100 = __this->___m_Collider_4;
		NullCheck(L_100);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_100, (0.00999999978f), NULL);
		// break;
		return;
	}

IL_0623:
	{
		// m_Collider.center = Vector3.zero;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_101 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_101);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_101, L_102, NULL);
		// m_Collider.radius = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_103 = __this->___m_Collider_4;
		NullCheck(L_103);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_103, (0.00999999978f), NULL);
		// m_Collider.height = 0.01f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_104 = __this->___m_Collider_4;
		NullCheck(L_104);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_104, (0.00999999978f), NULL);
		// break;
		return;
	}

IL_0654:
	{
		// m_Collider.center = new Vector3(0f, -0.002f, -0.0025f);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_105 = __this->___m_Collider_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_106), (0.0f), (-0.00200000009f), (-0.00249999994f), /*hidden argument*/NULL);
		NullCheck(L_105);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_105, L_106, NULL);
		// m_Collider.radius = 0.006f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_107 = __this->___m_Collider_4;
		NullCheck(L_107);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_107, (0.00600000005f), NULL);
		// m_Collider.height = 0.015f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_108 = __this->___m_Collider_4;
		NullCheck(L_108);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_108, (0.0149999997f), NULL);
		// }
		return;
	}
}
// UnityEngine.Rigidbody Wave.Essence.Hand.Interaction.JointCollider::InitRigidbody(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* JointCollider_InitRigidbody_m400FC8448D96474F5AB7EE8B326BB54F5872EB5C (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, float ___0_mass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Rigidbody rigidbody = gameObject.AddComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_0, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		// rigidbody.mass = mass;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = L_1;
		float L_3 = ___0_mass;
		NullCheck(L_2);
		Rigidbody_set_mass_mC7F886DEDB57C742A16F8B6B779F69AFE164CA4B(L_2, L_3, NULL);
		// rigidbody.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = L_2;
		NullCheck(L_4);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_4, (bool)0, NULL);
		// rigidbody.interpolation = RigidbodyInterpolation.Interpolate;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = L_4;
		NullCheck(L_5);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_5, 1, NULL);
		// rigidbody.collisionDetectionMode = CollisionDetectionMode.Continuous;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = L_5;
		NullCheck(L_6);
		Rigidbody_set_collisionDetectionMode_m70A22E9878027BF6D3D7E851A43A8E32B8E02343(L_6, 1, NULL);
		// rigidbody.solverIterations = 100;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = L_6;
		NullCheck(L_7);
		Rigidbody_set_solverIterations_m533625CFDF6CB3E9412AD2ACD3FA13A6636A401C(L_7, ((int32_t)100), NULL);
		// rigidbody.solverVelocityIterations = 15;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = L_7;
		NullCheck(L_8);
		Rigidbody_set_solverVelocityIterations_m53C09CB42CA4DA944D52E012BAF8112719AD753B(L_8, ((int32_t)15), NULL);
		// return rigidbody;
		return L_8;
	}
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider::InitCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider_InitCollider_m31AEACED760BC88420AD1FC9C65921F454911F8D (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Collider == null)
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_0 = __this->___m_Collider_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		// m_Collider = gameObject.AddComponent<CapsuleCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_3;
		L_3 = GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF(L_2, GameObject_AddComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mE9815ABBF56D4B7806C63F85A30AE9BBDE927BCF_RuntimeMethod_var);
		__this->___m_Collider_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Collider_4), (void*)L_3);
		// m_Collider.radius = k_ColliderRadius;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___m_Collider_4;
		NullCheck(L_4);
		CapsuleCollider_set_radius_mB301C0086FE0D251683512184B0F6DDE264BA985(L_4, (9.99999997E-07f), NULL);
		// m_Collider.height = k_ColliderHeight;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_5 = __this->___m_Collider_4;
		NullCheck(L_5);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_5, (9.99999997E-07f), NULL);
		// m_Collider.direction = 2;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_6 = __this->___m_Collider_4;
		NullCheck(L_6);
		CapsuleCollider_set_direction_m3064DADA49F7F48DA8D62659B1D3545C83C553CB(L_6, 2, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider_OnCollisionEnter_m8B75595C1392F7D4CC812A1ADBB052328DEB5117 (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* G_B3_0 = NULL;
	OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* G_B2_0 = NULL;
	{
		// if (!IsJointCollider(collision.collider))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_0, NULL);
		bool L_2;
		L_2 = JointCollider_IsJointCollider_m7BB5E3B003C662BF39DE2C271B7D8E75353062AC(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// onJointCollision?.Invoke(collision, CollisionState.Enter);
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_3 = __this->___onJointCollision_5;
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_5 = ___0_collision;
		NullCheck(G_B3_0);
		OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_inline(G_B3_0, L_5, 0, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider_OnCollisionStay_m289F4BAAAC685B2D71F309C0C4C79DE74EA015B4 (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* G_B3_0 = NULL;
	OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* G_B2_0 = NULL;
	{
		// if (!IsJointCollider(collision.collider))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_0, NULL);
		bool L_2;
		L_2 = JointCollider_IsJointCollider_m7BB5E3B003C662BF39DE2C271B7D8E75353062AC(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// onJointCollision?.Invoke(collision, CollisionState.Stay);
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_3 = __this->___onJointCollision_5;
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_5 = ___0_collision;
		NullCheck(G_B3_0);
		OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_inline(G_B3_0, L_5, 1, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider_OnCollisionExit_m2416EAB8E1DC07D988E818B5D9616E1B9515AF1F (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* G_B3_0 = NULL;
	OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* G_B2_0 = NULL;
	{
		// if (!IsJointCollider(collision.collider))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_0, NULL);
		bool L_2;
		L_2 = JointCollider_IsJointCollider_m7BB5E3B003C662BF39DE2C271B7D8E75353062AC(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// onJointCollision?.Invoke(collision, CollisionState.Exit);
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_3 = __this->___onJointCollision_5;
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_5 = ___0_collision;
		NullCheck(G_B3_0);
		OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_inline(G_B3_0, L_5, 2, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Boolean Wave.Essence.Hand.Interaction.JointCollider::IsJointCollider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JointCollider_IsJointCollider_m7BB5E3B003C662BF39DE2C271B7D8E75353062AC (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisJointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2_m92DBEEC8FA36277FD7A6F14741F48BA2C56E7940_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JointCollider jointCollider = collider.GetComponent<JointCollider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_collider;
		NullCheck(L_0);
		JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* L_1;
		L_1 = Component_GetComponent_TisJointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2_m92DBEEC8FA36277FD7A6F14741F48BA2C56E7940(L_0, Component_GetComponent_TisJointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2_m92DBEEC8FA36277FD7A6F14741F48BA2C56E7940_RuntimeMethod_var);
		// return jointCollider != null;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider::AddJointCollisionListener(Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider_AddJointCollisionListener_mCF856EE610E19103602367B848F88972FFD0C2C1 (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onJointCollision += handler;
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_0 = __this->___onJointCollision_5;
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_1 = ___0_handler;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		__this->___onJointCollision_5 = ((OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8*)CastclassSealed((RuntimeObject*)L_2, OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onJointCollision_5), (void*)((OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8*)CastclassSealed((RuntimeObject*)L_2, OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider::RemoveJointCollisionListener(Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider_RemoveJointCollisionListener_mC945E5BC86C15487124F1E6E0F488091630A50B9 (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onJointCollision -= handler;
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_0 = __this->___onJointCollision_5;
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* L_1 = ___0_handler;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		__this->___onJointCollision_5 = ((OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8*)CastclassSealed((RuntimeObject*)L_2, OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onJointCollision_5), (void*)((OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8*)CastclassSealed((RuntimeObject*)L_2, OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointCollider__ctor_m166973DE4559F9AC061B003D07607D4A13590BD9 (JointCollider_tFC9DF1F08582BF393F59F150ED6DAD437729FFD2* __this, const RuntimeMethod* method) 
{
	{
		// private JointType jointType = JointType.Count;
		__this->___jointType_8 = ((int32_t)26);
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
void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_Multicast(OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* currentDelegate = reinterpret_cast<OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_collision, ___1_state, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenInst(OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method)
{
	NullCheck(___0_collision);
	typedef void (*FunctionPointerType) (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_collision, ___1_state, method);
}
void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenStatic(OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_collision, ___1_state, method);
}
void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenStaticInvoker(OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_collision, ___1_state);
}
void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_ClosedStaticInvoker(OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_collision, ___1_state);
}
void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenVirtual(OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method)
{
	NullCheck(___0_collision);
	VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_collision, ___1_state);
}
void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenInterface(OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method)
{
	NullCheck(___0_collision);
	InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_collision, ___1_state);
}
void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenGenericVirtual(OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method)
{
	NullCheck(___0_collision);
	GenericVirtualActionInvoker1< int32_t >::Invoke(method, ___0_collision, ___1_state);
}
void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenGenericInterface(OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method)
{
	NullCheck(___0_collision);
	GenericInterfaceActionInvoker1< int32_t >::Invoke(method, ___0_collision, ___1_state);
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJointCollision__ctor_m4999BB1B3FD3C2BFD535446C609ACBA601A904A7 (OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_Multicast;
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision::Invoke(UnityEngine.Collision,Wave.Essence.Hand.Interaction.JointCollider/CollisionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93 (OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_collision, ___1_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision::BeginInvoke(UnityEngine.Collision,Wave.Essence.Hand.Interaction.JointCollider/CollisionState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnJointCollision_BeginInvoke_m2DC9360092A1CD9ABD929868E5D460D95C843DDD (OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionState_t6D54A6BF54FDEC1EFE3258AC9D4B0CA16D551165_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_collision;
	__d_args[1] = Box(CollisionState_t6D54A6BF54FDEC1EFE3258AC9D4B0CA16D551165_il2cpp_TypeInfo_var, &___1_state);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Wave.Essence.Hand.Interaction.JointCollider/OnJointCollision::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnJointCollision_EndInvoke_m185E3DAC0CB7AB92487F893F9CB42663292FAD5E (OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsInteractable_Update_mA3D5DDE5163CB36FF013E5D0E3498A3CFE0E9318 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interactableRigidbody == null) { return; }
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___interactableRigidbody_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (interactableRigidbody == null) { return; }
		return;
	}

IL_000f:
	{
		// if (isBegin)
		bool L_2 = __this->___isBegin_10;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// RecordMovement();
		PhysicsInteractable_RecordMovement_m1257F3EC321073930236A0C2A90F7A1AE10E8A11(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsInteractable_FixedUpdate_m5A9A4158621673EECFF408DA431E86AEA465D3CB (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6CEE758544FE55D971D9F1F74E4B1AD6E49BB6BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (interactableRigidbody == null) { return; }
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___interactableRigidbody_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (interactableRigidbody == null) { return; }
		return;
	}

IL_000f:
	{
		// if (isEnd)
		bool L_2 = __this->___isEnd_11;
		if (!L_2)
		{
			goto IL_0077;
		}
	}
	{
		// Vector3 velocity = CalculateVelocity();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = PhysicsInteractable_CalculateVelocity_m7B24037F26CA32B0ADF298A98C019725214AAD7B(__this, NULL);
		V_0 = L_3;
		// Vector3 angularVelocity = CalculateAngularVelocity();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = PhysicsInteractable_CalculateAngularVelocity_mDDECAB3C9BAD01017B032D2595605D698B596788(__this, NULL);
		V_1 = L_4;
		// interactableRigidbody.ResetInertiaTensor();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___interactableRigidbody_7;
		NullCheck(L_5);
		Rigidbody_ResetInertiaTensor_m34020552CA2D42DEA3E01562641A9B292848BD01(L_5, NULL);
		// interactableRigidbody.velocity = velocity * forceMultiplier;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___interactableRigidbody_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = __this->___forceMultiplier_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		NullCheck(L_6);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_9, NULL);
		// interactableRigidbody.angularVelocity = angularVelocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___interactableRigidbody_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_10, L_11, NULL);
		// interactableRigidbody = null;
		__this->___interactableRigidbody_7 = (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactableRigidbody_7), (void*)(Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL);
		// movementPoses.Clear();
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_12 = __this->___movementPoses_8;
		NullCheck(L_12);
		List_1_Clear_m6CEE758544FE55D971D9F1F74E4B1AD6E49BB6BC_inline(L_12, List_1_Clear_m6CEE758544FE55D971D9F1F74E4B1AD6E49BB6BC_RuntimeMethod_var);
		// timestamps.Clear();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_13 = __this->___timestamps_9;
		NullCheck(L_13);
		List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline(L_13, List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		// isEnd = false;
		__this->___isEnd_11 = (bool)0;
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable::RecordMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsInteractable_RecordMovement_m1257F3EC321073930236A0C2A90F7A1AE10E8A11 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1AB3815922EAB4210EC4D8F2053BEE86A700CE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mEEA11EEF96F3DDA1D99D1ADB236D4C87D27FB686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float time = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_0 = L_0;
		// if (movementPoses.Count == 0 ||
		//     timestamps[movementPoses.Count - 1] != time)
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_1 = __this->___movementPoses_8;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_1, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = __this->___timestamps_9;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_4 = __this->___movementPoses_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_4, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		NullCheck(L_3);
		float L_6;
		L_6 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_3, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		float L_7 = V_0;
		if ((((float)L_6) == ((float)L_7)))
		{
			goto IL_0060;
		}
	}

IL_002e:
	{
		// movementPoses.Add(new Pose(interactableRigidbody.position, interactableRigidbody.rotation));
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_8 = __this->___movementPoses_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___interactableRigidbody_7;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_9, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___interactableRigidbody_7;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_11, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_13), L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_m1AB3815922EAB4210EC4D8F2053BEE86A700CE89_inline(L_8, L_13, List_1_Add_m1AB3815922EAB4210EC4D8F2053BEE86A700CE89_RuntimeMethod_var);
		// timestamps.Add(time);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_14 = __this->___timestamps_9;
		float L_15 = V_0;
		NullCheck(L_14);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_14, L_15, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
	}

IL_0060:
	{
		// if (movementPoses.Count > MAX_POSE_SAMPLES)
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_16 = __this->___movementPoses_8;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_16, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		int32_t L_18 = __this->___MAX_POSE_SAMPLES_6;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_008b;
		}
	}
	{
		// movementPoses.RemoveAt(0);
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_19 = __this->___movementPoses_8;
		NullCheck(L_19);
		List_1_RemoveAt_mEEA11EEF96F3DDA1D99D1ADB236D4C87D27FB686(L_19, 0, List_1_RemoveAt_mEEA11EEF96F3DDA1D99D1ADB236D4C87D27FB686_RuntimeMethod_var);
		// timestamps.RemoveAt(0);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_20 = __this->___timestamps_9;
		NullCheck(L_20);
		List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93(L_20, 0, List_1_RemoveAt_m02AAC9739BBFB220DD397843A7825154D07F2C93_RuntimeMethod_var);
	}

IL_008b:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::CalculateVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_CalculateVelocity_m7B24037F26CA32B0ADF298A98C019725214AAD7B (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (movementPoses.Count >= MIN_POSE_SAMPLES)
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = __this->___movementPoses_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_0, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		int32_t L_2 = __this->___MIN_POSE_SAMPLES_5;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_006e;
		}
	}
	{
		// List<Vector3> velocities = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_3, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_3;
		// for (int i = 0; i < movementPoses.Count - 1; i++)
		V_1 = 0;
		goto IL_0056;
	}

IL_001d:
	{
		// for (int j = i + 1; j < movementPoses.Count; j++)
		int32_t L_4 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0044;
	}

IL_0023:
	{
		// Vector3 vel = GetVelocity(i, j);
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = PhysicsInteractable_GetVelocity_m4DE6EC9E08C489824C5EF44CBF93C5CF0580CF12(__this, L_5, L_6, NULL);
		V_3 = L_7;
		// if (vel != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_10;
		L_10 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		// velocities.Add(vel);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_3;
		NullCheck(L_11);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_11, L_12, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0040:
	{
		// for (int j = i + 1; j < movementPoses.Count; j++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		// for (int j = i + 1; j < movementPoses.Count; j++)
		int32_t L_14 = V_2;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_15 = __this->___movementPoses_8;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_15, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0023;
		}
	}
	{
		// for (int i = 0; i < movementPoses.Count - 1; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0056:
	{
		// for (int i = 0; i < movementPoses.Count - 1; i++)
		int32_t L_18 = V_1;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_19 = __this->___movementPoses_8;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_19, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)))))
		{
			goto IL_001d;
		}
	}
	{
		// return FindBestVelocity(velocities);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = PhysicsInteractable_FindBestVelocity_mF59EDE7A4E2D6FAC7FEE052C8F491980BB1F77C5(__this, L_21, NULL);
		return L_22;
	}

IL_006e:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_23;
	}
}
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::GetVelocity(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_GetVelocity_m4DE6EC9E08C489824C5EF44CBF93C5CF0580CF12 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, int32_t ___0_idx1, int32_t ___1_idx2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// if (idx1 >= movementPoses.Count || idx2 >= movementPoses.Count || idx1 == idx2)
		int32_t L_0 = ___0_idx1;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_1 = __this->___movementPoses_8;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_1, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___1_idx2;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_4 = __this->___movementPoses_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_4, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_6 = ___0_idx1;
		int32_t L_7 = ___1_idx2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0026;
		}
	}

IL_0020:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_8;
	}

IL_0026:
	{
		// var pose1 = movementPoses[idx1];
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_9 = __this->___movementPoses_8;
		int32_t L_10 = ___0_idx1;
		NullCheck(L_9);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431(L_9, L_10, List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431_RuntimeMethod_var);
		V_0 = L_11;
		// var pose2 = movementPoses[idx2];
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_12 = __this->___movementPoses_8;
		int32_t L_13 = ___1_idx2;
		NullCheck(L_12);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14;
		L_14 = List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431(L_12, L_13, List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431_RuntimeMethod_var);
		V_1 = L_14;
		// var time1 = timestamps[idx1];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_15 = __this->___timestamps_9;
		int32_t L_16 = ___0_idx1;
		NullCheck(L_15);
		float L_17;
		L_17 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_15, L_16, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_2 = L_17;
		// var time2 = timestamps[idx2];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_18 = __this->___timestamps_9;
		int32_t L_19 = ___1_idx2;
		NullCheck(L_18);
		float L_20;
		L_20 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_18, L_19, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_3 = L_20;
		// if (time2 == time1)
		float L_21 = V_3;
		float L_22 = V_2;
		if ((!(((float)L_21) == ((float)L_22))))
		{
			goto IL_0064;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_23;
	}

IL_0064:
	{
		// return (pose2.position - pose1.position) / (time2 - time1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_25, L_27, NULL);
		float L_29 = V_3;
		float L_30 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_28, ((float)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		return L_31;
	}
}
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::FindBestVelocity(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_FindBestVelocity_mF59EDE7A4E2D6FAC7FEE052C8F491980BB1F77C5 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_velocities, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_tEDD920942C8F814D55C6B029EACB00C81620BD14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CFindBestVelocityU3Eb__0_m562D0EE57DAE13CF1140D001016883C03E30B5FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* L_0 = (U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_m6A327EA57AB7E49BFEA42E4E6A18BB2E92E7D183(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* L_1 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___0_velocities;
		NullCheck(L_1);
		L_1->___velocities_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___velocities_0), (void*)L_2);
		U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// if (velocities.Count == 0)
		U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* L_4 = V_0;
		NullCheck(L_4);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = L_4->___velocities_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_5, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0027;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_7;
	}

IL_0027:
	{
		// Vector3 bestVelocity = Vector3.zero;
		U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_8);
		L_8->___bestVelocity_3 = L_9;
		// float bestScore = float.PositiveInfinity;
		U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* L_10 = V_0;
		NullCheck(L_10);
		L_10->___bestScore_2 = (std::numeric_limits<float>::infinity());
		// Parallel.For(0, velocities.Count, i =>
		// {
		//     float score = 0f;
		//     for (int j = 0; j < velocities.Count; j++)
		//     {
		//         if (i != j)
		//         {
		//             score += (velocities[i] - velocities[j]).magnitude;
		//         }
		//     }
		// 
		//     lock (lockVel)
		//     {
		//         if (score < bestScore)
		//         {
		//             bestVelocity = velocities[i];
		//             bestScore = score;
		//         }
		//     }
		// });
		U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* L_11 = V_0;
		NullCheck(L_11);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = L_11->___velocities_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_12, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* L_14 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_15 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CFindBestVelocityU3Eb__0_m562D0EE57DAE13CF1140D001016883C03E30B5FD_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Parallel_tEDD920942C8F814D55C6B029EACB00C81620BD14_il2cpp_TypeInfo_var);
		ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734 L_16;
		L_16 = Parallel_For_mD3332AD2F9C519769F2BEF201C54F3C57EFCF6EC(0, L_13, L_15, NULL);
		// return bestVelocity;
		U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* L_17 = V_0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___bestVelocity_3;
		return L_18;
	}
}
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::CalculateAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_CalculateAngularVelocity_mDDECAB3C9BAD01017B032D2595605D698B596788 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (movementPoses.Count >= MIN_POSE_SAMPLES)
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = __this->___movementPoses_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_0, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		int32_t L_2 = __this->___MIN_POSE_SAMPLES_5;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_006e;
		}
	}
	{
		// List<Vector3> angularVelocities = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_3, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_3;
		// for (int i = 0; i < movementPoses.Count - 1; i++)
		V_1 = 0;
		goto IL_0056;
	}

IL_001d:
	{
		// for (int j = i + 1; j < movementPoses.Count; j++)
		int32_t L_4 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0044;
	}

IL_0023:
	{
		// Vector3 angVel = GetAngularVelocity(i, j);
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = PhysicsInteractable_GetAngularVelocity_m2CB616EB469C3FCA52A7B914D4194DB09E051AEF(__this, L_5, L_6, NULL);
		V_3 = L_7;
		// if (angVel != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_10;
		L_10 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		// angularVelocities.Add(angVel);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_3;
		NullCheck(L_11);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_11, L_12, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
	}

IL_0040:
	{
		// for (int j = i + 1; j < movementPoses.Count; j++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0044:
	{
		// for (int j = i + 1; j < movementPoses.Count; j++)
		int32_t L_14 = V_2;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_15 = __this->___movementPoses_8;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_15, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0023;
		}
	}
	{
		// for (int i = 0; i < movementPoses.Count - 1; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0056:
	{
		// for (int i = 0; i < movementPoses.Count - 1; i++)
		int32_t L_18 = V_1;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_19 = __this->___movementPoses_8;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_19, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)))))
		{
			goto IL_001d;
		}
	}
	{
		// return FindBestAngularVelocities(angularVelocities);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = PhysicsInteractable_FindBestAngularVelocities_mBDC4CF3EECDF1946B49B7348DDFCEF00198646F2(__this, L_21, NULL);
		return L_22;
	}

IL_006e:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_23;
	}
}
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::GetAngularVelocity(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_GetAngularVelocity_m2CB616EB469C3FCA52A7B914D4194DB09E051AEF (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, int32_t ___0_idx1, int32_t ___1_idx2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (idx1 >= movementPoses.Count || idx2 >= movementPoses.Count || idx1 == idx2)
		int32_t L_0 = ___0_idx1;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_1 = __this->___movementPoses_8;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_1, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___1_idx2;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_4 = __this->___movementPoses_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_4, List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_6 = ___0_idx1;
		int32_t L_7 = ___1_idx2;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0026;
		}
	}

IL_0020:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_8;
	}

IL_0026:
	{
		// var pose1 = movementPoses[idx1];
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_9 = __this->___movementPoses_8;
		int32_t L_10 = ___0_idx1;
		NullCheck(L_9);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431(L_9, L_10, List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431_RuntimeMethod_var);
		V_0 = L_11;
		// var pose2 = movementPoses[idx2];
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_12 = __this->___movementPoses_8;
		int32_t L_13 = ___1_idx2;
		NullCheck(L_12);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14;
		L_14 = List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431(L_12, L_13, List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431_RuntimeMethod_var);
		V_1 = L_14;
		// var time1 = timestamps[idx1];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_15 = __this->___timestamps_9;
		int32_t L_16 = ___0_idx1;
		NullCheck(L_15);
		float L_17;
		L_17 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_15, L_16, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_2 = L_17;
		// var time2 = timestamps[idx2];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_18 = __this->___timestamps_9;
		int32_t L_19 = ___1_idx2;
		NullCheck(L_18);
		float L_20;
		L_20 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_18, L_19, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_3 = L_20;
		// if (time2 == time1)
		float L_21 = V_3;
		float L_22 = V_2;
		if ((!(((float)L_21) == ((float)L_22))))
		{
			goto IL_0064;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_23;
	}

IL_0064:
	{
		// Quaternion diffRotation = pose2.rotation * Quaternion.Inverse(pose1.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = L_24.___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = L_26.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_25, L_28, NULL);
		V_4 = L_29;
		// diffRotation.ToAngleAxis(out float angularSpeed, out Vector3 torqueAxis);
		Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline((&V_4), (&V_5), (&V_6), NULL);
		// angularSpeed = (angularSpeed * Mathf.Deg2Rad) / (time2 - time1);
		float L_30 = V_5;
		float L_31 = V_3;
		float L_32 = V_2;
		V_5 = ((float)(((float)il2cpp_codegen_multiply(L_30, (0.0174532924f)))/((float)il2cpp_codegen_subtract(L_31, L_32))));
		// return torqueAxis * angularSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_6;
		float L_34 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_34, NULL);
		return L_35;
	}
}
// UnityEngine.Vector3 Wave.Essence.Hand.Interaction.PhysicsInteractable::FindBestAngularVelocities(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PhysicsInteractable_FindBestAngularVelocities_mBDC4CF3EECDF1946B49B7348DDFCEF00198646F2 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_velocities, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_tEDD920942C8F814D55C6B029EACB00C81620BD14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CFindBestAngularVelocitiesU3Eb__0_mA73C09BF25C1D3FD1B04BBA22E0539B7E047057D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* L_0 = (U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_m42E0AFF052F7EC816D9F0BE430724B7632700E08(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* L_1 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___0_velocities;
		NullCheck(L_1);
		L_1->___velocities_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___velocities_0), (void*)L_2);
		U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// if (velocities.Count == 0)
		U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* L_4 = V_0;
		NullCheck(L_4);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = L_4->___velocities_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_5, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0027;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_7;
	}

IL_0027:
	{
		// Vector3 bestVelocity = Vector3.zero;
		U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_8);
		L_8->___bestVelocity_3 = L_9;
		// float bestScore = float.PositiveInfinity;
		U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* L_10 = V_0;
		NullCheck(L_10);
		L_10->___bestScore_2 = (std::numeric_limits<float>::infinity());
		// Parallel.For(0, velocities.Count, i =>
		// {
		//     float score = 0f;
		//     for (int j = 0; j < velocities.Count; j++)
		//     {
		//         if (i != j)
		//         {
		//             score += (velocities[i] - velocities[j]).magnitude;
		//         }
		//     }
		// 
		//     lock (lockAngVel)
		//     {
		//         if (score < bestScore)
		//         {
		//             bestVelocity = velocities[i];
		//             bestScore = score;
		//         }
		//     }
		// });
		U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* L_11 = V_0;
		NullCheck(L_11);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = L_11->___velocities_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_12, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* L_14 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_15 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CFindBestAngularVelocitiesU3Eb__0_mA73C09BF25C1D3FD1B04BBA22E0539B7E047057D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Parallel_tEDD920942C8F814D55C6B029EACB00C81620BD14_il2cpp_TypeInfo_var);
		ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734 L_16;
		L_16 = Parallel_For_mD3332AD2F9C519769F2BEF201C54F3C57EFCF6EC(0, L_13, L_15, NULL);
		// return bestVelocity;
		U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* L_17 = V_0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___bestVelocity_3;
		return L_18;
	}
}
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable::OnBeginInteractabled(Wave.Essence.Hand.Interaction.IGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsInteractable_OnBeginInteractabled_m5F4F7385D5A7ED2CE2C3CBCE248B9FF0EEF238F2 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, RuntimeObject* ___0_grabbable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843* V_0 = NULL;
	{
		// if (grabbable is HandGrabInteractable handGrabbable)
		RuntimeObject* L_0 = ___0_grabbable;
		V_0 = ((HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843*)IsInstClass((RuntimeObject*)L_0, HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843_il2cpp_TypeInfo_var));
		HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// interactableRigidbody = handGrabbable.rigidbody;
		HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843* L_2 = V_0;
		NullCheck(L_2);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3;
		L_3 = HandGrabInteractable_get_rigidbody_mA658BD346AA6EB77CA0A83F3D497A41D63F7FA8C_inline(L_2, NULL);
		__this->___interactableRigidbody_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactableRigidbody_7), (void*)L_3);
	}

IL_0016:
	{
		// isBegin = true;
		__this->___isBegin_10 = (bool)1;
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable::OnEndInteractabled(Wave.Essence.Hand.Interaction.IGrabbable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsInteractable_OnEndInteractabled_m1CABA48E96688F471D6B969A9DF8EF22AB2CDB93 (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, RuntimeObject* ___0_grabbable, const RuntimeMethod* method) 
{
	{
		// isBegin = false;
		__this->___isBegin_10 = (bool)0;
		// isEnd = true;
		__this->___isEnd_11 = (bool)1;
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsInteractable__ctor_m1843D9A132F5DBBF522418F60927D95A37CAEA3B (PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6C9BC48FF099B7CF07ADD778D1DDD6B7D42ED791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float forceMultiplier = 1.0f;
		__this->___forceMultiplier_4 = (1.0f);
		// private readonly int MIN_POSE_SAMPLES = 2;
		__this->___MIN_POSE_SAMPLES_5 = 2;
		// private readonly int MAX_POSE_SAMPLES = 10;
		__this->___MAX_POSE_SAMPLES_6 = ((int32_t)10);
		// private List<Pose> movementPoses = new List<Pose>();
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*)il2cpp_codegen_object_new(List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6C9BC48FF099B7CF07ADD778D1DDD6B7D42ED791(L_0, List_1__ctor_m6C9BC48FF099B7CF07ADD778D1DDD6B7D42ED791_RuntimeMethod_var);
		__this->___movementPoses_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movementPoses_8), (void*)L_0);
		// private List<float> timestamps = new List<float>();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_1 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_1, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		__this->___timestamps_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timestamps_9), (void*)L_1);
		// private object lockVel = new object();
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		__this->___lockVel_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lockVel_12), (void*)L_2);
		// private object lockAngVel = new object();
		RuntimeObject* L_3 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_3, NULL);
		__this->___lockAngVel_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lockAngVel_13), (void*)L_3);
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
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m6A327EA57AB7E49BFEA42E4E6A18BB2E92E7D183 (U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass15_0::<FindBestVelocity>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CFindBestVelocityU3Eb__0_m562D0EE57DAE13CF1140D001016883C03E30B5FD (U3CU3Ec__DisplayClass15_0_tA401E962F51E129FEE7AC21E9230641FB799CD56* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		// float score = 0f;
		V_0 = (0.0f);
		// for (int j = 0; j < velocities.Count; j++)
		V_1 = 0;
		goto IL_003a;
	}

IL_000a:
	{
		// if (i != j)
		int32_t L_0 = ___0_i;
		int32_t L_1 = V_1;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0036;
		}
	}
	{
		// score += (velocities[i] - velocities[j]).magnitude;
		float L_2 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___velocities_0;
		int32_t L_4 = ___0_i;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_3, L_4, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = __this->___velocities_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_6, L_7, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_8, NULL);
		V_2 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		V_0 = ((float)il2cpp_codegen_add(L_2, L_10));
	}

IL_0036:
	{
		// for (int j = 0; j < velocities.Count; j++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003a:
	{
		// for (int j = 0; j < velocities.Count; j++)
		int32_t L_12 = V_1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = __this->___velocities_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_13, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000a;
		}
	}
	{
		// lock (lockVel)
		PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* L_15 = __this->___U3CU3E4__this_1;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___lockVel_12;
		V_3 = L_16;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				{
					bool L_17 = V_4;
					if (!L_17)
					{
						goto IL_008d;
					}
				}
				{
					RuntimeObject* L_18 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_18, NULL);
				}

IL_008d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_19 = V_3;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_19, (&V_4), NULL);
				// if (score < bestScore)
				float L_20 = V_0;
				float L_21 = __this->___bestScore_2;
				if ((!(((float)L_20) < ((float)L_21))))
				{
					goto IL_0081_1;
				}
			}
			{
				// bestVelocity = velocities[i];
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_22 = __this->___velocities_0;
				int32_t L_23 = ___0_i;
				NullCheck(L_22);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_22, L_23, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
				__this->___bestVelocity_3 = L_24;
				// bestScore = score;
				float L_25 = V_0;
				__this->___bestScore_2 = L_25;
			}

IL_0081_1:
			{
				// }
				goto IL_008e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008e:
	{
		// });
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
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m42E0AFF052F7EC816D9F0BE430724B7632700E08 (U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.PhysicsInteractable/<>c__DisplayClass18_0::<FindBestAngularVelocities>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CFindBestAngularVelocitiesU3Eb__0_mA73C09BF25C1D3FD1B04BBA22E0539B7E047057D (U3CU3Ec__DisplayClass18_0_t8811689434992F2938232EB7FD0629FFF24EE313* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		// float score = 0f;
		V_0 = (0.0f);
		// for (int j = 0; j < velocities.Count; j++)
		V_1 = 0;
		goto IL_003a;
	}

IL_000a:
	{
		// if (i != j)
		int32_t L_0 = ___0_i;
		int32_t L_1 = V_1;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0036;
		}
	}
	{
		// score += (velocities[i] - velocities[j]).magnitude;
		float L_2 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = __this->___velocities_0;
		int32_t L_4 = ___0_i;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_3, L_4, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = __this->___velocities_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_6, L_7, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_8, NULL);
		V_2 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		V_0 = ((float)il2cpp_codegen_add(L_2, L_10));
	}

IL_0036:
	{
		// for (int j = 0; j < velocities.Count; j++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003a:
	{
		// for (int j = 0; j < velocities.Count; j++)
		int32_t L_12 = V_1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = __this->___velocities_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_13, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000a;
		}
	}
	{
		// lock (lockAngVel)
		PhysicsInteractable_t65F4C92925C9CB9DBA258376070D1123966A6878* L_15 = __this->___U3CU3E4__this_1;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___lockAngVel_13;
		V_3 = L_16;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				{
					bool L_17 = V_4;
					if (!L_17)
					{
						goto IL_008d;
					}
				}
				{
					RuntimeObject* L_18 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_18, NULL);
				}

IL_008d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_19 = V_3;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_19, (&V_4), NULL);
				// if (score < bestScore)
				float L_20 = V_0;
				float L_21 = __this->___bestScore_2;
				if ((!(((float)L_20) < ((float)L_21))))
				{
					goto IL_0081_1;
				}
			}
			{
				// bestVelocity = velocities[i];
				List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_22 = __this->___velocities_0;
				int32_t L_23 = ___0_i;
				NullCheck(L_22);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
				L_24 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_22, L_23, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
				__this->___bestVelocity_3 = L_24;
				// bestScore = score;
				float L_25 = V_0;
				__this->___bestScore_2 = L_25;
			}

IL_0081_1:
			{
				// }
				goto IL_008e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008e:
	{
		// });
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
// System.Void Wave.Essence.Hand.Interaction.Samples.BackEvent::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackEvent_OnEnable_m499A548D7908352286FDE2B40D15A6E4F0F880B0 (BackEvent_t03F12F2FF315D7591503655A94C3D675CCCDC869* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastEventTime = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___lastEventTime_4 = L_0;
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.BackEvent::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackEvent_OnCollisionEnter_m690172CA9BE8FEFF4A64B2734BCEDD6A9F286B11 (BackEvent_t03F12F2FF315D7591503655A94C3D675CCCDC869* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9125A3DAE5F940B2B69F5209C7FA28985EF7D61B);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// TimeSpan timeSinceLastEvent = DateTime.Now - lastEventTime;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = __this->___lastEventTime_4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		// if (timeSinceLastEvent.TotalSeconds > intervalTime)
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		int32_t L_4 = __this->___intervalTime_5;
		if ((!(((double)L_3) > ((double)((double)L_4)))))
		{
			goto IL_0036;
		}
	}
	{
		// lastEventTime = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___lastEventTime_4 = L_5;
		// SceneManager.LoadScene("HandGrab_Main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral9125A3DAE5F940B2B69F5209C7FA28985EF7D61B, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.BackEvent::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackEvent_OnClick_m46CDA0925AB4CCCCFFF20F54D1D7A70DA255A42B (BackEvent_t03F12F2FF315D7591503655A94C3D675CCCDC869* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9125A3DAE5F940B2B69F5209C7FA28985EF7D61B);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// TimeSpan timeSinceLastEvent = DateTime.Now - lastEventTime;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = __this->___lastEventTime_4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		// if (timeSinceLastEvent.TotalSeconds > intervalTime)
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		int32_t L_4 = __this->___intervalTime_5;
		if ((!(((double)L_3) > ((double)((double)L_4)))))
		{
			goto IL_0036;
		}
	}
	{
		// lastEventTime = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___lastEventTime_4 = L_5;
		// SceneManager.LoadScene("HandGrab_Main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral9125A3DAE5F940B2B69F5209C7FA28985EF7D61B, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.BackEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackEvent__ctor_m345011AE3129AEEAB2F925025B89449E77EDBF33 (BackEvent_t03F12F2FF315D7591503655A94C3D675CCCDC869* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private DateTime lastEventTime = DateTime.MinValue;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		__this->___lastEventTime_4 = L_0;
		// private int intervalTime = 1;
		__this->___intervalTime_5 = 1;
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
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent::AddListener(Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeEvent_AddListener_mD59AEBDB05FD0FAD463832A52F015510389A3F4E (ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* __this, CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CollisionHandler += handler;
		CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* L_0 = __this->___m_CollisionHandler_5;
		CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* L_1 = ___0_handler;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_1, NULL);
		__this->___m_CollisionHandler_5 = ((CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE*)CastclassSealed((RuntimeObject*)L_2, CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollisionHandler_5), (void*)((CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE*)CastclassSealed((RuntimeObject*)L_2, CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent::RemoveListener(Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeEvent_RemoveListener_m29DF2D16BFD7136EC09DE9C8FAC94413ADD4884F (ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* __this, CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CollisionHandler -= handler;
		CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* L_0 = __this->___m_CollisionHandler_5;
		CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* L_1 = ___0_handler;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		__this->___m_CollisionHandler_5 = ((CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE*)CastclassSealed((RuntimeObject*)L_2, CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollisionHandler_5), (void*)((CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE*)CastclassSealed((RuntimeObject*)L_2, CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeEvent_OnCollisionEnter_m477C48456A11CE83C9AD858555D26C59ECAD1B49 (ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	{
		// if (m_CollisionHandler != null)
		CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* L_0 = __this->___m_CollisionHandler_5;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// m_CollisionHandler.Invoke(collisionMode);
		CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* L_1 = __this->___m_CollisionHandler_5;
		int32_t L_2 = __this->___collisionMode_4;
		NullCheck(L_1);
		CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_inline(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeEvent__ctor_m99FBD8BBE9B4AEBD66235F8552BA29DF064E762B (ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* __this, const RuntimeMethod* method) 
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
void CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_Multicast(CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* currentDelegate = reinterpret_cast<CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_collisionMode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_OpenInst(CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_collisionMode, method);
}
void CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_OpenStatic(CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_collisionMode, method);
}
void CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_OpenStaticInvoker(CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_collisionMode);
}
void CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_ClosedStaticInvoker(CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_collisionMode);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_collisionMode);

}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionHandler__ctor_m2AA266CBE88E25812E9686BCC45E982EAE03DBF3 (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_Multicast;
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler::Invoke(Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440 (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_collisionMode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler::BeginInvoke(Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionMode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollisionHandler_BeginInvoke_m156F176B54C8503D29B3094B6A05A0A13FD501FF (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionMode_tBE9A011E320DB760B4AA7232E6904056AE59A112_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CollisionMode_tBE9A011E320DB760B4AA7232E6904056AE59A112_il2cpp_TypeInfo_var, &___0_collisionMode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionHandler_EndInvoke_m5B39B56E96BFAD5CE7B8B877B986A1C821E30C14 (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeManager_OnEnable_m8E4C13671EDE69C162B15776720B483351EBBB38 (ModeManager_t2574019FAE42F8E312D76D0D5134701063F266F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB267DBD9EBD012316EA5F14638C3593F754A34C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m31C01F0DABDE2B17771A2A66C1BCEA5B9E733B08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D09EAC550BA645F29306F322D324F87B0F5C64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3FFC8568966728D6FA8DFCEE3B7308034749B00C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModeManager_OnListenCollisionEvent_m1371488DED2E64C3F982312B12B6659869FB7E35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (ModeEvent modeEvent in modeEvents)
		List_1_tB0A0F950296A8B4664793E12CB4C1A506A14D005* L_0 = __this->___modeEvents_4;
		NullCheck(L_0);
		Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1 L_1;
		L_1 = List_1_GetEnumerator_m3FFC8568966728D6FA8DFCEE3B7308034749B00C(L_0, List_1_GetEnumerator_m3FFC8568966728D6FA8DFCEE3B7308034749B00C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB267DBD9EBD012316EA5F14638C3593F754A34C1((&V_0), Enumerator_Dispose_mB267DBD9EBD012316EA5F14638C3593F754A34C1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_000e_1:
			{
				// foreach (ModeEvent modeEvent in modeEvents)
				ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* L_2;
				L_2 = Enumerator_get_Current_m5D09EAC550BA645F29306F322D324F87B0F5C64D_inline((&V_0), Enumerator_get_Current_m5D09EAC550BA645F29306F322D324F87B0F5C64D_RuntimeMethod_var);
				// modeEvent.AddListener(OnListenCollisionEvent);
				CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* L_3 = (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE*)il2cpp_codegen_object_new(CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var);
				NullCheck(L_3);
				CollisionHandler__ctor_m2AA266CBE88E25812E9686BCC45E982EAE03DBF3(L_3, __this, (intptr_t)((void*)ModeManager_OnListenCollisionEvent_m1371488DED2E64C3F982312B12B6659869FB7E35_RuntimeMethod_var), NULL);
				NullCheck(L_2);
				ModeEvent_AddListener_mD59AEBDB05FD0FAD463832A52F015510389A3F4E(L_2, L_3, NULL);
			}

IL_0026_1:
			{
				// foreach (ModeEvent modeEvent in modeEvents)
				bool L_4;
				L_4 = Enumerator_MoveNext_m31C01F0DABDE2B17771A2A66C1BCEA5B9E733B08((&V_0), Enumerator_MoveNext_m31C01F0DABDE2B17771A2A66C1BCEA5B9E733B08_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeManager_OnDisable_m7AA920E97B5C729E3E9E307B22157003A18C0250 (ModeManager_t2574019FAE42F8E312D76D0D5134701063F266F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB267DBD9EBD012316EA5F14638C3593F754A34C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m31C01F0DABDE2B17771A2A66C1BCEA5B9E733B08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D09EAC550BA645F29306F322D324F87B0F5C64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3FFC8568966728D6FA8DFCEE3B7308034749B00C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModeManager_OnListenCollisionEvent_m1371488DED2E64C3F982312B12B6659869FB7E35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (ModeEvent modeEvent in modeEvents)
		List_1_tB0A0F950296A8B4664793E12CB4C1A506A14D005* L_0 = __this->___modeEvents_4;
		NullCheck(L_0);
		Enumerator_t4CF3BEADDB2F084E8F755A22397B80E2E72EBBA1 L_1;
		L_1 = List_1_GetEnumerator_m3FFC8568966728D6FA8DFCEE3B7308034749B00C(L_0, List_1_GetEnumerator_m3FFC8568966728D6FA8DFCEE3B7308034749B00C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB267DBD9EBD012316EA5F14638C3593F754A34C1((&V_0), Enumerator_Dispose_mB267DBD9EBD012316EA5F14638C3593F754A34C1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_000e_1:
			{
				// foreach (ModeEvent modeEvent in modeEvents)
				ModeEvent_tBE408F67ED17528929E9F68AEFF468AB2D97E62A* L_2;
				L_2 = Enumerator_get_Current_m5D09EAC550BA645F29306F322D324F87B0F5C64D_inline((&V_0), Enumerator_get_Current_m5D09EAC550BA645F29306F322D324F87B0F5C64D_RuntimeMethod_var);
				// modeEvent.RemoveListener(OnListenCollisionEvent);
				CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* L_3 = (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE*)il2cpp_codegen_object_new(CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE_il2cpp_TypeInfo_var);
				NullCheck(L_3);
				CollisionHandler__ctor_m2AA266CBE88E25812E9686BCC45E982EAE03DBF3(L_3, __this, (intptr_t)((void*)ModeManager_OnListenCollisionEvent_m1371488DED2E64C3F982312B12B6659869FB7E35_RuntimeMethod_var), NULL);
				NullCheck(L_2);
				ModeEvent_RemoveListener_m29DF2D16BFD7136EC09DE9C8FAC94413ADD4884F(L_2, L_3, NULL);
			}

IL_0026_1:
			{
				// foreach (ModeEvent modeEvent in modeEvents)
				bool L_4;
				L_4 = Enumerator_MoveNext_m31C01F0DABDE2B17771A2A66C1BCEA5B9E733B08((&V_0), Enumerator_MoveNext_m31C01F0DABDE2B17771A2A66C1BCEA5B9E733B08_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeManager::OnListenCollisionEvent(Wave.Essence.Hand.Interaction.Samples.ModeEvent/CollisionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeManager_OnListenCollisionEvent_m1371488DED2E64C3F982312B12B6659869FB7E35 (ModeManager_t2574019FAE42F8E312D76D0D5134701063F266F3* __this, int32_t ___0_collisionMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B507619947011DCF870E1408A03270EEEDDC7B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FA66199F17628A60899492234E048617FDF539B);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_collisionMode;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_collisionMode;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// UnityEngine.SceneManagement.SceneManager.LoadScene("HandGrab_RealHand");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral7FA66199F17628A60899492234E048617FDF539B, NULL);
		// break;
		return;
	}

IL_0013:
	{
		// UnityEngine.SceneManagement.SceneManager.LoadScene("HandGrab_VirtualHand");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral7B507619947011DCF870E1408A03270EEEDDC7B3, NULL);
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ModeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModeManager__ctor_m1F27AB83F5931004B4B5133993DCA2339117C1B7 (ModeManager_t2574019FAE42F8E312D76D0D5134701063F266F3* __this, const RuntimeMethod* method) 
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
// System.Void Wave.Essence.Hand.Interaction.Samples.ResetEvent::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetEvent_OnEnable_m03D3DBD4A03136FEB3A7603F6FD85ABFC62C011C (ResetEvent_tBAC28084651281717E84706A3C3CFBB7895D5EC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastEventTime = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___lastEventTime_4 = L_0;
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ResetEvent::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetEvent_OnCollisionEnter_mC04562348D5C7ECE84216B45ADB9D96590D4DE05 (ResetEvent_tBAC28084651281717E84706A3C3CFBB7895D5EC2* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// TimeSpan timeSinceLastEvent = DateTime.Now - lastEventTime;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = __this->___lastEventTime_4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		// if (timeSinceLastEvent.TotalSeconds > intervalTime)
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		int32_t L_4 = __this->___intervalTime_5;
		if ((!(((double)L_3) > ((double)((double)L_4)))))
		{
			goto IL_003e;
		}
	}
	{
		// lastEventTime = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___lastEventTime_4 = L_5;
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
		L_6 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_6;
		int32_t L_7;
		L_7 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_7, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ResetEvent::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetEvent_OnClick_mFD14424FF5F4AB36EC1E159FDBDC1169A921C1E8 (ResetEvent_tBAC28084651281717E84706A3C3CFBB7895D5EC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// TimeSpan timeSinceLastEvent = DateTime.Now - lastEventTime;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = __this->___lastEventTime_4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		// if (timeSinceLastEvent.TotalSeconds > intervalTime)
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		int32_t L_4 = __this->___intervalTime_5;
		if ((!(((double)L_3) > ((double)((double)L_4)))))
		{
			goto IL_003e;
		}
	}
	{
		// lastEventTime = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___lastEventTime_4 = L_5;
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6;
		L_6 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_1 = L_6;
		int32_t L_7;
		L_7 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_1), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_7, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Wave.Essence.Hand.Interaction.Samples.ResetEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResetEvent__ctor_m9EB64ABD8ECFD0FB13CE8E4A7755B397349121E3 (ResetEvent_tBAC28084651281717E84706A3C3CFBB7895D5EC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private DateTime lastEventTime = DateTime.MinValue;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		__this->___lastEventTime_4 = L_0;
		// private int intervalTime = 1;
		__this->___intervalTime_5 = 1;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnJointCollision_Invoke_m8F42FE5A86C039233E643BBFB51499CC817B3A93_inline (OnJointCollision_t19921E86BD243CFF3A29D3315C7DCB4D4E4A58E8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, int32_t ___1_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_collision, ___1_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_ToAngleAxis_mA2A5A81DAE94A9C1AFC34112BE8E5C5C3E9297AF_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float* ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_axis, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_axis;
		float* L_2 = ___0_angle;
		Quaternion_Internal_ToAxisAngleRad_m36090778CAC5E93CADAD17A95B7C7028E93CA1BF(L_0, L_1, L_2, NULL);
		float* L_3 = ___0_angle;
		float* L_4 = ___0_angle;
		float L_5 = *((float*)L_4);
		*((float*)L_3) = (float)((float)il2cpp_codegen_multiply(L_5, (57.2957802f)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* HandGrabInteractable_get_rigidbody_mA658BD346AA6EB77CA0A83F3D497A41D63F7FA8C_inline (HandGrabInteractable_t252A81224F751B0B6E305789A325FF19CB0C2843* __this, const RuntimeMethod* method) 
{
	{
		// public new Rigidbody rigidbody => m_Rigidbody;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___m_Rigidbody_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CollisionHandler_Invoke_mE6D8F69F267576CEA509BBAE29B26D077EA82440_inline (CollisionHandler_t78BE98E29233AACC98593A3373058988D90CD8BE* __this, int32_t ___0_collisionMode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_collisionMode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CEE758544FE55D971D9F1F74E4B1AD6E49BB6BC_gshared_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_gshared_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1AB3815922EAB4210EC4D8F2053BEE86A700CE89_gshared_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_item, const RuntimeMethod* method) 
{
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_6 = V_0;
		int32_t L_7 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_8);
		return;
	}

IL_0034:
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = ___0_item;
		((  void (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___0_item;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
