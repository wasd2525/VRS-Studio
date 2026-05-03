#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<UnityEngine.Collider,System.Int32>
struct Dictionary_2_tB76D98ADEA8D9923DF0971A3A8D6078DCDC35477;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventAxisChangedHandler>
struct EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventClickHandler>
struct EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragEndHandler>
struct EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragFixedUpdateHandler>
struct EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragStartHandler>
struct EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragUpdateHandler>
struct EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDropHandler>
struct EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverEnterHandler>
struct EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverExitHandler>
struct EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverEnterHandler>
struct EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverExitHandler>
struct EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressDownHandler>
struct EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressEnterHandler>
struct EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressExitHandler>
struct EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressUpHandler>
struct EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927;
// System.Collections.Generic.ICollection`1<UnityEngine.Collider>
struct ICollection_1_tC8BAFD51DDCC026EEDDBB59ACB4FE02431E2630C;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>
struct IEnumerator_1_tCD1905A30C9C22D75C059E095E71B0BFE251D69B;
// HTC.UnityPlugin.Utility.IIndexedSetReadOnly`1<UnityEngine.GameObject>
struct IIndexedSetReadOnly_1_tE978438600793E92FE023F4B645032DD53594F06;
// HTC.UnityPlugin.Utility.IIndexedTableReadOnly`2<UnityEngine.Collider,System.Boolean>
struct IIndexedTableReadOnly_2_t66616C815D2C4BFE4115AF3FB5906CBD6536A474;
// HTC.UnityPlugin.Utility.IIndexedTableReadOnly`2<UnityEngine.GameObject,System.Boolean>
struct IIndexedTableReadOnly_2_t3408CDCA180185373D03899DB6448EB3D84DF5F9;
// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject>
struct IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1;
// HTC.UnityPlugin.Utility.IndexedSet`1<System.Object>
struct IndexedSet_1_tDBA1C56D165975A7CCD83C96F52AB34ACCB6C1A4;
// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>
struct IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16;
// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>
struct IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2;
// HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>
struct IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>>
struct Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>>
struct Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Predicate_1_t88E10BC12D6B48D6DDCC17DEAE1BA1C41068DE44;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData
struct ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A;
// HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData
struct ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7;
// HTC.UnityPlugin.ColliderEvent.ColliderEventData
struct ColliderEventData_t79E4A6941BA2EDDE6E2A9BC5FCB736235E13C8C8;
// HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData
struct ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// HTC.UnityPlugin.ColliderEvent.IColliderEventAxisChangedHandler
struct IColliderEventAxisChangedHandler_tB126B1B5530C0782D84E0AA85BC4E9DE02A6DFE6;
// HTC.UnityPlugin.ColliderEvent.IColliderEventCaster
struct IColliderEventCaster_tB45785457004C42E09ED26E91D67585561F1B0AB;
// HTC.UnityPlugin.ColliderEvent.IColliderEventClickHandler
struct IColliderEventClickHandler_t253A63E0E545B4156D2AA3CF0D86C00E4E764463;
// HTC.UnityPlugin.ColliderEvent.IColliderEventDragEndHandler
struct IColliderEventDragEndHandler_t05EB058811C41E16E8ECBC1F9E13E0028CEDC1A5;
// HTC.UnityPlugin.ColliderEvent.IColliderEventDragFixedUpdateHandler
struct IColliderEventDragFixedUpdateHandler_t86AB4DA23F8B665B76B24EB848B308E2E285F712;
// HTC.UnityPlugin.ColliderEvent.IColliderEventDragStartHandler
struct IColliderEventDragStartHandler_t655A9A82287088F8D2ECDB7EF7CDFAD2E3B2D86D;
// HTC.UnityPlugin.ColliderEvent.IColliderEventDragUpdateHandler
struct IColliderEventDragUpdateHandler_t5E15DE661C16A021037C7FD315CC1AAD1652A91A;
// HTC.UnityPlugin.ColliderEvent.IColliderEventDropHandler
struct IColliderEventDropHandler_tF43B59D34E73EFFC6FDAADA800987C5F98715502;
// HTC.UnityPlugin.ColliderEvent.IColliderEventHoverEnterHandler
struct IColliderEventHoverEnterHandler_tDADA8415AC20CFDE6E75D905265F5096EA63873A;
// HTC.UnityPlugin.ColliderEvent.IColliderEventHoverExitHandler
struct IColliderEventHoverExitHandler_t99FF8A726A8283B818BCAD7C847E034E0B6E377B;
// HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverEnterHandler
struct IColliderEventLastHoverEnterHandler_tAD4981A44B52D943D7BE66A302D487C1E53AE23C;
// HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverExitHandler
struct IColliderEventLastHoverExitHandler_tADAB12C8452BA93D30F8737BFBF322CC0C5B4560;
// HTC.UnityPlugin.ColliderEvent.IColliderEventPressDownHandler
struct IColliderEventPressDownHandler_t3C0B84B93FC73D2F87CCD49AF575B3228343C992;
// HTC.UnityPlugin.ColliderEvent.IColliderEventPressEnterHandler
struct IColliderEventPressEnterHandler_t3227D257D1E89C9AD35D553FD3589CBE2B9382A4;
// HTC.UnityPlugin.ColliderEvent.IColliderEventPressExitHandler
struct IColliderEventPressExitHandler_t000FAA4084BCD9B5DDC0B8CAE0A4F81A2080E99A;
// HTC.UnityPlugin.ColliderEvent.IColliderEventPressUpHandler
struct IColliderEventPressUpHandler_t5172F7039707C824F29E2E12F21BD0EA46FAB4A5;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tF3707CAC8AF95EE4BF223413836EEB665CE86320;
// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/AxisHandlers
struct AxisHandlers_t2AE9C1A247538644D50F0C0973ED2F51B5C24BFF;
// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers
struct ButtonHandlers_tC882F3948ABF24F0D2C09862C697B53C7DB6F295;
// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection
struct StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764;
// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection
struct StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD;

IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tC8BAFD51DDCC026EEDDBB59ACB4FE02431E2630C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventAxisChangedHandler_tB126B1B5530C0782D84E0AA85BC4E9DE02A6DFE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventClickHandler_t253A63E0E545B4156D2AA3CF0D86C00E4E764463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventDragEndHandler_t05EB058811C41E16E8ECBC1F9E13E0028CEDC1A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventDragFixedUpdateHandler_t86AB4DA23F8B665B76B24EB848B308E2E285F712_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventDragStartHandler_t655A9A82287088F8D2ECDB7EF7CDFAD2E3B2D86D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventDragUpdateHandler_t5E15DE661C16A021037C7FD315CC1AAD1652A91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventDropHandler_tF43B59D34E73EFFC6FDAADA800987C5F98715502_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventHoverEnterHandler_tDADA8415AC20CFDE6E75D905265F5096EA63873A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventHoverExitHandler_t99FF8A726A8283B818BCAD7C847E034E0B6E377B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventLastHoverEnterHandler_tAD4981A44B52D943D7BE66A302D487C1E53AE23C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventLastHoverExitHandler_tADAB12C8452BA93D30F8737BFBF322CC0C5B4560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventPressDownHandler_t3C0B84B93FC73D2F87CCD49AF575B3228343C992_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventPressEnterHandler_t3227D257D1E89C9AD35D553FD3589CBE2B9382A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventPressExitHandler_t000FAA4084BCD9B5DDC0B8CAE0A4F81A2080E99A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IColliderEventPressUpHandler_t5172F7039707C824F29E2E12F21BD0EA46FAB4A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t738A577130D5FBE55CDA8A3FF4898A00C43996CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_m04D9DE15BDCB7E586AE1634615472A3A35A36BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_m2AA58C76800722D7EB78B610E95AD88F76FF584A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_m4127EC0150835269BE2D58BF8F189708DF17DBDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_m447BFCAF94AFD098EC67B69CABB7A7B61378794A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_m52F7D52AF10B17DFE5D3F69A5D26A4BC5E3D8599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_m5A513A141AB378CF2D65C2ED576EFCE5B9E6E301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_m5BCE9EE3D2F0CE199A3CCD4D6B57065E451AD503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_m77FCEE26B9914A0AB81F1AEEDCCAE88BC02115EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_m81E6530AEE070B4F98771B0BC80F1DC5380EA1EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_mBD0F1450C40D4B8DD3915F7F64B092D824FE1386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_mCAEEE6872A641B74D2BFAE3730C048122F65D5E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_mD226EF0ECD3EA2C6F9713EED2761F3F7A638C126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_mDFE6AACC1AC99B9A478FD45AF69BF98AEA8F3FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_mE204216344B185BA753A3CBEED81B6142EA9581C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteColliderEvents_Execute_mF1E57B1D3B36E50980934CE0C1C020DE179D9FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A_mCEFA625B5BDBD1E5FF1EB1FA5C5A3FEB9863DBF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_Remove_m94F652C43EB31CCB587C2F69D1137A7D606CA3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_get_Count_mF0725F3BA489763E59AFE8C298C2109EAA703CF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_Add_m298AD6097981D58A9C8A22CDD37D5F359085E8C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_Add_m6316926C3F46ECA4E9E8103F47EF5EE5AF2DE873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_Clear_m4DE48C97DA6AF8CBBF8319CFAA5C5DD4BADC128B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_Clear_mFE993F54FFC2FD3C69EDCA7338ABA589C2C07EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_ContainsKey_mDAC76E9CBFAD7751F252C895D1C8A30A539E5737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_GetKeyByIndex_m5A104C6C357FC63451942CEC13D6782ACABAE5F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_GetKeyByIndex_m92ECE7BEEAAB4600BFCEFAAB4B6A3D8A2ABD22BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_GetValueByIndex_m14C8FE2AA2F21E17251E091C9867BE98649834C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_GetValueByIndex_m4CDD85D2D34B7C42BF988BBE20BAF0430F96897C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_IndexOf_m25266875661129B4E8C1AF89512D9D009E4B5F6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_IndexOf_mB251A79DF05812D9B0A315DE1E4C70C3E2CDA71A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_RemoveAll_m6BC15DDCD65FBC8F01139F83E4A974ED11242D85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_RemoveAll_mF6EE8BDC30537158358BA64EF1F9701E6CCD0278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_SetValueByIndex_m63190CCFFF8B97CF97B67CB838E1BCCF6892B9F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_SetValueByIndex_mDAB64558ABF85172E3AA5BA17112287BDA662A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2__ctor_m087F8AE65DD3B2CCB360CF01DB347CEB95AE73FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2__ctor_m4BF67EFE265F5C61CBB73C4A96BD4BC09616A6C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_get_Count_mA915F28D10ADF82667A245117D1335BF8664913D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedTable_2_get_Keys_mC7ABE3AC3B60AEA7B98FAB6E88C281F6AE90E75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB54FABA8E31F7F848CE8C5A2244EA3ADAF94C18D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m92A49C2B7E0C0952208B2B053804F431DCAE866D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB06180D95504133D54F31D7E4A2C940A08B7605D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StayingCollidersCollection_IsColliderLeaved_mA2C255D0A1437F8B73EA30D4AAD4FABDE09BDD28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StayingHandlersCollection_IsUnsetAndMarkExitObj_m9E63818581935895E56F5068B4B14E81C38345A5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject>
struct IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<T,System.Int32> HTC.UnityPlugin.Utility.IndexedSet`1::m_Dictionary
	Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* ___m_Dictionary_0;
	// System.Collections.Generic.List`1<T> HTC.UnityPlugin.Utility.IndexedSet`1::m_List
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___m_List_1;
	// HTC.UnityPlugin.Utility.IIndexedSetReadOnly`1<T> HTC.UnityPlugin.Utility.IndexedSet`1::m_readOnly
	RuntimeObject* ___m_readOnly_2;
};

// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>
struct IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,System.Int32> HTC.UnityPlugin.Utility.IndexedTable`2::m_Dictionary
	Dictionary_2_tB76D98ADEA8D9923DF0971A3A8D6078DCDC35477* ___m_Dictionary_0;
	// System.Collections.Generic.List`1<TKey> HTC.UnityPlugin.Utility.IndexedTable`2::m_KeyList
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_KeyList_1;
	// System.Collections.Generic.List`1<TValue> HTC.UnityPlugin.Utility.IndexedTable`2::m_ValueList
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___m_ValueList_2;
	// HTC.UnityPlugin.Utility.IIndexedTableReadOnly`2<TKey,TValue> HTC.UnityPlugin.Utility.IndexedTable`2::m_readOnly
	RuntimeObject* ___m_readOnly_3;
};

// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>
struct IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,System.Int32> HTC.UnityPlugin.Utility.IndexedTable`2::m_Dictionary
	Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* ___m_Dictionary_0;
	// System.Collections.Generic.List`1<TKey> HTC.UnityPlugin.Utility.IndexedTable`2::m_KeyList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___m_KeyList_1;
	// System.Collections.Generic.List`1<TValue> HTC.UnityPlugin.Utility.IndexedTable`2::m_ValueList
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___m_ValueList_2;
	// HTC.UnityPlugin.Utility.IIndexedTableReadOnly`2<TKey,TValue> HTC.UnityPlugin.Utility.IndexedTable`2::m_readOnly
	RuntimeObject* ___m_readOnly_3;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// HTC.UnityPlugin.ColliderEvent.ColliderEventDataExtension
struct ColliderEventDataExtension_t078EAFB07E5C2C63AFBA7EB0624A809C7E645ED7  : public RuntimeObject
{
};

// HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents
struct ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD  : public RuntimeObject
{
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

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tF3707CAC8AF95EE4BF223413836EEB665CE86320  : public RuntimeObject
{
	// HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/<>c__DisplayClass35_0::eventData
	ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* ___eventData_0;
};

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/AxisHandlers
struct AxisHandlers_t2AE9C1A247538644D50F0C0973ED2F51B5C24BFF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/AxisHandlers::axisChangedHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___axisChangedHandlers_0;
};

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers
struct ButtonHandlers_tC882F3948ABF24F0D2C09862C697B53C7DB6F295  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::pressEnterHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___pressEnterHandlers_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::pressExitHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___pressExitHandlers_1;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::pressDownHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___pressDownHandlers_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::pressUpHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___pressUpHandlers_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::clickHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___clickHandlers_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::dragStartHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___dragStartHandlers_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::dragFixedUpdateHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___dragFixedUpdateHandlers_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::dragUpdateHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___dragUpdateHandlers_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::dragEndHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___dragEndHandlers_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::dropHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___dropHandlers_9;
};

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection
struct StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764  : public RuntimeObject
{
	// System.Int32 HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::addCount
	int32_t ___addCount_0;
	// System.Int32 HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::stayCount
	int32_t ___stayCount_1;
	// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::colliderFlags
	IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* ___colliderFlags_2;
	// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::isLeavedPredicate
	Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28* ___isLeavedPredicate_3;
};

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection
struct StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::enterHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___enterHandlers_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::exitHandlers
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___exitHandlers_1;
	// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::stayingObjs
	IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* ___stayingObjs_2;
	// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::isUnsetAndFindExitObjPredicate
	Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13* ___isUnsetAndFindExitObjPredicate_3;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>
struct KeyValuePair_2_t78C90BAC2A9C2B14F97E065C141E5D3ABC54BE39 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>
struct KeyValuePair_2_tC9A9CDB78311028F519F8D795D5C9E106F7D1720 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
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

// HTC.UnityPlugin.ColliderEvent.ColliderEventData
struct ColliderEventData_t79E4A6941BA2EDDE6E2A9BC5FCB736235E13C8C8  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// HTC.UnityPlugin.ColliderEvent.IColliderEventCaster HTC.UnityPlugin.ColliderEvent.ColliderEventData::eventCaster
	RuntimeObject* ___eventCaster_2;
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

// HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData
struct ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A  : public ColliderEventData_t79E4A6941BA2EDDE6E2A9BC5FCB736235E13C8C8
{
	// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::m_x
	float ___m_x_3;
	// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::m_y
	float ___m_y_4;
	// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::m_z
	float ___m_z_5;
	// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::m_w
	float ___m_w_6;
	// HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/InputAxis HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::<axis>k__BackingField
	int32_t ___U3CaxisU3Ek__BackingField_7;
	// HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/Dim HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::<dimention>k__BackingField
	int32_t ___U3CdimentionU3Ek__BackingField_8;
};

// HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData
struct ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7  : public ColliderEventData_t79E4A6941BA2EDDE6E2A9BC5FCB736235E13C8C8
{
	// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::pressEnteredObjects
	IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* ___pressEnteredObjects_3;
	// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::pressedRawObjects
	IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* ___pressedRawObjects_4;
	// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::lastPressedRawObjects
	IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* ___lastPressedRawObjects_5;
	// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::pressedHandlers
	IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* ___pressedHandlers_6;
	// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::lastPressedHandlers
	IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* ___lastPressedHandlers_7;
	// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::draggingHandlers
	IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* ___draggingHandlers_8;
	// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject> HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::clickingHandlers
	IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* ___clickingHandlers_9;
	// HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData/InputButton HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_10;
	// UnityEngine.Vector3 HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::<pressPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpressPositionU3Ek__BackingField_11;
	// UnityEngine.Quaternion HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::<pressRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CpressRotationU3Ek__BackingField_12;
	// System.Boolean HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::<isPressed>k__BackingField
	bool ___U3CisPressedU3Ek__BackingField_13;
};

// HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData
struct ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C  : public ColliderEventData_t79E4A6941BA2EDDE6E2A9BC5FCB736235E13C8C8
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

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventAxisChangedHandler>
struct EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventClickHandler>
struct EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragEndHandler>
struct EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragFixedUpdateHandler>
struct EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragStartHandler>
struct EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragUpdateHandler>
struct EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDropHandler>
struct EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverEnterHandler>
struct EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverExitHandler>
struct EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverEnterHandler>
struct EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverExitHandler>
struct EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressDownHandler>
struct EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressEnterHandler>
struct EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressExitHandler>
struct EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressUpHandler>
struct EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873  : public MulticastDelegate_t
{
};

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>>
struct Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28  : public MulticastDelegate_t
{
};

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>>
struct Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13  : public MulticastDelegate_t
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

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject>

// HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject>

// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>

// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>

// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>

// HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// HTC.UnityPlugin.ColliderEvent.ColliderEventDataExtension

// HTC.UnityPlugin.ColliderEvent.ColliderEventDataExtension

// HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents
struct ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields
{
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverEnterHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::HoverEnterHandler
	EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F* ___HoverEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverExitHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::HoverExitHandler
	EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7* ___HoverExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverEnterHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::LastHoverEnterHandler
	EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04* ___LastHoverEnterHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverExitHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::LastHoverExitHandler
	EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220* ___LastHoverExitHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressDownHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::PressDownHandler
	EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660* ___PressDownHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressUpHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::PressUpHandler
	EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873* ___PressUpHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressEnterHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::PressEnterHandler
	EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122* ___PressEnterHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressExitHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::PressExitHandler
	EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0* ___PressExitHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventClickHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::ClickHandler
	EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28* ___ClickHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragStartHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::DragStartHandler
	EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4* ___DragStartHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragFixedUpdateHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::DragFixedUpdateHandler
	EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56* ___DragFixedUpdateHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragUpdateHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::DragUpdateHandler
	EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7* ___DragUpdateHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragEndHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::DragEndHandler
	EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3* ___DragEndHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDropHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::DropHandler
	EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B* ___DropHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventAxisChangedHandler> HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::AxisChangedHandler
	EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1* ___AxisChangedHandler_14;
};

// HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents

// System.ValueType

// System.ValueType

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/<>c__DisplayClass35_0

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/<>c__DisplayClass35_0

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/AxisHandlers

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/AxisHandlers

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection

// HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>

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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// HTC.UnityPlugin.ColliderEvent.ColliderEventData

// HTC.UnityPlugin.ColliderEvent.ColliderEventData

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData

// HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData

// HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData

// HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData

// HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData

// HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventAxisChangedHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventAxisChangedHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventClickHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventClickHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragEndHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragEndHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragFixedUpdateHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragFixedUpdateHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragStartHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragStartHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragUpdateHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragUpdateHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDropHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDropHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverEnterHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverEnterHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverExitHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverExitHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverEnterHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverEnterHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverExitHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverExitHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressDownHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressDownHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressEnterHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressEnterHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressExitHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressExitHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressUpHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressUpHandler>

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>>

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>>

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>>

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TKey HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::GetKeyByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedTable_2_GetKeyByIndex_mED6AAC1B81E508EFDEAD6F87647F976197FC2977_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedTable_2_get_Count_m07ED0A1E7370E3839D7264DFBBE483EF1BF42286_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, const RuntimeMethod* method) ;
// System.Boolean HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedTable_2_ContainsKey_m91465F4F1010180D853E4AEE67B4FF564B2C131F_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<TKey> HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedTable_2_get_Keys_mA2A43A19ECD8500EAFBCB0DE8E26754787D346A5_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, const RuntimeMethod* method) ;
// System.Int32 HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::IndexOf(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedTable_2_IndexOf_m54ACA7D274D75C780252F6B863ECEC894228B2EA_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedTable_2_Add_m1BDDA5911A2A238475FB6FABAA2C755D4BDB3DD8_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
// TValue HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::GetValueByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedTable_2_GetValueByIndex_m83BB581650957F3DF8F1CF6E39444A403FFA5753_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::SetValueByIndex(System.Int32,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedTable_2_SetValueByIndex_m428845614E5697480516D606AD4D7FB1B806CACF_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, int32_t ___0_index, bool ___1_value, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m29CEF698A6F0F377EDD824CC3CB7642CBC03F14F_gshared (Predicate_1_t88E10BC12D6B48D6DDCC17DEAE1BA1C41068DE44* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::RemoveAll(System.Predicate`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedTable_2_RemoveAll_mBE4ACB6A416A03977183D8CC855E319F79EE65B0_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, Predicate_1_t88E10BC12D6B48D6DDCC17DEAE1BA1C41068DE44* ___0_match, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedTable_2_Clear_m92430008FCE44E139CC40BBE3F7714A549F0BE5B_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedTable_2__ctor_mC8D6084BBB76B870DD4D2EAE1983C93565AF8BC5_gshared (IndexedTable_2_t10653347F6FAEC9A20A1B32E889CC3750EDA7453* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
// System.Boolean HTC.UnityPlugin.Utility.IndexedSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m76D00428756D50793BC532244F9B4DBC00DB73E8_gshared (IndexedSet_1_tDBA1C56D165975A7CCD83C96F52AB34ACCB6C1A4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 HTC.UnityPlugin.Utility.IndexedSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_mC84B7025CEEA1595F88CC5A382A9370E60C9EA7E_gshared (IndexedSet_1_tDBA1C56D165975A7CCD83C96F52AB34ACCB6C1A4* __this, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.Utility.IndexedSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_mE8D16D09C1046A7D81C64610D76759E81F2F50F2_gshared (IndexedSet_1_tDBA1C56D165975A7CCD83C96F52AB34ACCB6C1A4* __this, const RuntimeMethod* method) ;
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExecuteEvents_ValidateEventData_TisRuntimeObject_m040536F76D700E5860C5D98D6E18BFF2C412ADCB_gshared (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared (EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TKey HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::GetKeyByIndex(System.Int32)
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* IndexedTable_2_GetKeyByIndex_m5A104C6C357FC63451942CEC13D6782ACABAE5F0 (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, int32_t, const RuntimeMethod*))IndexedTable_2_GetKeyByIndex_mED6AAC1B81E508EFDEAD6F87647F976197FC2977_gshared)(__this, ___0_index, method);
}
// System.Int32 HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::get_Count()
inline int32_t IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, const RuntimeMethod*))IndexedTable_2_get_Count_m07ED0A1E7370E3839D7264DFBBE483EF1BF42286_gshared)(__this, method);
}
// System.Boolean HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::ContainsKey(TKey)
inline bool IndexedTable_2_ContainsKey_mDAC76E9CBFAD7751F252C895D1C8A30A539E5737 (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))IndexedTable_2_ContainsKey_m91465F4F1010180D853E4AEE67B4FF564B2C131F_gshared)(__this, ___0_key, method);
}
// System.Collections.Generic.ICollection`1<TKey> HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::get_Keys()
inline RuntimeObject* IndexedTable_2_get_Keys_mC7ABE3AC3B60AEA7B98FAB6E88C281F6AE90E75E (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, const RuntimeMethod*))IndexedTable_2_get_Keys_mA2A43A19ECD8500EAFBCB0DE8E26754787D346A5_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Collider> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StayingCollidersCollection_GetEnumerator_m65C1AB55FFDDBE857CA8977DDA312EE7E9B42388 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) ;
// System.Int32 HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::IndexOf(TKey)
inline int32_t IndexedTable_2_IndexOf_mB251A79DF05812D9B0A315DE1E4C70C3E2CDA71A (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))IndexedTable_2_IndexOf_m54ACA7D274D75C780252F6B863ECEC894228B2EA_gshared)(__this, ___0_item, method);
}
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::Add(TKey,TValue)
inline void IndexedTable_2_Add_m298AD6097981D58A9C8A22CDD37D5F359085E8C6 (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, bool, const RuntimeMethod*))IndexedTable_2_Add_m1BDDA5911A2A238475FB6FABAA2C755D4BDB3DD8_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::GetValueByIndex(System.Int32)
inline bool IndexedTable_2_GetValueByIndex_m14C8FE2AA2F21E17251E091C9867BE98649834C6 (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  bool (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, int32_t, const RuntimeMethod*))IndexedTable_2_GetValueByIndex_m83BB581650957F3DF8F1CF6E39444A403FFA5753_gshared)(__this, ___0_index, method);
}
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::SetValueByIndex(System.Int32,TValue)
inline void IndexedTable_2_SetValueByIndex_m63190CCFFF8B97CF97B67CB838E1BCCF6892B9F0 (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, int32_t ___0_index, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, int32_t, bool, const RuntimeMethod*))IndexedTable_2_SetValueByIndex_m428845614E5697480516D606AD4D7FB1B806CACF_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m89E5E6D54A02E3A37458F17B1C7BFE24AC5B74BC (Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m29CEF698A6F0F377EDD824CC3CB7642CBC03F14F_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::RemoveAll(System.Predicate`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
inline int32_t IndexedTable_2_RemoveAll_m6BC15DDCD65FBC8F01139F83E4A974ED11242D85 (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28*, const RuntimeMethod*))IndexedTable_2_RemoveAll_mBE4ACB6A416A03977183D8CC855E319F79EE65B0_gshared)(__this, ___0_match, method);
}
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::Clear()
inline void IndexedTable_2_Clear_mFE993F54FFC2FD3C69EDCA7338ABA589C2C07EC8 (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, const RuntimeMethod* method)
{
	((  void (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, const RuntimeMethod*))IndexedTable_2_Clear_m92430008FCE44E139CC40BBE3F7714A549F0BE5B_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_mB06180D95504133D54F31D7E4A2C940A08B7605D_inline (KeyValuePair_2_t78C90BAC2A9C2B14F97E065C141E5D3ABC54BE39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t78C90BAC2A9C2B14F97E065C141E5D3ABC54BE39*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline)(__this, method);
}
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.Collider,System.Boolean>::.ctor()
inline void IndexedTable_2__ctor_m4BF67EFE265F5C61CBB73C4A96BD4BC09616A6C5 (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* __this, const RuntimeMethod* method)
{
	((  void (*) (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*, const RuntimeMethod*))IndexedTable_2__ctor_mC8D6084BBB76B870DD4D2EAE1983C93565AF8BC5_gshared)(__this, method);
}
// System.Int32 HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>::get_Count()
inline int32_t IndexedTable_2_get_Count_mA915F28D10ADF82667A245117D1335BF8664913D (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*, const RuntimeMethod*))IndexedTable_2_get_Count_m07ED0A1E7370E3839D7264DFBBE483EF1BF42286_gshared)(__this, method);
}
// TKey HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>::GetKeyByIndex(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* IndexedTable_2_GetKeyByIndex_m92ECE7BEEAAB4600BFCEFAAB4B6A3D8A2ABD22BE (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*, int32_t, const RuntimeMethod*))IndexedTable_2_GetKeyByIndex_mED6AAC1B81E508EFDEAD6F87647F976197FC2977_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::SetStayingObjHierarchy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingHandlersCollection_SetStayingObjHierarchy_m40C8D1F8B5BC6C5F2C1E665F2C7DC1A82DFD44BB (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>::IndexOf(TKey)
inline int32_t IndexedTable_2_IndexOf_m25266875661129B4E8C1AF89512D9D009E4B5F6D (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))IndexedTable_2_IndexOf_m54ACA7D274D75C780252F6B863ECEC894228B2EA_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>::Add(TKey,TValue)
inline void IndexedTable_2_Add_m6316926C3F46ECA4E9E8103F47EF5EE5AF2DE873 (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))IndexedTable_2_Add_m1BDDA5911A2A238475FB6FABAA2C755D4BDB3DD8_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>::GetValueByIndex(System.Int32)
inline bool IndexedTable_2_GetValueByIndex_m4CDD85D2D34B7C42BF988BBE20BAF0430F96897C (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  bool (*) (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*, int32_t, const RuntimeMethod*))IndexedTable_2_GetValueByIndex_m83BB581650957F3DF8F1CF6E39444A403FFA5753_gshared)(__this, ___0_index, method);
}
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>::SetValueByIndex(System.Int32,TValue)
inline void IndexedTable_2_SetValueByIndex_mDAB64558ABF85172E3AA5BA17112287BDA662A4E (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* __this, int32_t ___0_index, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*, int32_t, bool, const RuntimeMethod*))IndexedTable_2_SetValueByIndex_m428845614E5697480516D606AD4D7FB1B806CACF_gshared)(__this, ___0_index, ___1_value, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m88DE96830E23105CDE78BFC617D0B34DF8B28B1B (Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m29CEF698A6F0F377EDD824CC3CB7642CBC03F14F_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>::RemoveAll(System.Predicate`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>)
inline int32_t IndexedTable_2_RemoveAll_mF6EE8BDC30537158358BA64EF1F9701E6CCD0278 (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* __this, Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*, Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13*, const RuntimeMethod*))IndexedTable_2_RemoveAll_mBE4ACB6A416A03977183D8CC855E319F79EE65B0_gshared)(__this, ___0_match, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>::get_Key()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* KeyValuePair_2_get_Key_mB54FABA8E31F7F848CE8C5A2244EA3ADAF94C18D_inline (KeyValuePair_2_tC9A9CDB78311028F519F8D795D5C9E106F7D1720* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (KeyValuePair_2_tC9A9CDB78311028F519F8D795D5C9E106F7D1720*, const RuntimeMethod*))KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m92A49C2B7E0C0952208B2B053804F431DCAE866D_inline (KeyValuePair_2_tC9A9CDB78311028F519F8D795D5C9E106F7D1720* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_tC9A9CDB78311028F519F8D795D5C9E106F7D1720*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline)(__this, method);
}
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>::Clear()
inline void IndexedTable_2_Clear_m4DE48C97DA6AF8CBBF8319CFAA5C5DD4BADC128B (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* __this, const RuntimeMethod* method)
{
	((  void (*) (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*, const RuntimeMethod*))IndexedTable_2_Clear_m92430008FCE44E139CC40BBE3F7714A549F0BE5B_gshared)(__this, method);
}
// System.Void HTC.UnityPlugin.Utility.IndexedTable`2<UnityEngine.GameObject,System.Boolean>::.ctor()
inline void IndexedTable_2__ctor_m087F8AE65DD3B2CCB360CF01DB347CEB95AE73FB (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* __this, const RuntimeMethod* method)
{
	((  void (*) (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*, const RuntimeMethod*))IndexedTable_2__ctor_mC8D6084BBB76B870DD4D2EAE1983C93565AF8BC5_gshared)(__this, method);
}
// System.Boolean HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject>::Remove(T)
inline bool IndexedSet_1_Remove_m94F652C43EB31CCB587C2F69D1137A7D606CA3D0 (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))IndexedSet_1_Remove_m76D00428756D50793BC532244F9B4DBC00DB73E8_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventData__ctor_mE51C4DB618D8661AB2527EC5DE4D563D2284F558 (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventData::.ctor(HTC.UnityPlugin.ColliderEvent.IColliderEventCaster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderEventData__ctor_m6CF38FA6CB87932C7ADB3CD8146F780E98C8C7A5 (ColliderEventData_t79E4A6941BA2EDDE6E2A9BC5FCB736235E13C8C8* __this, RuntimeObject* ___0_eventCaster, const RuntimeMethod* method) ;
// System.Int32 HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject>::get_Count()
inline int32_t IndexedSet_1_get_Count_mF0725F3BA489763E59AFE8C298C2109EAA703CF5 (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*, const RuntimeMethod*))IndexedSet_1_get_Count_mC84B7025CEEA1595F88CC5A382A9370E60C9EA7E_gshared)(__this, method);
}
// System.Void HTC.UnityPlugin.Utility.IndexedSet`1<UnityEngine.GameObject>::.ctor()
inline void IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* __this, const RuntimeMethod* method)
{
	((  void (*) (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*, const RuntimeMethod*))IndexedSet_1__ctor_mE8D16D09C1046A7D81C64610D76759E81F2F50F2_gshared)(__this, method);
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::set_button(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData/InputButton)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderButtonEventData_set_button_mFA267304CE7B9BD7E8AA021590D0B3E4537A94D5_inline (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/Dim HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_dimention()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) ;
// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderAxisEventData_get_x_m9099EFBA0EC3AF8798882EA3E86464C02134F9A0 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) ;
// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderAxisEventData_get_y_m9117301B5F277B54642886DFE94301EB9B1440CD (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_x_m3319EFAB1C371AF151D6E8298C5A964691307BDF (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_y_m6499BBA68907412D53736A8F70E52FD4F581B171 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderAxisEventData_get_z_m61B14BEA97822209A4DB80F2E7B6664D3284013D (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_z_mE1593A00B7B3888ABB7C8B035B27188732A46D6B (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_w()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderAxisEventData_get_w_mB8B24023647A29F9E0F0A6A5C9C4A06645760DAF (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_w(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_w_mDAA6FB0B6E071D3402AAC7502EE9AD053779AB35 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_axis(HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/InputAxis)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_axis_m0C405D38F8A9425BCEC580FB5D433ED9862E0269_inline (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_dimention(HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/Dim)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_dimention_m0657BF83FC0514AA7C0ACE5A363F972FF525C4D5_inline (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData>(UnityEngine.EventSystems.BaseEventData)
inline ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1 (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___0_data, const RuntimeMethod* method)
{
	return ((  ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* (*) (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m040536F76D700E5860C5D98D6E18BFF2C412ADCB_gshared)(___0_data, method);
}
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData>(UnityEngine.EventSystems.BaseEventData)
inline ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5 (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___0_data, const RuntimeMethod* method)
{
	return ((  ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* (*) (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m040536F76D700E5860C5D98D6E18BFF2C412ADCB_gshared)(___0_data, method);
}
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData>(UnityEngine.EventSystems.BaseEventData)
inline ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* ExecuteEvents_ValidateEventData_TisColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A_mCEFA625B5BDBD1E5FF1EB1FA5C5A3FEB9863DBF1 (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___0_data, const RuntimeMethod* method)
{
	return ((  ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* (*) (BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m040536F76D700E5860C5D98D6E18BFF2C412ADCB_gshared)(___0_data, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverEnterHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m86CCBE836561F9A98737528DF143F772809B6581 (EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventHoverExitHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_mD71FC4505FEEBC859DA76998DBBF024F45B654EA (EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverEnterHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_mB4FAA3AE59AA904B2B8CF606D2312F79CEB14F65 (EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverExitHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_mE7A75831A35D264D1E66137E07ED42C304C2C691 (EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressDownHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m7CB8652CD858C07C4AF202C8ADF9CCB33AA82117 (EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressUpHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_mE16930C15D073317A48FF530A7576ED8F765ED75 (EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressEnterHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m788DEB468F58735A88F796A89137CDF568F35044 (EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventPressExitHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m5C3F3A25F18DC838B93C02C80B6BDD457DC02EAB (EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventClickHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_mD9F1FBAC102AE2898188FF54FD92835493372131 (EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragStartHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m86DE32D9D78FB0547AD630B16854291FF40EA638 (EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragFixedUpdateHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m6D78B1D9536E0A4DA7A3FC965B87102551C599CA (EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragUpdateHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m0EC01799BF3E6155290EB48B4FFBBA628B166BE2 (EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDragEndHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_mFA3FBAC3319EF4D0DC2B11EDF336F62CD37627BE (EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventDropHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m69F0619426F2459AE971B03544F2C40C1CB95910 (EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<HTC.UnityPlugin.ColliderEvent.IColliderEventAxisChangedHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m5DDE80D163D93C91E3FD4A124CD431ECDE134A66 (EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_m8527E59AE02A1117319F24ADABBF52E2FE8EA368_gshared)(__this, ___0_object, ___1_method, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/ButtonHandlers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandlers__ctor_m78C8AD8ADC9B327791966336A979D199BC47D6FD (ButtonHandlers_tC882F3948ABF24F0D2C09862C697B53C7DB6F295* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> pressEnterHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___pressEnterHandlers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pressEnterHandlers_0), (void*)L_0);
		// public List<GameObject> pressExitHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___pressExitHandlers_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pressExitHandlers_1), (void*)L_1);
		// public List<GameObject> pressDownHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___pressDownHandlers_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pressDownHandlers_2), (void*)L_2);
		// public List<GameObject> pressUpHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_3, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___pressUpHandlers_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pressUpHandlers_3), (void*)L_3);
		// public List<GameObject> clickHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_4, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___clickHandlers_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickHandlers_4), (void*)L_4);
		// public List<GameObject> dragStartHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_5, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___dragStartHandlers_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dragStartHandlers_5), (void*)L_5);
		// public List<GameObject> dragFixedUpdateHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_6, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___dragFixedUpdateHandlers_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dragFixedUpdateHandlers_6), (void*)L_6);
		// public List<GameObject> dragUpdateHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_7, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___dragUpdateHandlers_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dragUpdateHandlers_7), (void*)L_7);
		// public List<GameObject> dragEndHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_8, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___dragEndHandlers_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dragEndHandlers_8), (void*)L_8);
		// public List<GameObject> dropHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_9, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___dropHandlers_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropHandlers_9), (void*)L_9);
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
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/AxisHandlers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisHandlers__ctor_m8E0F19288479689B6E699B320DAAAC0B6AA1D6F8 (AxisHandlers_t2AE9C1A247538644D50F0C0973ED2F51B5C24BFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> axisChangedHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___axisChangedHandlers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisChangedHandlers_0), (void*)L_0);
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
// UnityEngine.Collider HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* StayingCollidersCollection_get_Item_m27AA6D8A8EE0231918CB496725276C401403BF43 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_GetKeyByIndex_m5A104C6C357FC63451942CEC13D6782ACABAE5F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Collider this[int index] { get { return colliderFlags.GetKeyByIndex(index); } }
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2;
		L_2 = IndexedTable_2_GetKeyByIndex_m5A104C6C357FC63451942CEC13D6782ACABAE5F0(L_0, L_1, IndexedTable_2_GetKeyByIndex_m5A104C6C357FC63451942CEC13D6782ACABAE5F0_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StayingCollidersCollection_get_Count_m4D2AC5E9B10715E4D00B7721F89E309C9071F199 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Count { get { return colliderFlags.Count; } }
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C(L_0, IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::get_EnteredCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StayingCollidersCollection_get_EnteredCount_mB1D83308A7C6EBC0110AE02074CBE2277A4EFB98 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	{
		// public int EnteredCount { get { return addCount; } }
		int32_t L_0 = __this->___addCount_0;
		return L_0;
	}
}
// System.Int32 HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::get_ExitedCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StayingCollidersCollection_get_ExitedCount_mF5F83A7176B945B32427B5B62FC9B9ED225A4B13 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ExitedCount { get { return colliderFlags.Count - stayCount; } }
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C(L_0, IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		int32_t L_2 = __this->___stayCount_1;
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}
}
// UnityEngine.Collider HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::get_LastEnteredCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* StayingCollidersCollection_get_LastEnteredCollider_mA0CE83C41F1AD9995E748B2832D45576176531F6 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_GetKeyByIndex_m5A104C6C357FC63451942CEC13D6782ACABAE5F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Collider LastEnteredCollider { get { return colliderFlags.Count > 0 ? colliderFlags.GetKeyByIndex(colliderFlags.Count - 1) : null; } }
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C(L_0, IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)NULL;
	}

IL_0010:
	{
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_2 = __this->___colliderFlags_2;
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_3 = __this->___colliderFlags_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C(L_3, IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		NullCheck(L_2);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = IndexedTable_2_GetKeyByIndex_m5A104C6C357FC63451942CEC13D6782ACABAE5F0(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), IndexedTable_2_GetKeyByIndex_m5A104C6C357FC63451942CEC13D6782ACABAE5F0_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::Contains(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StayingCollidersCollection_Contains_m43E8E99E8CF4C072ECF58D2D7EB44C2A268D5A11 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_ContainsKey_mDAC76E9CBFAD7751F252C895D1C8A30A539E5737_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Contains(Collider item) { return colliderFlags.ContainsKey(item); }
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___0_item;
		NullCheck(L_0);
		bool L_2;
		L_2 = IndexedTable_2_ContainsKey_mDAC76E9CBFAD7751F252C895D1C8A30A539E5737(L_0, L_1, IndexedTable_2_ContainsKey_mDAC76E9CBFAD7751F252C895D1C8A30A539E5737_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::CopyTo(UnityEngine.Collider[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingCollidersCollection_CopyTo_mE7FABB159C95A6A21FEA1307596CB1F05702E333 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC8BAFD51DDCC026EEDDBB59ACB4FE02431E2630C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_get_Keys_mC7ABE3AC3B60AEA7B98FAB6E88C281F6AE90E75E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void CopyTo(Collider[] array, int arrayIndex) { colliderFlags.Keys.CopyTo(array, arrayIndex); }
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = IndexedTable_2_get_Keys_mC7ABE3AC3B60AEA7B98FAB6E88C281F6AE90E75E(L_0, IndexedTable_2_get_Keys_mC7ABE3AC3B60AEA7B98FAB6E88C281F6AE90E75E_RuntimeMethod_var);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = ___0_array;
		int32_t L_3 = ___1_arrayIndex;
		NullCheck(L_1);
		InterfaceActionInvoker2< ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::CopyTo(T[],System.Int32) */, ICollection_1_tC8BAFD51DDCC026EEDDBB59ACB4FE02431E2630C_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// public void CopyTo(Collider[] array, int arrayIndex) { colliderFlags.Keys.CopyTo(array, arrayIndex); }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Collider> HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StayingCollidersCollection_GetEnumerator_m65C1AB55FFDDBE857CA8977DDA312EE7E9B42388 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t738A577130D5FBE55CDA8A3FF4898A00C43996CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_get_Keys_mC7ABE3AC3B60AEA7B98FAB6E88C281F6AE90E75E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerator<Collider> GetEnumerator() { return colliderFlags.Keys.GetEnumerator(); }
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = IndexedTable_2_get_Keys_mC7ABE3AC3B60AEA7B98FAB6E88C281F6AE90E75E(L_0, IndexedTable_2_get_Keys_mC7ABE3AC3B60AEA7B98FAB6E88C281F6AE90E75E_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>::GetEnumerator() */, IEnumerable_1_t738A577130D5FBE55CDA8A3FF4898A00C43996CA_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Collections.IEnumerator HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StayingCollidersCollection_System_Collections_IEnumerable_GetEnumerator_mD1909F03BD36097DB6AE6DC6B5217EA3E69D52DF (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerator IEnumerable.GetEnumerator() { return GetEnumerator(); }
		RuntimeObject* L_0;
		L_0 = StayingCollidersCollection_GetEnumerator_m65C1AB55FFDDBE857CA8977DDA312EE7E9B42388(__this, NULL);
		return L_0;
	}
}
// System.Int32 HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::IndexOf(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StayingCollidersCollection_IndexOf_m8308D6C4A29FF0AD2F4D0A1C2CF14D5653D73E4D (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_IndexOf_mB251A79DF05812D9B0A315DE1E4C70C3E2CDA71A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int IndexOf(Collider item) { return colliderFlags.IndexOf(item); }
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___0_item;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = IndexedTable_2_IndexOf_mB251A79DF05812D9B0A315DE1E4C70C3E2CDA71A(L_0, L_1, IndexedTable_2_IndexOf_mB251A79DF05812D9B0A315DE1E4C70C3E2CDA71A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::SetColliderStaying(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingCollidersCollection_SetColliderStaying_mBD837B618E424340E343B62CBE1819A7415CBB8C (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_Add_m298AD6097981D58A9C8A22CDD37D5F359085E8C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_GetValueByIndex_m14C8FE2AA2F21E17251E091C9867BE98649834C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_IndexOf_mB251A79DF05812D9B0A315DE1E4C70C3E2CDA71A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_SetValueByIndex_m63190CCFFF8B97CF97B67CB838E1BCCF6892B9F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var index = colliderFlags.IndexOf(collider);
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___0_collider;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = IndexedTable_2_IndexOf_mB251A79DF05812D9B0A315DE1E4C70C3E2CDA71A(L_0, L_1, IndexedTable_2_IndexOf_mB251A79DF05812D9B0A315DE1E4C70C3E2CDA71A_RuntimeMethod_var);
		V_0 = L_2;
		// if (index < 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// ++addCount;
		int32_t L_4 = __this->___addCount_0;
		__this->___addCount_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// ++stayCount;
		int32_t L_5 = __this->___stayCount_1;
		__this->___stayCount_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// colliderFlags.Add(collider, true);
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_6 = __this->___colliderFlags_2;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___0_collider;
		NullCheck(L_6);
		IndexedTable_2_Add_m298AD6097981D58A9C8A22CDD37D5F359085E8C6(L_6, L_7, (bool)1, IndexedTable_2_Add_m298AD6097981D58A9C8A22CDD37D5F359085E8C6_RuntimeMethod_var);
		return;
	}

IL_003b:
	{
		// else if (!colliderFlags.GetValueByIndex(index))
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_8 = __this->___colliderFlags_2;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = IndexedTable_2_GetValueByIndex_m14C8FE2AA2F21E17251E091C9867BE98649834C6(L_8, L_9, IndexedTable_2_GetValueByIndex_m14C8FE2AA2F21E17251E091C9867BE98649834C6_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		// ++stayCount;
		int32_t L_11 = __this->___stayCount_1;
		__this->___stayCount_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// colliderFlags.SetValueByIndex(index, true);
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_12 = __this->___colliderFlags_2;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IndexedTable_2_SetValueByIndex_m63190CCFFF8B97CF97B67CB838E1BCCF6892B9F0(L_12, L_13, (bool)1, IndexedTable_2_SetValueByIndex_m63190CCFFF8B97CF97B67CB838E1BCCF6892B9F0_RuntimeMethod_var);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Int32 HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::ExtractLeavedColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StayingCollidersCollection_ExtractLeavedColliders_m324EEEC7C15C0788A337FB963309564DDA238108 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_RemoveAll_m6BC15DDCD65FBC8F01139F83E4A974ED11242D85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StayingCollidersCollection_IsColliderLeaved_mA2C255D0A1437F8B73EA30D4AAD4FABDE09BDD28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (stayCount < colliderFlags.Count)
		int32_t L_0 = __this->___stayCount_1;
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_1 = __this->___colliderFlags_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C(L_1, IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0057;
		}
	}
	{
		// if (isLeavedPredicate == null) { isLeavedPredicate = IsColliderLeaved; }
		Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28* L_3 = __this->___isLeavedPredicate_3;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (isLeavedPredicate == null) { isLeavedPredicate = IsColliderLeaved; }
		Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28* L_4 = (Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28*)il2cpp_codegen_object_new(Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Predicate_1__ctor_m89E5E6D54A02E3A37458F17B1C7BFE24AC5B74BC(L_4, __this, (intptr_t)((void*)StayingCollidersCollection_IsColliderLeaved_mA2C255D0A1437F8B73EA30D4AAD4FABDE09BDD28_RuntimeMethod_var), NULL);
		__this->___isLeavedPredicate_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isLeavedPredicate_3), (void*)L_4);
	}

IL_002d:
	{
		// var removedCount = colliderFlags.RemoveAll(isLeavedPredicate);
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_5 = __this->___colliderFlags_2;
		Predicate_1_t8959F92882BC3803CDF7DF53B13F8AED3A3C7C28* L_6 = __this->___isLeavedPredicate_3;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = IndexedTable_2_RemoveAll_m6BC15DDCD65FBC8F01139F83E4A974ED11242D85(L_5, L_6, IndexedTable_2_RemoveAll_m6BC15DDCD65FBC8F01139F83E4A974ED11242D85_RuntimeMethod_var);
		// stayCount = colliderFlags.Count;
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_8 = __this->___colliderFlags_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C(L_8, IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		__this->___stayCount_1 = L_9;
		// addCount = 0;
		__this->___addCount_0 = 0;
		// return removedCount;
		return L_7;
	}

IL_0057:
	{
		// return 0;
		return 0;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::ResetStayingFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingCollidersCollection_ResetStayingFlags_m6F2D7A243CED9D86C35650768E0E7272F1558AD5 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_SetValueByIndex_m63190CCFFF8B97CF97B67CB838E1BCCF6892B9F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = colliderFlags.Count - 1; i >= 0; --i)
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C(L_0, IndexedTable_2_get_Count_mDAE9CD96A92F85693E3FF30C672CDF7B6534A01C_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0021;
	}

IL_0010:
	{
		// colliderFlags.SetValueByIndex(i, false);
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_2 = __this->___colliderFlags_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IndexedTable_2_SetValueByIndex_m63190CCFFF8B97CF97B67CB838E1BCCF6892B9F0(L_2, L_3, (bool)0, IndexedTable_2_SetValueByIndex_m63190CCFFF8B97CF97B67CB838E1BCCF6892B9F0_RuntimeMethod_var);
		// for (int i = colliderFlags.Count - 1; i >= 0; --i)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}

IL_0021:
	{
		// for (int i = colliderFlags.Count - 1; i >= 0; --i)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// stayCount = 0;
		__this->___stayCount_1 = 0;
		// addCount = 0;
		__this->___addCount_0 = 0;
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingCollidersCollection_Clear_m394EBC9D5A6BDF4A49197C6EEFD412092B46897F (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_Clear_mFE993F54FFC2FD3C69EDCA7338ABA589C2C07EC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// colliderFlags.Clear();
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = __this->___colliderFlags_2;
		NullCheck(L_0);
		IndexedTable_2_Clear_mFE993F54FFC2FD3C69EDCA7338ABA589C2C07EC8(L_0, IndexedTable_2_Clear_mFE993F54FFC2FD3C69EDCA7338ABA589C2C07EC8_RuntimeMethod_var);
		// stayCount = 0;
		__this->___stayCount_1 = 0;
		// addCount = 0;
		__this->___addCount_0 = 0;
		// }
		return;
	}
}
// System.Boolean HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::IsColliderLeaved(System.Collections.Generic.KeyValuePair`2<UnityEngine.Collider,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StayingCollidersCollection_IsColliderLeaved_mA2C255D0A1437F8B73EA30D4AAD4FABDE09BDD28 (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, KeyValuePair_2_t78C90BAC2A9C2B14F97E065C141E5D3ABC54BE39 ___0_pair, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB06180D95504133D54F31D7E4A2C940A08B7605D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool IsColliderLeaved(KeyValuePair<Collider, bool> pair) { return !pair.Value; }
		bool L_0;
		L_0 = KeyValuePair_2_get_Value_mB06180D95504133D54F31D7E4A2C940A08B7605D_inline((&___0_pair), KeyValuePair_2_get_Value_mB06180D95504133D54F31D7E4A2C940A08B7605D_RuntimeMethod_var);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingCollidersCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingCollidersCollection__ctor_m6E2009D2DC6B146DE42CB98F8AEBB1615FF6BF9A (StayingCollidersCollection_t2F98FB539D9D8C540100D08C3BC8E81454B85764* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2__ctor_m4BF67EFE265F5C61CBB73C4A96BD4BC09616A6C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IndexedTable<Collider, bool> colliderFlags = new IndexedTable<Collider, bool>();
		IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16* L_0 = (IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16*)il2cpp_codegen_object_new(IndexedTable_2_t1437C569335253301B828B22123CE45A079A9B16_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IndexedTable_2__ctor_m4BF67EFE265F5C61CBB73C4A96BD4BC09616A6C5(L_0, IndexedTable_2__ctor_m4BF67EFE265F5C61CBB73C4A96BD4BC09616A6C5_RuntimeMethod_var);
		__this->___colliderFlags_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colliderFlags_2), (void*)L_0);
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
// System.Int32 HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StayingHandlersCollection_get_Count_mE1625AD714726CBA3C04946940AEEE177ADFB1C2 (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_get_Count_mA915F28D10ADF82667A245117D1335BF8664913D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Count { get { return stayingObjs.Count; } }
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_0 = __this->___stayingObjs_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IndexedTable_2_get_Count_mA915F28D10ADF82667A245117D1335BF8664913D(L_0, IndexedTable_2_get_Count_mA915F28D10ADF82667A245117D1335BF8664913D_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.GameObject HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* StayingHandlersCollection_get_Item_m9AB748B5D50B6D33C7C986DFC82F132CD05B25BF (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_GetKeyByIndex_m92ECE7BEEAAB4600BFCEFAAB4B6A3D8A2ABD22BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObject this[int i] { get { return stayingObjs.GetKeyByIndex(i); } }
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_0 = __this->___stayingObjs_2;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = IndexedTable_2_GetKeyByIndex_m92ECE7BEEAAB4600BFCEFAAB4B6A3D8A2ABD22BE(L_0, L_1, IndexedTable_2_GetKeyByIndex_m92ECE7BEEAAB4600BFCEFAAB4B6A3D8A2ABD22BE_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::SetStayingObjHierarchy(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingHandlersCollection_SetStayingObjHierarchy_mEB26B47A02D4774E233E24034427868935202A61 (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetStayingObjHierarchy(Collider collider) { if (collider != null) { SetStayingObjHierarchy(collider.gameObject); } }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_collider;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// public void SetStayingObjHierarchy(Collider collider) { if (collider != null) { SetStayingObjHierarchy(collider.gameObject); } }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_collider;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		StayingHandlersCollection_SetStayingObjHierarchy_m40C8D1F8B5BC6C5F2C1E665F2C7DC1A82DFD44BB(__this, L_3, NULL);
	}

IL_0015:
	{
		// public void SetStayingObjHierarchy(Collider collider) { if (collider != null) { SetStayingObjHierarchy(collider.gameObject); } }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::SetStayingObjHierarchy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingHandlersCollection_SetStayingObjHierarchy_m40C8D1F8B5BC6C5F2C1E665F2C7DC1A82DFD44BB (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_Add_m6316926C3F46ECA4E9E8103F47EF5EE5AF2DE873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_GetValueByIndex_m4CDD85D2D34B7C42BF988BBE20BAF0430F96897C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_IndexOf_m25266875661129B4E8C1AF89512D9D009E4B5F6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_SetValueByIndex_mDAB64558ABF85172E3AA5BA17112287BDA662A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (obj == null) { return; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (obj == null) { return; }
		return;
	}

IL_000a:
	{
		// for (var tr = obj.transform; tr != null; tr = tr.parent)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_obj;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		V_0 = L_3;
		goto IL_006b;
	}

IL_0013:
	{
		// var trObj = tr.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		V_1 = L_5;
		// var trObjIndex = stayingObjs.IndexOf(trObj);
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_6 = __this->___stayingObjs_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = IndexedTable_2_IndexOf_m25266875661129B4E8C1AF89512D9D009E4B5F6D(L_6, L_7, IndexedTable_2_IndexOf_m25266875661129B4E8C1AF89512D9D009E4B5F6D_RuntimeMethod_var);
		V_2 = L_8;
		// if (trObjIndex < 0)
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// enterHandlers.Add(trObj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___enterHandlers_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_10);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_10, L_11, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// stayingObjs.Add(trObj, true);
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_12 = __this->___stayingObjs_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		NullCheck(L_12);
		IndexedTable_2_Add_m6316926C3F46ECA4E9E8103F47EF5EE5AF2DE873(L_12, L_13, (bool)1, IndexedTable_2_Add_m6316926C3F46ECA4E9E8103F47EF5EE5AF2DE873_RuntimeMethod_var);
		goto IL_0064;
	}

IL_0046:
	{
		// else if (!stayingObjs.GetValueByIndex(trObjIndex))
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_14 = __this->___stayingObjs_2;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		bool L_16;
		L_16 = IndexedTable_2_GetValueByIndex_m4CDD85D2D34B7C42BF988BBE20BAF0430F96897C(L_14, L_15, IndexedTable_2_GetValueByIndex_m4CDD85D2D34B7C42BF988BBE20BAF0430F96897C_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0063;
		}
	}
	{
		// stayingObjs.SetValueByIndex(trObjIndex, true);
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_17 = __this->___stayingObjs_2;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IndexedTable_2_SetValueByIndex_mDAB64558ABF85172E3AA5BA17112287BDA662A4E(L_17, L_18, (bool)1, IndexedTable_2_SetValueByIndex_mDAB64558ABF85172E3AA5BA17112287BDA662A4E_RuntimeMethod_var);
		goto IL_0064;
	}

IL_0063:
	{
		// return;
		return;
	}

IL_0064:
	{
		// for (var tr = obj.transform; tr != null; tr = tr.parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_19, NULL);
		V_0 = L_20;
	}

IL_006b:
	{
		// for (var tr = obj.transform; tr != null; tr = tr.parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_22)
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::ExtractExitHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingHandlersCollection_ExtractExitHandlers_m9E4E2E724B5C0E529087A5ED12D5E9BB58F85072 (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_RemoveAll_mF6EE8BDC30537158358BA64EF1F9701E6CCD0278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StayingHandlersCollection_IsUnsetAndMarkExitObj_m9E63818581935895E56F5068B4B14E81C38345A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isUnsetAndFindExitObjPredicate == null) { isUnsetAndFindExitObjPredicate = IsUnsetAndMarkExitObj; }
		Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13* L_0 = __this->___isUnsetAndFindExitObjPredicate_3;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// if (isUnsetAndFindExitObjPredicate == null) { isUnsetAndFindExitObjPredicate = IsUnsetAndMarkExitObj; }
		Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13* L_1 = (Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13*)il2cpp_codegen_object_new(Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Predicate_1__ctor_m88DE96830E23105CDE78BFC617D0B34DF8B28B1B(L_1, __this, (intptr_t)((void*)StayingHandlersCollection_IsUnsetAndMarkExitObj_m9E63818581935895E56F5068B4B14E81C38345A5_RuntimeMethod_var), NULL);
		__this->___isUnsetAndFindExitObjPredicate_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isUnsetAndFindExitObjPredicate_3), (void*)L_1);
	}

IL_001a:
	{
		// stayingObjs.RemoveAll(isUnsetAndFindExitObjPredicate);
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_2 = __this->___stayingObjs_2;
		Predicate_1_t79A084F3B4A4E8E687A7F1605CEE6C470A5ACE13* L_3 = __this->___isUnsetAndFindExitObjPredicate_3;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = IndexedTable_2_RemoveAll_mF6EE8BDC30537158358BA64EF1F9701E6CCD0278(L_2, L_3, IndexedTable_2_RemoveAll_mF6EE8BDC30537158358BA64EF1F9701E6CCD0278_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::ResetStayingFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingHandlersCollection_ResetStayingFlag_mD88519F3FD81FC2A29364FB02C0C4FE52076505D (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_SetValueByIndex_mDAB64558ABF85172E3AA5BA17112287BDA662A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_get_Count_mA915F28D10ADF82667A245117D1335BF8664913D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = stayingObjs.Count - 1; i >= 0; --i) { stayingObjs.SetValueByIndex(i, false); }
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_0 = __this->___stayingObjs_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IndexedTable_2_get_Count_mA915F28D10ADF82667A245117D1335BF8664913D(L_0, IndexedTable_2_get_Count_mA915F28D10ADF82667A245117D1335BF8664913D_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0021;
	}

IL_0010:
	{
		// for (int i = stayingObjs.Count - 1; i >= 0; --i) { stayingObjs.SetValueByIndex(i, false); }
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_2 = __this->___stayingObjs_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IndexedTable_2_SetValueByIndex_mDAB64558ABF85172E3AA5BA17112287BDA662A4E(L_2, L_3, (bool)0, IndexedTable_2_SetValueByIndex_mDAB64558ABF85172E3AA5BA17112287BDA662A4E_RuntimeMethod_var);
		// for (int i = stayingObjs.Count - 1; i >= 0; --i) { stayingObjs.SetValueByIndex(i, false); }
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}

IL_0021:
	{
		// for (int i = stayingObjs.Count - 1; i >= 0; --i) { stayingObjs.SetValueByIndex(i, false); }
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::IsUnsetAndMarkExitObj(System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StayingHandlersCollection_IsUnsetAndMarkExitObj_m9E63818581935895E56F5068B4B14E81C38345A5 (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, KeyValuePair_2_tC9A9CDB78311028F519F8D795D5C9E106F7D1720 ___0_pair, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB54FABA8E31F7F848CE8C5A2244EA3ADAF94C18D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m92A49C2B7E0C0952208B2B053804F431DCAE866D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pair.Key == null) { return true; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = KeyValuePair_2_get_Key_mB54FABA8E31F7F848CE8C5A2244EA3ADAF94C18D_inline((&___0_pair), KeyValuePair_2_get_Key_mB54FABA8E31F7F848CE8C5A2244EA3ADAF94C18D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (pair.Key == null) { return true; }
		return (bool)1;
	}

IL_0011:
	{
		// if (pair.Value) { return false; }
		bool L_2;
		L_2 = KeyValuePair_2_get_Value_m92A49C2B7E0C0952208B2B053804F431DCAE866D_inline((&___0_pair), KeyValuePair_2_get_Value_m92A49C2B7E0C0952208B2B053804F431DCAE866D_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (pair.Value) { return false; }
		return (bool)0;
	}

IL_001c:
	{
		// exitHandlers.Add(pair.Key);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___exitHandlers_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = KeyValuePair_2_get_Key_mB54FABA8E31F7F848CE8C5A2244EA3ADAF94C18D_inline((&___0_pair), KeyValuePair_2_get_Key_mB54FABA8E31F7F848CE8C5A2244EA3ADAF94C18D_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_3, L_4, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::ClearStayingObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingHandlersCollection_ClearStayingObj_m51C8C413C0B07D8DA4B4A1453717FED89A533ED0 (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_Clear_m4DE48C97DA6AF8CBBF8319CFAA5C5DD4BADC128B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stayingObjs.Clear();
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_0 = __this->___stayingObjs_2;
		NullCheck(L_0);
		IndexedTable_2_Clear_m4DE48C97DA6AF8CBBF8319CFAA5C5DD4BADC128B(L_0, IndexedTable_2_Clear_m4DE48C97DA6AF8CBBF8319CFAA5C5DD4BADC128B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/StayingHandlersCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StayingHandlersCollection__ctor_mFD610BDFE8AD7C0A0C143BBF1FE676094444D7F9 (StayingHandlersCollection_tE4E14477F512D75588288A46250BC3E6E224CCCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2__ctor_m087F8AE65DD3B2CCB360CF01DB347CEB95AE73FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> enterHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___enterHandlers_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enterHandlers_0), (void*)L_0);
		// public List<GameObject> exitHandlers = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___exitHandlers_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exitHandlers_1), (void*)L_1);
		// private IndexedTable<GameObject, bool> stayingObjs = new IndexedTable<GameObject, bool>();
		IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2* L_2 = (IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2*)il2cpp_codegen_object_new(IndexedTable_2_t1330E7C2A634F32CB52CC51E7F3E9B3185BBA9A2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexedTable_2__ctor_m087F8AE65DD3B2CCB360CF01DB347CEB95AE73FB(L_2, IndexedTable_2__ctor_m087F8AE65DD3B2CCB360CF01DB347CEB95AE73FB_RuntimeMethod_var);
		__this->___stayingObjs_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stayingObjs_2), (void*)L_2);
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
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_m698531A91A3C9EB9712AD85820CCC1B701055A12 (U3CU3Ec__DisplayClass35_0_tF3707CAC8AF95EE4BF223413836EEB665CE86320* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean HTC.UnityPlugin.ColliderEvent.ColliderEventCaster/<>c__DisplayClass35_0::<ProcessPressUp>b__0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass35_0_U3CProcessPressUpU3Eb__0_mD7DA060D31C24740A3B2F4CE7F9F648F02781266 (U3CU3Ec__DisplayClass35_0_tF3707CAC8AF95EE4BF223413836EEB665CE86320* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedSet_1_Remove_m94F652C43EB31CCB587C2F69D1137A7D606CA3D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetMatchedEventHandlersFromHoveredColliders<IColliderEventClickHandler>(h => eventData.clickingHandlers.Remove(h), handlers.clickHandlers);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_0 = __this->___eventData_0;
		NullCheck(L_0);
		IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* L_1 = L_0->___clickingHandlers_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_h;
		NullCheck(L_1);
		bool L_3;
		L_3 = IndexedSet_1_Remove_m94F652C43EB31CCB587C2F69D1137A7D606CA3D0(L_1, L_2, IndexedSet_1_Remove_m94F652C43EB31CCB587C2F69D1137A7D606CA3D0_RuntimeMethod_var);
		return L_3;
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
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderEventData::.ctor(HTC.UnityPlugin.ColliderEvent.IColliderEventCaster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderEventData__ctor_m6CF38FA6CB87932C7ADB3CD8146F780E98C8C7A5 (ColliderEventData_t79E4A6941BA2EDDE6E2A9BC5FCB736235E13C8C8* __this, RuntimeObject* ___0_eventCaster, const RuntimeMethod* method) 
{
	{
		// public ColliderEventData(IColliderEventCaster eventCaster) : base(null)
		BaseEventData__ctor_mE51C4DB618D8661AB2527EC5DE4D563D2284F558(__this, (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707*)NULL, NULL);
		// this.eventCaster = eventCaster;
		RuntimeObject* L_0 = ___0_eventCaster;
		__this->___eventCaster_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventCaster_2), (void*)L_0);
		// }
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
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData::.ctor(HTC.UnityPlugin.ColliderEvent.IColliderEventCaster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderHoverEventData__ctor_m6ED089232600BCA900C7EBC946CD109C4843DD36 (ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* __this, RuntimeObject* ___0_eventCaster, const RuntimeMethod* method) 
{
	{
		// public ColliderHoverEventData(IColliderEventCaster eventCaster) : base(eventCaster) { }
		RuntimeObject* L_0 = ___0_eventCaster;
		ColliderEventData__ctor_m6CF38FA6CB87932C7ADB3CD8146F780E98C8C7A5(__this, L_0, NULL);
		// public ColliderHoverEventData(IColliderEventCaster eventCaster) : base(eventCaster) { }
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
// HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData/InputButton HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColliderButtonEventData_get_button_m55E94754A92FE67066D40953C280C818AF2928E3 (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, const RuntimeMethod* method) 
{
	{
		// public InputButton button { get; private set; }
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::set_button(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderButtonEventData_set_button_mFA267304CE7B9BD7E8AA021590D0B3E4537A94D5 (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public InputButton button { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField_10 = L_0;
		return;
	}
}
// UnityEngine.Vector3 HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::get_pressPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ColliderButtonEventData_get_pressPosition_m6FB47D8A2E0588E9CD027A672AF136E00F739253 (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 pressPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CpressPositionU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::set_pressPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderButtonEventData_set_pressPosition_mD786E61B8A593CDD19C687606B45B5E224EB9DC5 (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 pressPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CpressPositionU3Ek__BackingField_11 = L_0;
		return;
	}
}
// UnityEngine.Quaternion HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::get_pressRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ColliderButtonEventData_get_pressRotation_m1E2F70128C7B48A1338AA130EDCC2C0BB64D9526 (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion pressRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CpressRotationU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::set_pressRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderButtonEventData_set_pressRotation_m2BFFBD90B22FD674DAC832622131D93EDB0354F0 (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Quaternion pressRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CpressRotationU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Boolean HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::get_isDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderButtonEventData_get_isDragging_mAA0F839CA3E9C9DBF295579B09388B44C24259E5 (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedSet_1_get_Count_mF0725F3BA489763E59AFE8C298C2109EAA703CF5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool isDragging { get { return draggingHandlers.Count > 0; } }
		IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* L_0 = __this->___draggingHandlers_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IndexedSet_1_get_Count_mF0725F3BA489763E59AFE8C298C2109EAA703CF5(L_0, IndexedSet_1_get_Count_mF0725F3BA489763E59AFE8C298C2109EAA703CF5_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColliderButtonEventData_get_isPressed_m96ACDEE77A93354F428B9B58AC741161834F7F5D (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, const RuntimeMethod* method) 
{
	{
		// public bool isPressed { get; set; }
		bool L_0 = __this->___U3CisPressedU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::set_isPressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderButtonEventData_set_isPressed_mBA330A71FFC6098A98124C876966F88534FF1106 (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool isPressed { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CisPressedU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData::.ctor(HTC.UnityPlugin.ColliderEvent.IColliderEventCaster,HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderButtonEventData__ctor_mD094F6AB7A365374F62370A0A236FAF7A3DCAD8D (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, RuntimeObject* ___0_eventCaster, int32_t ___1_button, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IndexedSet<GameObject> pressEnteredObjects = new IndexedSet<GameObject>(); // Includes full entered objects hierorchy
		IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* L_0 = (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*)il2cpp_codegen_object_new(IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B(L_0, IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B_RuntimeMethod_var);
		__this->___pressEnteredObjects_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pressEnteredObjects_3), (void*)L_0);
		// public IndexedSet<GameObject> pressedRawObjects = new IndexedSet<GameObject>();
		IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* L_1 = (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*)il2cpp_codegen_object_new(IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B(L_1, IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B_RuntimeMethod_var);
		__this->___pressedRawObjects_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pressedRawObjects_4), (void*)L_1);
		// public IndexedSet<GameObject> lastPressedRawObjects = new IndexedSet<GameObject>();
		IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* L_2 = (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*)il2cpp_codegen_object_new(IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B(L_2, IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B_RuntimeMethod_var);
		__this->___lastPressedRawObjects_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastPressedRawObjects_5), (void*)L_2);
		// public IndexedSet<GameObject> pressedHandlers = new IndexedSet<GameObject>();
		IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* L_3 = (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*)il2cpp_codegen_object_new(IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B(L_3, IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B_RuntimeMethod_var);
		__this->___pressedHandlers_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pressedHandlers_6), (void*)L_3);
		// public IndexedSet<GameObject> lastPressedHandlers = new IndexedSet<GameObject>();
		IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* L_4 = (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*)il2cpp_codegen_object_new(IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B(L_4, IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B_RuntimeMethod_var);
		__this->___lastPressedHandlers_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastPressedHandlers_7), (void*)L_4);
		// public IndexedSet<GameObject> draggingHandlers = new IndexedSet<GameObject>();
		IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* L_5 = (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*)il2cpp_codegen_object_new(IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B(L_5, IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B_RuntimeMethod_var);
		__this->___draggingHandlers_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___draggingHandlers_8), (void*)L_5);
		// public IndexedSet<GameObject> clickingHandlers = new IndexedSet<GameObject>();
		IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1* L_6 = (IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1*)il2cpp_codegen_object_new(IndexedSet_1_t14DFC825BA90B67C6EE2B4A362C48DC6579157A1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B(L_6, IndexedSet_1__ctor_mD8C2F26C05DC264F7BD0079C63E3CBD2A9A8EA3B_RuntimeMethod_var);
		__this->___clickingHandlers_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickingHandlers_9), (void*)L_6);
		// public ColliderButtonEventData(IColliderEventCaster eventCaster, InputButton button = 0) : base(eventCaster)
		RuntimeObject* L_7 = ___0_eventCaster;
		ColliderEventData__ctor_m6CF38FA6CB87932C7ADB3CD8146F780E98C8C7A5(__this, L_7, NULL);
		// this.button = button;
		int32_t L_8 = ___1_button;
		ColliderButtonEventData_set_button_mFA267304CE7B9BD7E8AA021590D0B3E4537A94D5_inline(__this, L_8, NULL);
		// }
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
// HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/InputAxis HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_axis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColliderAxisEventData_get_axis_mED2CA9B2BBFC0E6DDF0616C8359F8EDDCBEB338B (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public InputAxis axis { get; private set; }
		int32_t L_0 = __this->___U3CaxisU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_axis(HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/InputAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_axis_m0C405D38F8A9425BCEC580FB5D433ED9862E0269 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public InputAxis axis { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CaxisU3Ek__BackingField_7 = L_0;
		return;
	}
}
// HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/Dim HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_dimention()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public Dim dimention { get; private set; }
		int32_t L_0 = __this->___U3CdimentionU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_dimention(HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/Dim)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_dimention_m0657BF83FC0514AA7C0ACE5A363F972FF525C4D5 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dim dimention { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CdimentionU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderAxisEventData_get_x_m9099EFBA0EC3AF8798882EA3E86464C02134F9A0 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public float x { get { return dimention >= Dim.D1 ? m_x : 0f; } set { if (dimention >= Dim.D1) m_x = value; } }
		int32_t L_0;
		L_0 = ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		float L_1 = __this->___m_x_3;
		return L_1;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_x_m3319EFAB1C371AF151D6E8298C5A964691307BDF (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float x { get { return dimention >= Dim.D1 ? m_x : 0f; } set { if (dimention >= Dim.D1) m_x = value; } }
		int32_t L_0;
		L_0 = ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// public float x { get { return dimention >= Dim.D1 ? m_x : 0f; } set { if (dimention >= Dim.D1) m_x = value; } }
		float L_1 = ___0_value;
		__this->___m_x_3 = L_1;
	}

IL_0010:
	{
		// public float x { get { return dimention >= Dim.D1 ? m_x : 0f; } set { if (dimention >= Dim.D1) m_x = value; } }
		return;
	}
}
// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderAxisEventData_get_y_m9117301B5F277B54642886DFE94301EB9B1440CD (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public float y { get { return dimention >= Dim.D2 ? m_y : 0f; } set { if (dimention >= Dim.D2) m_y = value; } }
		int32_t L_0;
		L_0 = ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		float L_1 = __this->___m_y_4;
		return L_1;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_y_m6499BBA68907412D53736A8F70E52FD4F581B171 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float y { get { return dimention >= Dim.D2 ? m_y : 0f; } set { if (dimention >= Dim.D2) m_y = value; } }
		int32_t L_0;
		L_0 = ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		// public float y { get { return dimention >= Dim.D2 ? m_y : 0f; } set { if (dimention >= Dim.D2) m_y = value; } }
		float L_1 = ___0_value;
		__this->___m_y_4 = L_1;
	}

IL_0010:
	{
		// public float y { get { return dimention >= Dim.D2 ? m_y : 0f; } set { if (dimention >= Dim.D2) m_y = value; } }
		return;
	}
}
// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderAxisEventData_get_z_m61B14BEA97822209A4DB80F2E7B6664D3284013D (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public float z { get { return dimention >= Dim.D3 ? m_z : 0f; } set { if (dimention >= Dim.D3) m_z = value; } }
		int32_t L_0;
		L_0 = ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		float L_1 = __this->___m_z_5;
		return L_1;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_z_mE1593A00B7B3888ABB7C8B035B27188732A46D6B (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float z { get { return dimention >= Dim.D3 ? m_z : 0f; } set { if (dimention >= Dim.D3) m_z = value; } }
		int32_t L_0;
		L_0 = ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		// public float z { get { return dimention >= Dim.D3 ? m_z : 0f; } set { if (dimention >= Dim.D3) m_z = value; } }
		float L_1 = ___0_value;
		__this->___m_z_5 = L_1;
	}

IL_0010:
	{
		// public float z { get { return dimention >= Dim.D3 ? m_z : 0f; } set { if (dimention >= Dim.D3) m_z = value; } }
		return;
	}
}
// System.Single HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_w()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColliderAxisEventData_get_w_mB8B24023647A29F9E0F0A6A5C9C4A06645760DAF (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public float w { get { return dimention >= Dim.D4 ? m_w : 0f; } set { if (dimention >= Dim.D4) m_w = value; } }
		int32_t L_0;
		L_0 = ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_000f;
		}
	}
	{
		return (0.0f);
	}

IL_000f:
	{
		float L_1 = __this->___m_w_6;
		return L_1;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_w(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_w_mDAA6FB0B6E071D3402AAC7502EE9AD053779AB35 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float w { get { return dimention >= Dim.D4 ? m_w : 0f; } set { if (dimention >= Dim.D4) m_w = value; } }
		int32_t L_0;
		L_0 = ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_0010;
		}
	}
	{
		// public float w { get { return dimention >= Dim.D4 ? m_w : 0f; } set { if (dimention >= Dim.D4) m_w = value; } }
		float L_1 = ___0_value;
		__this->___m_w_6 = L_1;
	}

IL_0010:
	{
		// public float w { get { return dimention >= Dim.D4 ? m_w : 0f; } set { if (dimention >= Dim.D4) m_w = value; } }
		return;
	}
}
// UnityEngine.Vector2 HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_v2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ColliderAxisEventData_get_v2_mF29692C278D10D9B46B49DED55F09192025D1A84 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 v2 { get { return new Vector2(x, y); } set { x = value.x; y = value.y; } }
		float L_0;
		L_0 = ColliderAxisEventData_get_x_m9099EFBA0EC3AF8798882EA3E86464C02134F9A0(__this, NULL);
		float L_1;
		L_1 = ColliderAxisEventData_get_y_m9117301B5F277B54642886DFE94301EB9B1440CD(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_v2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_v2_m5BFE22EFFD700EC2523AFDEF4BC37593B7951961 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 v2 { get { return new Vector2(x, y); } set { x = value.x; y = value.y; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		float L_1 = L_0.___x_0;
		ColliderAxisEventData_set_x_m3319EFAB1C371AF151D6E8298C5A964691307BDF(__this, L_1, NULL);
		// public Vector2 v2 { get { return new Vector2(x, y); } set { x = value.x; y = value.y; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_value;
		float L_3 = L_2.___y_1;
		ColliderAxisEventData_set_y_m6499BBA68907412D53736A8F70E52FD4F581B171(__this, L_3, NULL);
		// public Vector2 v2 { get { return new Vector2(x, y); } set { x = value.x; y = value.y; } }
		return;
	}
}
// UnityEngine.Vector3 HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_v3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ColliderAxisEventData_get_v3_mE2A434EAA310F3C53A4A20337D01A8BA8CBD9DE9 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 v3 { get { return new Vector3(x, y, z); } set { x = value.x; y = value.y; z = value.z; } }
		float L_0;
		L_0 = ColliderAxisEventData_get_x_m9099EFBA0EC3AF8798882EA3E86464C02134F9A0(__this, NULL);
		float L_1;
		L_1 = ColliderAxisEventData_get_y_m9117301B5F277B54642886DFE94301EB9B1440CD(__this, NULL);
		float L_2;
		L_2 = ColliderAxisEventData_get_z_m61B14BEA97822209A4DB80F2E7B6664D3284013D(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_v3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_v3_mE1A753078880BFC98C14DA65CEE38756F220C1E5 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 v3 { get { return new Vector3(x, y, z); } set { x = value.x; y = value.y; z = value.z; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1 = L_0.___x_2;
		ColliderAxisEventData_set_x_m3319EFAB1C371AF151D6E8298C5A964691307BDF(__this, L_1, NULL);
		// public Vector3 v3 { get { return new Vector3(x, y, z); } set { x = value.x; y = value.y; z = value.z; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_value;
		float L_3 = L_2.___y_3;
		ColliderAxisEventData_set_y_m6499BBA68907412D53736A8F70E52FD4F581B171(__this, L_3, NULL);
		// public Vector3 v3 { get { return new Vector3(x, y, z); } set { x = value.x; y = value.y; z = value.z; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = L_4.___z_4;
		ColliderAxisEventData_set_z_mE1593A00B7B3888ABB7C8B035B27188732A46D6B(__this, L_5, NULL);
		// public Vector3 v3 { get { return new Vector3(x, y, z); } set { x = value.x; y = value.y; z = value.z; } }
		return;
	}
}
// UnityEngine.Vector4 HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::get_v4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ColliderAxisEventData_get_v4_mD4F191250047F074FF1D036A19D4AEAF9C72CD32 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector4 v4 { get { return new Vector4(x, y, z, w); } set { x = value.x; y = value.y; z = value.z; w = value.w; } }
		float L_0;
		L_0 = ColliderAxisEventData_get_x_m9099EFBA0EC3AF8798882EA3E86464C02134F9A0(__this, NULL);
		float L_1;
		L_1 = ColliderAxisEventData_get_y_m9117301B5F277B54642886DFE94301EB9B1440CD(__this, NULL);
		float L_2;
		L_2 = ColliderAxisEventData_get_z_m61B14BEA97822209A4DB80F2E7B6664D3284013D(__this, NULL);
		float L_3;
		L_3 = ColliderAxisEventData_get_w_mB8B24023647A29F9E0F0A6A5C9C4A06645760DAF(__this, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::set_v4(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_v4_m93DA54A15298A25A2483AF53163859861827CD56 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector4 v4 { get { return new Vector4(x, y, z, w); } set { x = value.x; y = value.y; z = value.z; w = value.w; } }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		float L_1 = L_0.___x_1;
		ColliderAxisEventData_set_x_m3319EFAB1C371AF151D6E8298C5A964691307BDF(__this, L_1, NULL);
		// public Vector4 v4 { get { return new Vector4(x, y, z, w); } set { x = value.x; y = value.y; z = value.z; w = value.w; } }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_value;
		float L_3 = L_2.___y_2;
		ColliderAxisEventData_set_y_m6499BBA68907412D53736A8F70E52FD4F581B171(__this, L_3, NULL);
		// public Vector4 v4 { get { return new Vector4(x, y, z, w); } set { x = value.x; y = value.y; z = value.z; w = value.w; } }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_value;
		float L_5 = L_4.___z_3;
		ColliderAxisEventData_set_z_mE1593A00B7B3888ABB7C8B035B27188732A46D6B(__this, L_5, NULL);
		// public Vector4 v4 { get { return new Vector4(x, y, z, w); } set { x = value.x; y = value.y; z = value.z; w = value.w; } }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_value;
		float L_7 = L_6.___w_4;
		ColliderAxisEventData_set_w_mDAA6FB0B6E071D3402AAC7502EE9AD053779AB35(__this, L_7, NULL);
		// public Vector4 v4 { get { return new Vector4(x, y, z, w); } set { x = value.x; y = value.y; z = value.z; w = value.w; } }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData::.ctor(HTC.UnityPlugin.ColliderEvent.IColliderEventCaster,HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/Dim,HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData/InputAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderAxisEventData__ctor_m64378C56BB3300FC287CDF789C96D1BC983237D4 (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, RuntimeObject* ___0_eventCaster, int32_t ___1_dimention, int32_t ___2_axis, const RuntimeMethod* method) 
{
	{
		// public ColliderAxisEventData(IColliderEventCaster eventCaster, Dim dimention, InputAxis axis = 0) : base(eventCaster)
		RuntimeObject* L_0 = ___0_eventCaster;
		ColliderEventData__ctor_m6CF38FA6CB87932C7ADB3CD8146F780E98C8C7A5(__this, L_0, NULL);
		// this.axis = axis;
		int32_t L_1 = ___2_axis;
		ColliderAxisEventData_set_axis_m0C405D38F8A9425BCEC580FB5D433ED9862E0269_inline(__this, L_1, NULL);
		// this.dimention = dimention;
		int32_t L_2 = ___1_dimention;
		ColliderAxisEventData_set_dimention_m0657BF83FC0514AA7C0ACE5A363F972FF525C4D5_inline(__this, L_2, NULL);
		// }
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
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventHoverEnterHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_m52F7D52AF10B17DFE5D3F69A5D26A4BC5E3D8599 (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventHoverEnterHandler_tDADA8415AC20CFDE6E75D905265F5096EA63873A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventHoverEnter(ExecuteEvents.ValidateEventData<ColliderHoverEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1(L_1, ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventHoverEnterHandler::OnColliderEventHoverEnter(HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData) */, IColliderEventHoverEnterHandler_tDADA8415AC20CFDE6E75D905265F5096EA63873A_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventHoverExitHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_m4127EC0150835269BE2D58BF8F189708DF17DBDF (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventHoverExitHandler_t99FF8A726A8283B818BCAD7C847E034E0B6E377B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventHoverExit(ExecuteEvents.ValidateEventData<ColliderHoverEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1(L_1, ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventHoverExitHandler::OnColliderEventHoverExit(HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData) */, IColliderEventHoverExitHandler_t99FF8A726A8283B818BCAD7C847E034E0B6E377B_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverEnterHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_m04D9DE15BDCB7E586AE1634615472A3A35A36BD7 (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventLastHoverEnterHandler_tAD4981A44B52D943D7BE66A302D487C1E53AE23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventLastHoverEnter(ExecuteEvents.ValidateEventData<ColliderHoverEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1(L_1, ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverEnterHandler::OnColliderEventLastHoverEnter(HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData) */, IColliderEventLastHoverEnterHandler_tAD4981A44B52D943D7BE66A302D487C1E53AE23C_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverExitHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_mD226EF0ECD3EA2C6F9713EED2761F3F7A638C126 (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventLastHoverExitHandler_tADAB12C8452BA93D30F8737BFBF322CC0C5B4560_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventLastHoverExit(ExecuteEvents.ValidateEventData<ColliderHoverEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1(L_1, ExecuteEvents_ValidateEventData_TisColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C_m9A393E2A2AB0F3946569C40922B04A7BA1DC46E1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderHoverEventData_tA309ECCFCF027D39FA7C354841917F8B5951B72C* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventLastHoverExitHandler::OnColliderEventLastHoverExit(HTC.UnityPlugin.ColliderEvent.ColliderHoverEventData) */, IColliderEventLastHoverExitHandler_tADAB12C8452BA93D30F8737BFBF322CC0C5B4560_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventPressDownHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_m77FCEE26B9914A0AB81F1AEEDCCAE88BC02115EC (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventPressDownHandler_t3C0B84B93FC73D2F87CCD49AF575B3228343C992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventPressDown(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventPressDownHandler::OnColliderEventPressDown(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventPressDownHandler_t3C0B84B93FC73D2F87CCD49AF575B3228343C992_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventPressUpHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_m81E6530AEE070B4F98771B0BC80F1DC5380EA1EF (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventPressUpHandler_t5172F7039707C824F29E2E12F21BD0EA46FAB4A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventPressUp(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventPressUpHandler::OnColliderEventPressUp(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventPressUpHandler_t5172F7039707C824F29E2E12F21BD0EA46FAB4A5_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventPressEnterHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_m447BFCAF94AFD098EC67B69CABB7A7B61378794A (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventPressEnterHandler_t3227D257D1E89C9AD35D553FD3589CBE2B9382A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventPressEnter(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventPressEnterHandler::OnColliderEventPressEnter(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventPressEnterHandler_t3227D257D1E89C9AD35D553FD3589CBE2B9382A4_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventPressExitHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_mF1E57B1D3B36E50980934CE0C1C020DE179D9FC6 (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventPressExitHandler_t000FAA4084BCD9B5DDC0B8CAE0A4F81A2080E99A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventPressExit(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventPressExitHandler::OnColliderEventPressExit(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventPressExitHandler_t000FAA4084BCD9B5DDC0B8CAE0A4F81A2080E99A_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventClickHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_mE204216344B185BA753A3CBEED81B6142EA9581C (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventClickHandler_t253A63E0E545B4156D2AA3CF0D86C00E4E764463_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventClick(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventClickHandler::OnColliderEventClick(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventClickHandler_t253A63E0E545B4156D2AA3CF0D86C00E4E764463_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventDragStartHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_mBD0F1450C40D4B8DD3915F7F64B092D824FE1386 (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventDragStartHandler_t655A9A82287088F8D2ECDB7EF7CDFAD2E3B2D86D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventDragStart(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventDragStartHandler::OnColliderEventDragStart(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventDragStartHandler_t655A9A82287088F8D2ECDB7EF7CDFAD2E3B2D86D_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventDragFixedUpdateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_m5A513A141AB378CF2D65C2ED576EFCE5B9E6E301 (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventDragFixedUpdateHandler_t86AB4DA23F8B665B76B24EB848B308E2E285F712_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventDragFixedUpdate(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventDragFixedUpdateHandler::OnColliderEventDragFixedUpdate(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventDragFixedUpdateHandler_t86AB4DA23F8B665B76B24EB848B308E2E285F712_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventDragUpdateHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_mDFE6AACC1AC99B9A478FD45AF69BF98AEA8F3FFD (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventDragUpdateHandler_t5E15DE661C16A021037C7FD315CC1AAD1652A91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventDragUpdate(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventDragUpdateHandler::OnColliderEventDragUpdate(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventDragUpdateHandler_t5E15DE661C16A021037C7FD315CC1AAD1652A91A_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventDragEndHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_m5BCE9EE3D2F0CE199A3CCD4D6B57065E451AD503 (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventDragEndHandler_t05EB058811C41E16E8ECBC1F9E13E0028CEDC1A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventDragEnd(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventDragEndHandler::OnColliderEventDragEnd(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventDragEndHandler_t05EB058811C41E16E8ECBC1F9E13E0028CEDC1A5_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventDropHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_m2AA58C76800722D7EB78B610E95AD88F76FF584A (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventDropHandler_tF43B59D34E73EFFC6FDAADA800987C5F98715502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventDrop(ExecuteEvents.ValidateEventData<ColliderButtonEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5(L_1, ExecuteEvents_ValidateEventData_TisColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7_m127517DFC486B4B1445D663D4C6418182C127BB5_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventDropHandler::OnColliderEventDrop(HTC.UnityPlugin.ColliderEvent.ColliderButtonEventData) */, IColliderEventDropHandler_tF43B59D34E73EFFC6FDAADA800987C5F98715502_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::Execute(HTC.UnityPlugin.ColliderEvent.IColliderEventAxisChangedHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents_Execute_mCAEEE6872A641B74D2BFAE3730C048122F65D5E8 (RuntimeObject* ___0_handler, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ValidateEventData_TisColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A_mCEFA625B5BDBD1E5FF1EB1FA5C5A3FEB9863DBF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IColliderEventAxisChangedHandler_tB126B1B5530C0782D84E0AA85BC4E9DE02A6DFE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler.OnColliderEventAxisChanged(ExecuteEvents.ValidateEventData<ColliderAxisEventData>(eventData));
		RuntimeObject* L_0 = ___0_handler;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_1 = ___1_eventData;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* L_2;
		L_2 = ExecuteEvents_ValidateEventData_TisColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A_mCEFA625B5BDBD1E5FF1EB1FA5C5A3FEB9863DBF1(L_1, ExecuteEvents_ValidateEventData_TisColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A_mCEFA625B5BDBD1E5FF1EB1FA5C5A3FEB9863DBF1_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* >::Invoke(0 /* System.Void HTC.UnityPlugin.ColliderEvent.IColliderEventAxisChangedHandler::OnColliderEventAxisChanged(HTC.UnityPlugin.ColliderEvent.ColliderAxisEventData) */, IColliderEventAxisChangedHandler_tB126B1B5530C0782D84E0AA85BC4E9DE02A6DFE6_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void HTC.UnityPlugin.ColliderEvent.ExecuteColliderEvents::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteColliderEvents__cctor_m96E7E77DDCEBD095CA840A2AAFEFA7CCE75CFA83 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_m04D9DE15BDCB7E586AE1634615472A3A35A36BD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_m2AA58C76800722D7EB78B610E95AD88F76FF584A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_m4127EC0150835269BE2D58BF8F189708DF17DBDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_m447BFCAF94AFD098EC67B69CABB7A7B61378794A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_m52F7D52AF10B17DFE5D3F69A5D26A4BC5E3D8599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_m5A513A141AB378CF2D65C2ED576EFCE5B9E6E301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_m5BCE9EE3D2F0CE199A3CCD4D6B57065E451AD503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_m77FCEE26B9914A0AB81F1AEEDCCAE88BC02115EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_m81E6530AEE070B4F98771B0BC80F1DC5380EA1EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_mBD0F1450C40D4B8DD3915F7F64B092D824FE1386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_mCAEEE6872A641B74D2BFAE3730C048122F65D5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_mD226EF0ECD3EA2C6F9713EED2761F3F7A638C126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_mDFE6AACC1AC99B9A478FD45AF69BF98AEA8F3FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_mE204216344B185BA753A3CBEED81B6142EA9581C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_Execute_mF1E57B1D3B36E50980934CE0C1C020DE179D9FC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly ExecuteEvents.EventFunction<IColliderEventHoverEnterHandler> HoverEnterHandler = Execute;
		EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F* L_0 = (EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F*)il2cpp_codegen_object_new(EventFunction_1_t311A8586E72ED6A93C6E751E11F59D16E06E6F1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EventFunction_1__ctor_m86CCBE836561F9A98737528DF143F772809B6581(L_0, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_m52F7D52AF10B17DFE5D3F69A5D26A4BC5E3D8599_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___HoverEnterHandler_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___HoverEnterHandler_0), (void*)L_0);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventHoverExitHandler> HoverExitHandler = Execute;
		EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7* L_1 = (EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7*)il2cpp_codegen_object_new(EventFunction_1_tBFD3EADC16E104DD7642C63080008988EAE2BAF7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventFunction_1__ctor_mD71FC4505FEEBC859DA76998DBBF024F45B654EA(L_1, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_m4127EC0150835269BE2D58BF8F189708DF17DBDF_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___HoverExitHandler_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___HoverExitHandler_1), (void*)L_1);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventLastHoverEnterHandler> LastHoverEnterHandler = Execute;
		EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04* L_2 = (EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04*)il2cpp_codegen_object_new(EventFunction_1_t77011FAC1A97768F4D09B6BFD7AA87A98137FC04_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventFunction_1__ctor_mB4FAA3AE59AA904B2B8CF606D2312F79CEB14F65(L_2, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_m04D9DE15BDCB7E586AE1634615472A3A35A36BD7_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___LastHoverEnterHandler_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___LastHoverEnterHandler_2), (void*)L_2);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventLastHoverExitHandler> LastHoverExitHandler = Execute;
		EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220* L_3 = (EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220*)il2cpp_codegen_object_new(EventFunction_1_t24CED366700DFA8216F0455BD48C6031A759F220_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventFunction_1__ctor_mE7A75831A35D264D1E66137E07ED42C304C2C691(L_3, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_mD226EF0ECD3EA2C6F9713EED2761F3F7A638C126_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___LastHoverExitHandler_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___LastHoverExitHandler_3), (void*)L_3);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventPressDownHandler> PressDownHandler = Execute;
		EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660* L_4 = (EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660*)il2cpp_codegen_object_new(EventFunction_1_t021738F2F500B5F6E4D627DDA380EB477AC25660_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventFunction_1__ctor_m7CB8652CD858C07C4AF202C8ADF9CCB33AA82117(L_4, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_m77FCEE26B9914A0AB81F1AEEDCCAE88BC02115EC_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___PressDownHandler_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___PressDownHandler_4), (void*)L_4);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventPressUpHandler> PressUpHandler = Execute;
		EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873* L_5 = (EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873*)il2cpp_codegen_object_new(EventFunction_1_tCBA49C0BF082DA8E790C6D7E62DFD3FF93E9A873_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventFunction_1__ctor_mE16930C15D073317A48FF530A7576ED8F765ED75(L_5, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_m81E6530AEE070B4F98771B0BC80F1DC5380EA1EF_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___PressUpHandler_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___PressUpHandler_5), (void*)L_5);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventPressEnterHandler> PressEnterHandler = Execute;
		EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122* L_6 = (EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122*)il2cpp_codegen_object_new(EventFunction_1_tB1D835666380866F7E5322F0E2A6E6F991C22122_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventFunction_1__ctor_m788DEB468F58735A88F796A89137CDF568F35044(L_6, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_m447BFCAF94AFD098EC67B69CABB7A7B61378794A_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___PressEnterHandler_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___PressEnterHandler_6), (void*)L_6);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventPressExitHandler> PressExitHandler = Execute;
		EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0* L_7 = (EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0*)il2cpp_codegen_object_new(EventFunction_1_t878FEFE001BAE041A7267825D876BA3B7A661DA0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventFunction_1__ctor_m5C3F3A25F18DC838B93C02C80B6BDD457DC02EAB(L_7, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_mF1E57B1D3B36E50980934CE0C1C020DE179D9FC6_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___PressExitHandler_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___PressExitHandler_7), (void*)L_7);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventClickHandler> ClickHandler = Execute;
		EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28* L_8 = (EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28*)il2cpp_codegen_object_new(EventFunction_1_t59425EAED814B9E783F742250298CF353E43DF28_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EventFunction_1__ctor_mD9F1FBAC102AE2898188FF54FD92835493372131(L_8, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_mE204216344B185BA753A3CBEED81B6142EA9581C_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___ClickHandler_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___ClickHandler_8), (void*)L_8);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventDragStartHandler> DragStartHandler = Execute;
		EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4* L_9 = (EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4*)il2cpp_codegen_object_new(EventFunction_1_tF96F12E0953B7939DD4BA78C41E8DDE30662D7C4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventFunction_1__ctor_m86DE32D9D78FB0547AD630B16854291FF40EA638(L_9, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_mBD0F1450C40D4B8DD3915F7F64B092D824FE1386_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DragStartHandler_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DragStartHandler_9), (void*)L_9);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventDragFixedUpdateHandler> DragFixedUpdateHandler = Execute;
		EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56* L_10 = (EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56*)il2cpp_codegen_object_new(EventFunction_1_t5FFE13286D981A5B54AF3F753D8DE28F3CAE5F56_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EventFunction_1__ctor_m6D78B1D9536E0A4DA7A3FC965B87102551C599CA(L_10, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_m5A513A141AB378CF2D65C2ED576EFCE5B9E6E301_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DragFixedUpdateHandler_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DragFixedUpdateHandler_10), (void*)L_10);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventDragUpdateHandler> DragUpdateHandler = Execute;
		EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7* L_11 = (EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7*)il2cpp_codegen_object_new(EventFunction_1_t9C19D3A604CE660225126AC312A0B7B54D801DA7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventFunction_1__ctor_m0EC01799BF3E6155290EB48B4FFBBA628B166BE2(L_11, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_mDFE6AACC1AC99B9A478FD45AF69BF98AEA8F3FFD_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DragUpdateHandler_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DragUpdateHandler_11), (void*)L_11);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventDragEndHandler> DragEndHandler = Execute;
		EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3* L_12 = (EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3*)il2cpp_codegen_object_new(EventFunction_1_t6137BEF814163DD24044FF4AC094750C45D4ECE3_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		EventFunction_1__ctor_mFA3FBAC3319EF4D0DC2B11EDF336F62CD37627BE(L_12, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_m5BCE9EE3D2F0CE199A3CCD4D6B57065E451AD503_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DragEndHandler_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DragEndHandler_12), (void*)L_12);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventDropHandler> DropHandler = Execute;
		EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B* L_13 = (EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B*)il2cpp_codegen_object_new(EventFunction_1_t4E1E0692F1D84C71391BDC5868812A397688B03B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventFunction_1__ctor_m69F0619426F2459AE971B03544F2C40C1CB95910(L_13, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_m2AA58C76800722D7EB78B610E95AD88F76FF584A_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DropHandler_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___DropHandler_13), (void*)L_13);
		// public static readonly ExecuteEvents.EventFunction<IColliderEventAxisChangedHandler> AxisChangedHandler = Execute;
		EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1* L_14 = (EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1*)il2cpp_codegen_object_new(EventFunction_1_t07FAD8E424B9931FEA20DF33C1ADCAEF9CDB57E1_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		EventFunction_1__ctor_m5DDE80D163D93C91E3FD4A124CD431ECDE134A66(L_14, NULL, (intptr_t)((void*)ExecuteColliderEvents_Execute_mCAEEE6872A641B74D2BFAE3730C048122F65D5E8_RuntimeMethod_var), NULL);
		((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___AxisChangedHandler_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteColliderEvents_t5C45D503FC98EC1AECCDEC288ACDC827FB323AAD_il2cpp_TypeInfo_var))->___AxisChangedHandler_14), (void*)L_14);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderButtonEventData_set_button_mFA267304CE7B9BD7E8AA021590D0B3E4537A94D5_inline (ColliderButtonEventData_t32276FCC668783D5C611C0070E7B185A3AA931A7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public InputButton button { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ColliderAxisEventData_get_dimention_m1D5D196EC719E969D92CE85069C2767213EFF058_inline (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, const RuntimeMethod* method) 
{
	{
		// public Dim dimention { get; private set; }
		int32_t L_0 = __this->___U3CdimentionU3Ek__BackingField_8;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_axis_m0C405D38F8A9425BCEC580FB5D433ED9862E0269_inline (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public InputAxis axis { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CaxisU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColliderAxisEventData_set_dimention_m0657BF83FC0514AA7C0ACE5A363F972FF525C4D5_inline (ColliderAxisEventData_tF15544AC9D1BBF144F916085E9E3E4923309A15A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dim dimention { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CdimentionU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
