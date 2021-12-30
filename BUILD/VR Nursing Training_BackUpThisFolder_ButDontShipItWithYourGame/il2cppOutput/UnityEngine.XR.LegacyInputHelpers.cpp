#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>
struct List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671;
// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>
struct List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F;
// UnityEngine.XR.LegacyInputHelpers.ArmModelTransition[]
struct ArmModelTransitionU5BU5D_tBDF079BB198AAE43EB3721B15E531D573F405F1D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.XR.XRInputSubsystem[]
struct XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5;
// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData[]
struct ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11;
// UnityEngine.XR.LegacyInputHelpers.ArmModel
struct ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768;
// UnityEngine.XR.LegacyInputHelpers.ArmModelTransition
struct ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E;
// UnityEditor.XR.LegacyInputHelpers.CameraOffset
struct CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.XR.LegacyInputHelpers.SwingArmModel
struct SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel
struct TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29
struct U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078;

IL2CPP_EXTERN_C RuntimeClass* ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1598293FDBA0A22E67679010321CEAF5A1E1861A;
IL2CPP_EXTERN_C String_t* _stringLiteral59552F1B4B2CA258409D9991D0B1D8277D138EBD;
IL2CPP_EXTERN_C String_t* _stringLiteral5A7EC115E01E4D35A07E39DAF698909B94D0A006;
IL2CPP_EXTERN_C String_t* _stringLiteral95DB82DC86177C27DB13234A1522012D9D5ACCF4;
IL2CPP_EXTERN_C String_t* _stringLiteral9EE1B2C0C236AF8AFDBEF872BF1EFD45A739CF32;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD7A6A347698F4B03A6C3A0A351651ACD40FCDAC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m748FB1151691D0685E7982534F344E6EDE721A0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBF589AEA368D84EE0A049FD212EFA5D823DB6525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m63BFDBB879AE852E99CF2D605347B9DF7D9A3C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m236720331A4E0F7281A8388EDAE1948F7625B264_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m39825C1A0041D565567A207C961BEA55C6A142FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA6CD028E44C1BA2C1EC43EBB20D918B918773CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDDC517BDA087806B463125F73C41911564CEC705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m2BCB638114537C469D81C0519E1B8883AE55BA2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_Reset_m6C1E0923F7336FC059B9DBFAA7FEC2DB5714200A_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5;
struct ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDED13434226C69F13F118765EFC9D2C00A0FC49D 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>
struct List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ArmModelTransitionU5BU5D_tBDF079BB198AAE43EB3721B15E531D573F405F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F, ____items_1)); }
	inline ArmModelTransitionU5BU5D_tBDF079BB198AAE43EB3721B15E531D573F405F1D* get__items_1() const { return ____items_1; }
	inline ArmModelTransitionU5BU5D_tBDF079BB198AAE43EB3721B15E531D573F405F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ArmModelTransitionU5BU5D_tBDF079BB198AAE43EB3721B15E531D573F405F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ArmModelTransitionU5BU5D_tBDF079BB198AAE43EB3721B15E531D573F405F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F_StaticFields, ____emptyArray_5)); }
	inline ArmModelTransitionU5BU5D_tBDF079BB198AAE43EB3721B15E531D573F405F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ArmModelTransitionU5BU5D_tBDF079BB198AAE43EB3721B15E531D573F405F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ArmModelTransitionU5BU5D_tBDF079BB198AAE43EB3721B15E531D573F405F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____items_1)); }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemU5BU5D_t72CE9C0EC58BC2745AF5405880ECA64FA2E4C02C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____items_1)); }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* get__items_1() const { return ____items_1; }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_StaticFields, ____emptyArray_5)); }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>
struct List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F, ____items_1)); }
	inline ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11* get__items_1() const { return ____items_1; }
	inline ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F_StaticFields, ____emptyArray_5)); }
	inline ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.XR.LegacyInputHelpers.ArmModelTransition
struct ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::m_KeyName
	String_t* ___m_KeyName_0;
	// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::m_ArmModel
	ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ___m_ArmModel_1;

public:
	inline static int32_t get_offset_of_m_KeyName_0() { return static_cast<int32_t>(offsetof(ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3, ___m_KeyName_0)); }
	inline String_t* get_m_KeyName_0() const { return ___m_KeyName_0; }
	inline String_t** get_address_of_m_KeyName_0() { return &___m_KeyName_0; }
	inline void set_m_KeyName_0(String_t* value)
	{
		___m_KeyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ArmModel_1() { return static_cast<int32_t>(offsetof(ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3, ___m_ArmModel_1)); }
	inline ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * get_m_ArmModel_1() const { return ___m_ArmModel_1; }
	inline ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 ** get_address_of_m_ArmModel_1() { return &___m_ArmModel_1; }
	inline void set_m_ArmModel_1(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * value)
	{
		___m_ArmModel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ArmModel_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29
struct U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078  : public RuntimeObject
{
public:
	// System.Int32 UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEditor.XR.LegacyInputHelpers.CameraOffset UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::<>4__this
	CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078, ___U3CU3E4__this_2)); }
	inline CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>
struct Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864, ___list_0)); }
	inline List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * get_list_0() const { return ___list_0; }
	inline List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864, ___current_3)); }
	inline ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * get_current_3() const { return ___current_3; }
	inline ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
struct ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4 
{
public:
	// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData::armModel
	ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ___armModel_0;
	// System.Single UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData::currentBlendAmount
	float ___currentBlendAmount_1;

public:
	inline static int32_t get_offset_of_armModel_0() { return static_cast<int32_t>(offsetof(ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4, ___armModel_0)); }
	inline ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * get_armModel_0() const { return ___armModel_0; }
	inline ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 ** get_address_of_armModel_0() { return &___armModel_0; }
	inline void set_armModel_0(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * value)
	{
		___armModel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___armModel_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentBlendAmount_1() { return static_cast<int32_t>(offsetof(ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4, ___currentBlendAmount_1)); }
	inline float get_currentBlendAmount_1() const { return ___currentBlendAmount_1; }
	inline float* get_address_of_currentBlendAmount_1() { return &___currentBlendAmount_1; }
	inline void set_currentBlendAmount_1(float value)
	{
		___currentBlendAmount_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
struct ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshaled_pinvoke
{
	ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ___armModel_0;
	float ___currentBlendAmount_1;
};
// Native definition for COM marshalling of UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
struct ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshaled_com
{
	ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ___armModel_0;
	float ___currentBlendAmount_1;
};

// UnityEngine.XR.AvailableTrackingData
struct AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.SpatialTracking.PoseDataFlags
struct PoseDataFlags_tB6A466AA30BE06A3F9ABA4C63BC7E4912FB8C6D7 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.PoseDataFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PoseDataFlags_tB6A466AA30BE06A3F9ABA4C63BC7E4912FB8C6D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingOriginModeFlags
struct TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0 
{
public:
	// System.Int32 UnityEngine.XR.TrackingOriginModeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingSpaceType
struct TrackingSpaceType_tDDC4AF6806433DAC0E0174208D3107B9364A4445 
{
public:
	// System.Int32 UnityEngine.XR.TrackingSpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingSpaceType_tDDC4AF6806433DAC0E0174208D3107B9364A4445, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode
struct UserRequestedTrackingMode_t8819718A514B8F5BFDE5E9EC48B19A8C3CFAA7D7 
{
public:
	// System.Int32 UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserRequestedTrackingMode_t8819718A514B8F5BFDE5E9EC48B19A8C3CFAA7D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.XR.XRNodeState
struct XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Rotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Velocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularVelocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Acceleration_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularAcceleration_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEditor.XR.LegacyInputHelpers.CameraOffset
struct CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_CameraFloorOffsetObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CameraFloorOffsetObject_5;
	// UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_RequestedTrackingMode
	int32_t ___m_RequestedTrackingMode_6;
	// UnityEngine.XR.TrackingOriginModeFlags UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_TrackingOriginMode
	int32_t ___m_TrackingOriginMode_7;
	// UnityEngine.XR.TrackingSpaceType UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_TrackingSpace
	int32_t ___m_TrackingSpace_8;
	// System.Single UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_CameraYOffset
	float ___m_CameraYOffset_9;
	// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_CameraInitialized
	bool ___m_CameraInitialized_10;
	// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_CameraInitializing
	bool ___m_CameraInitializing_11;

public:
	inline static int32_t get_offset_of_m_CameraFloorOffsetObject_5() { return static_cast<int32_t>(offsetof(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D, ___m_CameraFloorOffsetObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CameraFloorOffsetObject_5() const { return ___m_CameraFloorOffsetObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CameraFloorOffsetObject_5() { return &___m_CameraFloorOffsetObject_5; }
	inline void set_m_CameraFloorOffsetObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CameraFloorOffsetObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraFloorOffsetObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequestedTrackingMode_6() { return static_cast<int32_t>(offsetof(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D, ___m_RequestedTrackingMode_6)); }
	inline int32_t get_m_RequestedTrackingMode_6() const { return ___m_RequestedTrackingMode_6; }
	inline int32_t* get_address_of_m_RequestedTrackingMode_6() { return &___m_RequestedTrackingMode_6; }
	inline void set_m_RequestedTrackingMode_6(int32_t value)
	{
		___m_RequestedTrackingMode_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingOriginMode_7() { return static_cast<int32_t>(offsetof(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D, ___m_TrackingOriginMode_7)); }
	inline int32_t get_m_TrackingOriginMode_7() const { return ___m_TrackingOriginMode_7; }
	inline int32_t* get_address_of_m_TrackingOriginMode_7() { return &___m_TrackingOriginMode_7; }
	inline void set_m_TrackingOriginMode_7(int32_t value)
	{
		___m_TrackingOriginMode_7 = value;
	}

	inline static int32_t get_offset_of_m_TrackingSpace_8() { return static_cast<int32_t>(offsetof(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D, ___m_TrackingSpace_8)); }
	inline int32_t get_m_TrackingSpace_8() const { return ___m_TrackingSpace_8; }
	inline int32_t* get_address_of_m_TrackingSpace_8() { return &___m_TrackingSpace_8; }
	inline void set_m_TrackingSpace_8(int32_t value)
	{
		___m_TrackingSpace_8 = value;
	}

	inline static int32_t get_offset_of_m_CameraYOffset_9() { return static_cast<int32_t>(offsetof(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D, ___m_CameraYOffset_9)); }
	inline float get_m_CameraYOffset_9() const { return ___m_CameraYOffset_9; }
	inline float* get_address_of_m_CameraYOffset_9() { return &___m_CameraYOffset_9; }
	inline void set_m_CameraYOffset_9(float value)
	{
		___m_CameraYOffset_9 = value;
	}

	inline static int32_t get_offset_of_m_CameraInitialized_10() { return static_cast<int32_t>(offsetof(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D, ___m_CameraInitialized_10)); }
	inline bool get_m_CameraInitialized_10() const { return ___m_CameraInitialized_10; }
	inline bool* get_address_of_m_CameraInitialized_10() { return &___m_CameraInitialized_10; }
	inline void set_m_CameraInitialized_10(bool value)
	{
		___m_CameraInitialized_10 = value;
	}

	inline static int32_t get_offset_of_m_CameraInitializing_11() { return static_cast<int32_t>(offsetof(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D, ___m_CameraInitializing_11)); }
	inline bool get_m_CameraInitializing_11() const { return ___m_CameraInitializing_11; }
	inline bool* get_address_of_m_CameraInitializing_11() { return &___m_CameraInitializing_11; }
	inline void set_m_CameraInitializing_11(bool value)
	{
		___m_CameraInitializing_11 = value;
	}
};

struct CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEditor.XR.LegacyInputHelpers.CameraOffset::s_InputSubsystems
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystems_12;

public:
	inline static int32_t get_offset_of_s_InputSubsystems_12() { return static_cast<int32_t>(offsetof(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_StaticFields, ___s_InputSubsystems_12)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystems_12() const { return ___s_InputSubsystems_12; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystems_12() { return &___s_InputSubsystems_12; }
	inline void set_s_InputSubsystems_12(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystems_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystems_12), (void*)value);
	}
};


// UnityEngine.XR.LegacyInputHelpers.ArmModel
struct ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768  : public BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E
{
public:
	// UnityEngine.Pose UnityEngine.XR.LegacyInputHelpers.ArmModel::m_FinalPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_FinalPose_4;
	// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::m_HeadPoseSource
	int32_t ___m_HeadPoseSource_6;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ElbowRestPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ElbowRestPosition_7;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_WristRestPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_WristRestPosition_8;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ControllerRestPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ControllerRestPosition_9;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ArmExtensionOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ArmExtensionOffset_10;
	// System.Single UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ElbowBendRatio
	float ___m_ElbowBendRatio_11;
	// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::m_IsLockedToNeck
	bool ___m_IsLockedToNeck_12;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_NeckPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_NeckPosition_13;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ElbowPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ElbowPosition_14;
	// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ElbowRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_ElbowRotation_15;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_WristPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_WristPosition_16;
	// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::m_WristRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_WristRotation_17;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ControllerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ControllerPosition_18;
	// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ControllerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_ControllerRotation_19;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_HandedMultiplier
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_HandedMultiplier_20;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_TorsoDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_TorsoDirection_21;
	// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::m_TorsoRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_TorsoRotation_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.LegacyInputHelpers.ArmModel::xrNodeStateListOrientation
	List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___xrNodeStateListOrientation_33;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.LegacyInputHelpers.ArmModel::xrNodeStateListPosition
	List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___xrNodeStateListPosition_34;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.LegacyInputHelpers.ArmModel::xrNodeStateListAngularAcceleration
	List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___xrNodeStateListAngularAcceleration_35;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.LegacyInputHelpers.ArmModel::xrNodeStateListAngularVelocity
	List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___xrNodeStateListAngularVelocity_36;

public:
	inline static int32_t get_offset_of_m_FinalPose_4() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_FinalPose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_FinalPose_4() const { return ___m_FinalPose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_FinalPose_4() { return &___m_FinalPose_4; }
	inline void set_m_FinalPose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_FinalPose_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_HeadPoseSource_6() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_HeadPoseSource_6)); }
	inline int32_t get_m_HeadPoseSource_6() const { return ___m_HeadPoseSource_6; }
	inline int32_t* get_address_of_m_HeadPoseSource_6() { return &___m_HeadPoseSource_6; }
	inline void set_m_HeadPoseSource_6(int32_t value)
	{
		___m_HeadPoseSource_6 = value;
	}

	inline static int32_t get_offset_of_m_ElbowRestPosition_7() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_ElbowRestPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_ElbowRestPosition_7() const { return ___m_ElbowRestPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_ElbowRestPosition_7() { return &___m_ElbowRestPosition_7; }
	inline void set_m_ElbowRestPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_ElbowRestPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_WristRestPosition_8() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_WristRestPosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_WristRestPosition_8() const { return ___m_WristRestPosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_WristRestPosition_8() { return &___m_WristRestPosition_8; }
	inline void set_m_WristRestPosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_WristRestPosition_8 = value;
	}

	inline static int32_t get_offset_of_m_ControllerRestPosition_9() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_ControllerRestPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_ControllerRestPosition_9() const { return ___m_ControllerRestPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_ControllerRestPosition_9() { return &___m_ControllerRestPosition_9; }
	inline void set_m_ControllerRestPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_ControllerRestPosition_9 = value;
	}

	inline static int32_t get_offset_of_m_ArmExtensionOffset_10() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_ArmExtensionOffset_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_ArmExtensionOffset_10() const { return ___m_ArmExtensionOffset_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_ArmExtensionOffset_10() { return &___m_ArmExtensionOffset_10; }
	inline void set_m_ArmExtensionOffset_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_ArmExtensionOffset_10 = value;
	}

	inline static int32_t get_offset_of_m_ElbowBendRatio_11() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_ElbowBendRatio_11)); }
	inline float get_m_ElbowBendRatio_11() const { return ___m_ElbowBendRatio_11; }
	inline float* get_address_of_m_ElbowBendRatio_11() { return &___m_ElbowBendRatio_11; }
	inline void set_m_ElbowBendRatio_11(float value)
	{
		___m_ElbowBendRatio_11 = value;
	}

	inline static int32_t get_offset_of_m_IsLockedToNeck_12() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_IsLockedToNeck_12)); }
	inline bool get_m_IsLockedToNeck_12() const { return ___m_IsLockedToNeck_12; }
	inline bool* get_address_of_m_IsLockedToNeck_12() { return &___m_IsLockedToNeck_12; }
	inline void set_m_IsLockedToNeck_12(bool value)
	{
		___m_IsLockedToNeck_12 = value;
	}

	inline static int32_t get_offset_of_m_NeckPosition_13() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_NeckPosition_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_NeckPosition_13() const { return ___m_NeckPosition_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_NeckPosition_13() { return &___m_NeckPosition_13; }
	inline void set_m_NeckPosition_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_NeckPosition_13 = value;
	}

	inline static int32_t get_offset_of_m_ElbowPosition_14() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_ElbowPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_ElbowPosition_14() const { return ___m_ElbowPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_ElbowPosition_14() { return &___m_ElbowPosition_14; }
	inline void set_m_ElbowPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_ElbowPosition_14 = value;
	}

	inline static int32_t get_offset_of_m_ElbowRotation_15() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_ElbowRotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_ElbowRotation_15() const { return ___m_ElbowRotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_ElbowRotation_15() { return &___m_ElbowRotation_15; }
	inline void set_m_ElbowRotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_ElbowRotation_15 = value;
	}

	inline static int32_t get_offset_of_m_WristPosition_16() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_WristPosition_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_WristPosition_16() const { return ___m_WristPosition_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_WristPosition_16() { return &___m_WristPosition_16; }
	inline void set_m_WristPosition_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_WristPosition_16 = value;
	}

	inline static int32_t get_offset_of_m_WristRotation_17() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_WristRotation_17)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_WristRotation_17() const { return ___m_WristRotation_17; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_WristRotation_17() { return &___m_WristRotation_17; }
	inline void set_m_WristRotation_17(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_WristRotation_17 = value;
	}

	inline static int32_t get_offset_of_m_ControllerPosition_18() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_ControllerPosition_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_ControllerPosition_18() const { return ___m_ControllerPosition_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_ControllerPosition_18() { return &___m_ControllerPosition_18; }
	inline void set_m_ControllerPosition_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_ControllerPosition_18 = value;
	}

	inline static int32_t get_offset_of_m_ControllerRotation_19() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_ControllerRotation_19)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_ControllerRotation_19() const { return ___m_ControllerRotation_19; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_ControllerRotation_19() { return &___m_ControllerRotation_19; }
	inline void set_m_ControllerRotation_19(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_ControllerRotation_19 = value;
	}

	inline static int32_t get_offset_of_m_HandedMultiplier_20() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_HandedMultiplier_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_HandedMultiplier_20() const { return ___m_HandedMultiplier_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_HandedMultiplier_20() { return &___m_HandedMultiplier_20; }
	inline void set_m_HandedMultiplier_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_HandedMultiplier_20 = value;
	}

	inline static int32_t get_offset_of_m_TorsoDirection_21() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_TorsoDirection_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_TorsoDirection_21() const { return ___m_TorsoDirection_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_TorsoDirection_21() { return &___m_TorsoDirection_21; }
	inline void set_m_TorsoDirection_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_TorsoDirection_21 = value;
	}

	inline static int32_t get_offset_of_m_TorsoRotation_22() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___m_TorsoRotation_22)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_TorsoRotation_22() const { return ___m_TorsoRotation_22; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_TorsoRotation_22() { return &___m_TorsoRotation_22; }
	inline void set_m_TorsoRotation_22(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_TorsoRotation_22 = value;
	}

	inline static int32_t get_offset_of_xrNodeStateListOrientation_33() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___xrNodeStateListOrientation_33)); }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * get_xrNodeStateListOrientation_33() const { return ___xrNodeStateListOrientation_33; }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 ** get_address_of_xrNodeStateListOrientation_33() { return &___xrNodeStateListOrientation_33; }
	inline void set_xrNodeStateListOrientation_33(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * value)
	{
		___xrNodeStateListOrientation_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrNodeStateListOrientation_33), (void*)value);
	}

	inline static int32_t get_offset_of_xrNodeStateListPosition_34() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___xrNodeStateListPosition_34)); }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * get_xrNodeStateListPosition_34() const { return ___xrNodeStateListPosition_34; }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 ** get_address_of_xrNodeStateListPosition_34() { return &___xrNodeStateListPosition_34; }
	inline void set_xrNodeStateListPosition_34(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * value)
	{
		___xrNodeStateListPosition_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrNodeStateListPosition_34), (void*)value);
	}

	inline static int32_t get_offset_of_xrNodeStateListAngularAcceleration_35() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___xrNodeStateListAngularAcceleration_35)); }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * get_xrNodeStateListAngularAcceleration_35() const { return ___xrNodeStateListAngularAcceleration_35; }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 ** get_address_of_xrNodeStateListAngularAcceleration_35() { return &___xrNodeStateListAngularAcceleration_35; }
	inline void set_xrNodeStateListAngularAcceleration_35(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * value)
	{
		___xrNodeStateListAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrNodeStateListAngularAcceleration_35), (void*)value);
	}

	inline static int32_t get_offset_of_xrNodeStateListAngularVelocity_36() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768, ___xrNodeStateListAngularVelocity_36)); }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * get_xrNodeStateListAngularVelocity_36() const { return ___xrNodeStateListAngularVelocity_36; }
	inline List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 ** get_address_of_xrNodeStateListAngularVelocity_36() { return &___xrNodeStateListAngularVelocity_36; }
	inline void set_xrNodeStateListAngularVelocity_36(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * value)
	{
		___xrNodeStateListAngularVelocity_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrNodeStateListAngularVelocity_36), (void*)value);
	}
};

struct ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::DEFAULT_ELBOW_REST_POSITION
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___DEFAULT_ELBOW_REST_POSITION_23;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::DEFAULT_WRIST_REST_POSITION
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___DEFAULT_WRIST_REST_POSITION_24;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::DEFAULT_CONTROLLER_REST_POSITION
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___DEFAULT_CONTROLLER_REST_POSITION_25;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::DEFAULT_ARM_EXTENSION_OFFSET
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___DEFAULT_ARM_EXTENSION_OFFSET_26;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::SHOULDER_POSITION
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___SHOULDER_POSITION_29;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::NECK_OFFSET
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___NECK_OFFSET_30;

public:
	inline static int32_t get_offset_of_DEFAULT_ELBOW_REST_POSITION_23() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields, ___DEFAULT_ELBOW_REST_POSITION_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_DEFAULT_ELBOW_REST_POSITION_23() const { return ___DEFAULT_ELBOW_REST_POSITION_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_DEFAULT_ELBOW_REST_POSITION_23() { return &___DEFAULT_ELBOW_REST_POSITION_23; }
	inline void set_DEFAULT_ELBOW_REST_POSITION_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___DEFAULT_ELBOW_REST_POSITION_23 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_WRIST_REST_POSITION_24() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields, ___DEFAULT_WRIST_REST_POSITION_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_DEFAULT_WRIST_REST_POSITION_24() const { return ___DEFAULT_WRIST_REST_POSITION_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_DEFAULT_WRIST_REST_POSITION_24() { return &___DEFAULT_WRIST_REST_POSITION_24; }
	inline void set_DEFAULT_WRIST_REST_POSITION_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___DEFAULT_WRIST_REST_POSITION_24 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_CONTROLLER_REST_POSITION_25() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields, ___DEFAULT_CONTROLLER_REST_POSITION_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_DEFAULT_CONTROLLER_REST_POSITION_25() const { return ___DEFAULT_CONTROLLER_REST_POSITION_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_DEFAULT_CONTROLLER_REST_POSITION_25() { return &___DEFAULT_CONTROLLER_REST_POSITION_25; }
	inline void set_DEFAULT_CONTROLLER_REST_POSITION_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___DEFAULT_CONTROLLER_REST_POSITION_25 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_ARM_EXTENSION_OFFSET_26() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields, ___DEFAULT_ARM_EXTENSION_OFFSET_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_DEFAULT_ARM_EXTENSION_OFFSET_26() const { return ___DEFAULT_ARM_EXTENSION_OFFSET_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_DEFAULT_ARM_EXTENSION_OFFSET_26() { return &___DEFAULT_ARM_EXTENSION_OFFSET_26; }
	inline void set_DEFAULT_ARM_EXTENSION_OFFSET_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___DEFAULT_ARM_EXTENSION_OFFSET_26 = value;
	}

	inline static int32_t get_offset_of_SHOULDER_POSITION_29() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields, ___SHOULDER_POSITION_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_SHOULDER_POSITION_29() const { return ___SHOULDER_POSITION_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_SHOULDER_POSITION_29() { return &___SHOULDER_POSITION_29; }
	inline void set_SHOULDER_POSITION_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___SHOULDER_POSITION_29 = value;
	}

	inline static int32_t get_offset_of_NECK_OFFSET_30() { return static_cast<int32_t>(offsetof(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields, ___NECK_OFFSET_30)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_NECK_OFFSET_30() const { return ___NECK_OFFSET_30; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_NECK_OFFSET_30() { return &___NECK_OFFSET_30; }
	inline void set_NECK_OFFSET_30(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___NECK_OFFSET_30 = value;
	}
};


// UnityEngine.XR.LegacyInputHelpers.SwingArmModel
struct SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F  : public ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768
{
public:
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ShoulderRotationRatio
	float ___m_ShoulderRotationRatio_37;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ElbowRotationRatio
	float ___m_ElbowRotationRatio_38;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_WristRotationRatio
	float ___m_WristRotationRatio_39;
	// UnityEngine.Vector2 UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_JointShiftAngle
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_JointShiftAngle_40;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_JointShiftExponent
	float ___m_JointShiftExponent_41;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ShiftedShoulderRotationRatio
	float ___m_ShiftedShoulderRotationRatio_42;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ShiftedElbowRotationRatio
	float ___m_ShiftedElbowRotationRatio_43;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ShiftedWristRotationRatio
	float ___m_ShiftedWristRotationRatio_44;

public:
	inline static int32_t get_offset_of_m_ShoulderRotationRatio_37() { return static_cast<int32_t>(offsetof(SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F, ___m_ShoulderRotationRatio_37)); }
	inline float get_m_ShoulderRotationRatio_37() const { return ___m_ShoulderRotationRatio_37; }
	inline float* get_address_of_m_ShoulderRotationRatio_37() { return &___m_ShoulderRotationRatio_37; }
	inline void set_m_ShoulderRotationRatio_37(float value)
	{
		___m_ShoulderRotationRatio_37 = value;
	}

	inline static int32_t get_offset_of_m_ElbowRotationRatio_38() { return static_cast<int32_t>(offsetof(SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F, ___m_ElbowRotationRatio_38)); }
	inline float get_m_ElbowRotationRatio_38() const { return ___m_ElbowRotationRatio_38; }
	inline float* get_address_of_m_ElbowRotationRatio_38() { return &___m_ElbowRotationRatio_38; }
	inline void set_m_ElbowRotationRatio_38(float value)
	{
		___m_ElbowRotationRatio_38 = value;
	}

	inline static int32_t get_offset_of_m_WristRotationRatio_39() { return static_cast<int32_t>(offsetof(SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F, ___m_WristRotationRatio_39)); }
	inline float get_m_WristRotationRatio_39() const { return ___m_WristRotationRatio_39; }
	inline float* get_address_of_m_WristRotationRatio_39() { return &___m_WristRotationRatio_39; }
	inline void set_m_WristRotationRatio_39(float value)
	{
		___m_WristRotationRatio_39 = value;
	}

	inline static int32_t get_offset_of_m_JointShiftAngle_40() { return static_cast<int32_t>(offsetof(SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F, ___m_JointShiftAngle_40)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_JointShiftAngle_40() const { return ___m_JointShiftAngle_40; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_JointShiftAngle_40() { return &___m_JointShiftAngle_40; }
	inline void set_m_JointShiftAngle_40(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_JointShiftAngle_40 = value;
	}

	inline static int32_t get_offset_of_m_JointShiftExponent_41() { return static_cast<int32_t>(offsetof(SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F, ___m_JointShiftExponent_41)); }
	inline float get_m_JointShiftExponent_41() const { return ___m_JointShiftExponent_41; }
	inline float* get_address_of_m_JointShiftExponent_41() { return &___m_JointShiftExponent_41; }
	inline void set_m_JointShiftExponent_41(float value)
	{
		___m_JointShiftExponent_41 = value;
	}

	inline static int32_t get_offset_of_m_ShiftedShoulderRotationRatio_42() { return static_cast<int32_t>(offsetof(SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F, ___m_ShiftedShoulderRotationRatio_42)); }
	inline float get_m_ShiftedShoulderRotationRatio_42() const { return ___m_ShiftedShoulderRotationRatio_42; }
	inline float* get_address_of_m_ShiftedShoulderRotationRatio_42() { return &___m_ShiftedShoulderRotationRatio_42; }
	inline void set_m_ShiftedShoulderRotationRatio_42(float value)
	{
		___m_ShiftedShoulderRotationRatio_42 = value;
	}

	inline static int32_t get_offset_of_m_ShiftedElbowRotationRatio_43() { return static_cast<int32_t>(offsetof(SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F, ___m_ShiftedElbowRotationRatio_43)); }
	inline float get_m_ShiftedElbowRotationRatio_43() const { return ___m_ShiftedElbowRotationRatio_43; }
	inline float* get_address_of_m_ShiftedElbowRotationRatio_43() { return &___m_ShiftedElbowRotationRatio_43; }
	inline void set_m_ShiftedElbowRotationRatio_43(float value)
	{
		___m_ShiftedElbowRotationRatio_43 = value;
	}

	inline static int32_t get_offset_of_m_ShiftedWristRotationRatio_44() { return static_cast<int32_t>(offsetof(SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F, ___m_ShiftedWristRotationRatio_44)); }
	inline float get_m_ShiftedWristRotationRatio_44() const { return ___m_ShiftedWristRotationRatio_44; }
	inline float* get_address_of_m_ShiftedWristRotationRatio_44() { return &___m_ShiftedWristRotationRatio_44; }
	inline void set_m_ShiftedWristRotationRatio_44(float value)
	{
		___m_ShiftedWristRotationRatio_44 = value;
	}
};


// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel
struct TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411  : public ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768
{
public:
	// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::m_CurrentArmModelComponent
	ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ___m_CurrentArmModelComponent_37;
	// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition> UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::m_ArmModelTransitions
	List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * ___m_ArmModelTransitions_38;
	// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData> UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::armModelBlendData
	List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * ___armModelBlendData_44;
	// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::currentBlendingArmModel
	ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  ___currentBlendingArmModel_45;

public:
	inline static int32_t get_offset_of_m_CurrentArmModelComponent_37() { return static_cast<int32_t>(offsetof(TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411, ___m_CurrentArmModelComponent_37)); }
	inline ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * get_m_CurrentArmModelComponent_37() const { return ___m_CurrentArmModelComponent_37; }
	inline ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 ** get_address_of_m_CurrentArmModelComponent_37() { return &___m_CurrentArmModelComponent_37; }
	inline void set_m_CurrentArmModelComponent_37(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * value)
	{
		___m_CurrentArmModelComponent_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentArmModelComponent_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_ArmModelTransitions_38() { return static_cast<int32_t>(offsetof(TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411, ___m_ArmModelTransitions_38)); }
	inline List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * get_m_ArmModelTransitions_38() const { return ___m_ArmModelTransitions_38; }
	inline List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F ** get_address_of_m_ArmModelTransitions_38() { return &___m_ArmModelTransitions_38; }
	inline void set_m_ArmModelTransitions_38(List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * value)
	{
		___m_ArmModelTransitions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ArmModelTransitions_38), (void*)value);
	}

	inline static int32_t get_offset_of_armModelBlendData_44() { return static_cast<int32_t>(offsetof(TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411, ___armModelBlendData_44)); }
	inline List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * get_armModelBlendData_44() const { return ___armModelBlendData_44; }
	inline List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F ** get_address_of_armModelBlendData_44() { return &___armModelBlendData_44; }
	inline void set_armModelBlendData_44(List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * value)
	{
		___armModelBlendData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___armModelBlendData_44), (void*)value);
	}

	inline static int32_t get_offset_of_currentBlendingArmModel_45() { return static_cast<int32_t>(offsetof(TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411, ___currentBlendingArmModel_45)); }
	inline ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  get_currentBlendingArmModel_45() const { return ___currentBlendingArmModel_45; }
	inline ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4 * get_address_of_currentBlendingArmModel_45() { return &___currentBlendingArmModel_45; }
	inline void set_currentBlendingArmModel_45(ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  value)
	{
		___currentBlendingArmModel_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentBlendingArmModel_45))->___armModel_0), (void*)NULL);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  m_Items[1];

public:
	inline XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData[]
struct ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  m_Items[1];

public:
	inline ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___armModel_0), (void*)NULL);
	}
	inline ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___armModel_0), (void*)NULL);
	}
};


// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_gshared_inline (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_gshared_inline (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_gshared (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_gshared_inline (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m63BFDBB879AE852E99CF2D605347B9DF7D9A3C48_gshared (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_gshared_inline (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE_gshared (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m2BCB638114537C469D81C0519E1B8883AE55BA2B_gshared (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___index0, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m39825C1A0041D565567A207C961BEA55C6A142FA_gshared (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA6CD028E44C1BA2C1EC43EBB20D918B918773CD8_gshared (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___capacity0, const RuntimeMethod* method);

// UnityEngine.Pose UnityEngine.XR.LegacyInputHelpers.ArmModel::get_finalPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ArmModel_get_finalPose_m7055D417219445A756EEBEB4995D4994CA0B41FD_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetForwardVector(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetForwardVector_m42833245C2F7C3F9448F510DB7E989D5E2C26001 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___forward1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::get_poseSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArmModel_get_poseSource_m84039586AC07D778F5437D3796F46253EC6ABC74_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetAngularAcceleration(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetAngularAcceleration_mBDA9F6653C5444DC26819BAD7CD585F4C061DE2F (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularAccel1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetPosition(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetPosition_mBCBB13FD079245233A79004B0EFC506D0AC6CC4B (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::GetControllerRotation(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_GetControllerRotation_m32763A271F2ECF876581A14F77B30DE6B3559B34 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___xyRotation1, float* ___xAngle2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetRotation(UnityEngine.XR.XRNode,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetRotation_mCEFAACBA376CA7CCA7D0A81E97AE5D60D2EFE04E (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Pose::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Pose_get_forward_m787B1806F476B8CB6EBA26ACB644430606248C42 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880 (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___nodeStates0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::get_Count()
inline int32_t List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_inline (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *, const RuntimeMethod*))List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::get_Item(System.Int32)
inline XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_inline (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  (*) (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_m8BAEDDA0A2400A884686860FEB40F5B0CAC34A3B (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_m7526637E83DA923CCEB8590D0E342DFC8A546415 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAngularAcceleration(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAngularAcceleration_mC204326494FCE12A491C1CBC15B4264BC45F648A (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularAcceleration0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAngularVelocity_m7F331B0AC7E1C29AB4279DDAE8A0C7BA9973E686 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularVelocity0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
inline void List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *, const RuntimeMethod*))List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.XR.Interaction.BasePoseProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePoseProvider__ctor_mA49C4326450EE089736886D0337B7EC91B1C39C8 (BasePoseProvider_t04EB173A7CC01D10EF789D54577ACAEBFAD5B04E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraOffset_SetupCamera_mDF4F84CA4089903AF5FDFF76D78577F3AFCD5C4F (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method);
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::TryInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_TryInitializeCamera_mF0078D5220B802D7382B6CB339251253695D20B9 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::UpgradeTrackingSpaceToTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_UpgradeTrackingSpaceToTrackingOriginMode_m285A3BF1B64DF62963410389FFD1994A27A6B705 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEditor.XR.LegacyInputHelpers.CameraOffset::RepeatInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraOffset_RepeatInitializeCamera_mA2B8D1BECE2AF91F818754912D630151CC302DA6 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__29__ctor_mE3AA58806DBC43782A94DE7F1C76267364B4D5C3 (U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6 (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared)(___subsystems0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::get_Count()
inline int32_t List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::get_Item(System.Int32)
inline XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_inline (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCamera(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraOffset_SetupCamera_m32CA6CDAC18699DBFD913C2464AE897D3E636FFD (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___subsystem0, const RuntimeMethod* method);
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCameraLegacy(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_SetupCameraLegacy_mDEAE751B5994014A633CA91FF7492BD9E6B2928E (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, int32_t ___trackingSpace0, const RuntimeMethod* method);
// System.Single UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_cameraYOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraOffset_get_cameraYOffset_m7512CDD033A17800B8066B34E9CEA9B0DB24A110_inline (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method);
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method);
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetSupportedTrackingOriginModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetSupportedTrackingOriginModes_m12EEA2E804FF03D9B82BCB2E64EA520AF0C03B36 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, int32_t ___origin0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TryRecenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TryRecenter_m40231564A0E1FB14CAC17F7A88B206FA2121EF5C (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_SetTrackingSpaceType_m4D8F6438740E0F03326F75322863A6539949B916 (int32_t ___trackingSpaceType0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputTracking::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_Recenter_m7C6E01B6C6989D6972E4C35CB98371C5652EC22E (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::.ctor()
inline void List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_maxJointShiftAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_maxJointShiftAngle_m61F6AACE99C14398CC22A756411785182BD89F31 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_minJointShiftAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_minJointShiftAngle_mE6C418D1F1E00173FD614E51FF107F1D8B873B85 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_elbowRotation_m694DC54C551C395942832D32C7FBC645B03DFAEC_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel__ctor_m2003B5629B882463C5D15B4896E44FDEB28C0882 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::GetEnumerator()
inline Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864  List_1_GetEnumerator_m236720331A4E0F7281A8388EDAE1948F7625B264 (List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864  (*) (List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::get_Current()
inline ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * Enumerator_get_Current_mBF589AEA368D84EE0A049FD212EFA5D823DB6525_inline (Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 * __this, const RuntimeMethod* method)
{
	return ((  ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * (*) (Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::get_transitionKeyName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ArmModelTransition_get_transitionKeyName_m8F9574FC513145510CDFD1CDFE6704B9433F886D_inline (ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::get_armModel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ArmModelTransition_get_armModel_m4DCA2E0C66A14ACC9ACBE847EA418EC06B8D15FC_inline (ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::Queue(UnityEngine.XR.LegacyInputHelpers.ArmModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_Queue_mBEDA22890C7AA71F15BB337E868C735DDEDD4A55 (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ___newArmModel0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::MoveNext()
inline bool Enumerator_MoveNext_m748FB1151691D0685E7982534F344E6EDE721A0B (Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::Dispose()
inline void Enumerator_Dispose_mD7A6A347698F4B03A6C3A0A351651ACD40FCDAC5 (Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::RemoveJustStartingTransitions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_RemoveJustStartingTransitions_m6A0036D1791EAB3DF28AF11483335114A8737802 (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::get_Count()
inline int32_t List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_inline (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F *, const RuntimeMethod*))List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::RemoveOldestTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_RemoveOldestTransition_m20CF422DE0B6948C143F6FD0553B492745143CF5 (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::Add(!0)
inline void List_1_Add_m63BFDBB879AE852E99CF2D605347B9DF7D9A3C48 (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F *, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4 , const RuntimeMethod*))List_1_Add_m63BFDBB879AE852E99CF2D605347B9DF7D9A3C48_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::get_Item(System.Int32)
inline ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_inline (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  (*) (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F *, int32_t, const RuntimeMethod*))List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F *, int32_t, const RuntimeMethod*))List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::UpdateBlends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionArmModel_UpdateBlends_mEF07BA9BB281691D64BDF2132FD0A1250AADF69C (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method);
// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::get_currentArmModelComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * TransitionArmModel_get_currentArmModelComponent_m56D40C8430D1030CB06F28B8C53BF1CEE2D25A5D_inline (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_neckPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_neckPosition_m7AB5D0B28444C4644ED070593C9A1119B3559F4E_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_elbowPosition_mB06B4A55ACA99791DD41938F76F914DDAC6160D6_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_wristPosition_m6AB615CFA8D0D5F8E340C0CD3466F1907EB4AFF4_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_controllerPosition_m187EEFE85902AB00B2F2B51638CABE5B66F93112_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_wristRotation_mA2C7EBD9E3CC05C48E5AE0784DEEF2DF4B4DC9EB_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_controllerRotation_mFC37272A3E9E5469B9FEF4BCE020880E8DE608F2_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetAngularVelocity(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetAngularVelocity_mF9033461C646DB5C4E16EE83FBC72D4A8BB38A9E (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angVel1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m2BCB638114537C469D81C0519E1B8883AE55BA2B (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___index0, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F *, int32_t, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4 , const RuntimeMethod*))List_1_set_Item_m2BCB638114537C469D81C0519E1B8883AE55BA2B_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m39825C1A0041D565567A207C961BEA55C6A142FA (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m39825C1A0041D565567A207C961BEA55C6A142FA_gshared)(__this, ___index0, ___count1, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m1807338EFAE61B3F6CF96FCB905D9B8E2DBAA0F7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_finalPose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArmModel_set_finalPose_mDEEA06C3A0A6F9376BDD4CEAE852C34B70EA3BBC_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::.ctor()
inline void List_1__ctor_mDDC517BDA087806B463125F73C41911564CEC705 (List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::.ctor(System.Int32)
inline void List_1__ctor_mA6CD028E44C1BA2C1EC43EBB20D918B918773CD8 (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F *, int32_t, const RuntimeMethod*))List_1__ctor_mA6CD028E44C1BA2C1EC43EBB20D918B918773CD8_gshared)(__this, ___capacity0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643 (float ___dot0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.XR.LegacyInputHelpers.ArmModel::GetPoseFromProvider(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArmModel_GetPoseFromProvider_m3C7E3A0279443D44555D8E176D713010DE03232B (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnControllerInputUpdated())
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// output = finalPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_1 = ___output0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2;
		L_2 = ArmModel_get_finalPose_m7055D417219445A756EEBEB4995D4994CA0B41FD_inline(__this, /*hidden argument*/NULL);
		*(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_1 = L_2;
		// return PoseDataFlags.Position | PoseDataFlags.Rotation;
		return (int32_t)(3);
	}

IL_0016:
	{
		// output = Pose.identity;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_3 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4;
		L_4 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		*(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_3 = L_4;
		// return PoseDataFlags.NoData;
		return (int32_t)(0);
	}
}
// UnityEngine.Pose UnityEngine.XR.LegacyInputHelpers.ArmModel::get_finalPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ArmModel_get_finalPose_m7055D417219445A756EEBEB4995D4994CA0B41FD (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_FinalPose; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_FinalPose_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_finalPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_finalPose_mDEEA06C3A0A6F9376BDD4CEAE852C34B70EA3BBC (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_FinalPose = value; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___value0;
		__this->set_m_FinalPose_4(L_0);
		// set { m_FinalPose = value; }
		return;
	}
}
// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::get_poseSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArmModel_get_poseSource_m84039586AC07D778F5437D3796F46253EC6ABC74 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_PoseSource; }
		int32_t L_0 = __this->get_m_PoseSource_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_poseSource(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_poseSource_m99AC57E8535B32293A29767191F703D11B634D13 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_PoseSource = value; }
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		// set { m_PoseSource = value; }
		return;
	}
}
// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::get_headGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArmModel_get_headGameObject_mB6861311C0E03EBBC7F745372BD36C153A7A8838 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_HeadPoseSource; }
		int32_t L_0 = __this->get_m_HeadPoseSource_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_headGameObject(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_headGameObject_mED09CE16D99B0A4B21DFB1D2BCC0A7F5AEFCCE43 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_HeadPoseSource = value; }
		int32_t L_0 = ___value0;
		__this->set_m_HeadPoseSource_6(L_0);
		// set { m_HeadPoseSource = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowRestPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_elbowRestPosition_m21CDEA3604187DA1F0B67300AEDA49259EF6A3BD (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ElbowRestPosition; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_ElbowRestPosition_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_elbowRestPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_elbowRestPosition_m579E54DD9F551E24D680EA091F240E9CDB0963A8 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ElbowRestPosition = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_ElbowRestPosition_7(L_0);
		// set { m_ElbowRestPosition = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristRestPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_wristRestPosition_mD835DEA4CC01C2E5D939395D16D5E5E0800EC3B6 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_WristRestPosition; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_WristRestPosition_8();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_wristRestPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_wristRestPosition_m2ABA76F8D98BAFBF2108794E8BD2DDA7D737020D (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_WristRestPosition = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_WristRestPosition_8(L_0);
		// set { m_WristRestPosition = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerRestPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_controllerRestPosition_m3D5F3540F04FC791AB6EC717ABB8925C8D1B9A31 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ControllerRestPosition; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_ControllerRestPosition_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_controllerRestPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_controllerRestPosition_m5A03B610FCB5B81A24C38E9F06ED75ECD05A74AE (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ControllerRestPosition = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_ControllerRestPosition_9(L_0);
		// set { m_ControllerRestPosition = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_armExtensionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_armExtensionOffset_m86449A63724B64116816193E0E2BA85CE8273995 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ArmExtensionOffset; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_ArmExtensionOffset_10();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_armExtensionOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_armExtensionOffset_mD351D8FEF51799374FBA3D4619B3C318AD706561 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ArmExtensionOffset = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_m_ArmExtensionOffset_10(L_0);
		// set { m_ArmExtensionOffset = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowBendRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArmModel_get_elbowBendRatio_m88513786BC623DF5CF214779DEA7B272ABB2FF69 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ElbowBendRatio; }
		float L_0 = __this->get_m_ElbowBendRatio_11();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_elbowBendRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_elbowBendRatio_mB1B0D5E201E3BCFF9CA4815AFB384BF82CE5CE2A (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ElbowBendRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ElbowBendRatio_11(L_0);
		// set { m_ElbowBendRatio = value; }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::get_isLockedToNeck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_get_isLockedToNeck_m4368C257A32F800F23609AD7B1C01793ECB25F05 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsLockedToNeck; }
		bool L_0 = __this->get_m_IsLockedToNeck_12();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_isLockedToNeck(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_isLockedToNeck_mF059BB1FD661AC5D0B49A6087A4C21A9C5A6575D (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_IsLockedToNeck = value; }
		bool L_0 = ___value0;
		__this->set_m_IsLockedToNeck_12(L_0);
		// set { m_IsLockedToNeck = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_neckPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_neckPosition_m7AB5D0B28444C4644ED070593C9A1119B3559F4E (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_NeckPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NeckPosition_13();
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_shoulderPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_shoulderPosition_m0A978A114AA0BCB2724D6016E1548410F9DDBA20 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 retVal = m_NeckPosition + m_TorsoRotation * Vector3.Scale(SHOULDER_POSITION, m_HandedMultiplier);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NeckPosition_13();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_m_TorsoRotation_22();
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->get_SHOULDER_POSITION_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_m_HandedMultiplier_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_1, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_0, L_5, /*hidden argument*/NULL);
		// return retVal;
		return L_6;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_shoulderRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_shoulderRotation_mAEB67170B2BAFE80A3C93A04EDC32E68DA5B8974 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_TorsoRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_TorsoRotation_22();
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_elbowPosition_mB06B4A55ACA99791DD41938F76F914DDAC6160D6 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_ElbowPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_ElbowPosition_14();
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_elbowRotation_m694DC54C551C395942832D32C7FBC645B03DFAEC (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_ElbowRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_ElbowRotation_15();
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_wristPosition_m6AB615CFA8D0D5F8E340C0CD3466F1907EB4AFF4 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_WristPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_WristPosition_16();
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_wristRotation_mA2C7EBD9E3CC05C48E5AE0784DEEF2DF4B4DC9EB (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_WristRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_WristRotation_17();
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_controllerPosition_m187EEFE85902AB00B2F2B51638CABE5B66F93112 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_ControllerPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_ControllerPosition_18();
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_controllerRotation_mFC37272A3E9E5469B9FEF4BCE020880E8DE608F2 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_ControllerRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_ControllerRotation_19();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_OnEnable_m39FF3E1BDB061878F86566A26A03E5562E2B6614 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// UpdateTorsoDirection(true);
		bool L_0;
		L_0 = VirtFuncInvoker1< bool, bool >::Invoke(10 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateTorsoDirection(System.Boolean) */, __this, (bool)1);
		// OnControllerInputUpdated();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_OnDisable_mA8EFA70A161AC49A9CB449A17F766363F74BC344 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_OnControllerInputUpdated_m6C82F231CF81EA40D6CA6A08550612BA722690A7 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// UpdateHandedness();
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateHandedness() */, __this);
		// if (UpdateTorsoDirection(false))
		bool L_0;
		L_0 = VirtFuncInvoker1< bool, bool >::Invoke(10 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateTorsoDirection(System.Boolean) */, __this, (bool)0);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (UpdateNeckPosition())
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateNeckPosition() */, __this);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// if (ApplyArmModel())
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyArmModel() */, __this);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_UpdateHandedness_mB3C9C97CB32DF33CED75284205A55FF2EFBF1CFE (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// m_HandedMultiplier.Set(0, 1, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_m_HandedMultiplier_20();
		Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		// if (m_PoseSource == XRNode.RightHand || m_PoseSource == XRNode.TrackingReference)
		int32_t L_1 = __this->get_m_PoseSource_5();
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = __this->get_m_PoseSource_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_003d;
		}
	}

IL_002c:
	{
		// m_HandedMultiplier.x = 1.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_m_HandedMultiplier_20();
		L_3->set_x_2((1.0f));
		// }
		return;
	}

IL_003d:
	{
		// else if (m_PoseSource == XRNode.LeftHand)
		int32_t L_4 = __this->get_m_PoseSource_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0056;
		}
	}
	{
		// m_HandedMultiplier.x = -1.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_m_HandedMultiplier_20();
		L_5->set_x_2((-1.0f));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateTorsoDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_UpdateTorsoDirection_m25A68842AD878EDA68F946E99537989841F4F759 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, bool ___forceImmediate0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Vector3 gazeDirection = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (TryGetForwardVector(m_HeadPoseSource, out gazeDirection))
		int32_t L_0 = __this->get_m_HeadPoseSource_6();
		bool L_1;
		L_1 = ArmModel_TryGetForwardVector_m42833245C2F7C3F9448F510DB7E989D5E2C26001(__this, L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		// gazeDirection.y = 0.0f;
		(&V_0)->set_y_3((0.0f));
		// gazeDirection.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// if (forceImmediate)
		bool L_2 = ___forceImmediate0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// m_TorsoDirection = gazeDirection;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		__this->set_m_TorsoDirection_21(L_3);
		// }
		goto IL_007d;
	}

IL_0037:
	{
		// if (TryGetAngularAcceleration(poseSource, out angAccel))
		int32_t L_4;
		L_4 = ArmModel_get_poseSource_m84039586AC07D778F5437D3796F46253EC6ABC74_inline(__this, /*hidden argument*/NULL);
		bool L_5;
		L_5 = ArmModel_TryGetAngularAcceleration_mBDA9F6653C5444DC26819BAD7CD585F4C061DE2F(__this, L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// float angularVelocity = angAccel.magnitude;
		float L_6;
		L_6 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		// float gazeFilterStrength = Mathf.Clamp((angularVelocity - 0.2f) / 45.0f, 0.0f, 0.1f);
		float L_7;
		L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)((float)il2cpp_codegen_subtract((float)L_6, (float)(0.200000003f)))/(float)(45.0f))), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		V_2 = L_7;
		// m_TorsoDirection = Vector3.Slerp(m_TorsoDirection, gazeDirection, gazeFilterStrength);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_m_TorsoDirection_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B(L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set_m_TorsoDirection_21(L_11);
	}

IL_007d:
	{
		// m_TorsoRotation = Quaternion.FromToRotation(Vector3.forward, m_TorsoDirection);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_m_TorsoDirection_21();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_12, L_13, /*hidden argument*/NULL);
		__this->set_m_TorsoRotation_22(L_14);
		// return true;
		return (bool)1;
	}

IL_0095:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateNeckPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_UpdateNeckPosition_m13761ADADF2C5103C53473BAA8D03D8D7D06861E (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// if (m_IsLockedToNeck && TryGetPosition(m_HeadPoseSource, out m_NeckPosition))
		bool L_0 = __this->get_m_IsLockedToNeck_12();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = __this->get_m_HeadPoseSource_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_m_NeckPosition_13();
		bool L_3;
		L_3 = ArmModel_TryGetPosition_mBCBB13FD079245233A79004B0EFC506D0AC6CC4B(__this, L_1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// return ApplyInverseNeckModel(m_NeckPosition, out m_NeckPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_m_NeckPosition_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_m_NeckPosition_13();
		bool L_6;
		L_6 = VirtFuncInvoker2< bool, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * >::Invoke(19 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyInverseNeckModel(UnityEngine.Vector3,UnityEngine.Vector3&) */, __this, L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5);
		return L_6;
	}

IL_002f:
	{
		// m_NeckPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_NeckPosition_13(L_7);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyArmModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_ApplyArmModel_m8B509C4280F65372484F2097EE9F1063E6C5C274 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// SetUntransformedJointPositions();
		VirtActionInvoker0::Invoke(13 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::SetUntransformedJointPositions() */, __this);
		// if (GetControllerRotation(out controllerOrientation, out xyRotation, out xAngle))
		bool L_0;
		L_0 = ArmModel_GetControllerRotation_m32763A271F2ECF876581A14F77B30DE6B3559B34(__this, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_1), (float*)(&V_2), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		// float extensionRatio = CalculateExtensionRatio(xAngle);
		float L_1 = V_2;
		float L_2;
		L_2 = VirtFuncInvoker1< float, float >::Invoke(14 /* System.Single UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateExtensionRatio(System.Single) */, __this, L_1);
		V_3 = L_2;
		// ApplyExtensionOffset(extensionRatio);
		float L_3 = V_3;
		VirtActionInvoker1< float >::Invoke(15 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyExtensionOffset(System.Single) */, __this, L_3);
		// Quaternion lerpRotation = CalculateLerpRotation(xyRotation, extensionRatio);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = V_1;
		float L_5 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = VirtFuncInvoker2< Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , float >::Invoke(16 /* UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateLerpRotation(UnityEngine.Quaternion,System.Single) */, __this, L_4, L_5);
		V_4 = L_6;
		// CalculateFinalJointRotations(controllerOrientation, xyRotation, lerpRotation);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = V_4;
		VirtActionInvoker3< Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(17 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateFinalJointRotations(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion) */, __this, L_7, L_8, L_9);
		// ApplyRotationToJoints();
		VirtActionInvoker0::Invoke(18 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyRotationToJoints() */, __this);
		// m_FinalPose.position = m_ControllerPosition;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_10 = __this->get_address_of_m_FinalPose_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_m_ControllerPosition_18();
		L_10->set_position_0(L_11);
		// m_FinalPose.rotation = m_ControllerRotation;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_12 = __this->get_address_of_m_FinalPose_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = __this->get_m_ControllerRotation_19();
		L_12->set_rotation_1(L_13);
		// return true;
		return (bool)1;
	}

IL_0061:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::SetUntransformedJointPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_SetUntransformedJointPositions_m63C9D593206C77506DEF2BD6EA985856B772B790 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// m_ElbowPosition = Vector3.Scale(m_ElbowRestPosition, m_HandedMultiplier);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_ElbowRestPosition_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_m_HandedMultiplier_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_ElbowPosition_14(L_2);
		// m_WristPosition = Vector3.Scale(m_WristRestPosition, m_HandedMultiplier);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_m_WristRestPosition_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_m_HandedMultiplier_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_WristPosition_16(L_5);
		// m_ControllerPosition = Vector3.Scale(m_ControllerRestPosition, m_HandedMultiplier);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_m_ControllerRestPosition_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_m_HandedMultiplier_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_ControllerPosition_18(L_8);
		// }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateExtensionRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArmModel_CalculateExtensionRatio_m7351F5497E63485DF72EF17F2E1056B085CEE963 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, float ___xAngle0, const RuntimeMethod* method)
{
	{
		// float normalizedAngle = (xAngle - MIN_EXTENSION_ANGLE) / (MAX_EXTENSION_ANGLE - MIN_EXTENSION_ANGLE);
		float L_0 = ___xAngle0;
		// float extensionRatio = Mathf.Clamp(normalizedAngle, 0.0f, 1.0f);
		float L_1;
		L_1 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)((float)il2cpp_codegen_subtract((float)L_0, (float)(7.0f)))/(float)(53.0f))), (0.0f), (1.0f), /*hidden argument*/NULL);
		// return extensionRatio;
		return L_1;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyExtensionOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_ApplyExtensionOffset_mE5F6781F03F3C3EB1060DBF419FA2CB99D0C93CA (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, float ___extensionRatio0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 extensionOffset = Vector3.Scale(m_ArmExtensionOffset, m_HandedMultiplier);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_ArmExtensionOffset_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_m_HandedMultiplier_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// m_ElbowPosition += extensionOffset * extensionRatio;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_m_ElbowPosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		float L_5 = ___extensionRatio0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_6, /*hidden argument*/NULL);
		__this->set_m_ElbowPosition_14(L_7);
		// }
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateLerpRotation(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_CalculateLerpRotation_m5D238D5AB50C44A065E3DBFB711B80AF083F332F (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___xyRotation0, float ___extensionRatio1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float totalAngle = Quaternion.Angle(xyRotation, Quaternion.identity);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___xyRotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		float L_2;
		L_2 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float lerpSuppresion = 1.0f - Mathf.Pow(totalAngle / 180.0f, 6.0f);
		float L_3 = V_0;
		float L_4;
		L_4 = powf(((float)((float)L_3/(float)(180.0f))), (6.0f));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4));
		// float inverseElbowBendRatio = 1.0f - m_ElbowBendRatio;
		float L_5 = __this->get_m_ElbowBendRatio_11();
		// float lerpValue = inverseElbowBendRatio + m_ElbowBendRatio * extensionRatio * EXTENSION_WEIGHT;
		float L_6 = __this->get_m_ElbowBendRatio_11();
		float L_7 = ___extensionRatio1;
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (float)(0.400000006f)))));
		// lerpValue *= lerpSuppresion;
		float L_8 = V_2;
		float L_9 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9));
		// return Quaternion.Lerp(Quaternion.identity, xyRotation, lerpValue);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = ___xyRotation0;
		float L_12 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateFinalJointRotations(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_CalculateFinalJointRotations_m0F09D47C09AA4611022A978961F71DCEDCC39FFC (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___controllerOrientation0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___xyRotation1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lerpRotation2, const RuntimeMethod* method)
{
	{
		// m_ElbowRotation = m_TorsoRotation * Quaternion.Inverse(lerpRotation) * xyRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_TorsoRotation_22();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___lerpRotation2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_0, L_2, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___xyRotation1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_ElbowRotation_15(L_5);
		// m_WristRotation = m_ElbowRotation * lerpRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = __this->get_m_ElbowRotation_15();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = ___lerpRotation2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_WristRotation_17(L_8);
		// m_ControllerRotation = m_TorsoRotation * controllerOrientation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = __this->get_m_TorsoRotation_22();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = ___controllerOrientation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_9, L_10, /*hidden argument*/NULL);
		__this->set_m_ControllerRotation_19(L_11);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyRotationToJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_ApplyRotationToJoints_mAC7A456E1FD133420F6492F5710C0B3A4E3418F3 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// m_ElbowPosition = m_NeckPosition + m_TorsoRotation * m_ElbowPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NeckPosition_13();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_m_TorsoRotation_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_m_ElbowPosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_0, L_3, /*hidden argument*/NULL);
		__this->set_m_ElbowPosition_14(L_4);
		// m_WristPosition = m_ElbowPosition + m_ElbowRotation * m_WristPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_m_ElbowPosition_14();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = __this->get_m_ElbowRotation_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_m_WristPosition_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_6, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_8, /*hidden argument*/NULL);
		__this->set_m_WristPosition_16(L_9);
		// m_ControllerPosition = m_WristPosition + m_WristRotation * m_ControllerPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_m_WristPosition_16();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = __this->get_m_WristRotation_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_m_ControllerPosition_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_11, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_13, /*hidden argument*/NULL);
		__this->set_m_ControllerPosition_18(L_14);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyInverseNeckModel(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_ApplyInverseNeckModel_m68AA8230BEEBBA507628CB46D273BA1332EE696F (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___headPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___calculatedPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Quaternion headRotation = new Quaternion();
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// if (TryGetRotation(m_HeadPoseSource, out headRotation))
		int32_t L_0 = __this->get_m_HeadPoseSource_6();
		bool L_1;
		L_1 = ArmModel_TryGetRotation_mCEFAACBA376CA7CCA7D0A81E97AE5D60D2EFE04E(__this, L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// Vector3 rotatedNeckOffset =
		//     headRotation * NECK_OFFSET - NECK_OFFSET.y * Vector3.up;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->get_NECK_OFFSET_30();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = (((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->get_address_of_NECK_OFFSET_30())->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// headPosition -= rotatedNeckOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___headPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_10, /*hidden argument*/NULL);
		___headPosition0 = L_11;
		// calculatedPosition = headPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = ___calculatedPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___headPosition0;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_12 = L_13;
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// calculatedPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = ___calculatedPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_14 = L_15;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetForwardVector(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetForwardVector_m42833245C2F7C3F9448F510DB7E989D5E2C26001 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___forward1, const RuntimeMethod* method)
{
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Pose tmpPose = new Pose();
		il2cpp_codegen_initobj((&V_0), sizeof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A ));
		// if (TryGetRotation(node, out tmpPose.rotation) &&
		//     TryGetPosition(node, out tmpPose.position))
		int32_t L_0 = ___node0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_1 = (&V_0)->get_address_of_rotation_1();
		bool L_2;
		L_2 = ArmModel_TryGetRotation_mCEFAACBA376CA7CCA7D0A81E97AE5D60D2EFE04E(__this, L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3 = ___node0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = (&V_0)->get_address_of_position_0();
		bool L_5;
		L_5 = ArmModel_TryGetPosition_mBCBB13FD079245233A79004B0EFC506D0AC6CC4B(__this, L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// forward = tmpPose.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = ___forward1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Pose_get_forward_m787B1806F476B8CB6EBA26ACB644430606248C42((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)(&V_0), /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_6 = L_7;
		// return true;
		return (bool)1;
	}

IL_0037:
	{
		// forward = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = ___forward1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_8 = L_9;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetRotation(UnityEngine.XR.XRNode,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetRotation_mCEFAACBA376CA7CCA7D0A81E97AE5D60D2EFE04E (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// XR.InputTracking.GetNodeStates(xrNodeStateListOrientation);
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_0 = __this->get_xrNodeStateListOrientation_33();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880(L_0, /*hidden argument*/NULL);
		// var length = xrNodeStateListOrientation.Count;
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_1 = __this->get_xrNodeStateListOrientation_33();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_inline(L_1, /*hidden argument*/List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < length; ++i)
		V_2 = 0;
		goto IL_0042;
	}

IL_001b:
	{
		// nodeState = xrNodeStateListOrientation[i];
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_3 = __this->get_xrNodeStateListOrientation_33();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  L_5;
		L_5 = List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_RuntimeMethod_var);
		V_1 = L_5;
		// if (nodeState.nodeType == node)
		int32_t L_6;
		L_6 = XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = ___node0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// if (nodeState.TryGetRotation(out rotation))
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_8 = ___rotation1;
		bool L_9;
		L_9 = XRNodeState_TryGetRotation_m8BAEDDA0A2400A884686860FEB40F5B0CAC34A3B((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// rotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_13 = ___rotation1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_13 = L_14;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetPosition(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetPosition_mBCBB13FD079245233A79004B0EFC506D0AC6CC4B (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// XR.InputTracking.GetNodeStates(xrNodeStateListPosition);
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_0 = __this->get_xrNodeStateListPosition_34();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880(L_0, /*hidden argument*/NULL);
		// var length = xrNodeStateListPosition.Count;
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_1 = __this->get_xrNodeStateListPosition_34();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_inline(L_1, /*hidden argument*/List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < length; ++i)
		V_2 = 0;
		goto IL_0042;
	}

IL_001b:
	{
		// nodeState = xrNodeStateListPosition[i];
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_3 = __this->get_xrNodeStateListPosition_34();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  L_5;
		L_5 = List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_RuntimeMethod_var);
		V_1 = L_5;
		// if (nodeState.nodeType == node)
		int32_t L_6;
		L_6 = XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = ___node0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// if (nodeState.TryGetPosition(out position))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = ___position1;
		bool L_9;
		L_9 = XRNodeState_TryGetPosition_m7526637E83DA923CCEB8590D0E342DFC8A546415((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// position = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = ___position1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_13 = L_14;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetAngularAcceleration(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetAngularAcceleration_mBDA9F6653C5444DC26819BAD7CD585F4C061DE2F (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularAccel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// XR.InputTracking.GetNodeStates(xrNodeStateListAngularAcceleration);
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_0 = __this->get_xrNodeStateListAngularAcceleration_35();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880(L_0, /*hidden argument*/NULL);
		// var length = xrNodeStateListAngularAcceleration.Count;
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_1 = __this->get_xrNodeStateListAngularAcceleration_35();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_inline(L_1, /*hidden argument*/List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < length; ++i)
		V_2 = 0;
		goto IL_0042;
	}

IL_001b:
	{
		// nodeState = xrNodeStateListAngularAcceleration[i];
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_3 = __this->get_xrNodeStateListAngularAcceleration_35();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  L_5;
		L_5 = List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_RuntimeMethod_var);
		V_1 = L_5;
		// if (nodeState.nodeType == node)
		int32_t L_6;
		L_6 = XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = ___node0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// if (nodeState.TryGetAngularAcceleration(out angularAccel))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = ___angularAccel1;
		bool L_9;
		L_9 = XRNodeState_TryGetAngularAcceleration_mC204326494FCE12A491C1CBC15B4264BC45F648A((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// angularAccel = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = ___angularAccel1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_13 = L_14;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetAngularVelocity(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetAngularVelocity_mF9033461C646DB5C4E16EE83FBC72D4A8BB38A9E (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, int32_t ___node0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angVel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// XR.InputTracking.GetNodeStates(xrNodeStateListAngularVelocity);
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_0 = __this->get_xrNodeStateListAngularVelocity_36();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880(L_0, /*hidden argument*/NULL);
		// var length = xrNodeStateListAngularVelocity.Count;
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_1 = __this->get_xrNodeStateListAngularVelocity_36();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_inline(L_1, /*hidden argument*/List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < length; ++i)
		V_2 = 0;
		goto IL_0042;
	}

IL_001b:
	{
		// nodeState = xrNodeStateListAngularVelocity[i];
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_3 = __this->get_xrNodeStateListAngularVelocity_36();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  L_5;
		L_5 = List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_RuntimeMethod_var);
		V_1 = L_5;
		// if (nodeState.nodeType == node)
		int32_t L_6;
		L_6 = XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = ___node0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// if (nodeState.TryGetAngularVelocity(out angVel))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = ___angVel1;
		bool L_9;
		L_9 = XRNodeState_TryGetAngularVelocity_m7F331B0AC7E1C29AB4279DDAE8A0C7BA9973E686((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// angVel = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = ___angVel1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_13 = L_14;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::GetControllerRotation(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_GetControllerRotation_m32763A271F2ECF876581A14F77B30DE6B3559B34 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___xyRotation1, float* ___xAngle2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TryGetRotation(poseSource, out rotation))
		int32_t L_0;
		L_0 = ArmModel_get_poseSource_m84039586AC07D778F5437D3796F46253EC6ABC74_inline(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_1 = ___rotation0;
		bool L_2;
		L_2 = ArmModel_TryGetRotation_mCEFAACBA376CA7CCA7D0A81E97AE5D60D2EFE04E(__this, L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		// rotation = Quaternion.Inverse(m_TorsoRotation) * rotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_3 = ___rotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = __this->get_m_TorsoRotation_22();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_4, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_6 = ___rotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_5, L_7, /*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_3 = L_8;
		// Vector3 controllerForward = rotation * Vector3.forward;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_9 = ___rotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// xAngle = 90.0f - Vector3.Angle(controllerForward, Vector3.up);
		float* L_13 = ___xAngle2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_16;
		L_16 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_14, L_15, /*hidden argument*/NULL);
		*((float*)L_13) = (float)((float)il2cpp_codegen_subtract((float)(90.0f), (float)L_16));
		// xyRotation = Quaternion.FromToRotation(Vector3.forward, controllerForward);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_17 = ___xyRotation1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_18, L_19, /*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_17 = L_20;
		// return true;
		return (bool)1;
	}

IL_0062:
	{
		// rotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_21 = ___rotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_21 = L_22;
		// xyRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_23 = ___xyRotation1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_23 = L_24;
		// xAngle = 0.0f;
		float* L_25 = ___xAngle2;
		*((float*)L_25) = (float)(0.0f);
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel__ctor_m2003B5629B882463C5D15B4896E44FDEB28C0882 (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRNode m_PoseSource = XRNode.LeftHand;
		__this->set_m_PoseSource_5(4);
		// XRNode m_HeadPoseSource = XRNode.CenterEye;
		__this->set_m_HeadPoseSource_6(2);
		// Vector3 m_ElbowRestPosition = DEFAULT_ELBOW_REST_POSITION;
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->get_DEFAULT_ELBOW_REST_POSITION_23();
		__this->set_m_ElbowRestPosition_7(L_0);
		// Vector3 m_WristRestPosition = DEFAULT_WRIST_REST_POSITION;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->get_DEFAULT_WRIST_REST_POSITION_24();
		__this->set_m_WristRestPosition_8(L_1);
		// Vector3 m_ControllerRestPosition = DEFAULT_CONTROLLER_REST_POSITION;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->get_DEFAULT_CONTROLLER_REST_POSITION_25();
		__this->set_m_ControllerRestPosition_9(L_2);
		// Vector3 m_ArmExtensionOffset = DEFAULT_ARM_EXTENSION_OFFSET;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->get_DEFAULT_ARM_EXTENSION_OFFSET_26();
		__this->set_m_ArmExtensionOffset_10(L_3);
		// float m_ElbowBendRatio = DEFAULT_ELBOW_BEND_RATIO;
		__this->set_m_ElbowBendRatio_11((0.600000024f));
		// bool m_IsLockedToNeck = true;
		__this->set_m_IsLockedToNeck_12((bool)1);
		// List<XR.XRNodeState> xrNodeStateListOrientation = new List<XRNodeState>();
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_4 = (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *)il2cpp_codegen_object_new(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_il2cpp_TypeInfo_var);
		List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B(L_4, /*hidden argument*/List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_RuntimeMethod_var);
		__this->set_xrNodeStateListOrientation_33(L_4);
		// List<XR.XRNodeState> xrNodeStateListPosition = new List<XRNodeState>();
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_5 = (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *)il2cpp_codegen_object_new(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_il2cpp_TypeInfo_var);
		List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B(L_5, /*hidden argument*/List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_RuntimeMethod_var);
		__this->set_xrNodeStateListPosition_34(L_5);
		// List<XR.XRNodeState> xrNodeStateListAngularAcceleration = new List<XRNodeState>();
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_6 = (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *)il2cpp_codegen_object_new(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_il2cpp_TypeInfo_var);
		List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B(L_6, /*hidden argument*/List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_RuntimeMethod_var);
		__this->set_xrNodeStateListAngularAcceleration_35(L_6);
		// List<XR.XRNodeState> xrNodeStateListAngularVelocity = new List<XRNodeState>();
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_7 = (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *)il2cpp_codegen_object_new(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_il2cpp_TypeInfo_var);
		List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B(L_7, /*hidden argument*/List_1__ctor_m4019848F190800D1255B127B3D2231477C25961B_RuntimeMethod_var);
		__this->set_xrNodeStateListAngularVelocity_36(L_7);
		BasePoseProvider__ctor_mA49C4326450EE089736886D0337B7EC91B1C39C8(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel__cctor_mD1B427F2AA57EA6E58282FD7567DAAF1213DB6EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly Vector3 DEFAULT_ELBOW_REST_POSITION = new Vector3(0.195f, -0.5f, 0.005f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.194999993f), (-0.5f), (0.00499999989f), /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->set_DEFAULT_ELBOW_REST_POSITION_23(L_0);
		// protected static readonly Vector3 DEFAULT_WRIST_REST_POSITION = new Vector3(0.0f, 0.0f, 0.25f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (0.0f), (0.25f), /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->set_DEFAULT_WRIST_REST_POSITION_24(L_1);
		// protected static readonly Vector3 DEFAULT_CONTROLLER_REST_POSITION = new Vector3(0.0f, 0.0f, 0.05f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.0500000007f), /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->set_DEFAULT_CONTROLLER_REST_POSITION_25(L_2);
		// protected static readonly Vector3 DEFAULT_ARM_EXTENSION_OFFSET = new Vector3(-0.13f, 0.14f, 0.08f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (-0.129999995f), (0.140000001f), (0.0799999982f), /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->set_DEFAULT_ARM_EXTENSION_OFFSET_26(L_3);
		// protected static readonly Vector3 SHOULDER_POSITION = new Vector3(0.17f, -0.2f, -0.03f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.170000002f), (-0.200000003f), (-0.0299999993f), /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->set_SHOULDER_POSITION_29(L_4);
		// protected static readonly Vector3 NECK_OFFSET = new Vector3(0.0f, 0.075f, 0.08f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (0.075000003f), (0.0799999982f), /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var))->set_NECK_OFFSET_30(L_5);
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
// System.String UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::get_transitionKeyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArmModelTransition_get_transitionKeyName_m8F9574FC513145510CDFD1CDFE6704B9433F886D (ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_KeyName; }
		String_t* L_0 = __this->get_m_KeyName_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::set_transitionKeyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModelTransition_set_transitionKeyName_m97FB4788C5161B808EAB19890005EA9254C33969 (ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { m_KeyName = value; }
		String_t* L_0 = ___value0;
		__this->set_m_KeyName_0(L_0);
		// set { m_KeyName = value; }
		return;
	}
}
// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::get_armModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ArmModelTransition_get_armModel_m4DCA2E0C66A14ACC9ACBE847EA418EC06B8D15FC (ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ArmModel; }
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_0 = __this->get_m_ArmModel_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::set_armModel(UnityEngine.XR.LegacyInputHelpers.ArmModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModelTransition_set_armModel_m30573C626B7146EA14659109D3BBBF4B7B53DDE8 (ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * __this, ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ArmModel = value; }
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_0 = ___value0;
		__this->set_m_ArmModel_1(L_0);
		// set { m_ArmModel = value; }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModelTransition__ctor_m49D6B9E5A0A0BAC5308F131E6EB9E656446F2E18 (ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.GameObject UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_cameraFloorOffsetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * CameraOffset_get_cameraFloorOffsetObject_mB09884CDA48FA68129784113A9B8C3E3DC20810F (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// public GameObject cameraFloorOffsetObject { get { return m_CameraFloorOffsetObject; } set { m_CameraFloorOffsetObject = value; SetupCamera(); } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CameraFloorOffsetObject_5();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_cameraFloorOffsetObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_cameraFloorOffsetObject_m9353D5A51CB83958F777F66EE2D83B9A5CFC6BF6 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject cameraFloorOffsetObject { get { return m_CameraFloorOffsetObject; } set { m_CameraFloorOffsetObject = value; SetupCamera(); } }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_m_CameraFloorOffsetObject_5(L_0);
		// public GameObject cameraFloorOffsetObject { get { return m_CameraFloorOffsetObject; } set { m_CameraFloorOffsetObject = value; SetupCamera(); } }
		bool L_1;
		L_1 = CameraOffset_SetupCamera_mDF4F84CA4089903AF5FDFF76D78577F3AFCD5C4F(__this, /*hidden argument*/NULL);
		// public GameObject cameraFloorOffsetObject { get { return m_CameraFloorOffsetObject; } set { m_CameraFloorOffsetObject = value; SetupCamera(); } }
		return;
	}
}
// UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraOffset_get_requestedTrackingMode_m3CDAFE2EC146826468DF95D31881F1EA0F929E1A (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// public UserRequestedTrackingMode requestedTrackingMode { get { return m_RequestedTrackingMode; } set { m_RequestedTrackingMode = value; TryInitializeCamera(); } }
		int32_t L_0 = __this->get_m_RequestedTrackingMode_6();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_requestedTrackingMode(UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_requestedTrackingMode_m80537846A6D07A8E499B9D62ADA9E73D94E11635 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public UserRequestedTrackingMode requestedTrackingMode { get { return m_RequestedTrackingMode; } set { m_RequestedTrackingMode = value; TryInitializeCamera(); } }
		int32_t L_0 = ___value0;
		__this->set_m_RequestedTrackingMode_6(L_0);
		// public UserRequestedTrackingMode requestedTrackingMode { get { return m_RequestedTrackingMode; } set { m_RequestedTrackingMode = value; TryInitializeCamera(); } }
		CameraOffset_TryInitializeCamera_mF0078D5220B802D7382B6CB339251253695D20B9(__this, /*hidden argument*/NULL);
		// public UserRequestedTrackingMode requestedTrackingMode { get { return m_RequestedTrackingMode; } set { m_RequestedTrackingMode = value; TryInitializeCamera(); } }
		return;
	}
}
// UnityEngine.XR.TrackingOriginModeFlags UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_TrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraOffset_get_TrackingOriginMode_m5AB3F01157FF0E469DD3DF58B09D60CAB9D74609 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// public TrackingOriginModeFlags TrackingOriginMode { get { return m_TrackingOriginMode; } set { m_TrackingOriginMode = value; TryInitializeCamera(); } }
		int32_t L_0 = __this->get_m_TrackingOriginMode_7();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_TrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_TrackingOriginMode_m73C3272AA25FB4FFC7A8942CA88684F280A19799 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingOriginModeFlags TrackingOriginMode { get { return m_TrackingOriginMode; } set { m_TrackingOriginMode = value; TryInitializeCamera(); } }
		int32_t L_0 = ___value0;
		__this->set_m_TrackingOriginMode_7(L_0);
		// public TrackingOriginModeFlags TrackingOriginMode { get { return m_TrackingOriginMode; } set { m_TrackingOriginMode = value; TryInitializeCamera(); } }
		CameraOffset_TryInitializeCamera_mF0078D5220B802D7382B6CB339251253695D20B9(__this, /*hidden argument*/NULL);
		// public TrackingOriginModeFlags TrackingOriginMode { get { return m_TrackingOriginMode; } set { m_TrackingOriginMode = value; TryInitializeCamera(); } }
		return;
	}
}
// UnityEngine.XR.TrackingSpaceType UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_trackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraOffset_get_trackingSpace_m4DCC3FD42998CC07E4B3C534C9EB61E019E1472F (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// public TrackingSpaceType trackingSpace { get { return m_TrackingSpace; } set { m_TrackingSpace = value; TryInitializeCamera(); } }
		int32_t L_0 = __this->get_m_TrackingSpace_8();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_trackingSpace(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_trackingSpace_mD8D35976B752E4334088DEEEE17994234C613687 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingSpaceType trackingSpace { get { return m_TrackingSpace; } set { m_TrackingSpace = value; TryInitializeCamera(); } }
		int32_t L_0 = ___value0;
		__this->set_m_TrackingSpace_8(L_0);
		// public TrackingSpaceType trackingSpace { get { return m_TrackingSpace; } set { m_TrackingSpace = value; TryInitializeCamera(); } }
		CameraOffset_TryInitializeCamera_mF0078D5220B802D7382B6CB339251253695D20B9(__this, /*hidden argument*/NULL);
		// public TrackingSpaceType trackingSpace { get { return m_TrackingSpace; } set { m_TrackingSpace = value; TryInitializeCamera(); } }
		return;
	}
}
// System.Single UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_cameraYOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOffset_get_cameraYOffset_m7512CDD033A17800B8066B34E9CEA9B0DB24A110 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		float L_0 = __this->get_m_CameraYOffset_9();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_cameraYOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_cameraYOffset_mA10EFE21CD1F86D73C11F69F69D135F3D4AD3B65 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		float L_0 = ___value0;
		__this->set_m_CameraYOffset_9(L_0);
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		CameraOffset_TryInitializeCamera_mF0078D5220B802D7382B6CB339251253695D20B9(__this, /*hidden argument*/NULL);
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::UpgradeTrackingSpaceToTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_UpgradeTrackingSpaceToTrackingOriginMode_m285A3BF1B64DF62963410389FFD1994A27A6B705 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (m_TrackingOriginMode == TrackingOriginModeFlags.Unknown && m_TrackingSpace <= TrackingSpaceType.RoomScale)
		int32_t L_0 = __this->get_m_TrackingOriginMode_7();
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1 = __this->get_m_TrackingSpace_8();
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		// switch (m_TrackingSpace)
		int32_t L_2 = __this->get_m_TrackingSpace_8();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		// m_TrackingOriginMode = TrackingOriginModeFlags.Floor;
		__this->set_m_TrackingOriginMode_7(2);
		// break;
		goto IL_002f;
	}

IL_0028:
	{
		// m_TrackingOriginMode = TrackingOriginModeFlags.Device;
		__this->set_m_TrackingOriginMode_7(1);
	}

IL_002f:
	{
		// m_TrackingSpace = (TrackingSpaceType)3;
		__this->set_m_TrackingSpace_8(3);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_Awake_m9596245AC76549F74A6611D8277A977DA918475E (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95DB82DC86177C27DB13234A1522012D9D5ACCF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_CameraFloorOffsetObject)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CameraFloorOffsetObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogWarning("No camera container specified for XR Rig, using attached GameObject");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral95DB82DC86177C27DB13234A1522012D9D5ACCF4, /*hidden argument*/NULL);
		// m_CameraFloorOffsetObject = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		__this->set_m_CameraFloorOffsetObject_5(L_2);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_Start_mC4088C844EC8B0C1444C2B7C7F7E7D98E576963D (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// TryInitializeCamera();
		CameraOffset_TryInitializeCamera_mF0078D5220B802D7382B6CB339251253695D20B9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_OnValidate_m31FABBAB8096B876029E2A7FB97D4442053CB69E (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// UpgradeTrackingSpaceToTrackingOriginMode();
		CameraOffset_UpgradeTrackingSpaceToTrackingOriginMode_m285A3BF1B64DF62963410389FFD1994A27A6B705(__this, /*hidden argument*/NULL);
		// TryInitializeCamera();
		CameraOffset_TryInitializeCamera_mF0078D5220B802D7382B6CB339251253695D20B9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::TryInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_TryInitializeCamera_mF0078D5220B802D7382B6CB339251253695D20B9 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// m_CameraInitialized = SetupCamera();
		bool L_0;
		L_0 = CameraOffset_SetupCamera_mDF4F84CA4089903AF5FDFF76D78577F3AFCD5C4F(__this, /*hidden argument*/NULL);
		__this->set_m_CameraInitialized_10(L_0);
		// if (!m_CameraInitialized & !m_CameraInitializing)
		bool L_1 = __this->get_m_CameraInitialized_10();
		bool L_2 = __this->get_m_CameraInitializing_11();
		if (!((int32_t)((int32_t)((((int32_t)L_1) == ((int32_t)0))? 1 : 0)&(int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_002e;
		}
	}
	{
		// StartCoroutine(RepeatInitializeCamera());
		RuntimeObject* L_3;
		L_3 = CameraOffset_RepeatInitializeCamera_mA2B8D1BECE2AF91F818754912D630151CC302DA6(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityEditor.XR.LegacyInputHelpers.CameraOffset::RepeatInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraOffset_RepeatInitializeCamera_mA2B8D1BECE2AF91F818754912D630151CC302DA6 (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 * L_0 = (U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 *)il2cpp_codegen_object_new(U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078_il2cpp_TypeInfo_var);
		U3CRepeatInitializeCameraU3Ed__29__ctor_mE3AA58806DBC43782A94DE7F1C76267364B4D5C3(L_0, 0, /*hidden argument*/NULL);
		U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraOffset_SetupCamera_mDF4F84CA4089903AF5FDFF76D78577F3AFCD5C4F (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// SubsystemManager.GetInstances<XRInputSubsystem>(s_InputSubsystems);
		IL2CPP_RUNTIME_CLASS_INIT(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = ((CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_12();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6(L_0, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m5C3A696920382F670DF10725583991DB812C19C6_RuntimeMethod_var);
		// bool initialized = true;
		V_0 = (bool)1;
		// if (s_InputSubsystems.Count != 0)
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_1 = ((CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_12();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline(L_1, /*hidden argument*/List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		V_1 = 0;
		goto IL_0034;
	}

IL_001c:
	{
		// initialized &= SetupCamera(s_InputSubsystems[i]);
		bool L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_4 = ((CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_12();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_6;
		L_6 = List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mD52C86A45BE777EC53D52B29017442705B6B32EC_RuntimeMethod_var);
		bool L_7;
		L_7 = CameraOffset_SetupCamera_m32CA6CDAC18699DBFD913C2464AE897D3E636FFD(__this, L_6, /*hidden argument*/NULL);
		V_0 = (bool)((int32_t)((int32_t)L_3&(int32_t)L_7));
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var);
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_10 = ((CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var))->get_s_InputSubsystems_12();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_inline(L_10, /*hidden argument*/List_1_get_Count_m995E91E59AA386A796AE4F2CB7169045D4483BE5_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001c;
		}
	}
	{
		// }
		goto IL_005c;
	}

IL_0043:
	{
		// if (m_RequestedTrackingMode == UserRequestedTrackingMode.Floor)
		int32_t L_12 = __this->get_m_RequestedTrackingMode_6();
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0055;
		}
	}
	{
		// SetupCameraLegacy(TrackingSpaceType.RoomScale);
		CameraOffset_SetupCameraLegacy_mDEAE751B5994014A633CA91FF7492BD9E6B2928E(__this, 1, /*hidden argument*/NULL);
		// }
		goto IL_005c;
	}

IL_0055:
	{
		// SetupCameraLegacy(TrackingSpaceType.Stationary);
		CameraOffset_SetupCameraLegacy_mDEAE751B5994014A633CA91FF7492BD9E6B2928E(__this, 0, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// return initialized;
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCamera(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraOffset_SetupCamera_m32CA6CDAC18699DBFD913C2464AE897D3E636FFD (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___subsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1598293FDBA0A22E67679010321CEAF5A1E1861A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A7EC115E01E4D35A07E39DAF698909B94D0A006);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EE1B2C0C236AF8AFDBEF872BF1EFD45A739CF32);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (subsystem == null)
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0 = ___subsystem0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// bool trackingSettingsSet = false;
		V_0 = (bool)0;
		// float desiredOffset = cameraYOffset;
		float L_1;
		L_1 = CameraOffset_get_cameraYOffset_m7512CDD033A17800B8066B34E9CEA9B0DB24A110_inline(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// var currentMode = subsystem.GetTrackingOriginMode();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_2 = ___subsystem0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// var supportedModes = subsystem.GetSupportedTrackingOriginModes();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_4 = ___subsystem0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = XRInputSubsystem_GetSupportedTrackingOriginModes_m12EEA2E804FF03D9B82BCB2E64EA520AF0C03B36(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		// TrackingOriginModeFlags requestedMode = TrackingOriginModeFlags.Unknown;
		V_4 = 0;
		// if (m_RequestedTrackingMode == UserRequestedTrackingMode.Default)
		int32_t L_6 = __this->get_m_RequestedTrackingMode_6();
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// requestedMode = currentMode;
		int32_t L_7 = V_2;
		V_4 = L_7;
		// }
		goto IL_0052;
	}

IL_002c:
	{
		// else if(m_RequestedTrackingMode == UserRequestedTrackingMode.Device)
		int32_t L_8 = __this->get_m_RequestedTrackingMode_6();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		// requestedMode = TrackingOriginModeFlags.Device;
		V_4 = 1;
		// }
		goto IL_0052;
	}

IL_003a:
	{
		// else if (m_RequestedTrackingMode == UserRequestedTrackingMode.Floor)
		int32_t L_9 = __this->get_m_RequestedTrackingMode_6();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		// requestedMode = TrackingOriginModeFlags.Floor;
		V_4 = 2;
		// }
		goto IL_0052;
	}

IL_0048:
	{
		// Debug.LogWarning("Unknown Requested Tracking Mode");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral5A7EC115E01E4D35A07E39DAF698909B94D0A006, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// if (requestedMode == TrackingOriginModeFlags.Floor)
		int32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0088;
		}
	}
	{
		// if ((supportedModes & (TrackingOriginModeFlags.Floor | TrackingOriginModeFlags.Unknown)) == 0)
		int32_t L_11 = V_3;
		if (((int32_t)((int32_t)L_11&(int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		// Debug.LogWarning("CameraOffset.SetupCamera: Attempting to set the tracking space to Floor, but that is not supported by the SDK.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1598293FDBA0A22E67679010321CEAF5A1E1861A, /*hidden argument*/NULL);
		// m_TrackingOriginMode = subsystem.GetTrackingOriginMode();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_12 = ___subsystem0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_12, /*hidden argument*/NULL);
		__this->set_m_TrackingOriginMode_7(L_13);
		// return true;
		return (bool)1;
	}

IL_0074:
	{
		// if (subsystem.TrySetTrackingOriginMode(requestedMode))
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_14 = ___subsystem0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bb;
		}
	}
	{
		// desiredOffset = 0.0f;
		V_1 = (0.0f);
		// trackingSettingsSet = true;
		V_0 = (bool)1;
		// }
		goto IL_00bb;
	}

IL_0088:
	{
		// else if (requestedMode == TrackingOriginModeFlags.Device)
		int32_t L_17 = V_4;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00bb;
		}
	}
	{
		// if ((supportedModes & (TrackingOriginModeFlags.Device | TrackingOriginModeFlags.Unknown)) == 0)
		int32_t L_18 = V_3;
		if (((int32_t)((int32_t)L_18&(int32_t)1)))
		{
			goto IL_00aa;
		}
	}
	{
		// Debug.LogWarning("CameraOffset.SetupCamera: Attempting to set the tracking space to Device, but that is not supported by the SDK.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral9EE1B2C0C236AF8AFDBEF872BF1EFD45A739CF32, /*hidden argument*/NULL);
		// m_TrackingOriginMode = subsystem.GetTrackingOriginMode();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_19 = ___subsystem0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_19, /*hidden argument*/NULL);
		__this->set_m_TrackingOriginMode_7(L_20);
		// return true;
		return (bool)1;
	}

IL_00aa:
	{
		// if (subsystem.TrySetTrackingOriginMode(requestedMode))
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_21 = ___subsystem0;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		bool L_23;
		L_23 = XRInputSubsystem_TrySetTrackingOriginMode_m43E5453F805376A64B8337E71AED773D41C9006D(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00bb;
		}
	}
	{
		// trackingSettingsSet = subsystem.TryRecenter();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_24 = ___subsystem0;
		NullCheck(L_24);
		bool L_25;
		L_25 = XRInputSubsystem_TryRecenter_m40231564A0E1FB14CAC17F7A88B206FA2121EF5C(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
	}

IL_00bb:
	{
		// m_TrackingOriginMode = subsystem.GetTrackingOriginMode();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_26 = ___subsystem0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = XRInputSubsystem_GetTrackingOriginMode_mF204EDA603CE5410246C5F7C7125D95406A2FA04(L_26, /*hidden argument*/NULL);
		__this->set_m_TrackingOriginMode_7(L_27);
		// if (trackingSettingsSet)
		bool L_28 = V_0;
		if (!L_28)
		{
			goto IL_0117;
		}
	}
	{
		// if (m_CameraFloorOffsetObject)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_m_CameraFloorOffsetObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0117;
		}
	}
	{
		// m_CameraFloorOffsetObject.transform.localPosition = new Vector3(m_CameraFloorOffsetObject.transform.localPosition.x, desiredOffset, m_CameraFloorOffsetObject.transform.localPosition.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_x_2();
		float L_37 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), L_36, L_37, L_41, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_32, L_42, /*hidden argument*/NULL);
	}

IL_0117:
	{
		// return trackingSettingsSet;
		bool L_43 = V_0;
		return L_43;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCameraLegacy(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_SetupCameraLegacy_mDEAE751B5994014A633CA91FF7492BD9E6B2928E (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, int32_t ___trackingSpace0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float cameraYOffset = m_CameraYOffset;
		float L_0 = __this->get_m_CameraYOffset_9();
		V_0 = L_0;
		// XRDevice.SetTrackingSpaceType(trackingSpace);
		int32_t L_1 = ___trackingSpace0;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = XRDevice_SetTrackingSpaceType_m4D8F6438740E0F03326F75322863A6539949B916(L_1, /*hidden argument*/NULL);
		// if (trackingSpace == TrackingSpaceType.Stationary)
		int32_t L_3 = ___trackingSpace0;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		// InputTracking.Recenter();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		InputTracking_Recenter_m7C6E01B6C6989D6972E4C35CB98371C5652EC22E(/*hidden argument*/NULL);
		goto IL_0022;
	}

IL_0018:
	{
		// else if (trackingSpace == TrackingSpaceType.RoomScale)
		int32_t L_4 = ___trackingSpace0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// cameraYOffset = 0;
		V_0 = (0.0f);
	}

IL_0022:
	{
		// m_TrackingSpace = trackingSpace;
		int32_t L_5 = ___trackingSpace0;
		__this->set_m_TrackingSpace_8(L_5);
		// if (m_CameraFloorOffsetObject)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_m_CameraFloorOffsetObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// m_CameraFloorOffsetObject.transform.localPosition = new Vector3(m_CameraFloorOffsetObject.transform.localPosition.x, cameraYOffset, m_CameraFloorOffsetObject.transform.localPosition.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		float L_14 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_13, L_14, L_18, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_9, L_19, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset__ctor_m16A9986E70C742C81F0D47C8A3D2EDDBC098D31D (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// float m_CameraYOffset = k_DefaultCameraYOffset;
		__this->set_m_CameraYOffset_9((1.36143994f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset__cctor_m808047BB2328EE6C92B2C34D32FFF9FBDA9C2B55 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<XRInputSubsystem> s_InputSubsystems = new List<XRInputSubsystem>();
		List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * L_0 = (List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 *)il2cpp_codegen_object_new(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4_il2cpp_TypeInfo_var);
		List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C(L_0, /*hidden argument*/List_1__ctor_m74839417995248EB0017427B252968F4CAF0425C_RuntimeMethod_var);
		((CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D_il2cpp_TypeInfo_var))->set_s_InputSubsystems_12(L_0);
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
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_shoulderRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_shoulderRotationRatio_mB5F04FBDA8FA28B77D704AD4CA6A599B4810510D (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ShoulderRotationRatio; }
		float L_0 = __this->get_m_ShoulderRotationRatio_37();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_shoulderRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_shoulderRotationRatio_mC0B7512F72854BFB3B296F5A47539A3FBBA9B39C (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ShoulderRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ShoulderRotationRatio_37(L_0);
		// set { m_ShoulderRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_elbowRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_elbowRotationRatio_m44D281526B39374CC93584CA7B2355394BA735BE (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ElbowRotationRatio; }
		float L_0 = __this->get_m_ElbowRotationRatio_38();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_elbowRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_elbowRotationRatio_m0C55E14592ABE24498DE3EB8A2D1081295FA1EDC (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ElbowRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ElbowRotationRatio_38(L_0);
		// set { m_ElbowRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_wristRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_wristRotationRatio_m83A32F5A5CE44E5C092181C335928B0C616CA3BA (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_WristRotationRatio; }
		float L_0 = __this->get_m_WristRotationRatio_39();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_wristRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_wristRotationRatio_m31D186C141E1EB44855EA02D5004DCA031DCD9DA (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_WristRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_WristRotationRatio_39(L_0);
		// set { m_WristRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_minJointShiftAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_minJointShiftAngle_mE6C418D1F1E00173FD614E51FF107F1D8B873B85 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_JointShiftAngle.x; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_m_JointShiftAngle_40();
		float L_1 = L_0->get_x_0();
		return L_1;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_minJointShiftAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_minJointShiftAngle_m5E904F81AD72AC07187F86960C4444259AB62196 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_JointShiftAngle.x = value; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_m_JointShiftAngle_40();
		float L_1 = ___value0;
		L_0->set_x_0(L_1);
		// set { m_JointShiftAngle.x = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_maxJointShiftAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_maxJointShiftAngle_m61F6AACE99C14398CC22A756411785182BD89F31 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_JointShiftAngle.y; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_m_JointShiftAngle_40();
		float L_1 = L_0->get_y_1();
		return L_1;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_maxJointShiftAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_maxJointShiftAngle_mABC631474584B16CA3D6BCC0845799153E06E3CC (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_JointShiftAngle.y = value; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_m_JointShiftAngle_40();
		float L_1 = ___value0;
		L_0->set_y_1(L_1);
		// set { m_JointShiftAngle.y = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_jointShiftExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_jointShiftExponent_mA16C57EF7118EC501DF1126FCF8992DA2D9AB957 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_JointShiftExponent; }
		float L_0 = __this->get_m_JointShiftExponent_41();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_jointShiftExponent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_jointShiftExponent_m459C6ED99C3AA7BCA0F348138CB0E846DE78C591 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_JointShiftExponent = value; }
		float L_0 = ___value0;
		__this->set_m_JointShiftExponent_41(L_0);
		// set { m_JointShiftExponent = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_shiftedShoulderRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_shiftedShoulderRotationRatio_mF36D02A2B5CA7FA9BB28776B9068FA99B7E11E37 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ShiftedShoulderRotationRatio; }
		float L_0 = __this->get_m_ShiftedShoulderRotationRatio_42();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_shiftedShoulderRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_shiftedShoulderRotationRatio_mBD99220E28A95EC38F1ABD80E51E4DE936396D6E (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ShiftedShoulderRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ShiftedShoulderRotationRatio_42(L_0);
		// set { m_ShiftedShoulderRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_shiftedElbowRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_shiftedElbowRotationRatio_mBF4A8F5EDCC177CBDA4F64DB5BCFC20C9810A950 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ShiftedElbowRotationRatio; }
		float L_0 = __this->get_m_ShiftedElbowRotationRatio_43();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_shiftedElbowRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_shiftedElbowRotationRatio_m95AF8225FC5063178C93E84B62ABE46680250515 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ShiftedElbowRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ShiftedElbowRotationRatio_43(L_0);
		// set { m_ShiftedElbowRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_shiftedWristRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_shiftedWristRotationRatio_m136040C0CAF7D9C907E4AFF92A56503B039FB8D2 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ShiftedWristRotationRatio; }
		float L_0 = __this->get_m_ShiftedWristRotationRatio_44();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_shiftedWristRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_shiftedWristRotationRatio_m6C5D4EB347F7263894A300F270B0B2C1ED95505D (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ShiftedWristRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ShiftedWristRotationRatio_44(L_0);
		// set { m_ShiftedWristRotationRatio = value; }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::CalculateFinalJointRotations(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_CalculateFinalJointRotations_mCF5D3C46E9EBA1836736FAD5BB5C47422CD1B43A (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___controllerOrientation0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___xyRotation1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lerpRotation2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// float totalAngle = Quaternion.Angle(xyRotation, Quaternion.identity);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___xyRotation1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		float L_2;
		L_2 = Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline(L_0, L_1, /*hidden argument*/NULL);
		// float jointShiftAngleRange = maxJointShiftAngle - minJointShiftAngle;
		float L_3;
		L_3 = SwingArmModel_get_maxJointShiftAngle_m61F6AACE99C14398CC22A756411785182BD89F31(__this, /*hidden argument*/NULL);
		float L_4;
		L_4 = SwingArmModel_get_minJointShiftAngle_mE6C418D1F1E00173FD614E51FF107F1D8B873B85(__this, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		// float angleRatio = Mathf.Clamp01((totalAngle - minJointShiftAngle) / jointShiftAngleRange);
		float L_5;
		L_5 = SwingArmModel_get_minJointShiftAngle_mE6C418D1F1E00173FD614E51FF107F1D8B873B85(__this, /*hidden argument*/NULL);
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_5))/(float)L_6)), /*hidden argument*/NULL);
		// float jointShiftRatio = Mathf.Pow(angleRatio, m_JointShiftExponent);
		float L_8 = __this->get_m_JointShiftExponent_41();
		float L_9;
		L_9 = powf(L_7, L_8);
		V_1 = L_9;
		// float finalShoulderRatio = Mathf.Lerp(m_ShoulderRotationRatio, m_ShiftedShoulderRotationRatio, jointShiftRatio);
		float L_10 = __this->get_m_ShoulderRotationRatio_37();
		float L_11 = __this->get_m_ShiftedShoulderRotationRatio_42();
		float L_12 = V_1;
		float L_13;
		L_13 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// float finalElbowRatio = Mathf.Lerp(m_ElbowRotationRatio, m_ShiftedElbowRotationRatio, jointShiftRatio);
		float L_14 = __this->get_m_ElbowRotationRatio_38();
		float L_15 = __this->get_m_ShiftedElbowRotationRatio_43();
		float L_16 = V_1;
		float L_17;
		L_17 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// float finalWristRatio = Mathf.Lerp(m_WristRotationRatio, m_ShiftedWristRotationRatio, jointShiftRatio);
		float L_18 = __this->get_m_WristRotationRatio_39();
		float L_19 = __this->get_m_ShiftedWristRotationRatio_44();
		float L_20 = V_1;
		float L_21;
		L_21 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_18, L_19, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		// Quaternion swingShoulderRot = Quaternion.Lerp(Quaternion.identity, xyRotation, finalShoulderRatio);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23 = ___xyRotation1;
		float L_24 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_22, L_23, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		// Quaternion swingElbowRot = Quaternion.Lerp(Quaternion.identity, xyRotation, finalElbowRatio);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27 = ___xyRotation1;
		float L_28 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_26, L_27, L_28, /*hidden argument*/NULL);
		V_6 = L_29;
		// Quaternion swingWristRot = Quaternion.Lerp(Quaternion.identity, xyRotation, finalWristRatio);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = ___xyRotation1;
		float L_32 = V_4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_30, L_31, L_32, /*hidden argument*/NULL);
		V_7 = L_33;
		// Quaternion shoulderRotation = m_TorsoRotation * swingShoulderRot;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34 = ((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->get_m_TorsoRotation_22();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35 = V_5;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		L_36 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_34, L_35, /*hidden argument*/NULL);
		V_8 = L_36;
		// m_ElbowRotation = shoulderRotation * swingElbowRot;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37 = V_8;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38 = V_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_37, L_38, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ElbowRotation_15(L_39);
		// m_WristRotation = elbowRotation * swingWristRot;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40;
		L_40 = ArmModel_get_elbowRotation_m694DC54C551C395942832D32C7FBC645B03DFAEC_inline(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41 = V_7;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42;
		L_42 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_40, L_41, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_WristRotation_17(L_42);
		// m_ControllerRotation = m_TorsoRotation * controllerOrientation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43 = ((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->get_m_TorsoRotation_22();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_44 = ___controllerOrientation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_45;
		L_45 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_43, L_44, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ControllerRotation_19(L_45);
		// m_TorsoRotation = shoulderRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_46 = V_8;
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_TorsoRotation_22(L_46);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel__ctor_mD04BC01D884CE3C8F51D01251B937BE3F1E908B9 (SwingArmModel_tC06E94B56263DB28567C36129B412749D077D67F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_ShoulderRotationRatio = 0.5f;
		__this->set_m_ShoulderRotationRatio_37((0.5f));
		// float m_ElbowRotationRatio = 0.3f;
		__this->set_m_ElbowRotationRatio_38((0.300000012f));
		// float m_WristRotationRatio = 0.2f;
		__this->set_m_WristRotationRatio_39((0.200000003f));
		// Vector2 m_JointShiftAngle = new Vector2(160.0f, 180.0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (160.0f), (180.0f), /*hidden argument*/NULL);
		__this->set_m_JointShiftAngle_40(L_0);
		// float m_JointShiftExponent = 6.0f;
		__this->set_m_JointShiftExponent_41((6.0f));
		// float m_ShiftedShoulderRotationRatio = 0.1f;
		__this->set_m_ShiftedShoulderRotationRatio_42((0.100000001f));
		// float m_ShiftedElbowRotationRatio = 0.4f;
		__this->set_m_ShiftedElbowRotationRatio_43((0.400000006f));
		// float m_ShiftedWristRotationRatio = 0.5f;
		__this->set_m_ShiftedWristRotationRatio_44((0.5f));
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		ArmModel__ctor_m2003B5629B882463C5D15B4896E44FDEB28C0882(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::get_currentArmModelComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * TransitionArmModel_get_currentArmModelComponent_m56D40C8430D1030CB06F28B8C53BF1CEE2D25A5D (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentArmModelComponent; }
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_0 = __this->get_m_CurrentArmModelComponent_37();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::set_currentArmModelComponent(UnityEngine.XR.LegacyInputHelpers.ArmModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_set_currentArmModelComponent_m707584D69D5B34541A0C2DEFF68F390EFED4F26E (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_CurrentArmModelComponent = value;  }
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_0 = ___value0;
		__this->set_m_CurrentArmModelComponent_37(L_0);
		// set { m_CurrentArmModelComponent = value;  }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::Queue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionArmModel_Queue_m445E3FFBE80CAE4C4573AB47FC2701AF3BF3823C (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD7A6A347698F4B03A6C3A0A351651ACD40FCDAC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m748FB1151691D0685E7982534F344E6EDE721A0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBF589AEA368D84EE0A049FD212EFA5D823DB6525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m236720331A4E0F7281A8388EDAE1948F7625B264_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach(var am in m_ArmModelTransitions)
		List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * L_0 = __this->get_m_ArmModelTransitions_38();
		NullCheck(L_0);
		Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864  L_1;
		L_1 = List_1_GetEnumerator_m236720331A4E0F7281A8388EDAE1948F7625B264(L_0, /*hidden argument*/List_1_GetEnumerator_m236720331A4E0F7281A8388EDAE1948F7625B264_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_000e:
		{
			// foreach(var am in m_ArmModelTransitions)
			ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * L_2;
			L_2 = Enumerator_get_Current_mBF589AEA368D84EE0A049FD212EFA5D823DB6525_inline((Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mBF589AEA368D84EE0A049FD212EFA5D823DB6525_RuntimeMethod_var);
			V_1 = L_2;
			// if(am.transitionKeyName == key)
			ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4;
			L_4 = ArmModelTransition_get_transitionKeyName_m8F9574FC513145510CDFD1CDFE6704B9433F886D_inline(L_3, /*hidden argument*/NULL);
			String_t* L_5 = ___key0;
			bool L_6;
			L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0034;
			}
		}

IL_0024:
		{
			// Queue(am.armModel);
			ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * L_7 = V_1;
			NullCheck(L_7);
			ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_8;
			L_8 = ArmModelTransition_get_armModel_m4DCA2E0C66A14ACC9ACBE847EA418EC06B8D15FC_inline(L_7, /*hidden argument*/NULL);
			TransitionArmModel_Queue_mBEDA22890C7AA71F15BB337E868C735DDEDD4A55(__this, L_8, /*hidden argument*/NULL);
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x4F, FINALLY_003f);
		}

IL_0034:
		{
			// foreach(var am in m_ArmModelTransitions)
			bool L_9;
			L_9 = Enumerator_MoveNext_m748FB1151691D0685E7982534F344E6EDE721A0B((Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m748FB1151691D0685E7982534F344E6EDE721A0B_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD7A6A347698F4B03A6C3A0A351651ACD40FCDAC5((Enumerator_t3B6DA6626455C7C0410BD95863BD5DBC1718B864 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD7A6A347698F4B03A6C3A0A351651ACD40FCDAC5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
	}

IL_004d:
	{
		// return false;
		return (bool)0;
	}

IL_004f:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::Queue(UnityEngine.XR.LegacyInputHelpers.ArmModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_Queue_mBEDA22890C7AA71F15BB337E868C735DDEDD4A55 (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ___newArmModel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m63BFDBB879AE852E99CF2D605347B9DF7D9A3C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(newArmModel == null)
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_0 = ___newArmModel0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if(m_CurrentArmModelComponent == null)
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_2 = __this->get_m_CurrentArmModelComponent_37();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// m_CurrentArmModelComponent = newArmModel;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_4 = ___newArmModel0;
		__this->set_m_CurrentArmModelComponent_37(L_4);
	}

IL_001f:
	{
		// RemoveJustStartingTransitions();
		TransitionArmModel_RemoveJustStartingTransitions_m6A0036D1791EAB3DF28AF11483335114A8737802(__this, /*hidden argument*/NULL);
		// if (armModelBlendData.Count == MAX_ACTIVE_TRANSITIONS)
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_5 = __this->get_armModelBlendData_44();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_inline(L_5, /*hidden argument*/List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_003a;
		}
	}
	{
		// RemoveOldestTransition();
		TransitionArmModel_RemoveOldestTransition_m20CF422DE0B6948C143F6FD0553B492745143CF5(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// var ambd = new ArmModelBlendData();
		il2cpp_codegen_initobj((&V_0), sizeof(ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4 ));
		// ambd.armModel = newArmModel;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_7 = ___newArmModel0;
		(&V_0)->set_armModel_0(L_7);
		// ambd.currentBlendAmount = 0.0f;
		(&V_0)->set_currentBlendAmount_1((0.0f));
		// armModelBlendData.Add(ambd);
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_8 = __this->get_armModelBlendData_44();
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_9 = V_0;
		NullCheck(L_8);
		List_1_Add_m63BFDBB879AE852E99CF2D605347B9DF7D9A3C48(L_8, L_9, /*hidden argument*/List_1_Add_m63BFDBB879AE852E99CF2D605347B9DF7D9A3C48_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::RemoveJustStartingTransitions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_RemoveJustStartingTransitions_m6A0036D1791EAB3DF28AF11483335114A8737802 (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for( int i = 0; i < armModelBlendData.Count; ++i)
		V_0 = 0;
		goto IL_002c;
	}

IL_0004:
	{
		// ArmModelBlendData ambd = armModelBlendData[i];
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_0 = __this->get_armModelBlendData_44();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_2;
		L_2 = List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_RuntimeMethod_var);
		// if (ambd.currentBlendAmount < DROP_TRANSITION_THRESHOLD)
		float L_3 = L_2.get_currentBlendAmount_1();
		if ((!(((float)L_3) < ((float)(0.0350000001f)))))
		{
			goto IL_0028;
		}
	}
	{
		// armModelBlendData.RemoveAt(i);
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_4 = __this->get_armModelBlendData_44();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE(L_4, L_5, /*hidden argument*/List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE_RuntimeMethod_var);
	}

IL_0028:
	{
		// for( int i = 0; i < armModelBlendData.Count; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002c:
	{
		// for( int i = 0; i < armModelBlendData.Count; ++i)
		int32_t L_7 = V_0;
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_8 = __this->get_armModelBlendData_44();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_inline(L_8, /*hidden argument*/List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::RemoveOldestTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_RemoveOldestTransition_m20CF422DE0B6948C143F6FD0553B492745143CF5 (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// armModelBlendData.RemoveAt(0);
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_0 = __this->get_armModelBlendData_44();
		NullCheck(L_0);
		List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE(L_0, 0, /*hidden argument*/List_1_RemoveAt_mE0823FE22599323283AFB1FEDDBF305957B0E6DE_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::GetPoseFromProvider(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionArmModel_GetPoseFromProvider_m006411E48396A8FAA2778AF0AF4CCD70C4CEA311 (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UpdateBlends())
		bool L_0;
		L_0 = TransitionArmModel_UpdateBlends_mEF07BA9BB281691D64BDF2132FD0A1250AADF69C(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// output = finalPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_1 = ___output0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2;
		L_2 = ArmModel_get_finalPose_m7055D417219445A756EEBEB4995D4994CA0B41FD_inline(__this, /*hidden argument*/NULL);
		*(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_1 = L_2;
		// return PoseDataFlags.Position | PoseDataFlags.Rotation;
		return (int32_t)(3);
	}

IL_0016:
	{
		// output = Pose.identity;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_3 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_4;
		L_4 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		*(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_3 = L_4;
		// return PoseDataFlags.NoData;
		return (int32_t)(0);
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::UpdateBlends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionArmModel_UpdateBlends_mEF07BA9BB281691D64BDF2132FD0A1250AADF69C (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m39825C1A0041D565567A207C961BEA55C6A142FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m2BCB638114537C469D81C0519E1B8883AE55BA2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59552F1B4B2CA258409D9991D0B1D8277D138EBD);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (currentArmModelComponent == null)
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_0;
		L_0 = TransitionArmModel_get_currentArmModelComponent_m56D40C8430D1030CB06F28B8C53BF1CEE2D25A5D_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if (m_CurrentArmModelComponent.OnControllerInputUpdated())
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_2 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated() */, L_2);
		if (!L_3)
		{
			goto IL_02ac;
		}
	}
	{
		// m_NeckPosition = m_CurrentArmModelComponent.neckPosition;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_4 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = ArmModel_get_neckPosition_m7AB5D0B28444C4644ED070593C9A1119B3559F4E_inline(L_4, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_NeckPosition_13(L_5);
		// m_ElbowPosition = m_CurrentArmModelComponent.elbowPosition;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_6 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = ArmModel_get_elbowPosition_mB06B4A55ACA99791DD41938F76F914DDAC6160D6_inline(L_6, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ElbowPosition_14(L_7);
		// m_WristPosition = m_CurrentArmModelComponent.wristPosition;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_8 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = ArmModel_get_wristPosition_m6AB615CFA8D0D5F8E340C0CD3466F1907EB4AFF4_inline(L_8, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_WristPosition_16(L_9);
		// m_ControllerPosition = m_CurrentArmModelComponent.controllerPosition;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_10 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = ArmModel_get_controllerPosition_m187EEFE85902AB00B2F2B51638CABE5B66F93112_inline(L_10, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ControllerPosition_18(L_11);
		// m_ElbowRotation = m_CurrentArmModelComponent.elbowRotation;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_12 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_12);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = ArmModel_get_elbowRotation_m694DC54C551C395942832D32C7FBC645B03DFAEC_inline(L_12, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ElbowRotation_15(L_13);
		// m_WristRotation = m_CurrentArmModelComponent.wristRotation;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_14 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_14);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = ArmModel_get_wristRotation_mA2C7EBD9E3CC05C48E5AE0784DEEF2DF4B4DC9EB_inline(L_14, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_WristRotation_17(L_15);
		// m_ControllerRotation = m_CurrentArmModelComponent.controllerRotation;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_16 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_16);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = ArmModel_get_controllerRotation_mFC37272A3E9E5469B9FEF4BCE020880E8DE608F2_inline(L_16, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ControllerRotation_19(L_17);
		// if (TryGetAngularVelocity(poseSource, out angVel) && armModelBlendData.Count > 0)
		int32_t L_18;
		L_18 = ArmModel_get_poseSource_m84039586AC07D778F5437D3796F46253EC6ABC74_inline(__this, /*hidden argument*/NULL);
		bool L_19;
		L_19 = ArmModel_TryGetAngularVelocity_mF9033461C646DB5C4E16EE83FBC72D4A8BB38A9E(__this, L_18, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_026e;
		}
	}
	{
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_20 = __this->get_armModelBlendData_44();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_inline(L_20, /*hidden argument*/List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_RuntimeMethod_var);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_026e;
		}
	}
	{
		// float angularVelocity = angVel.magnitude;
		float L_22;
		L_22 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// float lerpValue = Mathf.Clamp(((angularVelocity) - MIN_ANGULAR_VELOCITY) / ANGULAR_VELOCITY_DIVISOR, 0.0f, 0.1f);
		float L_23;
		L_23 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)((float)il2cpp_codegen_subtract((float)L_22, (float)(0.200000003f)))/(float)(45.0f))), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		V_1 = L_23;
		// for (int i = 0; i < armModelBlendData.Count; ++i)
		V_2 = 0;
		goto IL_025b;
	}

IL_00e5:
	{
		// ArmModelBlendData ambd = armModelBlendData[i];
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_24 = __this->get_armModelBlendData_44();
		int32_t L_25 = V_2;
		NullCheck(L_24);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_26;
		L_26 = List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_RuntimeMethod_var);
		V_3 = L_26;
		// ambd.currentBlendAmount = Mathf.Lerp(ambd.currentBlendAmount, 1.0f, lerpValue);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_27 = V_3;
		float L_28 = L_27.get_currentBlendAmount_1();
		float L_29 = V_1;
		float L_30;
		L_30 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_28, (1.0f), L_29, /*hidden argument*/NULL);
		(&V_3)->set_currentBlendAmount_1(L_30);
		// if (ambd.currentBlendAmount > LERP_CLAMP_THRESHOLD)
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_31 = V_3;
		float L_32 = L_31.get_currentBlendAmount_1();
		if ((!(((float)L_32) > ((float)(0.949999988f)))))
		{
			goto IL_0128;
		}
	}
	{
		// ambd.currentBlendAmount = 1.0f;
		(&V_3)->set_currentBlendAmount_1((1.0f));
		// }
		goto IL_0222;
	}

IL_0128:
	{
		// ambd.armModel.OnControllerInputUpdated();
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_33 = V_3;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_34 = L_33.get_armModel_0();
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated() */, L_34);
		// m_NeckPosition = Vector3.Slerp(neckPosition, ambd.armModel.neckPosition, ambd.currentBlendAmount);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = ArmModel_get_neckPosition_m7AB5D0B28444C4644ED070593C9A1119B3559F4E_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_37 = V_3;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_38 = L_37.get_armModel_0();
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = ArmModel_get_neckPosition_m7AB5D0B28444C4644ED070593C9A1119B3559F4E_inline(L_38, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_40 = V_3;
		float L_41 = L_40.get_currentBlendAmount_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B(L_36, L_39, L_41, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_NeckPosition_13(L_42);
		// m_ElbowPosition = Vector3.Slerp(elbowPosition, ambd.armModel.elbowPosition, ambd.currentBlendAmount);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = ArmModel_get_elbowPosition_mB06B4A55ACA99791DD41938F76F914DDAC6160D6_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_44 = V_3;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_45 = L_44.get_armModel_0();
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = ArmModel_get_elbowPosition_mB06B4A55ACA99791DD41938F76F914DDAC6160D6_inline(L_45, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_47 = V_3;
		float L_48 = L_47.get_currentBlendAmount_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B(L_43, L_46, L_48, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ElbowPosition_14(L_49);
		// m_WristPosition = Vector3.Slerp(wristPosition, ambd.armModel.wristPosition, ambd.currentBlendAmount);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = ArmModel_get_wristPosition_m6AB615CFA8D0D5F8E340C0CD3466F1907EB4AFF4_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_51 = V_3;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_52 = L_51.get_armModel_0();
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = ArmModel_get_wristPosition_m6AB615CFA8D0D5F8E340C0CD3466F1907EB4AFF4_inline(L_52, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_54 = V_3;
		float L_55 = L_54.get_currentBlendAmount_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B(L_50, L_53, L_55, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_WristPosition_16(L_56);
		// m_ControllerPosition = Vector3.Slerp(controllerPosition, ambd.armModel.controllerPosition, ambd.currentBlendAmount);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = ArmModel_get_controllerPosition_m187EEFE85902AB00B2F2B51638CABE5B66F93112_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_58 = V_3;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_59 = L_58.get_armModel_0();
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = ArmModel_get_controllerPosition_m187EEFE85902AB00B2F2B51638CABE5B66F93112_inline(L_59, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_61 = V_3;
		float L_62 = L_61.get_currentBlendAmount_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B(L_57, L_60, L_62, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ControllerPosition_18(L_63);
		// m_ElbowRotation = Quaternion.Slerp(elbowRotation, ambd.armModel.elbowRotation, ambd.currentBlendAmount);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_64;
		L_64 = ArmModel_get_elbowRotation_m694DC54C551C395942832D32C7FBC645B03DFAEC_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_65 = V_3;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_66 = L_65.get_armModel_0();
		NullCheck(L_66);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_67;
		L_67 = ArmModel_get_elbowRotation_m694DC54C551C395942832D32C7FBC645B03DFAEC_inline(L_66, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_68 = V_3;
		float L_69 = L_68.get_currentBlendAmount_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_70;
		L_70 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_64, L_67, L_69, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ElbowRotation_15(L_70);
		// m_WristRotation = Quaternion.Slerp(wristRotation, ambd.armModel.wristRotation, ambd.currentBlendAmount);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_71;
		L_71 = ArmModel_get_wristRotation_mA2C7EBD9E3CC05C48E5AE0784DEEF2DF4B4DC9EB_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_72 = V_3;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_73 = L_72.get_armModel_0();
		NullCheck(L_73);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_74;
		L_74 = ArmModel_get_wristRotation_mA2C7EBD9E3CC05C48E5AE0784DEEF2DF4B4DC9EB_inline(L_73, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_75 = V_3;
		float L_76 = L_75.get_currentBlendAmount_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_77;
		L_77 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_71, L_74, L_76, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_WristRotation_17(L_77);
		// m_ControllerRotation = Quaternion.Slerp(controllerRotation, ambd.armModel.controllerRotation, ambd.currentBlendAmount);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_78;
		L_78 = ArmModel_get_controllerRotation_mFC37272A3E9E5469B9FEF4BCE020880E8DE608F2_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_79 = V_3;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_80 = L_79.get_armModel_0();
		NullCheck(L_80);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_81;
		L_81 = ArmModel_get_controllerRotation_mFC37272A3E9E5469B9FEF4BCE020880E8DE608F2_inline(L_80, /*hidden argument*/NULL);
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_82 = V_3;
		float L_83 = L_82.get_currentBlendAmount_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_84;
		L_84 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_78, L_81, L_83, /*hidden argument*/NULL);
		((ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 *)__this)->set_m_ControllerRotation_19(L_84);
	}

IL_0222:
	{
		// armModelBlendData[i] = ambd;
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_85 = __this->get_armModelBlendData_44();
		int32_t L_86 = V_2;
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_87 = V_3;
		NullCheck(L_85);
		List_1_set_Item_m2BCB638114537C469D81C0519E1B8883AE55BA2B(L_85, L_86, L_87, /*hidden argument*/List_1_set_Item_m2BCB638114537C469D81C0519E1B8883AE55BA2B_RuntimeMethod_var);
		// if (ambd.currentBlendAmount >= 1.0f)
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_88 = V_3;
		float L_89 = L_88.get_currentBlendAmount_1();
		if ((!(((float)L_89) >= ((float)(1.0f)))))
		{
			goto IL_0257;
		}
	}
	{
		// m_CurrentArmModelComponent = ambd.armModel;
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_90 = V_3;
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_91 = L_90.get_armModel_0();
		__this->set_m_CurrentArmModelComponent_37(L_91);
		// armModelBlendData.RemoveRange(0, i + 1);
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_92 = __this->get_armModelBlendData_44();
		int32_t L_93 = V_2;
		NullCheck(L_92);
		List_1_RemoveRange_m39825C1A0041D565567A207C961BEA55C6A142FA(L_92, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1)), /*hidden argument*/List_1_RemoveRange_m39825C1A0041D565567A207C961BEA55C6A142FA_RuntimeMethod_var);
	}

IL_0257:
	{
		// for (int i = 0; i < armModelBlendData.Count; ++i)
		int32_t L_94 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_025b:
	{
		// for (int i = 0; i < armModelBlendData.Count; ++i)
		int32_t L_95 = V_2;
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_96 = __this->get_armModelBlendData_44();
		NullCheck(L_96);
		int32_t L_97;
		L_97 = List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_inline(L_96, /*hidden argument*/List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_RuntimeMethod_var);
		if ((((int32_t)L_95) < ((int32_t)L_97)))
		{
			goto IL_00e5;
		}
	}
	{
		// }
		goto IL_0293;
	}

IL_026e:
	{
		// else if (armModelBlendData.Count > 0)
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_98 = __this->get_armModelBlendData_44();
		NullCheck(L_98);
		int32_t L_99;
		L_99 = List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_inline(L_98, /*hidden argument*/List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_RuntimeMethod_var);
		if ((((int32_t)L_99) <= ((int32_t)0)))
		{
			goto IL_0293;
		}
	}
	{
		// Debug.LogErrorFormat(this.gameObject, "Unable to get angular acceleration for node");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100;
		L_100 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_101;
		L_101 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m1807338EFAE61B3F6CF96FCB905D9B8E2DBAA0F7(L_100, _stringLiteral59552F1B4B2CA258409D9991D0B1D8277D138EBD, L_101, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0293:
	{
		// finalPose = new Pose(controllerPosition, controllerRotation);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = ArmModel_get_controllerPosition_m187EEFE85902AB00B2F2B51638CABE5B66F93112_inline(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_103;
		L_103 = ArmModel_get_controllerRotation_mFC37272A3E9E5469B9FEF4BCE020880E8DE608F2_inline(__this, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_104;
		memset((&L_104), 0, sizeof(L_104));
		Pose__ctor_m57138889AE9BF5AFB50D31A007F6EE062991E8C9((&L_104), L_102, L_103, /*hidden argument*/NULL);
		ArmModel_set_finalPose_mDEEA06C3A0A6F9376BDD4CEAE852C34B70EA3BBC_inline(__this, L_104, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_02ac:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel__ctor_m9CF0B2A1A5041712D22E9B87BE3F6820E910E3D7 (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA6CD028E44C1BA2C1EC43EBB20D918B918773CD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDDC517BDA087806B463125F73C41911564CEC705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ArmModelTransition> m_ArmModelTransitions = new List<ArmModelTransition>();
		List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F * L_0 = (List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F *)il2cpp_codegen_object_new(List_1_t4AD417C23F654717B58D1A5F4AC2744627D6749F_il2cpp_TypeInfo_var);
		List_1__ctor_mDDC517BDA087806B463125F73C41911564CEC705(L_0, /*hidden argument*/List_1__ctor_mDDC517BDA087806B463125F73C41911564CEC705_RuntimeMethod_var);
		__this->set_m_ArmModelTransitions_38(L_0);
		// internal List<ArmModelBlendData> armModelBlendData = new List<ArmModelBlendData>(MAX_ACTIVE_TRANSITIONS);
		List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * L_1 = (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F *)il2cpp_codegen_object_new(List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F_il2cpp_TypeInfo_var);
		List_1__ctor_mA6CD028E44C1BA2C1EC43EBB20D918B918773CD8(L_1, ((int32_t)10), /*hidden argument*/List_1__ctor_mA6CD028E44C1BA2C1EC43EBB20D918B918773CD8_RuntimeMethod_var);
		__this->set_armModelBlendData_44(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768_il2cpp_TypeInfo_var);
		ArmModel__ctor_m2003B5629B882463C5D15B4896E44FDEB28C0882(__this, /*hidden argument*/NULL);
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
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__29__ctor_mE3AA58806DBC43782A94DE7F1C76267364B4D5C3 (U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__29_System_IDisposable_Dispose_m8F01E0CE03FFE3B9C9F1B51F9CFD8A19F28C6ED1 (U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRepeatInitializeCameraU3Ed__29_MoveNext_m78979ED11EBEE247DF5D97EF587506D0407E0324 (U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_0040;
			}
			case 2:
			{
				goto IL_0065;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_CameraInitializing = true;
		CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_m_CameraInitializing_11((bool)1);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_006c;
	}

IL_0049:
	{
		// m_CameraInitialized = SetupCamera();
		CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * L_4 = V_1;
		CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = CameraOffset_SetupCamera_mDF4F84CA4089903AF5FDFF76D78577F3AFCD5C4F(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_m_CameraInitialized_10(L_6);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006c:
	{
		// while (!m_CameraInitialized)
		CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = L_7->get_m_CameraInitialized_10();
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// m_CameraInitializing = false;
		CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * L_9 = V_1;
		NullCheck(L_9);
		L_9->set_m_CameraInitializing_11((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRepeatInitializeCameraU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB5EA42E4BC70C3673A692C03ADB1E25FFA40D87B (U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_Reset_m6C1E0923F7336FC059B9DBFAA7FEC2DB5714200A (U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_Reset_m6C1E0923F7336FC059B9DBFAA7FEC2DB5714200A_RuntimeMethod_var)));
	}
}
// System.Object UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_get_Current_mC2BCCC9E15E0D6E63F764E192BC38DDC6005A979 (U3CRepeatInitializeCameraU3Ed__29_tC583A8F2976F8826BF90690BE727B808B7DBF078 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
IL2CPP_EXTERN_C void ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshal_pinvoke(const ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4& unmarshaled, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___armModel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'armModel' of type 'ArmModelBlendData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___armModel_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshal_pinvoke_back(const ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshaled_pinvoke& marshaled, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4& unmarshaled)
{
	Exception_t* ___armModel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'armModel' of type 'ArmModelBlendData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___armModel_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
IL2CPP_EXTERN_C void ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshal_pinvoke_cleanup(ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
IL2CPP_EXTERN_C void ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshal_com(const ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4& unmarshaled, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshaled_com& marshaled)
{
	Exception_t* ___armModel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'armModel' of type 'ArmModelBlendData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___armModel_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshal_com_back(const ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshaled_com& marshaled, ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4& unmarshaled)
{
	Exception_t* ___armModel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'armModel' of type 'ArmModelBlendData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___armModel_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
IL2CPP_EXTERN_C void ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshal_com_cleanup(ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ArmModel_get_finalPose_m7055D417219445A756EEBEB4995D4994CA0B41FD_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_FinalPose; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_FinalPose_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method)
{
	{
		float L_0 = ___newX0;
		__this->set_x_2(L_0);
		float L_1 = ___newY1;
		__this->set_y_3(L_1);
		float L_2 = ___newZ2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArmModel_get_poseSource_m84039586AC07D778F5437D3796F46253EC6ABC74_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_PoseSource; }
		int32_t L_0 = __this->get_m_PoseSource_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_m3BE44E43965BB9EDFD06DBC1E0985324A83327CF_inline (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___b1;
		float L_2;
		L_2 = Quaternion_Dot_m7F12C5843352AB2EA687923444CC987D51515F9A(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		bool L_4;
		L_4 = Quaternion_IsEqualUsingDot_mC57C44978B13AD1592750B1D523AAB4549BD5643(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		float L_5 = V_0;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_6, (1.0f), /*hidden argument*/NULL);
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))), (float)(57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraOffset_get_cameraYOffset_m7512CDD033A17800B8066B34E9CEA9B0DB24A110_inline (CameraOffset_tF116356DDDCEE6182FF450579D3DDFCD9C8AF93D * __this, const RuntimeMethod* method)
{
	{
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		float L_0 = __this->get_m_CameraYOffset_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_elbowRotation_m694DC54C551C395942832D32C7FBC645B03DFAEC_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_ElbowRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_ElbowRotation_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ArmModelTransition_get_transitionKeyName_m8F9574FC513145510CDFD1CDFE6704B9433F886D_inline (ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_KeyName; }
		String_t* L_0 = __this->get_m_KeyName_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * ArmModelTransition_get_armModel_m4DCA2E0C66A14ACC9ACBE847EA418EC06B8D15FC_inline (ArmModelTransition_t51924183E232CC5C4DE122484E82022D498B51A3 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ArmModel; }
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_0 = __this->get_m_ArmModel_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * TransitionArmModel_get_currentArmModelComponent_m56D40C8430D1030CB06F28B8C53BF1CEE2D25A5D_inline (TransitionArmModel_t75DA87BA3E4E43A13419BC7C56EC4B64BBB49411 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentArmModelComponent; }
		ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * L_0 = __this->get_m_CurrentArmModelComponent_37();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_neckPosition_m7AB5D0B28444C4644ED070593C9A1119B3559F4E_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_NeckPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_NeckPosition_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_elbowPosition_mB06B4A55ACA99791DD41938F76F914DDAC6160D6_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_ElbowPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_ElbowPosition_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_wristPosition_m6AB615CFA8D0D5F8E340C0CD3466F1907EB4AFF4_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_WristPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_WristPosition_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArmModel_get_controllerPosition_m187EEFE85902AB00B2F2B51638CABE5B66F93112_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_ControllerPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_ControllerPosition_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_wristRotation_mA2C7EBD9E3CC05C48E5AE0784DEEF2DF4B4DC9EB_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_WristRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_WristRotation_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ArmModel_get_controllerRotation_mFC37272A3E9E5469B9FEF4BCE020880E8DE608F2_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, const RuntimeMethod* method)
{
	{
		// return m_ControllerRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_ControllerRotation_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArmModel_set_finalPose_mDEEA06C3A0A6F9376BDD4CEAE852C34B70EA3BBC_inline (ArmModel_t39656674D473CFAE8C6999E3F4015A5159B85768 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_FinalPose = value; }
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = ___value0;
		__this->set_m_FinalPose_4(L_0);
		// set { m_FinalPose = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m354C6579803579E520A089A1F4FF101ACDEC6D97_gshared_inline (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  List_1_get_Item_m1042F06A87D48817E020802B66C08E2327A2B185_gshared_inline (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* L_2 = (XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5*)__this->get__items_1();
		int32_t L_3 = ___index0;
		XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5*)L_2, (int32_t)L_3);
		return (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m84AED6D99D4AE28AD8B2F8C8A31DD265DD5B03A2_gshared_inline (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  List_1_get_Item_mC33658B0515FB3266AD8D9676CA22B503E59384D_gshared_inline (List_1_t60B9CBF17F0BC53257EC16939D6BA3B183B58E3F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11* L_2 = (ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ArmModelBlendDataU5BU5D_t8377F7CFD9BC426256B0AE78BF9F12B378B2AB11*)L_2, (int32_t)L_3);
		return (ArmModelBlendData_t0714441C4689A4F6C389FC82FCB503CDD486E6D4 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
