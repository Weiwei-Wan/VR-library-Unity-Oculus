#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC;
// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Animations.ParentConstraint
struct ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7;
// System.String
struct String_t;
// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Animation/Enumerator
struct Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5;

IL2CPP_EXTERN_C RuntimeClass* AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00974C5D0A39E4A027B0EB44FE85C731384945B0;
IL2CPP_EXTERN_C String_t* _stringLiteral10F6FECF95C1235E3B90F738314A338A55A4DF3B;
IL2CPP_EXTERN_C String_t* _stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286;
IL2CPP_EXTERN_C String_t* _stringLiteral697BC915CC32A6BCBF712F64039C37FE7AD18464;
IL2CPP_EXTERN_C String_t* _stringLiteral6A5239659C252C3C95FC09A31CA37CA6F6B07FAE;
IL2CPP_EXTERN_C String_t* _stringLiteral82132A808F0B9E6946BE41B8C7B1FDD0D99D773C;
IL2CPP_EXTERN_C String_t* _stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630;
IL2CPP_EXTERN_C String_t* _stringLiteral972CE48A8E26750559B1B00039204D0DE5B03904;
IL2CPP_EXTERN_C String_t* _stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018;
IL2CPP_EXTERN_C String_t* _stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1;
IL2CPP_EXTERN_C String_t* _stringLiteralB31E4AEFDFD2E76052D908F31AC56B3ABCFC7987;
IL2CPP_EXTERN_C String_t* _stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665;
IL2CPP_EXTERN_C String_t* _stringLiteralD05EE9FE9EFEEB35F354D97C2927EEB880DA9264;
IL2CPP_EXTERN_C String_t* _stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE;
IL2CPP_EXTERN_C String_t* _stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF49B5D043E839AD3290B85DFA87359555450522;
IL2CPP_EXTERN_C String_t* _stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9;
IL2CPP_EXTERN_C String_t* _stringLiteralEF248A46D93F240BD665585183A3658090FB86C2;
IL2CPP_EXTERN_C String_t* _stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParentConstraint_ValidateSourceIndex_m081826C60AECFBDBCA08F338D069837D0D75C49B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;

struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8B36B9B16FF72CF5A0EBA03D2FA162E77C86534C 
{
};

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct AnimationPlayableGraphExtensions_tF833C072961F30409DB4D2A1B8B1B5BAE53221B3  : public RuntimeObject
{
};

// UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions
struct AnimationPlayableOutputExtensions_tF2D30C326A4F682F2746664FCF2A89E93BD3D104  : public RuntimeObject
{
};

// UnityEngine.Animations.AnimationSceneHandleUtility
struct AnimationSceneHandleUtility_t81E496A69F5C91C343CB2299AE47E8F551D7D939  : public RuntimeObject
{
};

// UnityEngine.Animations.AnimationStreamHandleUtility
struct AnimationStreamHandleUtility_tB5D7BEBDFB3C4BE50805B6EF18FB0CEC6A25A10D  : public RuntimeObject
{
};

// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02  : public RuntimeObject
{
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
// Native definition for COM marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};

// UnityEngine.Animations.AnimatorJobExtensions
struct AnimatorJobExtensions_tF575992DDBF1EDEAF9D02E1BD755558D929D1E4A  : public RuntimeObject
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// UnityEngine.Animation/Enumerator
struct Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530  : public RuntimeObject
{
	// UnityEngine.Animation UnityEngine.Animation/Enumerator::m_Outer
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___m_Outer_0;
	// System.Int32 UnityEngine.Animation/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;
};

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>
struct NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>
struct NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD 
{
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Animations.ConstraintSource
struct ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F 
{
	// UnityEngine.Transform UnityEngine.Animations.ConstraintSource::m_SourceTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SourceTransform_0;
	// System.Single UnityEngine.Animations.ConstraintSource::m_Weight
	float ___m_Weight_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Animations.ConstraintSource
struct ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SourceTransform_0;
	float ___m_Weight_1;
};
// Native definition for COM marshalling of UnityEngine.Animations.ConstraintSource
struct ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SourceTransform_0;
	float ___m_Weight_1;
};

// UnityEngine.Animations.DiscreteEvaluationAttribute
struct DiscreteEvaluationAttribute_tF23FCB5AB01B394BF5BD84623364A965C90F8BB9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Animations.PropertySceneHandle
struct PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 
{
	// System.UInt32 UnityEngine.Animations.PropertySceneHandle::valid
	uint32_t ___valid_0;
	// System.Int32 UnityEngine.Animations.PropertySceneHandle::handleIndex
	int32_t ___handleIndex_1;
};

// UnityEngine.Animations.PropertyStreamHandle
struct PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 
{
	// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::handleIndex
	int32_t ___handleIndex_1;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::valueArrayIndex
	int32_t ___valueArrayIndex_2;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::bindType
	int32_t ___bindType_3;
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

// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t44FFD5D3B5AEBB394182D66E2198FA398087449C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Animations.TransformSceneHandle
struct TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB 
{
	// System.UInt32 UnityEngine.Animations.TransformSceneHandle::valid
	uint32_t ___valid_0;
	// System.Int32 UnityEngine.Animations.TransformSceneHandle::transformSceneHandleDefinitionIndex
	int32_t ___transformSceneHandleDefinitionIndex_1;
};

// UnityEngine.Animations.TransformStreamHandle
struct TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E 
{
	// System.UInt32 UnityEngine.Animations.TransformStreamHandle::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.Int32 UnityEngine.Animations.TransformStreamHandle::handleIndex
	int32_t ___handleIndex_1;
	// System.Int32 UnityEngine.Animations.TransformStreamHandle::skeletonIndex
	int32_t ___skeletonIndex_2;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Animations.AnimationHumanStream
struct AnimationHumanStream_t31E8EAD3F7C2C29CAE7B4EFB87AA84ECC6DCC6EC 
{
	// System.IntPtr UnityEngine.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;
};

// UnityEngine.Animations.AnimationStream
struct AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A 
{
	// System.UInt32 UnityEngine.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;
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

// UnityEngine.HumanLimit
struct HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E 
{
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;
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

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 
{
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};

// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Animations.AnimationClipPlayable
struct AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174  : public RuntimeObject
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationMixerPlayable
struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationOffsetPlayable
struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationPlayableOutput
struct AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationPosePlayable
struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationScriptPlayable
struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE  : public TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2
{
};

// UnityEngine.Animations.AnimatorControllerPlayable
struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 
{
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493  : public RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254
{
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* ___OnOverrideControllerDirty_4;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5  : public MulticastDelegate_t
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.Animations.ParentConstraint
struct ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// <Module>

// <Module>

// UnityEngine.Animations.AnimationPlayableGraphExtensions

// UnityEngine.Animations.AnimationPlayableGraphExtensions

// UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions

// UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions

// UnityEngine.Animations.AnimationSceneHandleUtility

// UnityEngine.Animations.AnimationSceneHandleUtility

// UnityEngine.Animations.AnimationStreamHandleUtility

// UnityEngine.Animations.AnimationStreamHandleUtility

// UnityEngine.AnimatorControllerParameter

// UnityEngine.AnimatorControllerParameter

// UnityEngine.Animations.AnimatorJobExtensions

// UnityEngine.Animations.AnimatorJobExtensions

// System.Attribute

// System.Attribute

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.Animation/Enumerator

// UnityEngine.Animation/Enumerator

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>

// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>

// Unity.Collections.NativeArray`1<System.Single>

// Unity.Collections.NativeArray`1<System.Single>

// UnityEngine.AnimatorClipInfo

// UnityEngine.AnimatorClipInfo

// UnityEngine.AnimatorStateInfo

// UnityEngine.AnimatorStateInfo

// UnityEngine.AnimatorTransitionInfo

// UnityEngine.AnimatorTransitionInfo

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Animations.ConstraintSource

// UnityEngine.Animations.ConstraintSource

// UnityEngine.Animations.DiscreteEvaluationAttribute

// UnityEngine.Animations.DiscreteEvaluationAttribute

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Animations.NotKeyableAttribute

// UnityEngine.Animations.NotKeyableAttribute

// UnityEngine.Animations.PropertySceneHandle

// UnityEngine.Animations.PropertySceneHandle

// UnityEngine.Animations.PropertyStreamHandle

// UnityEngine.Animations.PropertyStreamHandle

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SharedBetweenAnimatorsAttribute

// UnityEngine.SharedBetweenAnimatorsAttribute

// System.Single

// System.Single

// UnityEngine.Animations.TransformSceneHandle

// UnityEngine.Animations.TransformSceneHandle

// UnityEngine.Animations.TransformStreamHandle

// UnityEngine.Animations.TransformStreamHandle

// System.UInt16

// System.UInt16

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

// System.Void

// System.Void

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Animations.AnimationHumanStream

// UnityEngine.Animations.AnimationHumanStream

// UnityEngine.Animations.AnimationStream

// UnityEngine.Animations.AnimationStream

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.HumanLimit

// UnityEngine.HumanLimit

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableHandle

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.SkeletonBone

// UnityEngine.SkeletonBone

// UnityEngine.TrackedReference

// UnityEngine.TrackedReference

// UnityEngine.Animations.AnimationClipPlayable

// UnityEngine.Animations.AnimationClipPlayable

// UnityEngine.AnimationEvent

// UnityEngine.AnimationEvent

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields
{
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable

// UnityEngine.Animations.AnimationMixerPlayable
struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields
{
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMixerPlayable

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields
{
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable

// UnityEngine.Animations.AnimationOffsetPlayable
struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields
{
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationOffsetPlayable

// UnityEngine.Animations.AnimationPlayableOutput

// UnityEngine.Animations.AnimationPlayableOutput

// UnityEngine.Animations.AnimationPosePlayable
struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields
{
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationPosePlayable

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields
{
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationRemoveScalePlayable

// UnityEngine.Animations.AnimationScriptPlayable
struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields
{
	// UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationScriptPlayable

// UnityEngine.AnimationState

// UnityEngine.AnimationState

// UnityEngine.Animations.AnimatorControllerPlayable
struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields
{
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimatorControllerPlayable

// UnityEngine.Avatar

// UnityEngine.Avatar

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.HumanBone

// UnityEngine.HumanBone

// UnityEngine.Motion

// UnityEngine.Motion

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.Playable

// UnityEngine.RuntimeAnimatorController

// UnityEngine.RuntimeAnimatorController

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

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

// UnityEngine.AnimationClip

// UnityEngine.AnimationClip

// UnityEngine.AnimatorOverrideController

// UnityEngine.AnimatorOverrideController

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NullReferenceException

// System.NullReferenceException

// UnityEngine.StateMachineBehaviour

// UnityEngine.StateMachineBehaviour

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback

// UnityEngine.Animation

// UnityEngine.Animation

// UnityEngine.Animator

// UnityEngine.Animator

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.Animations.ParentConstraint

// UnityEngine.Animations.ParentConstraint
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
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* m_Items[1];

	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertySceneHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_gshared (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertySceneHandle>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_gshared (NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___0_nativeArray, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertyStreamHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_gshared (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertyStreamHandle>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_gshared (NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___0_nativeArray, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_gshared (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5E86FA3D4C8C7F144565B6E3962FD5CF3E51F1C0 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___0_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___0_outer, const RuntimeMethod* method) ;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrackedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedReference__ctor_m0E498FD0AD5807B7B91CB0005170E522DAE3616A (TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goalPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_goalPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, int32_t ___1_stateInfoIndex, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* ___2_info, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_m20E22C1F0C5B12FC0FBB421D93B4BD5A3B62C3FA (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder(UnityEngine.Playables.PlayableOutputHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_m67FB54EB92BA287562D0F0E71B3F63233161901E (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_output, int32_t ___1_sortingOrder, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, int32_t ___1_sortingOrder, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_handle, intptr_t ___2_jobReflectionData, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_handle, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, bool ___1_singleLayerOptimization, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValid_m96EE3A490B88868890CF2E754838F97424A65512 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationStream::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Animations.TransformStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Animations.AnimationStream::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasSkeletonIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::Resolve(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_Resolve_m5DDC5761EF01E700ABDB214030802982DABC3E6E (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolved(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolved_mB2A9548AAB37C1485AFEC2C9CD9A3D4ABC786D52 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationStream::CheckIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPosition_m8980B6C6185653E9B962625D030C3BB1994C8B89 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPosition_m45609A840DAAF0410F72218E58E2207841290002 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotation_m02E0CE9B403FB4138605190A48A19767D6B0C42A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotation_mA159153895AFFB08B30B8287304A720215C364D1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPosition_m30A1BF0A06551177E6D28A73D3DE71522B77C0A4 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPosition_mEC97D6C69019B8212F444B33DB51BDCD9DCD6282 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotation_mB613F5958303751C9368AD2CC613723E279985AF (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotation_m68B0586FA34978971ECDC909A44E1E0C13443C6A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScale_m559039B8F2285CC33E3E952F078EF899C8ACB451 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScale(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScale_mEAC5ED65AA0B8F756E2C129ED14D78C7B3698FE2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRS_mF633398360834FAD1B1F8E21EF8C2A01B3E38A8D (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRS_mA4D470AC9B87FF6FAC880A926BD3A5F4EC30BFB2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTR_mA0526AC698E96B95E6BE3E17A477DB028EF8A499 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTR_m8C4F35DE8E639AE7D7F94F1D015AD3C16D2FC406 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, bool ___5_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, bool ___4_useMask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasValueArrayIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloat(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal(UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloat(UnityEngine.Animations.AnimationStream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, float ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetInt(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal(UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetInt(UnityEngine.Animations.AnimationStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBool(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal(UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBool(UnityEngine.Animations.AnimationStream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, float ___2_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, int32_t ___2_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, bool ___2_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_IsValid_m11DB3FA1E3137CA1C2D4D4BC18AD717FCCAC65E2 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::CheckIsValid(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPosition_mDB8261C4AF79828292D555DBF91A6559DE41B3B8 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPosition_mF5AFF93B5129702C280CCEB0603100377BFE2D32 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotation_m8F6CA3E2302A43103A808120AEE1C527EB2A2F05 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotation_mEB7C44D455654A40518C8AE8D8CC0D191E194B8D (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScale_m46D9A20E7DC5967A0EE6F7C217FAA68FBB93611E (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRS_m5FBE0248443B3D34C7787A50DE89BB473638CADB (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTR_m7CB0885446CA0894BF681F1954C3E0FB8D31C9EB (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertySceneHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
inline int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_gshared)(___0_stream, ___1_handles, ___2_buffer, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertySceneHandle>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673 (NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_gshared)(___0_nativeArray, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_gshared)(___0_nativeArray, method);
}
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertySceneHandles, void* ___2_floatBuffer, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertyStreamHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
inline int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, const RuntimeMethod*))AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_gshared)(___0_stream, ___1_handles, ___2_buffer, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertyStreamHandle>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3 (NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_gshared)(___0_nativeArray, method);
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertyStreamHandles, void* ___2_floatBuffer, int32_t ___3_count, bool ___4_useMask, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertyStreamHandles, void* ___2_floatBuffer, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___2_transformStreamHandle, const RuntimeMethod* method) ;
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 AnimatorJobExtensions_BindStreamProperty_m02E8A9116C4DB619A2B4E28AEADC593ECDE78994 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, String_t* ___1_property, int32_t ___2_propertyType, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___3_propertyStreamHandle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___5_propertyStreamHandle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___2_transformSceneHandle, const RuntimeMethod* method) ;
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 AnimatorJobExtensions_BindSceneProperty_m5D7AEB5EEDBC08245FDBE69BF129BF0CE66B7743 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* ___5_propertySceneHandle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___0_other, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.ParentConstraint::GetSourceCountInternal(UnityEngine.Animations.ParentConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParentConstraint_GetSourceCountInternal_mB5BC92E4C164357647E292EF2D52C37683FD24EB (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* ___0_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.ParentConstraint::ValidateSourceIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_ValidateSourceIndex_m081826C60AECFBDBCA08F338D069837D0D75C49B (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.ParentConstraint::SetTranslationOffsetInternal(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetTranslationOffsetInternal_m9E22067F8904B87016C803380E24F266FDBFA01D (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.ParentConstraint::SetTranslationOffsetInternal_Injected(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetTranslationOffsetInternal_Injected_m3995DB6B0F0DB7740D1DAFB5ED3937F85117DE88 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.ParentConstraint::SetRotationOffsetInternal(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetRotationOffsetInternal_mC149045D55A9824067299E474112E61D0EAA2E14 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.ParentConstraint::SetRotationOffsetInternal_Injected(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetRotationOffsetInternal_Injected_mBABF60A9D803907CA7A629A84291937287F4A8B3 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.ParentConstraint::get_sourceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParentConstraint_get_sourceCount_m6D83D678E00CFBC77A4626EB9B904C59C24FFBCB (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animations.ParentConstraint::AddSource_Injected(UnityEngine.Animations.ConstraintSource&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParentConstraint_AddSource_Injected_m0A8CB716DCF35CAE4C614632A76B6897F87E3788 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.ConstraintSource::set_sourceTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_sourceTransform_mC905D9E04293D785BA40E1E0378457A77170A31B (ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.ConstraintSource::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_weight_m40EADC470F7D906EEB89A515F75CC8B0648368D7 (ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.AnimationStream::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_get_deltaTime_mECEF75B188313080405BFB556AB4CFD972233861 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) ;
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_handle, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___1_target, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_mA6B0AA977505FDEFDD6BCA2E941FD3A18AE1AD23 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* ___0_controller, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_0 = ___0_controller;
		NullCheck(L_0);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_1 = L_0->___OnOverrideControllerDirty_4;
		V_0 = (bool)((!(((RuntimeObject*)(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_3 = ___0_controller;
		NullCheck(L_3);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_4 = L_3->___OnOverrideControllerDirty_4;
		NullCheck(L_4);
		OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline(L_4, NULL);
	}

IL_001a:
	{
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
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* currentDelegate = reinterpret_cast<OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenInst(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_mA49B11AF24CB49A9B764058DB73CE221AE54E106 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast;
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_string_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
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
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
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
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Type_1 = unmarshaled.___m_Type_1;
	marshaled.___m_DefaultFloat_2 = unmarshaled.___m_DefaultFloat_2;
	marshaled.___m_DefaultInt_3 = unmarshaled.___m_DefaultInt_3;
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.___m_DefaultBool_4);
}
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_back(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke& marshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	int32_t unmarshaledm_Type_temp_1 = 0;
	unmarshaledm_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.___m_Type_1 = unmarshaledm_Type_temp_1;
	float unmarshaledm_DefaultFloat_temp_2 = 0.0f;
	unmarshaledm_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.___m_DefaultFloat_2 = unmarshaledm_DefaultFloat_temp_2;
	int32_t unmarshaledm_DefaultInt_temp_3 = 0;
	unmarshaledm_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.___m_DefaultInt_3 = unmarshaledm_DefaultInt_temp_3;
	bool unmarshaledm_DefaultBool_temp_4 = false;
	unmarshaledm_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.___m_DefaultBool_4 = unmarshaledm_DefaultBool_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_cleanup(AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_com(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name_0);
	marshaled.___m_Type_1 = unmarshaled.___m_Type_1;
	marshaled.___m_DefaultFloat_2 = unmarshaled.___m_DefaultFloat_2;
	marshaled.___m_DefaultInt_3 = unmarshaled.___m_DefaultInt_3;
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.___m_DefaultBool_4);
}
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_com_back(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com& marshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	int32_t unmarshaledm_Type_temp_1 = 0;
	unmarshaledm_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.___m_Type_1 = unmarshaledm_Type_temp_1;
	float unmarshaledm_DefaultFloat_temp_2 = 0.0f;
	unmarshaledm_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.___m_DefaultFloat_2 = unmarshaledm_DefaultFloat_temp_2;
	int32_t unmarshaledm_DefaultInt_temp_3 = 0;
	unmarshaledm_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.___m_DefaultInt_3 = unmarshaledm_DefaultInt_temp_3;
	bool unmarshaledm_DefaultBool_temp_4 = false;
	unmarshaledm_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.___m_DefaultBool_4 = unmarshaledm_DefaultBool_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_com_cleanup(AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimatorControllerParameter::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_get_nameHash_m92DA605E70604B1BBFD5EA5AE0CD0311F21400EE (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = __this->___m_Name_0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_get_type_mACEB110E346B27168F177E7A909CFB8586A2B966 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Type_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.AnimatorControllerParameter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerParameter_Equals_m9FDC3900B8DB91E9F99295CADB9574F7E1C55C71 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject* L_0 = ___0_o;
		V_0 = ((AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02*)IsInstClass((RuntimeObject*)L_0, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_il2cpp_TypeInfo_var));
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_2 = __this->___m_Name_0;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___m_Name_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->___m_Type_1;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___m_Type_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0058;
		}
	}
	{
		float L_9 = __this->___m_DefaultFloat_2;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_10 = V_0;
		NullCheck(L_10);
		float L_11 = L_10->___m_DefaultFloat_2;
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = __this->___m_DefaultInt_3;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___m_DefaultInt_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0058;
		}
	}
	{
		bool L_15 = __this->___m_DefaultBool_4;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->___m_DefaultBool_4;
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B7_0 = 0;
	}

IL_0059:
	{
		V_1 = (bool)G_B7_0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Int32 UnityEngine.AnimatorControllerParameter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_GetHashCode_m145EFDAFC4D2C410BB84F8290883977340E25312 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.AnimatorControllerParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerParameter__ctor_m91C7057D6AC6D38ACA5EC852D5FDA829F83C8474 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_Name_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animation::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Rewind_m2DFAC82FDF28BE4531009381C5444C6A0977D51D (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef void (*Animation_Rewind_m2DFAC82FDF28BE4531009381C5444C6A0977D51D_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_Rewind_m2DFAC82FDF28BE4531009381C5444C6A0977D51D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Rewind_m2DFAC82FDF28BE4531009381C5444C6A0977D51D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Rewind()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Animation_Play_m5E86FA3D4C8C7F144565B6E3962FD5CF3E51F1C0(__this, 0, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5E86FA3D4C8C7F144565B6E3962FD5CF3E51F1C0 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___0_mode, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_mode;
		bool L_1;
		L_1 = Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___0_mode, const RuntimeMethod* method) 
{
	typedef bool (*Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, int32_t);
	static Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_mode);
	return icallRetVal;
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m247062F212D9C579DAE25D9BC86E4921DC5719E6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* L_0 = (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530*)il2cpp_codegen_object_new(Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	typedef AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* (*Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, int32_t);
	static Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* icallRetVal = _il2cpp_icall_func(__this, ___0_index);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___0_outer, const RuntimeMethod* method) 
{
	{
		__this->___m_CurrentIndex_1 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = ___0_outer;
		__this->___m_Outer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Outer_0), (void*)L_0);
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m4A17FE0020D4C8856EFC8EF531B99723FFB2B9DF (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___m_Outer_0;
		int32_t L_1 = __this->___m_CurrentIndex_1;
		NullCheck(L_0);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_2;
		L_2 = Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m82477C155D4F7CF98317C0EEC9F5070D196AA671 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___m_Outer_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->___m_CurrentIndex_1;
		__this->___m_CurrentIndex_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = __this->___m_CurrentIndex_1;
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Animation/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m687381C45ECBBD052447FAC06ECE9760FF23DA63 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_CurrentIndex_1 = (-1);
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
// System.Void UnityEngine.AnimationState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState__ctor_mB18C82530ADA40EE3BC245AAB0673941D78B779E (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	{
		TrackedReference__ctor_m0E498FD0AD5807B7B91CB0005170E522DAE3616A(__this, NULL);
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


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationEvent__ctor_mBC954085B1D18B436D08E7ADE3458B91E208F3B2 (AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_Time_0 = (0.0f);
		__this->___m_FunctionName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FunctionName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_StringParameter_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StringParameter_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_ObjectReferenceParameter_3 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReferenceParameter_3), (void*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL);
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StateSender_8), (void*)(AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL);
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
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
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
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_FullPath_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_NormalizedTime_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___0_name;
		float L_1;
		L_1 = Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_mEFA968AD9EEB92E6A03AEEB968600798E61F9B1D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___0_id;
		float L_1;
		L_1 = Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		float L_1 = ___1_value;
		Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		float L_1 = ___1_value;
		Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mFEC9C0565C52965FBD5D6A02084484F00F8ECE2C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_id;
		bool L_1;
		L_1 = Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		bool L_1 = ___1_value;
		Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		bool L_1 = ___1_value;
		Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_mF4E1564D3791C968FA8952954B5AAC4C4E2C8B91 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1;
		L_1 = Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_value;
		Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_value;
		Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868(__this, L_0, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_mE62E4CAE2725D8AD214D59FF459F63157818C7DF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_id;
		bool L_1;
		L_1 = Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetIKPosition_m626E887B0E039C8F79D0A942D469880B05A58962 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_goal;
		Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPosition_mB7BE88C93990186D94AF75439E2F216D6ECBCDEE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goalPosition, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_goalPosition;
		Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goalPosition, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_goal;
		Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707(__this, L_0, (&___1_goalPosition), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m8C707F505FFE2A6F36BE81ED12786B941D3B990C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		float L_1 = ___1_value;
		Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_value);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_layerName, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerIndex(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_layerName);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerWeight(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, float ___1_weight, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_layerIndex, ___1_weight);
}
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, int32_t ___1_stateInfoIndex, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* ___2_info, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*);
	static Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)");
	_il2cpp_icall_func(__this, ___0_layerIndex, ___1_stateInfoIndex, ___2_info);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_layerIndex;
		Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D(__this, L_0, 0, (&V_0), NULL);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2 = V_1;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* (*Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameters()");
	AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::get_parameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameterCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, int32_t ___1_layer, float ___2_normalizedTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, float);
	static Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_stateNameHash, ___1_layer, ___2_normalizedTime);
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254*);
	static Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn) (String_t*);
	static Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_name);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_avatar(UnityEngine.Avatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*);
	static Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_avatar(UnityEngine.Avatar)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInIKPass()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, float);
	static Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___0_name, ___1_value);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value);
}
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_name);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatID(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, bool);
	static Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_name, ___1_value);
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool);
	static Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value);
}
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef bool (*Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolID(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, int32_t);
	static Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerString(System.String,System.Int32)");
	_il2cpp_icall_func(__this, ___0_name, ___1_value);
}
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t);
	static Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value);
}
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerID(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___0_name);
}
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___0_id);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (*Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___0_name);
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_logWarnings()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_ret);
}
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_goalPosition, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_goalPosition);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip__ctor_m3F9B3DE671547640479DB976423EEBC689D26F79 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	{
		Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443(__this, NULL);
		AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_self, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___0_self);
}
// System.Void UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, String_t* ___0_relativePath, Type_t* ___1_type, String_t* ___2_propertyName, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___3_curve, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, String_t*, Type_t*, String_t*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*);
	static AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___0_relativePath, ___1_type, ___2_propertyName, ___3_curve);
}
// System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, bool);
	static AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_legacy(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
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
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mB618EFE75A50CBAA3EE6471E64A3E2CA2A2C90FD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mC1A83A4F693AF3AB51BC592A0CE525CE4F320D6B (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mC113F0B2F53847F9A6755B82D0AC53C971171CFD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m7229D5EFBA432665B9046FC3C21D463FFD281978 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m310C17694D8D1B9D60D549259A39837F22FD3240 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0CEFF9E4946BFDC4F7066BEB4C961169DBC5073F (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m384B808E3961C6C2C375DF7487EF2B49E44E6CD7 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_m491D81A9A64DE4AE02415A5909B74AE947EAE1B9 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF3130BE7BDD7C8B2470303FB1986A336E47CC98C (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mD47A506ACE251A6341115CBE5607D05C01747127 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m1A01C10E754426572C7BBA7AA13044FDA372FDFC (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_mCE3B4C71868B564EE6BE4B8663535058705C3B72 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0399B12419A4F990F41BD589C833E2D2C0076762 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___2_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_mF8BB1A8851B0699FC1D85F538E16EF12C08BBB93 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___2_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m9663A75D1016E16D7E3A48E2D4E6466A041A00AB (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::SetAnimationStreamSource(UnityEngine.Animations.AnimationPlayableOutput,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_SetAnimationStreamSource_m1D5F79DBDAFB09E3A236D96FE259D692150263DD (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D((&___0_output), NULL);
		int32_t L_1 = ___1_streamSource;
		AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_m20E22C1F0C5B12FC0FBB421D93B4BD5A3B62C3FA(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::SetSortingOrder(UnityEngine.Animations.AnimationPlayableOutput,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_SetSortingOrder_m74876C6AE563CA280803F7781FBA7304FCE05FAC (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E ___0_output, uint16_t ___1_sortingOrder, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D((&___0_output), NULL);
		uint16_t L_1 = ___1_sortingOrder;
		AnimationPlayableOutputExtensions_InternalSetSortingOrder_m67FB54EB92BA287562D0F0E71B3F63233161901E(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_m20E22C1F0C5B12FC0FBB421D93B4BD5A3B62C3FA (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_streamSource;
		AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7((&___0_output), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder(UnityEngine.Playables.PlayableOutputHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_m67FB54EB92BA287562D0F0E71B3F63233161901E (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_output, int32_t ___1_sortingOrder, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_sortingOrder;
		AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3((&___0_output), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, int32_t ___1_streamSource, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, int32_t);
	static AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_m52C444A031E6807C93C20CFC8017AC4FEB08BEA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)");
	_il2cpp_icall_func(___0_output, ___1_streamSource);
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, int32_t ___1_sortingOrder, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, int32_t);
	static AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_mC9BF96471E656AB7CE06B616AAF2495D35B8CAA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)");
	_il2cpp_icall_func(___0_output, ___1_sortingOrder);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6((&___0_other), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD> L_3(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327_AdjustorThunk (RuntimeObject* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___0_other, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_m42E614B0B33898D92DFE06CA6045698BE94DE633 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		__this->___m_Handle_0 = L_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___0_handle;
		AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1;
		L_1 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool L_4;
		L_4 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6;
		L_6 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_8 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_9 = ___0_handle;
		__this->___m_Handle_0 = L_9;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(_thisAdjusted, ___0_handle, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180_AdjustorThunk (RuntimeObject* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___0_other, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m88506D1B15D609B818DFDC6B2BCFF42ABB41B090 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78((&___0_other), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4> L_3(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270_AdjustorThunk (RuntimeObject* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___0_other, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m6F50D35CE1FAF52BD587DD3B440CBDE34A76B096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, String_t* ___1_name, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___2_handle, const RuntimeMethod* method) 
{
	typedef bool (*AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, String_t*, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_name, ___2_handle);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationScriptPlayable::op_Implicit(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AnimationScriptPlayable_op_Implicit_mBF02678AFA7A679981EED33224D5B2E3AEB215C0 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_playable, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646((&___0_playable), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4_AdjustorThunk (RuntimeObject* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_other, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_m0E0B65982F224BCD21CAD27DF8758C67A65296EC (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_handle, intptr_t ___2_jobReflectionData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = ___1_handle;
		intptr_t L_1 = ___2_jobReflectionData;
		il2cpp_codegen_runtime_class_init_inline(AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3((&___0_graph), L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_m5ED4D3FC06BC7A51D3A48B5611F759CB00F7CF54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___0_graph, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___1_handle, intptr_t ___2_jobReflectionData, const RuntimeMethod* method) 
{
	typedef bool (*AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, intptr_t);
	static AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationScriptPlayable_CreateHandleInternal_Injected_m6DD2A68DB5A0F7A25529B1899FB308F248C557E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0_graph, ___1_handle, ___2_jobReflectionData);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, bool ___1_singleLayerOptimization, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var)));
	}

IL_0026:
	{
		bool L_5 = ___1_singleLayerOptimization;
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB((&___0_handle), L_5, NULL);
	}

IL_0030:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = ___0_handle;
		__this->___m_Handle_0 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, bool ___1_singleLayerOptimization, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6(_thisAdjusted, ___0_handle, ___1_singleLayerOptimization, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970_AdjustorThunk (RuntimeObject* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___0_other, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_handle, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___0_handle, ___1_value);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_m27A78F2EB8840FFCC84901AB4E916ACCE8D8E49B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6((&L_1), L_0, (bool)1, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValid_m96EE3A490B88868890CF2E754838F97424A65512 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsValid_m96EE3A490B88868890CF2E754838F97424A65512_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsValid_m96EE3A490B88868890CF2E754838F97424A65512(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2;
		L_2 = TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC(__this, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		bool L_3;
		L_3 = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(__this, NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8(__this, NULL);
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_1 = ___0_stream;
		uint32_t L_2;
		L_2 = AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4(L_1, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___handleIndex_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasSkeletonIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___skeletonIndex_2;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.Animations.TransformStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_AnimatorBindingsVersion_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = TransformStreamHandle_get_animatorBindingsVersion_mD044F88843A162A554BA7EF191E52B58F9F0AFF8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::Resolve(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_Resolve_m5DDC5761EF01E700ABDB214030802982DABC3E6E (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_Resolve_m5DDC5761EF01E700ABDB214030802982DABC3E6E_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_Resolve_m5DDC5761EF01E700ABDB214030802982DABC3E6E(_thisAdjusted, ___0_stream, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolved(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolved_mB2A9548AAB37C1485AFEC2C9CD9A3D4ABC786D52 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsResolved_mB2A9548AAB37C1485AFEC2C9CD9A3D4ABC786D52_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsResolved_mB2A9548AAB37C1485AFEC2C9CD9A3D4ABC786D52(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = TransformStreamHandle_IsValidInternal_mBF1602E33ABCA25121C7CF70173D29C5291354CC(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_2 = ___0_stream;
		bool L_3;
		L_3 = TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool L_4;
		L_4 = TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F(__this, NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(L_0, NULL);
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_1 = ___0_stream;
		bool L_2;
		L_2 = TransformStreamHandle_IsResolvedInternal_m83781A03679DF4C678FE963CF21F5A2203471585(__this, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0089;
	}

IL_0015:
	{
		bool L_4;
		L_4 = TransformStreamHandle_get_createdByNative_mCC27504004588C367456D55E8295B745BE2431AC(__this, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		bool L_5;
		L_5 = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(__this, NULL);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00974C5D0A39E4A027B0EB44FE85C731384945B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6_RuntimeMethod_var)));
	}

IL_0038:
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_8 = ___0_stream;
		bool L_9;
		L_9 = TransformStreamHandle_IsSameVersionAsStream_m31E41B516413440AC8F4D5F9F233623A6DE71365(__this, L_8, NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		bool L_10;
		L_10 = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(__this, NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		bool L_11;
		L_11 = TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F(__this, NULL);
		G_B11_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B11_0 = 0;
	}

IL_0055:
	{
		G_B13_0 = G_B11_0;
		goto IL_0058;
	}

IL_0057:
	{
		G_B13_0 = 1;
	}

IL_0058:
	{
		V_2 = (bool)G_B13_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_13 = ___0_stream;
		TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA(__this, L_13, NULL);
	}

IL_0066:
	{
		bool L_14;
		L_14 = TransformStreamHandle_get_hasHandleIndex_m164F6D37B1A6B74214B09E1E6798C275C71716D1(__this, NULL);
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		bool L_15;
		L_15 = TransformStreamHandle_get_hasSkeletonIndex_m8B9589FACB6810B0EFD84033D30057ADFBC4B75F(__this, NULL);
		G_B18_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B18_0 = 0;
	}

IL_007a:
	{
		V_3 = (bool)G_B18_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_17 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82132A808F0B9E6946BE41B8C7B1FDD0D99D773C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6_RuntimeMethod_var)));
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(_thisAdjusted, ___0_stream, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPosition_m8980B6C6185653E9B962625D030C3BB1994C8B89 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPosition_m8980B6C6185653E9B962625D030C3BB1994C8B89_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetPosition_m8980B6C6185653E9B962625D030C3BB1994C8B89(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPosition_m45609A840DAAF0410F72218E58E2207841290002 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_position;
		TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetPosition_m45609A840DAAF0410F72218E58E2207841290002_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetPosition_m45609A840DAAF0410F72218E58E2207841290002(_thisAdjusted, ___0_stream, ___1_position, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotation_m02E0CE9B403FB4138605190A48A19767D6B0C42A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotation_m02E0CE9B403FB4138605190A48A19767D6B0C42A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformStreamHandle_GetRotation_m02E0CE9B403FB4138605190A48A19767D6B0C42A(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotation_mA159153895AFFB08B30B8287304A720215C364D1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___1_rotation;
		TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetRotation_mA159153895AFFB08B30B8287304A720215C364D1_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetRotation_mA159153895AFFB08B30B8287304A720215C364D1(_thisAdjusted, ___0_stream, ___1_rotation, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPosition_m30A1BF0A06551177E6D28A73D3DE71522B77C0A4 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPosition_m30A1BF0A06551177E6D28A73D3DE71522B77C0A4_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalPosition_m30A1BF0A06551177E6D28A73D3DE71522B77C0A4(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPosition_mEC97D6C69019B8212F444B33DB51BDCD9DCD6282 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_position;
		TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalPosition_mEC97D6C69019B8212F444B33DB51BDCD9DCD6282_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalPosition_mEC97D6C69019B8212F444B33DB51BDCD9DCD6282(_thisAdjusted, ___0_stream, ___1_position, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotation_mB613F5958303751C9368AD2CC613723E279985AF (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotation_mB613F5958303751C9368AD2CC613723E279985AF_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalRotation_mB613F5958303751C9368AD2CC613723E279985AF(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotation_m68B0586FA34978971ECDC909A44E1E0C13443C6A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___1_rotation;
		TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalRotation_m68B0586FA34978971ECDC909A44E1E0C13443C6A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalRotation_m68B0586FA34978971ECDC909A44E1E0C13443C6A(_thisAdjusted, ___0_stream, ___1_rotation, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScale_m559039B8F2285CC33E3E952F078EF899C8ACB451 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScale_m559039B8F2285CC33E3E952F078EF899C8ACB451_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalScale_m559039B8F2285CC33E3E952F078EF899C8ACB451(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScale(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScale_mEAC5ED65AA0B8F756E2C129ED14D78C7B3698FE2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_scale;
		TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C(__this, (&___0_stream), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalScale_mEAC5ED65AA0B8F756E2C129ED14D78C7B3698FE2_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalScale_mEAC5ED65AA0B8F756E2C129ED14D78C7B3698FE2(_thisAdjusted, ___0_stream, ___1_scale, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRS_mF633398360834FAD1B1F8E21EF8C2A01B3E38A8D (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___3_scale;
		TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203(__this, (&___0_stream), L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetLocalTRS_mF633398360834FAD1B1F8E21EF8C2A01B3E38A8D_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_GetLocalTRS_mF633398360834FAD1B1F8E21EF8C2A01B3E38A8D(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRS_mA4D470AC9B87FF6FAC880A926BD3A5F4EC30BFB2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___3_scale;
		bool L_3 = ___4_useMask;
		TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B(__this, (&___0_stream), L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalTRS_mA4D470AC9B87FF6FAC880A926BD3A5F4EC30BFB2_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalTRS_mA4D470AC9B87FF6FAC880A926BD3A5F4EC30BFB2(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, ___4_useMask, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTR_mA0526AC698E96B95E6BE3E17A477DB028EF8A499 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___2_rotation;
		TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF(__this, (&___0_stream), L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetGlobalTR_mA0526AC698E96B95E6BE3E17A477DB028EF8A499_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_GetGlobalTR_mA0526AC698E96B95E6BE3E17A477DB028EF8A499(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTR_m8C4F35DE8E639AE7D7F94F1D015AD3C16D2FC406 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method) 
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7602706A5D46D99268DB6C698A6752C96A0525F6(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___2_rotation;
		bool L_2 = ___3_useMask;
		TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4(__this, (&___0_stream), L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetGlobalTR_m8C4F35DE8E639AE7D7F94F1D015AD3C16D2FC406_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetGlobalTR_m8C4F35DE8E639AE7D7F94F1D015AD3C16D2FC406(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_useMask, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_ResolveInternal_m0008C8228981E9247DA8B0C7739DD1BF1C70EAEA(_thisAdjusted, ___0_stream, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetPositionInternal_m4D0EA1C47F1AAB4723411247DBA15135BA6A9D4C(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A(__this, L_0, (&___1_position), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetPositionInternal_m0855C3D765D6635BFEBA847061CDC90B645246CC(_thisAdjusted, ___0_stream, ___1_position, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformStreamHandle_GetRotationInternal_m53A7E32CE6B63F588F44CAE8FCBF23C32E8393C7(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683(__this, L_0, (&___1_rotation), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetRotationInternal_mE7AB735A2303DC923A69B19537FDE60B5F39CE5A(_thisAdjusted, ___0_stream, ___1_rotation, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalPositionInternal_mDF78249F5365FA56D51A9854D69DBD420CA2408A(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258(__this, L_0, (&___1_position), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalPositionInternal_m1758971CB7DC05A269612D1B975A22C8CB2CB890(_thisAdjusted, ___0_stream, ___1_position, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalRotationInternal_m5AD8291814578D1F199FBBD2E336C43FC387CEAB(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3(__this, L_0, (&___1_rotation), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalRotationInternal_mDE8F5BF1C73A90573EF3918F1C88ABB73BC10778(_thisAdjusted, ___0_stream, ___1_rotation, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformStreamHandle_GetLocalScaleInternal_mAE69D739C71A1F9AB26E9E3496294B6662F429A2(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742(__this, L_0, (&___1_scale), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_scale, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalScaleInternal_mE108B8F9D39C2C540C8619C7DECFDB685040F85C(_thisAdjusted, ___0_stream, ___1_scale, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___3_scale;
		TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_GetLocalTRSInternal_m1B1B9B973843354BCA7D7A5A76CE44EFE7F2A203(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1 = ___4_useMask;
		TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6(__this, L_0, (&___1_position), (&___2_rotation), (&___3_scale), L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_scale, bool ___4_useMask, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetLocalTRSInternal_m2FC862511AEAC5C2900D016CF31EB2E25D321D8B(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, ___4_useMask, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___2_rotation;
		TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_GetGlobalTRInternal_m71E4832B7C5D99A91FDF742CA3E54F1C43CE34AF(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1 = ___3_useMask;
		TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F(__this, L_0, (&___1_position), (&___2_rotation), L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, bool ___3_useMask, const RuntimeMethod* method)
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*>(__this + _offset);
	TransformStreamHandle_SetGlobalTRInternal_m9C62E8BD63B362A404C376B09005C024F54DC7B4(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_useMask, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_ResolveInternal_Injected_m3C2F5E0470031F9C0D33DD5C7C392F8B671B9CED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetPositionInternal_Injected_m3C3917F08A68CD4E24653CB78AEEA3577E043462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetPositionInternal_Injected_mC8D3099FC5DB732B46C4FAD237DA63CA59B2EA5A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetRotationInternal_Injected_m4863F14E289B9627C1ACADB750B56CD81ED6F857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetRotationInternal_Injected_m181A24DB2A658E488E3F0BC684A424547A6A7683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_rotation);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalPositionInternal_Injected_m365FDC3BE3E31E7E83ED3E348C089A788E25C724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalPositionInternal_Injected_mD54FB99E9BA8700F04F9A6C12F4FD857B1F68258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalRotationInternal_Injected_m0C379159283C0F4FEA175431383404203C624630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalRotationInternal_Injected_m58D671FC665AF45BE7B6753A65C3F27BDCD89EA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_rotation);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalScaleInternal_Injected_m2D639FCDA072EBFE62AF09EFBAE8DD09C1C82903_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_scale, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalScaleInternal_Injected_m0AEE77042B2DC3DE6DD4D92C92129B4A52CD4742_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_scale);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalTRSInternal_Injected_m2684C260C70D030AA66A6D9EE0641C6F8A0F41A1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation, ___4_scale);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6 (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, bool ___5_useMask, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, bool);
	static TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalTRSInternal_Injected_m4185E07C39CD19689720F3F5B6161938C39BAAF6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation, ___4_scale, ___5_useMask);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetGlobalTRInternal_Injected_mA425C4A4674833F9EEB44FBC2C5DB357B3EB306E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, bool ___4_useMask, const RuntimeMethod* method) 
{
	typedef void (*TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F_ftn) (TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, bool);
	static TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetGlobalTRInternal_Injected_mDE035F852727673707A01C6475FC52E38D98DB6F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation, ___4_useMask);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2;
		L_2 = PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A(__this, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		bool L_3;
		L_3 = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(__this, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		bool L_4;
		L_4 = PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3(__this, NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0;
		L_0 = PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0(__this, NULL);
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_1 = ___0_stream;
		uint32_t L_2;
		L_2 = AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4(L_1, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___handleIndex_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasValueArrayIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___valueArrayIndex_2;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___bindType_3;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_AnimatorBindingsVersion_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = PropertyStreamHandle_get_animatorBindingsVersion_mAF352761E16C2BC5658A2B37C77EFC88173EA4C0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = PropertyStreamHandle_IsValidInternal_mFE619567B465984FC8E00F07CC24D489802BB51B(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_2 = ___0_stream;
		bool L_3;
		L_3 = PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool L_4;
		L_4 = PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610(__this, NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B19_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(L_0, NULL);
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_1 = ___0_stream;
		bool L_2;
		L_2 = PropertyStreamHandle_IsResolvedInternal_m7B96232330AB117B2050D16FE135103D6ED97DFA(__this, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0091;
	}

IL_0015:
	{
		bool L_4;
		L_4 = PropertyStreamHandle_get_createdByNative_m2610F75D942E639F8D9919D9A8A8E2210503292A(__this, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		bool L_5;
		L_5 = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(__this, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		bool L_6;
		L_6 = PropertyStreamHandle_get_hasBindType_mF482FD67DC2BBB8AF20A959C846430577FCC51B3(__this, NULL);
		G_B6_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 1;
	}

IL_0031:
	{
		V_1 = (bool)G_B6_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A5239659C252C3C95FC09A31CA37CA6F6B07FAE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C_RuntimeMethod_var)));
	}

IL_0040:
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_9 = ___0_stream;
		bool L_10;
		L_10 = PropertyStreamHandle_IsSameVersionAsStream_m105BA0425054D86214E70C3D0746517A0BBD5305(__this, L_9, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		bool L_11;
		L_11 = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(__this, NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		bool L_12;
		L_12 = PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610(__this, NULL);
		G_B12_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B12_0 = 0;
	}

IL_005d:
	{
		G_B14_0 = G_B12_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B14_0 = 1;
	}

IL_0060:
	{
		V_2 = (bool)G_B14_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_14 = ___0_stream;
		PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C(__this, L_14, NULL);
	}

IL_006e:
	{
		bool L_15;
		L_15 = PropertyStreamHandle_get_hasHandleIndex_m296B641953CA1478332DE8D4E3616EDDE67F4415(__this, NULL);
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		bool L_16;
		L_16 = PropertyStreamHandle_get_hasValueArrayIndex_m6BFF272278DB968E4732EE7BAA990F18258DC610(__this, NULL);
		G_B19_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B19_0 = 0;
	}

IL_0082:
	{
		V_3 = (bool)G_B19_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10F6FECF95C1235E3B90F738314A338A55A4DF3B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C_RuntimeMethod_var)));
	}

IL_0091:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(_thisAdjusted, ___0_stream, method);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloat(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF_RuntimeMethod_var)));
	}

IL_0025:
	{
		float L_3;
		L_3 = PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783(__this, (&___0_stream), NULL);
		V_1 = L_3;
		goto IL_0030;
	}

IL_0030:
	{
		float L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  float PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	float _returnValue;
	_returnValue = PropertyStreamHandle_GetFloat_mAEC50079467900B74F7B485BBAF65A4DE1BBB8DF(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloat(UnityEngine.Animations.AnimationStream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, float ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF248A46D93F240BD665585183A3658090FB86C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33_RuntimeMethod_var)));
	}

IL_0025:
	{
		float L_3 = ___1_value;
		PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8(__this, (&___0_stream), L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, float ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetFloat_m9FA9F67C2AA473A7395EACF2563E7C8A06008C33(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetInt(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = __this->___bindType_3;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = __this->___bindType_3;
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_5;
		L_5 = PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9(__this, (&___0_stream), NULL);
		V_1 = L_5;
		goto IL_0048;
	}

IL_0048:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PropertyStreamHandle_GetInt_m58CECCE1A73DB1EA96E287B5B7BF51BF502D8D98(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetInt(UnityEngine.Animations.AnimationStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, int32_t ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = __this->___bindType_3;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = __this->___bindType_3;
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF248A46D93F240BD665585183A3658090FB86C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_5 = ___1_value;
		PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4(__this, (&___0_stream), L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, int32_t ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetInt_m1E7A8AF3165E77EB0148AC17FB641711134DBE48(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBool(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->___bindType_3;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FD6FF0BE087CD9281920D7CEAF428070CEF0D13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0_RuntimeMethod_var)));
	}

IL_0031:
	{
		bool L_4;
		L_4 = PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD(__this, (&___0_stream), NULL);
		V_1 = L_4;
		goto IL_003c;
	}

IL_003c:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_GetBool_mBB5B008988E6CC47C526CF654E53804909C141E0(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBool(UnityEngine.Animations.AnimationStream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, bool ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_mD4036D6F0444B68BC4C1AECDD7429FEBAF03203C(__this, (&___0_stream), NULL);
		int32_t L_0 = __this->___bindType_3;
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->___bindType_3;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF248A46D93F240BD665585183A3658090FB86C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7_RuntimeMethod_var)));
	}

IL_0031:
	{
		bool L_4 = ___1_value;
		PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26(__this, (&___0_stream), L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, bool ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetBool_m8307F19E9C41A431FC9A71128A305B547BE675C7(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_ResolveInternal_mFB0A48675D8D847197CB392325CDCA837B82E64C(_thisAdjusted, ___0_stream, method);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		float L_1;
		L_1 = PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	float _returnValue;
	_returnValue = PropertyStreamHandle_GetFloatInternal_m11E03DE3C420D8F9BFA7926D1F452766BD34B783(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal(UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, float ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		float L_1 = ___1_value;
		PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, float ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetFloatInternal_m044594EAE3DEEC6030E096DB0A8F0454ADCAD6A8(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		int32_t L_1;
		L_1 = PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PropertyStreamHandle_GetIntInternal_m598EC48F1700FB43EF1A5880178BB841A781D4C9(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal(UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		int32_t L_1 = ___1_value;
		PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, int32_t ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetIntInternal_m37894828B9FD37A78CCE5A6F9F9EB7E1C0FE72A4(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	bool _returnValue;
	_returnValue = PropertyStreamHandle_GetBoolInternal_m25D06AA6F53B3265E80243E589F39EF4C30E7DAD(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal(UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, bool ___1_value, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1 = ___1_value;
		PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, bool ___1_value, const RuntimeMethod* method)
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*>(__this + _offset);
	PropertyStreamHandle_SetBoolInternal_mD237DF6939F5BE683D485E984C37791624C67A26(_thisAdjusted, ___0_stream, ___1_value, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef void (*PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_ResolveInternal_Injected_m2F38D58EFF0643C85F7ABA035DAC718D5A885B0F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef float (*PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetFloatInternal_Injected_m6604EAC314F4B69CAC8601BE540A723ADCC8734E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_stream);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, float ___2_value, const RuntimeMethod* method) 
{
	typedef void (*PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, float);
	static PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetFloatInternal_Injected_mBFF2DBFE042CB9C68B804BB413E28171D465A94F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_value);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef int32_t (*PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetIntInternal_Injected_mDFDACC53C8FAA687E154D78C9A86B58EA836AF14_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_stream);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, int32_t ___2_value, const RuntimeMethod* method) 
{
	typedef void (*PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, int32_t);
	static PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetIntInternal_Injected_m825B4B4CC03932B30E2A9DA34500012C429765FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_value);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6 (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef bool (*PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetBoolInternal_Injected_mDE6D207C4962AC0FC356962421418A632D7120D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_stream);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, bool ___2_value, const RuntimeMethod* method) 
{
	typedef void (*PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B_ftn) (PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, bool);
	static PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetBoolInternal_Injected_m4489226DE93D01A970F9BF2A71E11D0F826C804B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.TransformSceneHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_IsValid_m11DB3FA1E3137CA1C2D4D4BC18AD717FCCAC65E2 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		bool L_0;
		L_0 = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A((&___0_stream), NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1;
		L_1 = TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D(__this, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B(__this, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3;
		L_3 = TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537(__this, (&___0_stream), NULL);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_IsValid_m11DB3FA1E3137CA1C2D4D4BC18AD717FCCAC65E2_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_IsValid_m11DB3FA1E3137CA1C2D4D4BC18AD717FCCAC65E2(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0 = __this->___valid_0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___transformSceneHandleDefinitionIndex_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::CheckIsValid(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(L_0, NULL);
		bool L_1;
		L_1 = TransformSceneHandle_get_createdByNative_m40C489AAD66DEDFEB69F6BB25B1177FC51922D3D(__this, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2;
		L_2 = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_mBD4B49152989D4379E6D726B0F7E834EA484383B(__this, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral972CE48A8E26750559B1B00039204D0DE5B03904)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A_RuntimeMethod_var)));
	}

IL_002b:
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_5 = ___0_stream;
		bool L_6;
		L_6 = TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537(__this, L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_8 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD05EE9FE9EFEEB35F354D97C2927EEB880DA9264)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A_RuntimeMethod_var)));
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(_thisAdjusted, ___0_stream, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPosition_mDB8261C4AF79828292D555DBF91A6559DE41B3B8 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPosition_mDB8261C4AF79828292D555DBF91A6559DE41B3B8_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetPosition_mDB8261C4AF79828292D555DBF91A6559DE41B3B8(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPosition_mF5AFF93B5129702C280CCEB0603100377BFE2D32 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPosition_mF5AFF93B5129702C280CCEB0603100377BFE2D32_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalPosition_mF5AFF93B5129702C280CCEB0603100377BFE2D32(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotation_m8F6CA3E2302A43103A808120AEE1C527EB2A2F05 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotation_m8F6CA3E2302A43103A808120AEE1C527EB2A2F05_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformSceneHandle_GetRotation_m8F6CA3E2302A43103A808120AEE1C527EB2A2F05(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotation_mEB7C44D455654A40518C8AE8D8CC0D191E194B8D (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotation_mEB7C44D455654A40518C8AE8D8CC0D191E194B8D_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalRotation_mEB7C44D455654A40518C8AE8D8CC0D191E194B8D(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScale_m46D9A20E7DC5967A0EE6F7C217FAA68FBB93611E (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069(__this, (&___0_stream), NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScale_m46D9A20E7DC5967A0EE6F7C217FAA68FBB93611E_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalScale_m46D9A20E7DC5967A0EE6F7C217FAA68FBB93611E(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRS_m5FBE0248443B3D34C7787A50DE89BB473638CADB (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) 
{
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___3_scale;
		TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497(__this, (&___0_stream), L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetLocalTRS_m5FBE0248443B3D34C7787A50DE89BB473638CADB_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_GetLocalTRS_m5FBE0248443B3D34C7787A50DE89BB473638CADB(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTR_m7CB0885446CA0894BF681F1954C3E0FB8D31C9EB (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	{
		TransformSceneHandle_CheckIsValid_m33214B5950C49A143A5548B7FB1672062204655A(__this, (&___0_stream), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = ___2_rotation;
		TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343(__this, (&___0_stream), L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetGlobalTR_m7CB0885446CA0894BF681F1954C3E0FB8D31C9EB_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_GetGlobalTR_m7CB0885446CA0894BF681F1954C3E0FB8D31C9EB(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		bool L_1;
		L_1 = TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	bool _returnValue;
	_returnValue = TransformSceneHandle_HasValidTransform_m19ABA61E5902DA7F1207798BBB4DCFBE515B9537(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetPositionInternal_mAC29651E3EB5FC3BD4CB49B2B09EB9897375FC29(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalPositionInternal_mAFD402FC292DD1D9BDBF6BE446E89CDD85A47182(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformSceneHandle_GetRotationInternal_m53DDDEE9D5824A6E5BFEE5C5681A33E468E0FC5E(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalRotationInternal_mC63DB1B1DA36584AC8C550683E9E2F67F350A688(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TransformSceneHandle_GetLocalScaleInternal_m15883C28FC7DE56F00374B6A14F027CFC6C35069(_thisAdjusted, ___0_stream, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___2_rotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___3_scale;
		TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_GetLocalTRSInternal_mBB816EAB9B873A23A8B01C96789480F438968497(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, ___3_scale, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method) 
{
	{
		AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* L_0 = ___0_stream;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___2_rotation;
		TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343_AdjustorThunk (RuntimeObject* __this, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, const RuntimeMethod* method)
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*>(__this + _offset);
	TransformSceneHandle_GetGlobalTRInternal_m821151819DD1E3F5ABA1D2C8DC5372C67A2DF343(_thisAdjusted, ___0_stream, ___1_position, ___2_rotation, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, const RuntimeMethod* method) 
{
	typedef bool (*TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_HasValidTransform_Injected_m1F0CEB3799D44896F7F501AE0E99BF49938ADA4B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_stream);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetPositionInternal_Injected_m5CB0EBF73345BD9F90E504DCEFE1C2D4B349FAB0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalPositionInternal_Injected_mA2701FE4C3866CF6BB83C18C183D197975A002F8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetRotationInternal_Injected_m50FA487714327D6B98868DB6322D1F72260B8BBE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalRotationInternal_Injected_m580089F9FDCF7CB1BFBFDBA70EE7C49BA3B90304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalScaleInternal_Injected_mD0E2E2A2B1728035C791DC88BAC3E16C3B96FBBE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_ret);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___4_scale, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalTRSInternal_Injected_m09BD17EECEC5ED6D21F7224862F01C0BEAD9CE9C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation, ___4_scale);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26 (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___0__unity_self, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___1_stream, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_rotation, const RuntimeMethod* method) 
{
	typedef void (*TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26_ftn) (TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*, AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetGlobalTRInternal_Injected_mBAF0D818077C87003CFACC9BCE40CD62C5208A26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___0__unity_self, ___1_stream, ___2_position, ___3_rotation);
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
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>,Unity.Collections.NativeArray`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadFloats_m55F39914E47481B30592FA1DDB4354AF133F29EC (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C L_0 = ___1_handles;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1 = ___2_buffer;
		int32_t L_2;
		L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC((&___0_stream), L_0, L_1, AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m258DD671FB0A25F3D024F7102432145099174DBC_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_002a;
	}

IL_0015:
	{
		NativeArray_1_t798B180994A003D789E550668FB8C34394A61C2C L_5 = ___1_handles;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673(L_5, NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1_m06B34A9BC9CCEAD8466D3E991827502A478D3673_RuntimeMethod_var);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_7 = ___2_buffer;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F(L_7, NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		int32_t L_9 = V_0;
		AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A((&___0_stream), L_6, L_8, L_9, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertySceneHandles, void* ___2_floatBuffer, int32_t ___3_count, const RuntimeMethod* method) 
{
	typedef void (*AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A_ftn) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, void*, void*, int32_t);
	static AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationSceneHandleUtility_ReadSceneFloatsInternal_mDF52B54C3765CC9856DC4F5A5BF9D358D4D4312A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___0_stream, ___1_propertySceneHandles, ___2_floatBuffer, ___3_count);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>,Unity.Collections.NativeArray`1<System.Single>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteFloats_m647C25053281C77FAA8F6BC29D54A96E5DDEFE63 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, bool ___3_useMask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C((&___0_stream), NULL);
		NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 L_0 = ___1_handles;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1 = ___2_buffer;
		int32_t L_2;
		L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B((&___0_stream), L_0, L_1, AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0033;
	}

IL_001d:
	{
		NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 L_5 = ___1_handles;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3(L_5, NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_7 = ___2_buffer;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F(L_7, NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		int32_t L_9 = V_0;
		bool L_10 = ___3_useMask;
		AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649((&___0_stream), L_6, L_8, L_9, L_10, NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>,Unity.Collections.NativeArray`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadFloats_m4F0751C5758AC2784E0BFB81788BC63411F7E3C4 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A ___0_stream, NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 ___1_handles, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___2_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C((&___0_stream), NULL);
		NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 L_0 = ___1_handles;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1 = ___2_buffer;
		int32_t L_2;
		L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B((&___0_stream), L_0, L_1, AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m575B05C2A15EF2FFE16FFAB3A1860F4C877B5B7B_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0032;
	}

IL_001d:
	{
		NativeArray_1_t49E030AAA071A257CED2C04428CE048534E26719 L_5 = ___1_handles;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3(L_5, NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3_m1EAB6C7F6F45D9320FAA061D4E0EB19736F8B2F3_RuntimeMethod_var);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_7 = ___2_buffer;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F(L_7, NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m390EFBCA8A0D0562B6B28C5CFE8947408E4DC14F_RuntimeMethod_var);
		int32_t L_9 = V_0;
		AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C((&___0_stream), L_6, L_8, L_9, NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertyStreamHandles, void* ___2_floatBuffer, int32_t ___3_count, const RuntimeMethod* method) 
{
	typedef void (*AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C_ftn) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, void*, void*, int32_t);
	static AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStreamHandleUtility_ReadStreamFloatsInternal_m6BAC0676E422F2C256C06AA0EA32F7B66D04F84C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___0_stream, ___1_propertyStreamHandles, ___2_floatBuffer, ___3_count);
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0_stream, void* ___1_propertyStreamHandles, void* ___2_floatBuffer, int32_t ___3_count, bool ___4_useMask, const RuntimeMethod* method) 
{
	typedef void (*AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649_ftn) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*, void*, void*, int32_t, bool);
	static AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStreamHandleUtility_WriteStreamFloatsInternal_m189497A194CA6D6F1EC649B83C6AA42476089649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___0_stream, ___1_propertyStreamHandles, ___2_floatBuffer, ___3_count, ___4_useMask);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.TransformStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamTransform(UnityEngine.Animator,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E AnimatorJobExtensions_BindStreamTransform_m9E23872D781BC0754909267ED356266392F4E26D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, const RuntimeMethod* method) 
{
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E V_0;
	memset((&V_0), 0, sizeof(V_0));
	TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F(L_0, L_1, (&V_0), NULL);
		TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 AnimatorJobExtensions_BindStreamProperty_m199C36204F072AECF047AEFC92B1A62A61FF2F7F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, const RuntimeMethod* method) 
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		Type_t* L_2 = ___2_type;
		String_t* L_3 = ___3_property;
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_4;
		L_4 = AnimatorJobExtensions_BindStreamProperty_m02E8A9116C4DB619A2B4E28AEADC593ECDE78994(L_0, L_1, L_2, L_3, (bool)0, NULL);
		V_0 = L_4;
		goto IL_000e;
	}

IL_000e:
	{
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 AnimatorJobExtensions_BindCustomStreamProperty_mB19AC2FE9BCD4C98DA571A375080E17A114D374C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, String_t* ___1_property, int32_t ___2_type, const RuntimeMethod* method) 
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		String_t* L_1 = ___1_property;
		int32_t L_2 = ___2_type;
		AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504(L_0, L_1, L_2, (&V_0), NULL);
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 AnimatorJobExtensions_BindStreamProperty_m02E8A9116C4DB619A2B4E28AEADC593ECDE78994 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, const RuntimeMethod* method) 
{
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		Type_t* L_2 = ___2_type;
		String_t* L_3 = ___3_property;
		bool L_4 = ___4_isObjectReference;
		AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415(L_0, L_1, L_2, L_3, L_4, (&V_0), NULL);
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_5 = V_0;
		V_1 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3 L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Animations.TransformSceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneTransform(UnityEngine.Animator,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB AnimatorJobExtensions_BindSceneTransform_m78A489DBF2ED9127F74F35C33CD9C712AC73DE76 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, const RuntimeMethod* method) 
{
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6(L_0, L_1, (&V_0), NULL);
		TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 AnimatorJobExtensions_BindSceneProperty_mB75521D482FE6417947F331C8831AB67B7B6E8B9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, const RuntimeMethod* method) 
{
	PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		Type_t* L_2 = ___2_type;
		String_t* L_3 = ___3_property;
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 L_4;
		L_4 = AnimatorJobExtensions_BindSceneProperty_m5D7AEB5EEDBC08245FDBE69BF129BF0CE66B7743(L_0, L_1, L_2, L_3, (bool)0, NULL);
		V_0 = L_4;
		goto IL_000e;
	}

IL_000e:
	{
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 AnimatorJobExtensions_BindSceneProperty_m5D7AEB5EEDBC08245FDBE69BF129BF0CE66B7743 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, const RuntimeMethod* method) 
{
	PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_transform;
		Type_t* L_2 = ___2_type;
		String_t* L_3 = ___3_property;
		bool L_4 = ___4_isObjectReference;
		AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11(L_0, L_1, L_2, L_3, L_4, (&V_0), NULL);
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 L_5 = V_0;
		V_1 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1 L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E* ___2_transformStreamHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, TransformStreamHandle_t4C1B88E471D0A729DAF29F631D14C3E9CE7A588E*);
	static AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindStreamTransform_m83A49A8A13E2FA7AD67FAECA1B24F11D15550C2F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_transform, ___2_transformStreamHandle);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___5_propertyStreamHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Type_t*, String_t*, bool, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*);
	static AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindStreamProperty_mE09521CB89443739B6428A0FD6B012D8C0601415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_transform, ___2_type, ___3_property, ___4_isObjectReference, ___5_propertyStreamHandle);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, String_t* ___1_property, int32_t ___2_propertyType, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3* ___3_propertyStreamHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, int32_t, PropertyStreamHandle_tA4F5D5D4C6A47069B2D84EDDD84B8A7F982DA1B3*);
	static AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindCustomStreamProperty_mFD263ACFEF7E93728830EFD5133399F922EF6504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_property, ___2_propertyType, ___3_propertyStreamHandle);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB* ___2_transformSceneHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, TransformSceneHandle_t4A2454F99C8DC8FFFBFA0C2B35A4AFD3067961EB*);
	static AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindSceneTransform_m5C33CC9DC1C95933DA91E42411080A4DA49216C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_transform, ___2_transformSceneHandle);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_transform, Type_t* ___2_type, String_t* ___3_property, bool ___4_isObjectReference, PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1* ___5_propertySceneHandle, const RuntimeMethod* method) 
{
	typedef void (*AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Type_t*, String_t*, bool, PropertySceneHandle_tB8CC36E4534888D6FCAC24F3337F4D436A327EE1*);
	static AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindSceneProperty_m7C4D6BE064BBE342314E1BCD6101F451794E0A11_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)");
	_il2cpp_icall_func(___0_animator, ___1_transform, ___2_type, ___3_property, ___4_isObjectReference, ___5_propertySceneHandle);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4_AdjustorThunk (RuntimeObject* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___0_other, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4(_thisAdjusted, ___0_other, method);
	return _returnValue;
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
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B((&___0_other), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C> L_3(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3_AdjustorThunk (RuntimeObject* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___0_other, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_mFA5FE84F06C8E9A89C07190055BC898525F897C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Int32 UnityEngine.Animations.ParentConstraint::get_sourceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParentConstraint_get_sourceCount_m6D83D678E00CFBC77A4626EB9B904C59C24FFBCB (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ParentConstraint_GetSourceCountInternal_mB5BC92E4C164357647E292EF2D52C37683FD24EB(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Animations.ParentConstraint::GetSourceCountInternal(UnityEngine.Animations.ParentConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParentConstraint_GetSourceCountInternal_mB5BC92E4C164357647E292EF2D52C37683FD24EB (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* ___0_self, const RuntimeMethod* method) 
{
	typedef int32_t (*ParentConstraint_GetSourceCountInternal_mB5BC92E4C164357647E292EF2D52C37683FD24EB_ftn) (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC*);
	static ParentConstraint_GetSourceCountInternal_mB5BC92E4C164357647E292EF2D52C37683FD24EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParentConstraint_GetSourceCountInternal_mB5BC92E4C164357647E292EF2D52C37683FD24EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.ParentConstraint::GetSourceCountInternal(UnityEngine.Animations.ParentConstraint)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_self);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.ParentConstraint::SetTranslationOffset(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetTranslationOffset_mFD4350AE123DE476B284219935CB52DE1544BF15 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ParentConstraint_ValidateSourceIndex_m081826C60AECFBDBCA08F338D069837D0D75C49B(__this, L_0, NULL);
		int32_t L_1 = ___0_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_value;
		ParentConstraint_SetTranslationOffsetInternal_m9E22067F8904B87016C803380E24F266FDBFA01D(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animations.ParentConstraint::SetTranslationOffsetInternal(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetTranslationOffsetInternal_m9E22067F8904B87016C803380E24F266FDBFA01D (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ParentConstraint_SetTranslationOffsetInternal_Injected_m3995DB6B0F0DB7740D1DAFB5ED3937F85117DE88(__this, L_0, (&___1_value), NULL);
		return;
	}
}
// System.Void UnityEngine.Animations.ParentConstraint::SetRotationOffset(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetRotationOffset_m8C346F0ECB6FF54DE74D3170229AD05522FB99AA (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ParentConstraint_ValidateSourceIndex_m081826C60AECFBDBCA08F338D069837D0D75C49B(__this, L_0, NULL);
		int32_t L_1 = ___0_index;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_value;
		ParentConstraint_SetRotationOffsetInternal_mC149045D55A9824067299E474112E61D0EAA2E14(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animations.ParentConstraint::SetRotationOffsetInternal(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetRotationOffsetInternal_mC149045D55A9824067299E474112E61D0EAA2E14 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ParentConstraint_SetRotationOffsetInternal_Injected_mBABF60A9D803907CA7A629A84291937287F4A8B3(__this, L_0, (&___1_value), NULL);
		return;
	}
}
// System.Void UnityEngine.Animations.ParentConstraint::ValidateSourceIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_ValidateSourceIndex_m081826C60AECFBDBCA08F338D069837D0D75C49B (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0;
		L_0 = ParentConstraint_get_sourceCount_m6D83D678E00CFBC77A4626EB9B904C59C24FFBCB(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral697BC915CC32A6BCBF712F64039C37FE7AD18464)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParentConstraint_ValidateSourceIndex_m081826C60AECFBDBCA08F338D069837D0D75C49B_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_3 = ___0_index;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = ___0_index;
		int32_t L_5;
		L_5 = ParentConstraint_get_sourceCount_m6D83D678E00CFBC77A4626EB9B904C59C24FFBCB(__this, NULL);
		G_B5_0 = ((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 1;
	}

IL_002d:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		int32_t L_10;
		L_10 = ParentConstraint_get_sourceCount_m6D83D678E00CFBC77A4626EB9B904C59C24FFBCB(__this, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF49B5D043E839AD3290B85DFA87359555450522)), L_9, L_12, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_14 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParentConstraint_ValidateSourceIndex_m081826C60AECFBDBCA08F338D069837D0D75C49B_RuntimeMethod_var)));
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 UnityEngine.Animations.ParentConstraint::AddSource(UnityEngine.Animations.ConstraintSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParentConstraint_AddSource_m37997059B86A1DB5EFD8E94F7EA754120DF99194 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ParentConstraint_AddSource_Injected_m0A8CB716DCF35CAE4C614632A76B6897F87E3788(__this, (&___0_source), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Animations.ParentConstraint::SetTranslationOffsetInternal_Injected(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetTranslationOffsetInternal_Injected_m3995DB6B0F0DB7740D1DAFB5ED3937F85117DE88 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*ParentConstraint_SetTranslationOffsetInternal_Injected_m3995DB6B0F0DB7740D1DAFB5ED3937F85117DE88_ftn) (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static ParentConstraint_SetTranslationOffsetInternal_Injected_m3995DB6B0F0DB7740D1DAFB5ED3937F85117DE88_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParentConstraint_SetTranslationOffsetInternal_Injected_m3995DB6B0F0DB7740D1DAFB5ED3937F85117DE88_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.ParentConstraint::SetTranslationOffsetInternal_Injected(System.Int32,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_index, ___1_value);
}
// System.Void UnityEngine.Animations.ParentConstraint::SetRotationOffsetInternal_Injected(System.Int32,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentConstraint_SetRotationOffsetInternal_Injected_mBABF60A9D803907CA7A629A84291937287F4A8B3 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*ParentConstraint_SetRotationOffsetInternal_Injected_mBABF60A9D803907CA7A629A84291937287F4A8B3_ftn) (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static ParentConstraint_SetRotationOffsetInternal_Injected_mBABF60A9D803907CA7A629A84291937287F4A8B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParentConstraint_SetRotationOffsetInternal_Injected_mBABF60A9D803907CA7A629A84291937287F4A8B3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.ParentConstraint::SetRotationOffsetInternal_Injected(System.Int32,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_index, ___1_value);
}
// System.Int32 UnityEngine.Animations.ParentConstraint::AddSource_Injected(UnityEngine.Animations.ConstraintSource&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParentConstraint_AddSource_Injected_m0A8CB716DCF35CAE4C614632A76B6897F87E3788 (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC* __this, ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* ___0_source, const RuntimeMethod* method) 
{
	typedef int32_t (*ParentConstraint_AddSource_Injected_m0A8CB716DCF35CAE4C614632A76B6897F87E3788_ftn) (ParentConstraint_t94E0770CE2609C4E88110E921EFFE8AB22D59EDC*, ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F*);
	static ParentConstraint_AddSource_Injected_m0A8CB716DCF35CAE4C614632A76B6897F87E3788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ParentConstraint_AddSource_Injected_m0A8CB716DCF35CAE4C614632A76B6897F87E3788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.ParentConstraint::AddSource_Injected(UnityEngine.Animations.ConstraintSource&)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_source);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Animations.ConstraintSource
IL2CPP_EXTERN_C void ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshal_pinvoke(const ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F& unmarshaled, ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceTransform_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceTransform' of type 'ConstraintSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceTransform_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshal_pinvoke_back(const ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_pinvoke& marshaled, ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F& unmarshaled)
{
	Exception_t* ___m_SourceTransform_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceTransform' of type 'ConstraintSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceTransform_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Animations.ConstraintSource
IL2CPP_EXTERN_C void ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshal_pinvoke_cleanup(ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Animations.ConstraintSource
IL2CPP_EXTERN_C void ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshal_com(const ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F& unmarshaled, ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceTransform_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceTransform' of type 'ConstraintSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceTransform_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshal_com_back(const ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_com& marshaled, ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F& unmarshaled)
{
	Exception_t* ___m_SourceTransform_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceTransform' of type 'ConstraintSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceTransform_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Animations.ConstraintSource
IL2CPP_EXTERN_C void ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshal_com_cleanup(ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Animations.ConstraintSource::set_sourceTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_sourceTransform_mC905D9E04293D785BA40E1E0378457A77170A31B (ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___m_SourceTransform_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SourceTransform_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConstraintSource_set_sourceTransform_mC905D9E04293D785BA40E1E0378457A77170A31B_AdjustorThunk (RuntimeObject* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method)
{
	ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F*>(__this + _offset);
	ConstraintSource_set_sourceTransform_mC905D9E04293D785BA40E1E0378457A77170A31B(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Animations.ConstraintSource::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_weight_m40EADC470F7D906EEB89A515F75CC8B0648368D7 (ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___m_Weight_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ConstraintSource_set_weight_m40EADC470F7D906EEB89A515F75CC8B0648368D7_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConstraintSource_tA4C8733A808A376FC2767B6CB984C63870357C5F*>(__this + _offset);
	ConstraintSource_set_weight_m40EADC470F7D906EEB89A515F75CC8B0648368D7(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC_AdjustorThunk (RuntimeObject* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___0_other, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_m4FC582F607F00D5E2A6B97219D2D4150AFA42AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E_AdjustorThunk (RuntimeObject* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___0_other, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m7D67E8E778387293AF1ACB1FDBE6ADA3E456A969 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.UInt32 UnityEngine.Animations.AnimationStream::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___m_AnimatorBindingsVersion_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = AnimationStream_get_animatorBindingsVersion_mD7D19DCE96F93CE4DC36457F974C5B8562A3B5E4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationStream::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		uint32_t L_0 = __this->___m_AnimatorBindingsVersion_0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)2))))
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_1 = __this->___constant_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_4 = __this->___input_2;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_7 = __this->___output_3;
		intptr_t L_8 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_9;
		L_9 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_10 = __this->___workspace_4;
		intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_12;
		L_12 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_13 = __this->___animationHandleBinder_6;
		intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_15;
		L_15 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_13, L_14, NULL);
		G_B7_0 = ((int32_t)(L_15));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 0;
	}

IL_0065:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0068;
	}

IL_0068:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C  bool AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationStream::CheckIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = AnimationStream_get_isValid_mE1F032BDA653D5A903DCD427F4677A6C9C4C227A(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB31E4AEFDFD2E76052D908F31AC56B3ABCFC7987)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C_RuntimeMethod_var)));
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(_thisAdjusted, method);
}
// System.Single UnityEngine.Animations.AnimationStream::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_get_deltaTime_mECEF75B188313080405BFB556AB4CFD972233861 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		AnimationStream_CheckIsValid_m6C46800E1A5A4BE27FF761A93F72BC3CD751174C(__this, NULL);
		float L_0;
		L_0 = AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9(__this, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimationStream_get_deltaTime_mECEF75B188313080405BFB556AB4CFD972233861_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimationStream_get_deltaTime_mECEF75B188313080405BFB556AB4CFD972233861(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* __this, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimationStream_GetDeltaTime_m335ACEAEEAEE7E3FAE1CCBD81DA839C6C1CFF0A9(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55 (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55_ftn) (AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A*);
	static AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStream_GetDeltaTime_Injected_mF06679592F1FEFA1DD24E4553554913F59DAAE55_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_Create_m65847A70F6C74854387814C5B1D4C281B6CCCDC4 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___2_target, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___1_name;
		bool L_1;
		L_1 = AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49((&___0_graph), L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_3;
		L_3 = AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900(NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_4 = V_0;
		AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A((&V_1), L_4, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = ___2_target;
		AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE((&V_1), L_5, NULL);
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793((&___0_handle), PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (&__this->___m_Handle_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = ___0_value;
		AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE_AdjustorThunk (RuntimeObject* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_value, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_handle, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___1_target, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)");
	_il2cpp_icall_func(___0_handle, ___1_target);
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
// System.Void UnityEngine.Animations.NotKeyableAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotKeyableAttribute__ctor_m818249C0E7E98C56F41B672A3140A87EA568EB84 (NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
