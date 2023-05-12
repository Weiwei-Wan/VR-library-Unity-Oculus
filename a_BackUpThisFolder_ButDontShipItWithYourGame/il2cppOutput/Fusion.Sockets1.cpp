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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>>
struct ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Object>
struct ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>
struct ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>
struct Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<Fusion.Sockets.Stun.StunMessage/AttributeType>
struct IEqualityComparer_1_t2C3BC05DB29981EF4BC834D4D7DB981A20022D99;
// System.Collections.Generic.Dictionary`2/KeyCollection<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>
struct KeyCollection_tE9ED012651564B19CCEF4CBAA6AE58854AF5060E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>>
struct Tables_t494AF1DC5A012C1FF6E32AB816E5E31B4E507BC1;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Int32,Fusion.Sockets.NetAddress>
struct Tables_tFEDF444C34B5988C576E12F23B82AFB38A98BF26;
// System.Threading.Tasks.TaskFactory`1<System.Net.IPAddress[]>
struct TaskFactory_1_tDD05F826FE9D42F2F143BC685A7396C663E6CFE4;
// System.Threading.Tasks.TaskFactory`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct TaskFactory_1_t0CF5D89A9F90E4FE08C729D60EBD51FFC29AFC2B;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Net.IPAddress[]>
struct Task_1_tAC26C3CB300EB1DB608D4ADE41BFFBD5924E4670;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Threading.Tasks.Task`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct Task_1_t26A076F73CA670AC1EC4EC08576883918B068187;
// System.Collections.Generic.Dictionary`2/ValueCollection<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>
struct ValueCollection_t0481608BA44EF48DFD4F7C3E0FD928F49615C0AD;
// System.Collections.Generic.Dictionary`2/Entry<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>[]
struct EntryU5BU5D_t065351D969E70A4A88A3BB5AE9DB07CA6238F363;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>>[]
struct KeyValuePair_2U5BU5D_tD0811EDB82A01163EDA1CD0FB1FC2465D36B9A2D;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Fusion.Sockets.NetAddress>[]
struct KeyValuePair_2U5BU5D_tF46CD4AEC817902168793DFBAFA78BE09A7CDB43;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// Fusion.Sockets.Stun.StunServers/StunServer[]
struct StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Fusion.Protocol.ICommunicator
struct ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Fusion.Sockets.INetSocket
struct INetSocket_t8BC54CB2E1F9BA41FCE52BFAD0B25F6CA0031F0E;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Fusion.Sockets.NetBitBuffer
struct NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2;
// Fusion.Sockets.NetBitBufferBlock
struct NetBitBufferBlock_tF5C722B414B07454534F96063A2A033BB96F5DBA;
// Fusion.Sockets.NetCommandRefused
struct NetCommandRefused_t8F0ABB635AE4C48533FDE02E1EDD726BE4EA8910;
// Fusion.Sockets.NetPeerGroup
struct NetPeerGroup_tE5EF42226DD0A04D0B46238BCCA55C5BDFE31CBA;
// Fusion.Sockets.NetPeerGroupMap
struct NetPeerGroupMap_tED413AD9802FA7A8B02A20C7F52DB37D036AA4D9;
// Fusion.Sockets.NetSocketRelay
struct NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99;
// Fusion.Sockets.ReliableHeader
struct ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Fusion.Sockets.Stun.StunErrorAttribute
struct StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2;
// Fusion.Sockets.Stun.StunMessage
struct StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A;
// Fusion.Sockets.Stun.StunResult
struct StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// Fusion.Sockets.Stun.StunServers/StunServer
struct StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetSocket_t8BC54CB2E1F9BA41FCE52BFAD0B25F6CA0031F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NATType_tA4CE5E0E6F04B1D91FB863D289B080E6D5E6ECEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskManager_t95955ADB242732E5EC1EA4D9A4A0B1F31799976D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B93E2CFCB8E2955088EFD8A4B12D6780590E567;
IL2CPP_EXTERN_C String_t* _stringLiteral0E19E0F52E30F2F710BE4D4762F3BD829D1933FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1AB4B52315036F8F8AA7ADA3F72C61DA1E4AD60D;
IL2CPP_EXTERN_C String_t* _stringLiteral1CE1F17187ECFF21ECE9C4168E806B400D93B69B;
IL2CPP_EXTERN_C String_t* _stringLiteral1DD8626B09368EA05B680FEA8C90AC2242D3962D;
IL2CPP_EXTERN_C String_t* _stringLiteral40114FFF257678C29FF8C3EF907BA609E4F07350;
IL2CPP_EXTERN_C String_t* _stringLiteral52C6EAFB8DEAAA162FDAAFB7C9FF63AD62C713F0;
IL2CPP_EXTERN_C String_t* _stringLiteral5B878039E9D40F79446117192BD554C1893E4403;
IL2CPP_EXTERN_C String_t* _stringLiteral6BB76E7CBA2EB792F37AD108D6F125915DCAC6D6;
IL2CPP_EXTERN_C String_t* _stringLiteral751D9B94CF9F82A18F349EE0884042DF1586DC33;
IL2CPP_EXTERN_C String_t* _stringLiteral7C7B4EC2D00470FC13550884E5677F799CE5989C;
IL2CPP_EXTERN_C String_t* _stringLiteral8595CE9E70917936717BD86EFD435C1478C57AE4;
IL2CPP_EXTERN_C String_t* _stringLiteral85BF0CF512F0758122E9103D1D414F49970E1738;
IL2CPP_EXTERN_C String_t* _stringLiteral885529AE3F6B23E840CFEC656E40A922EEDD87BE;
IL2CPP_EXTERN_C String_t* _stringLiteral894D7867F8A8007366B5961E7D3606B70C6751AF;
IL2CPP_EXTERN_C String_t* _stringLiteral8D7DC2ADBFDE27A6360366CEC03BD29E5106370B;
IL2CPP_EXTERN_C String_t* _stringLiteral95E32F859C4BD9A3836758C70D76DEA12321AEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC5A16105456A8DD8EBE861BDD278A222C8FEEA07;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE42A0BDFAEB781CEED59EC998FE68B0DA5027024;
IL2CPP_EXTERN_C String_t* _stringLiteralF1F4975819195AC909F00AB519DF7ABC95BDE9C6;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Always_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81F4B51D0FC3C3DAE0A06426E2BBE8060F9A1BEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_m79EBEFD3F259A8E3AC1011F8CEF8BC9A6E1DA0AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m64BA2EBE2B284B751100205F2795E3125F1A12B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m2D0E5584BA32473BB4B51FE64B70089A9B320753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF038939358BC897B18994E1C684F8355CB49D93D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m89444FDC58D3D2B3A1B79EAD6FE663CB9C889EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_mDAB2A85BF2F4FD3AF497177684DEF9F4BE7FCEB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m4DD2E042FA6BFA2F2597F5ACB7C58E335103A329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5B5D02CD9F9DAEB013645FBC2ECA4E2B858007C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_mEBD60BAAD210BC3E17A8319D534D855B55C93C9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5A72DC4DE74304F00BBFCBA4192294F0022338F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryAdd_m64D4F73B713625FFD4A20CE1D898CFE37813319C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_m9EDC5E09AA567E134B75440A18792B010E4FD9F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m706CBF18B531FB450E99E51126D07AFD11E93F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF9C900976AB61AD2D5D592926B772CD1FA679B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m47612CCC59F387578EBA2DC111FF5D7C3F730A9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8959E5E76C8C9417C9108D197399783573BE7182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m31E40DC5314457856C163A66EAA873DEBADBE9F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m13EBF9E891377C655D8194AC234A1D735936506A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD70CB22FD93D7EFA1E44257434D619D1B611AE51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF92E48CF9359E7A4E8B6F935CA15948DB26CF7E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m371BA1FF584A3751C69E6A888B6C3B010867D229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8064D8E3DEC66B5F0ED801E2A852EA16670FCBC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4BAAF805EE90E2258BCAF796AFC3F164C62EEF49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDA3451A2C1A53BAE79EE44A306332C2551243654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mF249FA2714FDD4F0C3C34888EC2F884603E332A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m46CE9212C5D6A11AA98D6D6050BBF1EBF95D0D3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0EF0E9F28B9B5E99C5533483D74AB35D521533A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mE88E1F18DEF48D3DD112D6E50392BC24EDBEA49C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB17439587DE894852B0376C7FCDCBCAA66AAF731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m880594DC72B9C2E1DB8B2BBD5B6584D5AF38DA08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m18BC7A5795509C90CAC30D09F189BFB15847A302_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA13959224915FCD9748000668C5B66155E0C56B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m0E876AB5624966FACD0DE5737373A95BA10DB61A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE6388157F996986E7B9841C1EA43DA4EEF891644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m29DDC28169C6B6C7390F47320DBA359CE864FFBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mB2C784407374D9E3699C870087A4969B72E9E4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* StunMessageType_tD2ABFD398DFF657E3EA4FCB23B6D03B23948511D_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct NetBitBufferBlock_tF5C722B414B07454534F96063A2A033BB96F5DBA;
struct NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2;
struct NetCommandRefused_t8F0ABB635AE4C48533FDE02E1EDD726BE4EA8910;
struct NetPeerGroupMap_tED413AD9802FA7A8B02A20C7F52DB37D036AA4D9;
struct NetPeerGroup_tE5EF42226DD0A04D0B46238BCCA55C5BDFE31CBA;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>>
struct ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t494AF1DC5A012C1FF6E32AB816E5E31B4E507BC1* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tD0811EDB82A01163EDA1CD0FB1FC2465D36B9A2D* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>
struct ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tFEDF444C34B5988C576E12F23B82AFB38A98BF26* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tF46CD4AEC817902168793DFBAFA78BE09A7CDB43* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>
struct Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t065351D969E70A4A88A3BB5AE9DB07CA6238F363* ____entries_1;
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
	KeyCollection_tE9ED012651564B19CCEF4CBAA6AE58854AF5060E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0481608BA44EF48DFD4F7C3E0FD928F49615C0AD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
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

// System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Fusion.Sockets.NetSocketRelay
struct NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99  : public RuntimeObject
{
	// System.Int64 Fusion.Sockets.NetSocketRelay::_handle
	int64_t ____handle_0;
	// Fusion.Protocol.ICommunicator Fusion.Sockets.NetSocketRelay::_communicator
	RuntimeObject* ____communicator_1;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Fusion.Sockets.Stun.StunClient
struct StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F  : public RuntimeObject
{
};

// Fusion.Sockets.Stun.StunErrorAttribute
struct StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2  : public RuntimeObject
{
	// System.Int32 Fusion.Sockets.Stun.StunErrorAttribute::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_0;
	// System.String Fusion.Sockets.Stun.StunErrorAttribute::<ReasonText>k__BackingField
	String_t* ___U3CReasonTextU3Ek__BackingField_1;
};

// Fusion.Sockets.Stun.StunNatTypeExtensions
struct StunNatTypeExtensions_t9E9A19DA899788AF3D3511D0D081CA88CE227384  : public RuntimeObject
{
};

// Fusion.Sockets.Stun.StunServers
struct StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA  : public RuntimeObject
{
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
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

// Fusion.Sockets.Stun.StunClient/TestIPs
struct TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73  : public RuntimeObject
{
};

// Fusion.Sockets.Stun.StunMessage/StunDefines
struct StunDefines_tD672436AB80555B1B9F2B70BF8710848E322E881  : public RuntimeObject
{
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

// System.Collections.Generic.List`1/Enumerator<Fusion.Sockets.Stun.StunServers/StunServer>
struct Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>
struct KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>
struct KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]>
struct TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tAC26C3CB300EB1DB608D4ADE41BFFBD5924E4670* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Net.IPAddress[]>
struct Task_1_tAC26C3CB300EB1DB608D4ADE41BFFBD5924E4670  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct Task_1_t26A076F73CA670AC1EC4EC08576883918B068187  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* ___m_result_38;
};

// NanoSockets.Address
struct Address_t0C64043894DC43092287210A04CAD369B08FDBF3 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt64 NanoSockets.Address::_address0
					uint64_t ____address0_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ____address0_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ____address1_1_OffsetPadding[8];
					// System.UInt64 NanoSockets.Address::_address1
					uint64_t ____address1_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ____address1_1_OffsetPadding_forAlignmentOnly[8];
					uint64_t ____address1_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Port_2_OffsetPadding[16];
					// System.UInt16 NanoSockets.Address::Port
					uint16_t ___Port_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Port_2_OffsetPadding_forAlignmentOnly[16];
					uint16_t ___Port_2_forAlignmentOnly;
				};
			};
		};
		uint8_t Address_t0C64043894DC43092287210A04CAD369B08FDBF3__padding[24];
	};
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_2;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Fusion.Sockets.NetBitBufferStack
struct NetBitBufferStack_tF4B714DA65B4DDDC7EEE24C65878F894289B6E35 
{
	// System.Int32 Fusion.Sockets.NetBitBufferStack::_capacity
	int32_t ____capacity_0;
	// Fusion.Sockets.NetBitBuffer** Fusion.Sockets.NetBitBufferStack::Stack
	NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2** ___Stack_1;
	// System.Int32 Fusion.Sockets.NetBitBufferStack::Count
	int32_t ___Count_2;
};

// Fusion.Sockets.NetConfigNotify
struct NetConfigNotify_tFE82FE0C681E89B7B361C37EBF22F54AAE993BBC 
{
	// System.Int32 Fusion.Sockets.NetConfigNotify::AckMaskBytes
	int32_t ___AckMaskBytes_0;
	// System.Int32 Fusion.Sockets.NetConfigNotify::AckForceCount
	int32_t ___AckForceCount_1;
	// System.Double Fusion.Sockets.NetConfigNotify::AckForceTimeout
	double ___AckForceTimeout_2;
	// System.Int32 Fusion.Sockets.NetConfigNotify::WindowSize
	int32_t ___WindowSize_3;
	// System.Int32 Fusion.Sockets.NetConfigNotify::SequenceBytes
	int32_t ___SequenceBytes_4;
};

// Fusion.Sockets.NetConfigSimulationOscillator
struct NetConfigSimulationOscillator_tE82ADB6F9CE5F1350C56A39C0611835A4F717B2F 
{
	// Fusion.Sockets.NetConfigSimulationOscillator/WaveShape Fusion.Sockets.NetConfigSimulationOscillator::Shape
	int32_t ___Shape_0;
	// System.Double Fusion.Sockets.NetConfigSimulationOscillator::Min
	double ___Min_1;
	// System.Double Fusion.Sockets.NetConfigSimulationOscillator::Max
	double ___Max_2;
	// System.Double Fusion.Sockets.NetConfigSimulationOscillator::Period
	double ___Period_3;
	// System.Double Fusion.Sockets.NetConfigSimulationOscillator::Threshold
	double ___Threshold_4;
	// System.Double Fusion.Sockets.NetConfigSimulationOscillator::Additional
	double ___Additional_5;
};

// Fusion.Sockets.NetSequencer
struct NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2 
{
	// System.Int32 Fusion.Sockets.NetSequencer::_shift
	int32_t ____shift_0;
	// System.Int32 Fusion.Sockets.NetSequencer::_bytes
	int32_t ____bytes_1;
	// System.UInt64 Fusion.Sockets.NetSequencer::_mask
	uint64_t ____mask_2;
	// System.UInt64 Fusion.Sockets.NetSequencer::_sequence
	uint64_t ____sequence_3;
};

// Fusion.Sockets.NetUnreliableHeader
struct NetUnreliableHeader_t0D7B4F96E32BEEA969823FFDFC9462429D36E895 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Fusion.Sockets.NetPacketType Fusion.Sockets.NetUnreliableHeader::PacketType
			uint8_t ___PacketType_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___PacketType_2_forAlignmentOnly;
		};
	};
};

// Fusion.Sockets.ReliableHeader
struct ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Fusion.Sockets.ReliableHeader* Fusion.Sockets.ReliableHeader::Next
			ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___Next_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___Next_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Prev_2_OffsetPadding[8];
			// Fusion.Sockets.ReliableHeader* Fusion.Sockets.ReliableHeader::Prev
			ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___Prev_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Prev_2_OffsetPadding_forAlignmentOnly[8];
			ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___Prev_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Sequence_3_OffsetPadding[16];
			// System.UInt64 Fusion.Sockets.ReliableHeader::Sequence
			uint64_t ___Sequence_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Sequence_3_OffsetPadding_forAlignmentOnly[16];
			uint64_t ___Sequence_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Length_4_OffsetPadding[24];
			// System.Int32 Fusion.Sockets.ReliableHeader::Length
			int32_t ___Length_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Length_4_OffsetPadding_forAlignmentOnly[24];
			int32_t ___Length_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Key_5_OffsetPadding[28];
			// System.Int32 Fusion.Sockets.ReliableHeader::Key
			int32_t ___Key_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Key_5_OffsetPadding_forAlignmentOnly[28];
			int32_t ___Key_5_forAlignmentOnly;
		};
	};
};

// Fusion.Sockets.ReliableList
struct ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33 
{
	// System.Int32 Fusion.Sockets.ReliableList::Count
	int32_t ___Count_0;
	// Fusion.Sockets.ReliableHeader* Fusion.Sockets.ReliableList::Head
	ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___Head_1;
	// Fusion.Sockets.ReliableHeader* Fusion.Sockets.ReliableList::Tail
	ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___Tail_2;
};

// NanoSockets.Socket
struct Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 NanoSockets.Socket::handle
			int64_t ___handle_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___handle_0_forAlignmentOnly;
		};
	};
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// Fusion.Timer
struct Timer_tF7FB43178D8E930B7F354F5DA4DFC34B7E3DD5F8 
{
	// System.Int64 Fusion.Timer::_start
	int64_t ____start_0;
	// System.Int64 Fusion.Timer::_elapsed
	int64_t ____elapsed_1;
	// System.Byte Fusion.Timer::_running
	uint8_t ____running_2;
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

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* ___m_task_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>
struct Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>
struct Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// Fusion.Sockets.NetAddress
struct NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// NanoSockets.Address Fusion.Sockets.NetAddress::NativeAddress
			Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___NativeAddress_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___NativeAddress_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Fusion.Sockets.NetAddress::Block0
			uint64_t ___Block0_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Block0_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Block1_2_OffsetPadding[8];
			// System.UInt64 Fusion.Sockets.NetAddress::Block1
			uint64_t ___Block1_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Block1_2_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Block1_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Block2_3_OffsetPadding[16];
			// System.UInt64 Fusion.Sockets.NetAddress::Block2
			uint64_t ___Block2_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Block2_3_OffsetPadding_forAlignmentOnly[16];
			uint64_t ___Block2_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____actorId_4_OffsetPadding[20];
			// System.Int32 Fusion.Sockets.NetAddress::_actorId
			int32_t ____actorId_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____actorId_4_OffsetPadding_forAlignmentOnly[20];
			int32_t ____actorId_4_forAlignmentOnly;
		};
	};
};

// Fusion.Sockets.NetConfigSimulation
struct NetConfigSimulation_t2D9C3028208C35FBD98C7E25E43D160EE35E4BE7 
{
	// System.Int16* Fusion.Sockets.NetConfigSimulation::LossNotifySequences
	int16_t* ___LossNotifySequences_0;
	// System.Int32 Fusion.Sockets.NetConfigSimulation::LossNotifySequencesLength
	int32_t ___LossNotifySequencesLength_1;
	// Fusion.Sockets.NetConfigSimulationOscillator Fusion.Sockets.NetConfigSimulation::DelayOscillator
	NetConfigSimulationOscillator_tE82ADB6F9CE5F1350C56A39C0611835A4F717B2F ___DelayOscillator_2;
	// Fusion.Sockets.NetConfigSimulationOscillator Fusion.Sockets.NetConfigSimulation::LossOscillator
	NetConfigSimulationOscillator_tE82ADB6F9CE5F1350C56A39C0611835A4F717B2F ___LossOscillator_3;
	// System.Double Fusion.Sockets.NetConfigSimulation::DuplicateChance
	double ___DuplicateChance_4;
};

// Fusion.Sockets.NetSocket
struct NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Fusion.Sockets.NetSocket::Handle
			int64_t ___Handle_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___Handle_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// NanoSockets.Socket Fusion.Sockets.NetSocket::NativeSocket
			Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 ___NativeSocket_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			Socket_t46CD8CA395215449BFCC033F0B1B802E1DC42CF6 ___NativeSocket_1_forAlignmentOnly;
		};
	};
};

// Fusion.Sockets.ReliableBuffer
struct ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8 
{
	// Fusion.Sockets.NetSequencer Fusion.Sockets.ReliableBuffer::_sequencer
	NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2 ____sequencer_1;
	// Fusion.Sockets.ReliableList Fusion.Sockets.ReliableBuffer::_receiveList
	ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33 ____receiveList_2;
	// System.UInt64 Fusion.Sockets.ReliableBuffer::_receiveSequence
	uint64_t ____receiveSequence_3;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Fusion.Sockets.Stun.StunMessage
struct StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A  : public RuntimeObject
{
	// Fusion.Sockets.Stun.StunMessage/StunMessageType Fusion.Sockets.Stun.StunMessage::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_0;
	// System.Byte[] Fusion.Sockets.Stun.StunMessage::<TransactionID>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CTransactionIDU3Ek__BackingField_1;
	// System.String Fusion.Sockets.Stun.StunMessage::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_2;
	// Fusion.Sockets.Stun.StunErrorAttribute Fusion.Sockets.Stun.StunMessage::<ErrorCode>k__BackingField
	StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* ___U3CErrorCodeU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object> Fusion.Sockets.Stun.StunMessage::<Attributes>k__BackingField
	Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* ___U3CAttributesU3Ek__BackingField_4;
	// System.Guid Fusion.Sockets.Stun.StunMessage::_id
	Guid_t ____id_5;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// Fusion.Sockets.NetBitBuffer
struct NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2 
{
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetBitBuffer::Address
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___Address_5;
	// System.Int32 Fusion.Sockets.NetBitBuffer::Mtu
	int32_t ___Mtu_6;
	// Fusion.Sockets.NetBitBuffer* Fusion.Sockets.NetBitBuffer::Prev
	NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* ___Prev_7;
	// Fusion.Sockets.NetBitBuffer* Fusion.Sockets.NetBitBuffer::Next
	NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* ___Next_8;
	// Fusion.Sockets.NetBitBufferBlock* Fusion.Sockets.NetBitBuffer::_block
	NetBitBufferBlock_tF5C722B414B07454534F96063A2A033BB96F5DBA* ____block_9;
	// Fusion.Sockets.NetBitBuffer* Fusion.Sockets.NetBitBuffer::_allocNext
	NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* ____allocNext_10;
	// System.Int32 Fusion.Sockets.NetBitBuffer::_group
	int32_t ____group_11;
	// System.UInt64* Fusion.Sockets.NetBitBuffer::_data
	uint64_t* ____data_12;
	// System.UInt64* Fusion.Sockets.NetBitBuffer::_dataBlockOriginal
	uint64_t* ____dataBlockOriginal_13;
	// System.Int32 Fusion.Sockets.NetBitBuffer::_offsetBits
	int32_t ____offsetBits_14;
	// System.Int32 Fusion.Sockets.NetBitBuffer::_lengthBits
	int32_t ____lengthBits_15;
	// System.Int32 Fusion.Sockets.NetBitBuffer::_lengthBytes
	int32_t ____lengthBytes_16;
};

// Fusion.Sockets.NetConfig
struct NetConfig_t86EF0B265BA027615DA5755ECC96D351EA1083B9 
{
	// System.Int32 Fusion.Sockets.NetConfig::ConnectionSendBuffers
	int32_t ___ConnectionSendBuffers_0;
	// System.Int32 Fusion.Sockets.NetConfig::ConnectionGroups
	int32_t ___ConnectionGroups_1;
	// System.Int32 Fusion.Sockets.NetConfig::MaxConnections
	int32_t ___MaxConnections_2;
	// System.Int32 Fusion.Sockets.NetConfig::SocketSendBuffer
	int32_t ___SocketSendBuffer_3;
	// System.Int32 Fusion.Sockets.NetConfig::SocketRecvBuffer
	int32_t ___SocketRecvBuffer_4;
	// System.Int32 Fusion.Sockets.NetConfig::DefaultMtu
	int32_t ___DefaultMtu_5;
	// System.Int32 Fusion.Sockets.NetConfig::PacketSize
	int32_t ___PacketSize_6;
	// System.Int32 Fusion.Sockets.NetConfig::ConnectAttempts
	int32_t ___ConnectAttempts_7;
	// System.Double Fusion.Sockets.NetConfig::ConnectInterval
	double ___ConnectInterval_8;
	// System.Double Fusion.Sockets.NetConfig::OperationExpireTime
	double ___OperationExpireTime_9;
	// System.Double Fusion.Sockets.NetConfig::ConnectionDefaultRtt
	double ___ConnectionDefaultRtt_10;
	// System.Double Fusion.Sockets.NetConfig::ConnectionTimeout
	double ___ConnectionTimeout_11;
	// System.Double Fusion.Sockets.NetConfig::ConnectionPingInterval
	double ___ConnectionPingInterval_12;
	// System.Double Fusion.Sockets.NetConfig::ConnectionShutdownTime
	double ___ConnectionShutdownTime_13;
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetConfig::Address
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___Address_14;
	// Fusion.Sockets.NetConfigNotify Fusion.Sockets.NetConfig::Notify
	NetConfigNotify_tFE82FE0C681E89B7B361C37EBF22F54AAE993BBC ___Notify_15;
	// Fusion.Sockets.NetConfigSimulation Fusion.Sockets.NetConfig::Simulation
	NetConfigSimulation_t2D9C3028208C35FBD98C7E25E43D160EE35E4BE7 ___Simulation_16;
};

// Fusion.Sockets.Stun.StunResult
struct StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E  : public RuntimeObject
{
	// Fusion.Sockets.Stun.NATType Fusion.Sockets.Stun.StunResult::NatType
	uint8_t ___NatType_0;
	// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunResult::<PublicEndPoint>k__BackingField
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___U3CPublicEndPointU3Ek__BackingField_1;
	// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunResult::<PrivateEndPoint>k__BackingField
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___U3CPrivateEndPointU3Ek__BackingField_2;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Fusion.Sockets.Stun.StunServers/<BuildIP>d__6
struct U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843 
{
	// System.Int32 Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer> Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::<>t__builder
	AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45 ___U3CU3Et__builder_1;
	// System.String Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::stunServerAddr
	String_t* ___stunServerAddr_2;
	// System.UInt16 Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::<port>5__2
	uint16_t ___U3CportU3E5__2_3;
	// Fusion.Sockets.Stun.StunServers/StunServer Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::<stunServer>5__3
	StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* ___U3CstunServerU3E5__3_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]> Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::<>u__1
	TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF ___U3CU3Eu__1_5;
};

// Fusion.Sockets.Stun.StunServers/StunServer
struct StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED  : public RuntimeObject
{
	// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunServers/StunServer::IPv4Addr
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___IPv4Addr_0;
	// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunServers/StunServer::IPv6Addr
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___IPv6Addr_1;
};

// Fusion.Sockets.NetPeer
struct NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1 
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) Fusion.Sockets.NetPeer::_state
	int32_t ____state_9;
	// Fusion.Sockets.NetConfig Fusion.Sockets.NetPeer::_config
	NetConfig_t86EF0B265BA027615DA5755ECC96D351EA1083B9 ____config_10;
	// Fusion.Timer Fusion.Sockets.NetPeer::_recvTimer
	Timer_tF7FB43178D8E930B7F354F5DA4DFC34B7E3DD5F8 ____recvTimer_11;
	// System.Byte* Fusion.Sockets.NetPeer::_fragmentBuffer
	uint8_t* ____fragmentBuffer_12;
	// Fusion.Sockets.NetSocket Fusion.Sockets.NetPeer::_socket
	NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C ____socket_13;
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetPeer::_address
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ____address_14;
	// Fusion.Sockets.NetBitBufferStack Fusion.Sockets.NetPeer::_sendStack
	NetBitBufferStack_tF4B714DA65B4DDDC7EEE24C65878F894289B6E35 ____sendStack_15;
	// Fusion.Sockets.NetPeerGroup* Fusion.Sockets.NetPeer::_groups
	NetPeerGroup_tE5EF42226DD0A04D0B46238BCCA55C5BDFE31CBA* ____groups_16;
	// Fusion.Sockets.NetPeerGroupMap* Fusion.Sockets.NetPeer::_groupsMap
	NetPeerGroupMap_tED413AD9802FA7A8B02A20C7F52DB37D036AA4D9* ____groupsMap_17;
	// System.Int32* Fusion.Sockets.NetPeer::_groupsAssigned
	int32_t* ____groupsAssigned_18;
	// Fusion.Sockets.NetCommandRefused* Fusion.Sockets.NetPeer::_refusedCommand
	NetCommandRefused_t8F0ABB635AE4C48533FDE02E1EDD726BE4EA8910* ____refusedCommand_19;
	// Fusion.Sockets.NetBitBuffer* Fusion.Sockets.NetPeer::_recv
	NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* ____recv_20;
	// Fusion.Sockets.NetBitBufferBlock* Fusion.Sockets.NetPeer::_recvBlock
	NetBitBufferBlock_tF5C722B414B07454534F96063A2A033BB96F5DBA* ____recvBlock_21;
};
// Native definition for P/Invoke marshalling of Fusion.Sockets.NetPeer
struct NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1_marshaled_pinvoke
{
	int32_t ____state_9;
	NetConfig_t86EF0B265BA027615DA5755ECC96D351EA1083B9 ____config_10;
	Timer_tF7FB43178D8E930B7F354F5DA4DFC34B7E3DD5F8 ____recvTimer_11;
	uint8_t* ____fragmentBuffer_12;
	NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C ____socket_13;
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ____address_14;
	NetBitBufferStack_tF4B714DA65B4DDDC7EEE24C65878F894289B6E35 ____sendStack_15;
	NetPeerGroup_tE5EF42226DD0A04D0B46238BCCA55C5BDFE31CBA* ____groups_16;
	NetPeerGroupMap_tED413AD9802FA7A8B02A20C7F52DB37D036AA4D9* ____groupsMap_17;
	int32_t* ____groupsAssigned_18;
	NetCommandRefused_t8F0ABB635AE4C48533FDE02E1EDD726BE4EA8910* ____refusedCommand_19;
	NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* ____recv_20;
	NetBitBufferBlock_tF5C722B414B07454534F96063A2A033BB96F5DBA* ____recvBlock_21;
};
// Native definition for COM marshalling of Fusion.Sockets.NetPeer
struct NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1_marshaled_com
{
	int32_t ____state_9;
	NetConfig_t86EF0B265BA027615DA5755ECC96D351EA1083B9 ____config_10;
	Timer_tF7FB43178D8E930B7F354F5DA4DFC34B7E3DD5F8 ____recvTimer_11;
	uint8_t* ____fragmentBuffer_12;
	NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C ____socket_13;
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ____address_14;
	NetBitBufferStack_tF4B714DA65B4DDDC7EEE24C65878F894289B6E35 ____sendStack_15;
	NetPeerGroup_tE5EF42226DD0A04D0B46238BCCA55C5BDFE31CBA* ____groups_16;
	NetPeerGroupMap_tED413AD9802FA7A8B02A20C7F52DB37D036AA4D9* ____groupsMap_17;
	int32_t* ____groupsAssigned_18;
	NetCommandRefused_t8F0ABB635AE4C48533FDE02E1EDD726BE4EA8910* ____refusedCommand_19;
	NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* ____recv_20;
	NetBitBufferBlock_tF5C722B414B07454534F96063A2A033BB96F5DBA* ____recvBlock_21;
};

// Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7
struct U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4 
{
	// System.Int32 Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.String Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::customStunServer
	String_t* ___customStunServer_2;
	// System.Runtime.CompilerServices.TaskAwaiter Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.Sockets.Stun.StunServers/StunServer> Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::<>u__2
	TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 ___U3CU3Eu__2_4;
	// System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer> Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::<stunServers>5__2
	List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* ___U3CstunServersU3E5__2_5;
	// System.Int32 Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::<i>5__3
	int32_t ___U3CiU3E5__3_6;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>>
struct ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>>

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>
struct ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>

// System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>

// System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>

// System.Collections.Generic.HashSet`1<System.Int32>

// System.Collections.Generic.HashSet`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer>

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.BitConverter

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Net.EndPoint

// System.Net.EndPoint

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddress

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Fusion.Sockets.NetSocketRelay

// Fusion.Sockets.NetSocketRelay

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
};

// System.Net.Sockets.Socket

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Fusion.Sockets.Stun.StunClient
struct StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_StaticFields
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>> Fusion.Sockets.Stun.StunClient::PendingRequests
	ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9* ___PendingRequests_0;
};

// Fusion.Sockets.Stun.StunClient

// Fusion.Sockets.Stun.StunErrorAttribute

// Fusion.Sockets.Stun.StunErrorAttribute

// Fusion.Sockets.Stun.StunNatTypeExtensions

// Fusion.Sockets.Stun.StunNatTypeExtensions

// Fusion.Sockets.Stun.StunServers
struct StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields
{
	// System.String[] Fusion.Sockets.Stun.StunServers::STUN_SERVER_LIST
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___STUN_SERVER_LIST_0;
	// Fusion.Sockets.Stun.StunServers/StunServer modreq(System.Runtime.CompilerServices.IsVolatile) Fusion.Sockets.Stun.StunServers::_customStunServer
	StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* ____customStunServer_1;
	// Fusion.Sockets.Stun.StunServers/StunServer[] modreq(System.Runtime.CompilerServices.IsVolatile) Fusion.Sockets.Stun.StunServers::_stunServers
	StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* ____stunServers_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Fusion.Sockets.Stun.StunServers::_runningResolution
	bool ____runningResolution_3;
};

// Fusion.Sockets.Stun.StunServers

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.ValueType

// System.ValueType

// Fusion.Sockets.Stun.StunClient/TestIPs
struct TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_StaticFields
{
	// System.Net.IPEndPoint Fusion.Sockets.Stun.StunClient/TestIPs::TEST_NET_IPV4
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___TEST_NET_IPV4_0;
	// System.Net.IPEndPoint Fusion.Sockets.Stun.StunClient/TestIPs::TEST_NET_IPV6
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___TEST_NET_IPV6_1;
};

// Fusion.Sockets.Stun.StunClient/TestIPs

// Fusion.Sockets.Stun.StunMessage/StunDefines

// Fusion.Sockets.Stun.StunMessage/StunDefines

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<Fusion.Sockets.Stun.StunServers/StunServer>

// System.Collections.Generic.List`1/Enumerator<Fusion.Sockets.Stun.StunServers/StunServer>

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>

// System.Collections.Generic.KeyValuePair`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>

// System.Collections.Generic.KeyValuePair`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.Sockets.Stun.StunServers/StunServer>

// System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.Sockets.Stun.StunServers/StunServer>

// System.Threading.Tasks.Task`1<System.Net.IPAddress[]>
struct Task_1_tAC26C3CB300EB1DB608D4ADE41BFFBD5924E4670_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tDD05F826FE9D42F2F143BC685A7396C663E6CFE4* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Net.IPAddress[]>

// System.Threading.Tasks.Task`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct Task_1_t26A076F73CA670AC1EC4EC08576883918B068187_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0CF5D89A9F90E4FE08C729D60EBD51FFC29AFC2B* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Fusion.Sockets.Stun.StunServers/StunServer>

// NanoSockets.Address

// NanoSockets.Address

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_6;
};

// System.Net.IPEndPoint

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Fusion.Sockets.NetBitBufferStack

// Fusion.Sockets.NetBitBufferStack

// Fusion.Sockets.NetConfigNotify

// Fusion.Sockets.NetConfigNotify

// Fusion.Sockets.NetConfigSimulationOscillator

// Fusion.Sockets.NetConfigSimulationOscillator

// Fusion.Sockets.NetSequencer

// Fusion.Sockets.NetSequencer

// Fusion.Sockets.NetUnreliableHeader

// Fusion.Sockets.NetUnreliableHeader

// Fusion.Sockets.ReliableHeader

// Fusion.Sockets.ReliableHeader

// Fusion.Sockets.ReliableList

// Fusion.Sockets.ReliableList

// NanoSockets.Socket

// NanoSockets.Socket

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// Fusion.Timer

// Fusion.Timer

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>
struct AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Fusion.Sockets.NetAddress
struct NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_StaticFields
{
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::AnyIPv4Addr
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___AnyIPv4Addr_5;
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::AnyIPv6Addr
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___AnyIPv6Addr_6;
};

// Fusion.Sockets.NetAddress

// Fusion.Sockets.NetConfigSimulation

// Fusion.Sockets.NetConfigSimulation

// Fusion.Sockets.NetSocket

// Fusion.Sockets.NetSocket

// Fusion.Sockets.ReliableBuffer

// Fusion.Sockets.ReliableBuffer

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Fusion.Sockets.Stun.StunMessage
struct StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.Int32> Fusion.Sockets.Stun.StunMessage::_stunMessageTypeValues
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ____stunMessageTypeValues_6;
};

// Fusion.Sockets.Stun.StunMessage

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// Fusion.Sockets.NetBitBuffer

// Fusion.Sockets.NetBitBuffer

// Fusion.Sockets.NetConfig

// Fusion.Sockets.NetConfig

// Fusion.Sockets.Stun.StunResult
struct StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E_StaticFields
{
	// Fusion.Sockets.Stun.StunResult Fusion.Sockets.Stun.StunResult::Invalid
	StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* ___Invalid_3;
};

// Fusion.Sockets.Stun.StunResult

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

// Fusion.Sockets.Stun.StunServers/<BuildIP>d__6

// Fusion.Sockets.Stun.StunServers/<BuildIP>d__6

// Fusion.Sockets.Stun.StunServers/StunServer

// Fusion.Sockets.Stun.StunServers/StunServer

// Fusion.Sockets.NetPeer

// Fusion.Sockets.NetPeer

// Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7

// Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// Fusion.Sockets.Stun.StunServers/StunServer[]
struct StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01  : public RuntimeArray
{
	ALIGN_FIELD (8) StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* m_Items[1];

	inline StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void Fusion.Assert::Always<System.Object,System.Int32>(System.Boolean,T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Always_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE8AA3241E7379742CE9615CF5708BED05D7DB4C1_gshared (bool ___0_condition, RuntimeObject* ___1_arg0, int32_t ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_m81139825AE15B9C12F187716E91D1CB03BAFE336_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, Guid_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryAdd_m64D4F73B713625FFD4A20CE1D898CFE37813319C_gshared (ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB* __this, int32_t ___0_key, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_mC30E84B1DE5B5862BF633886378068C42BDF0BB9_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 Dictionary_2_GetEnumerator_m4126F9137DF46492CEB1563FCCD5A16C5F99D686_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m183A70972A3287360EE9443997160D3AA6D4662D_gshared (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B Enumerator_get_Current_m12EE850D56E586DF121B059557CEAF4A7472995B_gshared_inline (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m48EC022EB2EB605F29EE19F3A0A79E3CB05FD283_gshared (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Fusion.Sockets.Stun.StunServers/<BuildIP>d__6>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_m94F06BB48C23B491BB4E324E91377955845BC0CC_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5A72DC4DE74304F00BBFCBA4192294F0022338F8_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Fusion.Sockets.Stun.StunServers/<BuildIP>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_m4E76A1E8347583AF5D01C098FADA9C0814FC28A4_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_mEBD60BAAD210BC3E17A8319D534D855B55C93C9C_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_mD577047A510316D669484A4FA1A10E45B011ABDE_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* ___1_stateMachine, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::FromActorId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 NetAddress_FromActorId_mDC2533F76BFC0FBFEE843B1EA4C9D6292405454B (int32_t ___0_actorId, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Fusion.Sockets.NetAddress Fusion.Sockets.NetSocketRelay::get_LocalAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 NetSocketRelay_get_LocalAddress_m36C3307F3878C7986E49C2B9FD4F1547985C3A54 (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
// System.Boolean Fusion.Sockets.NetAddress::get_IsRelayAddr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetAddress_get_IsRelayAddr_m22FB15C57855E2AD815016B421298315B01AE79D (NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.Sockets.NetAddress::get_ActorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetAddress_get_ActorId_m3B83B19BB0266FFEF65FCB4BAA953ADA2DCBD234 (NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.Sockets.NetSequencer::get_Bits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetSequencer_get_Bits_m48E4919108B3593E15EA75F8FED9F6DF4A6917A7 (NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.Sockets.ReliableBuffer::get_SequenceBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableBuffer_get_SequenceBits_mA9489B978D59F8171D1269DD6DA50439098F4C5E (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.NetSequencer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSequencer__ctor_m23AE1F278E3091F83C1F71CA3B5300FC6D6F2866 (NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
// System.UInt64 Fusion.Sockets.NetSequencer::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetSequencer_Next_m78BE3739D3B80CC9F9AD703694FD5E31BCE442B2 (NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2* __this, const RuntimeMethod* method) ;
// System.UInt64 Fusion.Sockets.ReliableBuffer::NextSendSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ReliableBuffer_NextSendSequence_m8453231E8B449D04801D840D7EE5E8FD4FD9C8BF (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, const RuntimeMethod* method) ;
// Fusion.Sockets.ReliableHeader* Fusion.Sockets.ReliableList::RemoveHead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ReliableList_RemoveHead_m4910BD8986A875E5B4B7331FBC6BC2AFB03FB7CD (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, const RuntimeMethod* method) ;
// System.Void Fusion.Native::Free(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_Free_m8FFA5A397B167C2C3C7167C8FFFF5BBDC9690C42 (void* ___0_memory, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.ReliableBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableBuffer_Dispose_m5B1C953EE78286A7970DD2FBAD8E98BD1BFEE792 (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.Sockets.NetSequencer::Distance(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetSequencer_Distance_mE3C8834289F18642DBEB7C0E29DD102F0901C88D (NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2* __this, uint64_t ___0_from, uint64_t ___1_to, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.ReliableList::Remove(Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_Remove_m039B23357C4C324B92B63F5C12FEDB63535F99A6 (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method) ;
// System.Boolean Fusion.Sockets.ReliableBuffer::LateReceive(System.Void*&,System.Int32&,System.Byte*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableBuffer_LateReceive_m72967CD37D89E0417B1E40970907DE3F27FF8AA2 (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, void** ___0_root, int32_t* ___1_key, uint8_t** ___2_data, int32_t* ___3_length, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.ReliableBuffer::LateFree(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableBuffer_LateFree_m7F1BB29FCD739A8990BCB52EF2472B2101B35AEA (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, void* ___0_root, const RuntimeMethod* method) ;
// System.Void Fusion.Assert::Always<System.String,System.Int32>(System.Boolean,T0,T1)
inline void Assert_Always_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81F4B51D0FC3C3DAE0A06426E2BBE8060F9A1BEA (bool ___0_condition, String_t* ___1_arg0, int32_t ___2_arg1, const RuntimeMethod* method)
{
	((  void (*) (bool, String_t*, int32_t, const RuntimeMethod*))Assert_Always_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE8AA3241E7379742CE9615CF5708BED05D7DB4C1_gshared)(___0_condition, ___1_arg0, ___2_arg1, method);
}
// System.UInt64 Fusion.Sockets.NetBitBuffer::ReadUInt64(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetBitBuffer_ReadUInt64_mE06C258053CF27CCAF89716749EDDD7D82C1FB7D_inline (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, int32_t ___0_bits, const RuntimeMethod* method) ;
// System.Int32 Fusion.Sockets.NetBitBuffer::ReadInt32(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetBitBuffer_ReadInt32_m75FE811ABEADCF57F949E8EF16322B36D893BB6A_inline (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, int32_t ___0_bits, const RuntimeMethod* method) ;
// System.Int32 Fusion.Sockets.NetBitBuffer::get_LengthBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetBitBuffer_get_LengthBytes_mE8D81434583DF312AAB694F05B2E75F7346F5B07_inline (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.Sockets.NetBitBuffer::get_OffsetBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetBitBuffer_get_OffsetBytes_m106BBF81A4BA3DE8128F9C896F7D66A8E653C474_inline (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, const RuntimeMethod* method) ;
// System.Void* Fusion.Native::Malloc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Native_Malloc_mA106754A88639FE2D6373CB1645E55C9392F1946 (int32_t ___0_size, const RuntimeMethod* method) ;
// System.Byte* Fusion.Sockets.NetBitBuffer::PadToByteBoundaryAndGetPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NetBitBuffer_PadToByteBoundaryAndGetPtr_mF70AB559A01B3F0351FD77D4A6000F0A299BFA33 (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, const RuntimeMethod* method) ;
// System.Void Fusion.Native::MemCpy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_MemCpy_m4B2C50799646B5DC6DEE0B3683FC7C3C9AEE11FB (void* ___0_destination, void* ___1_source, int32_t ___2_size, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.ReliableList::AddLast(Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_AddLast_m00A1B091F7343AEA5FAF80643A5EA5698A602A8E (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method) ;
// System.Boolean Fusion.Sockets.ReliableBuffer::Receive(Fusion.Sockets.NetBitBuffer*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableBuffer_Receive_m053F6F7627C6598A38596EBB03CA457CCF7363C1 (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* ___0_buffer, int32_t* ___1_key, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.ReliableList::AddFirst(Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_AddFirst_m974C9D9EC2DB6BC8BB313940943229A70B945255 (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.ReliableList::AddBefore(Fusion.Sockets.ReliableHeader*,Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_AddBefore_m7B76938031995389B6D7B935A9E946B5DEDB0B24 (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_before, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___1_item, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.ReliableList::AddAfter(Fusion.Sockets.ReliableHeader*,Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_AddAfter_m03702BF9AAB9D379B683504A74BDAE38D39C117B (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_after, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___1_item, const RuntimeMethod* method) ;
// System.Boolean Fusion.Sockets.ReliableList::IsInList(Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableList_IsInList_mFEED76F444BA4AC55F1F8CC45BDDDA0413F5CBB9 (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method) ;
// Fusion.Sockets.Stun.StunMessage Fusion.Sockets.Stun.StunMessage::TryParse(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* StunMessage_TryParse_m56253CB188D0AEC52E68B211165EA801CAC9B94F (uint8_t* ___0_data, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Net.IPEndPoint Fusion.Sockets.Stun.StunMessage::get_MappedAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* StunMessage_get_MappedAddress_mB565A09B26FB6557CA698AA4B8BBD9BAAD3009FC (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) ;
// System.Guid Fusion.Sockets.Stun.StunMessage::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t StunMessage_get_ID_mF014352CAC8B67EC1E874085765FE66159BD445D (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>>::TryGetValue(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryGetValue_m9EDC5E09AA567E134B75440A18792B010E4FD9F8 (ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9* __this, Guid_t ___0_key, ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9*, Guid_t, ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_m81139825AE15B9C12F187716E91D1CB03BAFE336_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::CreateFromIpPort(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 NetAddress_CreateFromIpPort_mFD5D7E03E7BAB971DE25179A9810E71C5F3D80D5 (String_t* ___0_ip, uint16_t ___1_port, const RuntimeMethod* method) ;
// System.Boolean Fusion.Sockets.NetAddress::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetAddress_get_IsValid_m567749D7A3F79DEC0F28D7791ADC303C3D2683E3 (NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.Sockets.NetAddress::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetAddress_GetHashCode_m3A3F3C5EECABFE27121255F89082CDEA81A7723C (NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>::TryAdd(TKey,TValue)
inline bool ConcurrentDictionary_2_TryAdd_m64D4F73B713625FFD4A20CE1D898CFE37813319C (ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB* __this, int32_t ___0_key, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB*, int32_t, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678, const RuntimeMethod*))ConcurrentDictionary_2_TryAdd_m64D4F73B713625FFD4A20CE1D898CFE37813319C_gshared)(__this, ___0_key, ___1_value, method);
}
// Fusion.Sockets.NetAddress Fusion.Sockets.NetPeer::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 NetPeer_get_Address_m1BC92CFFED7F8D79F65AB50FAC1F6456DD09EBD7_inline (NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.Sockets.NetAddress::get_IsIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetAddress_get_IsIPv6_m9D36189377672A9C15D57BDC72D0291ABEAABAC0 (NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.Sockets.Stun.StunClient::GetLocalAddress(System.Net.Sockets.AddressFamily&,System.Net.IPAddress&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunClient_GetLocalAddress_mF9EEE5A2ED34250765ED3B8A79FEBEA67538A447 (int32_t* ___0_addressFamily, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** ___1_localIP, const RuntimeMethod* method) ;
// System.Void Fusion.Log::Warn(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_m3CB267FD0639BAC92FD468CE3504A464603C18C7 (RuntimeObject* ___0_msg, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer> Fusion.Sockets.Stun.StunServers::GetStunServer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* StunServers_GetStunServer_m3A617B7306F9D6A8611063722C7428277065243F (bool ___0_IPv6Support, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer>::get_Count()
inline int32_t List_1_get_Count_m880594DC72B9C2E1DB8B2BBD5B6584D5AF38DA08_inline (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Fusion.Sockets.Stun.StunMessage::.ctor(System.Guid,Fusion.Sockets.Stun.StunMessage/StunMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage__ctor_mA5D9E152A0557B1A2E11FD86B9C96443CF342817 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, Guid_t ___0_msgID, int32_t ___1_messageType, const RuntimeMethod* method) ;
// System.Byte[] Fusion.Sockets.Stun.StunMessage::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StunMessage_Serialize_m6F4E39F19A948FD1E95F65B5C6B8C86B67C21C7B (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer>::GetEnumerator()
inline Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86 List_1_GetEnumerator_m0EF0E9F28B9B5E99C5533483D74AB35D521533A4 (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86 (*) (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Fusion.Sockets.Stun.StunServers/StunServer>::Dispose()
inline void Enumerator_Dispose_mD70CB22FD93D7EFA1E44257434D619D1B611AE51 (Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Fusion.Sockets.Stun.StunServers/StunServer>::get_Current()
inline StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* Enumerator_get_Current_m4BAAF805EE90E2258BCAF796AFC3F164C62EEF49_inline (Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86* __this, const RuntimeMethod* method)
{
	return ((  StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* (*) (Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Fusion.Sockets.Stun.StunServers/StunServer>::MoveNext()
inline bool Enumerator_MoveNext_m371BA1FF584A3751C69E6A888B6C3B010867D229 (Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___0_addressFamily, int32_t ___1_socketType, int32_t ___2_protocolType, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___0_remoteEP, const RuntimeMethod* method) ;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Fusion.Sockets.NetAddress>>::.ctor()
inline void ConcurrentDictionary_2__ctor_m706CBF18B531FB450E99E51126D07AFD11E93F55 (ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_mC30E84B1DE5B5862BF633886378068C42BDF0BB9_gshared)(__this, method);
}
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23 (String_t* ___0_ipString, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunErrorAttribute::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunErrorAttribute_set_Code_m76B030EBE395A1918671532F8903B318331382FD_inline (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunErrorAttribute::set_ReasonText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunErrorAttribute_set_ReasonText_m0B32B576135B137D05606F2E617FEC4520F7A941_inline (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
inline bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C (Guid_t* __this, Guid_t ___0_g, const RuntimeMethod* method) ;
// System.Byte[] Fusion.Sockets.Stun.StunMessage::get_TransactionID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StunMessage_get_TransactionID_m141316199CE2735B2970FC91F22CD368584FF276_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object> Fusion.Sockets.Stun.StunMessage::get_Attributes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* StunMessage_get_Attributes_m8D965EE41BDE387E65C87E20B56E184D36DCC0E0_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mF9C900976AB61AD2D5D592926B772CD1FA679B12 (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m31E40DC5314457856C163A66EAA873DEBADBE9F1 (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m13EBF9E891377C655D8194AC234A1D735936506A (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void Fusion.Sockets.Stun.StunMessage::set_Type(Fusion.Sockets.Stun.StunMessage/StunMessageType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunMessage_set_Type_mB9D836E728BB83FC4C3179659D207720E3BEAC8E_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunMessage::set_TransactionID(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunMessage_set_TransactionID_mE404609C43F45918BB9E753ECACB07AB15C2FFD7_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::.ctor()
inline void Dictionary_2__ctor_m8959E5E76C8C9417C9108D197399783573BE7182 (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void Fusion.Sockets.Stun.StunMessage::set_Attributes(System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunMessage_set_Attributes_m2016BDF3FCF0695472D5472B9366764FECA366BD_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1<System.Int32> Fusion.Sockets.Stun.StunMessage::get_StunMessageTypeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* StunMessage_get_StunMessageTypeValues_mA878C247666318BBE5DA4D7EF03EA29250C48596 (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
inline bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28 (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunMessage::ReadAttribute(System.Byte*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_ReadAttribute_m7B7E48DB7BA0001F002F5CE67EE243160BFF3ADA (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, uint8_t* ___0_data, int32_t* ___1_offset, const RuntimeMethod* method) ;
// Fusion.Sockets.Stun.StunMessage/StunMessageType Fusion.Sockets.Stun.StunMessage::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StunMessage_get_Type_mAA1D5D199BD4A92EA9E516D5DC2095EDC476C3A9_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunMessage::WriteAttributes(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_WriteAttributes_m918229B0AD96B8F59C8928E7CC131192F8B44E1A (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_msg, int32_t* ___1_offset, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::GetEnumerator()
inline Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E Dictionary_2_GetEnumerator_m47612CCC59F387578EBA2DC111FF5D7C3F730A9F (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E (*) (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m4126F9137DF46492CEB1563FCCD5A16C5F99D686_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::Dispose()
inline void Enumerator_Dispose_mF92E48CF9359E7A4E8B6F935CA15948DB26CF7E5 (Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E*, const RuntimeMethod*))Enumerator_Dispose_m183A70972A3287360EE9443997160D3AA6D4662D_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::get_Current()
inline KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A Enumerator_get_Current_mDA3451A2C1A53BAE79EE44A306332C2551243654_inline (Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A (*) (Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E*, const RuntimeMethod*))Enumerator_get_Current_m12EE850D56E586DF121B059557CEAF4A7472995B_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mF249FA2714FDD4F0C3C34888EC2F884603E332A5_inline (KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m46CE9212C5D6A11AA98D6D6050BBF1EBF95D0D3F_inline (KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A*, const RuntimeMethod*))KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline)(__this, method);
}
// System.Void Fusion.Sockets.Stun.StunMessage::StoreEndPoint(Fusion.Sockets.Stun.StunMessage/AttributeType,System.Net.IPEndPoint,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_StoreEndPoint_mAA80BD506B05B5338695F4521BA7F956D25A4F94 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, int32_t ___0_type, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___1_endPoint, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_message, int32_t* ___3_offset, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// Fusion.Sockets.Stun.StunErrorAttribute Fusion.Sockets.Stun.StunMessage::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* StunMessage_get_ErrorCode_m59A56D1CF2461C1047AFE3B5B7E01A16704C2E93_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) ;
// System.String Fusion.Sockets.Stun.StunErrorAttribute::get_ReasonText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StunErrorAttribute_get_ReasonText_m2C5244FC9AFDDD8D5B22B42B20B6A30E3D20EC30_inline (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, const RuntimeMethod* method) ;
// System.Int32 Fusion.Sockets.Stun.StunErrorAttribute::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StunErrorAttribute_get_Code_m17B4D4B4F7C3AC69AB8F6A1D461AAC796D4E0A3D_inline (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m8064D8E3DEC66B5F0ED801E2A852EA16670FCBC6 (Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E*, const RuntimeMethod*))Enumerator_MoveNext_m48EC022EB2EB605F29EE19F3A0A79E3CB05FD283_gshared)(__this, method);
}
// System.Net.IPEndPoint Fusion.Sockets.Stun.StunMessage::ParseXorEndPoint(System.Byte*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* StunMessage_ParseXorEndPoint_mFE94DF9172EF07C748292C62B0DF25941CEC88F4 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, uint8_t* ___0_data, int32_t* ___1_offset, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunMessage::set_MappedAddress(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_set_MappedAddress_mDB76503420252D2019DC3D4F4D6161DE4F5DA8B0 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_address, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m61B5DA2AFDE71BC154C7E0298759972A0A422290 (uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m16D9FC6DA967F79B612A59A804E1374B9D324E4A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, int64_t ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m46CC8E040C5AB40FFDFBA8562779A3C14E95C7F7 (uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunResult::get_PublicEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 StunResult_get_PublicEndPoint_m1485BB2CB5473A91A61290D8B282C10D13E437A3_inline (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, const RuntimeMethod* method) ;
// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunResult::get_PrivateEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 StunResult_get_PrivateEndPoint_mF7D08C0787F02F894FB5B4E8B152008B5FB4525A_inline (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunResult::set_PublicEndPoint(Fusion.Sockets.NetAddress)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunResult_set_PublicEndPoint_m8025B115B50B8A24891686C99057152A63787949_inline (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_value, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunResult::set_PrivateEndPoint(Fusion.Sockets.NetAddress)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunResult_set_PrivateEndPoint_mBB2061FB22A57C9749C947393B5137A857BC4871_inline (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunResult::.ctor(Fusion.Sockets.NetAddress,Fusion.Sockets.NetAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunResult__ctor_m05D888D7FC10B5B0ED60766BE8AE5F70F79B71CE (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_publicEndPoint, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___1_privateEndPoint, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer>::.ctor()
inline void List_1__ctor_mB17439587DE894852B0376C7FCDCBCAA66AAF731 (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Fusion.Sockets.Stun.StunServers/StunServer::get_HasIPv4Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunServer_get_HasIPv4Support_m0C240F3BA64564CE4FBB116A85FB85C782DF8D7C (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.Sockets.Stun.StunServers/StunServer::get_HasIPv6Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunServer_get_HasIPv6Support_mAA4B23CF3097BAEA38F79239915599A8470EA965 (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer>::Add(T)
inline void List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_inline (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* __this, StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386*, StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>::Create()
inline AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45 AsyncTaskMethodBuilder_1_Create_m64BA2EBE2B284B751100205F2795E3125F1A12B1 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>::Start<Fusion.Sockets.Stun.StunServers/<BuildIP>d__6>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_mDAB2A85BF2F4FD3AF497177684DEF9F4BE7FCEB8 (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* __this, U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45*, U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_m94F06BB48C23B491BB4E324E91377955845BC0CC_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>::get_Task()
inline Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* AsyncTaskMethodBuilder_1_get_Task_m4DD2E042FA6BFA2F2597F5ACB7C58E335103A329 (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* (*) (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5A72DC4DE74304F00BBFCBA4192294F0022338F8 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5A72DC4DE74304F00BBFCBA4192294F0022338F8_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.Boolean System.UInt16::TryParse(System.String,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_TryParse_m02DD9A625527B4019B32ACC9A5D3B09D72B2FBB6 (String_t* ___0_s, uint16_t* ___1_result, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunServers/StunServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunServer__ctor_m93E0235595C1B9B5011DF2DB762B17261004BB4B (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_TryParse_m082F2D09B53BD7A957418E2E7BE4C37AD8EE1AF0 (String_t* ___0_ipString, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** ___1_address, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Net.IPAddress[]> System.Net.Dns::GetHostAddressesAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAC26C3CB300EB1DB608D4ADE41BFFBD5924E4670* Dns_GetHostAddressesAsync_mD44D0F7FED8A21D03825D7A290F7CE00643004A0 (String_t* ___0_hostNameOrAddress, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Net.IPAddress[]>::GetAwaiter()
inline TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF Task_1_GetAwaiter_m29DDC28169C6B6C7390F47320DBA359CE864FFBB (Task_1_tAC26C3CB300EB1DB608D4ADE41BFFBD5924E4670* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF (*) (Task_1_tAC26C3CB300EB1DB608D4ADE41BFFBD5924E4670*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m0E876AB5624966FACD0DE5737373A95BA10DB61A (TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]>,Fusion.Sockets.Stun.StunServers/<BuildIP>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_m79EBEFD3F259A8E3AC1011F8CEF8BC9A6E1DA0AA (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* __this, TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF* ___0_awaiter, U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45*, TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF*, U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_m4E76A1E8347583AF5D01C098FADA9C0814FC28A4_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.IPAddress[]>::GetResult()
inline IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* TaskAwaiter_1_GetResult_m18BC7A5795509C90CAC30D09F189BFB15847A302 (TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF* __this, const RuntimeMethod* method)
{
	return ((  IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* (*) (TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean Fusion.Sockets.NetAddress::Equals(Fusion.Sockets.NetAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetAddress_Equals_mCF4EAFDFEE838A3CCB4D2FAF1A22889C3E2B2DDF (NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_other, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m2D0E5584BA32473BB4B51FE64B70089A9B320753 (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF038939358BC897B18994E1C684F8355CB49D93D (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* __this, StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45*, StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildIPU3Ed__6_MoveNext_mA8BE4B2A547F61813FDC2B06222A46FBD43B2708 (U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Fusion.Sockets.Stun.StunServers/StunServer>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m89444FDC58D3D2B3A1B79EAD6FE663CB9C889EBB (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildIPU3Ed__6_SetStateMachine_m281257EC942D2B54574E13D4DFC329C863DEB8E1 (U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Fusion.Async.TaskManager::Delay(System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskManager_Delay_mA16CDA9482963A979D1782D1B00FBCB1D6FD9151 (int32_t ___0_delay, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_token, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_mEBD60BAAD210BC3E17A8319D534D855B55C93C9C (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_mEBD60BAAD210BC3E17A8319D534D855B55C93C9C_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Fusion.Sockets.Stun.StunServers/StunServer> Fusion.Sockets.Stun.StunServers::BuildIP(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* StunServers_BuildIP_mB00049102DDAE528AE542FAB4194521182632919 (String_t* ___0_stunServerAddr, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Fusion.Sockets.Stun.StunServers/StunServer>::GetAwaiter()
inline TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 Task_1_GetAwaiter_mB2C784407374D9E3699C870087A4969B72E9E4D3 (Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 (*) (Task_1_t26A076F73CA670AC1EC4EC08576883918B068187*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.Sockets.Stun.StunServers/StunServer>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE6388157F996986E7B9841C1EA43DA4EEF891644 (TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.Sockets.Stun.StunServers/StunServer>,Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5B5D02CD9F9DAEB013645FBC2ECA4E2B858007C1 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56* ___0_awaiter, U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56*, U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_mD577047A510316D669484A4FA1A10E45B011ABDE_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Fusion.Sockets.Stun.StunServers/StunServer>::GetResult()
inline StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* TaskAwaiter_1_GetResult_mA13959224915FCD9748000668C5B66155E0C56B9 (TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56* __this, const RuntimeMethod* method)
{
	return ((  StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* (*) (TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer>::ToArray()
inline StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* List_1_ToArray_mE88E1F18DEF48D3DD112D6E50392BC24EDBEA49C (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* __this, const RuntimeMethod* method)
{
	return ((  StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* (*) (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupStunServersU3Ed__7_MoveNext_m46E73A667F2110F573F13D7B1D92F4FFF6116969 (U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupStunServersU3Ed__7_SetStateMachine_m666E3B545E7B1A3BE301D697F9B7A01D84D5A9F6 (U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.UInt64 Fusion.Sockets.NetBitBuffer::Read(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetBitBuffer_Read_mF888869143529081FCC8CD64F99A42CBFA54C1E2 (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, int32_t ___0_bits, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Fusion.Sockets.NetSocketRelay::get_SupportsMultiThreading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetSocketRelay_get_SupportsMultiThreading_m6A396343C638D992C58BD4F69F148A0549CB871D (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// Fusion.Sockets.NetAddress Fusion.Sockets.NetSocketRelay::get_LocalAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 NetSocketRelay_get_LocalAddress_m36C3307F3878C7986E49C2B9FD4F1547985C3A54 (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____communicator_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Fusion.Protocol.ICommunicator::get_CommunicatorID() */, ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_2;
		L_2 = NetAddress_FromActorId_mDC2533F76BFC0FBFEE843B1EA4C9D6292405454B(L_1, NULL);
		return L_2;
	}
}
// System.Void Fusion.Sockets.NetSocketRelay::.ctor(Fusion.Protocol.ICommunicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSocketRelay__ctor_mBCA160EC169405E23B308F876E692511AE6C406A (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, RuntimeObject* ___0_communicator, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_communicator;
		__this->____communicator_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____communicator_1), (void*)L_0);
		return;
	}
}
// Fusion.Sockets.NetAddress Fusion.Sockets.NetSocketRelay::Bind(Fusion.Sockets.NetSocket,Fusion.Sockets.NetConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 NetSocketRelay_Bind_mCFF5A370129BD9477BFD4C1F798FA4A1817FBA59 (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C ___0_socket, NetConfig_t86EF0B265BA027615DA5755ECC96D351EA1083B9 ___1_config, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0;
		L_0 = NetSocketRelay_get_LocalAddress_m36C3307F3878C7986E49C2B9FD4F1547985C3A54(__this, NULL);
		return L_0;
	}
}
// System.Boolean Fusion.Sockets.NetSocketRelay::CanFragment(Fusion.Sockets.NetAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetSocketRelay_CanFragment_mCFBF0E5ED89F27D222708BC27976DDC5EAEDEB0E (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_address, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// Fusion.Sockets.NetSocket Fusion.Sockets.NetSocketRelay::Create(Fusion.Sockets.NetConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C NetSocketRelay_Create_mDFE31C320D49D8C85028821669B5B2C09331F923 (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, NetConfig_t86EF0B265BA027615DA5755ECC96D351EA1083B9 ___0_config, const RuntimeMethod* method) 
{
	NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C));
		int64_t L_0 = __this->____handle_0;
		(&V_0)->___Handle_0 = L_0;
		NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C L_1 = V_0;
		return L_1;
	}
}
// System.Void Fusion.Sockets.NetSocketRelay::Destroy(Fusion.Sockets.NetSocket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSocketRelay_Destroy_m2F11475551D7451A1BE8B2CE75F94A55EE2169E8 (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C ___0_netSocket, const RuntimeMethod* method) 
{
	{
		__this->____handle_0 = ((int64_t)0);
		return;
	}
}
// System.Void Fusion.Sockets.NetSocketRelay::Initialize(Fusion.Sockets.NetConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSocketRelay_Initialize_m0638F1221B6D34F56372CA6D039F719A20BA320A (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, NetConfig_t86EF0B265BA027615DA5755ECC96D351EA1083B9 ___0_config, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____handle_0 = ((int64_t)L_0);
		return;
	}
}
// System.Boolean Fusion.Sockets.NetSocketRelay::Poll(Fusion.Sockets.NetSocket,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetSocketRelay_Poll_m5BDDCCEACA78B5F6158473F1B2966F1BCE52BCD5 (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C ___0_socket, int64_t ___1_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____communicator_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Fusion.Protocol.ICommunicator::Poll() */, ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Fusion.Sockets.NetSocketRelay::Receive(Fusion.Sockets.NetSocket,Fusion.Sockets.NetAddress*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetSocketRelay_Receive_m8E410E5E0ACBF607878AB756E6B56D57D5FA296C (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C ___0_socket, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* ___1_address, uint8_t* ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		RuntimeObject* L_0 = __this->____communicator_1;
		uint8_t* L_1 = ___2_buffer;
		int32_t L_2 = ___3_bufferLength;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker3< int32_t, int32_t*, uint8_t*, int32_t >::Invoke(2 /* System.Int32 Fusion.Protocol.ICommunicator::ReceivePackage(System.Int32&,System.Byte*,System.Int32) */, ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940_il2cpp_TypeInfo_var, L_0, (&V_0), L_1, L_2);
		int32_t L_4 = L_3;
		G_B1_0 = L_4;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			G_B2_0 = L_4;
			goto IL_0020;
		}
	}
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_5 = ___1_address;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_7;
		L_7 = NetAddress_FromActorId_mDC2533F76BFC0FBFEE843B1EA4C9D6292405454B(L_6, NULL);
		*(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678*)L_5 = L_7;
		G_B2_0 = G_B1_0;
	}

IL_0020:
	{
		return G_B2_0;
	}
}
// System.Int32 Fusion.Sockets.NetSocketRelay::Send(Fusion.Sockets.NetSocket,Fusion.Sockets.NetAddress*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetSocketRelay_Send_mA6C206603FAB535B2C0B64848D5CA0770D9133CF (NetSocketRelay_t1210F2DCC069B5A7774121447699EB879CA88D99* __this, NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C ___0_socket, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* ___1_address, uint8_t* ___2_buffer, int32_t ___3_bufferLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_0 = ___1_address;
		bool L_1;
		L_1 = NetAddress_get_IsRelayAddr_m22FB15C57855E2AD815016B421298315B01AE79D((NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678*)L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_2 = __this->____communicator_1;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_3 = ___1_address;
		int32_t L_4;
		L_4 = NetAddress_get_ActorId_m3B83B19BB0266FFEF65FCB4BAA953ADA2DCBD234((NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678*)L_3, NULL);
		uint8_t* L_5 = ___2_buffer;
		int32_t L_6 = ___3_bufferLength;
		NullCheck(L_2);
		bool L_7;
		L_7 = InterfaceFuncInvoker5< bool, uint8_t, int32_t, bool, uint8_t*, int32_t >::Invoke(1 /* System.Boolean Fusion.Protocol.ICommunicator::SendPackage(System.Byte,System.Int32,System.Boolean,System.Byte*,System.Int32) */, ICommunicator_tEF8367F4033C7F7D6E3068E1CE0C429FE0B4D940_il2cpp_TypeInfo_var, L_2, (uint8_t)((int32_t)101), L_4, (bool)0, L_5, L_6);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = ___3_bufferLength;
		return L_8;
	}

IL_0024:
	{
		return (-1);
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
// Fusion.Sockets.NetUnreliableHeader Fusion.Sockets.NetUnreliableHeader::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetUnreliableHeader_t0D7B4F96E32BEEA969823FFDFC9462429D36E895 NetUnreliableHeader_Create_m459010321BF44E3934F4A575A21D899E8F43B804 (const RuntimeMethod* method) 
{
	NetUnreliableHeader_t0D7B4F96E32BEEA969823FFDFC9462429D36E895 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___PacketType_2 = 2;
		NetUnreliableHeader_t0D7B4F96E32BEEA969823FFDFC9462429D36E895 L_0 = V_0;
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
// System.Int32 Fusion.Sockets.ReliableBuffer::get_SequenceBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReliableBuffer_get_SequenceBits_mA9489B978D59F8171D1269DD6DA50439098F4C5E (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, const RuntimeMethod* method) 
{
	{
		NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2* L_0 = (&__this->____sequencer_1);
		int32_t L_1;
		L_1 = NetSequencer_get_Bits_m48E4919108B3593E15EA75F8FED9F6DF4A6917A7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ReliableBuffer_get_SequenceBits_mA9489B978D59F8171D1269DD6DA50439098F4C5E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ReliableBuffer_get_SequenceBits_mA9489B978D59F8171D1269DD6DA50439098F4C5E(_thisAdjusted, method);
	return _returnValue;
}
// Fusion.Sockets.ReliableBuffer Fusion.Sockets.ReliableBuffer::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8 ReliableBuffer_Create_m6FFDB40DCF0FDEB6836592A8578FCF3C0FE78FCC (const RuntimeMethod* method) 
{
	ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8));
		NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		NetSequencer__ctor_m23AE1F278E3091F83C1F71CA3B5300FC6D6F2866((&L_0), 4, /*hidden argument*/NULL);
		(&V_0)->____sequencer_1 = L_0;
		ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8 L_1 = V_0;
		return L_1;
	}
}
// System.UInt64 Fusion.Sockets.ReliableBuffer::NextSendSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ReliableBuffer_NextSendSequence_m8453231E8B449D04801D840D7EE5E8FD4FD9C8BF (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, const RuntimeMethod* method) 
{
	{
		NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2* L_0 = (&__this->____sequencer_1);
		uint64_t L_1;
		L_1 = NetSequencer_Next_m78BE3739D3B80CC9F9AD703694FD5E31BCE442B2(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint64_t ReliableBuffer_NextSendSequence_m8453231E8B449D04801D840D7EE5E8FD4FD9C8BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = ReliableBuffer_NextSendSequence_m8453231E8B449D04801D840D7EE5E8FD4FD9C8BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Fusion.Sockets.ReliableBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableBuffer_Dispose_m5B1C953EE78286A7970DD2FBAD8E98BD1BFEE792 (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0012;
	}

IL_0002:
	{
		ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* L_0 = (&__this->____receiveList_2);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_1;
		L_1 = ReliableList_RemoveHead_m4910BD8986A875E5B4B7331FBC6BC2AFB03FB7CD(L_0, NULL);
		Native_Free_m8FFA5A397B167C2C3C7167C8FFFF5BBDC9690C42((void*)L_1, NULL);
	}

IL_0012:
	{
		ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* L_2 = (&__this->____receiveList_2);
		int32_t L_3 = L_2->___Count_0;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ReliableBuffer_Dispose_m5B1C953EE78286A7970DD2FBAD8E98BD1BFEE792_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8*>(__this + _offset);
	ReliableBuffer_Dispose_m5B1C953EE78286A7970DD2FBAD8E98BD1BFEE792(_thisAdjusted, method);
}
// System.Boolean Fusion.Sockets.ReliableBuffer::LateReceive(System.Void*&,System.Int32&,System.Byte*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableBuffer_LateReceive_m72967CD37D89E0417B1E40970907DE3F27FF8AA2 (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, void** ___0_root, int32_t* ___1_key, uint8_t** ___2_data, int32_t* ___3_length, const RuntimeMethod* method) 
{
	ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* V_0 = NULL;
	{
		ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* L_0 = (&__this->____receiveList_2);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_1 = L_0->___Head_1;
		V_0 = L_1;
		goto IL_0067;
	}

IL_000e:
	{
		NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2* L_2 = (&__this->____sequencer_1);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_3 = V_0;
		NullCheck(L_3);
		uint64_t L_4 = L_3->___Sequence_3;
		uint64_t L_5 = __this->____receiveSequence_3;
		int32_t L_6;
		L_6 = NetSequencer_Distance_mE3C8834289F18642DBEB7C0E29DD102F0901C88D(L_2, L_4, L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0060;
		}
	}
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_7 = V_0;
		NullCheck(L_7);
		uint64_t L_8 = L_7->___Sequence_3;
		__this->____receiveSequence_3 = L_8;
		ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* L_9 = (&__this->____receiveList_2);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_10 = V_0;
		ReliableList_Remove_m039B23357C4C324B92B63F5C12FEDB63535F99A6(L_9, L_10, NULL);
		void** L_11 = ___0_root;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_12 = V_0;
		*((intptr_t*)L_11) = (intptr_t)L_12;
		int32_t* L_13 = ___1_key;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Key_5;
		*((int32_t*)L_13) = (int32_t)L_15;
		uint8_t** L_16 = ___2_data;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_17 = V_0;
		uint32_t L_18 = sizeof(ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769);
		*((intptr_t*)L_16) = (intptr_t)((ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769*)il2cpp_codegen_add((intptr_t)L_17, (int32_t)L_18));
		int32_t* L_19 = ___3_length;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___Length_4;
		*((int32_t*)L_19) = (int32_t)L_21;
		return (bool)1;
	}

IL_0060:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_22 = V_0;
		NullCheck(L_22);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_23 = L_22->___Next_1;
		V_0 = L_23;
	}

IL_0067:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_24 = V_0;
		if ((!(((uintptr_t)L_24) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000e;
		}
	}
	{
		void** L_25 = ___0_root;
		*((intptr_t*)L_25) = (intptr_t)((uintptr_t)0);
		uint8_t** L_26 = ___2_data;
		*((intptr_t*)L_26) = (intptr_t)((uintptr_t)0);
		int32_t* L_27 = ___3_length;
		*((int32_t*)L_27) = (int32_t)0;
		int32_t* L_28 = ___1_key;
		*((int32_t*)L_28) = (int32_t)0;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReliableBuffer_LateReceive_m72967CD37D89E0417B1E40970907DE3F27FF8AA2_AdjustorThunk (RuntimeObject* __this, void** ___0_root, int32_t* ___1_key, uint8_t** ___2_data, int32_t* ___3_length, const RuntimeMethod* method)
{
	ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReliableBuffer_LateReceive_m72967CD37D89E0417B1E40970907DE3F27FF8AA2(_thisAdjusted, ___0_root, ___1_key, ___2_data, ___3_length, method);
	return _returnValue;
}
// System.Void Fusion.Sockets.ReliableBuffer::LateFree(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableBuffer_LateFree_m7F1BB29FCD739A8990BCB52EF2472B2101B35AEA (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, void* ___0_root, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_root;
		Native_Free_m8FFA5A397B167C2C3C7167C8FFFF5BBDC9690C42(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ReliableBuffer_LateFree_m7F1BB29FCD739A8990BCB52EF2472B2101B35AEA_AdjustorThunk (RuntimeObject* __this, void* ___0_root, const RuntimeMethod* method)
{
	ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8*>(__this + _offset);
	ReliableBuffer_LateFree_m7F1BB29FCD739A8990BCB52EF2472B2101B35AEA(_thisAdjusted, ___0_root, method);
}
// System.Boolean Fusion.Sockets.ReliableBuffer::Receive(Fusion.Sockets.NetBitBuffer*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableBuffer_Receive_m053F6F7627C6598A38596EBB03CA457CCF7363C1 (ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* __this, NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* ___0_buffer, int32_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_Always_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81F4B51D0FC3C3DAE0A06426E2BBE8060F9A1BEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D7DC2ADBFDE27A6360366CEC03BD29E5106370B);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* V_3 = NULL;
	{
		uint32_t L_0 = sizeof(ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769);
		uint32_t L_1 = sizeof(ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769);
		Assert_Always_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81F4B51D0FC3C3DAE0A06426E2BBE8060F9A1BEA((bool)((((int32_t)L_0) == ((int32_t)((int32_t)32)))? 1 : 0), _stringLiteral8D7DC2ADBFDE27A6360366CEC03BD29E5106370B, L_1, Assert_Always_TisString_t_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81F4B51D0FC3C3DAE0A06426E2BBE8060F9A1BEA_RuntimeMethod_var);
		NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* L_2 = ___0_buffer;
		NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2* L_3 = (&__this->____sequencer_1);
		int32_t L_4;
		L_4 = NetSequencer_get_Bits_m48E4919108B3593E15EA75F8FED9F6DF4A6917A7(L_3, NULL);
		uint64_t L_5;
		L_5 = NetBitBuffer_ReadUInt64_mE06C258053CF27CCAF89716749EDDD7D82C1FB7D_inline((NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2*)L_2, L_4, NULL);
		V_0 = L_5;
		int32_t* L_6 = ___1_key;
		NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* L_7 = ___0_buffer;
		int32_t L_8;
		L_8 = NetBitBuffer_ReadInt32_m75FE811ABEADCF57F949E8EF16322B36D893BB6A_inline((NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2*)L_7, ((int32_t)32), NULL);
		*((int32_t*)L_6) = (int32_t)L_8;
		NetSequencer_tE056EDBF44EF5ADC6FAC5CBCBA876C16B31957E2* L_9 = (&__this->____sequencer_1);
		uint64_t L_10 = V_0;
		uint64_t L_11 = __this->____receiveSequence_3;
		int32_t L_12;
		L_12 = NetSequencer_Distance_mE3C8834289F18642DBEB7C0E29DD102F0901C88D(L_9, L_10, L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		uint64_t L_13 = V_0;
		__this->____receiveSequence_3 = L_13;
		return (bool)1;
	}

IL_0054:
	{
		NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* L_14 = ___0_buffer;
		int32_t L_15;
		L_15 = NetBitBuffer_get_LengthBytes_mE8D81434583DF312AAB694F05B2E75F7346F5B07_inline((NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2*)L_14, NULL);
		NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* L_16 = ___0_buffer;
		int32_t L_17;
		L_17 = NetBitBuffer_get_OffsetBytes_m106BBF81A4BA3DE8128F9C896F7D66A8E653C474_inline((NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2*)L_16, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, L_17));
		int32_t L_18 = V_1;
		uint32_t L_19 = sizeof(ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769);
		void* L_20;
		L_20 = Native_Malloc_mA106754A88639FE2D6373CB1645E55C9392F1946(((int32_t)il2cpp_codegen_add(L_18, (int32_t)L_19)), NULL);
		V_2 = (uint8_t*)L_20;
		uint8_t* L_21 = V_2;
		uint32_t L_22 = sizeof(ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769);
		NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* L_23 = ___0_buffer;
		uint8_t* L_24;
		L_24 = NetBitBuffer_PadToByteBoundaryAndGetPtr_mF70AB559A01B3F0351FD77D4A6000F0A299BFA33((NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2*)L_23, NULL);
		int32_t L_25 = V_1;
		Native_MemCpy_m4B2C50799646B5DC6DEE0B3683FC7C3C9AEE11FB((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, (int32_t)L_22)), (void*)L_24, L_25, NULL);
		uint8_t* L_26 = V_2;
		V_3 = (ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769*)L_26;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_27 = V_3;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		L_27->___Sequence_3 = L_28;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_29 = V_3;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		L_29->___Length_4 = L_30;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_31 = V_3;
		int32_t* L_32 = ___1_key;
		int32_t L_33 = *((int32_t*)L_32);
		NullCheck(L_31);
		L_31->___Key_5 = L_33;
		ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* L_34 = (&__this->____receiveList_2);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_35 = V_3;
		ReliableList_AddLast_m00A1B091F7343AEA5FAF80643A5EA5698A602A8E(L_34, L_35, NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReliableBuffer_Receive_m053F6F7627C6598A38596EBB03CA457CCF7363C1_AdjustorThunk (RuntimeObject* __this, NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* ___0_buffer, int32_t* ___1_key, const RuntimeMethod* method)
{
	ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableBuffer_t098C45D2F68F3EEEF936C20801D268295422F0F8*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReliableBuffer_Receive_m053F6F7627C6598A38596EBB03CA457CCF7363C1(_thisAdjusted, ___0_buffer, ___1_key, method);
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
// System.Byte* Fusion.Sockets.ReliableHeader::GetData(Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ReliableHeader_GetData_mC45C0E31B87DB18BAB49D28860C9E7D611186D9A (ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_header, const RuntimeMethod* method) 
{
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_0 = ___0_header;
		return (uint8_t*)(((ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)32))));
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
// System.Void Fusion.Sockets.ReliableList::AddFirst(Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_AddFirst_m974C9D9EC2DB6BC8BB313940943229A70B945255 (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method) 
{
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_0 = ___0_item;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_1 = __this->___Head_1;
		NullCheck(L_0);
		L_0->___Next_1 = L_1;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_2 = ___0_item;
		NullCheck(L_2);
		L_2->___Prev_2 = (ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769*)((uintptr_t)0);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_3 = __this->___Head_1;
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0033;
		}
	}
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_4 = __this->___Head_1;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_5 = ___0_item;
		NullCheck(L_4);
		L_4->___Prev_2 = L_5;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_6 = ___0_item;
		__this->___Head_1 = L_6;
		goto IL_0041;
	}

IL_0033:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_7 = ___0_item;
		__this->___Head_1 = L_7;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_8 = ___0_item;
		__this->___Tail_2 = L_8;
	}

IL_0041:
	{
		int32_t L_9 = __this->___Count_0;
		__this->___Count_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void ReliableList_AddFirst_m974C9D9EC2DB6BC8BB313940943229A70B945255_AdjustorThunk (RuntimeObject* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method)
{
	ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33*>(__this + _offset);
	ReliableList_AddFirst_m974C9D9EC2DB6BC8BB313940943229A70B945255(_thisAdjusted, ___0_item, method);
}
// System.Void Fusion.Sockets.ReliableList::AddLast(Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_AddLast_m00A1B091F7343AEA5FAF80643A5EA5698A602A8E (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method) 
{
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_0 = ___0_item;
		NullCheck(L_0);
		L_0->___Next_1 = (ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769*)((uintptr_t)0);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_1 = ___0_item;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_2 = __this->___Tail_2;
		NullCheck(L_1);
		L_1->___Prev_2 = L_2;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_3 = __this->___Tail_2;
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0033;
		}
	}
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_4 = __this->___Tail_2;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_5 = ___0_item;
		NullCheck(L_4);
		L_4->___Next_1 = L_5;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_6 = ___0_item;
		__this->___Tail_2 = L_6;
		goto IL_0041;
	}

IL_0033:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_7 = ___0_item;
		__this->___Head_1 = L_7;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_8 = ___0_item;
		__this->___Tail_2 = L_8;
	}

IL_0041:
	{
		int32_t L_9 = __this->___Count_0;
		__this->___Count_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void ReliableList_AddLast_m00A1B091F7343AEA5FAF80643A5EA5698A602A8E_AdjustorThunk (RuntimeObject* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method)
{
	ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33*>(__this + _offset);
	ReliableList_AddLast_m00A1B091F7343AEA5FAF80643A5EA5698A602A8E(_thisAdjusted, ___0_item, method);
}
// System.Void Fusion.Sockets.ReliableList::AddBefore(Fusion.Sockets.ReliableHeader*,Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_AddBefore_m7B76938031995389B6D7B935A9E946B5DEDB0B24 (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_before, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___1_item, const RuntimeMethod* method) 
{
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_0 = ___0_before;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_1 = __this->___Head_1;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_2 = ___1_item;
		ReliableList_AddFirst_m974C9D9EC2DB6BC8BB313940943229A70B945255(__this, L_2, NULL);
		return;
	}

IL_0011:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_3 = ___1_item;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_4 = ___0_before;
		NullCheck(L_3);
		L_3->___Next_1 = L_4;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_5 = ___1_item;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_6 = ___0_before;
		NullCheck(L_6);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_7 = L_6->___Prev_2;
		NullCheck(L_5);
		L_5->___Prev_2 = L_7;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_8 = ___0_before;
		NullCheck(L_8);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_9 = L_8->___Prev_2;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_10 = ___1_item;
		NullCheck(L_9);
		L_9->___Next_1 = L_10;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_11 = ___0_before;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_12 = ___1_item;
		NullCheck(L_11);
		L_11->___Prev_2 = L_12;
		int32_t L_13 = __this->___Count_0;
		__this->___Count_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void ReliableList_AddBefore_m7B76938031995389B6D7B935A9E946B5DEDB0B24_AdjustorThunk (RuntimeObject* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_before, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___1_item, const RuntimeMethod* method)
{
	ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33*>(__this + _offset);
	ReliableList_AddBefore_m7B76938031995389B6D7B935A9E946B5DEDB0B24(_thisAdjusted, ___0_before, ___1_item, method);
}
// System.Void Fusion.Sockets.ReliableList::AddAfter(Fusion.Sockets.ReliableHeader*,Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_AddAfter_m03702BF9AAB9D379B683504A74BDAE38D39C117B (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_after, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___1_item, const RuntimeMethod* method) 
{
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_0 = ___0_after;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_1 = __this->___Tail_2;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_2 = ___1_item;
		ReliableList_AddLast_m00A1B091F7343AEA5FAF80643A5EA5698A602A8E(__this, L_2, NULL);
		return;
	}

IL_0011:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_3 = ___1_item;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_4 = ___0_after;
		NullCheck(L_4);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_5 = L_4->___Next_1;
		NullCheck(L_3);
		L_3->___Next_1 = L_5;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_6 = ___1_item;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_7 = ___0_after;
		NullCheck(L_6);
		L_6->___Prev_2 = L_7;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_8 = ___0_after;
		NullCheck(L_8);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_9 = L_8->___Next_1;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_10 = ___1_item;
		NullCheck(L_9);
		L_9->___Prev_2 = L_10;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_11 = ___0_after;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_12 = ___1_item;
		NullCheck(L_11);
		L_11->___Next_1 = L_12;
		int32_t L_13 = __this->___Count_0;
		__this->___Count_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void ReliableList_AddAfter_m03702BF9AAB9D379B683504A74BDAE38D39C117B_AdjustorThunk (RuntimeObject* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_after, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___1_item, const RuntimeMethod* method)
{
	ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33*>(__this + _offset);
	ReliableList_AddAfter_m03702BF9AAB9D379B683504A74BDAE38D39C117B(_thisAdjusted, ___0_after, ___1_item, method);
}
// Fusion.Sockets.ReliableHeader* Fusion.Sockets.ReliableList::RemoveHead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ReliableList_RemoveHead_m4910BD8986A875E5B4B7331FBC6BC2AFB03FB7CD (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, const RuntimeMethod* method) 
{
	ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* V_0 = NULL;
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_0 = __this->___Head_1;
		V_0 = L_0;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_1 = V_0;
		ReliableList_Remove_m039B23357C4C324B92B63F5C12FEDB63535F99A6(__this, L_1, NULL);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ReliableList_RemoveHead_m4910BD8986A875E5B4B7331FBC6BC2AFB03FB7CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33*>(__this + _offset);
	ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* _returnValue;
	_returnValue = ReliableList_RemoveHead_m4910BD8986A875E5B4B7331FBC6BC2AFB03FB7CD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Fusion.Sockets.ReliableList::Remove(Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReliableList_Remove_m039B23357C4C324B92B63F5C12FEDB63535F99A6 (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method) 
{
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_0 = ___0_item;
		NullCheck(L_0);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_1 = L_0->___Prev_2;
		if ((((intptr_t)L_1) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_001b;
		}
	}
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_2 = ___0_item;
		NullCheck(L_2);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_3 = L_2->___Prev_2;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_4 = ___0_item;
		NullCheck(L_4);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_5 = L_4->___Next_1;
		NullCheck(L_3);
		L_3->___Next_1 = L_5;
	}

IL_001b:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_6 = ___0_item;
		NullCheck(L_6);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_7 = L_6->___Next_1;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0036;
		}
	}
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_8 = ___0_item;
		NullCheck(L_8);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_9 = L_8->___Next_1;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_10 = ___0_item;
		NullCheck(L_10);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_11 = L_10->___Prev_2;
		NullCheck(L_9);
		L_9->___Prev_2 = L_11;
	}

IL_0036:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_12 = ___0_item;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_13 = __this->___Tail_2;
		if ((!(((uintptr_t)L_12) == ((uintptr_t)L_13))))
		{
			goto IL_004b;
		}
	}
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_14 = ___0_item;
		NullCheck(L_14);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_15 = L_14->___Prev_2;
		__this->___Tail_2 = L_15;
	}

IL_004b:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_16 = ___0_item;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_17 = __this->___Head_1;
		if ((!(((uintptr_t)L_16) == ((uintptr_t)L_17))))
		{
			goto IL_0060;
		}
	}
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_18 = ___0_item;
		NullCheck(L_18);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_19 = L_18->___Next_1;
		__this->___Head_1 = L_19;
	}

IL_0060:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_20 = ___0_item;
		NullCheck(L_20);
		L_20->___Prev_2 = (ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769*)((uintptr_t)0);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_21 = ___0_item;
		NullCheck(L_21);
		L_21->___Next_1 = (ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769*)((uintptr_t)0);
		int32_t L_22 = __this->___Count_0;
		__this->___Count_0 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void ReliableList_Remove_m039B23357C4C324B92B63F5C12FEDB63535F99A6_AdjustorThunk (RuntimeObject* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method)
{
	ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33*>(__this + _offset);
	ReliableList_Remove_m039B23357C4C324B92B63F5C12FEDB63535F99A6(_thisAdjusted, ___0_item, method);
}
// System.Boolean Fusion.Sockets.ReliableList::IsInList(Fusion.Sockets.ReliableHeader*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReliableList_IsInList_mFEED76F444BA4AC55F1F8CC45BDDDA0413F5CBB9 (ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method) 
{
	ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* V_0 = NULL;
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_0 = __this->___Head_1;
		V_0 = L_0;
		goto IL_0016;
	}

IL_0009:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_1 = V_0;
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_2 = ___0_item;
		if ((!(((uintptr_t)L_1) == ((uintptr_t)L_2))))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}

IL_000f:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_3 = V_0;
		NullCheck(L_3);
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_4 = L_3->___Next_1;
		V_0 = L_4;
	}

IL_0016:
	{
		ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* L_5 = V_0;
		if ((!(((uintptr_t)L_5) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReliableList_IsInList_mFEED76F444BA4AC55F1F8CC45BDDDA0413F5CBB9_AdjustorThunk (RuntimeObject* __this, ReliableHeader_t5EBC0FBB3CAC38D20C199682D9566996C5D65769* ___0_item, const RuntimeMethod* method)
{
	ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReliableList_t3A09E29271A172FD92963C8CD36D26845CCD2C33*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReliableList_IsInList_mFEED76F444BA4AC55F1F8CC45BDDDA0413F5CBB9(_thisAdjusted, ___0_item, method);
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
// System.Boolean Fusion.Sockets.Stun.StunNatTypeExtensions::IsValid(Fusion.Sockets.Stun.NATType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunNatTypeExtensions_IsValid_m2C9A3867020DE1458F7E8F8E213A0A7553D34397 (uint8_t ___0_natType, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_natType;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_002e;
			}
			case 5:
			{
				goto IL_0030;
			}
			case 6:
			{
				goto IL_0030;
			}
			case 7:
			{
				goto IL_0030;
			}
			case 8:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_002c:
	{
		return (bool)0;
	}

IL_002e:
	{
		return (bool)1;
	}

IL_0030:
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
// System.Boolean Fusion.Sockets.Stun.StunClient::TryParse(Fusion.Sockets.NetAddress*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunClient_TryParse_m871BB255889FE7D8944D4693081F7DD60AB17D66 (NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* ___0_origin, uint8_t* ___1_buffer, int32_t ___2_bufferLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryAdd_m64D4F73B713625FFD4A20CE1D898CFE37813319C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_m9EDC5E09AA567E134B75440A18792B010E4FD9F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* V_0 = NULL;
	ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB* V_1 = NULL;
	int32_t V_2 = 0;
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		uint8_t* L_0 = ___1_buffer;
		int32_t L_1 = ___2_bufferLength;
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_2;
		L_2 = StunMessage_TryParse_m56253CB188D0AEC52E68B211165EA801CAC9B94F(L_0, L_1, NULL);
		V_0 = L_2;
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_3 = V_0;
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_4 = V_0;
		NullCheck(L_4);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_5;
		L_5 = StunMessage_get_MappedAddress_mB565A09B26FB6557CA698AA4B8BBD9BAAD3009FC(L_4, NULL);
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9* L_6 = ((StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_StaticFields*)il2cpp_codegen_static_fields_for(StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_il2cpp_TypeInfo_var))->___PendingRequests_0;
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_7 = V_0;
		NullCheck(L_7);
		Guid_t L_8;
		L_8 = StunMessage_get_ID_mF014352CAC8B67EC1E874085765FE66159BD445D(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = ConcurrentDictionary_2_TryGetValue_m9EDC5E09AA567E134B75440A18792B010E4FD9F8(L_6, L_8, (&V_1), ConcurrentDictionary_2_TryGetValue_m9EDC5E09AA567E134B75440A18792B010E4FD9F8_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_10 = V_0;
		NullCheck(L_10);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_11;
		L_11 = StunMessage_get_MappedAddress_mB565A09B26FB6557CA698AA4B8BBD9BAAD3009FC(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_11, NULL);
		V_2 = L_12;
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_13 = V_0;
		NullCheck(L_13);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_14;
		L_14 = StunMessage_get_MappedAddress_mB565A09B26FB6557CA698AA4B8BBD9BAAD3009FC(L_13, NULL);
		NullCheck(L_14);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_15;
		L_15 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		int32_t L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_18;
		L_18 = NetAddress_CreateFromIpPort_mFD5D7E03E7BAB971DE25179A9810E71C5F3D80D5(L_16, (uint16_t)((int32_t)(uint16_t)L_17), NULL);
		V_3 = L_18;
		bool L_19;
		L_19 = NetAddress_get_IsValid_m567749D7A3F79DEC0F28D7791ADC303C3D2683E3((&V_3), NULL);
		if (!L_19)
		{
			goto IL_0068;
		}
	}
	{
		ConcurrentDictionary_2_t8727CAA7BB14A82F5157392F75FDA10A1D29CDCB* L_20 = V_1;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_21 = ___0_origin;
		int32_t L_22;
		L_22 = NetAddress_GetHashCode_m3A3F3C5EECABFE27121255F89082CDEA81A7723C((NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678*)L_21, NULL);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_23 = V_3;
		NullCheck(L_20);
		bool L_24;
		L_24 = ConcurrentDictionary_2_TryAdd_m64D4F73B713625FFD4A20CE1D898CFE37813319C(L_20, L_22, L_23, ConcurrentDictionary_2_TryAdd_m64D4F73B713625FFD4A20CE1D898CFE37813319C_RuntimeMethod_var);
	}

IL_0068:
	{
		return (bool)1;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Boolean Fusion.Sockets.Stun.StunClient::QueryLocalAddress(Fusion.Sockets.NetPeer*,Fusion.Sockets.INetSocket,System.Net.Sockets.AddressFamily&,Fusion.Sockets.NetAddress&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunClient_QueryLocalAddress_m6D0AF519826D9727C79544C4BDBFD35B321591A2 (NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1* ___0_peer, RuntimeObject* ___1_socket, int32_t* ___2_addressFamily, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* ___3_localAddress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E19E0F52E30F2F710BE4D4762F3BD829D1933FB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_2 = NULL;
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_0 = ___3_localAddress;
		il2cpp_codegen_runtime_class_init_inline(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_1 = ((NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_StaticFields*)il2cpp_codegen_static_fields_for(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var))->___AnyIPv4Addr_5;
		*(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678*)L_0 = L_1;
		NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1* L_2 = ___0_peer;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_3;
		L_3 = NetPeer_get_Address_m1BC92CFFED7F8D79F65AB50FAC1F6456DD09EBD7_inline((NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1*)L_2, NULL);
		V_3 = L_3;
		bool L_4;
		L_4 = NetAddress_get_IsIPv6_m9D36189377672A9C15D57BDC72D0291ABEAABAC0((&V_3), NULL);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0020;
	}

IL_001e:
	{
		G_B3_0 = ((int32_t)23);
	}

IL_0020:
	{
		V_0 = G_B3_0;
		NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1* L_5 = ___0_peer;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_6;
		L_6 = NetPeer_get_Address_m1BC92CFFED7F8D79F65AB50FAC1F6456DD09EBD7_inline((NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1*)L_5, NULL);
		Address_t0C64043894DC43092287210A04CAD369B08FDBF3 L_7 = L_6.___NativeAddress_0;
		uint16_t L_8 = L_7.___Port_2;
		V_1 = L_8;
		int32_t* L_9 = ___2_addressFamily;
		int32_t L_10 = V_0;
		*((int32_t*)L_9) = (int32_t)L_10;
		int32_t* L_11 = ___2_addressFamily;
		il2cpp_codegen_runtime_class_init_inline(StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = StunClient_GetLocalAddress_mF9EEE5A2ED34250765ED3B8A79FEBEA67538A447(L_11, (&V_2), NULL);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		int32_t* L_13 = ___2_addressFamily;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_16 = V_2;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		uint16_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_19;
		L_19 = NetAddress_CreateFromIpPort_mFD5D7E03E7BAB971DE25179A9810E71C5F3D80D5(L_17, L_18, NULL);
		V_4 = L_19;
		bool L_20;
		L_20 = NetAddress_get_IsValid_m567749D7A3F79DEC0F28D7791ADC303C3D2683E3((&V_4), NULL);
		if (!L_20)
		{
			goto IL_0065;
		}
	}
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_21 = ___3_localAddress;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_22 = V_4;
		*(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678*)L_21 = L_22;
		return (bool)1;
	}

IL_0065:
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		Log_Warn_m3CB267FD0639BAC92FD468CE3504A464603C18C7(_stringLiteral0E19E0F52E30F2F710BE4D4762F3BD829D1933FB, NULL);
		return (bool)0;
	}
}
// System.Boolean Fusion.Sockets.Stun.StunClient::QueryPublicAddress(Fusion.Sockets.NetPeer*,Fusion.Sockets.INetSocket,System.Net.Sockets.AddressFamily,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunClient_QueryPublicAddress_m450E3B8F9BB0D8EBC3C20B29C0A29238FC9971CC (NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1* ___0_peer, RuntimeObject* ___1_socket, int32_t ___2_originalFamily, Guid_t* ___3_requestID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD70CB22FD93D7EFA1E44257434D619D1B611AE51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m371BA1FF584A3751C69E6A888B6C3B010867D229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4BAAF805EE90E2258BCAF796AFC3F164C62EEF49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetSocket_t8BC54CB2E1F9BA41FCE52BFAD0B25F6CA0031F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0EF0E9F28B9B5E99C5533483D74AB35D521533A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m880594DC72B9C2E1DB8B2BBD5B6584D5AF38DA08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5A16105456A8DD8EBE861BDD278A222C8FEEA07);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* V_1 = NULL;
	StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86 V_6;
	memset((&V_6), 0, sizeof(V_6));
	StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* V_7 = NULL;
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 V_8;
	memset((&V_8), 0, sizeof(V_8));
	uint8_t* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	{
		int32_t L_0 = ___2_originalFamily;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)23)))? 1 : 0);
		bool L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
		List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_2;
		L_2 = StunServers_GetStunServer_m3A617B7306F9D6A8611063722C7428277065243F(L_1, NULL);
		V_1 = L_2;
		List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m880594DC72B9C2E1DB8B2BBD5B6584D5AF38DA08_inline(L_3, List_1_get_Count_m880594DC72B9C2E1DB8B2BBD5B6584D5AF38DA08_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Log_tA9E9EB0883B29463D646F793311FA3F8F9B1C62B_il2cpp_TypeInfo_var);
		Log_Warn_m3CB267FD0639BAC92FD468CE3504A464603C18C7(_stringLiteralC5A16105456A8DD8EBE861BDD278A222C8FEEA07, NULL);
		goto IL_00e0;
	}

IL_0024:
	{
		Guid_t* L_5 = ___3_requestID;
		Guid_t L_6 = (*(Guid_t*)L_5);
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_7 = (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A*)il2cpp_codegen_object_new(StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StunMessage__ctor_mA5D9E152A0557B1A2E11FD86B9C96443CF342817(L_7, L_6, 1, NULL);
		V_2 = L_7;
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_8 = V_2;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = StunMessage_Serialize_m6F4E39F19A948FD1E95F65B5C6B8C86B67C21C7B(L_8, NULL);
		V_3 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		NullCheck(L_10);
		V_4 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		V_5 = (bool)0;
		List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_11 = V_1;
		NullCheck(L_11);
		Enumerator_t2B5870C8700EAAD595981BC0E022FD22723BCE86 L_12;
		L_12 = List_1_GetEnumerator_m0EF0E9F28B9B5E99C5533483D74AB35D521533A4(L_11, List_1_GetEnumerator_m0EF0E9F28B9B5E99C5533483D74AB35D521533A4_RuntimeMethod_var);
		V_6 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD70CB22FD93D7EFA1E44257434D619D1B611AE51((&V_6), Enumerator_Dispose_mD70CB22FD93D7EFA1E44257434D619D1B611AE51_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b5_1;
			}

IL_004a_1:
			{
				StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_13;
				L_13 = Enumerator_get_Current_m4BAAF805EE90E2258BCAF796AFC3F164C62EEF49_inline((&V_6), Enumerator_get_Current_m4BAAF805EE90E2258BCAF796AFC3F164C62EEF49_RuntimeMethod_var);
				V_7 = L_13;
			}
			try
			{// begin try (depth: 2)
				{
					bool L_14 = V_0;
					if (L_14)
					{
						goto IL_005f_2;
					}
				}
				{
					StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_15 = V_7;
					NullCheck(L_15);
					NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_16 = L_15->___IPv4Addr_0;
					G_B8_0 = L_16;
					goto IL_0066_2;
				}

IL_005f_2:
				{
					StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_17 = V_7;
					NullCheck(L_17);
					NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_18 = L_17->___IPv6Addr_1;
					G_B8_0 = L_18;
				}

IL_0066_2:
				{
					V_8 = G_B8_0;
					bool L_19;
					L_19 = NetAddress_get_IsValid_m567749D7A3F79DEC0F28D7791ADC303C3D2683E3((&V_8), NULL);
					if (L_19)
					{
						goto IL_0073_2;
					}
				}
				{
					goto IL_00b5_1;
				}

IL_0073_2:
				{
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_00ac_2:
						{// begin finally (depth: 3)
							V_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
							return;
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_20;
							V_10 = L_21;
							if (!L_21)
							{
								goto IL_0080_3;
							}
						}
						{
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_10;
							NullCheck(L_22);
							if (((int32_t)(((RuntimeArray*)L_22)->max_length)))
							{
								goto IL_0086_3;
							}
						}

IL_0080_3:
						{
							V_9 = (uint8_t*)((uintptr_t)0);
							goto IL_0091_3;
						}

IL_0086_3:
						{
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_10;
							NullCheck(L_23);
							V_9 = (uint8_t*)((uintptr_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
						}

IL_0091_3:
						{
							RuntimeObject* L_24 = ___1_socket;
							NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1* L_25 = ___0_peer;
							NullCheck(L_25);
							NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C L_26 = L_25->____socket_13;
							uint8_t* L_27 = V_9;
							int32_t L_28 = V_4;
							NullCheck(L_24);
							int32_t L_29;
							L_29 = InterfaceFuncInvoker4< int32_t, NetSocket_t69FE29F7AF8B6CD2AAC01F2D2DD006863C27463C, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678*, uint8_t*, int32_t >::Invoke(7 /* System.Int32 Fusion.Sockets.INetSocket::Send(Fusion.Sockets.NetSocket,Fusion.Sockets.NetAddress*,System.Byte*,System.Int32) */, INetSocket_t8BC54CB2E1F9BA41FCE52BFAD0B25F6CA0031F0E_il2cpp_TypeInfo_var, L_24, L_26, (NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678*)((uintptr_t)(&V_8)), L_27, L_28);
							if ((((int32_t)L_29) <= ((int32_t)0)))
							{
								goto IL_00aa_3;
							}
						}
						{
							V_5 = (bool)1;
						}

IL_00aa_3:
						{
							goto IL_00b0_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_00b0_2:
				{
					goto IL_00b5_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00b2_1;
				}
				throw e;
			}

CATCH_00b2_1:
			{// begin catch(System.Exception)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00b5_1;
			}// end catch (depth: 2)

IL_00b5_1:
			{
				bool L_30;
				L_30 = Enumerator_MoveNext_m371BA1FF584A3751C69E6A888B6C3B010867D229((&V_6), Enumerator_MoveNext_m371BA1FF584A3751C69E6A888B6C3B010867D229_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_004a_1;
				}
			}
			{
				goto IL_00ce;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00e0;
		}
	}
	{
		Guid_t* L_32 = ___3_requestID;
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_33 = V_2;
		NullCheck(L_33);
		Guid_t L_34;
		L_34 = StunMessage_get_ID_mF014352CAC8B67EC1E874085765FE66159BD445D(L_33, NULL);
		*(Guid_t*)L_32 = L_34;
		return (bool)1;
	}

IL_00e0:
	{
		return (bool)0;
	}
}
// System.Boolean Fusion.Sockets.Stun.StunClient::GetLocalAddress(System.Net.Sockets.AddressFamily&,System.Net.IPAddress&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunClient_GetLocalAddress_mF9EEE5A2ED34250765ED3B8A79FEBEA67538A447 (int32_t* ___0_addressFamily, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** ___1_localIP, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* G_B4_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* G_B3_0 = NULL;
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* G_B5_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* G_B5_1 = NULL;

IL_0000:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** L_0 = ___1_localIP;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
	}
	try
	{// begin try (depth: 1)
		{
			int32_t* L_1 = ___0_addressFamily;
			int32_t L_2 = *((int32_t*)L_1);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_3, L_2, 2, 0, NULL);
			V_0 = L_3;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038_1:
				{// begin finally (depth: 2)
					{
						Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = V_0;
						if (!L_4)
						{
							goto IL_0041_1;
						}
					}
					{
						Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_5 = V_0;
						NullCheck(L_5);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
					}

IL_0041_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_6 = V_0;
					int32_t* L_7 = ___0_addressFamily;
					int32_t L_8 = *((int32_t*)L_7);
					G_B3_0 = L_6;
					if ((((int32_t)L_8) == ((int32_t)2)))
					{
						G_B4_0 = L_6;
						goto IL_001a_2;
					}
				}
				{
					il2cpp_codegen_runtime_class_init_inline(TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var);
					IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_9 = ((TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_StaticFields*)il2cpp_codegen_static_fields_for(TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var))->___TEST_NET_IPV6_1;
					G_B5_0 = L_9;
					G_B5_1 = G_B3_0;
					goto IL_001f_2;
				}

IL_001a_2:
				{
					il2cpp_codegen_runtime_class_init_inline(TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var);
					IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_10 = ((TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_StaticFields*)il2cpp_codegen_static_fields_for(TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var))->___TEST_NET_IPV4_0;
					G_B5_0 = L_10;
					G_B5_1 = G_B4_0;
				}

IL_001f_2:
				{
					NullCheck(G_B5_1);
					Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1(G_B5_1, G_B5_0, NULL);
					IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** L_11 = ___1_localIP;
					Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_12 = V_0;
					NullCheck(L_12);
					EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_13;
					L_13 = Socket_get_LocalEndPoint_m3A2B4E60F0096E2DB31F7C28EF3CDE148D256E26(L_12, NULL);
					NullCheck(((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_13, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var)));
					IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_14;
					L_14 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_13, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var)), NULL);
					*((RuntimeObject**)L_11) = (RuntimeObject*)L_14;
					Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_14);
					goto IL_0042_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0042_1:
		{
			goto IL_0054;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0044;
		}
		throw e;
	}

CATCH_0044:
	{// begin catch(System.Object)
		{
			int32_t* L_15 = ___0_addressFamily;
			int32_t L_16 = *((int32_t*)L_15);
			if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)23)))))
			{
				goto IL_0050;
			}
		}
		{
			int32_t* L_17 = ___0_addressFamily;
			*((int32_t*)L_17) = (int32_t)2;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0000;
		}

IL_0050:
		{
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0056;
		}
	}// end catch (depth: 1)

IL_0054:
	{
		return (bool)1;
	}

IL_0056:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Void Fusion.Sockets.Stun.StunClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunClient__cctor_mF774FABC29793A6F7EDEE7F3A90F5A2F16F79B87 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m706CBF18B531FB450E99E51126D07AFD11E93F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9* L_0 = (ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9*)il2cpp_codegen_object_new(ConcurrentDictionary_2_t0AB8964A445C252F847C74DDE40996AA0C5A0CF9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentDictionary_2__ctor_m706CBF18B531FB450E99E51126D07AFD11E93F55(L_0, ConcurrentDictionary_2__ctor_m706CBF18B531FB450E99E51126D07AFD11E93F55_RuntimeMethod_var);
		((StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_StaticFields*)il2cpp_codegen_static_fields_for(StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_il2cpp_TypeInfo_var))->___PendingRequests_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_StaticFields*)il2cpp_codegen_static_fields_for(StunClient_t5DDD34A64DB7FE62604BB5F7521ECDA90461147F_il2cpp_TypeInfo_var))->___PendingRequests_0), (void*)L_0);
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
// System.Void Fusion.Sockets.Stun.StunClient/TestIPs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestIPs__cctor_m3F619D3A26956D42A1806B1F5B1CA87C9849BDBA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral894D7867F8A8007366B5961E7D3606B70C6751AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42A0BDFAEB781CEED59EC998FE68B0DA5027024);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0;
		L_0 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(_stringLiteral894D7867F8A8007366B5961E7D3606B70C6751AF, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_1, L_0, ((int32_t)65530), NULL);
		((TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_StaticFields*)il2cpp_codegen_static_fields_for(TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var))->___TEST_NET_IPV4_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_StaticFields*)il2cpp_codegen_static_fields_for(TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var))->___TEST_NET_IPV4_0), (void*)L_1);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2;
		L_2 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(_stringLiteralE42A0BDFAEB781CEED59EC998FE68B0DA5027024, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_3 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_3, L_2, ((int32_t)65530), NULL);
		((TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_StaticFields*)il2cpp_codegen_static_fields_for(TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var))->___TEST_NET_IPV6_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_StaticFields*)il2cpp_codegen_static_fields_for(TestIPs_tDD9EFC569B44CB8369851C2A16364BF7F6E8DB73_il2cpp_TypeInfo_var))->___TEST_NET_IPV6_1), (void*)L_3);
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
// System.Int32 Fusion.Sockets.Stun.StunErrorAttribute::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StunErrorAttribute_get_Code_m17B4D4B4F7C3AC69AB8F6A1D461AAC796D4E0A3D (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Fusion.Sockets.Stun.StunErrorAttribute::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunErrorAttribute_set_Code_m76B030EBE395A1918671532F8903B318331382FD (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCodeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Fusion.Sockets.Stun.StunErrorAttribute::get_ReasonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StunErrorAttribute_get_ReasonText_m2C5244FC9AFDDD8D5B22B42B20B6A30E3D20EC30 (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReasonTextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Fusion.Sockets.Stun.StunErrorAttribute::set_ReasonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunErrorAttribute_set_ReasonText_m0B32B576135B137D05606F2E617FEC4520F7A941 (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CReasonTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReasonTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Fusion.Sockets.Stun.StunErrorAttribute::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunErrorAttribute__ctor_mA0C8083B94C30A0F91DC828E199FCFA3C5597278 (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, int32_t ___0_code, String_t* ___1_reasonText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CReasonTextU3Ek__BackingField_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReasonTextU3Ek__BackingField_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_code;
		StunErrorAttribute_set_Code_m76B030EBE395A1918671532F8903B318331382FD_inline(__this, L_0, NULL);
		String_t* L_1 = ___1_reasonText;
		StunErrorAttribute_set_ReasonText_m0B32B576135B137D05606F2E617FEC4520F7A941_inline(__this, L_1, NULL);
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
// System.Collections.Generic.HashSet`1<System.Int32> Fusion.Sockets.Stun.StunMessage::get_StunMessageTypeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* StunMessage_get_StunMessageTypeValues_mA878C247666318BBE5DA4D7EF03EA29250C48596 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunMessageType_tD2ABFD398DFF657E3EA4FCB23B6D03B23948511D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_0 = ((StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_StaticFields*)il2cpp_codegen_static_fields_for(StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var))->____stunMessageTypeValues_6;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_1 = (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)il2cpp_codegen_object_new(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF(L_1, HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		((StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_StaticFields*)il2cpp_codegen_static_fields_for(StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var))->____stunMessageTypeValues_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_StaticFields*)il2cpp_codegen_static_fields_for(StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var))->____stunMessageTypeValues_6), (void*)L_1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (StunMessageType_tD2ABFD398DFF657E3EA4FCB23B6D03B23948511D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_4;
		L_4 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_4, NULL);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_2;
					if (!L_7)
					{
						goto IL_005a;
					}
				}
				{
					RuntimeObject* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_005a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040_1;
			}

IL_0028_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_11 = ((StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_StaticFields*)il2cpp_codegen_static_fields_for(StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var))->____stunMessageTypeValues_6;
				RuntimeObject* L_12 = V_1;
				NullCheck(L_11);
				bool L_13;
				L_13 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB(L_11, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_12, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
			}

IL_0040_1:
			{
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_16 = ((StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_StaticFields*)il2cpp_codegen_static_fields_for(StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var))->____stunMessageTypeValues_6;
		return L_16;
	}
}
// Fusion.Sockets.Stun.StunMessage/StunMessageType Fusion.Sockets.Stun.StunMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StunMessage_get_Type_mAA1D5D199BD4A92EA9E516D5DC2095EDC476C3A9 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::set_Type(Fusion.Sockets.Stun.StunMessage/StunMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_set_Type_mB9D836E728BB83FC4C3179659D207720E3BEAC8E (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Guid Fusion.Sockets.Stun.StunMessage::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t StunMessage_get_ID_mF014352CAC8B67EC1E874085765FE66159BD445D (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Guid_t* L_0 = (&__this->____id_5);
		Guid_t L_1 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_2;
		L_2 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = StunMessage_get_TransactionID_m141316199CE2735B2970FC91F22CD368584FF276_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_4, (RuntimeArray*)L_5, ((int32_t)12), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		Guid_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C((&L_7), L_6, /*hidden argument*/NULL);
		__this->____id_5 = L_7;
	}

IL_0034:
	{
		Guid_t L_8 = __this->____id_5;
		return L_8;
	}
}
// System.Byte[] Fusion.Sockets.Stun.StunMessage::get_TransactionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StunMessage_get_TransactionID_m141316199CE2735B2970FC91F22CD368584FF276 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CTransactionIDU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::set_TransactionID(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_set_TransactionID_mE404609C43F45918BB9E753ECACB07AB15C2FFD7 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CTransactionIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTransactionIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Net.IPEndPoint Fusion.Sockets.Stun.StunMessage::get_MappedAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* StunMessage_get_MappedAddress_mB565A09B26FB6557CA698AA4B8BBD9BAAD3009FC (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF9C900976AB61AD2D5D592926B772CD1FA679B12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m31E40DC5314457856C163A66EAA873DEBADBE9F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* L_0;
		L_0 = StunMessage_get_Attributes_m8D965EE41BDE387E65C87E20B56E184D36DCC0E0_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_ContainsKey_mF9C900976AB61AD2D5D592926B772CD1FA679B12(L_0, 1, Dictionary_2_ContainsKey_mF9C900976AB61AD2D5D592926B772CD1FA679B12_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* L_2;
		L_2 = StunMessage_get_Attributes_m8D965EE41BDE387E65C87E20B56E184D36DCC0E0_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Dictionary_2_get_Item_m31E40DC5314457856C163A66EAA873DEBADBE9F1(L_2, 1, Dictionary_2_get_Item_m31E40DC5314457856C163A66EAA873DEBADBE9F1_RuntimeMethod_var);
		return ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)IsInstClass((RuntimeObject*)L_3, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var));
	}

IL_0020:
	{
		return (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)NULL;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::set_MappedAddress(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_set_MappedAddress_mDB76503420252D2019DC3D4F4D6161DE4F5DA8B0 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m13EBF9E891377C655D8194AC234A1D735936506A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* L_0;
		L_0 = StunMessage_get_Attributes_m8D965EE41BDE387E65C87E20B56E184D36DCC0E0_inline(__this, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1 = ___0_value;
		NullCheck(L_0);
		Dictionary_2_set_Item_m13EBF9E891377C655D8194AC234A1D735936506A(L_0, 1, L_1, Dictionary_2_set_Item_m13EBF9E891377C655D8194AC234A1D735936506A_RuntimeMethod_var);
		return;
	}
}
// System.String Fusion.Sockets.Stun.StunMessage::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StunMessage_get_UserName_m73BB77079AB69367AB8E5AC0AC18AE45D5BDCD25 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::set_UserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_set_UserName_m2F440AE5D2E732643CDD9205F0276C65B5FB142E (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CUserNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Fusion.Sockets.Stun.StunErrorAttribute Fusion.Sockets.Stun.StunMessage::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* StunMessage_get_ErrorCode_m59A56D1CF2461C1047AFE3B5B7E01A16704C2E93 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	{
		StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* L_0 = __this->___U3CErrorCodeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::set_ErrorCode(Fusion.Sockets.Stun.StunErrorAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_set_ErrorCode_m399FBE8A572A684D485543177509DC36B98C3E3F (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* ___0_value, const RuntimeMethod* method) 
{
	{
		StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* L_0 = ___0_value;
		__this->___U3CErrorCodeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorCodeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object> Fusion.Sockets.Stun.StunMessage::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* StunMessage_get_Attributes_m8D965EE41BDE387E65C87E20B56E184D36DCC0E0 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* L_0 = __this->___U3CAttributesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::set_Attributes(System.Collections.Generic.Dictionary`2<Fusion.Sockets.Stun.StunMessage/AttributeType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_set_Attributes_m2016BDF3FCF0695472D5472B9366764FECA366BD (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* L_0 = ___0_value;
		__this->___U3CAttributesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttributesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::.ctor(System.Guid,Fusion.Sockets.Stun.StunMessage/StunMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage__ctor_mA5D9E152A0557B1A2E11FD86B9C96443CF342817 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, Guid_t ___0_msgID, int32_t ___1_messageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8959E5E76C8C9417C9108D197399783573BE7182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	{
		Guid_t L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		__this->____id_5 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_1 = ___1_messageType;
		StunMessage_set_Type_mB9D836E728BB83FC4C3179659D207720E3BEAC8E_inline(__this, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StunMessage_set_TransactionID_mE404609C43F45918BB9E753ECACB07AB15C2FFD7_inline(__this, L_2, NULL);
		Guid_t L_3 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_4;
		L_4 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&___0_msgID), L_3, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9((&___0_msgID), NULL);
		G_B3_0 = L_5;
		goto IL_0049;
	}

IL_003c:
	{
		Guid_t L_6;
		L_6 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9((&V_0), NULL);
		G_B3_0 = L_7;
	}

IL_0049:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = StunMessage_get_TransactionID_m141316199CE2735B2970FC91F22CD368584FF276_inline(__this, NULL);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)G_B3_0, (RuntimeArray*)L_8, ((int32_t)12), NULL);
		Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* L_9 = (Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7*)il2cpp_codegen_object_new(Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_m8959E5E76C8C9417C9108D197399783573BE7182(L_9, Dictionary_2__ctor_m8959E5E76C8C9417C9108D197399783573BE7182_RuntimeMethod_var);
		StunMessage_set_Attributes_m2016BDF3FCF0695472D5472B9366764FECA366BD_inline(__this, L_9, NULL);
		return;
	}
}
// System.Boolean Fusion.Sockets.Stun.StunMessage::IsStunMessage(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunMessage_IsStunMessage_m762804ABC834BBE7499AC90CDDEBA0F835D5868E (uint8_t* ___0_data, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___1_length;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)20))))
		{
			goto IL_000b;
		}
	}

IL_0009:
	{
		return (bool)0;
	}

IL_000b:
	{
		uint8_t* L_2 = ___0_data;
		int32_t L_3 = *((uint8_t*)L_2);
		uint8_t* L_4 = ___0_data;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 1)));
		V_0 = ((int32_t)(((int32_t)(L_3<<8))|L_5));
		uint8_t* L_6 = ___0_data;
		int32_t L_7 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 4)));
		uint8_t* L_8 = ___0_data;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 5)));
		uint8_t* L_10 = ___0_data;
		int32_t L_11 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, 6)));
		uint8_t* L_12 = ___0_data;
		int32_t L_13 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, 7)));
		if ((!(((uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_7<<((int32_t)24)))|((int32_t)(L_9<<((int32_t)16)))))|((int32_t)(L_11<<8))))|L_13))) == ((uint32_t)((int32_t)554869826)))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_14 = V_0;
		if (((int32_t)(L_14&((int32_t)49152))))
		{
			goto IL_004c;
		}
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_15;
		L_15 = StunMessage_get_StunMessageTypeValues_mA878C247666318BBE5DA4D7EF03EA29250C48596(NULL);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		bool L_17;
		L_17 = HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1(L_15, L_16, HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		return L_17;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Fusion.Sockets.Stun.StunMessage Fusion.Sockets.Stun.StunMessage::TryParse(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* StunMessage_TryParse_m56253CB188D0AEC52E68B211165EA801CAC9B94F (uint8_t* ___0_data, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunMessageType_tD2ABFD398DFF657E3EA4FCB23B6D03B23948511D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* V_4 = NULL;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___1_length;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)20))))
		{
			goto IL_000b;
		}
	}

IL_0009:
	{
		return (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A*)NULL;
	}

IL_000b:
	{
		V_0 = 0;
		uint8_t* L_2 = ___0_data;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_4)));
		uint8_t* L_6 = ___0_data;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_8)));
		V_1 = ((int32_t)(((int32_t)(L_5<<8))|L_9));
		int32_t L_10 = V_1;
		if (((int32_t)(L_10&((int32_t)49152))))
		{
			goto IL_0045;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (StunMessageType_tD2ABFD398DFF657E3EA4FCB23B6D03B23948511D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_12, L_15, NULL);
		if (!L_16)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_17 = V_1;
		V_2 = L_17;
		goto IL_0047;
	}

IL_0045:
	{
		return (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A*)NULL;
	}

IL_0047:
	{
		uint8_t* L_18 = ___0_data;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, L_20)));
		uint8_t* L_22 = ___0_data;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, L_24)));
		V_3 = ((int32_t)(((int32_t)(L_21<<8))|L_25));
		uint8_t* L_26 = ___0_data;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, L_28)));
		uint8_t* L_30 = ___0_data;
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, L_32)));
		uint8_t* L_34 = ___0_data;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_34, L_36)));
		uint8_t* L_38 = ___0_data;
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, L_40)));
		if ((((int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_29<<((int32_t)24)))|((int32_t)(L_33<<((int32_t)16)))))|((int32_t)(L_37<<8))))|L_41))) == ((int32_t)((int32_t)554869826))))
		{
			goto IL_008f;
		}
	}
	{
		return (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A*)NULL;
	}

IL_008f:
	{
		Guid_t L_42 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_43 = (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A*)il2cpp_codegen_object_new(StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		StunMessage__ctor_mA5D9E152A0557B1A2E11FD86B9C96443CF342817(L_43, L_42, 1, NULL);
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_44 = L_43;
		int32_t L_45 = V_2;
		NullCheck(L_44);
		StunMessage_set_Type_mB9D836E728BB83FC4C3179659D207720E3BEAC8E_inline(L_44, L_45, NULL);
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_46 = L_44;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		NullCheck(L_46);
		StunMessage_set_TransactionID_mE404609C43F45918BB9E753ECACB07AB15C2FFD7_inline(L_46, L_47, NULL);
		V_4 = L_46;
		V_5 = 0;
		goto IL_00cd;
	}

IL_00b5:
	{
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_48 = V_4;
		NullCheck(L_48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49;
		L_49 = StunMessage_get_TransactionID_m141316199CE2735B2970FC91F22CD368584FF276_inline(L_48, NULL);
		int32_t L_50 = V_5;
		uint8_t* L_51 = ___0_data;
		int32_t L_52 = V_0;
		int32_t L_53 = L_52;
		V_0 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_51, L_53)));
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (uint8_t)L_54);
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00cd:
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)12))))
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00df;
	}

IL_00d5:
	{
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_57 = V_4;
		uint8_t* L_58 = ___0_data;
		NullCheck(L_57);
		StunMessage_ReadAttribute_m7B7E48DB7BA0001F002F5CE67EE243160BFF3ADA(L_57, L_58, (&V_0), NULL);
	}

IL_00df:
	{
		int32_t L_59 = V_0;
		int32_t L_60 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_59, ((int32_t)20)))) < ((int32_t)L_60)))
		{
			goto IL_00d5;
		}
	}
	{
		StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* L_61 = V_4;
		return L_61;
	}
}
// System.Byte[] Fusion.Sockets.Stun.StunMessage::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StunMessage_Serialize_m6F4E39F19A948FD1E95F65B5C6B8C86B67C21C7B (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		V_0 = L_0;
		V_1 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4;
		L_4 = StunMessage_get_Type_mAA1D5D199BD4A92EA9E516D5DC2095EDC476C3A9_inline(__this, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_4>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8;
		L_8 = StunMessage_get_Type_mAA1D5D199BD4A92EA9E516D5DC2095EDC476C3A9_inline(__this, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_8&((int32_t)255)))));
		int32_t L_9 = V_1;
		V_2 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)33));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)((int32_t)18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)((int32_t)164));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)((int32_t)66));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = StunMessage_get_TransactionID_m141316199CE2735B2970FC91F22CD368584FF276_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		int32_t L_30 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_28, 0, (RuntimeArray*)L_29, L_30, ((int32_t)12), NULL);
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, ((int32_t)12)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		StunMessage_WriteAttributes_m918229B0AD96B8F59C8928E7CC131192F8B44E1A(__this, L_32, (&V_1), NULL);
		int32_t L_33 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_33, ((int32_t)20)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		int32_t L_35 = V_2;
		int32_t L_36 = L_35;
		V_2 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_3;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_37>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		int32_t L_39 = V_2;
		int32_t L_40 = L_39;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = V_3;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_41&((int32_t)255)))));
		int32_t L_42 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_42);
		V_4 = L_43;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_4;
		NullCheck(L_46);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_44, (RuntimeArray*)L_45, ((int32_t)(((RuntimeArray*)L_46)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_4;
		return L_47;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::WriteAttributes(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_WriteAttributes_m918229B0AD96B8F59C8928E7CC131192F8B44E1A (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_msg, int32_t* ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m47612CCC59F387578EBA2DC111FF5D7C3F730A9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF92E48CF9359E7A4E8B6F935CA15948DB26CF7E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8064D8E3DEC66B5F0ED801E2A852EA16670FCBC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDA3451A2C1A53BAE79EE44A306332C2551243654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mF249FA2714FDD4F0C3C34888EC2F884603E332A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m46CE9212C5D6A11AA98D6D6050BBF1EBF95D0D3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* L_0;
		L_0 = StunMessage_get_Attributes_m8D965EE41BDE387E65C87E20B56E184D36DCC0E0_inline(__this, NULL);
		NullCheck(L_0);
		Enumerator_t17178410D6D17A8716A372DC190742BAA1C6565E L_1;
		L_1 = Dictionary_2_GetEnumerator_m47612CCC59F387578EBA2DC111FF5D7C3F730A9F(L_0, Dictionary_2_GetEnumerator_m47612CCC59F387578EBA2DC111FF5D7C3F730A9F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01dd:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF92E48CF9359E7A4E8B6F935CA15948DB26CF7E5((&V_0), Enumerator_Dispose_mF92E48CF9359E7A4E8B6F935CA15948DB26CF7E5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01cf_1;
			}

IL_0011_1:
			{
				KeyValuePair_2_t0BAA9B28F0A1DE429DDE7D795B61640CE1D8F38A L_2;
				L_2 = Enumerator_get_Current_mDA3451A2C1A53BAE79EE44A306332C2551243654_inline((&V_0), Enumerator_get_Current_mDA3451A2C1A53BAE79EE44A306332C2551243654_RuntimeMethod_var);
				V_1 = L_2;
				int32_t L_3;
				L_3 = KeyValuePair_2_get_Key_mF249FA2714FDD4F0C3C34888EC2F884603E332A5_inline((&V_1), KeyValuePair_2_get_Key_mF249FA2714FDD4F0C3C34888EC2F884603E332A5_RuntimeMethod_var);
				V_4 = L_3;
				int32_t L_4 = V_4;
				if ((((int32_t)L_4) > ((int32_t)((int32_t)10))))
				{
					goto IL_004f_1;
				}
			}
			{
				int32_t L_5 = V_4;
				if ((((int32_t)L_5) == ((int32_t)1)))
				{
					goto IL_006f_1;
				}
			}
			{
				int32_t L_6 = V_4;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 6)))
				{
					case 0:
					{
						goto IL_0089_1;
					}
					case 1:
					{
						goto IL_01cf_1;
					}
					case 2:
					{
						goto IL_01cf_1;
					}
					case 3:
					{
						goto IL_0104_1;
					}
					case 4:
					{
						goto IL_01cf_1;
					}
				}
			}
			{
				goto IL_01cf_1;
			}

IL_004f_1:
			{
				int32_t L_7 = V_4;
				if ((((int32_t)L_7) == ((int32_t)((int32_t)20))))
				{
					goto IL_01cf_1;
				}
			}
			{
				int32_t L_8 = V_4;
				if ((((int32_t)L_8) == ((int32_t)((int32_t)21))))
				{
					goto IL_01cf_1;
				}
			}
			{
				int32_t L_9 = V_4;
				if ((((int32_t)L_9) == ((int32_t)((int32_t)32))))
				{
					goto IL_01cf_1;
				}
			}
			{
				goto IL_01cf_1;
			}

IL_006f_1:
			{
				RuntimeObject* L_10;
				L_10 = KeyValuePair_2_get_Value_m46CE9212C5D6A11AA98D6D6050BBF1EBF95D0D3F_inline((&V_1), KeyValuePair_2_get_Value_m46CE9212C5D6A11AA98D6D6050BBF1EBF95D0D3F_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_msg;
				int32_t* L_12 = ___1_offset;
				StunMessage_StoreEndPoint_mAA80BD506B05B5338695F4521BA7F956D25A4F94(__this, 1, ((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)CastclassClass((RuntimeObject*)L_10, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var)), L_11, L_12, NULL);
				goto IL_01cf_1;
			}

IL_0089_1:
			{
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
				L_13 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
				RuntimeObject* L_14;
				L_14 = KeyValuePair_2_get_Value_m46CE9212C5D6A11AA98D6D6050BBF1EBF95D0D3F_inline((&V_1), KeyValuePair_2_get_Value_m46CE9212C5D6A11AA98D6D6050BBF1EBF95D0D3F_RuntimeMethod_var);
				NullCheck(L_13);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
				L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_13, ((String_t*)CastclassSealed((RuntimeObject*)L_14, String_t_il2cpp_TypeInfo_var)));
				V_2 = L_15;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_msg;
				int32_t* L_17 = ___1_offset;
				int32_t* L_18 = ___1_offset;
				int32_t L_19 = *((int32_t*)L_18);
				V_5 = L_19;
				int32_t L_20 = V_5;
				*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1));
				int32_t L_21 = V_5;
				NullCheck(L_16);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)0);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_msg;
				int32_t* L_23 = ___1_offset;
				int32_t* L_24 = ___1_offset;
				int32_t L_25 = *((int32_t*)L_24);
				V_5 = L_25;
				int32_t L_26 = V_5;
				*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1));
				int32_t L_27 = V_5;
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)6);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___0_msg;
				int32_t* L_29 = ___1_offset;
				int32_t* L_30 = ___1_offset;
				int32_t L_31 = *((int32_t*)L_30);
				V_5 = L_31;
				int32_t L_32 = V_5;
				*((int32_t*)L_29) = (int32_t)((int32_t)il2cpp_codegen_add(L_32, 1));
				int32_t L_33 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
				NullCheck(L_34);
				NullCheck(L_28);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_34)->max_length))>>8))));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___0_msg;
				int32_t* L_36 = ___1_offset;
				int32_t* L_37 = ___1_offset;
				int32_t L_38 = *((int32_t*)L_37);
				V_5 = L_38;
				int32_t L_39 = V_5;
				*((int32_t*)L_36) = (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1));
				int32_t L_40 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_2;
				NullCheck(L_41);
				NullCheck(L_35);
				(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_41)->max_length))&((int32_t)255)))));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___0_msg;
				int32_t* L_44 = ___1_offset;
				int32_t L_45 = *((int32_t*)L_44);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_2;
				NullCheck(L_46);
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_42, 0, (RuntimeArray*)L_43, L_45, ((int32_t)(((RuntimeArray*)L_46)->max_length)), NULL);
				int32_t* L_47 = ___1_offset;
				int32_t* L_48 = ___1_offset;
				int32_t L_49 = *((int32_t*)L_48);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_2;
				NullCheck(L_50);
				*((int32_t*)L_47) = (int32_t)((int32_t)il2cpp_codegen_add(L_49, ((int32_t)(((RuntimeArray*)L_50)->max_length))));
				goto IL_01cf_1;
			}

IL_0104_1:
			{
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_51;
				L_51 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
				StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* L_52;
				L_52 = StunMessage_get_ErrorCode_m59A56D1CF2461C1047AFE3B5B7E01A16704C2E93_inline(__this, NULL);
				NullCheck(L_52);
				String_t* L_53;
				L_53 = StunErrorAttribute_get_ReasonText_m2C5244FC9AFDDD8D5B22B42B20B6A30E3D20EC30_inline(L_52, NULL);
				NullCheck(L_51);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54;
				L_54 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_51, L_53);
				V_3 = L_54;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ___0_msg;
				int32_t* L_56 = ___1_offset;
				int32_t* L_57 = ___1_offset;
				int32_t L_58 = *((int32_t*)L_57);
				V_5 = L_58;
				int32_t L_59 = V_5;
				*((int32_t*)L_56) = (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1));
				int32_t L_60 = V_5;
				NullCheck(L_55);
				(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)0);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___0_msg;
				int32_t* L_62 = ___1_offset;
				int32_t* L_63 = ___1_offset;
				int32_t L_64 = *((int32_t*)L_63);
				V_5 = L_64;
				int32_t L_65 = V_5;
				*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add(L_65, 1));
				int32_t L_66 = V_5;
				NullCheck(L_61);
				(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)((int32_t)9));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___0_msg;
				int32_t* L_68 = ___1_offset;
				int32_t* L_69 = ___1_offset;
				int32_t L_70 = *((int32_t*)L_69);
				V_5 = L_70;
				int32_t L_71 = V_5;
				*((int32_t*)L_68) = (int32_t)((int32_t)il2cpp_codegen_add(L_71, 1));
				int32_t L_72 = V_5;
				NullCheck(L_67);
				(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (uint8_t)0);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___0_msg;
				int32_t* L_74 = ___1_offset;
				int32_t* L_75 = ___1_offset;
				int32_t L_76 = *((int32_t*)L_75);
				V_5 = L_76;
				int32_t L_77 = V_5;
				*((int32_t*)L_74) = (int32_t)((int32_t)il2cpp_codegen_add(L_77, 1));
				int32_t L_78 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_3;
				NullCheck(L_79);
				NullCheck(L_73);
				(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(4, ((int32_t)(((RuntimeArray*)L_79)->max_length))))));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = ___0_msg;
				int32_t* L_81 = ___1_offset;
				int32_t* L_82 = ___1_offset;
				int32_t L_83 = *((int32_t*)L_82);
				V_5 = L_83;
				int32_t L_84 = V_5;
				*((int32_t*)L_81) = (int32_t)((int32_t)il2cpp_codegen_add(L_84, 1));
				int32_t L_85 = V_5;
				NullCheck(L_80);
				(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)0);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ___0_msg;
				int32_t* L_87 = ___1_offset;
				int32_t* L_88 = ___1_offset;
				int32_t L_89 = *((int32_t*)L_88);
				V_5 = L_89;
				int32_t L_90 = V_5;
				*((int32_t*)L_87) = (int32_t)((int32_t)il2cpp_codegen_add(L_90, 1));
				int32_t L_91 = V_5;
				NullCheck(L_86);
				(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (uint8_t)0);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ___0_msg;
				int32_t* L_93 = ___1_offset;
				int32_t* L_94 = ___1_offset;
				int32_t L_95 = *((int32_t*)L_94);
				V_5 = L_95;
				int32_t L_96 = V_5;
				*((int32_t*)L_93) = (int32_t)((int32_t)il2cpp_codegen_add(L_96, 1));
				int32_t L_97 = V_5;
				StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* L_98;
				L_98 = StunMessage_get_ErrorCode_m59A56D1CF2461C1047AFE3B5B7E01A16704C2E93_inline(__this, NULL);
				NullCheck(L_98);
				int32_t L_99;
				L_99 = StunErrorAttribute_get_Code_m17B4D4B4F7C3AC69AB8F6A1D461AAC796D4E0A3D_inline(L_98, NULL);
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				double L_100;
				L_100 = floor(((double)((int32_t)(L_99/((int32_t)100)))));
				NullCheck(L_92);
				(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_100));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = ___0_msg;
				int32_t* L_102 = ___1_offset;
				int32_t* L_103 = ___1_offset;
				int32_t L_104 = *((int32_t*)L_103);
				V_5 = L_104;
				int32_t L_105 = V_5;
				*((int32_t*)L_102) = (int32_t)((int32_t)il2cpp_codegen_add(L_105, 1));
				int32_t L_106 = V_5;
				StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* L_107;
				L_107 = StunMessage_get_ErrorCode_m59A56D1CF2461C1047AFE3B5B7E01A16704C2E93_inline(__this, NULL);
				NullCheck(L_107);
				int32_t L_108;
				L_108 = StunErrorAttribute_get_Code_m17B4D4B4F7C3AC69AB8F6A1D461AAC796D4E0A3D_inline(L_107, NULL);
				NullCheck(L_101);
				(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_108&((int32_t)255)))));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = ___0_msg;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = V_3;
				NullCheck(L_111);
				Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_109, (RuntimeArray*)L_110, ((int32_t)(((RuntimeArray*)L_111)->max_length)), NULL);
				int32_t* L_112 = ___1_offset;
				int32_t* L_113 = ___1_offset;
				int32_t L_114 = *((int32_t*)L_113);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = V_3;
				NullCheck(L_115);
				*((int32_t*)L_112) = (int32_t)((int32_t)il2cpp_codegen_add(L_114, ((int32_t)(((RuntimeArray*)L_115)->max_length))));
			}

IL_01cf_1:
			{
				bool L_116;
				L_116 = Enumerator_MoveNext_m8064D8E3DEC66B5F0ED801E2A852EA16670FCBC6((&V_0), Enumerator_MoveNext_m8064D8E3DEC66B5F0ED801E2A852EA16670FCBC6_RuntimeMethod_var);
				if (L_116)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_01eb;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01eb:
	{
		return;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::ReadAttribute(System.Byte*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_ReadAttribute_m7B7E48DB7BA0001F002F5CE67EE243160BFF3ADA (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, uint8_t* ___0_data, int32_t* ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BB76E7CBA2EB792F37AD108D6F125915DCAC6D6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		uint8_t* L_0 = ___0_data;
		int32_t* L_1 = ___1_offset;
		int32_t* L_2 = ___1_offset;
		int32_t L_3 = *((int32_t*)L_2);
		V_3 = L_3;
		int32_t L_4 = V_3;
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_3;
		int32_t L_6 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		uint8_t* L_7 = ___0_data;
		int32_t* L_8 = ___1_offset;
		int32_t* L_9 = ___1_offset;
		int32_t L_10 = *((int32_t*)L_9);
		V_3 = L_10;
		int32_t L_11 = V_3;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_3;
		int32_t L_13 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_12)));
		V_0 = ((int32_t)(((int32_t)(L_6<<8))|L_13));
		uint8_t* L_14 = ___0_data;
		int32_t* L_15 = ___1_offset;
		int32_t* L_16 = ___1_offset;
		int32_t L_17 = *((int32_t*)L_16);
		V_3 = L_17;
		int32_t L_18 = V_3;
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_3;
		int32_t L_20 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, L_19)));
		uint8_t* L_21 = ___0_data;
		int32_t* L_22 = ___1_offset;
		int32_t* L_23 = ___1_offset;
		int32_t L_24 = *((int32_t*)L_23);
		V_3 = L_24;
		int32_t L_25 = V_3;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_3;
		int32_t L_27 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, L_26)));
		V_1 = ((int32_t)(((int32_t)(L_20<<8))|L_27));
		int32_t* L_28 = ___1_offset;
		int32_t L_29 = *((int32_t*)L_28);
		V_2 = L_29;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_30 = V_0;
			if ((((int32_t)L_30) == ((int32_t)1)))
			{
				goto IL_007a_1;
			}
		}
		{
			int32_t L_31 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_31, 6)))
			{
				case 0:
				{
					goto IL_007a_1;
				}
				case 1:
				{
					goto IL_007a_1;
				}
				case 2:
				{
					goto IL_007a_1;
				}
				case 3:
				{
					goto IL_007a_1;
				}
				case 4:
				{
					goto IL_0070_1;
				}
			}
		}
		{
			int32_t L_32 = V_0;
			if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_007a_1;
			}
		}
		{
			uint8_t* L_33 = ___0_data;
			int32_t* L_34 = ___1_offset;
			IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_35;
			L_35 = StunMessage_ParseXorEndPoint_mFE94DF9172EF07C748292C62B0DF25941CEC88F4(__this, L_33, L_34, NULL);
			StunMessage_set_MappedAddress_mDB76503420252D2019DC3D4F4D6161DE4F5DA8B0(__this, L_35, NULL);
			goto IL_007a_1;
		}

IL_0070_1:
		{
			il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
			Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(_stringLiteral6BB76E7CBA2EB792F37AD108D6F125915DCAC6D6, NULL);
		}

IL_007a_1:
		{
			goto IL_007f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{// begin catch(System.Exception)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007f;
	}// end catch (depth: 1)

IL_007f:
	{
		int32_t* L_36 = ___1_offset;
		int32_t L_37 = V_2;
		int32_t L_38 = V_1;
		*((int32_t*)L_36) = (int32_t)((int32_t)il2cpp_codegen_add(L_37, L_38));
		return;
	}
}
// System.Net.IPEndPoint Fusion.Sockets.Stun.StunMessage::ParseEndPoint(System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* StunMessage_ParseEndPoint_mA80F4A7DA7CB8EC83D5CE408406E0BE4158DD002 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t* ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = ___1_offset;
		int32_t* L_1 = ___1_offset;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_data;
		int32_t* L_4 = ___1_offset;
		int32_t* L_5 = ___1_offset;
		int32_t L_6 = *((int32_t*)L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		NullCheck(L_3);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_data;
		int32_t* L_12 = ___1_offset;
		int32_t* L_13 = ___1_offset;
		int32_t L_14 = *((int32_t*)L_13);
		V_1 = L_14;
		int32_t L_15 = V_1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_1;
		NullCheck(L_11);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_data;
		int32_t* L_20 = ___1_offset;
		int32_t* L_21 = ___1_offset;
		int32_t L_22 = *((int32_t*)L_21);
		V_1 = L_22;
		int32_t L_23 = V_1;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = V_1;
		NullCheck(L_19);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int32_t)(((int32_t)((int32_t)L_18<<8))|(int32_t)L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___0_data;
		int32_t* L_30 = ___1_offset;
		int32_t* L_31 = ___1_offset;
		int32_t L_32 = *((int32_t*)L_31);
		V_1 = L_32;
		int32_t L_33 = V_1;
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = V_1;
		NullCheck(L_29);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___0_data;
		int32_t* L_39 = ___1_offset;
		int32_t* L_40 = ___1_offset;
		int32_t L_41 = *((int32_t*)L_40);
		V_1 = L_41;
		int32_t L_42 = V_1;
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_1;
		NullCheck(L_38);
		int32_t L_44 = L_43;
		uint8_t L_45 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = L_37;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___0_data;
		int32_t* L_48 = ___1_offset;
		int32_t* L_49 = ___1_offset;
		int32_t L_50 = *((int32_t*)L_49);
		V_1 = L_50;
		int32_t L_51 = V_1;
		*((int32_t*)L_48) = (int32_t)((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = V_1;
		NullCheck(L_47);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_data;
		int32_t* L_57 = ___1_offset;
		int32_t* L_58 = ___1_offset;
		int32_t L_59 = *((int32_t*)L_58);
		V_1 = L_59;
		int32_t L_60 = V_1;
		*((int32_t*)L_57) = (int32_t)((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_1;
		NullCheck(L_56);
		int32_t L_62 = L_61;
		uint8_t L_63 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_63);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_64 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_64, L_55, NULL);
		int32_t L_65 = V_0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_66 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_66, L_64, L_65, NULL);
		return L_66;
	}
}
// System.Net.IPEndPoint Fusion.Sockets.Stun.StunMessage::ParseXorEndPoint(System.Byte*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* StunMessage_ParseXorEndPoint_mFE94DF9172EF07C748292C62B0DF25941CEC88F4 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, uint8_t* ___0_data, int32_t* ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	{
		int32_t* L_0 = ___1_offset;
		int32_t* L_1 = ___1_offset;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, 1));
		uint8_t* L_3 = ___0_data;
		int32_t* L_4 = ___1_offset;
		int32_t* L_5 = ___1_offset;
		int32_t L_6 = *((int32_t*)L_5);
		V_2 = L_6;
		int32_t L_7 = V_2;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_2;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_8)));
		V_0 = L_9;
		uint8_t* L_10 = ___0_data;
		int32_t* L_11 = ___1_offset;
		int32_t* L_12 = ___1_offset;
		int32_t L_13 = *((int32_t*)L_12);
		V_2 = L_13;
		int32_t L_14 = V_2;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_2;
		int32_t L_16 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, L_15)));
		uint8_t* L_17 = ___0_data;
		int32_t* L_18 = ___1_offset;
		int32_t* L_19 = ___1_offset;
		int32_t L_20 = *((int32_t*)L_19);
		V_2 = L_20;
		int32_t L_21 = V_2;
		*((int32_t*)L_18) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_2;
		int32_t L_23 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_22)));
		V_1 = ((int32_t)(((int32_t)(L_16<<8))|L_23));
		int32_t L_24 = V_1;
		V_1 = ((int32_t)(L_24^((int32_t)8466)));
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_024b;
	}

IL_0047:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_3;
		uint8_t* L_29 = ___0_data;
		int32_t* L_30 = ___1_offset;
		int32_t* L_31 = ___1_offset;
		int32_t L_32 = *((int32_t*)L_31);
		V_2 = L_32;
		int32_t L_33 = V_2;
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = V_2;
		int32_t L_35 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, L_34)));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_3;
		uint8_t* L_37 = ___0_data;
		int32_t* L_38 = ___1_offset;
		int32_t* L_39 = ___1_offset;
		int32_t L_40 = *((int32_t*)L_39);
		V_2 = L_40;
		int32_t L_41 = V_2;
		*((int32_t*)L_38) = (int32_t)((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_2;
		int32_t L_43 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, L_42)));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_43);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_3;
		uint8_t* L_45 = ___0_data;
		int32_t* L_46 = ___1_offset;
		int32_t* L_47 = ___1_offset;
		int32_t L_48 = *((int32_t*)L_47);
		V_2 = L_48;
		int32_t L_49 = V_2;
		*((int32_t*)L_46) = (int32_t)((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_2;
		int32_t L_51 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_45, L_50)));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_51);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_3;
		uint8_t* L_53 = ___0_data;
		int32_t* L_54 = ___1_offset;
		int32_t* L_55 = ___1_offset;
		int32_t L_56 = *((int32_t*)L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		*((int32_t*)L_54) = (int32_t)((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t L_58 = V_2;
		int32_t L_59 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_53, L_58)));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_59);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_60 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_60)
		{
			goto IL_0097;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_3;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_61, NULL);
	}

IL_0097:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_63;
		L_63 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_62, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64;
		L_64 = BitConverter_GetBytes_m61B5DA2AFDE71BC154C7E0298759972A0A422290(((int32_t)((int32_t)L_63^((int32_t)554869826))), NULL);
		V_4 = L_64;
		bool L_65 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_65)
		{
			goto IL_00b9;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_4;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_66, NULL);
	}

IL_00b9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_68;
		L_68 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_67, 0, NULL);
		int32_t L_69 = V_1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_70 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		IPEndPoint__ctor_m16D9FC6DA967F79B612A59A804E1374B9D324E4A(L_70, ((int64_t)(uint64_t)L_68), L_69, NULL);
		return L_70;
	}

IL_00c9:
	{
		uint8_t* L_71 = ___0_data;
		int32_t* L_72 = ___1_offset;
		int32_t* L_73 = ___1_offset;
		int32_t L_74 = *((int32_t*)L_73);
		V_2 = L_74;
		int32_t L_75 = V_2;
		*((int32_t*)L_72) = (int32_t)((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = V_2;
		int32_t L_77 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, L_76)));
		uint8_t* L_78 = ___0_data;
		int32_t* L_79 = ___1_offset;
		int32_t* L_80 = ___1_offset;
		int32_t L_81 = *((int32_t*)L_80);
		V_2 = L_81;
		int32_t L_82 = V_2;
		*((int32_t*)L_79) = (int32_t)((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = V_2;
		int32_t L_84 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, L_83)));
		uint8_t* L_85 = ___0_data;
		int32_t* L_86 = ___1_offset;
		int32_t* L_87 = ___1_offset;
		int32_t L_88 = *((int32_t*)L_87);
		V_2 = L_88;
		int32_t L_89 = V_2;
		*((int32_t*)L_86) = (int32_t)((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_2;
		int32_t L_91 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_85, L_90)));
		uint8_t* L_92 = ___0_data;
		int32_t* L_93 = ___1_offset;
		int32_t* L_94 = ___1_offset;
		int32_t L_95 = *((int32_t*)L_94);
		V_2 = L_95;
		int32_t L_96 = V_2;
		*((int32_t*)L_93) = (int32_t)((int32_t)il2cpp_codegen_add(L_96, 1));
		int32_t L_97 = V_2;
		int32_t L_98 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_92, L_97)));
		uint8_t* L_99 = ___0_data;
		int32_t* L_100 = ___1_offset;
		int32_t* L_101 = ___1_offset;
		int32_t L_102 = *((int32_t*)L_101);
		V_2 = L_102;
		int32_t L_103 = V_2;
		*((int32_t*)L_100) = (int32_t)((int32_t)il2cpp_codegen_add(L_103, 1));
		int32_t L_104 = V_2;
		int32_t L_105 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_99, L_104)));
		uint8_t* L_106 = ___0_data;
		int32_t* L_107 = ___1_offset;
		int32_t* L_108 = ___1_offset;
		int32_t L_109 = *((int32_t*)L_108);
		V_2 = L_109;
		int32_t L_110 = V_2;
		*((int32_t*)L_107) = (int32_t)((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_2;
		int32_t L_112 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_106, L_111)));
		uint8_t* L_113 = ___0_data;
		int32_t* L_114 = ___1_offset;
		int32_t* L_115 = ___1_offset;
		int32_t L_116 = *((int32_t*)L_115);
		V_2 = L_116;
		int32_t L_117 = V_2;
		*((int32_t*)L_114) = (int32_t)((int32_t)il2cpp_codegen_add(L_117, 1));
		int32_t L_118 = V_2;
		int32_t L_119 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_113, L_118)));
		uint8_t* L_120 = ___0_data;
		int32_t* L_121 = ___1_offset;
		int32_t* L_122 = ___1_offset;
		int32_t L_123 = *((int32_t*)L_122);
		V_2 = L_123;
		int32_t L_124 = V_2;
		*((int32_t*)L_121) = (int32_t)((int32_t)il2cpp_codegen_add(L_124, 1));
		int32_t L_125 = V_2;
		int32_t L_126 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_120, L_125)));
		uint8_t* L_127 = ___0_data;
		int32_t* L_128 = ___1_offset;
		int32_t* L_129 = ___1_offset;
		int32_t L_130 = *((int32_t*)L_129);
		V_2 = L_130;
		int32_t L_131 = V_2;
		*((int32_t*)L_128) = (int32_t)((int32_t)il2cpp_codegen_add(L_131, 1));
		int32_t L_132 = V_2;
		int32_t L_133 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_127, L_132)));
		uint8_t* L_134 = ___0_data;
		int32_t* L_135 = ___1_offset;
		int32_t* L_136 = ___1_offset;
		int32_t L_137 = *((int32_t*)L_136);
		V_2 = L_137;
		int32_t L_138 = V_2;
		*((int32_t*)L_135) = (int32_t)((int32_t)il2cpp_codegen_add(L_138, 1));
		int32_t L_139 = V_2;
		int32_t L_140 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_134, L_139)));
		uint8_t* L_141 = ___0_data;
		int32_t* L_142 = ___1_offset;
		int32_t* L_143 = ___1_offset;
		int32_t L_144 = *((int32_t*)L_143);
		V_2 = L_144;
		int32_t L_145 = V_2;
		*((int32_t*)L_142) = (int32_t)((int32_t)il2cpp_codegen_add(L_145, 1));
		int32_t L_146 = V_2;
		int32_t L_147 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_141, L_146)));
		uint8_t* L_148 = ___0_data;
		int32_t* L_149 = ___1_offset;
		int32_t* L_150 = ___1_offset;
		int32_t L_151 = *((int32_t*)L_150);
		V_2 = L_151;
		int32_t L_152 = V_2;
		*((int32_t*)L_149) = (int32_t)((int32_t)il2cpp_codegen_add(L_152, 1));
		int32_t L_153 = V_2;
		int32_t L_154 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_148, L_153)));
		uint8_t* L_155 = ___0_data;
		int32_t* L_156 = ___1_offset;
		int32_t* L_157 = ___1_offset;
		int32_t L_158 = *((int32_t*)L_157);
		V_2 = L_158;
		int32_t L_159 = V_2;
		*((int32_t*)L_156) = (int32_t)((int32_t)il2cpp_codegen_add(L_159, 1));
		int32_t L_160 = V_2;
		int32_t L_161 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_155, L_160)));
		uint8_t* L_162 = ___0_data;
		int32_t* L_163 = ___1_offset;
		int32_t* L_164 = ___1_offset;
		int32_t L_165 = *((int32_t*)L_164);
		V_2 = L_165;
		int32_t L_166 = V_2;
		*((int32_t*)L_163) = (int32_t)((int32_t)il2cpp_codegen_add(L_166, 1));
		int32_t L_167 = V_2;
		int32_t L_168 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_162, L_167)));
		uint8_t* L_169 = ___0_data;
		int32_t* L_170 = ___1_offset;
		int32_t* L_171 = ___1_offset;
		int32_t L_172 = *((int32_t*)L_171);
		V_2 = L_172;
		int32_t L_173 = V_2;
		*((int32_t*)L_170) = (int32_t)((int32_t)il2cpp_codegen_add(L_173, 1));
		int32_t L_174 = V_2;
		int32_t L_175 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_169, L_174)));
		uint8_t* L_176 = ___0_data;
		int32_t* L_177 = ___1_offset;
		int32_t* L_178 = ___1_offset;
		int32_t L_179 = *((int32_t*)L_178);
		V_2 = L_179;
		int32_t L_180 = V_2;
		*((int32_t*)L_177) = (int32_t)((int32_t)il2cpp_codegen_add(L_180, 1));
		int32_t L_181 = V_2;
		int32_t L_182 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_176, L_181)));
		V_5 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_133))<<((int32_t)56)))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_140))<<((int32_t)48)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_147))<<((int32_t)40)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_154))<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_161))<<((int32_t)24)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_168))<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_175))<<8))))|((int64_t)(uint64_t)((uint32_t)L_182))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183;
		L_183 = StunMessage_get_TransactionID_m141316199CE2735B2970FC91F22CD368584FF276_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		uint32_t L_184;
		L_184 = BitConverter_ToUInt32_m177FADD1E9B033C11D74E8DD1F957F62EF0BA177(L_183, 0, NULL);
		V_6 = ((int64_t)(uint64_t)L_184);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_185;
		L_185 = StunMessage_get_TransactionID_m141316199CE2735B2970FC91F22CD368584FF276_inline(__this, NULL);
		uint64_t L_186;
		L_186 = BitConverter_ToUInt64_mE7ED21EC4F2485A3AD117BA6DC44E1B6ED16DF23(L_185, 4, NULL);
		V_7 = L_186;
		uint64_t L_187 = V_6;
		V_6 = ((int64_t)(((int64_t)((int64_t)L_187<<((int32_t)32)))|((int64_t)((int32_t)1118048801))));
		uint64_t L_188 = V_6;
		uint64_t L_189 = V_5;
		uint64_t L_190 = V_7;
		V_8 = ((int64_t)((int64_t)L_189^(int64_t)L_190));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_191;
		L_191 = BitConverter_GetBytes_m46CC8E040C5AB40FFDFBA8562779A3C14E95C7F7(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_77))<<((int32_t)56)))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_84))<<((int32_t)48)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_91))<<((int32_t)40)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_98))<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_105))<<((int32_t)24)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_112))<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_119))<<8))))|((int64_t)(uint64_t)((uint32_t)L_126))))^(int64_t)L_188)), NULL);
		V_9 = L_191;
		uint64_t L_192 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_193;
		L_193 = BitConverter_GetBytes_m46CC8E040C5AB40FFDFBA8562779A3C14E95C7F7(L_192, NULL);
		V_10 = L_193;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_194 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_11 = L_194;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_195 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_196 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_197 = V_9;
		NullCheck(L_197);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_195, 0, (RuntimeArray*)L_196, 0, ((int32_t)(((RuntimeArray*)L_197)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_198 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_199 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_200 = V_10;
		NullCheck(L_200);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_198, 0, (RuntimeArray*)L_199, 8, ((int32_t)(((RuntimeArray*)L_200)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_201 = V_11;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_202 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_202);
		IPAddress__ctor_m01F2FA932B0D4C0B2E15C6C837E3C52DDF186964(L_202, L_201, NULL);
		int32_t L_203 = V_1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_204 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_204);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_204, L_202, L_203, NULL);
		return L_204;
	}

IL_024b:
	{
		return (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)NULL;
	}
}
// System.Void Fusion.Sockets.Stun.StunMessage::StoreEndPoint(Fusion.Sockets.Stun.StunMessage/AttributeType,System.Net.IPEndPoint,System.Byte[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunMessage_StoreEndPoint_mAA80BD506B05B5338695F4521BA7F956D25A4F94 (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, int32_t ___0_type, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___1_endPoint, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_message, int32_t* ___3_offset, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_message;
		int32_t* L_1 = ___3_offset;
		int32_t* L_2 = ___3_offset;
		int32_t L_3 = *((int32_t*)L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		int32_t L_6 = ___0_type;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_message;
		int32_t* L_8 = ___3_offset;
		int32_t* L_9 = ___3_offset;
		int32_t L_10 = *((int32_t*)L_9);
		V_1 = L_10;
		int32_t L_11 = V_1;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_1;
		int32_t L_13 = ___0_type;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_13&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_message;
		int32_t* L_15 = ___3_offset;
		int32_t* L_16 = ___3_offset;
		int32_t L_17 = *((int32_t*)L_16);
		V_1 = L_17;
		int32_t L_18 = V_1;
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___2_message;
		int32_t* L_21 = ___3_offset;
		int32_t* L_22 = ___3_offset;
		int32_t L_23 = *((int32_t*)L_22);
		V_1 = L_23;
		int32_t L_24 = V_1;
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_1;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___2_message;
		int32_t* L_27 = ___3_offset;
		int32_t* L_28 = ___3_offset;
		int32_t L_29 = *((int32_t*)L_28);
		V_1 = L_29;
		int32_t L_30 = V_1;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___2_message;
		int32_t* L_33 = ___3_offset;
		int32_t* L_34 = ___3_offset;
		int32_t L_35 = *((int32_t*)L_34);
		V_1 = L_35;
		int32_t L_36 = V_1;
		*((int32_t*)L_33) = (int32_t)((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_1;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___2_message;
		int32_t* L_39 = ___3_offset;
		int32_t* L_40 = ___3_offset;
		int32_t L_41 = *((int32_t*)L_40);
		V_1 = L_41;
		int32_t L_42 = V_1;
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_44 = ___1_endPoint;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_44, NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_45>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___2_message;
		int32_t* L_47 = ___3_offset;
		int32_t* L_48 = ___3_offset;
		int32_t L_49 = *((int32_t*)L_48);
		V_1 = L_49;
		int32_t L_50 = V_1;
		*((int32_t*)L_47) = (int32_t)((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_52 = ___1_endPoint;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline(L_52, NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_53&((int32_t)255)))));
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_54 = ___1_endPoint;
		NullCheck(L_54);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_55;
		L_55 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_54, NULL);
		NullCheck(L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = IPAddress_GetAddressBytes_m1501E0143C791E3A065E508F5535D8E206652EC9(L_55, NULL);
		V_0 = L_56;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___2_message;
		int32_t* L_58 = ___3_offset;
		int32_t* L_59 = ___3_offset;
		int32_t L_60 = *((int32_t*)L_59);
		V_1 = L_60;
		int32_t L_61 = V_1;
		*((int32_t*)L_58) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = 0;
		uint8_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)L_65);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___2_message;
		int32_t* L_67 = ___3_offset;
		int32_t* L_68 = ___3_offset;
		int32_t L_69 = *((int32_t*)L_68);
		V_1 = L_69;
		int32_t L_70 = V_1;
		*((int32_t*)L_67) = (int32_t)((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_71 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = 0;
		uint8_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (uint8_t)L_74);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___2_message;
		int32_t* L_76 = ___3_offset;
		int32_t* L_77 = ___3_offset;
		int32_t L_78 = *((int32_t*)L_77);
		V_1 = L_78;
		int32_t L_79 = V_1;
		*((int32_t*)L_76) = (int32_t)((int32_t)il2cpp_codegen_add(L_79, 1));
		int32_t L_80 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = 0;
		uint8_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint8_t)L_83);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ___2_message;
		int32_t* L_85 = ___3_offset;
		int32_t* L_86 = ___3_offset;
		int32_t L_87 = *((int32_t*)L_86);
		V_1 = L_87;
		int32_t L_88 = V_1;
		*((int32_t*)L_85) = (int32_t)((int32_t)il2cpp_codegen_add(L_88, 1));
		int32_t L_89 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_0;
		NullCheck(L_90);
		int32_t L_91 = 0;
		uint8_t L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint8_t)L_92);
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
// System.Boolean Fusion.Sockets.Stun.StunResult::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunResult_get_IsValid_m53EB8189F5367E9DCA86DB763F47A93BAD5C8356 (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, const RuntimeMethod* method) 
{
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0;
		L_0 = StunResult_get_PublicEndPoint_m1485BB2CB5473A91A61290D8B282C10D13E437A3_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = NetAddress_get_IsValid_m567749D7A3F79DEC0F28D7791ADC303C3D2683E3((&V_0), NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_2;
		L_2 = StunResult_get_PrivateEndPoint_mF7D08C0787F02F894FB5B4E8B152008B5FB4525A_inline(__this, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = NetAddress_get_IsValid_m567749D7A3F79DEC0F28D7791ADC303C3D2683E3((&V_0), NULL);
		return L_3;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunResult::get_PublicEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 StunResult_get_PublicEndPoint_m1485BB2CB5473A91A61290D8B282C10D13E437A3 (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = __this->___U3CPublicEndPointU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Fusion.Sockets.Stun.StunResult::set_PublicEndPoint(Fusion.Sockets.NetAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunResult_set_PublicEndPoint_m8025B115B50B8A24891686C99057152A63787949 (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_value, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = ___0_value;
		__this->___U3CPublicEndPointU3Ek__BackingField_1 = L_0;
		return;
	}
}
// Fusion.Sockets.NetAddress Fusion.Sockets.Stun.StunResult::get_PrivateEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 StunResult_get_PrivateEndPoint_mF7D08C0787F02F894FB5B4E8B152008B5FB4525A (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = __this->___U3CPrivateEndPointU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Fusion.Sockets.Stun.StunResult::set_PrivateEndPoint(Fusion.Sockets.NetAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunResult_set_PrivateEndPoint_mBB2061FB22A57C9749C947393B5137A857BC4871 (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_value, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = ___0_value;
		__this->___U3CPrivateEndPointU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Fusion.Sockets.Stun.StunResult::.ctor(Fusion.Sockets.NetAddress,Fusion.Sockets.NetAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunResult__ctor_m05D888D7FC10B5B0ED60766BE8AE5F70F79B71CE (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_publicEndPoint, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___1_privateEndPoint, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = ___0_publicEndPoint;
		StunResult_set_PublicEndPoint_m8025B115B50B8A24891686C99057152A63787949_inline(__this, L_0, NULL);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_1 = ___1_privateEndPoint;
		StunResult_set_PrivateEndPoint_mBB2061FB22A57C9749C947393B5137A857BC4871_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Fusion.Sockets.Stun.StunResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StunResult_ToString_m8A3729019DB1427F7F2ADDC7D3D1FC5CD237C8DE (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NATType_tA4CE5E0E6F04B1D91FB863D289B080E6D5E6ECEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B93E2CFCB8E2955088EFD8A4B12D6780590E567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CE1F17187ECFF21ECE9C4168E806B400D93B69B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DD8626B09368EA05B680FEA8C90AC2242D3962D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral751D9B94CF9F82A18F349EE0884042DF1586DC33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8595CE9E70917936717BD86EFD435C1478C57AE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1DD8626B09368EA05B680FEA8C90AC2242D3962D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral1DD8626B09368EA05B680FEA8C90AC2242D3962D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral8595CE9E70917936717BD86EFD435C1478C57AE4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral8595CE9E70917936717BD86EFD435C1478C57AE4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_4;
		L_4 = StunResult_get_PublicEndPoint_m1485BB2CB5473A91A61290D8B282C10D13E437A3_inline(__this, NULL);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_5 = L_4;
		RuntimeObject* L_6 = Box(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral0B93E2CFCB8E2955088EFD8A4B12D6780590E567);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral0B93E2CFCB8E2955088EFD8A4B12D6780590E567);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_9;
		L_9 = StunResult_get_PrivateEndPoint_mF7D08C0787F02F894FB5B4E8B152008B5FB4525A_inline(__this, NULL);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_10 = L_9;
		RuntimeObject* L_11 = Box(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1CE1F17187ECFF21ECE9C4168E806B400D93B69B);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteral1CE1F17187ECFF21ECE9C4168E806B400D93B69B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		uint8_t L_14 = __this->___NatType_0;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(NATType_tA4CE5E0E6F04B1D91FB863D289B080E6D5E6ECEF_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral751D9B94CF9F82A18F349EE0884042DF1586DC33, L_13, NULL);
		return L_17;
	}
}
// System.Void Fusion.Sockets.Stun.StunResult::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunResult__cctor_m2E46D6FBAA4381741CFA7FDAFDCDF92BB7A0A34A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = ((NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_StaticFields*)il2cpp_codegen_static_fields_for(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var))->___AnyIPv4Addr_5;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_1 = ((NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_StaticFields*)il2cpp_codegen_static_fields_for(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var))->___AnyIPv4Addr_5;
		StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* L_2 = (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E*)il2cpp_codegen_object_new(StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StunResult__ctor_m05D888D7FC10B5B0ED60766BE8AE5F70F79B71CE(L_2, L_0, L_1, NULL);
		((StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E_StaticFields*)il2cpp_codegen_static_fields_for(StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E_il2cpp_TypeInfo_var))->___Invalid_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E_StaticFields*)il2cpp_codegen_static_fields_for(StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E_il2cpp_TypeInfo_var))->___Invalid_3), (void*)L_2);
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
// System.Collections.Generic.List`1<Fusion.Sockets.Stun.StunServers/StunServer> Fusion.Sockets.Stun.StunServers::GetStunServer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* StunServers_GetStunServer_m3A617B7306F9D6A8611063722C7428277065243F (bool ___0_IPv6Support, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB17439587DE894852B0376C7FCDCBCAA66AAF731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* V_0 = NULL;
	StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* V_1 = NULL;
	int32_t V_2 = 0;
	StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* V_3 = NULL;
	{
		List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_0 = (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386*)il2cpp_codegen_object_new(List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB17439587DE894852B0376C7FCDCBCAA66AAF731(L_0, List_1__ctor_mB17439587DE894852B0376C7FCDCBCAA66AAF731_RuntimeMethod_var);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
		StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* L_1 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____stunServers_2;
		il2cpp_codegen_memory_barrier();
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
		StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* L_2 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____stunServers_2;
		il2cpp_codegen_memory_barrier();
		V_1 = L_2;
		V_2 = 0;
		goto IL_0043;
	}

IL_001b:
	{
		StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_7 = V_3;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_8 = V_3;
		NullCheck(L_8);
		bool L_9;
		L_9 = StunServer_get_HasIPv4Support_m0C240F3BA64564CE4FBB116A85FB85C782DF8D7C(L_8, NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		bool L_10 = ___0_IPv6Support;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		bool L_11 = ___0_IPv6Support;
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_12 = V_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = StunServer_get_HasIPv6Support_mAA4B23CF3097BAEA38F79239915599A8470EA965(L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}

IL_0038:
	{
		List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_14 = V_0;
		StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_15 = V_3;
		NullCheck(L_14);
		List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_inline(L_14, L_15, List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_RuntimeMethod_var);
	}

IL_003f:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0043:
	{
		int32_t L_17 = V_2;
		StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_001b;
		}
	}

IL_0049:
	{
		List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_19 = V_0;
		return L_19;
	}
}
// System.Threading.Tasks.Task`1<Fusion.Sockets.Stun.StunServers/StunServer> Fusion.Sockets.Stun.StunServers::BuildIP(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* StunServers_BuildIP_mB00049102DDAE528AE542FAB4194521182632919 (String_t* ___0_stunServerAddr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m64BA2EBE2B284B751100205F2795E3125F1A12B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_mDAB2A85BF2F4FD3AF497177684DEF9F4BE7FCEB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m4DD2E042FA6BFA2F2597F5ACB7C58E335103A329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m64BA2EBE2B284B751100205F2795E3125F1A12B1(AsyncTaskMethodBuilder_1_Create_m64BA2EBE2B284B751100205F2795E3125F1A12B1_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_stunServerAddr;
		(&V_0)->___stunServerAddr_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___stunServerAddr_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_mDAB2A85BF2F4FD3AF497177684DEF9F4BE7FCEB8(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_mDAB2A85BF2F4FD3AF497177684DEF9F4BE7FCEB8_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m4DD2E042FA6BFA2F2597F5ACB7C58E335103A329(L_3, AsyncTaskMethodBuilder_1_get_Task_m4DD2E042FA6BFA2F2597F5ACB7C58E335103A329_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task Fusion.Sockets.Stun.StunServers::SetupStunServers(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* StunServers_SetupStunServers_mADCD87046418CEFA1EDAB5F54A51469A766227F9 (String_t* ___0_customStunServer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5A72DC4DE74304F00BBFCBA4192294F0022338F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_customStunServer;
		(&V_0)->___customStunServer_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___customStunServer_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5A72DC4DE74304F00BBFCBA4192294F0022338F8(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5A72DC4DE74304F00BBFCBA4192294F0022338F8_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Void Fusion.Sockets.Stun.StunServers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunServers__cctor_m0D2A4E2B7694A2FFB46FF3A1567B3AF05725C3C0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AB4B52315036F8F8AA7ADA3F72C61DA1E4AD60D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52C6EAFB8DEAAA162FDAAFB7C9FF63AD62C713F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85BF0CF512F0758122E9103D1D414F49970E1738);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885529AE3F6B23E840CFEC656E40A922EEDD87BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95E32F859C4BD9A3836758C70D76DEA12321AEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral52C6EAFB8DEAAA162FDAAFB7C9FF63AD62C713F0);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral52C6EAFB8DEAAA162FDAAFB7C9FF63AD62C713F0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral95E32F859C4BD9A3836758C70D76DEA12321AEC7);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral95E32F859C4BD9A3836758C70D76DEA12321AEC7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral885529AE3F6B23E840CFEC656E40A922EEDD87BE);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885529AE3F6B23E840CFEC656E40A922EEDD87BE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1AB4B52315036F8F8AA7ADA3F72C61DA1E4AD60D);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1AB4B52315036F8F8AA7ADA3F72C61DA1E4AD60D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral85BF0CF512F0758122E9103D1D414F49970E1738);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral85BF0CF512F0758122E9103D1D414F49970E1738);
		((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->___STUN_SERVER_LIST_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->___STUN_SERVER_LIST_0), (void*)L_5);
		il2cpp_codegen_memory_barrier();
		((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____customStunServer_1 = (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____customStunServer_1), (void*)(StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*)NULL);
		il2cpp_codegen_memory_barrier();
		((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____runningResolution_3 = (bool)0;
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
// System.Boolean Fusion.Sockets.Stun.StunServers/StunServer::get_HasIPv4Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunServer_get_HasIPv4Support_m0C240F3BA64564CE4FBB116A85FB85C782DF8D7C (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* __this, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_0 = (&__this->___IPv4Addr_0);
		bool L_1;
		L_1 = NetAddress_get_IsValid_m567749D7A3F79DEC0F28D7791ADC303C3D2683E3(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Fusion.Sockets.Stun.StunServers/StunServer::get_HasIPv6Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StunServer_get_HasIPv6Support_mAA4B23CF3097BAEA38F79239915599A8470EA965 (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* __this, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_0 = (&__this->___IPv6Addr_1);
		bool L_1;
		L_1 = NetAddress_get_IsValid_m567749D7A3F79DEC0F28D7791ADC303C3D2683E3(L_0, NULL);
		return L_1;
	}
}
// System.String Fusion.Sockets.Stun.StunServers/StunServer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StunServer_ToString_m9A27E93759A963984F8ED9B619F32A3A26A6A150 (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40114FFF257678C29FF8C3EF907BA609E4F07350);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B878039E9D40F79446117192BD554C1893E4403);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C7B4EC2D00470FC13550884E5677F799CE5989C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1F4975819195AC909F00AB519DF7ABC95BDE9C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral5B878039E9D40F79446117192BD554C1893E4403);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral5B878039E9D40F79446117192BD554C1893E4403);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral7C7B4EC2D00470FC13550884E5677F799CE5989C);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral7C7B4EC2D00470FC13550884E5677F799CE5989C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_4 = __this->___IPv4Addr_0;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_5 = L_4;
		RuntimeObject* L_6 = Box(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral40114FFF257678C29FF8C3EF907BA609E4F07350);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral40114FFF257678C29FF8C3EF907BA609E4F07350);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_9 = __this->___IPv6Addr_1;
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_10 = L_9;
		RuntimeObject* L_11 = Box(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_11);
		String_t* L_12;
		L_12 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralF1F4975819195AC909F00AB519DF7ABC95BDE9C6, L_8, NULL);
		return L_12;
	}
}
// System.Void Fusion.Sockets.Stun.StunServers/StunServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StunServer__ctor_m93E0235595C1B9B5011DF2DB762B17261004BB4B (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* __this, const RuntimeMethod* method) 
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
// System.Void Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildIPU3Ed__6_MoveNext_mA8BE4B2A547F61813FDC2B06222A46FBD43B2708 (U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_m79EBEFD3F259A8E3AC1011F8CEF8BC9A6E1DA0AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF038939358BC897B18994E1C684F8355CB49D93D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m18BC7A5795509C90CAC30D09F189BFB15847A302_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m0E876AB5624966FACD0DE5737373A95BA10DB61A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m29DDC28169C6B6C7390F47320DBA359CE864FFBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* V_1 = NULL;
	String_t* V_2 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF V_6;
	memset((&V_6), 0, sizeof(V_6));
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_7 = NULL;
	int32_t V_8 = 0;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_9 = NULL;
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_00af_1;
			}
		}
		{
			V_2 = (String_t*)NULL;
			__this->___U3CportU3E5__2_3 = (uint16_t)0;
			String_t* L_2 = __this->___stunServerAddr_2;
			bool L_3;
			L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
			if (L_3)
			{
				goto IL_0069_1;
			}
		}
		{
			String_t* L_4 = __this->___stunServerAddr_2;
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = L_5;
			NullCheck(L_6);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
			NullCheck(L_4);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
			L_7 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_4, L_6, NULL);
			V_4 = L_7;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_4;
			NullCheck(L_8);
			if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((uint32_t)2))))
			{
				goto IL_0062_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_4;
			NullCheck(L_9);
			int32_t L_10 = 1;
			String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			uint16_t* L_12 = (&__this->___U3CportU3E5__2_3);
			bool L_13;
			L_13 = UInt16_TryParse_m02DD9A625527B4019B32ACC9A5D3B09D72B2FBB6(L_11, L_12, NULL);
			if (!L_13)
			{
				goto IL_0062_1;
			}
		}
		{
			uint16_t L_14 = __this->___U3CportU3E5__2_3;
			if (!L_14)
			{
				goto IL_0062_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_4;
			NullCheck(L_15);
			int32_t L_16 = 0;
			String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			V_2 = L_17;
			goto IL_0069_1;
		}

IL_0062_1:
		{
			V_1 = (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*)NULL;
			goto IL_0231;
		}

IL_0069_1:
		{
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_18 = (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*)il2cpp_codegen_object_new(StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			StunServer__ctor_m93E0235595C1B9B5011DF2DB762B17261004BB4B(L_18, NULL);
			__this->___U3CstunServerU3E5__3_4 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstunServerU3E5__3_4), (void*)L_18);
			String_t* L_19 = V_2;
			il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
			bool L_20;
			L_20 = IPAddress_TryParse_m082F2D09B53BD7A957418E2E7BE4C37AD8EE1AF0(L_19, (&V_3), NULL);
			if (!L_20)
			{
				goto IL_00af_1;
			}
		}
		{
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21 = V_3;
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			uint16_t L_23 = __this->___U3CportU3E5__2_3;
			il2cpp_codegen_runtime_class_init_inline(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
			NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_24;
			L_24 = NetAddress_CreateFromIpPort_mFD5D7E03E7BAB971DE25179A9810E71C5F3D80D5(L_22, L_23, NULL);
			V_5 = L_24;
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_25 = V_3;
			NullCheck(L_25);
			int32_t L_26;
			L_26 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_25, NULL);
			if ((!(((uint32_t)L_26) == ((uint32_t)2))))
			{
				goto IL_01f7_1;
			}
		}
		{
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_27 = __this->___U3CstunServerU3E5__3_4;
			NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_28 = V_5;
			NullCheck(L_27);
			L_27->___IPv4Addr_0 = L_28;
			goto IL_01f7_1;
		}

IL_00af_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_29 = V_0;
				if (!L_29)
				{
					goto IL_00ed_2;
				}
			}
			{
				String_t* L_30 = V_2;
				Task_1_tAC26C3CB300EB1DB608D4ADE41BFFBD5924E4670* L_31;
				L_31 = Dns_GetHostAddressesAsync_mD44D0F7FED8A21D03825D7A290F7CE00643004A0(L_30, NULL);
				NullCheck(L_31);
				TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF L_32;
				L_32 = Task_1_GetAwaiter_m29DDC28169C6B6C7390F47320DBA359CE864FFBB(L_31, Task_1_GetAwaiter_m29DDC28169C6B6C7390F47320DBA359CE864FFBB_RuntimeMethod_var);
				V_6 = L_32;
				bool L_33;
				L_33 = TaskAwaiter_1_get_IsCompleted_m0E876AB5624966FACD0DE5737373A95BA10DB61A((&V_6), TaskAwaiter_1_get_IsCompleted_m0E876AB5624966FACD0DE5737373A95BA10DB61A_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_010a_2;
				}
			}
			{
				int32_t L_34 = 0;
				V_0 = L_34;
				__this->___U3CU3E1__state_0 = L_34;
				TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF L_35 = V_6;
				__this->___U3CU3Eu__1_5 = L_35;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* L_36 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_m79EBEFD3F259A8E3AC1011F8CEF8BC9A6E1DA0AA(L_36, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF_TisU3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843_m79EBEFD3F259A8E3AC1011F8CEF8BC9A6E1DA0AA_RuntimeMethod_var);
				goto IL_024c;
			}

IL_00ed_2:
			{
				TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF L_37 = __this->___U3CU3Eu__1_5;
				V_6 = L_37;
				TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF* L_38 = (&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_38, sizeof(TaskAwaiter_1_t894583ED7AA29E04C0AF85F0E3C9F45716A46EDF));
				int32_t L_39 = (-1);
				V_0 = L_39;
				__this->___U3CU3E1__state_0 = L_39;
			}

IL_010a_2:
			{
				IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_40;
				L_40 = TaskAwaiter_1_GetResult_m18BC7A5795509C90CAC30D09F189BFB15847A302((&V_6), TaskAwaiter_1_GetResult_m18BC7A5795509C90CAC30D09F189BFB15847A302_RuntimeMethod_var);
				V_7 = L_40;
				V_8 = 0;
				goto IL_01e7_2;
			}

IL_011b_2:
			{
				IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_41 = V_7;
				int32_t L_42 = V_8;
				NullCheck(L_41);
				int32_t L_43 = L_42;
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
				V_9 = L_44;
				StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_45 = __this->___U3CstunServerU3E5__3_4;
				NullCheck(L_45);
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_46 = (&L_45->___IPv4Addr_0);
				il2cpp_codegen_initobj((&V_10), sizeof(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678));
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_47 = V_10;
				bool L_48;
				L_48 = NetAddress_Equals_mCF4EAFDFEE838A3CCB4D2FAF1A22889C3E2B2DDF(L_46, L_47, NULL);
				if (!L_48)
				{
					goto IL_0165_2;
				}
			}
			{
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_49 = V_9;
				NullCheck(L_49);
				int32_t L_50;
				L_50 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_49, NULL);
				if ((!(((uint32_t)L_50) == ((uint32_t)2))))
				{
					goto IL_0165_2;
				}
			}
			{
				StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_51 = __this->___U3CstunServerU3E5__3_4;
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_52 = V_9;
				NullCheck(L_52);
				String_t* L_53;
				L_53 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
				uint16_t L_54 = __this->___U3CportU3E5__2_3;
				il2cpp_codegen_runtime_class_init_inline(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_55;
				L_55 = NetAddress_CreateFromIpPort_mFD5D7E03E7BAB971DE25179A9810E71C5F3D80D5(L_53, L_54, NULL);
				NullCheck(L_51);
				L_51->___IPv4Addr_0 = L_55;
			}

IL_0165_2:
			{
				StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_56 = __this->___U3CstunServerU3E5__3_4;
				NullCheck(L_56);
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_57 = (&L_56->___IPv6Addr_1);
				il2cpp_codegen_initobj((&V_10), sizeof(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678));
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_58 = V_10;
				bool L_59;
				L_59 = NetAddress_Equals_mCF4EAFDFEE838A3CCB4D2FAF1A22889C3E2B2DDF(L_57, L_58, NULL);
				if (!L_59)
				{
					goto IL_01a9_2;
				}
			}
			{
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_60 = V_9;
				NullCheck(L_60);
				int32_t L_61;
				L_61 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_60, NULL);
				if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)23)))))
				{
					goto IL_01a9_2;
				}
			}
			{
				StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_62 = __this->___U3CstunServerU3E5__3_4;
				IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_63 = V_9;
				NullCheck(L_63);
				String_t* L_64;
				L_64 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_63);
				uint16_t L_65 = __this->___U3CportU3E5__2_3;
				il2cpp_codegen_runtime_class_init_inline(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_il2cpp_TypeInfo_var);
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_66;
				L_66 = NetAddress_CreateFromIpPort_mFD5D7E03E7BAB971DE25179A9810E71C5F3D80D5(L_64, L_65, NULL);
				NullCheck(L_62);
				L_62->___IPv6Addr_1 = L_66;
			}

IL_01a9_2:
			{
				StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_67 = __this->___U3CstunServerU3E5__3_4;
				NullCheck(L_67);
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_68 = (&L_67->___IPv4Addr_0);
				il2cpp_codegen_initobj((&V_10), sizeof(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678));
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_69 = V_10;
				bool L_70;
				L_70 = NetAddress_Equals_mCF4EAFDFEE838A3CCB4D2FAF1A22889C3E2B2DDF(L_68, L_69, NULL);
				if (L_70)
				{
					goto IL_01e1_2;
				}
			}
			{
				StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_71 = __this->___U3CstunServerU3E5__3_4;
				NullCheck(L_71);
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678* L_72 = (&L_71->___IPv6Addr_1);
				il2cpp_codegen_initobj((&V_10), sizeof(NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678));
				NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_73 = V_10;
				bool L_74;
				L_74 = NetAddress_Equals_mCF4EAFDFEE838A3CCB4D2FAF1A22889C3E2B2DDF(L_72, L_73, NULL);
				if (!L_74)
				{
					goto IL_01f2_2;
				}
			}

IL_01e1_2:
			{
				int32_t L_75 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_75, 1));
			}

IL_01e7_2:
			{
				int32_t L_76 = V_8;
				IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_77 = V_7;
				NullCheck(L_77);
				if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
				{
					goto IL_011b_2;
				}
			}

IL_01f2_2:
			{
				goto IL_01f7_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f4_1;
			}
			throw e;
		}

CATCH_01f4_1:
		{// begin catch(System.Exception)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01f7_1;
		}// end catch (depth: 2)

IL_01f7_1:
		{
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_78 = __this->___U3CstunServerU3E5__3_4;
			NullCheck(L_78);
			bool L_79;
			L_79 = StunServer_get_HasIPv4Support_m0C240F3BA64564CE4FBB116A85FB85C782DF8D7C(L_78, NULL);
			if (!L_79)
			{
				goto IL_020d_1;
			}
		}
		{
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_80 = __this->___U3CstunServerU3E5__3_4;
			V_1 = L_80;
			goto IL_0231;
		}

IL_020d_1:
		{
			V_1 = (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*)NULL;
			goto IL_0231;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0211;
		}
		throw e;
	}

CATCH_0211:
	{// begin catch(System.Exception)
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CstunServerU3E5__3_4 = (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstunServerU3E5__3_4), (void*)(StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*)NULL);
		AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* L_81 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_82 = V_11;
		AsyncTaskMethodBuilder_1_SetException_m2D0E5584BA32473BB4B51FE64B70089A9B320753(L_81, L_82, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m2D0E5584BA32473BB4B51FE64B70089A9B320753_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_024c;
	}// end catch (depth: 1)

IL_0231:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CstunServerU3E5__3_4 = (StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstunServerU3E5__3_4), (void*)(StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED*)NULL);
		AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* L_83 = (&__this->___U3CU3Et__builder_1);
		StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_84 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF038939358BC897B18994E1C684F8355CB49D93D(L_83, L_84, AsyncTaskMethodBuilder_1_SetResult_mF038939358BC897B18994E1C684F8355CB49D93D_RuntimeMethod_var);
	}

IL_024c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CBuildIPU3Ed__6_MoveNext_mA8BE4B2A547F61813FDC2B06222A46FBD43B2708_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843*>(__this + _offset);
	U3CBuildIPU3Ed__6_MoveNext_mA8BE4B2A547F61813FDC2B06222A46FBD43B2708(_thisAdjusted, method);
}
// System.Void Fusion.Sockets.Stun.StunServers/<BuildIP>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildIPU3Ed__6_SetStateMachine_m281257EC942D2B54574E13D4DFC329C863DEB8E1 (U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m89444FDC58D3D2B3A1B79EAD6FE663CB9C889EBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t7E8BC34336E860178A1663A1249128D36868BE45* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m89444FDC58D3D2B3A1B79EAD6FE663CB9C889EBB(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m89444FDC58D3D2B3A1B79EAD6FE663CB9C889EBB_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CBuildIPU3Ed__6_SetStateMachine_m281257EC942D2B54574E13D4DFC329C863DEB8E1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CBuildIPU3Ed__6_t23C0BFF7CC2F2D38BD7C77FBFE0C33BD42E32843*>(__this + _offset);
	U3CBuildIPU3Ed__6_SetStateMachine_m281257EC942D2B54574E13D4DFC329C863DEB8E1(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupStunServersU3Ed__7_MoveNext_m46E73A667F2110F573F13D7B1D92F4FFF6116969 (U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5B5D02CD9F9DAEB013645FBC2ECA4E2B858007C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_mEBD60BAAD210BC3E17A8319D534D855B55C93C9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mE88E1F18DEF48D3DD112D6E50392BC24EDBEA49C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB17439587DE894852B0376C7FCDCBCAA66AAF731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA13959224915FCD9748000668C5B66155E0C56B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE6388157F996986E7B9841C1EA43DA4EEF891644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskManager_t95955ADB242732E5EC1EA4D9A4A0B1F31799976D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mB2C784407374D9E3699C870087A4969B72E9E4D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 V_3;
	memset((&V_3), 0, sizeof(V_3));
	StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_005d_1;
				}
				case 1:
				{
					goto IL_00f2_1;
				}
				case 2:
				{
					goto IL_019d_1;
				}
			}
		}
		{
			goto IL_0080_1;
		}

IL_001b_1:
		{
			il2cpp_codegen_initobj((&V_2), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = V_2;
			il2cpp_codegen_runtime_class_init_inline(TaskManager_t95955ADB242732E5EC1EA4D9A4A0B1F31799976D_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
			L_3 = TaskManager_Delay_mA16CDA9482963A979D1782D1B00FBCB1D6FD9151(((int32_t)10), L_2, NULL);
			NullCheck(L_3);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_4;
			L_4 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_3, NULL);
			V_1 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_5)
			{
				goto IL_0079_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_7 = V_1;
			__this->___U3CU3Eu__1_3 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_mEBD60BAAD210BC3E17A8319D534D855B55C93C9C(L_8, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_mEBD60BAAD210BC3E17A8319D534D855B55C93C9C_RuntimeMethod_var);
			goto IL_0246;
		}

IL_005d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = __this->___U3CU3Eu__1_3;
			V_1 = L_9;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_10 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_0079_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
		}

IL_0080_1:
		{
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			bool L_12 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____runningResolution_3;
			il2cpp_codegen_memory_barrier();
			if (L_12)
			{
				goto IL_001b_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* L_13 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____stunServers_2;
			il2cpp_codegen_memory_barrier();
			if (!L_13)
			{
				goto IL_0097_1;
			}
		}
		{
			goto IL_0233;
		}

IL_0097_1:
		{
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			il2cpp_codegen_memory_barrier();
			((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____runningResolution_3 = (bool)1;
			String_t* L_14 = __this->___customStunServer_2;
			bool L_15;
			L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
			if (L_15)
			{
				goto IL_011c_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_16 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____customStunServer_1;
			il2cpp_codegen_memory_barrier();
			if (L_16)
			{
				goto IL_011c_1;
			}
		}
		{
			String_t* L_17 = __this->___customStunServer_2;
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* L_18;
			L_18 = StunServers_BuildIP_mB00049102DDAE528AE542FAB4194521182632919(L_17, NULL);
			NullCheck(L_18);
			TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 L_19;
			L_19 = Task_1_GetAwaiter_mB2C784407374D9E3699C870087A4969B72E9E4D3(L_18, Task_1_GetAwaiter_mB2C784407374D9E3699C870087A4969B72E9E4D3_RuntimeMethod_var);
			V_3 = L_19;
			bool L_20;
			L_20 = TaskAwaiter_1_get_IsCompleted_mE6388157F996986E7B9841C1EA43DA4EEF891644((&V_3), TaskAwaiter_1_get_IsCompleted_mE6388157F996986E7B9841C1EA43DA4EEF891644_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_010e_1;
			}
		}
		{
			int32_t L_21 = 1;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 L_22 = V_3;
			__this->___U3CU3Eu__2_4 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_23 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5B5D02CD9F9DAEB013645FBC2ECA4E2B858007C1(L_23, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5B5D02CD9F9DAEB013645FBC2ECA4E2B858007C1_RuntimeMethod_var);
			goto IL_0246;
		}

IL_00f2_1:
		{
			TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 L_24 = __this->___U3CU3Eu__2_4;
			V_3 = L_24;
			TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56* L_25 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_010e_1:
		{
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_27;
			L_27 = TaskAwaiter_1_GetResult_mA13959224915FCD9748000668C5B66155E0C56B9((&V_3), TaskAwaiter_1_GetResult_mA13959224915FCD9748000668C5B66155E0C56B9_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			il2cpp_codegen_memory_barrier();
			((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____customStunServer_1 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____customStunServer_1), (void*)L_27);
		}

IL_011c_1:
		{
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* L_28 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____stunServers_2;
			il2cpp_codegen_memory_barrier();
			if (L_28)
			{
				goto IL_0210_1;
			}
		}
		{
			List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_29 = (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386*)il2cpp_codegen_object_new(List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386_il2cpp_TypeInfo_var);
			NullCheck(L_29);
			List_1__ctor_mB17439587DE894852B0376C7FCDCBCAA66AAF731(L_29, List_1__ctor_mB17439587DE894852B0376C7FCDCBCAA66AAF731_RuntimeMethod_var);
			__this->___U3CstunServersU3E5__2_5 = L_29;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstunServersU3E5__2_5), (void*)L_29);
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_30 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____customStunServer_1;
			il2cpp_codegen_memory_barrier();
			if (!L_30)
			{
				goto IL_014e_1;
			}
		}
		{
			List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_31 = __this->___U3CstunServersU3E5__2_5;
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_32 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____customStunServer_1;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_31);
			List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_inline(L_31, L_32, List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_RuntimeMethod_var);
		}

IL_014e_1:
		{
			__this->___U3CiU3E5__3_6 = 0;
			goto IL_01e5_1;
		}

IL_015a_1:
		{
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->___STUN_SERVER_LIST_0;
			int32_t L_34 = __this->___U3CiU3E5__3_6;
			NullCheck(L_33);
			int32_t L_35 = L_34;
			String_t* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			Task_1_t26A076F73CA670AC1EC4EC08576883918B068187* L_37;
			L_37 = StunServers_BuildIP_mB00049102DDAE528AE542FAB4194521182632919(L_36, NULL);
			NullCheck(L_37);
			TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 L_38;
			L_38 = Task_1_GetAwaiter_mB2C784407374D9E3699C870087A4969B72E9E4D3(L_37, Task_1_GetAwaiter_mB2C784407374D9E3699C870087A4969B72E9E4D3_RuntimeMethod_var);
			V_3 = L_38;
			bool L_39;
			L_39 = TaskAwaiter_1_get_IsCompleted_mE6388157F996986E7B9841C1EA43DA4EEF891644((&V_3), TaskAwaiter_1_get_IsCompleted_mE6388157F996986E7B9841C1EA43DA4EEF891644_RuntimeMethod_var);
			if (L_39)
			{
				goto IL_01b9_1;
			}
		}
		{
			int32_t L_40 = 2;
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
			TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 L_41 = V_3;
			__this->___U3CU3Eu__2_4 = L_41;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_42 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5B5D02CD9F9DAEB013645FBC2ECA4E2B858007C1(L_42, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56_TisU3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4_m5B5D02CD9F9DAEB013645FBC2ECA4E2B858007C1_RuntimeMethod_var);
			goto IL_0246;
		}

IL_019d_1:
		{
			TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56 L_43 = __this->___U3CU3Eu__2_4;
			V_3 = L_43;
			TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56* L_44 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_44, sizeof(TaskAwaiter_1_t0816DA59C00C5BA97D3EF2DAF74553DEF679CC56));
			int32_t L_45 = (-1);
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
		}

IL_01b9_1:
		{
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_46;
			L_46 = TaskAwaiter_1_GetResult_mA13959224915FCD9748000668C5B66155E0C56B9((&V_3), TaskAwaiter_1_GetResult_mA13959224915FCD9748000668C5B66155E0C56B9_RuntimeMethod_var);
			V_4 = L_46;
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_47 = V_4;
			if (!L_47)
			{
				goto IL_01d3_1;
			}
		}
		{
			List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_48 = __this->___U3CstunServersU3E5__2_5;
			StunServer_t72443C92B21C32C1D239356DABD29E4DC89628ED* L_49 = V_4;
			NullCheck(L_48);
			List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_inline(L_48, L_49, List_1_Add_m6CD25AE564BACA7CD05BE420AA08D1DEF5A66F46_RuntimeMethod_var);
		}

IL_01d3_1:
		{
			int32_t L_50 = __this->___U3CiU3E5__3_6;
			V_5 = L_50;
			int32_t L_51 = V_5;
			__this->___U3CiU3E5__3_6 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		}

IL_01e5_1:
		{
			int32_t L_52 = __this->___U3CiU3E5__3_6;
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = ((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->___STUN_SERVER_LIST_0;
			NullCheck(L_53);
			if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
			{
				goto IL_015a_1;
			}
		}
		{
			List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386* L_54 = __this->___U3CstunServersU3E5__2_5;
			NullCheck(L_54);
			StunServerU5BU5D_tDF387949A1939186468F90EFFFF456B354F86D01* L_55;
			L_55 = List_1_ToArray_mE88E1F18DEF48D3DD112D6E50392BC24EDBEA49C(L_54, List_1_ToArray_mE88E1F18DEF48D3DD112D6E50392BC24EDBEA49C_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			il2cpp_codegen_memory_barrier();
			((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____stunServers_2 = L_55;
			Il2CppCodeGenWriteBarrier((void**)(&((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____stunServers_2), (void*)L_55);
			__this->___U3CstunServersU3E5__2_5 = (List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstunServersU3E5__2_5), (void*)(List_1_t56E43BFDA4031F31CC4B59474D4EAE1A6A94C386*)NULL);
		}

IL_0210_1:
		{
			il2cpp_codegen_runtime_class_init_inline(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var);
			il2cpp_codegen_memory_barrier();
			((StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_StaticFields*)il2cpp_codegen_static_fields_for(StunServers_t88D00CFCFE9316D5804C74611D1543ACE78F65CA_il2cpp_TypeInfo_var))->____runningResolution_3 = (bool)0;
			goto IL_0233;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_021a;
		}
		throw e;
	}

CATCH_021a:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_56 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_57 = V_6;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_56, L_57, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0246;
	}// end catch (depth: 1)

IL_0233:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_58 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_58, NULL);
	}

IL_0246:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetupStunServersU3Ed__7_MoveNext_m46E73A667F2110F573F13D7B1D92F4FFF6116969_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4*>(__this + _offset);
	U3CSetupStunServersU3Ed__7_MoveNext_m46E73A667F2110F573F13D7B1D92F4FFF6116969(_thisAdjusted, method);
}
// System.Void Fusion.Sockets.Stun.StunServers/<SetupStunServers>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupStunServersU3Ed__7_SetStateMachine_m666E3B545E7B1A3BE301D697F9B7A01D84D5A9F6 (U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetupStunServersU3Ed__7_SetStateMachine_m666E3B545E7B1A3BE301D697F9B7A01D84D5A9F6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetupStunServersU3Ed__7_tE64B156A4657FFA71C454436F10A49DBA9A441E4*>(__this + _offset);
	U3CSetupStunServersU3Ed__7_SetStateMachine_m666E3B545E7B1A3BE301D697F9B7A01D84D5A9F6(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetBitBuffer_ReadUInt64_mE06C258053CF27CCAF89716749EDDD7D82C1FB7D_inline (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, int32_t ___0_bits, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_bits;
		uint64_t L_1;
		L_1 = NetBitBuffer_Read_mF888869143529081FCC8CD64F99A42CBFA54C1E2(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetBitBuffer_ReadInt32_m75FE811ABEADCF57F949E8EF16322B36D893BB6A_inline (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, int32_t ___0_bits, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_bits;
		uint64_t L_1;
		L_1 = NetBitBuffer_Read_mF888869143529081FCC8CD64F99A42CBFA54C1E2(__this, L_0, NULL);
		return ((int32_t)L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetBitBuffer_get_LengthBytes_mE8D81434583DF312AAB694F05B2E75F7346F5B07_inline (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lengthBytes_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetBitBuffer_get_OffsetBytes_m106BBF81A4BA3DE8128F9C896F7D66A8E653C474_inline (NetBitBuffer_tBEB68A1CA787BE64683700CD6C1E5CCE484430D2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____offsetBits_14;
		return ((int32_t)(L_0/8));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mFBE1AF1C9CC7E68A46BF46AD3869CC9DC01CF429_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____port_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 NetPeer_get_Address_m1BC92CFFED7F8D79F65AB50FAC1F6456DD09EBD7_inline (NetPeer_tD1393AA439AC26C7023277C952393E42FCFD8EC1* __this, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = __this->____address_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunErrorAttribute_set_Code_m76B030EBE395A1918671532F8903B318331382FD_inline (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCodeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunErrorAttribute_set_ReasonText_m0B32B576135B137D05606F2E617FEC4520F7A941_inline (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CReasonTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReasonTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StunMessage_get_TransactionID_m141316199CE2735B2970FC91F22CD368584FF276_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CTransactionIDU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* StunMessage_get_Attributes_m8D965EE41BDE387E65C87E20B56E184D36DCC0E0_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* L_0 = __this->___U3CAttributesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunMessage_set_Type_mB9D836E728BB83FC4C3179659D207720E3BEAC8E_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunMessage_set_TransactionID_mE404609C43F45918BB9E753ECACB07AB15C2FFD7_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CTransactionIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTransactionIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunMessage_set_Attributes_m2016BDF3FCF0695472D5472B9366764FECA366BD_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t9DF924012DA6B70F35251F1BC44024C9EBD02FB7* L_0 = ___0_value;
		__this->___U3CAttributesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttributesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StunMessage_get_Type_mAA1D5D199BD4A92EA9E516D5DC2095EDC476C3A9_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* StunMessage_get_ErrorCode_m59A56D1CF2461C1047AFE3B5B7E01A16704C2E93_inline (StunMessage_tFC977C37B82C231C70D176807401A0A12C09C55A* __this, const RuntimeMethod* method) 
{
	{
		StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* L_0 = __this->___U3CErrorCodeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StunErrorAttribute_get_ReasonText_m2C5244FC9AFDDD8D5B22B42B20B6A30E3D20EC30_inline (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReasonTextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StunErrorAttribute_get_Code_m17B4D4B4F7C3AC69AB8F6A1D461AAC796D4E0A3D_inline (StunErrorAttribute_t0580C67E938CAE749A7199682FB589FE5D448EE2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 StunResult_get_PublicEndPoint_m1485BB2CB5473A91A61290D8B282C10D13E437A3_inline (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = __this->___U3CPublicEndPointU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 StunResult_get_PrivateEndPoint_mF7D08C0787F02F894FB5B4E8B152008B5FB4525A_inline (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = __this->___U3CPrivateEndPointU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunResult_set_PublicEndPoint_m8025B115B50B8A24891686C99057152A63787949_inline (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_value, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = ___0_value;
		__this->___U3CPublicEndPointU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StunResult_set_PrivateEndPoint_mBB2061FB22A57C9749C947393B5137A857BC4871_inline (StunResult_tCB3A8282A0E5A35FDF809A1843C553FD07660B8E* __this, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___0_value, const RuntimeMethod* method) 
{
	{
		NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 L_0 = ___0_value;
		__this->___U3CPrivateEndPointU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B Enumerator_get_Current_m12EE850D56E586DF121B059557CEAF4A7472995B_gshared_inline (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B L_0 = (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
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
