#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33;
// System.Action`2<System.Single,Siccity.GLTFUtility.ImportType>
struct Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE;
// System.Action`2<System.Single,System.Int32Enum>
struct Action_2_t372BFB22809525C08C757724E07A7C53677B6F48;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean>
struct Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Siccity.GLTFUtility.GLTFNode/ImportResult>
struct IEnumerable_1_t8D2903E0CAE84E6F504007334DC4855857ED96CA;
// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFNode/ImportResult[]>
struct ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450;
// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFSkin/ImportResult[]>
struct ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A;
// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFTexture/ImportResult[]>
struct ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F;
// Siccity.GLTFUtility.Importer/ImportTask`1<System.Object>
struct ImportTask_1_tE2A1536E93EFC15C8FF3A1223E62469FEB28F17F;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFAccessor>
struct List_1_tD37C75C45400E6571515AC742D2EDF26E88EA8AE;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFAnimation>
struct List_1_t05D0218ACF60C0A0C9E100B3A079E5F09553E96E;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFBuffer>
struct List_1_tE2CC091857065FF4B1DD35401B9B5CC433CD6631;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFBufferView>
struct List_1_tC94BF6DA0697F053D67D25C246BBE38587CC3472;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera>
struct List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFImage>
struct List_1_t17B48DC0BB4477D739DB94D0868C09A513350948;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFMaterial>
struct List_1_tEE40D8B41232047ABB03F94B224A8D3BB296B937;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFMesh>
struct List_1_tB14C203FE24F672F9AD4615ED5E1F404A53D94E7;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode>
struct List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFPrimitive>
struct List_1_t191AE830D29378C5D5BF0326FDFDE758A06FDDE5;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFScene>
struct List_1_tEF4EE52ADD5A83CB7F256AAD6A9C681DC09F17B5;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>
struct List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>
struct List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult>
struct List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85;
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes>
struct List_1_tB8A9383E649C9D0D3B70C0CC942572AC143A59B8;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Siccity.GLTFUtility.GLTFCamera[]
struct GLTFCameraU5BU5D_t2D7E9C07EB47BD60F47ADFF30240948A5A243487;
// Siccity.GLTFUtility.GLTFNode[]
struct GLTFNodeU5BU5D_t710AFB208D06AE48C092173F44F8DF896EAFAA74;
// Siccity.GLTFUtility.GLTFSkin[]
struct GLTFSkinU5BU5D_t9E6CFCCF5303978FB1EBDA5CAE7AC816D148928F;
// Siccity.GLTFUtility.GLTFTexture[]
struct GLTFTextureU5BU5D_tDB6FDBD6CE7DD36E15DF99AE93684C77DFF069A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Siccity.GLTFUtility.GLTFAccessor/ImportResult[]
struct ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740;
// Siccity.GLTFUtility.GLTFImage/ImportResult[]
struct ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936;
// Siccity.GLTFUtility.GLTFMesh/ImportResult[]
struct ImportResultU5BU5D_tF722CDC06F76022CC771BAB6EB164E764648C536;
// Siccity.GLTFUtility.GLTFNode/ExportResult[]
struct ExportResultU5BU5D_t1A7F05A7CDFFE06808382668B304200F3D3665CF;
// Siccity.GLTFUtility.GLTFNode/ImportResult[]
struct ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F;
// Siccity.GLTFUtility.GLTFSkin/ImportResult[]
struct ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376;
// Siccity.GLTFUtility.GLTFTexture/ImportResult[]
struct ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71;
// Siccity.GLTFUtility.Importer/ImportTask[]
struct ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF;
// Siccity.GLTFUtility.GLTFMesh/ImportTask/MeshData[]
struct MeshDataU5BU5D_tF3F8636F766C63C3E5C0437BB793582238CC0545;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Siccity.GLTFUtility.Converters.ColorRGBAConverter
struct ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA;
// Siccity.GLTFUtility.Converters.ColorRGBConverter
struct ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Siccity.GLTFUtility.Converters.EnumConverter
struct EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721;
// Siccity.GLTFUtility.GLTFAsset
struct GLTFAsset_t82464388B7ED19F74A472502C3C9F861B88B060E;
// Siccity.GLTFUtility.GLTFCamera
struct GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53;
// Siccity.GLTFUtility.GLTFMesh
struct GLTFMesh_t8F7130C7173DFB69DCBF253C7A867309B2E5A096;
// Siccity.GLTFUtility.GLTFNode
struct GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7;
// Siccity.GLTFUtility.GLTFObject
struct GLTFObject_tD045246E5AE1423C30A539F5767E3EED90CC5CC6;
// Siccity.GLTFUtility.GLTFPrimitive
struct GLTFPrimitive_t069231A8A45C9B80929CBB28CB4856E8D6142BD2;
// Siccity.GLTFUtility.GLTFProperty
struct GLTFProperty_t4A06B9F82E2FF4D8B9BE7A3A12D462C033E4DE61;
// Siccity.GLTFUtility.GLTFScene
struct GLTFScene_t1FDD03998A94D5A9BAC18B7AF3CBB2D3F8B0DC32;
// Siccity.GLTFUtility.GLTFSkin
struct GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14;
// Siccity.GLTFUtility.GLTFTexture
struct GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Siccity.GLTFUtility.Converters.Matrix4x4Converter
struct Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Siccity.GLTFUtility.Converters.QuaternionConverter
struct QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Siccity.GLTFUtility.Converters.TranslationConverter
struct TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385;
// System.Type
struct Type_t;
// Siccity.GLTFUtility.Converters.Vector2Converter
struct Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033;
// Siccity.GLTFUtility.Converters.Vector3Converter
struct Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Siccity.GLTFUtility.GLTFAccessor/ImportResult
struct ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B;
// Siccity.GLTFUtility.GLTFAccessor/ImportTask
struct ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009;
// Siccity.GLTFUtility.GLTFBufferView/ImportResult
struct ImportResult_t8AC262A26FF5228B3C063F6D8C6E40E99D9BAD14;
// Siccity.GLTFUtility.GLTFCamera/Orthographic
struct Orthographic_tD5FB065427A94666CDF0EE959A11B0E1EF45F34B;
// Siccity.GLTFUtility.GLTFCamera/Perspective
struct Perspective_tF94F6016D60A3F3A355F2ACA2496F78DE8A3981B;
// Siccity.GLTFUtility.GLTFImage/ImportResult
struct ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC;
// Siccity.GLTFUtility.GLTFImage/ImportTask
struct ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E;
// Siccity.GLTFUtility.GLTFMaterial/ImportTask
struct ImportTask_t4EDAFE265A50C48A4CB1C0C1DFC41B554D46E766;
// Siccity.GLTFUtility.GLTFMesh/ExportResult
struct ExportResult_t10795E3D99B718AECF1A8D7EEDCCBCE55F0B5076;
// Siccity.GLTFUtility.GLTFMesh/Extras
struct Extras_tC53D1C5A3E23693F799A21E9D91EC39BAF17062F;
// Siccity.GLTFUtility.GLTFMesh/ImportResult
struct ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444;
// Siccity.GLTFUtility.GLTFMesh/ImportTask
struct ImportTask_t85CE9214F36F1B0347E8BAB21F6E4DDCF97B039D;
// Siccity.GLTFUtility.GLTFNode/ExportResult
struct ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B;
// Siccity.GLTFUtility.GLTFNode/ImportResult
struct ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9;
// Siccity.GLTFUtility.GLTFNode/ImportTask
struct ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807;
// Siccity.GLTFUtility.GLTFNodeExtensions/<>c
struct U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2;
// Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes
struct GLTFAttributes_t66CF595AC34CC93319F6989385E7B56AADD234AE;
// Siccity.GLTFUtility.GLTFSkin/ImportResult
struct ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED;
// Siccity.GLTFUtility.GLTFSkin/ImportTask
struct ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF;
// Siccity.GLTFUtility.GLTFTexture/ImportResult
struct ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4;
// Siccity.GLTFUtility.GLTFTexture/ImportTask
struct ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F;
// Siccity.GLTFUtility.Importer/ImportTask
struct ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Siccity.GLTFUtility.GLTFAccessor/ImportResult/Sparse
struct Sparse_t92C9B0797D7948FD10712EDDBD41A1354CC4AA44;
// Siccity.GLTFUtility.GLTFNode/ImportTask/<>c
struct U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82;
// Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5
struct U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E;
// Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F;
// Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3
struct U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E;
// Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5352D01FE6068C601049E8637D4D269DA0DD1DC2;
IL2CPP_EXTERN_C String_t* _stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1;
IL2CPP_EXTERN_C String_t* _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31;
IL2CPP_EXTERN_C String_t* _stringLiteralD5B8C96BBCEB1E1F0FA13642A12DBECB0E90B670;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mB4F63A41D67EA00F2BAC29CA5744664FA9E79C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m4A216D7D4430D069D028608A8686341B6B0887A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImportResult_U3CGetTextureCachedU3Eb__3_0_m8DB954266435E371712DEA72A274173F69924D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImportTask_1__ctor_mC7E4A3A9B41C4B8E0D2DB56C03950ADF96824D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m259BAE423664BBCD86868EF2F1A283ACE46F0E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0546477037E9DB7C669BE9B980EAEA11F1A7A520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m16ED12F2FEE0A5DDC671B4654EEB7955AF82100A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m415EF2D8F0C07FC3CBF9226E7F83687854D957AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2626C587A9B30F3C755D7A68263D088634593119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTextureCachedU3Ed__3_System_Collections_IEnumerator_Reset_mF034E52F90A4C89E95F4F1E00F8E2C7A06B1AC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_mD9C6F1DF1827FBEC469361263D77864CA46B79ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetRootU3Eb__0_0_mB6164317DB954F6DFFDA38FAF8A130C1FB834A5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__4_0_mF6137FFF7F99D5399166485781F52F03D05080DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_m2284EFDB40F9A8C37F20AD02C98BAF6A9BD27300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mDD8AD408CB38895F98EC32818A85AA771F489923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740;
struct ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936;
struct ImportResultU5BU5D_tF722CDC06F76022CC771BAB6EB164E764648C536;
struct ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F;
struct ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376;
struct ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71;
struct ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera>
struct List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GLTFCameraU5BU5D_t2D7E9C07EB47BD60F47ADFF30240948A5A243487* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode>
struct List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GLTFNodeU5BU5D_t710AFB208D06AE48C092173F44F8DF896EAFAA74* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>
struct List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GLTFSkinU5BU5D_t9E6CFCCF5303978FB1EBDA5CAE7AC816D148928F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>
struct List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GLTFTextureU5BU5D_tDB6FDBD6CE7DD36E15DF99AE93684C77DFF069A9* ____items_1;
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

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult>
struct List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExportResultU5BU5D_t1A7F05A7CDFFE06808382668B304200F3D3665CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Siccity.GLTFUtility.GLTFCamera
struct GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53  : public RuntimeObject
{
	// Siccity.GLTFUtility.GLTFCamera/Orthographic Siccity.GLTFUtility.GLTFCamera::orthographic
	Orthographic_tD5FB065427A94666CDF0EE959A11B0E1EF45F34B* ___orthographic_0;
	// Siccity.GLTFUtility.GLTFCamera/Perspective Siccity.GLTFUtility.GLTFCamera::perspective
	Perspective_tF94F6016D60A3F3A355F2ACA2496F78DE8A3981B* ___perspective_1;
	// Siccity.GLTFUtility.CameraType Siccity.GLTFUtility.GLTFCamera::type
	int32_t ___type_2;
	// System.String Siccity.GLTFUtility.GLTFCamera::name
	String_t* ___name_3;
};

// Siccity.GLTFUtility.GLTFMesh
struct GLTFMesh_t8F7130C7173DFB69DCBF253C7A867309B2E5A096  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFPrimitive> Siccity.GLTFUtility.GLTFMesh::primitives
	List_1_t191AE830D29378C5D5BF0326FDFDE758A06FDDE5* ___primitives_0;
	// System.Collections.Generic.List`1<System.Single> Siccity.GLTFUtility.GLTFMesh::weights
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___weights_1;
	// System.String Siccity.GLTFUtility.GLTFMesh::name
	String_t* ___name_2;
	// Siccity.GLTFUtility.GLTFMesh/Extras Siccity.GLTFUtility.GLTFMesh::extras
	Extras_tC53D1C5A3E23693F799A21E9D91EC39BAF17062F* ___extras_3;
};

// Siccity.GLTFUtility.GLTFNodeExtensions
struct GLTFNodeExtensions_tE8FB9A56C1D1E1EEF8D77B5214B8E67C7135727A  : public RuntimeObject
{
};

// Siccity.GLTFUtility.GLTFProperty
struct GLTFProperty_t4A06B9F82E2FF4D8B9BE7A3A12D462C033E4DE61  : public RuntimeObject
{
	// System.Object Siccity.GLTFUtility.GLTFProperty::extensions
	RuntimeObject* ___extensions_0;
	// System.Object Siccity.GLTFUtility.GLTFProperty::extras
	RuntimeObject* ___extras_1;
};

// Siccity.GLTFUtility.GLTFScene
struct GLTFScene_t1FDD03998A94D5A9BAC18B7AF3CBB2D3F8B0DC32  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Int32> Siccity.GLTFUtility.GLTFScene::nodes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___nodes_0;
	// System.String Siccity.GLTFUtility.GLTFScene::name
	String_t* ___name_1;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
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

// Siccity.GLTFUtility.GLTFCamera/Orthographic
struct Orthographic_tD5FB065427A94666CDF0EE959A11B0E1EF45F34B  : public RuntimeObject
{
	// System.Single Siccity.GLTFUtility.GLTFCamera/Orthographic::xmag
	float ___xmag_0;
	// System.Single Siccity.GLTFUtility.GLTFCamera/Orthographic::ymag
	float ___ymag_1;
	// System.Single Siccity.GLTFUtility.GLTFCamera/Orthographic::zfar
	float ___zfar_2;
	// System.Single Siccity.GLTFUtility.GLTFCamera/Orthographic::znear
	float ___znear_3;
};

// Siccity.GLTFUtility.GLTFImage/ImportResult
struct ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC  : public RuntimeObject
{
	// System.Byte[] Siccity.GLTFUtility.GLTFImage/ImportResult::bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes_0;
	// System.String Siccity.GLTFUtility.GLTFImage/ImportResult::path
	String_t* ___path_1;
};

// Siccity.GLTFUtility.GLTFMesh/ImportResult
struct ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444  : public RuntimeObject
{
	// UnityEngine.Material[] Siccity.GLTFUtility.GLTFMesh/ImportResult::materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___materials_0;
	// UnityEngine.Mesh Siccity.GLTFUtility.GLTFMesh/ImportResult::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_1;
};

// Siccity.GLTFUtility.GLTFNodeExtensions/<>c
struct U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2  : public RuntimeObject
{
};

// Siccity.GLTFUtility.GLTFSkin/ImportResult
struct ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED  : public RuntimeObject
{
	// UnityEngine.Matrix4x4[] Siccity.GLTFUtility.GLTFSkin/ImportResult::inverseBindMatrices
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___inverseBindMatrices_0;
	// System.Int32[] Siccity.GLTFUtility.GLTFSkin/ImportResult::joints
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___joints_1;
};

// Siccity.GLTFUtility.GLTFTexture/ImportResult
struct ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4  : public RuntimeObject
{
	// Siccity.GLTFUtility.GLTFImage/ImportResult Siccity.GLTFUtility.GLTFTexture/ImportResult::image
	ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* ___image_0;
	// UnityEngine.Texture2D Siccity.GLTFUtility.GLTFTexture/ImportResult::cache
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cache_1;
};

// Siccity.GLTFUtility.Importer/ImportTask
struct ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE  : public RuntimeObject
{
	// System.Threading.Tasks.Task Siccity.GLTFUtility.Importer/ImportTask::task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task_0;
	// Siccity.GLTFUtility.Importer/ImportTask[] Siccity.GLTFUtility.Importer/ImportTask::waitFor
	ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* ___waitFor_1;
	// System.Boolean Siccity.GLTFUtility.Importer/ImportTask::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;
};

// Siccity.GLTFUtility.GLTFNode/ImportTask/<>c
struct U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82  : public RuntimeObject
{
};

// Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5
struct U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E  : public RuntimeObject
{
	// System.Int32 Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Action`2<System.Single,Siccity.GLTFUtility.ImportType> Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::onProgress
	Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE* ___onProgress_2;
	// Siccity.GLTFUtility.GLTFNode/ImportTask Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<>4__this
	ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* ___U3CU3E4__this_3;
	// System.Int32 Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<i>5__1
	int32_t ___U3CiU3E5__1_4;
	// System.Int32 Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<i>5__2
	int32_t ___U3CiU3E5__2_5;
	// System.Int32[] Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<children>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CchildrenU3E5__3_6;
	// System.Int32 Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<k>5__4
	int32_t ___U3CkU3E5__4_7;
	// System.Int32 Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<childIndex>5__5
	int32_t ___U3CchildIndexU3E5__5_8;
	// System.Int32 Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<i>5__6
	int32_t ___U3CiU3E5__6_9;
	// System.Int32 Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<i>5__7
	int32_t ___U3CiU3E5__7_10;
	// Siccity.GLTFUtility.GLTFMesh/ImportResult Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<meshResult>5__8
	ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* ___U3CmeshResultU3E5__8_11;
	// UnityEngine.Mesh Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<mesh>5__9
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3E5__9_12;
	// UnityEngine.Renderer Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<renderer>5__10
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___U3CrendererU3E5__10_13;
	// Siccity.GLTFUtility.GLTFSkin/ImportResult Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<skin>5__11
	ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* ___U3CskinU3E5__11_14;
	// UnityEngine.SkinnedMeshRenderer Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<mr>5__12
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___U3CmrU3E5__12_15;
	// UnityEngine.MeshRenderer Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<mr>5__13
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___U3CmrU3E5__13_16;
	// UnityEngine.MeshFilter Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<mf>5__14
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___U3CmfU3E5__14_17;
	// Siccity.GLTFUtility.GLTFCamera Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<cameraData>5__15
	GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* ___U3CcameraDataU3E5__15_18;
	// UnityEngine.Camera Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::<camera>5__16
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CcameraU3E5__16_19;
};

// Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin> Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::skins
	List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* ___skins_0;
	// Siccity.GLTFUtility.GLTFSkin/ImportTask Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::<>4__this
	ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* ___U3CU3E4__this_1;
	// Siccity.GLTFUtility.GLTFAccessor/ImportTask Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::accessorTask
	ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* ___accessorTask_2;
};

// Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3
struct U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E  : public RuntimeObject
{
	// System.Int32 Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Boolean Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::linear
	bool ___linear_2;
	// System.Action`1<UnityEngine.Texture2D> Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::onFinish
	Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* ___onFinish_3;
	// System.Action`1<System.Single> Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::onProgress
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onProgress_4;
	// Siccity.GLTFUtility.GLTFTexture/ImportResult Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::<>4__this
	ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* ___U3CU3E4__this_5;
	// System.Collections.IEnumerator Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::<en>5__1
	RuntimeObject* ___U3CenU3E5__1_6;
};

// Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture> Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::textures
	List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* ___textures_0;
	// Siccity.GLTFUtility.GLTFTexture/ImportTask Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::<>4__this
	ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* ___U3CU3E4__this_1;
	// Siccity.GLTFUtility.GLTFImage/ImportTask Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::imageTask
	ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* ___imageTask_2;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFAccessor/ImportResult[]>
struct ImportTask_1_t77F40D823FFBF94BCF639D754F174066A208EF58  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* ___Result_3;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFImage/ImportResult[]>
struct ImportTask_1_t36F54BCE5C6C762D504AF8682AD87D50E6B082F5  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* ___Result_3;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFMesh/ImportResult[]>
struct ImportTask_1_tE8A8B361D08FA128F607CF613A1E0CF7532A0509  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_tF722CDC06F76022CC771BAB6EB164E764648C536* ___Result_3;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFNode/ImportResult[]>
struct ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* ___Result_3;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFSkin/ImportResult[]>
struct ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376* ___Result_3;
};

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFTexture/ImportResult[]>
struct ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F  : public ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE
{
	// TReturn Siccity.GLTFUtility.Importer/ImportTask`1::Result
	ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71* ___Result_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// Siccity.GLTFUtility.Converters.ColorRGBAConverter
struct ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Siccity.GLTFUtility.Converters.ColorRGBConverter
struct ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Siccity.GLTFUtility.Converters.EnumConverter
struct EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
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

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// Siccity.GLTFUtility.Converters.Matrix4x4Converter
struct Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
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

// Siccity.GLTFUtility.Converters.QuaternionConverter
struct QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// Siccity.GLTFUtility.Converters.TranslationConverter
struct TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// Siccity.GLTFUtility.Converters.Vector2Converter
struct Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
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

// Siccity.GLTFUtility.Converters.Vector3Converter
struct Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
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

// Siccity.GLTFUtility.GLTFMesh/ExportResult
struct ExportResult_t10795E3D99B718AECF1A8D7EEDCCBCE55F0B5076  : public GLTFMesh_t8F7130C7173DFB69DCBF253C7A867309B2E5A096
{
	// UnityEngine.Mesh Siccity.GLTFUtility.GLTFMesh/ExportResult::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_4;
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

// Siccity.GLTFUtility.GLTFNode
struct GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7  : public RuntimeObject
{
	// System.String Siccity.GLTFUtility.GLTFNode::name
	String_t* ___name_0;
	// System.Int32[] Siccity.GLTFUtility.GLTFNode::children
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___children_1;
	// UnityEngine.Vector3 Siccity.GLTFUtility.GLTFNode::translation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation_2;
	// UnityEngine.Quaternion Siccity.GLTFUtility.GLTFNode::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	// UnityEngine.Vector3 Siccity.GLTFUtility.GLTFNode::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode::mesh
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mesh_5;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode::skin
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___skin_6;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode::camera
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___camera_7;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode::weights
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___weights_8;
};

// Siccity.GLTFUtility.GLTFObject
struct GLTFObject_tD045246E5AE1423C30A539F5767E3EED90CC5CC6  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFObject::scene
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___scene_0;
	// Siccity.GLTFUtility.GLTFAsset Siccity.GLTFUtility.GLTFObject::asset
	GLTFAsset_t82464388B7ED19F74A472502C3C9F861B88B060E* ___asset_1;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFScene> Siccity.GLTFUtility.GLTFObject::scenes
	List_1_tEF4EE52ADD5A83CB7F256AAD6A9C681DC09F17B5* ___scenes_2;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode> Siccity.GLTFUtility.GLTFObject::nodes
	List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* ___nodes_3;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFMesh> Siccity.GLTFUtility.GLTFObject::meshes
	List_1_tB14C203FE24F672F9AD4615ED5E1F404A53D94E7* ___meshes_4;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFAnimation> Siccity.GLTFUtility.GLTFObject::animations
	List_1_t05D0218ACF60C0A0C9E100B3A079E5F09553E96E* ___animations_5;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFBuffer> Siccity.GLTFUtility.GLTFObject::buffers
	List_1_tE2CC091857065FF4B1DD35401B9B5CC433CD6631* ___buffers_6;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFBufferView> Siccity.GLTFUtility.GLTFObject::bufferViews
	List_1_tC94BF6DA0697F053D67D25C246BBE38587CC3472* ___bufferViews_7;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFAccessor> Siccity.GLTFUtility.GLTFObject::accessors
	List_1_tD37C75C45400E6571515AC742D2EDF26E88EA8AE* ___accessors_8;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin> Siccity.GLTFUtility.GLTFObject::skins
	List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* ___skins_9;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture> Siccity.GLTFUtility.GLTFObject::textures
	List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* ___textures_10;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFImage> Siccity.GLTFUtility.GLTFObject::images
	List_1_t17B48DC0BB4477D739DB94D0868C09A513350948* ___images_11;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFMaterial> Siccity.GLTFUtility.GLTFObject::materials
	List_1_tEE40D8B41232047ABB03F94B224A8D3BB296B937* ___materials_12;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera> Siccity.GLTFUtility.GLTFObject::cameras
	List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731* ___cameras_13;
	// System.Collections.Generic.List`1<System.String> Siccity.GLTFUtility.GLTFObject::extensionsUsed
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___extensionsUsed_14;
	// System.Collections.Generic.List`1<System.String> Siccity.GLTFUtility.GLTFObject::extensionsRequired
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___extensionsRequired_15;
};

// Siccity.GLTFUtility.GLTFPrimitive
struct GLTFPrimitive_t069231A8A45C9B80929CBB28CB4856E8D6142BD2  : public RuntimeObject
{
	// Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes Siccity.GLTFUtility.GLTFPrimitive::attributes
	GLTFAttributes_t66CF595AC34CC93319F6989385E7B56AADD234AE* ___attributes_0;
	// Siccity.GLTFUtility.RenderingMode Siccity.GLTFUtility.GLTFPrimitive::mode
	int32_t ___mode_1;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive::indices
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___indices_2;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive::material
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___material_3;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes> Siccity.GLTFUtility.GLTFPrimitive::targets
	List_1_tB8A9383E649C9D0D3B70C0CC942572AC143A59B8* ___targets_4;
};

// Siccity.GLTFUtility.GLTFSkin
struct GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFSkin::inverseBindMatrices
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___inverseBindMatrices_0;
	// System.Int32[] Siccity.GLTFUtility.GLTFSkin::joints
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___joints_1;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFSkin::skeleton
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___skeleton_2;
	// System.String Siccity.GLTFUtility.GLTFSkin::name
	String_t* ___name_3;
};

// Siccity.GLTFUtility.GLTFTexture
struct GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFTexture::sampler
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___sampler_0;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFTexture::source
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___source_1;
	// System.String Siccity.GLTFUtility.GLTFTexture::name
	String_t* ___name_2;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Siccity.GLTFUtility.GLTFAccessor/ImportResult
struct ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B  : public RuntimeObject
{
	// Siccity.GLTFUtility.GLTFBufferView/ImportResult Siccity.GLTFUtility.GLTFAccessor/ImportResult::bufferView
	ImportResult_t8AC262A26FF5228B3C063F6D8C6E40E99D9BAD14* ___bufferView_0;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFAccessor/ImportResult::byteStride
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___byteStride_1;
	// System.Int32 Siccity.GLTFUtility.GLTFAccessor/ImportResult::count
	int32_t ___count_2;
	// Siccity.GLTFUtility.GLType Siccity.GLTFUtility.GLTFAccessor/ImportResult::componentType
	int32_t ___componentType_3;
	// Siccity.GLTFUtility.AccessorType Siccity.GLTFUtility.GLTFAccessor/ImportResult::type
	int32_t ___type_4;
	// System.Int32 Siccity.GLTFUtility.GLTFAccessor/ImportResult::byteOffset
	int32_t ___byteOffset_5;
	// Siccity.GLTFUtility.GLTFAccessor/ImportResult/Sparse Siccity.GLTFUtility.GLTFAccessor/ImportResult::sparse
	Sparse_t92C9B0797D7948FD10712EDDBD41A1354CC4AA44* ___sparse_6;
};

// Siccity.GLTFUtility.GLTFAccessor/ImportTask
struct ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009  : public ImportTask_1_t77F40D823FFBF94BCF639D754F174066A208EF58
{
};

// Siccity.GLTFUtility.GLTFCamera/Perspective
struct Perspective_tF94F6016D60A3F3A355F2ACA2496F78DE8A3981B  : public RuntimeObject
{
	// System.Nullable`1<System.Single> Siccity.GLTFUtility.GLTFCamera/Perspective::aspectRatio
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___aspectRatio_0;
	// System.Single Siccity.GLTFUtility.GLTFCamera/Perspective::yfov
	float ___yfov_1;
	// System.Nullable`1<System.Single> Siccity.GLTFUtility.GLTFCamera/Perspective::zfar
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___zfar_2;
	// System.Single Siccity.GLTFUtility.GLTFCamera/Perspective::znear
	float ___znear_3;
};

// Siccity.GLTFUtility.GLTFImage/ImportTask
struct ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E  : public ImportTask_1_t36F54BCE5C6C762D504AF8682AD87D50E6B082F5
{
};

// Siccity.GLTFUtility.GLTFMesh/ImportTask
struct ImportTask_t85CE9214F36F1B0347E8BAB21F6E4DDCF97B039D  : public ImportTask_1_tE8A8B361D08FA128F607CF613A1E0CF7532A0509
{
	// Siccity.GLTFUtility.GLTFMesh/ImportTask/MeshData[] Siccity.GLTFUtility.GLTFMesh/ImportTask::meshData
	MeshDataU5BU5D_tF3F8636F766C63C3E5C0437BB793582238CC0545* ___meshData_4;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFMesh> Siccity.GLTFUtility.GLTFMesh/ImportTask::meshes
	List_1_tB14C203FE24F672F9AD4615ED5E1F404A53D94E7* ___meshes_5;
	// Siccity.GLTFUtility.GLTFMaterial/ImportTask Siccity.GLTFUtility.GLTFMesh/ImportTask::materialTask
	ImportTask_t4EDAFE265A50C48A4CB1C0C1DFC41B554D46E766* ___materialTask_6;
};

// Siccity.GLTFUtility.GLTFNode/ImportResult
struct ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFNode/ImportResult::parent
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___parent_0;
	// System.Int32[] Siccity.GLTFUtility.GLTFNode/ImportResult::children
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___children_1;
	// UnityEngine.Transform Siccity.GLTFUtility.GLTFNode/ImportResult::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_2;
};

// Siccity.GLTFUtility.GLTFNode/ImportTask
struct ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807  : public ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450
{
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode> Siccity.GLTFUtility.GLTFNode/ImportTask::nodes
	List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* ___nodes_4;
	// Siccity.GLTFUtility.GLTFMesh/ImportTask Siccity.GLTFUtility.GLTFNode/ImportTask::meshTask
	ImportTask_t85CE9214F36F1B0347E8BAB21F6E4DDCF97B039D* ___meshTask_5;
	// Siccity.GLTFUtility.GLTFSkin/ImportTask Siccity.GLTFUtility.GLTFNode/ImportTask::skinTask
	ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* ___skinTask_6;
	// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera> Siccity.GLTFUtility.GLTFNode/ImportTask::cameras
	List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731* ___cameras_7;
};

// Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes
struct GLTFAttributes_t66CF595AC34CC93319F6989385E7B56AADD234AE  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::POSITION
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___POSITION_0;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::NORMAL
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___NORMAL_1;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TANGENT
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TANGENT_2;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::COLOR_0
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___COLOR_0_3;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_0
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_0_4;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_1
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_1_5;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_2
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_2_6;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_3
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_3_7;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_4
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_4_8;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_5
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_5_9;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_6
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_6_10;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::TEXCOORD_7
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___TEXCOORD_7_11;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::JOINTS_0
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___JOINTS_0_12;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::JOINTS_1
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___JOINTS_1_13;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::JOINTS_2
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___JOINTS_2_14;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::JOINTS_3
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___JOINTS_3_15;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::WEIGHTS_0
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___WEIGHTS_0_16;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::WEIGHTS_1
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___WEIGHTS_1_17;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::WEIGHTS_2
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___WEIGHTS_2_18;
	// System.Nullable`1<System.Int32> Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::WEIGHTS_3
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___WEIGHTS_3_19;
};

// Siccity.GLTFUtility.GLTFSkin/ImportTask
struct ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF  : public ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A
{
};

// Siccity.GLTFUtility.GLTFTexture/ImportTask
struct ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F  : public ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F
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

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Siccity.GLTFUtility.GLTFNode/ExportResult
struct ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B  : public GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7
{
	// UnityEngine.MeshRenderer Siccity.GLTFUtility.GLTFNode/ExportResult::renderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___renderer_9;
	// UnityEngine.MeshFilter Siccity.GLTFUtility.GLTFNode/ExportResult::filter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___filter_10;
	// UnityEngine.SkinnedMeshRenderer Siccity.GLTFUtility.GLTFNode/ExportResult::skinnedRenderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___skinnedRenderer_11;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33  : public MulticastDelegate_t
{
};

// System.Action`2<System.Single,Siccity.GLTFUtility.ImportType>
struct Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE  : public MulticastDelegate_t
{
};

// System.Action`2<System.Single,System.Int32Enum>
struct Action_2_t372BFB22809525C08C757724E07A7C53677B6F48  : public MulticastDelegate_t
{
};

// System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean>
struct Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera>
struct List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GLTFCameraU5BU5D_t2D7E9C07EB47BD60F47ADFF30240948A5A243487* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera>

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode>
struct List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GLTFNodeU5BU5D_t710AFB208D06AE48C092173F44F8DF896EAFAA74* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode>

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>
struct List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GLTFSkinU5BU5D_t9E6CFCCF5303978FB1EBDA5CAE7AC816D148928F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>
struct List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GLTFTextureU5BU5D_tDB6FDBD6CE7DD36E15DF99AE93684C77DFF069A9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult>
struct List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExportResultU5BU5D_t1A7F05A7CDFFE06808382668B304200F3D3665CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult>

// Siccity.GLTFUtility.GLTFCamera

// Siccity.GLTFUtility.GLTFCamera

// Siccity.GLTFUtility.GLTFMesh

// Siccity.GLTFUtility.GLTFMesh

// Siccity.GLTFUtility.GLTFNodeExtensions

// Siccity.GLTFUtility.GLTFNodeExtensions

// Siccity.GLTFUtility.GLTFProperty

// Siccity.GLTFUtility.GLTFProperty

// Siccity.GLTFUtility.GLTFScene

// Siccity.GLTFUtility.GLTFScene

// Newtonsoft.Json.JsonConverter

// Newtonsoft.Json.JsonConverter

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// Siccity.GLTFUtility.GLTFCamera/Orthographic

// Siccity.GLTFUtility.GLTFCamera/Orthographic

// Siccity.GLTFUtility.GLTFImage/ImportResult

// Siccity.GLTFUtility.GLTFImage/ImportResult

// Siccity.GLTFUtility.GLTFMesh/ImportResult

// Siccity.GLTFUtility.GLTFMesh/ImportResult

// Siccity.GLTFUtility.GLTFNodeExtensions/<>c
struct U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields
{
	// Siccity.GLTFUtility.GLTFNodeExtensions/<>c Siccity.GLTFUtility.GLTFNodeExtensions/<>c::<>9
	U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* ___U3CU3E9_0;
	// System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean> Siccity.GLTFUtility.GLTFNodeExtensions/<>c::<>9__0_0
	Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* ___U3CU3E9__0_0_1;
};

// Siccity.GLTFUtility.GLTFNodeExtensions/<>c

// Siccity.GLTFUtility.GLTFSkin/ImportResult

// Siccity.GLTFUtility.GLTFSkin/ImportResult

// Siccity.GLTFUtility.GLTFTexture/ImportResult

// Siccity.GLTFUtility.GLTFTexture/ImportResult

// Siccity.GLTFUtility.Importer/ImportTask

// Siccity.GLTFUtility.Importer/ImportTask

// Siccity.GLTFUtility.GLTFNode/ImportTask/<>c
struct U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_StaticFields
{
	// Siccity.GLTFUtility.GLTFNode/ImportTask/<>c Siccity.GLTFUtility.GLTFNode/ImportTask/<>c::<>9
	U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82* ___U3CU3E9_0;
	// System.Action Siccity.GLTFUtility.GLTFNode/ImportTask/<>c::<>9__4_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__4_0_1;
};

// Siccity.GLTFUtility.GLTFNode/ImportTask/<>c

// Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5

// Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5

// Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0

// Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0

// Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3

// Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3

// Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0

// Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFAccessor/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFAccessor/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFImage/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFImage/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFMesh/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFMesh/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFNode/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFNode/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFSkin/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFSkin/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFTexture/ImportResult[]>

// Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFTexture/ImportResult[]>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>

// System.Nullable`1<Newtonsoft.Json.Formatting>

// System.Nullable`1<Newtonsoft.Json.Formatting>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>

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

// Siccity.GLTFUtility.Converters.ColorRGBAConverter

// Siccity.GLTFUtility.Converters.ColorRGBAConverter

// Siccity.GLTFUtility.Converters.ColorRGBConverter

// Siccity.GLTFUtility.Converters.ColorRGBConverter

// Siccity.GLTFUtility.Converters.EnumConverter

// Siccity.GLTFUtility.Converters.EnumConverter

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_StaticFields
{
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};

// Newtonsoft.Json.JsonPosition

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// Siccity.GLTFUtility.Converters.Matrix4x4Converter

// Siccity.GLTFUtility.Converters.Matrix4x4Converter

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// Siccity.GLTFUtility.Converters.QuaternionConverter

// Siccity.GLTFUtility.Converters.QuaternionConverter

// System.Single

// System.Single

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// Siccity.GLTFUtility.Converters.TranslationConverter

// Siccity.GLTFUtility.Converters.TranslationConverter

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

// Siccity.GLTFUtility.Converters.Vector2Converter

// Siccity.GLTFUtility.Converters.Vector2Converter

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

// Siccity.GLTFUtility.Converters.Vector3Converter

// Siccity.GLTFUtility.Converters.Vector3Converter

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

// Siccity.GLTFUtility.GLTFMesh/ExportResult

// Siccity.GLTFUtility.GLTFMesh/ExportResult

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Siccity.GLTFUtility.GLTFNode

// Siccity.GLTFUtility.GLTFNode

// Siccity.GLTFUtility.GLTFObject

// Siccity.GLTFUtility.GLTFObject

// Siccity.GLTFUtility.GLTFPrimitive

// Siccity.GLTFUtility.GLTFPrimitive

// Siccity.GLTFUtility.GLTFSkin

// Siccity.GLTFUtility.GLTFSkin

// Siccity.GLTFUtility.GLTFTexture

// Siccity.GLTFUtility.GLTFTexture

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonSerializer

// Newtonsoft.Json.JsonSerializer

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTemplate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTemplate_1;
};

// Newtonsoft.Json.JsonWriter

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Siccity.GLTFUtility.GLTFAccessor/ImportResult

// Siccity.GLTFUtility.GLTFAccessor/ImportResult

// Siccity.GLTFUtility.GLTFAccessor/ImportTask

// Siccity.GLTFUtility.GLTFAccessor/ImportTask

// Siccity.GLTFUtility.GLTFCamera/Perspective

// Siccity.GLTFUtility.GLTFCamera/Perspective

// Siccity.GLTFUtility.GLTFImage/ImportTask

// Siccity.GLTFUtility.GLTFImage/ImportTask

// Siccity.GLTFUtility.GLTFMesh/ImportTask

// Siccity.GLTFUtility.GLTFMesh/ImportTask

// Siccity.GLTFUtility.GLTFNode/ImportResult

// Siccity.GLTFUtility.GLTFNode/ImportResult

// Siccity.GLTFUtility.GLTFNode/ImportTask

// Siccity.GLTFUtility.GLTFNode/ImportTask

// Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes

// Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes

// Siccity.GLTFUtility.GLTFSkin/ImportTask

// Siccity.GLTFUtility.GLTFSkin/ImportTask

// Siccity.GLTFUtility.GLTFTexture/ImportTask

// Siccity.GLTFUtility.GLTFTexture/ImportTask

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

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

// Siccity.GLTFUtility.GLTFNode/ExportResult

// Siccity.GLTFUtility.GLTFNode/ExportResult

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.Single>

// System.Action`1<System.Single>

// System.Action`1<UnityEngine.Texture2D>

// System.Action`1<UnityEngine.Texture2D>

// System.Action`2<System.Single,Siccity.GLTFUtility.ImportType>

// System.Action`2<System.Single,Siccity.GLTFUtility.ImportType>

// System.Action`2<System.Single,System.Int32Enum>

// System.Action`2<System.Single,System.Int32Enum>

// System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean>

// System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean>

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

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

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SkinnedMeshRenderer
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Siccity.GLTFUtility.Importer/ImportTask[]
struct ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* m_Items[1];

	inline ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFNode/ImportResult[]
struct ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* m_Items[1];

	inline ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFMesh/ImportResult[]
struct ImportResultU5BU5D_tF722CDC06F76022CC771BAB6EB164E764648C536  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* m_Items[1];

	inline ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFSkin/ImportResult[]
struct ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* m_Items[1];

	inline ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFAccessor/ImportResult[]
struct ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* m_Items[1];

	inline ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFImage/ImportResult[]
struct ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* m_Items[1];

	inline ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Siccity.GLTFUtility.GLTFTexture/ImportResult[]
struct ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71  : public RuntimeArray
{
	ALIGN_FIELD (8) ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* m_Items[1];

	inline ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.Importer/ImportTask`1<System.Object>::.ctor(Siccity.GLTFUtility.Importer/ImportTask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportTask_1__ctor_m5AE60557C9C692A1C9E8D0F38B2A34F0130E6128_gshared (ImportTask_1_tE2A1536E93EFC15C8FF3A1223E62469FEB28F17F* __this, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* ___0_waitFor, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,System.Int32Enum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m700BE39E13C88ACDB10E5F90F9B70C8FB80083E4_gshared_inline (Action_2_t372BFB22809525C08C757724E07A7C53677B6F48* __this, float ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Object>(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Single>(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE_gshared (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, const RuntimeMethod* method) ;

// System.Void Siccity.GLTFUtility.GLTFMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFMesh__ctor_mF542126EDF249B4BF1FA1157C655B384F7C865B8 (GLTFMesh_t8F7130C7173DFB69DCBF253C7A867309B2E5A096* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.Extensions::UnpackTRS(UnityEngine.Matrix4x4,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_UnpackTRS_m89821FBFF751F39D74D199558DED2A4415861C63 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_trs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___2_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_scale, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult>::.ctor()
inline void List_1__ctor_m0546477037E9DB7C669BE9B980EAEA11F1A7A520 (List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Siccity.GLTFUtility.GLTFNode::CreateNodeListRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFNode_CreateNodeListRecursive_mE5B7848795E091C6134F052D7A9E195424211F61 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* ___1_nodes, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFNode/ExportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExportResult__ctor_mA7DF1658976A0629E75B3A73DDC0B372E0169423 (ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult>::Add(T)
inline void List_1_Add_m259BAE423664BBCD86868EF2F1A283ACE46F0E70_inline (List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* __this, ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85*, ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult>::get_Count()
inline int32_t List_1_get_Count_m16ED12F2FEE0A5DDC671B4654EEB7955AF82100A_inline (List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFNode/ImportResult[]>::.ctor(Siccity.GLTFUtility.Importer/ImportTask[])
inline void ImportTask_1__ctor_mC7E4A3A9B41C4B8E0D2DB56C03950ADF96824D36 (ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450* __this, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* ___0_waitFor, const RuntimeMethod* method)
{
	((  void (*) (ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*, const RuntimeMethod*))ImportTask_1__ctor_m5AE60557C9C692A1C9E8D0F38B2A34F0130E6128_gshared)(__this, ___0_waitFor, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::.ctor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCoroutineU3Ed__5__ctor_mA79904C414D8872E10F8D11D5FAA3D725A290362 (U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFNode/ImportTask/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m307EA365E2F70C1994F1139447082263F4F0BBD7 (U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Single,Siccity.GLTFUtility.ImportType>::Invoke(T1,T2)
inline void Action_2_Invoke_m5EBD9AC3B787CCF4E593DE49AD05E61D1151A620_inline (Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE* __this, float ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE*, float, int32_t, const RuntimeMethod*))Action_2_Invoke_m700BE39E13C88ACDB10E5F90F9B70C8FB80083E4_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void Siccity.GLTFUtility.Importer/ImportTask::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImportTask_set_IsCompleted_mD43834A40156C70ED3E4D35718CD32E2DE0A1595_inline (ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode>::get_Count()
inline int32_t List_1_get_Count_m415EF2D8F0C07FC3CBF9226E7F83687854D957AF_inline (List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Siccity.GLTFUtility.GLTFNode/ImportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_mDD68E4E6BF357B78511BF4AF3306CC1FCDD23AF1 (ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode>::get_Item(System.Int32)
inline GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378 (List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* (*) (List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFNode::ApplyTRS(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFNode_ApplyTRS_mDA2C657088E8CC491EE0D136E73EF0F71A12F178 (GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// UnityEngine.SkinnedMeshRenderer Siccity.GLTFUtility.GLTFSkin/ImportResult::SetupSkinnedRenderer(UnityEngine.GameObject,UnityEngine.Mesh,Siccity.GLTFUtility.GLTFNode/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ImportResult_SetupSkinnedRenderer_mB1B0C5C09DD34D94FCC2838AB0C41A2020A2DFAD (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___1_mesh, ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* ___2_nodes, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_blendShapeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera>::get_Item(System.Int32)
inline GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* List_1_get_Item_m2626C587A9B30F3C755D7A68263D088634593119 (List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* (*) (List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFNode__ctor_m96D7DBCDDE679F5C900497099EEDEF682DC06034 (GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Siccity.GLTFUtility.GLTFNode/ImportResult,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m828445C78865E1ACC9C636FD283DF6459459254D (Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Siccity.GLTFUtility.GLTFNode/ImportResult>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m4A216D7D4430D069D028608A8686341B6B0887A5 (RuntimeObject* ___0_source, Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Siccity.GLTFUtility.GLTFNode/ImportResult>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mB4F63A41D67EA00F2BAC29CA5744664FA9E79C48 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFNodeExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE965964844A0FF7152FFFA94340A1F558BF8960 (U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* __this, const RuntimeMethod* method) ;
// System.Boolean Siccity.GLTFUtility.GLTFNode/ImportResult::get_IsRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImportResult_get_IsRoot_m7F595F057311EDA04643EEB6356B5D1414CC4D41 (ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_m779A3381906CEC65988B755631C379A467CAA2DC (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4[] Siccity.GLTFUtility.GLTFAccessor/ImportResult::ReadMatrix4x4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ImportResult_ReadMatrix4x4_m34CDE85953F6971EFC99A1628F56E4F65103B014 (ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_column, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_rootBone(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m98078E5372FEE4823046B05C7B997DF7BC98EF7F (U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFSkin/ImportResult[]>::.ctor(Siccity.GLTFUtility.Importer/ImportTask[])
inline void ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8 (ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A* __this, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* ___0_waitFor, const RuntimeMethod* method)
{
	((  void (*) (ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*, const RuntimeMethod*))ImportTask_1__ctor_m5AE60557C9C692A1C9E8D0F38B2A34F0130E6128_gshared)(__this, ___0_waitFor, method);
}
// System.Int32 System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>::get_Count()
inline int32_t List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_inline (List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>::get_Item(System.Int32)
inline GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF (List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* (*) (List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// Siccity.GLTFUtility.GLTFSkin/ImportResult Siccity.GLTFUtility.GLTFSkin::Import(Siccity.GLTFUtility.GLTFAccessor/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* GLTFSkin_Import_m80EAC69C261DE791F117A4585C3C8BD9FE4078DE (GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* __this, ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* ___0_accessors, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult::.ctor(Siccity.GLTFUtility.GLTFImage/ImportResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_mE1EE7F4036EA5EBB526264B34BF3EF3526643D57 (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* __this, ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* ___0_image, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureCachedU3Ed__3__ctor_m107AACA55A06DAC9FCAFD04141B7FF3FF90C1C6E (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Texture2D>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m0D74126D5BBFFF417FDA1881B8AEBD833A833F76 (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.IEnumerator Siccity.GLTFUtility.GLTFImage/ImportResult::CreateTextureAsync(System.Boolean,System.Action`1<UnityEngine.Texture2D>,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImportResult_CreateTextureAsync_m2258AD5309211F20BF436D291FB5E73D48D8D23A (ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* __this, bool ___0_linear, Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* ___1_onFinish, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___2_onProgress, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(T)
inline void Action_1_Invoke_mCBAA13E9863B2958F53D13FBB8B1B51CA0011B53_inline (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF3621EA969A5ACCAD71777DFFFC7B6D459F42476 (U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* __this, const RuntimeMethod* method) ;
// System.Void Siccity.GLTFUtility.Importer/ImportTask`1<Siccity.GLTFUtility.GLTFTexture/ImportResult[]>::.ctor(Siccity.GLTFUtility.Importer/ImportTask[])
inline void ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513 (ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F* __this, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* ___0_waitFor, const RuntimeMethod* method)
{
	((  void (*) (ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*, ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*, const RuntimeMethod*))ImportTask_1__ctor_m5AE60557C9C692A1C9E8D0F38B2A34F0130E6128_gshared)(__this, ___0_waitFor, method);
}
// System.Int32 System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>::get_Count()
inline int32_t List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_inline (List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>::get_Item(System.Int32)
inline GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F (List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* (*) (List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// Siccity.GLTFUtility.GLTFTexture/ImportResult Siccity.GLTFUtility.GLTFTexture::Import(Siccity.GLTFUtility.GLTFImage/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* GLTFTexture_Import_mA7CE2532D2EDCD6B22D0E7F42095618B1BE1165A (GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* __this, ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* ___0_images, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Single[]>(Newtonsoft.Json.JsonReader)
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27 (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared)(__this, ___0_reader, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.String>(Newtonsoft.Json.JsonReader)
inline String_t* JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, const RuntimeMethod* method)
{
	return ((  String_t* (*) (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*, const RuntimeMethod*))JsonSerializer_Deserialize_TisRuntimeObject_m887812E4D7F06E92950AB4CA73CA8F31EDB09BFC_gshared)(__this, ___0_reader, method);
}
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28 (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_column0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_column1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_column2, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___3_column3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Single>(Newtonsoft.Json.JsonReader)
inline float JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, const RuntimeMethod* method)
{
	return ((  float (*) (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59*, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765*, const RuntimeMethod*))JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE_gshared)(__this, ___0_reader, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Siccity.GLTFUtility.GLTFMesh/ExportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExportResult__ctor_mFD2D79C5492B77EB2972B677562AB7E61BB9E217 (ExportResult_t10795E3D99B718AECF1A8D7EEDCCBCE55F0B5076* __this, const RuntimeMethod* method) 
{
	{
		GLTFMesh__ctor_mF542126EDF249B4BF1FA1157C655B384F7C865B8(__this, NULL);
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
// System.Void Siccity.GLTFUtility.GLTFNode::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFNode_set_matrix_m01C2A2E6B286CD9A5D9EE05C9036BC5E1D88FFD5 (GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	{
		// [JsonProperty, JsonConverter(typeof(Matrix4x4Converter))] private Matrix4x4 matrix { set { value.UnpackTRS(ref translation, ref rotation, ref scale); } }
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___translation_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = (&__this->___rotation_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___scale_4);
		Extensions_UnpackTRS_m89821FBFF751F39D74D199558DED2A4415861C63(L_0, L_1, L_2, L_3, NULL);
		// [JsonProperty, JsonConverter(typeof(Matrix4x4Converter))] private Matrix4x4 matrix { set { value.UnpackTRS(ref translation, ref rotation, ref scale); } }
		return;
	}
}
// System.Boolean Siccity.GLTFUtility.GLTFNode::ShouldSerializetranslation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GLTFNode_ShouldSerializetranslation_m316F8F5538D8885C1EDFD11C535DC92C8E960930 (GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool ShouldSerializetranslation() { return translation != Vector3.zero; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___translation_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// public bool ShouldSerializetranslation() { return translation != Vector3.zero; }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Siccity.GLTFUtility.GLTFNode::ShouldSerializerotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GLTFNode_ShouldSerializerotation_mC76468A1B74BD6856A3BCBE8605F2E533E3FBEC4 (GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool ShouldSerializerotation() { return rotation != Quaternion.identity; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___rotation_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_2;
		L_2 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// public bool ShouldSerializerotation() { return rotation != Quaternion.identity; }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Siccity.GLTFUtility.GLTFNode::ShouldSerializescale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GLTFNode_ShouldSerializescale_m8D1FF446BAAB02B23776B081AEEC3DF8813150E1 (GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool ShouldSerializescale() { return scale != Vector3.one; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___scale_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// public bool ShouldSerializescale() { return scale != Vector3.one; }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNode::ApplyTRS(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFNode_ApplyTRS_mDA2C657088E8CC491EE0D136E73EF0F71A12F178 (GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = translation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___translation_2;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// transform.localRotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_transform;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___rotation_3;
		NullCheck(L_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// transform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___scale_4;
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult> Siccity.GLTFUtility.GLTFNode::Export(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* GLTFNode_Export_m76D78A2FD44A031E884F84B73886C1D7208EA593 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_root, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0546477037E9DB7C669BE9B980EAEA11F1A7A520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* V_0 = NULL;
	List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* V_1 = NULL;
	{
		// List<ExportResult> nodes = new List<ExportResult>();
		List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* L_0 = (List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85*)il2cpp_codegen_object_new(List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0546477037E9DB7C669BE9B980EAEA11F1A7A520(L_0, List_1__ctor_m0546477037E9DB7C669BE9B980EAEA11F1A7A520_RuntimeMethod_var);
		V_0 = L_0;
		// CreateNodeListRecursive(root, nodes);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___0_root;
		List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* L_2 = V_0;
		GLTFNode_CreateNodeListRecursive_mE5B7848795E091C6134F052D7A9E195424211F61(L_1, L_2, NULL);
		// return nodes;
		List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* L_3 = V_0;
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* L_4 = V_1;
		return L_4;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNode::CreateNodeListRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode/ExportResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFNode_CreateNodeListRecursive_mE5B7848795E091C6134F052D7A9E195424211F61 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* ___1_nodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m259BAE423664BBCD86868EF2F1A283ACE46F0E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m16ED12F2FEE0A5DDC671B4654EEB7955AF82100A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	bool V_5 = false;
	{
		// ExportResult node = new ExportResult();
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_0 = (ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B*)il2cpp_codegen_object_new(ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExportResult__ctor_mA7DF1658976A0629E75B3A73DDC0B372E0169423(L_0, NULL);
		V_0 = L_0;
		// node.name = transform.name;
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_transform;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		NullCheck(L_1);
		((GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7*)L_1)->___name_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7*)L_1)->___name_0), (void*)L_3);
		// node.translation = transform.localPosition;
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_transform;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		NullCheck(L_4);
		((GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7*)L_4)->___translation_2 = L_6;
		// node.rotation = transform.localRotation;
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___0_transform;
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_8, NULL);
		NullCheck(L_7);
		((GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7*)L_7)->___rotation_3 = L_9;
		// node.scale = transform.localScale;
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___0_transform;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_11, NULL);
		NullCheck(L_10);
		((GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7*)L_10)->___scale_4 = L_12;
		// node.renderer = transform.gameObject.GetComponent<MeshRenderer>();
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_13 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___0_transform;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_16;
		L_16 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_15, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->___renderer_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___renderer_9), (void*)L_16);
		// node.filter = transform.gameObject.GetComponent<MeshFilter>();
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_17 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ___0_transform;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_20;
		L_20 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_19, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->___filter_10 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___filter_10), (void*)L_20);
		// node.skinnedRenderer = transform.gameObject.GetComponent<SkinnedMeshRenderer>();
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_21 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = ___0_transform;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_24;
		L_24 = GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC(L_23, GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC_RuntimeMethod_var);
		NullCheck(L_21);
		L_21->___skinnedRenderer_11 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___skinnedRenderer_11), (void*)L_24);
		// nodes.Add(node);
		List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* L_25 = ___1_nodes;
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_26 = V_0;
		NullCheck(L_25);
		List_1_Add_m259BAE423664BBCD86868EF2F1A283ACE46F0E70_inline(L_25, L_26, List_1_Add_m259BAE423664BBCD86868EF2F1A283ACE46F0E70_RuntimeMethod_var);
		// if (transform.childCount > 0) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = ___0_transform;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_27, NULL);
		V_1 = (bool)((((int32_t)L_28) > ((int32_t)0))? 1 : 0);
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_00dc;
		}
	}
	{
		// if (transform.childCount > 0) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = ___0_transform;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_30, NULL);
		V_2 = (bool)((((int32_t)L_31) > ((int32_t)0))? 1 : 0);
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_00db;
		}
	}
	{
		// node.children = new int[transform.childCount];
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_33 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = ___0_transform;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_34, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_35);
		NullCheck(L_33);
		((GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7*)L_33)->___children_1 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7*)L_33)->___children_1), (void*)L_36);
		// for (int i = 0; i < node.children.Length; i++) {
		V_3 = 0;
		goto IL_00c9;
	}

IL_00a3:
	{
		// Transform child = transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = ___0_transform;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_37, L_38, NULL);
		V_4 = L_39;
		// node.children[i] = nodes.Count;
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_40 = V_0;
		NullCheck(L_40);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7*)L_40)->___children_1;
		int32_t L_42 = V_3;
		List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* L_43 = ___1_nodes;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m16ED12F2FEE0A5DDC671B4654EEB7955AF82100A_inline(L_43, List_1_get_Count_m16ED12F2FEE0A5DDC671B4654EEB7955AF82100A_RuntimeMethod_var);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (int32_t)L_44);
		// CreateNodeListRecursive(child, nodes);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = V_4;
		List_1_tCFFA8E62021909C85E1446705954CB450FDA2A85* L_46 = ___1_nodes;
		GLTFNode_CreateNodeListRecursive_mE5B7848795E091C6134F052D7A9E195424211F61(L_45, L_46, NULL);
		// for (int i = 0; i < node.children.Length; i++) {
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00c9:
	{
		// for (int i = 0; i < node.children.Length; i++) {
		int32_t L_48 = V_3;
		ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* L_49 = V_0;
		NullCheck(L_49);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = ((GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7*)L_49)->___children_1;
		NullCheck(L_50);
		V_5 = (bool)((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_00a3;
		}
	}
	{
	}

IL_00db:
	{
	}

IL_00dc:
	{
		// }
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFNode__ctor_m96D7DBCDDE679F5C900497099EEDEF682DC06034 (GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* __this, const RuntimeMethod* method) 
{
	{
		// [JsonConverter(typeof(TranslationConverter))] public Vector3 translation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___translation_2 = L_0;
		// [JsonConverter(typeof(QuaternionConverter))] public Quaternion rotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___rotation_3 = L_1;
		// [JsonConverter(typeof(Vector3Converter))] public Vector3 scale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___scale_4 = L_2;
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
// System.Boolean Siccity.GLTFUtility.GLTFNode/ImportResult::get_IsRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImportResult_get_IsRoot_m7F595F057311EDA04643EEB6356B5D1414CC4D41 (ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public bool IsRoot { get { return !parent.HasValue; } }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = (&__this->___parent_0);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_0, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// public bool IsRoot { get { return !parent.HasValue; } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNode/ImportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_mDD68E4E6BF357B78511BF4AF3306CC1FCDD23AF1 (ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFNode/ImportTask::.ctor(System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFNode>,Siccity.GLTFUtility.GLTFMesh/ImportTask,Siccity.GLTFUtility.GLTFSkin/ImportTask,System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFCamera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportTask__ctor_m55E1401DB2E7CCF8F7088D8E859C449220856D86 (ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* __this, List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* ___0_nodes, ImportTask_t85CE9214F36F1B0347E8BAB21F6E4DDCF97B039D* ___1_meshTask, ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* ___2_skinTask, List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731* ___3_cameras, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTask_1__ctor_mC7E4A3A9B41C4B8E0D2DB56C03950ADF96824D36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__4_0_mF6137FFF7F99D5399166485781F52F03D05080DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* G_B1_1 = NULL;
	{
		// public ImportTask(List<GLTFNode> nodes, GLTFMesh.ImportTask meshTask, GLTFSkin.ImportTask skinTask, List<GLTFCamera> cameras) : base(meshTask, skinTask) {
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_0 = (ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)SZArrayNew(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var, (uint32_t)2);
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_1 = L_0;
		ImportTask_t85CE9214F36F1B0347E8BAB21F6E4DDCF97B039D* L_2 = ___1_meshTask;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)L_2);
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_3 = L_1;
		ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* L_4 = ___2_skinTask;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)L_4);
		ImportTask_1__ctor_mC7E4A3A9B41C4B8E0D2DB56C03950ADF96824D36(__this, L_3, ImportTask_1__ctor_mC7E4A3A9B41C4B8E0D2DB56C03950ADF96824D36_RuntimeMethod_var);
		// this.nodes = nodes;
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_5 = ___0_nodes;
		__this->___nodes_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodes_4), (void*)L_5);
		// this.meshTask = meshTask;
		ImportTask_t85CE9214F36F1B0347E8BAB21F6E4DDCF97B039D* L_6 = ___1_meshTask;
		__this->___meshTask_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshTask_5), (void*)L_6);
		// this.skinTask = skinTask;
		ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* L_7 = ___2_skinTask;
		__this->___skinTask_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skinTask_6), (void*)L_7);
		// this.cameras = cameras;
		List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731* L_8 = ___3_cameras;
		__this->___cameras_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameras_7), (void*)L_8);
		// task = new Task(() => { });
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ((U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = __this;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = __this;
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var);
		U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82* L_11 = ((U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__4_0_mF6137FFF7F99D5399166485781F52F03D05080DF_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = L_12;
		((U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_13);
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
	}

IL_0053:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)il2cpp_codegen_object_new(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637(L_14, G_B2_0, NULL);
		NullCheck(G_B2_1);
		((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)G_B2_1)->___task_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)G_B2_1)->___task_0), (void*)L_14);
		// }
		return;
	}
}
// System.Collections.IEnumerator Siccity.GLTFUtility.GLTFNode/ImportTask::OnCoroutine(System.Action`2<System.Single,Siccity.GLTFUtility.ImportType>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImportTask_OnCoroutine_mEBAB3982CAFF0054CEF5E459E7E17203145464BB (ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* __this, Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE* ___0_onProgress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* L_0 = (U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E*)il2cpp_codegen_object_new(U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnCoroutineU3Ed__5__ctor_mA79904C414D8872E10F8D11D5FAA3D725A290362(L_0, 0, NULL);
		U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* L_2 = L_1;
		Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE* L_3 = ___0_onProgress;
		NullCheck(L_2);
		L_2->___onProgress_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___onProgress_2), (void*)L_3);
		return L_2;
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
// System.Void Siccity.GLTFUtility.GLTFNode/ImportTask/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8BA7984223B550A269E9767C20FB680D5780798F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82* L_0 = (U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82*)il2cpp_codegen_object_new(U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m307EA365E2F70C1994F1139447082263F4F0BBD7(L_0, NULL);
		((U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNode/ImportTask/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m307EA365E2F70C1994F1139447082263F4F0BBD7 (U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNode/ImportTask/<>c::<.ctor>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__4_0_mF6137FFF7F99D5399166485781F52F03D05080DF (U3CU3Ec_tE8111643126C5906D0C83CCA591CED91B84D6E82* __this, const RuntimeMethod* method) 
{
	{
		// task = new Task(() => { });
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
// System.Void Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCoroutineU3Ed__5__ctor_mA79904C414D8872E10F8D11D5FAA3D725A290362 (U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCoroutineU3Ed__5_System_IDisposable_Dispose_m959AB88FBA1357CD6435D2191CE4A2786AFD3FC3 (U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnCoroutineU3Ed__5_MoveNext_mEF64253E3C48AC3D9673C94276FBE7FFD42E06C6 (U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m415EF2D8F0C07FC3CBF9226E7F83687854D957AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2626C587A9B30F3C755D7A68263D088634593119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000e;
	}

IL_000c:
	{
		goto IL_0010;
	}

IL_000e:
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (nodes == null) {
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_2 = __this->___U3CU3E4__this_3;
		NullCheck(L_2);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_3 = L_2->___nodes_4;
		V_1 = (bool)((((RuntimeObject*)(List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// if (onProgress != null) onProgress.Invoke(1f, ImportType.NODE);
		Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE* L_5 = __this->___onProgress_2;
		V_2 = (bool)((!(((RuntimeObject*)(Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// if (onProgress != null) onProgress.Invoke(1f, ImportType.NODE);
		Action_2_tE959CD7B37DD3ADE33F363E8F4C09F7814A471EE* L_7 = __this->___onProgress_2;
		NullCheck(L_7);
		Action_2_Invoke_m5EBD9AC3B787CCF4E593DE49AD05E61D1151A620_inline(L_7, (1.0f), 2, NULL);
	}

IL_004a:
	{
		// IsCompleted = true;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_8 = __this->___U3CU3E4__this_3;
		NullCheck(L_8);
		ImportTask_set_IsCompleted_mD43834A40156C70ED3E4D35718CD32E2DE0A1595_inline(L_8, (bool)1, NULL);
		// yield break;
		return (bool)0;
	}

IL_0059:
	{
		// Result = new ImportResult[nodes.Count];
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_9 = __this->___U3CU3E4__this_3;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_10 = __this->___U3CU3E4__this_3;
		NullCheck(L_10);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_11 = L_10->___nodes_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m415EF2D8F0C07FC3CBF9226E7F83687854D957AF_inline(L_11, List_1_get_Count_m415EF2D8F0C07FC3CBF9226E7F83687854D957AF_RuntimeMethod_var);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_13 = (ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F*)(ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F*)SZArrayNew(ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F_il2cpp_TypeInfo_var, (uint32_t)L_12);
		NullCheck(L_9);
		((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_9)->___Result_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_9)->___Result_3), (void*)L_13);
		// for (int i = 0; i < Result.Length; i++) {
		__this->___U3CiU3E5__1_4 = 0;
		goto IL_0107;
	}

IL_0085:
	{
		// Result[i] = new GLTFNode.ImportResult();
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_14 = __this->___U3CU3E4__this_3;
		NullCheck(L_14);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_15 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_14)->___Result_3;
		int32_t L_16 = __this->___U3CiU3E5__1_4;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_17 = (ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9*)il2cpp_codegen_object_new(ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ImportResult__ctor_mDD68E4E6BF357B78511BF4AF3306CC1FCDD23AF1(L_17, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9*)L_17);
		// Result[i].transform = new GameObject().transform;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_18 = __this->___U3CU3E4__this_3;
		NullCheck(L_18);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_19 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_18)->___Result_3;
		int32_t L_20 = __this->___U3CiU3E5__1_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_23, NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_22);
		L_22->___transform_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___transform_2), (void*)L_24);
		// Result[i].transform.name = nodes[i].name;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_25 = __this->___U3CU3E4__this_3;
		NullCheck(L_25);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_26 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_25)->___Result_3;
		int32_t L_27 = __this->___U3CiU3E5__1_4;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = L_29->___transform_2;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_31 = __this->___U3CU3E4__this_3;
		NullCheck(L_31);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_32 = L_31->___nodes_4;
		int32_t L_33 = __this->___U3CiU3E5__1_4;
		NullCheck(L_32);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_34;
		L_34 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_32, L_33, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		NullCheck(L_34);
		String_t* L_35 = L_34->___name_0;
		NullCheck(L_30);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_30, L_35, NULL);
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_36 = __this->___U3CiU3E5__1_4;
		V_3 = L_36;
		int32_t L_37 = V_3;
		__this->___U3CiU3E5__1_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0107:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_38 = __this->___U3CiU3E5__1_4;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_39 = __this->___U3CU3E4__this_3;
		NullCheck(L_39);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_40 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_39)->___Result_3;
		NullCheck(L_40);
		V_4 = (bool)((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))? 1 : 0);
		bool L_41 = V_4;
		if (L_41)
		{
			goto IL_0085;
		}
	}
	{
		// for (int i = 0; i < Result.Length; i++) {
		__this->___U3CiU3E5__2_5 = 0;
		goto IL_024e;
	}

IL_0131:
	{
		// if (nodes[i].children != null) {
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_42 = __this->___U3CU3E4__this_3;
		NullCheck(L_42);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_43 = L_42->___nodes_4;
		int32_t L_44 = __this->___U3CiU3E5__2_5;
		NullCheck(L_43);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_45;
		L_45 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_43, L_44, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		NullCheck(L_45);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45->___children_1;
		V_5 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_46) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_47 = V_5;
		if (!L_47)
		{
			goto IL_023d;
		}
	}
	{
		// int[] children = nodes[i].children;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_48 = __this->___U3CU3E4__this_3;
		NullCheck(L_48);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_49 = L_48->___nodes_4;
		int32_t L_50 = __this->___U3CiU3E5__2_5;
		NullCheck(L_49);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_51;
		L_51 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_49, L_50, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = L_51->___children_1;
		__this->___U3CchildrenU3E5__3_6 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildrenU3E5__3_6), (void*)L_52);
		// Result[i].children = children;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_53 = __this->___U3CU3E4__this_3;
		NullCheck(L_53);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_54 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_53)->___Result_3;
		int32_t L_55 = __this->___U3CiU3E5__2_5;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->___U3CchildrenU3E5__3_6;
		NullCheck(L_57);
		L_57->___children_1 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&L_57->___children_1), (void*)L_58);
		// for (int k = 0; k < children.Length; k++) {
		__this->___U3CkU3E5__4_7 = 0;
		goto IL_021c;
	}

IL_01a1:
	{
		// int childIndex = children[k];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = __this->___U3CchildrenU3E5__3_6;
		int32_t L_60 = __this->___U3CkU3E5__4_7;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		int32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		__this->___U3CchildIndexU3E5__5_8 = L_62;
		// Result[childIndex].parent = i;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_63 = __this->___U3CU3E4__this_3;
		NullCheck(L_63);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_64 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_63)->___Result_3;
		int32_t L_65 = __this->___U3CchildIndexU3E5__5_8;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int32_t L_68 = __this->___U3CiU3E5__2_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_69), L_68, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		NullCheck(L_67);
		L_67->___parent_0 = L_69;
		// Result[childIndex].transform.parent = Result[i].transform;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_70 = __this->___U3CU3E4__this_3;
		NullCheck(L_70);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_71 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_70)->___Result_3;
		int32_t L_72 = __this->___U3CchildIndexU3E5__5_8;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = L_74->___transform_2;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_76 = __this->___U3CU3E4__this_3;
		NullCheck(L_76);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_77 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_76)->___Result_3;
		int32_t L_78 = __this->___U3CiU3E5__2_5;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81 = L_80->___transform_2;
		NullCheck(L_75);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_75, L_81, NULL);
		// for (int k = 0; k < children.Length; k++) {
		int32_t L_82 = __this->___U3CkU3E5__4_7;
		V_3 = L_82;
		int32_t L_83 = V_3;
		__this->___U3CkU3E5__4_7 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_021c:
	{
		// for (int k = 0; k < children.Length; k++) {
		int32_t L_84 = __this->___U3CkU3E5__4_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___U3CchildrenU3E5__3_6;
		NullCheck(L_85);
		V_6 = (bool)((((int32_t)L_84) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length))))? 1 : 0);
		bool L_86 = V_6;
		if (L_86)
		{
			goto IL_01a1;
		}
	}
	{
		__this->___U3CchildrenU3E5__3_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildrenU3E5__3_6), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_023d:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_87 = __this->___U3CiU3E5__2_5;
		V_3 = L_87;
		int32_t L_88 = V_3;
		__this->___U3CiU3E5__2_5 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_024e:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_89 = __this->___U3CiU3E5__2_5;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_90 = __this->___U3CU3E4__this_3;
		NullCheck(L_90);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_91 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_90)->___Result_3;
		NullCheck(L_91);
		V_7 = (bool)((((int32_t)L_89) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length))))? 1 : 0);
		bool L_92 = V_7;
		if (L_92)
		{
			goto IL_0131;
		}
	}
	{
		// for (int i = 0; i < Result.Length; i++) {
		__this->___U3CiU3E5__6_9 = 0;
		goto IL_02ba;
	}

IL_0275:
	{
		// nodes[i].ApplyTRS(Result[i].transform);
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_93 = __this->___U3CU3E4__this_3;
		NullCheck(L_93);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_94 = L_93->___nodes_4;
		int32_t L_95 = __this->___U3CiU3E5__6_9;
		NullCheck(L_94);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_96;
		L_96 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_94, L_95, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_97 = __this->___U3CU3E4__this_3;
		NullCheck(L_97);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_98 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_97)->___Result_3;
		int32_t L_99 = __this->___U3CiU3E5__6_9;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = L_101->___transform_2;
		NullCheck(L_96);
		GLTFNode_ApplyTRS_mDA2C657088E8CC491EE0D136E73EF0F71A12F178(L_96, L_102, NULL);
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_103 = __this->___U3CiU3E5__6_9;
		V_3 = L_103;
		int32_t L_104 = V_3;
		__this->___U3CiU3E5__6_9 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_02ba:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_105 = __this->___U3CiU3E5__6_9;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_106 = __this->___U3CU3E4__this_3;
		NullCheck(L_106);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_107 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_106)->___Result_3;
		NullCheck(L_107);
		V_8 = (bool)((((int32_t)L_105) < ((int32_t)((int32_t)(((RuntimeArray*)L_107)->max_length))))? 1 : 0);
		bool L_108 = V_8;
		if (L_108)
		{
			goto IL_0275;
		}
	}
	{
		// for (int i = 0; i < Result.Length; i++) {
		__this->___U3CiU3E5__7_10 = 0;
		goto IL_07bf;
	}

IL_02e1:
	{
		// if (nodes[i].mesh.HasValue) {
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_109 = __this->___U3CU3E4__this_3;
		NullCheck(L_109);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_110 = L_109->___nodes_4;
		int32_t L_111 = __this->___U3CiU3E5__7_10;
		NullCheck(L_110);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_112;
		L_112 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_110, L_111, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		NullCheck(L_112);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_113 = (&L_112->___mesh_5);
		bool L_114;
		L_114 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_113, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_9 = L_114;
		bool L_115 = V_9;
		if (!L_115)
		{
			goto IL_057c;
		}
	}
	{
		// GLTFMesh.ImportResult meshResult = meshTask.Result[nodes[i].mesh.Value];
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_116 = __this->___U3CU3E4__this_3;
		NullCheck(L_116);
		ImportTask_t85CE9214F36F1B0347E8BAB21F6E4DDCF97B039D* L_117 = L_116->___meshTask_5;
		NullCheck(L_117);
		ImportResultU5BU5D_tF722CDC06F76022CC771BAB6EB164E764648C536* L_118 = ((ImportTask_1_tE8A8B361D08FA128F607CF613A1E0CF7532A0509*)L_117)->___Result_3;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_119 = __this->___U3CU3E4__this_3;
		NullCheck(L_119);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_120 = L_119->___nodes_4;
		int32_t L_121 = __this->___U3CiU3E5__7_10;
		NullCheck(L_120);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_122;
		L_122 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_120, L_121, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		NullCheck(L_122);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_123 = (&L_122->___mesh_5);
		int32_t L_124;
		L_124 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_123, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_118);
		int32_t L_125 = L_124;
		ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* L_126 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		__this->___U3CmeshResultU3E5__8_11 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshResultU3E5__8_11), (void*)L_126);
		// if (meshResult == null) continue;
		ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* L_127 = __this->___U3CmeshResultU3E5__8_11;
		V_10 = (bool)((((RuntimeObject*)(ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444*)L_127) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_128 = V_10;
		if (!L_128)
		{
			goto IL_0357;
		}
	}
	{
		// if (meshResult == null) continue;
		goto IL_07af;
	}

IL_0357:
	{
		// Mesh mesh = meshResult.mesh;
		ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* L_129 = __this->___U3CmeshResultU3E5__8_11;
		NullCheck(L_129);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_130 = L_129->___mesh_1;
		__this->___U3CmeshU3E5__9_12 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshU3E5__9_12), (void*)L_130);
		// if (nodes[i].skin.HasValue) {
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_131 = __this->___U3CU3E4__this_3;
		NullCheck(L_131);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_132 = L_131->___nodes_4;
		int32_t L_133 = __this->___U3CiU3E5__7_10;
		NullCheck(L_132);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_134;
		L_134 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_132, L_133, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		NullCheck(L_134);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_135 = (&L_134->___skin_6);
		bool L_136;
		L_136 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_135, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_11 = L_136;
		bool L_137 = V_11;
		if (!L_137)
		{
			goto IL_0414;
		}
	}
	{
		// GLTFSkin.ImportResult skin = skinTask.Result[nodes[i].skin.Value];
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_138 = __this->___U3CU3E4__this_3;
		NullCheck(L_138);
		ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* L_139 = L_138->___skinTask_6;
		NullCheck(L_139);
		ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376* L_140 = ((ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*)L_139)->___Result_3;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_141 = __this->___U3CU3E4__this_3;
		NullCheck(L_141);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_142 = L_141->___nodes_4;
		int32_t L_143 = __this->___U3CiU3E5__7_10;
		NullCheck(L_142);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_144;
		L_144 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_142, L_143, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		NullCheck(L_144);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_145 = (&L_144->___skin_6);
		int32_t L_146;
		L_146 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_145, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_140);
		int32_t L_147 = L_146;
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_148 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		__this->___U3CskinU3E5__11_14 = L_148;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CskinU3E5__11_14), (void*)L_148);
		// renderer = skin.SetupSkinnedRenderer(Result[i].transform.gameObject, mesh, Result);
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_149 = __this->___U3CskinU3E5__11_14;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_150 = __this->___U3CU3E4__this_3;
		NullCheck(L_150);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_151 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_150)->___Result_3;
		int32_t L_152 = __this->___U3CiU3E5__7_10;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_154);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_155 = L_154->___transform_2;
		NullCheck(L_155);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156;
		L_156 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_155, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_157 = __this->___U3CmeshU3E5__9_12;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_158 = __this->___U3CU3E4__this_3;
		NullCheck(L_158);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_159 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_158)->___Result_3;
		NullCheck(L_149);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_160;
		L_160 = ImportResult_SetupSkinnedRenderer_mB1B0C5C09DD34D94FCC2838AB0C41A2020A2DFAD(L_149, L_156, L_157, L_159, NULL);
		__this->___U3CrendererU3E5__10_13 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrendererU3E5__10_13), (void*)L_160);
		__this->___U3CskinU3E5__11_14 = (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CskinU3E5__11_14), (void*)(ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED*)NULL);
		goto IL_04f4;
	}

IL_0414:
	{
		// } else if (mesh.blendShapeCount > 0) {
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_161 = __this->___U3CmeshU3E5__9_12;
		NullCheck(L_161);
		int32_t L_162;
		L_162 = Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408(L_161, NULL);
		V_12 = (bool)((((int32_t)L_162) > ((int32_t)0))? 1 : 0);
		bool L_163 = V_12;
		if (!L_163)
		{
			goto IL_0478;
		}
	}
	{
		// SkinnedMeshRenderer mr = Result[i].transform.gameObject.AddComponent<SkinnedMeshRenderer>();
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_164 = __this->___U3CU3E4__this_3;
		NullCheck(L_164);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_165 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_164)->___Result_3;
		int32_t L_166 = __this->___U3CiU3E5__7_10;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_168);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_169 = L_168->___transform_2;
		NullCheck(L_169);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_170;
		L_170 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_169, NULL);
		NullCheck(L_170);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_171;
		L_171 = GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6(L_170, GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		__this->___U3CmrU3E5__12_15 = L_171;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmrU3E5__12_15), (void*)L_171);
		// mr.sharedMesh = mesh;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_172 = __this->___U3CmrU3E5__12_15;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_173 = __this->___U3CmeshU3E5__9_12;
		NullCheck(L_172);
		SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(L_172, L_173, NULL);
		// renderer = mr;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_174 = __this->___U3CmrU3E5__12_15;
		__this->___U3CrendererU3E5__10_13 = L_174;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrendererU3E5__10_13), (void*)L_174);
		__this->___U3CmrU3E5__12_15 = (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmrU3E5__12_15), (void*)(SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)NULL);
		goto IL_04f4;
	}

IL_0478:
	{
		// MeshRenderer mr = Result[i].transform.gameObject.AddComponent<MeshRenderer>();
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_175 = __this->___U3CU3E4__this_3;
		NullCheck(L_175);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_176 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_175)->___Result_3;
		int32_t L_177 = __this->___U3CiU3E5__7_10;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		NullCheck(L_179);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_180 = L_179->___transform_2;
		NullCheck(L_180);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_181;
		L_181 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_180, NULL);
		NullCheck(L_181);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_182;
		L_182 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_181, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		__this->___U3CmrU3E5__13_16 = L_182;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmrU3E5__13_16), (void*)L_182);
		// MeshFilter mf = Result[i].transform.gameObject.AddComponent<MeshFilter>();
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_183 = __this->___U3CU3E4__this_3;
		NullCheck(L_183);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_184 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_183)->___Result_3;
		int32_t L_185 = __this->___U3CiU3E5__7_10;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		NullCheck(L_187);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_188 = L_187->___transform_2;
		NullCheck(L_188);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_189;
		L_189 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_188, NULL);
		NullCheck(L_189);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_190;
		L_190 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_189, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		__this->___U3CmfU3E5__14_17 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmfU3E5__14_17), (void*)L_190);
		// renderer = mr;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_191 = __this->___U3CmrU3E5__13_16;
		__this->___U3CrendererU3E5__10_13 = L_191;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrendererU3E5__10_13), (void*)L_191);
		// mf.sharedMesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_192 = __this->___U3CmfU3E5__14_17;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_193 = __this->___U3CmeshU3E5__9_12;
		NullCheck(L_192);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_192, L_193, NULL);
		__this->___U3CmrU3E5__13_16 = (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmrU3E5__13_16), (void*)(MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL);
		__this->___U3CmfU3E5__14_17 = (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmfU3E5__14_17), (void*)(MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5*)NULL);
	}

IL_04f4:
	{
		// renderer.materials = meshResult.materials;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_194 = __this->___U3CrendererU3E5__10_13;
		ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444* L_195 = __this->___U3CmeshResultU3E5__8_11;
		NullCheck(L_195);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_196 = L_195->___materials_0;
		NullCheck(L_194);
		Renderer_set_materials_mAB0270CEB5AF2F6A8D21A012E77440DBFCBF9001(L_194, L_196, NULL);
		// if (string.IsNullOrEmpty(Result[i].transform.name)) Result[i].transform.name = "node" + i;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_197 = __this->___U3CU3E4__this_3;
		NullCheck(L_197);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_198 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_197)->___Result_3;
		int32_t L_199 = __this->___U3CiU3E5__7_10;
		NullCheck(L_198);
		int32_t L_200 = L_199;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_201 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_201);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_202 = L_201->___transform_2;
		NullCheck(L_202);
		String_t* L_203;
		L_203 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_202, NULL);
		bool L_204;
		L_204 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_203, NULL);
		V_13 = L_204;
		bool L_205 = V_13;
		if (!L_205)
		{
			goto IL_0564;
		}
	}
	{
		// if (string.IsNullOrEmpty(Result[i].transform.name)) Result[i].transform.name = "node" + i;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_206 = __this->___U3CU3E4__this_3;
		NullCheck(L_206);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_207 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_206)->___Result_3;
		int32_t L_208 = __this->___U3CiU3E5__7_10;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_210);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_211 = L_210->___transform_2;
		int32_t* L_212 = (&__this->___U3CiU3E5__7_10);
		String_t* L_213;
		L_213 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_212, NULL);
		String_t* L_214;
		L_214 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31, L_213, NULL);
		NullCheck(L_211);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_211, L_214, NULL);
	}

IL_0564:
	{
		__this->___U3CmeshResultU3E5__8_11 = (ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshResultU3E5__8_11), (void*)(ImportResult_tB0D2070FCA41B8B8BC5434ACD92CDD9E82374444*)NULL);
		__this->___U3CmeshU3E5__9_12 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshU3E5__9_12), (void*)(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
		__this->___U3CrendererU3E5__10_13 = (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrendererU3E5__10_13), (void*)(Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)NULL);
		goto IL_05d7;
	}

IL_057c:
	{
		// if (string.IsNullOrEmpty(Result[i].transform.name)) Result[i].transform.name = "node" + i;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_215 = __this->___U3CU3E4__this_3;
		NullCheck(L_215);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_216 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_215)->___Result_3;
		int32_t L_217 = __this->___U3CiU3E5__7_10;
		NullCheck(L_216);
		int32_t L_218 = L_217;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_219);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_220 = L_219->___transform_2;
		NullCheck(L_220);
		String_t* L_221;
		L_221 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_220, NULL);
		bool L_222;
		L_222 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_221, NULL);
		V_14 = L_222;
		bool L_223 = V_14;
		if (!L_223)
		{
			goto IL_05d6;
		}
	}
	{
		// if (string.IsNullOrEmpty(Result[i].transform.name)) Result[i].transform.name = "node" + i;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_224 = __this->___U3CU3E4__this_3;
		NullCheck(L_224);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_225 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_224)->___Result_3;
		int32_t L_226 = __this->___U3CiU3E5__7_10;
		NullCheck(L_225);
		int32_t L_227 = L_226;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_228 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		NullCheck(L_228);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_229 = L_228->___transform_2;
		int32_t* L_230 = (&__this->___U3CiU3E5__7_10);
		String_t* L_231;
		L_231 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_230, NULL);
		String_t* L_232;
		L_232 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31, L_231, NULL);
		NullCheck(L_229);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_229, L_232, NULL);
	}

IL_05d6:
	{
	}

IL_05d7:
	{
		// if (nodes[i].camera.HasValue) {
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_233 = __this->___U3CU3E4__this_3;
		NullCheck(L_233);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_234 = L_233->___nodes_4;
		int32_t L_235 = __this->___U3CiU3E5__7_10;
		NullCheck(L_234);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_236;
		L_236 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_234, L_235, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		NullCheck(L_236);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_237 = (&L_236->___camera_7);
		bool L_238;
		L_238 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_237, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_15 = L_238;
		bool L_239 = V_15;
		if (!L_239)
		{
			goto IL_07ae;
		}
	}
	{
		// GLTFCamera cameraData = cameras[nodes[i].camera.Value];
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_240 = __this->___U3CU3E4__this_3;
		NullCheck(L_240);
		List_1_tA01B6AEF261C6B1DAFBC70DB3CC8D5A45C0E9731* L_241 = L_240->___cameras_7;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_242 = __this->___U3CU3E4__this_3;
		NullCheck(L_242);
		List_1_tADD9C3A52B2A611901EA3E7373080489A02ADFFB* L_243 = L_242->___nodes_4;
		int32_t L_244 = __this->___U3CiU3E5__7_10;
		NullCheck(L_243);
		GLTFNode_t7C43B6435A496769B63DE3E29111E9E906D3A4F7* L_245;
		L_245 = List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378(L_243, L_244, List_1_get_Item_mE1692AE072CCA87BAB5CF09547065583BF6D8378_RuntimeMethod_var);
		NullCheck(L_245);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_246 = (&L_245->___camera_7);
		int32_t L_247;
		L_247 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_246, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_241);
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_248;
		L_248 = List_1_get_Item_m2626C587A9B30F3C755D7A68263D088634593119(L_241, L_247, List_1_get_Item_m2626C587A9B30F3C755D7A68263D088634593119_RuntimeMethod_var);
		__this->___U3CcameraDataU3E5__15_18 = L_248;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcameraDataU3E5__15_18), (void*)L_248);
		// Camera camera = Result[i].transform.gameObject.AddComponent<Camera>();
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_249 = __this->___U3CU3E4__this_3;
		NullCheck(L_249);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_250 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_249)->___Result_3;
		int32_t L_251 = __this->___U3CiU3E5__7_10;
		NullCheck(L_250);
		int32_t L_252 = L_251;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_253 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		NullCheck(L_253);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_254 = L_253->___transform_2;
		NullCheck(L_254);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_255;
		L_255 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_254, NULL);
		NullCheck(L_255);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_256;
		L_256 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_255, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		__this->___U3CcameraU3E5__16_19 = L_256;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcameraU3E5__16_19), (void*)L_256);
		// if (cameraData.type == CameraType.orthographic) {
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_257 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_257);
		int32_t L_258 = L_257->___type_2;
		V_16 = (bool)((((int32_t)L_258) == ((int32_t)1))? 1 : 0);
		bool L_259 = V_16;
		if (!L_259)
		{
			goto IL_06da;
		}
	}
	{
		// camera.orthographic = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_260 = __this->___U3CcameraU3E5__16_19;
		NullCheck(L_260);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_260, (bool)1, NULL);
		// camera.nearClipPlane = cameraData.orthographic.znear;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_261 = __this->___U3CcameraU3E5__16_19;
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_262 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_262);
		Orthographic_tD5FB065427A94666CDF0EE959A11B0E1EF45F34B* L_263 = L_262->___orthographic_0;
		NullCheck(L_263);
		float L_264 = L_263->___znear_3;
		NullCheck(L_261);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_261, L_264, NULL);
		// camera.farClipPlane = cameraData.orthographic.zfar;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_265 = __this->___U3CcameraU3E5__16_19;
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_266 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_266);
		Orthographic_tD5FB065427A94666CDF0EE959A11B0E1EF45F34B* L_267 = L_266->___orthographic_0;
		NullCheck(L_267);
		float L_268 = L_267->___zfar_2;
		NullCheck(L_265);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_265, L_268, NULL);
		// camera.orthographicSize = cameraData.orthographic.ymag;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_269 = __this->___U3CcameraU3E5__16_19;
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_270 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_270);
		Orthographic_tD5FB065427A94666CDF0EE959A11B0E1EF45F34B* L_271 = L_270->___orthographic_0;
		NullCheck(L_271);
		float L_272 = L_271->___ymag_1;
		NullCheck(L_269);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_269, L_272, NULL);
		goto IL_079f;
	}

IL_06da:
	{
		// camera.orthographic = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_273 = __this->___U3CcameraU3E5__16_19;
		NullCheck(L_273);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_273, (bool)0, NULL);
		// camera.nearClipPlane = cameraData.perspective.znear;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_274 = __this->___U3CcameraU3E5__16_19;
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_275 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_275);
		Perspective_tF94F6016D60A3F3A355F2ACA2496F78DE8A3981B* L_276 = L_275->___perspective_1;
		NullCheck(L_276);
		float L_277 = L_276->___znear_3;
		NullCheck(L_274);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_274, L_277, NULL);
		// if (cameraData.perspective.zfar.HasValue) camera.farClipPlane = cameraData.perspective.zfar.Value;
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_278 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_278);
		Perspective_tF94F6016D60A3F3A355F2ACA2496F78DE8A3981B* L_279 = L_278->___perspective_1;
		NullCheck(L_279);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_280 = (&L_279->___zfar_2);
		bool L_281;
		L_281 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_280, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		V_17 = L_281;
		bool L_282 = V_17;
		if (!L_282)
		{
			goto IL_0740;
		}
	}
	{
		// if (cameraData.perspective.zfar.HasValue) camera.farClipPlane = cameraData.perspective.zfar.Value;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_283 = __this->___U3CcameraU3E5__16_19;
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_284 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_284);
		Perspective_tF94F6016D60A3F3A355F2ACA2496F78DE8A3981B* L_285 = L_284->___perspective_1;
		NullCheck(L_285);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_286 = (&L_285->___zfar_2);
		float L_287;
		L_287 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_286, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_283);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_283, L_287, NULL);
	}

IL_0740:
	{
		// if (cameraData.perspective.aspectRatio.HasValue) camera.aspect = cameraData.perspective.aspectRatio.Value;
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_288 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_288);
		Perspective_tF94F6016D60A3F3A355F2ACA2496F78DE8A3981B* L_289 = L_288->___perspective_1;
		NullCheck(L_289);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_290 = (&L_289->___aspectRatio_0);
		bool L_291;
		L_291 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_290, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		V_18 = L_291;
		bool L_292 = V_18;
		if (!L_292)
		{
			goto IL_077c;
		}
	}
	{
		// if (cameraData.perspective.aspectRatio.HasValue) camera.aspect = cameraData.perspective.aspectRatio.Value;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_293 = __this->___U3CcameraU3E5__16_19;
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_294 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_294);
		Perspective_tF94F6016D60A3F3A355F2ACA2496F78DE8A3981B* L_295 = L_294->___perspective_1;
		NullCheck(L_295);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_296 = (&L_295->___aspectRatio_0);
		float L_297;
		L_297 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_296, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_293);
		Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_293, L_297, NULL);
	}

IL_077c:
	{
		// camera.fieldOfView = Mathf.Rad2Deg * cameraData.perspective.yfov;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_298 = __this->___U3CcameraU3E5__16_19;
		GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53* L_299 = __this->___U3CcameraDataU3E5__15_18;
		NullCheck(L_299);
		Perspective_tF94F6016D60A3F3A355F2ACA2496F78DE8A3981B* L_300 = L_299->___perspective_1;
		NullCheck(L_300);
		float L_301 = L_300->___yfov_1;
		NullCheck(L_298);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_298, ((float)il2cpp_codegen_multiply((57.2957802f), L_301)), NULL);
	}

IL_079f:
	{
		__this->___U3CcameraDataU3E5__15_18 = (GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcameraDataU3E5__15_18), (void*)(GLTFCamera_t44CFBD39A8B0601401DCB443FBDEEA1D2F406D53*)NULL);
		__this->___U3CcameraU3E5__16_19 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcameraU3E5__16_19), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
	}

IL_07ae:
	{
	}

IL_07af:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_302 = __this->___U3CiU3E5__7_10;
		V_3 = L_302;
		int32_t L_303 = V_3;
		__this->___U3CiU3E5__7_10 = ((int32_t)il2cpp_codegen_add(L_303, 1));
	}

IL_07bf:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_304 = __this->___U3CiU3E5__7_10;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_305 = __this->___U3CU3E4__this_3;
		NullCheck(L_305);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_306 = ((ImportTask_1_t4A75F0862DFCCB1C33E73299D5D7FBB44E0DB450*)L_305)->___Result_3;
		NullCheck(L_306);
		V_19 = (bool)((((int32_t)L_304) < ((int32_t)((int32_t)(((RuntimeArray*)L_306)->max_length))))? 1 : 0);
		bool L_307 = V_19;
		if (L_307)
		{
			goto IL_02e1;
		}
	}
	{
		// IsCompleted = true;
		ImportTask_tCBD615ED09BAA98D126EB4C3684B7DD06EB9D807* L_308 = __this->___U3CU3E4__this_3;
		NullCheck(L_308);
		ImportTask_set_IsCompleted_mD43834A40156C70ED3E4D35718CD32E2DE0A1595_inline(L_308, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0BE93EC815777C00C22C24D68D420871D07E8F6C (U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_mD9C6F1DF1827FBEC469361263D77864CA46B79ED (U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_mD9C6F1DF1827FBEC469361263D77864CA46B79ED_RuntimeMethod_var)));
	}
}
// System.Object Siccity.GLTFUtility.GLTFNode/ImportTask/<OnCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_m14AF0358E969F6F03D692AEB60D55C0ABB782C0B (U3COnCoroutineU3Ed__5_t74D8F364652DBB4A3DFD47C39919C15FC431496E* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFNode/ExportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExportResult__ctor_mA7DF1658976A0629E75B3A73DDC0B372E0169423 (ExportResult_t3BFD616FC059FD58616D7A5C5E12AC2B41CBE35B* __this, const RuntimeMethod* method) 
{
	{
		GLTFNode__ctor_m96D7DBCDDE679F5C900497099EEDEF682DC06034(__this, NULL);
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
// UnityEngine.GameObject Siccity.GLTFUtility.GLTFNodeExtensions::GetRoot(Siccity.GLTFUtility.GLTFNode/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GLTFNodeExtensions_GetRoot_mC2F52DF1F12C249FDCD8A7F38B6919FCF5E1EE12 (ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* ___0_nodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mB4F63A41D67EA00F2BAC29CA5744664FA9E79C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m4A216D7D4430D069D028608A8686341B6B0887A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetRootU3Eb__0_0_mB6164317DB954F6DFFDA38FAF8A130C1FB834A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1);
		s_Il2CppMethodInitialized = true;
	}
	ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* G_B2_0 = NULL;
	ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* G_B2_1 = NULL;
	Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* G_B1_0 = NULL;
	ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* G_B1_1 = NULL;
	{
		// GLTFNode.ImportResult[] roots = nodes.Where(x => x.IsRoot).ToArray();
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_0 = ___0_nodes;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* L_1 = ((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* L_3 = ((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* L_4 = (Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3*)il2cpp_codegen_object_new(Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m828445C78865E1ACC9C636FD283DF6459459254D(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CGetRootU3Eb__0_0_mB6164317DB954F6DFFDA38FAF8A130C1FB834A5D_RuntimeMethod_var), NULL);
		Func_2_tF61ACBD229DEB108CF2EA07DD22A247F48AB24A3* L_5 = L_4;
		((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m4A216D7D4430D069D028608A8686341B6B0887A5((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_m4A216D7D4430D069D028608A8686341B6B0887A5_RuntimeMethod_var);
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_7;
		L_7 = Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mB4F63A41D67EA00F2BAC29CA5744664FA9E79C48(L_6, Enumerable_ToArray_TisImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9_mB4F63A41D67EA00F2BAC29CA5744664FA9E79C48_RuntimeMethod_var);
		V_0 = L_7;
		// if (roots.Length == 1) return roots[0].transform.gameObject;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_8 = V_0;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)1))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		// if (roots.Length == 1) return roots[0].transform.gameObject;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12->___transform_2;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		V_2 = L_14;
		goto IL_0085;
	}

IL_0046:
	{
		// GameObject root = new GameObject("Root");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_15, _stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1, NULL);
		V_3 = L_15;
		// for (int i = 0; i < roots.Length; i++) {
		V_4 = 0;
		goto IL_0074;
	}

IL_0057:
	{
		// roots[i].transform.parent = root.transform;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_16 = V_0;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19->___transform_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_3;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_20);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_20, L_22, NULL);
		// for (int i = 0; i < roots.Length; i++) {
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0074:
	{
		// for (int i = 0; i < roots.Length; i++) {
		int32_t L_24 = V_4;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_25 = V_0;
		NullCheck(L_25);
		V_5 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_0057;
		}
	}
	{
		// return root;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_3;
		V_2 = L_27;
		goto IL_0085;
	}

IL_0085:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_2;
		return L_28;
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
// System.Void Siccity.GLTFUtility.GLTFNodeExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m831A06A054EA0880097F164CB3F3313CC2D66C07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* L_0 = (U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2*)il2cpp_codegen_object_new(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mBE965964844A0FF7152FFFA94340A1F558BF8960(L_0, NULL);
		((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFNodeExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE965964844A0FF7152FFFA94340A1F558BF8960 (U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Siccity.GLTFUtility.GLTFNodeExtensions/<>c::<GetRoot>b__0_0(Siccity.GLTFUtility.GLTFNode/ImportResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetRootU3Eb__0_0_mB6164317DB954F6DFFDA38FAF8A130C1FB834A5D (U3CU3Ec_tCABFFE999469A71AA6D67609AB3F2BC7260EB8A2* __this, ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* ___0_x, const RuntimeMethod* method) 
{
	{
		// GLTFNode.ImportResult[] roots = nodes.Where(x => x.IsRoot).ToArray();
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_0 = ___0_x;
		NullCheck(L_0);
		bool L_1;
		L_1 = ImportResult_get_IsRoot_m7F595F057311EDA04643EEB6356B5D1414CC4D41(L_0, NULL);
		return L_1;
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
// System.Void Siccity.GLTFUtility.GLTFObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFObject__ctor_m351DBDE00DD0B4BFAE6839B547C9B38A87C264B7 (GLTFObject_tD045246E5AE1423C30A539F5767E3EED90CC5CC6* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFPrimitive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFPrimitive__ctor_m2E258DCE7C13BB56F559FDF5D0621FEB7A843E24 (GLTFPrimitive_t069231A8A45C9B80929CBB28CB4856E8D6142BD2* __this, const RuntimeMethod* method) 
{
	{
		// public RenderingMode mode = RenderingMode.TRIANGLES;
		__this->___mode_1 = 4;
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
// System.Void Siccity.GLTFUtility.GLTFPrimitive/GLTFAttributes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFAttributes__ctor_mD8AC514A308F3959A3C1522C6020FF02A5D2F80F (GLTFAttributes_t66CF595AC34CC93319F6989385E7B56AADD234AE* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFProperty__ctor_m5BF5B7EBA28F626906E02930B4590B3F38311307 (GLTFProperty_t4A06B9F82E2FF4D8B9BE7A3A12D462C033E4DE61* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFScene__ctor_mCA096F97908A43A6DC28114EC20DBEE9788D745F (GLTFScene_t1FDD03998A94D5A9BAC18B7AF3CBB2D3F8B0DC32* __this, const RuntimeMethod* method) 
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
// Siccity.GLTFUtility.GLTFSkin/ImportResult Siccity.GLTFUtility.GLTFSkin::Import(Siccity.GLTFUtility.GLTFAccessor/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* GLTFSkin_Import_m80EAC69C261DE791F117A4585C3C8BD9FE4078DE (GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* __this, ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* ___0_accessors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* V_9 = NULL;
	{
		// ImportResult result = new ImportResult();
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_0 = (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED*)il2cpp_codegen_object_new(ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ImportResult__ctor_m779A3381906CEC65988B755631C379A467CAA2DC(L_0, NULL);
		V_0 = L_0;
		// result.joints = joints;
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___joints_1;
		NullCheck(L_1);
		L_1->___joints_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___joints_1), (void*)L_2);
		// if (inverseBindMatrices.HasValue) {
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (&__this->___inverseBindMatrices_0);
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_3, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0119;
		}
	}
	{
		// result.inverseBindMatrices = accessors[inverseBindMatrices.Value].ReadMatrix4x4();
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_6 = V_0;
		ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* L_7 = ___0_accessors;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_8 = (&__this->___inverseBindMatrices_0);
		int32_t L_9;
		L_9 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_8, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_10 = L_9;
		ImportResult_t30A07FC4B79361274CA4E729F1481199CFB93D2B* L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_12;
		L_12 = ImportResult_ReadMatrix4x4_m34CDE85953F6971EFC99A1628F56E4F65103B014(L_11, NULL);
		NullCheck(L_6);
		L_6->___inverseBindMatrices_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___inverseBindMatrices_0), (void*)L_12);
		// for (int i = 0; i < result.inverseBindMatrices.Length; i++) {
		V_2 = 0;
		goto IL_0104;
	}

IL_0045:
	{
		// Matrix4x4 m = result.inverseBindMatrices[i];
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_13 = V_0;
		NullCheck(L_13);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_14 = L_13->___inverseBindMatrices_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		// Vector4 row0 = m.GetRow(0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18;
		L_18 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_3), 0, NULL);
		V_4 = L_18;
		// row0.y = -row0.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = V_4;
		float L_20 = L_19.___y_2;
		(&V_4)->___y_2 = ((-L_20));
		// row0.z = -row0.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = V_4;
		float L_22 = L_21.___z_3;
		(&V_4)->___z_3 = ((-L_22));
		// Vector4 row1 = m.GetRow(1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		L_23 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_3), 1, NULL);
		V_5 = L_23;
		// row1.x = -row1.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = V_5;
		float L_25 = L_24.___x_1;
		(&V_5)->___x_1 = ((-L_25));
		// Vector4 row2 = m.GetRow(2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		L_26 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_3), 2, NULL);
		V_6 = L_26;
		// row2.x = -row2.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27 = V_6;
		float L_28 = L_27.___x_1;
		(&V_6)->___x_1 = ((-L_28));
		// Vector4 row3 = m.GetRow(3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29;
		L_29 = Matrix4x4_GetRow_m59C6981300C6F6927BEA17C5D095B2AD29629E9F((&V_3), 3, NULL);
		V_7 = L_29;
		// row3.x = -row3.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30 = V_7;
		float L_31 = L_30.___x_1;
		(&V_7)->___x_1 = ((-L_31));
		// m.SetColumn(0, row0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32 = V_4;
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_3), 0, L_32, NULL);
		// m.SetColumn(1, row1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = V_5;
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_3), 1, L_33, NULL);
		// m.SetColumn(2, row2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = V_6;
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_3), 2, L_34, NULL);
		// m.SetColumn(3, row3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = V_7;
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_3), 3, L_35, NULL);
		// result.inverseBindMatrices[i] = m;
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_36 = V_0;
		NullCheck(L_36);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_37 = L_36->___inverseBindMatrices_0;
		int32_t L_38 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39 = V_3;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_39);
		// for (int i = 0; i < result.inverseBindMatrices.Length; i++) {
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0104:
	{
		// for (int i = 0; i < result.inverseBindMatrices.Length; i++) {
		int32_t L_41 = V_2;
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_42 = V_0;
		NullCheck(L_42);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_43 = L_42->___inverseBindMatrices_0;
		NullCheck(L_43);
		V_8 = (bool)((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))? 1 : 0);
		bool L_44 = V_8;
		if (L_44)
		{
			goto IL_0045;
		}
	}
	{
	}

IL_0119:
	{
		// return result;
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_45 = V_0;
		V_9 = L_45;
		goto IL_011e;
	}

IL_011e:
	{
		// }
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_46 = V_9;
		return L_46;
	}
}
// System.Void Siccity.GLTFUtility.GLTFSkin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFSkin__ctor_m5DFD93E86DAF05D0D3E31FD07D050F158E24BC60 (GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* __this, const RuntimeMethod* method) 
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
// UnityEngine.SkinnedMeshRenderer Siccity.GLTFUtility.GLTFSkin/ImportResult::SetupSkinnedRenderer(UnityEngine.GameObject,UnityEngine.Mesh,Siccity.GLTFUtility.GLTFNode/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ImportResult_SetupSkinnedRenderer_mB1B0C5C09DD34D94FCC2838AB0C41A2020A2DFAD (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___1_mesh, ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* ___2_nodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5352D01FE6068C601049E8637D4D269DA0DD1DC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5B8C96BBCEB1E1F0FA13642A12DBECB0E90B670);
		s_Il2CppMethodInitialized = true;
	}
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_0 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_9 = NULL;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_14 = NULL;
	int32_t V_15 = 0;
	bool V_16 = false;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_17 = NULL;
	{
		// SkinnedMeshRenderer smr = go.AddComponent<SkinnedMeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		NullCheck(L_0);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_1;
		L_1 = GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6(L_0, GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		V_0 = L_1;
		// Transform[] bones = new Transform[joints.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___joints_1;
		NullCheck(L_2);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for (int i = 0; i < bones.Length; i++) {
		V_2 = 0;
		goto IL_006d;
	}

IL_001a:
	{
		// int jointNodeIndex = joints[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___joints_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// GLTFNode.ImportResult jointNode = nodes[jointNodeIndex];
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_8 = ___2_nodes;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// bones[i] = jointNode.transform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_1;
		int32_t L_13 = V_2;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_14 = V_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_14->___transform_2;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_15);
		// if (string.IsNullOrEmpty(jointNode.transform.name)) jointNode.transform.name = "joint" + i;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_16 = V_4;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16->___transform_2;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0068;
		}
	}
	{
		// if (string.IsNullOrEmpty(jointNode.transform.name)) jointNode.transform.name = "joint" + i;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_21 = V_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___transform_2;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD5B8C96BBCEB1E1F0FA13642A12DBECB0E90B670, L_23, NULL);
		NullCheck(L_22);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_22, L_24, NULL);
	}

IL_0068:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < bones.Length; i++) {
		int32_t L_26 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_27 = V_1;
		NullCheck(L_27);
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))? 1 : 0);
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_001a;
		}
	}
	{
		// smr.bones = bones;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_29 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_30 = V_1;
		NullCheck(L_29);
		SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7(L_29, L_30, NULL);
		// smr.rootBone = bones[0];
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_31 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_31);
		SkinnedMeshRenderer_set_rootBone_m218D83F020040DB84BA06D99050D6A01A3C90355(L_31, L_34, NULL);
		// if (inverseBindMatrices != null) {
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_35 = __this->___inverseBindMatrices_0;
		V_7 = (bool)((!(((RuntimeObject*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)L_35) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_0123;
		}
	}
	{
		// if (inverseBindMatrices.Length != joints.Length) Debug.LogWarning("InverseBindMatrices count and joints count not the same");
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_37 = __this->___inverseBindMatrices_0;
		NullCheck(L_37);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___joints_1;
		NullCheck(L_38);
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_00c4;
		}
	}
	{
		// if (inverseBindMatrices.Length != joints.Length) Debug.LogWarning("InverseBindMatrices count and joints count not the same");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral5352D01FE6068C601049E8637D4D269DA0DD1DC2, NULL);
	}

IL_00c4:
	{
		// Matrix4x4 m = nodes[0].transform.localToWorldMatrix;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_40 = ___2_nodes;
		NullCheck(L_40);
		int32_t L_41 = 0;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = L_42->___transform_2;
		NullCheck(L_43);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_44;
		L_44 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_43, NULL);
		V_8 = L_44;
		// Matrix4x4[] bindPoses = new Matrix4x4[joints.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___joints_1;
		NullCheck(L_45);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_46 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)));
		V_9 = L_46;
		// for (int i = 0; i < joints.Length; i++) {
		V_11 = 0;
		goto IL_0105;
	}

IL_00e7:
	{
		// bindPoses[i] = inverseBindMatrices[i];
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_47 = V_9;
		int32_t L_48 = V_11;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_49 = __this->___inverseBindMatrices_0;
		int32_t L_50 = V_11;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_52);
		// for (int i = 0; i < joints.Length; i++) {
		int32_t L_53 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0105:
	{
		// for (int i = 0; i < joints.Length; i++) {
		int32_t L_54 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = __this->___joints_1;
		NullCheck(L_55);
		V_12 = (bool)((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))))? 1 : 0);
		bool L_56 = V_12;
		if (L_56)
		{
			goto IL_00e7;
		}
	}
	{
		// mesh.bindposes = bindPoses;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_57 = ___1_mesh;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_58 = V_9;
		NullCheck(L_57);
		Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_57, L_58, NULL);
		goto IL_0190;
	}

IL_0123:
	{
		// Matrix4x4 m = nodes[0].transform.localToWorldMatrix;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_59 = ___2_nodes;
		NullCheck(L_59);
		int32_t L_60 = 0;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = L_61->___transform_2;
		NullCheck(L_62);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_63;
		L_63 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_62, NULL);
		V_13 = L_63;
		// Matrix4x4[] bindPoses = new Matrix4x4[joints.Length];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___joints_1;
		NullCheck(L_64);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_65 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)));
		V_14 = L_65;
		// for (int i = 0; i < joints.Length; i++) {
		V_15 = 0;
		goto IL_0174;
	}

IL_0147:
	{
		// bindPoses[i] = nodes[joints[i]].transform.worldToLocalMatrix * m;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_66 = V_14;
		int32_t L_67 = V_15;
		ImportResultU5BU5D_tD5D46B7E320E1CC200803B8CA2C45614629A407F* L_68 = ___2_nodes;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = __this->___joints_1;
		int32_t L_70 = V_15;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		int32_t L_73 = L_72;
		ImportResult_tE1C8FED3E52FEE14986F30F8DDDA6C7D768F29C9* L_74 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = L_74->___transform_2;
		NullCheck(L_75);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_76;
		L_76 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_75, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_77 = V_13;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_78;
		L_78 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_76, L_77, NULL);
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_78);
		// for (int i = 0; i < joints.Length; i++) {
		int32_t L_79 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_0174:
	{
		// for (int i = 0; i < joints.Length; i++) {
		int32_t L_80 = V_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->___joints_1;
		NullCheck(L_81);
		V_16 = (bool)((((int32_t)L_80) < ((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length))))? 1 : 0);
		bool L_82 = V_16;
		if (L_82)
		{
			goto IL_0147;
		}
	}
	{
		// mesh.bindposes = bindPoses;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_83 = ___1_mesh;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_84 = V_14;
		NullCheck(L_83);
		Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_83, L_84, NULL);
	}

IL_0190:
	{
		// smr.sharedMesh = mesh;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_85 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_86 = ___1_mesh;
		NullCheck(L_85);
		SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(L_85, L_86, NULL);
		// return smr;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_87 = V_0;
		V_17 = L_87;
		goto IL_019d;
	}

IL_019d:
	{
		// }
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_88 = V_17;
		return L_88;
	}
}
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_m779A3381906CEC65988B755631C379A467CAA2DC (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportTask::.ctor(System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFSkin>,Siccity.GLTFUtility.GLTFAccessor/ImportTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportTask__ctor_m4E66B0EC15CECE19C9F038EEE03F0CC22344DA79 (ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* __this, List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* ___0_skins, ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* ___1_accessorTask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mDD8AD408CB38895F98EC32818A85AA771F489923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_0 = (U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m98078E5372FEE4823046B05C7B997DF7BC98EF7F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_1 = V_0;
		List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* L_2 = ___0_skins;
		NullCheck(L_1);
		L_1->___skins_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___skins_0), (void*)L_2);
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_3 = V_0;
		ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* L_4 = ___1_accessorTask;
		NullCheck(L_3);
		L_3->___accessorTask_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___accessorTask_2), (void*)L_4);
		// public ImportTask(List<GLTFSkin> skins, GLTFAccessor.ImportTask accessorTask) : base(accessorTask) {
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_5 = (ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)SZArrayNew(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var, (uint32_t)1);
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_6 = L_5;
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_7 = V_0;
		NullCheck(L_7);
		ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* L_8 = L_7->___accessorTask_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)L_8);
		ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8(__this, L_6, ImportTask_1__ctor_m9C8DA9D02CDEA4C64D819A0A3DFB0CDAD57F43D8_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___U3CU3E4__this_1), (void*)__this);
		// task = new Task(() => {
		//     if (skins == null) return;
		// 
		//     Result = new ImportResult[skins.Count];
		//     for (int i = 0; i < Result.Length; i++) {
		//         Result[i] = skins[i].Import(accessorTask.Result);
		//     }
		// });
		U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* L_10 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mDD8AD408CB38895F98EC32818A85AA771F489923_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)il2cpp_codegen_object_new(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637(L_12, L_11, NULL);
		((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)__this)->___task_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)__this)->___task_0), (void*)L_12);
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
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m98078E5372FEE4823046B05C7B997DF7BC98EF7F (U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFSkin/ImportTask/<>c__DisplayClass0_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mDD8AD408CB38895F98EC32818A85AA771F489923 (U3CU3Ec__DisplayClass0_0_t010A12AD2D44B823C4218BA7B2C9ABA5CD0BC08F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (skins == null) return;
		List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* L_0 = __this->___skins_0;
		V_0 = (bool)((((RuntimeObject*)(List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (skins == null) return;
		goto IL_0072;
	}

IL_0010:
	{
		// Result = new ImportResult[skins.Count];
		ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* L_2 = __this->___U3CU3E4__this_1;
		List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* L_3 = __this->___skins_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_inline(L_3, List_1_get_Count_mB734E6403F8372413DC432B2AC5CE1DDA22F8F4E_RuntimeMethod_var);
		ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376* L_5 = (ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376*)(ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376*)SZArrayNew(ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376_il2cpp_TypeInfo_var, (uint32_t)L_4);
		NullCheck(L_2);
		((ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*)L_2)->___Result_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*)L_2)->___Result_3), (void*)L_5);
		// for (int i = 0; i < Result.Length; i++) {
		V_1 = 0;
		goto IL_005e;
	}

IL_002f:
	{
		// Result[i] = skins[i].Import(accessorTask.Result);
		ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* L_6 = __this->___U3CU3E4__this_1;
		NullCheck(L_6);
		ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376* L_7 = ((ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*)L_6)->___Result_3;
		int32_t L_8 = V_1;
		List_1_tAF4E45BC6BBAAB44C8605F994CB950D09F44DE8F* L_9 = __this->___skins_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		GLTFSkin_t728B7393C539099BF34FE802FD8469A9A671BD14* L_11;
		L_11 = List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF(L_9, L_10, List_1_get_Item_m738697033608819BCDA5AC96D035F31810A9D5FF_RuntimeMethod_var);
		ImportTask_t5B88C44DA89E18E8E38693499D4CC74FB5036009* L_12 = __this->___accessorTask_2;
		NullCheck(L_12);
		ImportResultU5BU5D_tBDEE2E40DA4DDE74176372343BB6ADBCC8472740* L_13 = ((ImportTask_1_t77F40D823FFBF94BCF639D754F174066A208EF58*)L_12)->___Result_3;
		NullCheck(L_11);
		ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED* L_14;
		L_14 = GLTFSkin_Import_m80EAC69C261DE791F117A4585C3C8BD9FE4078DE(L_11, L_13, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_14);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ImportResult_tD1204A9D55A1A882FB43579E56C7CDFA4FFB6EED*)L_14);
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005e:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_16 = V_1;
		ImportTask_tD875E2C5E437DE43153897A37F61B9A05FD707FF* L_17 = __this->___U3CU3E4__this_1;
		NullCheck(L_17);
		ImportResultU5BU5D_t929389510E47A471C7BA472CD02497AE4947D376* L_18 = ((ImportTask_1_t62D88DAC1527A059044E9E6628FCF68F5F681D5A*)L_17)->___Result_3;
		NullCheck(L_18);
		V_2 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_2;
		if (L_19)
		{
			goto IL_002f;
		}
	}

IL_0072:
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
// Siccity.GLTFUtility.GLTFTexture/ImportResult Siccity.GLTFUtility.GLTFTexture::Import(Siccity.GLTFUtility.GLTFImage/ImportResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* GLTFTexture_Import_mA7CE2532D2EDCD6B22D0E7F42095618B1BE1165A (GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* __this, ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* ___0_images, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* V_1 = NULL;
	ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* V_2 = NULL;
	{
		// if (source.HasValue) {
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = (&__this->___source_1);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_0, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// ImportResult result = new ImportResult(images[source.Value]);
		ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* L_3 = ___0_images;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_4 = (&__this->___source_1);
		int32_t L_5;
		L_5 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_4, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_6 = L_5;
		ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_8 = (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4*)il2cpp_codegen_object_new(ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ImportResult__ctor_mE1EE7F4036EA5EBB526264B34BF3EF3526643D57(L_8, L_7, NULL);
		V_1 = L_8;
		// return result;
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_9 = V_1;
		V_2 = L_9;
		goto IL_002c;
	}

IL_0028:
	{
		// return null;
		V_2 = (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4*)NULL;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_10 = V_2;
		return L_10;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GLTFTexture__ctor_m86F6B5A9377BA3840211137A62724168A66F875B (GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult::.ctor(Siccity.GLTFUtility.GLTFImage/ImportResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult__ctor_mE1EE7F4036EA5EBB526264B34BF3EF3526643D57 (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* __this, ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* ___0_image, const RuntimeMethod* method) 
{
	{
		// public ImportResult(GLTFImage.ImportResult image) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.image = image;
		ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* L_0 = ___0_image;
		__this->___image_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image_0), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator Siccity.GLTFUtility.GLTFTexture/ImportResult::GetTextureCached(System.Boolean,System.Action`1<UnityEngine.Texture2D>,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImportResult_GetTextureCached_mCF9BA1F3B453108280AE72F581875B80A05911F2 (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* __this, bool ___0_linear, Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* ___1_onFinish, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___2_onProgress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_0 = (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E*)il2cpp_codegen_object_new(U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetTextureCachedU3Ed__3__ctor_m107AACA55A06DAC9FCAFD04141B7FF3FF90C1C6E(L_0, 0, NULL);
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_2 = L_1;
		bool L_3 = ___0_linear;
		NullCheck(L_2);
		L_2->___linear_2 = L_3;
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_4 = L_2;
		Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* L_5 = ___1_onFinish;
		NullCheck(L_4);
		L_4->___onFinish_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___onFinish_3), (void*)L_5);
		U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* L_6 = L_4;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = ___2_onProgress;
		NullCheck(L_6);
		L_6->___onProgress_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___onProgress_4), (void*)L_7);
		return L_6;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult::<GetTextureCached>b__3_0(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportResult_U3CGetTextureCachedU3Eb__3_0_m8DB954266435E371712DEA72A274173F69924D95 (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_x, const RuntimeMethod* method) 
{
	{
		// IEnumerator en = image.CreateTextureAsync(linear, x => cache = x, onProgress);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_x;
		__this->___cache_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cache_1), (void*)L_0);
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
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureCachedU3Ed__3__ctor_m107AACA55A06DAC9FCAFD04141B7FF3FF90C1C6E (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureCachedU3Ed__3_System_IDisposable_Dispose_mDDCEF534D74D8B0CE354A2E9A058477102CA6435 (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetTextureCachedU3Ed__3_MoveNext_m0CCBA000A088CC3DAA05F8CCD879F004251BA5E4 (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResult_U3CGetTextureCachedU3Eb__3_0_m8DB954266435E371712DEA72A274173F69924D95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_007c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (cache == null) {
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_3 = __this->___U3CU3E4__this_5;
		NullCheck(L_3);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = L_3->___cache_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_009c;
		}
	}
	{
		// IEnumerator en = image.CreateTextureAsync(linear, x => cache = x, onProgress);
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_7 = __this->___U3CU3E4__this_5;
		NullCheck(L_7);
		ImportResult_tD91430E506B67B4882774E147F43A7AAA774E2FC* L_8 = L_7->___image_0;
		bool L_9 = __this->___linear_2;
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_10 = __this->___U3CU3E4__this_5;
		Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* L_11 = (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33*)il2cpp_codegen_object_new(Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m0D74126D5BBFFF417FDA1881B8AEBD833A833F76(L_11, L_10, (intptr_t)((void*)ImportResult_U3CGetTextureCachedU3Eb__3_0_m8DB954266435E371712DEA72A274173F69924D95_RuntimeMethod_var), NULL);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_12 = __this->___onProgress_4;
		NullCheck(L_8);
		RuntimeObject* L_13;
		L_13 = ImportResult_CreateTextureAsync_m2258AD5309211F20BF436D291FB5E73D48D8D23A(L_8, L_9, L_11, L_12, NULL);
		__this->___U3CenU3E5__1_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenU3E5__1_6), (void*)L_13);
		goto IL_0084;
	}

IL_006b:
	{
		// while (en.MoveNext()) { yield return null; };
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0084:
	{
		// while (en.MoveNext()) { yield return null; };
		RuntimeObject* L_14 = __this->___U3CenU3E5__1_6;
		NullCheck(L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
		V_2 = L_15;
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_006b;
		}
	}
	{
		__this->___U3CenU3E5__1_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CenU3E5__1_6), (void*)(RuntimeObject*)NULL);
	}

IL_009c:
	{
		// onFinish(cache);
		Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* L_17 = __this->___onFinish_3;
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_18 = __this->___U3CU3E4__this_5;
		NullCheck(L_18);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = L_18->___cache_1;
		NullCheck(L_17);
		Action_1_Invoke_mCBAA13E9863B2958F53D13FBB8B1B51CA0011B53_inline(L_17, L_19, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTextureCachedU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C9762DCC01034EB35EA8AE733ADA08FA8003C3E (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTextureCachedU3Ed__3_System_Collections_IEnumerator_Reset_mF034E52F90A4C89E95F4F1E00F8E2C7A06B1AC65 (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetTextureCachedU3Ed__3_System_Collections_IEnumerator_Reset_mF034E52F90A4C89E95F4F1E00F8E2C7A06B1AC65_RuntimeMethod_var)));
	}
}
// System.Object Siccity.GLTFUtility.GLTFTexture/ImportResult/<GetTextureCached>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTextureCachedU3Ed__3_System_Collections_IEnumerator_get_Current_mA284ED3390F0DBAD281E37B70FE16A98918038F6 (U3CGetTextureCachedU3Ed__3_tF4057560D3EF16E1474BCC86A051EC93BAB1857E* __this, const RuntimeMethod* method) 
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
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportTask::.ctor(System.Collections.Generic.List`1<Siccity.GLTFUtility.GLTFTexture>,Siccity.GLTFUtility.GLTFImage/ImportTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImportTask__ctor_mD67D31CF0335DF7D0E814D9654438247851FFE8C (ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* __this, List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* ___0_textures, ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* ___1_imageTask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_m2284EFDB40F9A8C37F20AD02C98BAF6A9BD27300_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_0 = (U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mF3621EA969A5ACCAD71777DFFFC7B6D459F42476(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_1 = V_0;
		List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* L_2 = ___0_textures;
		NullCheck(L_1);
		L_1->___textures_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___textures_0), (void*)L_2);
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_3 = V_0;
		ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* L_4 = ___1_imageTask;
		NullCheck(L_3);
		L_3->___imageTask_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___imageTask_2), (void*)L_4);
		// public ImportTask(List<GLTFTexture> textures, GLTFImage.ImportTask imageTask) : base(imageTask) {
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_5 = (ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF*)SZArrayNew(ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF_il2cpp_TypeInfo_var, (uint32_t)1);
		ImportTaskU5BU5D_tBD85BA03F9DBAE883F1D8ED60DA61877D5310DCF* L_6 = L_5;
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_7 = V_0;
		NullCheck(L_7);
		ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* L_8 = L_7->___imageTask_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)L_8);
		ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513(__this, L_6, ImportTask_1__ctor_mE9303653A2C08108B4AB6F83964FFA3C186FB513_RuntimeMethod_var);
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_9 = V_0;
		NullCheck(L_9);
		L_9->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___U3CU3E4__this_1), (void*)__this);
		// task = new Task(() => {
		//     if (textures == null) return;
		// 
		//     Result = new ImportResult[textures.Count];
		//     for (int i = 0; i < Result.Length; i++) {
		//         Result[i] = textures[i].Import(imageTask.Result);
		//     }
		// });
		U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* L_10 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_m2284EFDB40F9A8C37F20AD02C98BAF6A9BD27300_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)il2cpp_codegen_object_new(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637(L_12, L_11, NULL);
		((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)__this)->___task_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE*)__this)->___task_0), (void*)L_12);
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
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mF3621EA969A5ACCAD71777DFFFC7B6D459F42476 (U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Siccity.GLTFUtility.GLTFTexture/ImportTask/<>c__DisplayClass0_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_m2284EFDB40F9A8C37F20AD02C98BAF6A9BD27300 (U3CU3Ec__DisplayClass0_0_tC7B90A499752D25099678E352909D3BA32D1A11B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (textures == null) return;
		List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* L_0 = __this->___textures_0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (textures == null) return;
		goto IL_0072;
	}

IL_0010:
	{
		// Result = new ImportResult[textures.Count];
		ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* L_2 = __this->___U3CU3E4__this_1;
		List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* L_3 = __this->___textures_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_inline(L_3, List_1_get_Count_m1D3DAB49AF92CF6CA0DB34F50F4DD8ED3C39EA89_RuntimeMethod_var);
		ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71* L_5 = (ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71*)(ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71*)SZArrayNew(ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71_il2cpp_TypeInfo_var, (uint32_t)L_4);
		NullCheck(L_2);
		((ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*)L_2)->___Result_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*)L_2)->___Result_3), (void*)L_5);
		// for (int i = 0; i < Result.Length; i++) {
		V_1 = 0;
		goto IL_005e;
	}

IL_002f:
	{
		// Result[i] = textures[i].Import(imageTask.Result);
		ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* L_6 = __this->___U3CU3E4__this_1;
		NullCheck(L_6);
		ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71* L_7 = ((ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*)L_6)->___Result_3;
		int32_t L_8 = V_1;
		List_1_t50C0F81B870C16CAA7D7F37E7C04E418EC24C943* L_9 = __this->___textures_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		GLTFTexture_t29C52B25361578976ABF5BE441C06C71DF4F7D0C* L_11;
		L_11 = List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F(L_9, L_10, List_1_get_Item_mF65B33CB5F3500BF1E03DCDC515B99445E5A160F_RuntimeMethod_var);
		ImportTask_t26EDC4BA749D5280EB5F716C2788DBA03A283B6E* L_12 = __this->___imageTask_2;
		NullCheck(L_12);
		ImportResultU5BU5D_t8845DB7E6A0A94D26AEC54E9555717BE98E96936* L_13 = ((ImportTask_1_t36F54BCE5C6C762D504AF8682AD87D50E6B082F5*)L_12)->___Result_3;
		NullCheck(L_11);
		ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4* L_14;
		L_14 = GLTFTexture_Import_mA7CE2532D2EDCD6B22D0E7F42095618B1BE1165A(L_11, L_13, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_14);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ImportResult_tFCB507D0ED7FB7195EAFC34E05A1E2E445B0FAE4*)L_14);
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005e:
	{
		// for (int i = 0; i < Result.Length; i++) {
		int32_t L_16 = V_1;
		ImportTask_tEDBFBE9A9168C0670758D83A9D9A458325BE4A6F* L_17 = __this->___U3CU3E4__this_1;
		NullCheck(L_17);
		ImportResultU5BU5D_tCD5516E6FD79B74DADCE036B0A85249E82513A71* L_18 = ((ImportTask_1_t30DA322D802B8EF74B0B0D8A05F6C0A7201AAC9F*)L_17)->___Result_3;
		NullCheck(L_18);
		V_2 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_2;
		if (L_19)
		{
			goto IL_002f;
		}
	}

IL_0072:
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
// System.Void Siccity.GLTFUtility.Converters.ColorRGBConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorRGBConverter_WriteJson_m943AF2C1DFFAA6E1B940CF8487F91E0964B9B990 (ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color c = (Color) value;
		RuntimeObject* L_0 = ___1_value;
		V_0 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___0_writer;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(c.r);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___0_writer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = V_0;
		float L_4 = L_3.___r_0;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(c.g);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___0_writer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		float L_7 = L_6.___g_1;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteValue(c.b);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___0_writer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		float L_10 = L_9.___b_2;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, L_10);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___0_writer;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_11);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.ColorRGBConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColorRGBConverter_ReadJson_mF4926D3ADC9A2F1167FD58939DA592428DE8D44D (ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// float[] a = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___3_serializer;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___0_reader;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Color(a[0], a[1], a[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_12), L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12;
		RuntimeObject* L_14 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.ColorRGBConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorRGBConverter_CanConvert_mE74DA034FA890B4FF009C373B827E9CFDE9D811D (ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return objectType == typeof(Color);
		Type_t* L_0 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Siccity.GLTFUtility.Converters.ColorRGBConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorRGBConverter__ctor_m221AF504B28256B18A7435EDE1EF936737B5E516 (ColorRGBConverter_t12CFC6714395FB17E3AF0A02FA2ACF8B80A2903A* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.ColorRGBAConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorRGBAConverter_WriteJson_mFCC723ED8933B4D870EBE87216E9C3D9EB0026D1 (ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color c = (Color) value;
		RuntimeObject* L_0 = ___1_value;
		V_0 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___0_writer;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(c.r);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___0_writer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = V_0;
		float L_4 = L_3.___r_0;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(c.g);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___0_writer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		float L_7 = L_6.___g_1;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteValue(c.b);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___0_writer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		float L_10 = L_9.___b_2;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, L_10);
		// writer.WriteValue(c.a);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___0_writer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		float L_13 = L_12.___a_3;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_11, L_13);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_14 = ___0_writer;
		NullCheck(L_14);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_14);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.ColorRGBAConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ColorRGBAConverter_ReadJson_m9F04D93C769CE9B1D0971A14B42D39CA4B15B628 (ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// float[] a = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___3_serializer;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___0_reader;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Color(a[0], a[1], a[2], a[3]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), L_5, L_8, L_11, L_14, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = L_15;
		RuntimeObject* L_17 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_16);
		V_1 = L_17;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		RuntimeObject* L_18 = V_1;
		return L_18;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.ColorRGBAConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorRGBAConverter_CanConvert_mD9028D229BED303B5F845C0335094B27E3CF220F (ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return objectType == typeof(Color);
		Type_t* L_0 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Siccity.GLTFUtility.Converters.ColorRGBAConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorRGBAConverter__ctor_m0C42F93506AD38D79F70FC9F6CE9520FDC2450CD (ColorRGBAConverter_t13916AE168ECF63ED546C51484F0BF6C986222BA* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.EnumConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumConverter_WriteJson_mDFC1B79190072CE30375B2B294C7FB223DB4A544 (EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	{
		// writer.WriteValue(value.ToString());
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_0 = ___0_writer;
		RuntimeObject* L_1 = ___1_value;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.EnumConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumConverter_ReadJson_mDE3957FC96A8BD4B47C4690B8D6D7C7F2646D0DE (EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// string value = serializer.Deserialize<string>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___3_serializer;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___0_reader;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE(L_0, L_1, JsonSerializer_Deserialize_TisString_t_m6B592EE6488A98A42D2823D7DF5208BE0290B1EE_RuntimeMethod_var);
		V_0 = L_2;
		// if (Enum.IsDefined(objectType, value)) return Enum.Parse(objectType, value);
		Type_t* L_3 = ___1_objectType;
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_3, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		// if (Enum.IsDefined(objectType, value)) return Enum.Parse(objectType, value);
		Type_t* L_7 = ___1_objectType;
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_7, L_8, NULL);
		V_2 = L_9;
		goto IL_0023;
	}

IL_001f:
	{
		// else return existingValue;
		RuntimeObject* L_10 = ___2_existingValue;
		V_2 = L_10;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.EnumConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnumConverter_CanConvert_m0ED2A6C7C6243C832B256D80FA4864B9AA567A45 (EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return typeof(Enum).IsAssignableFrom(objectType);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_objectType;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Siccity.GLTFUtility.Converters.EnumConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumConverter__ctor_m43A32B44831E5887DA0EC596FD71C1C25673BC68 (EnumConverter_t07152464D1E37E40B5D683262589B0E34AF1F721* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.Matrix4x4Converter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4Converter_WriteJson_m1A96A1FEAAA09F08478DF817DA19FD3BE565EF02 (Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// Matrix4x4 m = (Matrix4x4) value;
		RuntimeObject* L_0 = ___1_value;
		V_0 = ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___0_writer;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// for (int i = 0; i < 16; i++) {
		V_1 = 0;
		goto IL_0028;
	}

IL_0013:
	{
		// writer.WriteValue(m[i]);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___0_writer;
		int32_t L_3 = V_1;
		float L_4;
		L_4 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&V_0), L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// for (int i = 0; i < 16; i++) {
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < 16; i++) {
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0013;
		}
	}
	{
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___0_writer;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_8);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.Matrix4x4Converter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Matrix4x4Converter_ReadJson_mCED14C2FDF8027D788A7B4B22B50308B1EC6DDB4 (Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// float[] floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___3_serializer;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___0_reader;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Matrix4x4(
		//     new Vector4(floatArray[0], floatArray[1], floatArray[2], floatArray[3]),
		//     new Vector4(floatArray[4], floatArray[5], floatArray[6], floatArray[7]),
		//     new Vector4(floatArray[8], floatArray[9], floatArray[10], floatArray[11]),
		//     new Vector4(floatArray[12], floatArray[13], floatArray[14], floatArray[15])
		// );;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_15), L_5, L_8, L_11, L_14, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 4;
		float L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 5;
		float L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 6;
		float L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 7;
		float L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_28), L_18, L_21, L_24, L_27, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 8;
		float L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = ((int32_t)9);
		float L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)10);
		float L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)11);
		float L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_41), L_31, L_34, L_37, L_40, /*hidden argument*/NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)12);
		float L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)13);
		float L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)14);
		float L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)15);
		float L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_54), L_44, L_47, L_50, L_53, /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Matrix4x4__ctor_m6523044D700F15EC6BCD183633A329EE56AA8C99((&L_55), L_15, L_28, L_41, L_54, /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_56 = L_55;
		RuntimeObject* L_57 = Box(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var, &L_56);
		V_1 = L_57;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		RuntimeObject* L_58 = V_1;
		return L_58;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.Matrix4x4Converter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4Converter_CanConvert_m38E2D86BB56D27CA165731F5802CE339E18B9123 (Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return objectType == typeof(Matrix4x4);
		Type_t* L_0 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Siccity.GLTFUtility.Converters.Matrix4x4Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4Converter__ctor_m61616B874A3930F4EB50C40186009F022312A585 (Matrix4x4Converter_tC8B24EF82158130786E7CAB75791535E3A8278AB* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.QuaternionConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionConverter_WriteJson_m48C0968A936C67F737AE53CC83936181F05BC61B (QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
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
		// Quaternion q = (Quaternion) value;
		RuntimeObject* L_0 = ___1_value;
		V_0 = ((*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)UnBox(L_0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___0_writer;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(q.x);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___0_writer;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		float L_4 = L_3.___x_0;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(-q.y);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___0_writer;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		float L_7 = L_6.___y_1;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, ((-L_7)));
		// writer.WriteValue(-q.z);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___0_writer;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		float L_10 = L_9.___z_2;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, ((-L_10)));
		// writer.WriteValue(q.w);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___0_writer;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_0;
		float L_13 = L_12.___w_3;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_11, L_13);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_14 = ___0_writer;
		NullCheck(L_14);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_14);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.QuaternionConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuaternionConverter_ReadJson_mD959BF071123CF69B95BC0726870CF356BD3D987 (QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// float[] floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___3_serializer;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___0_reader;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Quaternion(floatArray[0], -floatArray[1], -floatArray[2], floatArray[3]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_15), L_5, ((-L_8)), ((-L_11)), L_14, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15;
		RuntimeObject* L_17 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_16);
		V_1 = L_17;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		RuntimeObject* L_18 = V_1;
		return L_18;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.QuaternionConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuaternionConverter_CanConvert_mEB8909DC69B6568D084972BC913907036EE2583C (QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return objectType == typeof(Quaternion);
		Type_t* L_0 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Siccity.GLTFUtility.Converters.QuaternionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionConverter__ctor_mCFA10E3782B7804406CBE4A0872CBF3C2104C2F4 (QuaternionConverter_t4A1D80DA6E25156318BB13E2727BB79EA1DA15B2* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.TranslationConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationConverter_WriteJson_mA927B77C59A951CF90FE4BB959EA0C2B9A26B20C (TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
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
		// Vector3 pos = (Vector3) value;
		RuntimeObject* L_0 = ___1_value;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___0_writer;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(-pos.x);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___0_writer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___x_2;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, ((-L_4)));
		// writer.WriteValue(pos.y);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___0_writer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___y_3;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteValue(pos.z);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___0_writer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___z_4;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, L_10);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___0_writer;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_11);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.TranslationConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslationConverter_ReadJson_mEC5ACC38C6F549B2CB32B9EE3906FE756DC33E51 (TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// float[] floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___3_serializer;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___0_reader;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Vector3(-floatArray[0], floatArray[1], floatArray[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((-L_5)), L_8, L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		RuntimeObject* L_14 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.TranslationConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TranslationConverter_CanConvert_m9CE3209DAB916845F9BB1C107FBC1552E89E4C79 (TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return objectType == typeof(Vector3);
		Type_t* L_0 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Siccity.GLTFUtility.Converters.TranslationConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationConverter__ctor_m08CDB47D3D7A8C6A987C4E0D261781FFEA179755 (TranslationConverter_t644636C700DB3129D6F337D22E15142506BFB385* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.Vector2Converter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Converter_WriteJson_m2EC82B453C2899854C535E6CA0A3C504DF69AE63 (Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 pos = (Vector2) value;
		RuntimeObject* L_0 = ___1_value;
		V_0 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___0_writer;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(pos.x);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___0_writer;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		float L_4 = L_3.___x_0;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(pos.y);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___0_writer;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___0_writer;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_8);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.Vector2Converter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector2Converter_ReadJson_m1C44C79E6122B83D4DF425CE2FAD25F6FB996D26 (Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	Exception_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// float[] floatArray = null;
		V_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
	}
	try
	{// begin try (depth: 1)
		// floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___3_serializer;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___0_reader;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_002e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Exception)
		// } catch (System.Exception e) {
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// floatArray = new float[] { serializer.Deserialize<float>(reader) };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var)), (uint32_t)1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_5 = ___3_serializer;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_6 = ___0_reader;
		NullCheck(L_5);
		float L_7;
		L_7 = JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE(L_5, L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializer_Deserialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD12C59EF3E0BDE9D3FFF50F818311CA6BC0A44CE_RuntimeMethod_var)));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_7);
		V_0 = L_4;
		// Debug.LogWarning(e);
		Exception_t* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002e;
	}// end catch (depth: 1)

IL_002e:
	{
		// switch (floatArray.Length) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		V_3 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		int32_t L_10 = V_3;
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract(L_11, 1)))
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_0086;
	}

IL_004a:
	{
		// return new Vector2(floatArray[0], floatArray[0]); // just copy float
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 0;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), L_14, L_17, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = L_18;
		RuntimeObject* L_20 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_19);
		V_4 = L_20;
		goto IL_009e;
	}

IL_005e:
	{
		// return new Vector2(floatArray[0], floatArray[1]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 0;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 1;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), L_23, L_26, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = L_27;
		RuntimeObject* L_29 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_28);
		V_4 = L_29;
		goto IL_009e;
	}

IL_0072:
	{
		// return new Vector2(floatArray[0], floatArray[1]); // we dont need third float
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = 0;
		float L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = 1;
		float L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), L_32, L_35, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = L_36;
		RuntimeObject* L_38 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_37);
		V_4 = L_38;
		goto IL_009e;
	}

IL_0086:
	{
		// return new Vector2(1, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_39), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = L_39;
		RuntimeObject* L_41 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_40);
		V_4 = L_41;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		RuntimeObject* L_42 = V_4;
		return L_42;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.Vector2Converter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2Converter_CanConvert_mE505480E15C00FEBFFC16A41F15137EE04B6E759 (Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return objectType == typeof(Vector2);
		Type_t* L_0 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Siccity.GLTFUtility.Converters.Vector2Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Converter__ctor_m7F29F61B0E4FDF145F33F25B5979A635A0EC42CB (Vector2Converter_t1CDEF38521F312B7D847680142BCEF0B2FEA8033* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void Siccity.GLTFUtility.Converters.Vector3Converter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Converter_WriteJson_m0E70E8DC92AD278E6668CAEFBD9A3F1100AF92E6 (Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
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
		// Vector3 pos = (Vector3) value;
		RuntimeObject* L_0 = ___1_value;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))));
		// writer.WriteStartArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___0_writer;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(70 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		// writer.WriteValue(pos.x);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___0_writer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___x_2;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_4);
		// writer.WriteValue(pos.y);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_5 = ___0_writer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___y_3;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_5, L_7);
		// writer.WriteValue(pos.z);
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_8 = ___0_writer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___z_4;
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(91 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_8, L_10);
		// writer.WriteEndArray();
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_11 = ___0_writer;
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(71 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_11);
		// }
		return;
	}
}
// System.Object Siccity.GLTFUtility.Converters.Vector3Converter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector3Converter_ReadJson_m6C73B47E26993B78AF219B394B21F4879AFCA3F3 (Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// float[] floatArray = serializer.Deserialize<float[]>(reader);
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___3_serializer;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_1 = ___0_reader;
		NullCheck(L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2;
		L_2 = JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27(L_0, L_1, JsonSerializer_Deserialize_TisSingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_mCD5C8B8D6400C8E28B7AEF1E9BA13AA5403A4F27_RuntimeMethod_var);
		V_0 = L_2;
		// return new Vector3(floatArray[0], floatArray[1], floatArray[2]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_5, L_8, L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		RuntimeObject* L_14 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_13);
		V_1 = L_14;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// System.Boolean Siccity.GLTFUtility.Converters.Vector3Converter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3Converter_CanConvert_m2661EB942A3144489DAAD245E854E7137F65F784 (Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return objectType == typeof(Vector3);
		Type_t* L_0 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Siccity.GLTFUtility.Converters.Vector3Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Converter__ctor_m73E4A6D4652242B34582613D7DE4E485B996D41A (Vector3Converter_t6DB9162A4C801C111F24922629EB6BE05B30A9F7* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImportTask_set_IsCompleted_mD43834A40156C70ED3E4D35718CD32E2DE0A1595_inline (ImportTask_tA21ACA7D65FC46C70E7E8710A94631DEB19D66FE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; protected set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCompletedU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m700BE39E13C88ACDB10E5F90F9B70C8FB80083E4_gshared_inline (Action_2_t372BFB22809525C08C757724E07A7C53677B6F48* __this, float ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
