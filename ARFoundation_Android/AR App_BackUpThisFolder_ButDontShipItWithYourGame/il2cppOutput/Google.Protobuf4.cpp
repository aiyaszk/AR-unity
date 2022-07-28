#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Google.Protobuf.IMessage>
struct Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<Google.Protobuf.IMessage,System.Object>
struct Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Google.Protobuf.Reflection.CustomOptions/FieldValue>>
struct Dictionary_2_tB73BABFE3DF776A8C14D8C788E5D126610BE7E8E;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FileDescriptor>
struct Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD;
// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.DescriptorProto>
struct EqualityComparer_1_t915621445F39410B66ADE17141012D47D7448DFB;
// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct EqualityComparer_1_t7121A20DD0C00861155D15449502A86E19ABBBDF;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct EqualityComparer_1_t1C9AD6B59E71E694DAD99FE3937C2B0E55416D7B;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct EqualityComparer_1_t9DD3C5B6D700A05D514621A4C6FF2C2AD64D5AC9;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct EqualityComparer_1_t5A1DC50B8DF80E0DE40F028FAEAA277E1F7D8094;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct EqualityComparer_1_tA1732808B62C77F60F915CE60E339EBE4BD6F0AD;
// System.Collections.Generic.EqualityComparer`1<Google.Protobuf.Reflection.ServiceDescriptorProto>
struct EqualityComparer_1_t0B3ACADF5871E317130DD3DEAC00528AB7D78070;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto>
struct FieldCodec_1_tAACC01F60039098F4E012BA2ECF3C95C55F9655C;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct FieldCodec_1_t26302C0D19596A86EAA32957047DC93218A3EF0A;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct FieldCodec_1_t20A177182A818B7310FEEA7DF9848B0F4DFBB604;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct FieldCodec_1_t21DF84ECEAE5A588438084C718EE0697F7495FD3;
// Google.Protobuf.FieldCodec`1<System.Int32>
struct FieldCodec_1_tB6976C5B1322FACED91040BA5E228C81269BF895;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct FieldCodec_1_tB268F98DDB08D3D7B86D4A773ADBB6C7BAA07058;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct FieldCodec_1_tD8B477E6E14F4C5A8C924507FE2973CAF1B52250;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.ServiceDescriptorProto>
struct FieldCodec_1_t1BC621829C6CA44A4CE155CE8636D91E54AFFC7E;
// Google.Protobuf.FieldCodec`1<System.String>
struct FieldCodec_1_tB7730C8D2D4ADF6392F4D474DE844629557D8ABA;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption>
struct FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct FieldCodec_1_t5558E926F40278AAC6C3AD93D265C4AA554DCD16;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange>
struct FieldCodec_1_t90AB10B3ED8AC4DE44A947D1CF3329936C7132AB;
// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange>
struct FieldCodec_1_tCF98451FF0BD2005783BAC289042A4FAE6D865AF;
// System.Func`1<Google.Protobuf.Reflection.FileDescriptorProto>
struct Func_1_t7B03B3B6ADEEE76A591A97BA25B46056ECF69D5C;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>
struct Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC;
// System.Func`2<Google.Protobuf.IMessage,System.Int32>
struct Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3;
// System.Func`2<Google.Protobuf.IMessage,System.Object>
struct Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F;
// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<Google.Protobuf.Reflection.FileDescriptor>
struct HashSet_1_t57BDC9706421688AAA2C822E54970543F03C1FF8;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tDB170C5929E4ACA380EEF5C8E082139CE49EC21B;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.IDescriptor>
struct IDictionary_2_t3ABE52D9C581D30BB0194553D457CCFB9FC85C53;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair,Google.Protobuf.Reflection.EnumValueDescriptor>
struct IDictionary_2_tB59F7F8B7671371B91AD6FB5726927039171D665;
// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tF5BBA7A08B88CD2FF876D24D859B60FF9BA0B57C;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>
struct IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174;
// System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.DescriptorProto>
struct IList_1_t0AA5C9F9C50473E6B74CE272E301A3501ADBA51A;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_t2113D31E64AB4BC3FE73AB5985B7D30B220225D2;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct IList_1_t9B627132CD437EDF17D175484FF59796FAA3445E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptor>
struct IList_1_t62C9D2B4434397290C22494EAE83EF82091C9DCD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct IList_1_tEC480784AE7ED945649B374140DAAD26EB707267;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct IList_1_t2D045D88BC2BE676C33B395AAD2B088FCF512C8F;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t1C3796CCB02A6FB46469A8C82C9FBB10883C38B1;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor>
struct IList_1_t8F9E40B57B31F24B4FF11D24C88155651A66C0E4;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct IList_1_t54E8EFD4F83D97E7AA884CEDCEEBF277925EE6F6;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t72D63DEDFD3D09D9D034239EC2954718F7FCDB68;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct IList_1_t9904DA873DD391B88AFFBE6E68505C419755D7BC;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t9B74854C0814D339537A7FFF6105D1D25A39C180;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptorProto>
struct IList_1_t6091E984BADB4FD7B31D88B695C220294DA91CAA;
// System.Linq.IOrderedEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IOrderedEnumerable_1_t2D4EC5915BEFCBDC71224725B1913D516835A176;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>
struct IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>
struct IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumValueDescriptorProto,Google.Protobuf.Reflection.EnumValueDescriptor>
struct IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>
struct IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>
struct IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<System.Object,System.Object>
struct IndexedConverter_2_t3F40E49B0902E46EF51FCD1900236654B206AD99;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>
struct IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9;
// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.ServiceDescriptor>
struct IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct KeyCollection_t021EFE20A70B7F8FA6AB510DD471E8A9FC593CA4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.FileDescriptor>
struct KeyCollection_tEA6E7E05B61C5B266CBDA5E1FD527526F1DB1619;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct KeyCollection_tFB20A0E74840A072063C53665F19BDF6081C04A3;
// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>
struct List_1_t64981EE12A2A370C5000034039B00D57761431A3;
// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FileDescriptor>
struct List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.DescriptorProto>
struct MessageParser_1_tC828A5AED52A2A1A6B443C129AB81159E952AA23;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct MessageParser_1_t350C9B91DAEAF8C30A89B29EC781797549504BC3;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumOptions>
struct MessageParser_1_t5C666B1F0D4A0614E4FD9D9F05AE1F0CF78D5D1F;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct MessageParser_1_t91FD9AA10CCFAB724742ADA5711F4F05B48032F1;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumValueOptions>
struct MessageParser_1_t7C3DE4ADB3D616E5DEF3C3F475700DE6F2FF1BC7;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct MessageParser_1_tF4DAA81C6A6F29BEC553A6676E86AC33118C52E3;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldOptions>
struct MessageParser_1_t175EBCA1F4A347A30EBDDEA00F557EF4B3805352;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FileDescriptorProto>
struct MessageParser_1_t3B3CFF200F72B92CDC0FCC070921741B940A1EC0;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FileOptions>
struct MessageParser_1_t5AAE32368BB33DE8D6FCA93800B1B50C18F32C06;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MessageOptions>
struct MessageParser_1_tFFEB1180EAC16752D1427BFCDDC4B2505E7E6825;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct MessageParser_1_tA100AB071B3DCDB92D3B415C6CA42ADEF0E41B7C;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodOptions>
struct MessageParser_1_tD087B27B49C43A6910639742980B8D26A13E7C22;
// Google.Protobuf.MessageParser`1<System.Object>
struct MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct MessageParser_1_tE7DD323B82F902A745394143FCD3A97DE59885FD;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofOptions>
struct MessageParser_1_t521F874BA4869002851396C1D823B834193E6E28;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceDescriptorProto>
struct MessageParser_1_tAB75DE67CDAFD27D5FD5D410F5C6DAFB79FEF1CE;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceOptions>
struct MessageParser_1_tD751281EB3C202EB4829B26F67B05756385AF63B;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FileDescriptor>
struct ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// Google.Protobuf.Collections.ReadOnlyDictionary`2<System.Object,System.Object>
struct ReadOnlyDictionary_2_t255F9A7E024A19B4DD27835A47891A256232D5FE;
// Google.Protobuf.Collections.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto>
struct RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1;
// Google.Protobuf.Collections.RepeatedField`1<System.Int32>
struct RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E;
// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.ServiceDescriptorProto>
struct RepeatedField_1_t7DD3B3236E6DD9A822E98695E3F915473E7927C0;
// Google.Protobuf.Collections.RepeatedField`1<System.String>
struct RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption>
struct RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange>
struct RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange>
struct RepeatedField_1_tE6CF9D5A326C77D116E95AAC77621BF9905ACB87;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange>
struct RepeatedField_1_tBFF9DEF57804C2B6D88A9389B6112A4C07A87D1E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ValueCollection_t0B68AF9EDE41398214B111550EEB1F7F24D37AB6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.FileDescriptor>
struct ValueCollection_t9913AEC2521F2AD7ACE2D5A354035AC11F1A568F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct ValueCollection_t15F16639F81ED544F36FFDBF6ED43F0C1ED07AE8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.FieldDescriptor>[]
struct EntryU5BU5D_t4A0F18D0C381A64C983D00FFFB9954A47B3F12AA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.FileDescriptor>[]
struct EntryU5BU5D_t8C1745C13E395B47C1F6CC94902A6645C849A0A3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Google.Protobuf.Reflection.MessageDescriptor>[]
struct EntryU5BU5D_tA818ACE9564737BABC35DAFB6FD643DF96DB5A57;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.Protobuf.Reflection.DescriptorProto[]
struct DescriptorProtoU5BU5D_t627D9BA27EBB14ADC5EA0BA8166939B274782152;
// Google.Protobuf.Reflection.EnumDescriptorProto[]
struct EnumDescriptorProtoU5BU5D_tF77E21156336C7C95BAC350457E7818D4485A122;
// Google.Protobuf.Reflection.EnumValueDescriptorProto[]
struct EnumValueDescriptorProtoU5BU5D_t3979F6D04900F8D68160DC08FF68AF41B556FA51;
// Google.Protobuf.Reflection.FieldDescriptor[]
struct FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81;
// Google.Protobuf.Reflection.FieldDescriptorProto[]
struct FieldDescriptorProtoU5BU5D_t1E236065292831149EC4285422D641A7878068A3;
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818;
// Google.Protobuf.Reflection.MethodDescriptorProto[]
struct MethodDescriptorProtoU5BU5D_t1E5410DB2CA2B54451619E965FE330FD5C356AD1;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Google.Protobuf.Reflection.OneofDescriptorProto[]
struct OneofDescriptorProtoU5BU5D_t7FCEA5FFDD8AD6E0E9652A76B6FB5EBAE9CFE712;
// Google.Protobuf.Reflection.ServiceDescriptorProto[]
struct ServiceDescriptorProtoU5BU5D_t0C3796B8C36909E4D024429BED47976C33DA5A86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592;
// Google.Protobuf.Reflection.CustomOptions
struct CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D;
// Google.Protobuf.Reflection.DescriptorValidationException
struct DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D;
// Google.Protobuf.Reflection.EnumDescriptor
struct EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E;
// Google.Protobuf.Reflection.EnumDescriptorProto
struct EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344;
// Google.Protobuf.Reflection.EnumOptions
struct EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C;
// Google.Protobuf.Reflection.EnumValueDescriptor
struct EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372;
// Google.Protobuf.Reflection.EnumValueDescriptorProto
struct EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254;
// Google.Protobuf.Reflection.EnumValueOptions
struct EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020;
// System.Exception
struct Exception_t;
// Google.Protobuf.Reflection.FieldAccessorBase
struct FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4;
// Google.Protobuf.Reflection.FieldDescriptor
struct FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E;
// Google.Protobuf.Reflection.FieldDescriptorProto
struct FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99;
// Google.Protobuf.Reflection.FieldOptions
struct FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4;
// Google.Protobuf.Reflection.FileOptions
struct FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Google.Protobuf.Reflection.IDescriptor
struct IDescriptor_t7DB05C0E0D441ECC6ED64C00EEE1FE64C9C84B27;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Google.Protobuf.Reflection.IFieldAccessor
struct IFieldAccessor_t0F629A4029D7E802E3194891AA705EE4D7E2EA22;
// Google.Protobuf.IMessage
struct IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
// Google.Protobuf.Reflection.MapFieldAccessor
struct MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906;
// Google.Protobuf.Reflection.MessageOptions
struct MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A;
// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D;
// System.Reflection.MethodBase
struct MethodBase_t;
// Google.Protobuf.Reflection.MethodDescriptor
struct MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96;
// Google.Protobuf.Reflection.MethodDescriptorProto
struct MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Google.Protobuf.Reflection.MethodOptions
struct MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7;
// Google.Protobuf.Reflection.OneofAccessor
struct OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073;
// Google.Protobuf.Reflection.OneofDescriptor
struct OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC;
// Google.Protobuf.Reflection.OneofDescriptorProto
struct OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A;
// Google.Protobuf.Reflection.OneofOptions
struct OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF;
// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC;
// Google.Protobuf.Reflection.PackageDescriptor
struct PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// Google.Protobuf.Reflection.RepeatedFieldAccessor
struct RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE;
// Google.Protobuf.Reflection.ServiceDescriptorProto
struct ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438;
// Google.Protobuf.Reflection.ServiceOptions
struct ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334;
// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077;
// Google.Protobuf.Reflection.SourceCodeInfo
struct SourceCodeInfo_tF28F63303F10F22EBC7E7E874B60250DAA494143;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.Protobuf.Reflection.EnumDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09;
// Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A;
// Google.Protobuf.Reflection.MessageDescriptor/<>c
struct U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726;
// Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl
struct BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl
struct BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl
struct BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA;
// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl
struct BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2;
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper
struct IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6;
// Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2;
// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB;
// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptorReflection_t4B4D036458780DB7F635EEBA03862C2DF7485791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDescriptor_t7DB05C0E0D441ECC6ED64C00EEE1FE64C9C84B27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t68F5A27EE65409E27999177803534A3D9708E03B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6DDB4A3EE2CF2F2D9E20BA82ED645D522FC7C02F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t898B7976CAE5D33C1622374D2775A0163540BD49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t644DE6CCB5DEEFAB8C51145F7F385B5CCAD00BA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6644B6D12698554DCC2B0033A9F63423A9DCCE04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC133879EE4DE28AA1E795779EEAB7FFB6DFB65C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t72D63DEDFD3D09D9D034239EC2954718F7FCDB68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidProtocolBufferException_t43CA2E0CAEA8A4C3E9C5E09C0FB6FCA23CEB4927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t64981EE12A2A370C5000034039B00D57761431A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A029722E55AC589CC837C0D437E8F93124EDCF9;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral12FC0BF60BCE54234CA58CFD037BD8E5ADE3F2FB;
IL2CPP_EXTERN_C String_t* _stringLiteral16F6180B4C8945702AF299EB1C9BC25E2B0B2062;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54;
IL2CPP_EXTERN_C String_t* _stringLiteral1F2DC0198377AC41D3D4C8A05CF3EB229F1EB6C2;
IL2CPP_EXTERN_C String_t* _stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90;
IL2CPP_EXTERN_C String_t* _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA;
IL2CPP_EXTERN_C String_t* _stringLiteral352DC1AD46B06976FE1F09D69AD2AE07BA1C912F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B;
IL2CPP_EXTERN_C String_t* _stringLiteral406B9381DC587706B87B2DA1065E6CD50CD537F9;
IL2CPP_EXTERN_C String_t* _stringLiteral49B6C82A63AD64BA0DB80BE70F64375BD09B00B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3;
IL2CPP_EXTERN_C String_t* _stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4;
IL2CPP_EXTERN_C String_t* _stringLiteral6919B813002E982425DEA31BB0B4B39B80D0DD1C;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793;
IL2CPP_EXTERN_C String_t* _stringLiteral730A568E1D2D29F3D42AACEA8E360D92455473B7;
IL2CPP_EXTERN_C String_t* _stringLiteral7F6EBD2865CE2FCCB1136CB39B9E6777A5F4777C;
IL2CPP_EXTERN_C String_t* _stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3;
IL2CPP_EXTERN_C String_t* _stringLiteral8287231C522EC5240BB4762F274EAA67AE5E8F2A;
IL2CPP_EXTERN_C String_t* _stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78;
IL2CPP_EXTERN_C String_t* _stringLiteral90D3DE4EC3FA61ABB0FFC58A9BE7C3F9876A4404;
IL2CPP_EXTERN_C String_t* _stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3;
IL2CPP_EXTERN_C String_t* _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565;
IL2CPP_EXTERN_C String_t* _stringLiteralA148ED3BE9EB55581A21B53F1B203523F1D5918E;
IL2CPP_EXTERN_C String_t* _stringLiteralA19DAAB22B0AE3CE6FDE25115E86465DA1B818F0;
IL2CPP_EXTERN_C String_t* _stringLiteralA5ECAF58C726838F7BCCD69FFB3D963BC19324DF;
IL2CPP_EXTERN_C String_t* _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC;
IL2CPP_EXTERN_C String_t* _stringLiteralA9233D8C418C04829410724511B59AEC0EF627BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAA2199D3FAB3E9A0592694D9E1A42317C06006B4;
IL2CPP_EXTERN_C String_t* _stringLiteralABF2FC26E970A72F0697992EDABFBBC779D23F79;
IL2CPP_EXTERN_C String_t* _stringLiteralB7012EBD7A52FFE2177DD7A499A4226405016ACB;
IL2CPP_EXTERN_C String_t* _stringLiteralBC412FC48405DE7155E805AFABF259900F56B265;
IL2CPP_EXTERN_C String_t* _stringLiteralBE399D4853E66A0E2DC864D4936E152C63ABAF4B;
IL2CPP_EXTERN_C String_t* _stringLiteralBF2572217AFE5A8599667EB3119CDA220CCD2883;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC735ABBBA0A4054E66CE20DF45D76FB73FAFF691;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8;
IL2CPP_EXTERN_C String_t* _stringLiteralD25F906D9B73DA2DEB38278894A7AE0689907246;
IL2CPP_EXTERN_C String_t* _stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A;
IL2CPP_EXTERN_C String_t* _stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE8151ACC23B614309271528820B9A31B990F4567;
IL2CPP_EXTERN_C String_t* _stringLiteralEE5C2B16A9CD82174DC683DB24DD281DCF3F47D3;
IL2CPP_EXTERN_C String_t* _stringLiteralEE5D19E1394019EFCC5049242F23E76C0F54F6C9;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF76B35125DCAA786F5B5DD1B0ACE410CC04FE83B;
IL2CPP_EXTERN_C String_t* _stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C;
IL2CPP_EXTERN_C String_t* _stringLiteralFD4BF78B506AF95C9D9DE8C8B3E0BC4922706861;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorPool_FindSymbol_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mA5137600BEA6DADC95287768FC2854239092CB19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_mFB7C9089EC21195DA0BECEDC7D98B9E954A6C827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_mF9DC235EACD0435D6754F4D77F9F17874EFD9762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mDE7883325426DA31B58872DB67D01EA9C63CCFEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m26AEE0AD695C5BDFECFC0E36CF9D665A14F58616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m48FBBF19C23A2F3D0A1EABC7A905D10949AB9DB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m5E01D5F8513D05839423BA6A99ACA6BEDEDE51EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DescriptorUtil_ConvertAndMakeReadOnly_TisServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438_TisServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_mD73A25E0370E4FFAAE4E55041BFC75D881CFCBBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m131DA44ABC43C30B8DF2E02F9115B2576BD29ACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF28567A5499A76FFE6033CB7B95E71A09814F38A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m923BF8D683CB9B551CB82F5EF7B406905600507F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumDescriptor__ctor_m5DF396F94AFB86FE46AC0D53FDCBAE16DC910FBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m433BEFD6923E79FF4AA0B787B223EA2D9D12E32F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m0FE4D834B3E610A3B46B0513F346ACFFB6BC6FDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m01CE22040E1AF9A88B8E460C2499E214C28FD2E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCollection_get_Item_m052B310D1DD599FD9B73016EA71F407461C87799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCollection_get_Item_mAB58D7A6EBCB6CC402484347DEA6DAB1EAD2D9BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldDescriptor_CompareTo_mBBD6DE332D71AC4FCAB442D421A1CA81C89CED58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldDescriptor_CreateAccessor_mF8642CDF5D139E375E004978486A3497B7E3FB07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldDescriptor_GetFieldTypeFromProtoType_mDB711FAE9E7F86350002629E32223ED76B3337DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldDescriptor__ctor_m691730DD44930E89A8F7218A20B8E3A51336DF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldDescriptor_get_EnumType_m408E39BDE6C4A08442F1094C98D2DA598A171A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldDescriptor_get_MessageType_m1B2CA889B58B1234702721DC106977CA4C9E4622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileDescriptor_BuildFrom_m6AC7E2163109EB8702745047EEB5FB6DAC8E43FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileDescriptor_DeterminePublicDependencies_m677FD08FF37563DFF18071AE81258915F8FAD464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileDescriptor_ForceReflectionInitialization_TisCardinality_t00E453F3CF489DBF55358DB554CCA43F4FE566C1_m0C56BEC960663A209D833768EE2BFAE3F7BAABB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileDescriptor_ForceReflectionInitialization_TisKindOneofCase_t69785E0445F1588A4F091A933CD0C7F55E6FCB56_mA76C18DC99C5A65B1E8315951A7246CF139D27E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileDescriptor_ForceReflectionInitialization_TisKind_tB8792E171EE23EE9315163CC75415FE8A46C2AE4_m47C79C7143F941829FC954945941E0542E1EFEAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileDescriptor_ForceReflectionInitialization_TisNullValue_t5D4C6CD193421C6E0654AD7F909C38AB4D914891_m2C91FD6908FBF19E287839DDBF3E900195D752D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileDescriptor_ForceReflectionInitialization_TisSyntax_tE267A4E4C92CCB16CA047F75E57B72F185DDD7F9_m8B6656389C9D558ED7E8B66857EAF4631F623BE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileDescriptor_FromGeneratedCode_m53EE79143A40F13ECCE827E2F3E6DA01206950E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileDescriptor_U3C_ctorU3Eb__1_2_m2B13EA282FCF353C70BB12AE922462F5084415D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m381F0355B9A3F3034ACE3A9564BC38C7A0916B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5694B8C17080DC391E3E246F2225BE78DAA40B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapFieldAccessor_SetValue_m8D2215877377E1F8C78F69B39D58D8BF2CCAC798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1_ParseFrom_mDB05C51FC30FB700344433E3AD634AA43F29F945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneofAccessor__ctor_mFE344A0083D58B6EE27BAE916D3CDD379E21113D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_mBB1A4D0B911C15BB41A3F69EEA2CAA941E2B0363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m05B72494D6531BC825C70D29797F22EDDB6F1762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisString_t_mCBD3F1C158AD3A2A5A42D0D1FC734B2B0DB38B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1__ctor_m221A63BD59DA122E0B62C1AD04C36EAFF27C73AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_mE5A8F25FECCA3E0D5DCAEE05755B1D9889ECD0DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD68EA074998649C888551558073D09F0996E48D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAF95B4E34B5C325CB18690B72CAAE8665295099D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50ED82CC561126952DE4D87FCD91E8CE566E162E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7A30A5A5AE5ED0A9978DDE3A4DE504518A730B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6ACD67B6DBD4A96067D3C121AA9EB5089B3E903A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m475C6827501BF3E25EC4E8E68497401B755FDF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m0B0E9C808715A59763E3EAEAE8B31B211B2FA770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mF7A6EBF954694CFE18F4BBC71F1EF6787CC75D3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2BF1C3C374C4512320C150869A641B7963CCB2B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mC0F4798FFCC84F8F4289DEA74640C87929B28D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m041828CB415836196D206D255B60CF55BF442581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_m5399D417FF9BDEEE87B9290D92A1742CE0990743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3800F56921267EE1B89F08D37FEC61D98B151E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisString_t_mC1687DD93A592C947FCF29E8C76DA72495E4E00A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m40832FD0837B387AE4FFBA4F57114908CA9D6673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0421571EC4FC72ABAA77FE2501A4C134AA56487A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedFieldAccessor_SetValue_m409AC2667F08C82444547F454C86100883D2DF5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Count_m8036806C568C33FA10BB217BC3C38D43E49FC996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Count_mA0298EA3DB42DB62CE6E3A358C3DCDA1F0E727CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Count_mB34633071167B2DC07F9490964996552D8D62165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Count_mF5A71D406A6CC9A751CEC4A6BDBC443C59BAF8DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Item_m7664D803BA3EABB40CB97EF021076A294D555754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Item_mB6168B8598D5CE7E89ABEED2F5938CA2E5151B33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamExtensions_CopyTo_mFBC3A353AE75E819478D52FE8F8C3C24C75765AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFromMessagesU3Eb__9_0_m503DDED16CF919240A19D29A2A8B17E2E4F55644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__4_4_mC9A689081510F95D0EFE3892B2828040DE70EA0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__0_m569CE14BC6D7BDFCE7E5E3696DCF8E9A5D9FDCF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__1_mB0808FCE98EE03664FB2977C3189C320468E0DE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m41D58494707A4B3EF6DD86221D07F42C5517B3D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC2FCD36B70CE2EF303083CBB57F0622579EED5FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m2D20DB923C51DD1E3C08CD792B40385314026E30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mFF9BA6EEFE068F054619A2FDA75E12840AFBF97D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__1_m32DD9584814C82640DD629EEBCEE38FF8E193504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__2_m10EEC948AC8C6C6C96DA79996ECDEFC3F5E54139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__3_m9AE10770D9E560FFF160EA6B8D840C22D05CE601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectionHelper_2_t15D2105C58D73327CC9E1A4BEB87E4A8E941B515_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81;
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F;
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89;
struct MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4A0F18D0C381A64C983D00FFFB9954A47B3F12AA* ____entries_1;
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
	KeyCollection_t021EFE20A70B7F8FA6AB510DD471E8A9FC593CA4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0B68AF9EDE41398214B111550EEB1F7F24D37AB6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FileDescriptor>
struct Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8C1745C13E395B47C1F6CC94902A6645C849A0A3* ____entries_1;
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
	KeyCollection_tEA6E7E05B61C5B266CBDA5E1FD527526F1DB1619* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9913AEC2521F2AD7ACE2D5A354035AC11F1A568F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>
struct Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA818ACE9564737BABC35DAFB6FD643DF96DB5A57* ____entries_1;
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
	KeyCollection_tFB20A0E74840A072063C53665F19BDF6081C04A3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t15F16639F81ED544F36FFDBF6ED43F0C1ED07AE8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>
struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694  : public RuntimeObject
{
};

struct EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203  : public RuntimeObject
{
};

struct EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Double>
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB  : public RuntimeObject
{
};

struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};

struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer_0;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
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

// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>
struct List_1_t64981EE12A2A370C5000034039B00D57761431A3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t64981EE12A2A370C5000034039B00D57761431A3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.Protobuf.Reflection.FileDescriptor>
struct List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FileDescriptor>
struct ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// Google.Protobuf.Collections.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> Google.Protobuf.Collections.ReadOnlyDictionary`2::wrapped
	RuntimeObject* ___wrapped_0;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto>
struct RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	DescriptorProtoU5BU5D_t627D9BA27EBB14ADC5EA0BA8166939B274782152* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t915621445F39410B66ADE17141012D47D7448DFB* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	DescriptorProtoU5BU5D_t627D9BA27EBB14ADC5EA0BA8166939B274782152* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto>
struct RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	EnumDescriptorProtoU5BU5D_tF77E21156336C7C95BAC350457E7818D4485A122* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t7121A20DD0C00861155D15449502A86E19ABBBDF* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	EnumDescriptorProtoU5BU5D_tF77E21156336C7C95BAC350457E7818D4485A122* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>
struct RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	EnumValueDescriptorProtoU5BU5D_t3979F6D04900F8D68160DC08FF68AF41B556FA51* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t1C9AD6B59E71E694DAD99FE3937C2B0E55416D7B* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	EnumValueDescriptorProtoU5BU5D_t3979F6D04900F8D68160DC08FF68AF41B556FA51* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto>
struct RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	FieldDescriptorProtoU5BU5D_t1E236065292831149EC4285422D641A7878068A3* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t9DD3C5B6D700A05D514621A4C6FF2C2AD64D5AC9* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	FieldDescriptorProtoU5BU5D_t1E236065292831149EC4285422D641A7878068A3* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<System.Int32>
struct RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto>
struct RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	MethodDescriptorProtoU5BU5D_t1E5410DB2CA2B54451619E965FE330FD5C356AD1* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t5A1DC50B8DF80E0DE40F028FAEAA277E1F7D8094* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	MethodDescriptorProtoU5BU5D_t1E5410DB2CA2B54451619E965FE330FD5C356AD1* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto>
struct RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	OneofDescriptorProtoU5BU5D_t7FCEA5FFDD8AD6E0E9652A76B6FB5EBAE9CFE712* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tA1732808B62C77F60F915CE60E339EBE4BD6F0AD* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	OneofDescriptorProtoU5BU5D_t7FCEA5FFDD8AD6E0E9652A76B6FB5EBAE9CFE712* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.ServiceDescriptorProto>
struct RepeatedField_1_t7DD3B3236E6DD9A822E98695E3F915473E7927C0  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	ServiceDescriptorProtoU5BU5D_t0C3796B8C36909E4D024429BED47976C33DA5A86* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_t7DD3B3236E6DD9A822E98695E3F915473E7927C0_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t0B3ACADF5871E317130DD3DEAC00528AB7D78070* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	ServiceDescriptorProtoU5BU5D_t0C3796B8C36909E4D024429BED47976C33DA5A86* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<System.String>
struct RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

struct RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyArray_1;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592  : public RuntimeObject
{
	// System.Byte[] Google.Protobuf.ByteString::bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes_1;
};

struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_StaticFields
{
	// Google.Protobuf.ByteString Google.Protobuf.ByteString::empty
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___empty_0;
};

// Google.Protobuf.Reflection.CustomOptions
struct CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Google.Protobuf.Reflection.CustomOptions/FieldValue>> Google.Protobuf.Reflection.CustomOptions::valuesByField
	Dictionary_2_tB73BABFE3DF776A8C14D8C788E5D126610BE7E8E* ___valuesByField_1;
};

struct CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields
{
	// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.CustomOptions::Empty
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ___Empty_0;
};

// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::file
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::fullName
	String_t* ___fullName_1;
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::index
	int32_t ___index_2;
};

// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.IDescriptor> Google.Protobuf.Reflection.DescriptorPool::descriptorsByName
	RuntimeObject* ___descriptorsByName_0;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.DescriptorPool::fieldsByNumber
	RuntimeObject* ___fieldsByNumber_1;
	// System.Collections.Generic.IDictionary`2<Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair,Google.Protobuf.Reflection.EnumValueDescriptor> Google.Protobuf.Reflection.DescriptorPool::enumValuesByNumber
	RuntimeObject* ___enumValuesByNumber_2;
	// System.Collections.Generic.HashSet`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.DescriptorPool::dependencies
	HashSet_1_t57BDC9706421688AAA2C822E54970543F03C1FF8* ___dependencies_3;
};

struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94_StaticFields
{
	// System.Text.RegularExpressions.Regex Google.Protobuf.Reflection.DescriptorPool::ValidationRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___ValidationRegex_4;
};

// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.DescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.DescriptorProto::name_
	String_t* ___name__3;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::field_
	RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* ___field__6;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::extension_
	RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* ___extension__9;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::nestedType_
	RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* ___nestedType__12;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::enumType_
	RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* ___enumType__15;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::extensionRange_
	RepeatedField_1_t0E899A6F37E8797AEF754CE965684FD651FC2788* ___extensionRange__18;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::oneofDecl_
	RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* ___oneofDecl__21;
	// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.DescriptorProto::options_
	MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* ___options__23;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange> Google.Protobuf.Reflection.DescriptorProto::reservedRange_
	RepeatedField_1_tE6CF9D5A326C77D116E95AAC77621BF9905ACB87* ___reservedRange__26;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.DescriptorProto::reservedName_
	RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* ___reservedName__29;
};

struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_parser
	MessageParser_1_tC828A5AED52A2A1A6B443C129AB81159E952AA23* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_field_codec
	FieldCodec_1_t21DF84ECEAE5A588438084C718EE0697F7495FD3* ____repeated_field_codec_5;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_extension_codec
	FieldCodec_1_t21DF84ECEAE5A588438084C718EE0697F7495FD3* ____repeated_extension_codec_8;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_nestedType_codec
	FieldCodec_1_tAACC01F60039098F4E012BA2ECF3C95C55F9655C* ____repeated_nestedType_codec_11;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_enumType_codec
	FieldCodec_1_t26302C0D19596A86EAA32957047DC93218A3EF0A* ____repeated_enumType_codec_14;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ExtensionRange> Google.Protobuf.Reflection.DescriptorProto::_repeated_extensionRange_codec
	FieldCodec_1_t5558E926F40278AAC6C3AD93D265C4AA554DCD16* ____repeated_extensionRange_codec_17;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::_repeated_oneofDecl_codec
	FieldCodec_1_tD8B477E6E14F4C5A8C924507FE2973CAF1B52250* ____repeated_oneofDecl_codec_20;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto/Types/ReservedRange> Google.Protobuf.Reflection.DescriptorProto::_repeated_reservedRange_codec
	FieldCodec_1_t90AB10B3ED8AC4DE44A947D1CF3329936C7132AB* ____repeated_reservedRange_codec_25;
	// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.Reflection.DescriptorProto::_repeated_reservedName_codec
	FieldCodec_1_tB7730C8D2D4ADF6392F4D474DE844629557D8ABA* ____repeated_reservedName_codec_28;
};

// Google.Protobuf.Reflection.DescriptorUtil
struct DescriptorUtil_t2C29F7354322B70A99D42D2C949E46587E7E6539  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.EnumDescriptorProto
struct EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.EnumDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.EnumDescriptorProto::name_
	String_t* ___name__3;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::value_
	RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9* ___value__6;
	// Google.Protobuf.Reflection.EnumOptions Google.Protobuf.Reflection.EnumDescriptorProto::options_
	EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C* ___options__8;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange> Google.Protobuf.Reflection.EnumDescriptorProto::reservedRange_
	RepeatedField_1_tBFF9DEF57804C2B6D88A9389B6112A4C07A87D1E* ___reservedRange__11;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.EnumDescriptorProto::reservedName_
	RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* ___reservedName__14;
};

struct EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::_parser
	MessageParser_1_t350C9B91DAEAF8C30A89B29EC781797549504BC3* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_value_codec
	FieldCodec_1_t20A177182A818B7310FEEA7DF9848B0F4DFBB604* ____repeated_value_codec_5;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto/Types/EnumReservedRange> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_reservedRange_codec
	FieldCodec_1_tCF98451FF0BD2005783BAC289042A4FAE6D865AF* ____repeated_reservedRange_codec_10;
	// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.Reflection.EnumDescriptorProto::_repeated_reservedName_codec
	FieldCodec_1_tB7730C8D2D4ADF6392F4D474DE844629557D8ABA* ____repeated_reservedName_codec_13;
};

// Google.Protobuf.Reflection.EnumOptions
struct EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.EnumOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.EnumOptions::<CustomOptions>k__BackingField
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ___U3CCustomOptionsU3Ek__BackingField_2;
	// System.Boolean Google.Protobuf.Reflection.EnumOptions::allowAlias_
	bool ___allowAlias__4;
	// System.Boolean Google.Protobuf.Reflection.EnumOptions::deprecated_
	bool ___deprecated__6;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.EnumOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__9;
};

struct EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumOptions> Google.Protobuf.Reflection.EnumOptions::_parser
	MessageParser_1_t5C666B1F0D4A0614E4FD9D9F05AE1F0CF78D5D1F* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.EnumOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_8;
};

// Google.Protobuf.Reflection.EnumValueDescriptorProto
struct EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.EnumValueDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.EnumValueDescriptorProto::name_
	String_t* ___name__3;
	// System.Int32 Google.Protobuf.Reflection.EnumValueDescriptorProto::number_
	int32_t ___number__5;
	// Google.Protobuf.Reflection.EnumValueOptions Google.Protobuf.Reflection.EnumValueDescriptorProto::options_
	EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020* ___options__7;
};

struct EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumValueDescriptorProto::_parser
	MessageParser_1_t91FD9AA10CCFAB724742ADA5711F4F05B48032F1* ____parser_0;
};

// Google.Protobuf.Reflection.EnumValueOptions
struct EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.EnumValueOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.EnumValueOptions::<CustomOptions>k__BackingField
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ___U3CCustomOptionsU3Ek__BackingField_2;
	// System.Boolean Google.Protobuf.Reflection.EnumValueOptions::deprecated_
	bool ___deprecated__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.EnumValueOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__7;
};

struct EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.EnumValueOptions> Google.Protobuf.Reflection.EnumValueOptions::_parser
	MessageParser_1_t7C3DE4ADB3D616E5DEF3C3F475700DE6F2FF1BC7* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.EnumValueOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_6;
};

// Google.Protobuf.Reflection.FieldAccessorBase
struct FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4  : public RuntimeObject
{
	// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.FieldAccessorBase::getValueDelegate
	Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* ___getValueDelegate_0;
	// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.FieldAccessorBase::descriptor
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor_1;
};

// Google.Protobuf.Reflection.FieldDescriptorProto
struct FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.FieldDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::name_
	String_t* ___name__3;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::number_
	int32_t ___number__5;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Label Google.Protobuf.Reflection.FieldDescriptorProto::label_
	int32_t ___label__7;
	// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type Google.Protobuf.Reflection.FieldDescriptorProto::type_
	int32_t ___type__9;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::typeName_
	String_t* ___typeName__11;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::extendee_
	String_t* ___extendee__13;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::defaultValue_
	String_t* ___defaultValue__15;
	// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::oneofIndex_
	int32_t ___oneofIndex__17;
	// System.String Google.Protobuf.Reflection.FieldDescriptorProto::jsonName_
	String_t* ___jsonName__19;
	// Google.Protobuf.Reflection.FieldOptions Google.Protobuf.Reflection.FieldDescriptorProto::options_
	FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* ___options__21;
};

struct FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.FieldDescriptorProto::_parser
	MessageParser_1_tF4DAA81C6A6F29BEC553A6676E86AC33118C52E3* ____parser_0;
};

// Google.Protobuf.Reflection.FieldOptions
struct FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.FieldOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.FieldOptions::<CustomOptions>k__BackingField
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ___U3CCustomOptionsU3Ek__BackingField_2;
	// Google.Protobuf.Reflection.FieldOptions/Types/CType Google.Protobuf.Reflection.FieldOptions::ctype_
	int32_t ___ctype__4;
	// System.Boolean Google.Protobuf.Reflection.FieldOptions::packed_
	bool ___packed__6;
	// Google.Protobuf.Reflection.FieldOptions/Types/JSType Google.Protobuf.Reflection.FieldOptions::jstype_
	int32_t ___jstype__8;
	// System.Boolean Google.Protobuf.Reflection.FieldOptions::lazy_
	bool ___lazy__10;
	// System.Boolean Google.Protobuf.Reflection.FieldOptions::deprecated_
	bool ___deprecated__12;
	// System.Boolean Google.Protobuf.Reflection.FieldOptions::weak_
	bool ___weak__14;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.FieldOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__17;
};

struct FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FieldOptions> Google.Protobuf.Reflection.FieldOptions::_parser
	MessageParser_1_t175EBCA1F4A347A30EBDDEA00F557EF4B3805352* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.FieldOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_16;
};

// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___U3CProtoU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_5;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___U3CSerializedDataU3Ek__BackingField_6;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* ___U3CDescriptorPoolU3Ek__BackingField_7;
};

// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.FileDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.FileDescriptorProto::name_
	String_t* ___name__3;
	// System.String Google.Protobuf.Reflection.FileDescriptorProto::package_
	String_t* ___package__5;
	// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.FileDescriptorProto::dependency_
	RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* ___dependency__8;
	// Google.Protobuf.Collections.RepeatedField`1<System.Int32> Google.Protobuf.Reflection.FileDescriptorProto::publicDependency_
	RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* ___publicDependency__11;
	// Google.Protobuf.Collections.RepeatedField`1<System.Int32> Google.Protobuf.Reflection.FileDescriptorProto::weakDependency_
	RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* ___weakDependency__14;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::messageType_
	RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* ___messageType__17;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::enumType_
	RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* ___enumType__20;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.ServiceDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::service_
	RepeatedField_1_t7DD3B3236E6DD9A822E98695E3F915473E7927C0* ___service__23;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::extension_
	RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* ___extension__26;
	// Google.Protobuf.Reflection.FileOptions Google.Protobuf.Reflection.FileDescriptorProto::options_
	FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4* ___options__28;
	// Google.Protobuf.Reflection.SourceCodeInfo Google.Protobuf.Reflection.FileDescriptorProto::sourceCodeInfo_
	SourceCodeInfo_tF28F63303F10F22EBC7E7E874B60250DAA494143* ___sourceCodeInfo__30;
	// System.String Google.Protobuf.Reflection.FileDescriptorProto::syntax_
	String_t* ___syntax__32;
};

struct FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FileDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::_parser
	MessageParser_1_t3B3CFF200F72B92CDC0FCC070921741B940A1EC0* ____parser_0;
	// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.Reflection.FileDescriptorProto::_repeated_dependency_codec
	FieldCodec_1_tB7730C8D2D4ADF6392F4D474DE844629557D8ABA* ____repeated_dependency_codec_7;
	// Google.Protobuf.FieldCodec`1<System.Int32> Google.Protobuf.Reflection.FileDescriptorProto::_repeated_publicDependency_codec
	FieldCodec_1_tB6976C5B1322FACED91040BA5E228C81269BF895* ____repeated_publicDependency_codec_10;
	// Google.Protobuf.FieldCodec`1<System.Int32> Google.Protobuf.Reflection.FileDescriptorProto::_repeated_weakDependency_codec
	FieldCodec_1_tB6976C5B1322FACED91040BA5E228C81269BF895* ____repeated_weakDependency_codec_13;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::_repeated_messageType_codec
	FieldCodec_1_tAACC01F60039098F4E012BA2ECF3C95C55F9655C* ____repeated_messageType_codec_16;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::_repeated_enumType_codec
	FieldCodec_1_t26302C0D19596A86EAA32957047DC93218A3EF0A* ____repeated_enumType_codec_19;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.ServiceDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::_repeated_service_codec
	FieldCodec_1_t1BC621829C6CA44A4CE155CE8636D91E54AFFC7E* ____repeated_service_codec_22;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::_repeated_extension_codec
	FieldCodec_1_t21DF84ECEAE5A588438084C718EE0697F7495FD3* ____repeated_extension_codec_25;
};

// Google.Protobuf.Reflection.FileOptions
struct FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.FileOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.FileOptions::<CustomOptions>k__BackingField
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ___U3CCustomOptionsU3Ek__BackingField_2;
	// System.String Google.Protobuf.Reflection.FileOptions::javaPackage_
	String_t* ___javaPackage__4;
	// System.String Google.Protobuf.Reflection.FileOptions::javaOuterClassname_
	String_t* ___javaOuterClassname__6;
	// System.Boolean Google.Protobuf.Reflection.FileOptions::javaMultipleFiles_
	bool ___javaMultipleFiles__8;
	// System.Boolean Google.Protobuf.Reflection.FileOptions::javaGenerateEqualsAndHash_
	bool ___javaGenerateEqualsAndHash__10;
	// System.Boolean Google.Protobuf.Reflection.FileOptions::javaStringCheckUtf8_
	bool ___javaStringCheckUtf8__12;
	// Google.Protobuf.Reflection.FileOptions/Types/OptimizeMode Google.Protobuf.Reflection.FileOptions::optimizeFor_
	int32_t ___optimizeFor__14;
	// System.String Google.Protobuf.Reflection.FileOptions::goPackage_
	String_t* ___goPackage__16;
	// System.Boolean Google.Protobuf.Reflection.FileOptions::ccGenericServices_
	bool ___ccGenericServices__18;
	// System.Boolean Google.Protobuf.Reflection.FileOptions::javaGenericServices_
	bool ___javaGenericServices__20;
	// System.Boolean Google.Protobuf.Reflection.FileOptions::pyGenericServices_
	bool ___pyGenericServices__22;
	// System.Boolean Google.Protobuf.Reflection.FileOptions::phpGenericServices_
	bool ___phpGenericServices__24;
	// System.Boolean Google.Protobuf.Reflection.FileOptions::deprecated_
	bool ___deprecated__26;
	// System.Boolean Google.Protobuf.Reflection.FileOptions::ccEnableArenas_
	bool ___ccEnableArenas__28;
	// System.String Google.Protobuf.Reflection.FileOptions::objcClassPrefix_
	String_t* ___objcClassPrefix__30;
	// System.String Google.Protobuf.Reflection.FileOptions::csharpNamespace_
	String_t* ___csharpNamespace__32;
	// System.String Google.Protobuf.Reflection.FileOptions::swiftPrefix_
	String_t* ___swiftPrefix__34;
	// System.String Google.Protobuf.Reflection.FileOptions::phpClassPrefix_
	String_t* ___phpClassPrefix__36;
	// System.String Google.Protobuf.Reflection.FileOptions::phpNamespace_
	String_t* ___phpNamespace__38;
	// System.String Google.Protobuf.Reflection.FileOptions::phpMetadataNamespace_
	String_t* ___phpMetadataNamespace__40;
	// System.String Google.Protobuf.Reflection.FileOptions::rubyPackage_
	String_t* ___rubyPackage__42;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.FileOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__45;
};

struct FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FileOptions> Google.Protobuf.Reflection.FileOptions::_parser
	MessageParser_1_t5AAE32368BB33DE8D6FCA93800B1B50C18F32C06* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.FileOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_44;
};

// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E  : public RuntimeObject
{
	// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_2;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_3;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<PropertyNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CPropertyNamesU3Ek__BackingField_4;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<OneofNames>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COneofNamesU3Ek__BackingField_5;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedTypes>k__BackingField
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___U3CNestedTypesU3Ek__BackingField_6;
	// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedEnums>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CNestedEnumsU3Ek__BackingField_7;
};

struct GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields
{
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyNames_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyCodeInfo
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___EmptyCodeInfo_1;
};

// Google.Protobuf.Collections.Lists
struct Lists_t5F1919E3FD092D0F7E508D57A72269962475E1B7  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.MessageOptions
struct MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MessageOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MessageOptions::<CustomOptions>k__BackingField
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ___U3CCustomOptionsU3Ek__BackingField_2;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::messageSetWireFormat_
	bool ___messageSetWireFormat__4;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::noStandardDescriptorAccessor_
	bool ___noStandardDescriptorAccessor__6;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::deprecated_
	bool ___deprecated__8;
	// System.Boolean Google.Protobuf.Reflection.MessageOptions::mapEntry_
	bool ___mapEntry__10;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MessageOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__13;
};

struct MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MessageOptions> Google.Protobuf.Reflection.MessageOptions::_parser
	MessageParser_1_tFFEB1180EAC16752D1427BFCDDC4B2505E7E6825* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MessageOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_12;
};

// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D  : public RuntimeObject
{
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918* ___factory_0;
	// System.Boolean Google.Protobuf.MessageParser::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_1;
};

// Google.Protobuf.Reflection.MethodDescriptorProto
struct MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MethodDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::name_
	String_t* ___name__3;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::inputType_
	String_t* ___inputType__5;
	// System.String Google.Protobuf.Reflection.MethodDescriptorProto::outputType_
	String_t* ___outputType__7;
	// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptorProto::options_
	MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* ___options__9;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::clientStreaming_
	bool ___clientStreaming__11;
	// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::serverStreaming_
	bool ___serverStreaming__13;
};

struct MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.MethodDescriptorProto::_parser
	MessageParser_1_tA100AB071B3DCDB92D3B415C6CA42ADEF0E41B7C* ____parser_0;
};

// Google.Protobuf.Compatibility.MethodInfoExtensions
struct MethodInfoExtensions_t2B1E8B7DD42937977A0DAF83FF4E80653CD4440B  : public RuntimeObject
{
};

// Google.Protobuf.Reflection.MethodOptions
struct MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.MethodOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MethodOptions::<CustomOptions>k__BackingField
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ___U3CCustomOptionsU3Ek__BackingField_2;
	// System.Boolean Google.Protobuf.Reflection.MethodOptions::deprecated_
	bool ___deprecated__4;
	// Google.Protobuf.Reflection.MethodOptions/Types/IdempotencyLevel Google.Protobuf.Reflection.MethodOptions::idempotencyLevel_
	int32_t ___idempotencyLevel__6;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MethodOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__9;
};

struct MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.MethodOptions> Google.Protobuf.Reflection.MethodOptions::_parser
	MessageParser_1_tD087B27B49C43A6910639742980B8D26A13E7C22* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.MethodOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_8;
};

// Google.Protobuf.Reflection.OneofAccessor
struct OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073  : public RuntimeObject
{
	// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.OneofAccessor::caseDelegate
	Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* ___caseDelegate_0;
	// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.OneofAccessor::clearDelegate
	Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ___clearDelegate_1;
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::descriptor
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor_2;
};

// Google.Protobuf.Reflection.OneofDescriptorProto
struct OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.OneofDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.OneofDescriptorProto::name_
	String_t* ___name__3;
	// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptorProto::options_
	OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* ___options__5;
};

struct OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.OneofDescriptorProto::_parser
	MessageParser_1_tE7DD323B82F902A745394143FCD3A97DE59885FD* ____parser_0;
};

// Google.Protobuf.Reflection.OneofOptions
struct OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.OneofOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.OneofOptions::<CustomOptions>k__BackingField
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ___U3CCustomOptionsU3Ek__BackingField_2;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.OneofOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__5;
};

struct OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.OneofOptions> Google.Protobuf.Reflection.OneofOptions::_parser
	MessageParser_1_t521F874BA4869002851396C1D823B834193E6E28* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.OneofOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_4;
};

// Google.Protobuf.Reflection.PackageDescriptor
struct PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F  : public RuntimeObject
{
	// System.String Google.Protobuf.Reflection.PackageDescriptor::name
	String_t* ___name_0;
	// System.String Google.Protobuf.Reflection.PackageDescriptor::fullName
	String_t* ___fullName_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.PackageDescriptor::file
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file_2;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Google.Protobuf.Compatibility.PropertyInfoExtensions
struct PropertyInfoExtensions_tFAB30722B1843380D00947F428BA53D05429CF19  : public RuntimeObject
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers
struct ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09  : public RuntimeObject
{
};

struct ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
	// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableDoubleEqualityComparer>k__BackingField
	EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
	// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::<BitwiseNullableSingleEqualityComparer>k__BackingField
	EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
};

// Google.Protobuf.Reflection.ReflectionUtil
struct ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A  : public RuntimeObject
{
};

struct ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields
{
	// System.Type[] Google.Protobuf.Reflection.ReflectionUtil::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
	// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::<CanConvertEnumFuncToInt32Func>k__BackingField
	bool ___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1;
};

// Google.Protobuf.Reflection.ServiceDescriptorProto
struct ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.ServiceDescriptorProto::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::name_
	String_t* ___name__3;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::method_
	RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E* ___method__6;
	// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptorProto::options_
	ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* ___options__8;
};

struct ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::_parser
	MessageParser_1_tAB75DE67CDAFD27D5FD5D410F5C6DAFB79FEF1CE* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::_repeated_method_codec
	FieldCodec_1_tB268F98DDB08D3D7B86D4A773ADBB6C7BAA07058* ____repeated_method_codec_5;
};

// Google.Protobuf.Reflection.ServiceOptions
struct ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Google.Protobuf.Reflection.ServiceOptions::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.ServiceOptions::<CustomOptions>k__BackingField
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ___U3CCustomOptionsU3Ek__BackingField_2;
	// System.Boolean Google.Protobuf.Reflection.ServiceOptions::deprecated_
	bool ___deprecated__4;
	// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.ServiceOptions::uninterpretedOption_
	RepeatedField_1_tADEDC2A5667805E3FC722CCD2FBC72D15F57C3EB* ___uninterpretedOption__7;
};

struct ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.ServiceOptions> Google.Protobuf.Reflection.ServiceOptions::_parser
	MessageParser_1_tD751281EB3C202EB4829B26F67B05756385AF63B* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Google.Protobuf.Reflection.UninterpretedOption> Google.Protobuf.Reflection.ServiceOptions::_repeated_uninterpretedOption_codec
	FieldCodec_1_t031494A43485F8D802C8F4754808FB82BD28E950* ____repeated_uninterpretedOption_codec_6;
};

// Google.Protobuf.Compatibility.StreamExtensions
struct StreamExtensions_t81B080CC253FFA11CDC21A97C6D2A641AAB1FC33  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Google.Protobuf.Reflection.TypeRegistry
struct TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry::fullNameToMessageMap
	Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* ___fullNameToMessageMap_1;
};

struct TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::<Empty>k__BackingField
	TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* ___U3CEmptyU3Ek__BackingField_0;
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

// Google.Protobuf.Reflection.EnumDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.EnumDescriptor/<>c__DisplayClass4_0::file
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file_0;
	// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.EnumDescriptor/<>c__DisplayClass4_0::<>4__this
	EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* ___U3CU3E4__this_1;
};

// Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A  : public RuntimeObject
{
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass1_0::generatedCodeInfo
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo_0;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass1_0::<>4__this
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___U3CU3E4__this_1;
};

// Google.Protobuf.Reflection.MessageDescriptor/<>c
struct U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726  : public RuntimeObject
{
};

struct U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields
{
	// Google.Protobuf.Reflection.MessageDescriptor/<>c Google.Protobuf.Reflection.MessageDescriptor/<>c::<>9
	U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32> Google.Protobuf.Reflection.MessageDescriptor/<>c::<>9__4_4
	Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* ___U3CU3E9__4_4_1;
};

// Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0::file
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0::generatedCodeInfo
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo_1;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0::<>4__this
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CU3E4__this_2;
};

// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3  : public RuntimeObject
{
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::messageDescriptor
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor_0;
};

// Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::file
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file_0;
	// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::<>4__this
	ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* ___U3CU3E4__this_1;
};

// Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3  : public RuntimeObject
{
	// System.Object Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0::defaultValue
	RuntimeObject* ___defaultValue_0;
	// Google.Protobuf.Reflection.SingleFieldAccessor Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0::<>4__this
	SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* ___U3CU3E4__this_1;
};

// Google.Protobuf.Reflection.TypeRegistry/<>c
struct U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB  : public RuntimeObject
{
};

struct U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields
{
	// Google.Protobuf.Reflection.TypeRegistry/<>c Google.Protobuf.Reflection.TypeRegistry/<>c::<>9
	U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* ___U3CU3E9_0;
	// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.TypeRegistry/<>c::<>9__9_0
	Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* ___U3CU3E9__9_0_1;
};

// Google.Protobuf.Reflection.TypeRegistry/Builder
struct Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.TypeRegistry/Builder::types
	Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* ___types_0;
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.TypeRegistry/Builder::fileDescriptorNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___fileDescriptorNames_1;
};

// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FileDescriptorProto>
struct MessageParser_1_t3B3CFF200F72B92CDC0FCC070921741B940A1EC0  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t7B03B3B6ADEEE76A591A97BA25B46056ECF69D5C* ___factory_2;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Google.Protobuf.Reflection.EnumDescriptor
struct EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.EnumDescriptorProto Google.Protobuf.Reflection.EnumDescriptor::proto
	EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* ___proto_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.EnumDescriptor::containingType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___containingType_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptor> Google.Protobuf.Reflection.EnumDescriptor::values
	RuntimeObject* ___values_5;
	// System.Type Google.Protobuf.Reflection.EnumDescriptor::clrType
	Type_t* ___clrType_6;
};

// Google.Protobuf.Reflection.EnumValueDescriptor
struct EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.EnumValueDescriptor::enumDescriptor
	EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* ___enumDescriptor_3;
	// Google.Protobuf.Reflection.EnumValueDescriptorProto Google.Protobuf.Reflection.EnumValueDescriptor::proto
	EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* ___proto_4;
};

// Google.Protobuf.Reflection.FieldDescriptor
struct FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.FieldDescriptor::enumType
	EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* ___enumType_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::messageType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageType_4;
	// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::fieldType
	int32_t ___fieldType_5;
	// System.String Google.Protobuf.Reflection.FieldDescriptor::propertyName
	String_t* ___propertyName_6;
	// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::accessor
	RuntimeObject* ___accessor_7;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CContainingTypeU3Ek__BackingField_8;
	// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::<ContainingOneof>k__BackingField
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___U3CContainingOneofU3Ek__BackingField_9;
	// System.String Google.Protobuf.Reflection.FieldDescriptor::<JsonName>k__BackingField
	String_t* ___U3CJsonNameU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.FieldDescriptorProto Google.Protobuf.Reflection.FieldDescriptor::<Proto>k__BackingField
	FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* ___U3CProtoU3Ek__BackingField_11;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Google.Protobuf.Reflection.MapFieldAccessor
struct MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0  : public FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4
{
};

// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___U3CProtoU3Ek__BackingField_7;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_8;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CContainingTypeU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* ___U3CFieldsU3Ek__BackingField_11;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_14;
};

struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___WellKnownTypeNames_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// Google.Protobuf.Reflection.MethodDescriptor
struct MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::proto
	MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* ___proto_3;
	// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.MethodDescriptor::service
	ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* ___service_4;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::inputType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___inputType_5;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::outputType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___outputType_6;
};

// Google.Protobuf.Reflection.OneofDescriptor
struct OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.OneofDescriptorProto Google.Protobuf.Reflection.OneofDescriptor::proto
	OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* ___proto_3;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::containingType
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___containingType_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::fields
	RuntimeObject* ___fields_5;
	// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::accessor
	OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* ___accessor_6;
};

// Google.Protobuf.Reflection.OriginalNameAttribute
struct OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Google.Protobuf.Reflection.OriginalNameAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean Google.Protobuf.Reflection.OriginalNameAttribute::<PreferredAlias>k__BackingField
	bool ___U3CPreferredAliasU3Ek__BackingField_1;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// Google.Protobuf.Reflection.RepeatedFieldAccessor
struct RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0  : public FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4
{
};

// Google.Protobuf.Reflection.ServiceDescriptor
struct ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::proto
	ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ___proto_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor> Google.Protobuf.Reflection.ServiceDescriptor::methods
	RuntimeObject* ___methods_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Google.Protobuf.Reflection.SingleFieldAccessor
struct SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077  : public FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4
{
	// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.SingleFieldAccessor::setValueDelegate
	Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* ___setValueDelegate_2;
	// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.SingleFieldAccessor::clearDelegate
	Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ___clearDelegate_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_t390A99C8B135BD831E960FF1669F3E502B6726D9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t390A99C8B135BD831E960FF1669F3E502B6726D9__padding[44];
	};
};

// Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair
struct DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1 
{
	// System.Int32 Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::number
	int32_t ___number_0;
	// Google.Protobuf.Reflection.IDescriptor Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::descriptor
	RuntimeObject* ___descriptor_1;
};
// Native definition for P/Invoke marshalling of Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair
struct DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshaled_pinvoke
{
	int32_t ___number_0;
	RuntimeObject* ___descriptor_1;
};
// Native definition for COM marshalling of Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair
struct DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshaled_com
{
	int32_t ___number_0;
	RuntimeObject* ___descriptor_1;
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl
struct BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8  : public EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl
struct BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C  : public EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl
struct BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA  : public EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203
{
};

// Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl
struct BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2  : public EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA0FE1FFB7994264CC7B3DF722FA3F728F030F458  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tA0FE1FFB7994264CC7B3DF722FA3F728F030F458_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::CA6D43393CCBD523D8BC1CAC86DE8DC9F018B896
	__StaticArrayInitTypeSizeU3D44_t390A99C8B135BD831E960FF1669F3E502B6726D9 ___CA6D43393CCBD523D8BC1CAC86DE8DC9F018B896_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Google.Protobuf.Reflection.DescriptorValidationException
struct DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D  : public Exception_t
{
	// System.String Google.Protobuf.Reflection.DescriptorValidationException::name
	String_t* ___name_18;
	// System.String Google.Protobuf.Reflection.DescriptorValidationException::description
	String_t* ___description_19;
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

// System.Action`1<Google.Protobuf.IMessage>
struct Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<Google.Protobuf.IMessage,System.Object>
struct Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>
struct Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Int32>
struct Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.IMessage,System.Object>
struct Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>
struct Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>
struct IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>
struct IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumValueDescriptorProto,Google.Protobuf.Reflection.EnumValueDescriptor>
struct IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>
struct IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>
struct IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>
struct IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9  : public MulticastDelegate_t
{
};

// Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.ServiceDescriptor>
struct IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// Google.Protobuf.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t43CA2E0CAEA8A4C3E9C5E09C0FB6FCA23CEB4927  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F  : public RuntimeArray
{
	ALIGN_FIELD (8) FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* m_Items[1];

	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89  : public RuntimeArray
{
	ALIGN_FIELD (8) GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* m_Items[1];

	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
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
// Google.Protobuf.Reflection.FieldDescriptor[]
struct FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* m_Items[1];

	inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.MessageDescriptor[]
struct MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818  : public RuntimeArray
{
	ALIGN_FIELD (8) MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* m_Items[1];

	inline MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* value)
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


// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared (IndexedConverter_2_t3F40E49B0902E46EF51FCD1900236654B206AD99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<System.Object,System.Object>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_mD8DF1CBFCC4360ED79ECD84A87914537A9BF5CA5_gshared (RuntimeObject* ___input0, IndexedConverter_2_t3F40E49B0902E46EF51FCD1900236654B206AD99* ___converter1, const RuntimeMethod* method) ;
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorPool_FindSymbol_TisRuntimeObject_m0AEBF237D4755A091C30A8DD89F5021588253F75_gshared (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___fullName0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FileDescriptor::ForceReflectionInitialization<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDescriptor_ForceReflectionInitialization_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4495FFDA1299BA39945DE555E25651FE1D300DBE_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.Collections.RepeatedField`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Item_m7664D803BA3EABB40CB97EF021076A294D555754_gshared (RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T Google.Protobuf.Collections.RepeatedField`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RepeatedField_1_get_Item_m2A5DD4717FA09B31677D5DFAE3180FD2C29F3271_gshared (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_mB34633071167B2DC07F9490964996552D8D62165_gshared_inline (RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.MessageParser`1<System.Object>::ParseFrom(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageParser_1_ParseFrom_mF6D8638F533E080312E9717C2721790B94363740_gshared (MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___keySelector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m406B25C0B35311224BCE2098ADE6CC0158F52AFF_gshared (ReadOnlyDictionary_2_t255F9A7E024A19B4DD27835A47891A256232D5FE* __this, RuntimeObject* ___wrapped0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProtoPreconditions_CheckNotNull_TisRuntimeObject_m277D677CA171282C9EAF18FCD5F3DE9B34F12D87_gshared (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisRuntimeObject_mEB20048F1F87D5D512142A1AF1581BA42D1FB54B_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50ED82CC561126952DE4D87FCD91E8CE566E162E_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7A30A5A5AE5ED0A9978DDE3A4DE504518A730B59_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m40832FD0837B387AE4FFBA4F57114908CA9D6673_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0421571EC4FC72ABAA77FE2501A4C134AA56487A_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3800F56921267EE1B89F08D37FEC61D98B151E7A_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Double>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAF95B4E34B5C325CB18690B72CAAE8665295099D_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD68EA074998649C888551558073D09F0996E48D4_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2BF1C3C374C4512320C150869A641B7963CCB2B4_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6ACD67B6DBD4A96067D3C121AA9EB5089B3E903A_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mC0F4798FFCC84F8F4289DEA74640C87929B28D9C_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m041828CB415836196D206D255B60CF55BF442581_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m475C6827501BF3E25EC4E8E68497401B755FDF60_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Double>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m0B0E9C808715A59763E3EAEAE8B31B211B2FA770_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Boolean>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mF7A6EBF954694CFE18F4BBC71F1EF6787CC75D3D_gshared (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil_ForceInitialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mD269B00139985F20261D795DB3C326BA046F66C5_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_gshared (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_gshared (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* __this, const RuntimeMethod* method) ;

// System.Void Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::.ctor(Google.Protobuf.Reflection.IDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorIntPair__ctor_mC0123CA4C487C98A95A8F7735228EE00385C17B7 (DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* __this, RuntimeObject* ___descriptor0, int32_t ___number1, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::Equals(Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DescriptorIntPair_Equals_m5909E1855719AAAE7A9AD2CC8ADC52066D51BC96 (DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* __this, DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1 ___other0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DescriptorIntPair_Equals_m3599F7F497957D0E83234E51636C84B37AA15AAB (DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DescriptorIntPair_GetHashCode_mE6798C5F13C95765819B4126EA74040B7E5507D3 (DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.EnumDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC7C122371AAB1D13B81C239358837E997D10B6E1 (U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.EnumDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumDescriptorProto_get_Name_mBE72365EAFAE0A78B45F906B2E44E89EE3969872 (EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::ComputeFullName(Google.Protobuf.Reflection.MessageDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorBase::.ctor(Google.Protobuf.Reflection.FileDescriptor,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A (DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA* __this, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file0, String_t* ___fullName1, int32_t ___index2, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto> Google.Protobuf.Reflection.EnumDescriptorProto::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9* EnumDescriptorProto_get_Value_m49043C5127A742965041E6AAC467BB5C54E9671F (EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumValueDescriptorProto>::get_Count()
inline int32_t RepeatedField_1_get_Count_m8036806C568C33FA10BB217BC3C38D43E49FC996_inline (RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9*, const RuntimeMethod*))RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline)(__this, method);
}
// System.Void Google.Protobuf.Reflection.DescriptorValidationException::.ctor(Google.Protobuf.Reflection.IDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366 (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* __this, RuntimeObject* ___problemDescriptor0, String_t* ___description1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumValueDescriptorProto,Google.Protobuf.Reflection.EnumValueDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_mA223A1F27E483EF83D4279D94E98891433DA0068 (IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.EnumValueDescriptorProto,Google.Protobuf.Reflection.EnumValueDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mDE7883325426DA31B58872DB67D01EA9C63CCFEE (RuntimeObject* ___input0, IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_mD8DF1CBFCC4360ED79ECD84A87914537A9BF5CA5_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::get_File()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF (DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::get_DescriptorPool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorPool::AddSymbol(Google.Protobuf.Reflection.IDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614 (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, RuntimeObject* ___descriptor0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.EnumValueDescriptor Google.Protobuf.Reflection.DescriptorPool::FindEnumValueByNumber(Google.Protobuf.Reflection.EnumDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* DescriptorPool_FindEnumValueByNumber_m2A0B2766A21016B71216A0F0E0BB38938C2DFC4D (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* ___enumDescriptor0, int32_t ___number1, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.DescriptorBase::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D (DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<Google.Protobuf.Reflection.EnumValueDescriptor>(System.String)
inline EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* DescriptorPool_FindSymbol_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mA5137600BEA6DADC95287768FC2854239092CB19 (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___fullName0, const RuntimeMethod* method)
{
	return ((  EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* (*) (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94*, String_t*, const RuntimeMethod*))DescriptorPool_FindSymbol_TisRuntimeObject_m0AEBF237D4755A091C30A8DD89F5021588253F75_gshared)(__this, ___fullName0, method);
}
// Google.Protobuf.Reflection.EnumDescriptorProto Google.Protobuf.Reflection.EnumDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* EnumDescriptor_get_Proto_m3DEA6938948AF0EB16A0B8802AB2A98FEFEF0B9F (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.EnumOptions Google.Protobuf.Reflection.EnumDescriptorProto::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C* EnumDescriptorProto_get_Options_mEA0DA52FB39869965CD674114B885C07002990AE (EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.EnumOptions::get_CustomOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* EnumOptions_get_CustomOptions_m31421159F9A83E55281428EC63F4AB424F269DBC_inline (EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.EnumValueDescriptor::.ctor(Google.Protobuf.Reflection.EnumValueDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.EnumDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumValueDescriptor__ctor_m032AC90D9EB21A4B436414493F86D40CD7E9B2EF (EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* __this, EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* ___parent2, int32_t ___index3, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.EnumValueDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumValueDescriptorProto_get_Name_mAA420D399D8E04B6414C06B64EA0D3121DA8EAF3 (EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorPool::AddEnumValueByNumber(Google.Protobuf.Reflection.EnumValueDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorPool_AddEnumValueByNumber_m8E8462C0024ADE05AE1CA5AD4C20EEB58BBCC45D (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* ___enumValue0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.EnumValueDescriptorProto Google.Protobuf.Reflection.EnumValueDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* EnumValueDescriptor_get_Proto_mA61552A432CFAED574FCCC3ADB04035400C8AF84 (EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.EnumValueDescriptorProto::get_Number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumValueDescriptorProto_get_Number_mFEA2600F81EA39A8C0C9A614F826B0A60B026352 (EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.EnumValueOptions Google.Protobuf.Reflection.EnumValueDescriptorProto::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020* EnumValueDescriptorProto_get_Options_m496D271294BBA3AEE0E40EBC4D3965EF4A90B570 (EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.EnumValueOptions::get_CustomOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* EnumValueOptions_get_CustomOptions_mC7D5E6C29407440B757E0789CCDD4E826F68C2DD_inline (EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* ReflectionUtil_CreateFuncIMessageObject_m1C8236A3A64EDF179D2A3A3D08A9517DBE090408 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// TResult System.Func`2<Google.Protobuf.IMessage,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mEA7D06063C4457454D70B0A1315CFCCF7B2D1027_inline (Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.String Google.Protobuf.Reflection.FieldDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldDescriptorProto_get_Name_m646BB70456C7F86FD2D87A9343354AEF399D8A01 (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type Google.Protobuf.Reflection.FieldDescriptorProto::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptorProto_get_Type_mAE495B56BC538F2D2ECFC37B6CA25A6DA46317F1 (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::GetFieldTypeFromProtoType(Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptor_GetFieldTypeFromProtoType_mDB711FAE9E7F86350002629E32223ED76B3337DF (int32_t ___type0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.FieldDescriptor::get_FieldNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldNumber_m92E0DC0243FE36CA28859096A93B82BAE6927452 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::get_OneofIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptorProto_get_OneofIndex_mC02FB09DEAD6B0AEE7AE4697A155844B761F25C2 (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_OneofDecl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* DescriptorProto_get_OneofDecl_m88B6455AEF8DA27F82D763680A03D0B9E1565BDD (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.OneofDescriptorProto>::get_Count()
inline int32_t RepeatedField_1_get_Count_mF5A71D406A6CC9A751CEC4A6BDBC443C59BAF8DE_inline (RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4*, const RuntimeMethod*))RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_Oneofs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptorProto Google.Protobuf.Reflection.FieldDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FieldDescriptorProto::get_JsonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldDescriptorProto_get_JsonName_m2F93E89D07D85F0E8D28D8CEAEE648B3F774C5D2 (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String Google.Protobuf.JsonFormatter::ToJsonName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_ToJsonName_m10CA7FE442A16011EFD74927D312F2E096B78687 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptorProto/Types/Label Google.Protobuf.Reflection.FieldDescriptorProto::get_Label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptorProto_get_Label_m8E892F88CB65DC53532A9D49CCAFB0B2D4345991 (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageOptions Google.Protobuf.Reflection.DescriptorProto::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MessageOptions::get_MapEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageOptions_get_MapEntry_m8A9C9E62BA577BACC3E6FCFAACE277D10BDF2ABE (MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldOptions Google.Protobuf.Reflection.FieldDescriptorProto::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* FieldDescriptorProto_get_Options_mE13CF440C6E41D0DD350C323EE6B8FCF8156D337 (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.FieldOptions::get_Packed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldOptions_get_Packed_mED6C23B2FF13EDE7193A677BE5EA661FA0870B44 (FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Reflection.FieldDescriptorProto::get_Number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptorProto_get_Number_mFBEEEB6CE84E11D2B74091A879F005D6775709AA (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_ContainingType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.FieldOptions::get_CustomOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* FieldOptions_get_CustomOptions_mF1BA62F98E75F38E4BFB354A9EB77B9B553E46E3_inline (FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FieldDescriptorProto::get_TypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldDescriptorProto_get_TypeName_m3EF7F51FBE29628916590EA367EB255F64777A59 (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.IDescriptor Google.Protobuf.Reflection.DescriptorPool::LookupSymbol(System.String,Google.Protobuf.Reflection.IDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DescriptorPool_LookupSymbol_mF3E2C7A93E8BC401E2AC316FD81FF62CB72A866A (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___name0, RuntimeObject* ___relativeTo1, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FieldDescriptorProto::get_DefaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldDescriptorProto_get_DefaultValue_m26FC91CCF6B46876427078DDF8C827E7FC7C2B72 (FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorPool::AddFieldByNumber(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorPool_AddFieldByNumber_mAA8D3706D41E05EE7A1B035036F6FAC293A23C74 (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___field0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MessageOptions::get_MessageSetWireFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageOptions_get_MessageSetWireFormat_m22141864ACD4E62CD4C52DB45EC799C2A69394F9 (MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::CreateAccessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldDescriptor_CreateAccessor_mF8642CDF5D139E375E004978486A3497B7E3FB07 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Type Google.Protobuf.Reflection.MessageDescriptor::get_ClrType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.FieldDescriptor::get_IsMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptor_get_IsMap_m4C07ED3D4929CEC610CA84097732E25C58DFE8EE (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.FieldDescriptor::get_IsRepeated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptor_get_IsRepeated_m818549546D833BA7E801E6C05FDC6AC4F7446730 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3 (SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor__ctor_m2201967E3E6604470A3675957FDC1E65621276D1 (RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor__ctor_mB4B09BC7300B0D0B7C0D6A2C126DCC2FDE7F282C (MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FileDescriptor::ForceReflectionInitialization<Google.Protobuf.WellKnownTypes.Syntax>()
inline void FileDescriptor_ForceReflectionInitialization_TisSyntax_tE267A4E4C92CCB16CA047F75E57B72F185DDD7F9_m8B6656389C9D558ED7E8B66857EAF4631F623BE8 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))FileDescriptor_ForceReflectionInitialization_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4495FFDA1299BA39945DE555E25651FE1D300DBE_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.FileDescriptor::ForceReflectionInitialization<Google.Protobuf.WellKnownTypes.NullValue>()
inline void FileDescriptor_ForceReflectionInitialization_TisNullValue_t5D4C6CD193421C6E0654AD7F909C38AB4D914891_m2C91FD6908FBF19E287839DDBF3E900195D752D6 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))FileDescriptor_ForceReflectionInitialization_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4495FFDA1299BA39945DE555E25651FE1D300DBE_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.FileDescriptor::ForceReflectionInitialization<Google.Protobuf.WellKnownTypes.Field/Types/Cardinality>()
inline void FileDescriptor_ForceReflectionInitialization_TisCardinality_t00E453F3CF489DBF55358DB554CCA43F4FE566C1_m0C56BEC960663A209D833768EE2BFAE3F7BAABB0 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))FileDescriptor_ForceReflectionInitialization_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4495FFDA1299BA39945DE555E25651FE1D300DBE_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.FileDescriptor::ForceReflectionInitialization<Google.Protobuf.WellKnownTypes.Field/Types/Kind>()
inline void FileDescriptor_ForceReflectionInitialization_TisKind_tB8792E171EE23EE9315163CC75415FE8A46C2AE4_m47C79C7143F941829FC954945941E0542E1EFEAA (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))FileDescriptor_ForceReflectionInitialization_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4495FFDA1299BA39945DE555E25651FE1D300DBE_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.FileDescriptor::ForceReflectionInitialization<Google.Protobuf.WellKnownTypes.Value/KindOneofCase>()
inline void FileDescriptor_ForceReflectionInitialization_TisKindOneofCase_t69785E0445F1588A4F091A933CD0C7F55E6FCB56_mA76C18DC99C5A65B1E8315951A7246CF139D27E7 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))FileDescriptor_ForceReflectionInitialization_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m4495FFDA1299BA39945DE555E25651FE1D300DBE_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mF1001F30F100A73773A89AB21F9CC1F835315C76 (U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* __this, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FileDescriptor>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m221A63BD59DA122E0B62C1AD04C36EAFF27C73AB (ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared)(__this, ___list0, method);
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::DeterminePublicDependencies(Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.FileDescriptorProto,Google.Protobuf.Reflection.FileDescriptor[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_DeterminePublicDependencies_m677FD08FF37563DFF18071AE81258915F8FAD464 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___this0, FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___proto1, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies2, bool ___allowUnknownDependencies3, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Package()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorPool::AddPackage(System.String,Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorPool_AddPackage_mDB0420EC8C2298C7A48F64DB23C9F184020A0726 (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___fullName0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::get_MessageType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* FileDescriptorProto_get_MessageType_mF25E37F200D120C827C8BBA90488F69CD20BF6F0 (FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m19E1854900D5593942F4E42D26A07C8B2041E605 (IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.MessageDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_mFB7C9089EC21195DA0BECEDC7D98B9E954A6C827 (RuntimeObject* ___input0, IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_mD8DF1CBFCC4360ED79ECD84A87914537A9BF5CA5_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::get_EnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* FileDescriptorProto_get_EnumType_m6BFF3649A4E8316E9FB6009D4EE3493FD5796DE1 (FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m87415CE302C72DDD3B741B5A6EEEB4E430D14F43 (IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.EnumDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_mF9DC235EACD0435D6754F4D77F9F17874EFD9762 (RuntimeObject* ___input0, IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_mD8DF1CBFCC4360ED79ECD84A87914537A9BF5CA5_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.ServiceDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t7DD3B3236E6DD9A822E98695E3F915473E7927C0* FileDescriptorProto_get_Service_m028FD03406248D6A3B872FA38067AB0D082A842B (FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.ServiceDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m774105225CBCFE1903016F273F2CF09CF560569C (IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.ServiceDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438_TisServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_mD73A25E0370E4FFAAE4E55041BFC75D881CFCBBA (RuntimeObject* ___input0, IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_mD8DF1CBFCC4360ED79ECD84A87914537A9BF5CA5_gshared)(___input0, ___converter1, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FileDescriptor>::.ctor()
inline void Dictionary_2__ctor_m131DA44ABC43C30B8DF2E02F9115B2576BD29ACC (Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FileDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m923BF8D683CB9B551CB82F5EF7B406905600507F (Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD* __this, String_t* ___key0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD*, String_t*, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FileDescriptor>::.ctor()
inline void List_1__ctor_m5694B8C17080DC391E3E246F2225BE78DAA40B2D (List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Google.Protobuf.Collections.RepeatedField`1<System.Int32> Google.Protobuf.Reflection.FileDescriptorProto::get_PublicDependency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* FileDescriptorProto_get_PublicDependency_m875714F2F58D9714E3FA5B88BB8C5ACA855EA157 (FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.Collections.RepeatedField`1<System.Int32>::get_Item(System.Int32)
inline int32_t RepeatedField_1_get_Item_m7664D803BA3EABB40CB97EF021076A294D555754 (RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7*, int32_t, const RuntimeMethod*))RepeatedField_1_get_Item_m7664D803BA3EABB40CB97EF021076A294D555754_gshared)(__this, ___index0, method);
}
// Google.Protobuf.Collections.RepeatedField`1<System.String> Google.Protobuf.Reflection.FileDescriptorProto::get_Dependency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* FileDescriptorProto_get_Dependency_mFF3DCD4D322807904D2F712DD7B8001429794519 (FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.String>::get_Count()
inline int32_t RepeatedField_1_get_Count_mA0298EA3DB42DB62CE6E3A358C3DCDA1F0E727CA_inline (RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58*, const RuntimeMethod*))RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline)(__this, method);
}
// T Google.Protobuf.Collections.RepeatedField`1<System.String>::get_Item(System.Int32)
inline String_t* RepeatedField_1_get_Item_mB6168B8598D5CE7E89ABEED2F5938CA2E5151B33 (RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58*, int32_t, const RuntimeMethod*))RepeatedField_1_get_Item_m2A5DD4717FA09B31677D5DFAE3180FD2C29F3271_gshared)(__this, ___index0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FileDescriptor>::get_Item(TKey)
inline FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* Dictionary_2_get_Item_mF28567A5499A76FFE6033CB7B95E71A09814F38A (Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* (*) (Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FileDescriptor>::Add(T)
inline void List_1_Add_m381F0355B9A3F3034ACE3A9564BC38C7A0916B54_inline (List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5* __this, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5*, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Int32>::get_Count()
inline int32_t RepeatedField_1_get_Count_mB34633071167B2DC07F9490964996552D8D62165_inline (RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7*, const RuntimeMethod*))RepeatedField_1_get_Count_mB34633071167B2DC07F9490964996552D8D62165_gshared_inline)(__this, method);
}
// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::get_Proto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* FileDescriptor_get_Proto_m403A8AB373CF6673929D90243198F2A249E1FF1A_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptorProto_get_Name_m7F784B792E8525384825FAF5867D075E75E104A8 (FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.FileDescriptorProto::get_Package()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptorProto_get_Package_m648AC361F33374AE5687B1B0C15692AAE823966B (FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorPool::.ctor(Google.Protobuf.Reflection.FileDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorPool__ctor_m4A2292BFC87CE8CD00435FA11E75F22FF0D2651E (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencyFiles0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FileDescriptor::.ctor(Google.Protobuf.ByteString,Google.Protobuf.Reflection.FileDescriptorProto,Google.Protobuf.Reflection.FileDescriptor[],Google.Protobuf.Reflection.DescriptorPool,System.Boolean,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDescriptor__ctor_m3C90E1E789357CB312A1FCD7B0A5CF9008F5DB91 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___descriptorData0, FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___proto1, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies2, DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* ___pool3, bool ___allowUnknownDependencies4, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo5, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FileDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDescriptor_CrossLink_m1F3D9C581B38B6BE2DF68C22DD9543D4658345D5 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor_CrossLink_mCEDFF8C6BDA2083BA94CB583CEE6AD31E6294C20 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_Services()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Services_m32AE49DE554CD6104A5792813F458B1E1A065A8D_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor_CrossLink_mF0C898B5054B4C42EAD3B06FD4089772D3D9B0E8 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FileDescriptorProto> Google.Protobuf.Reflection.FileDescriptorProto::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t3B3CFF200F72B92CDC0FCC070921741B940A1EC0* FileDescriptorProto_get_Parser_m32C7BBC6B4AEDB82515DD248B1E735F0DCDD7476 (const RuntimeMethod* method) ;
// T Google.Protobuf.MessageParser`1<Google.Protobuf.Reflection.FileDescriptorProto>::ParseFrom(System.Byte[])
inline FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* MessageParser_1_ParseFrom_mDB05C51FC30FB700344433E3AD634AA43F29F945 (MessageParser_1_t3B3CFF200F72B92CDC0FCC070921741B940A1EC0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	return ((  FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* (*) (MessageParser_1_t3B3CFF200F72B92CDC0FCC070921741B940A1EC0*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))MessageParser_1_ParseFrom_mF6D8638F533E080312E9717C2721790B94363740_gshared)(__this, ___data0, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_mFDDC94E3C94B43E2DFBDA15DD749315C5B246512 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// Google.Protobuf.ByteString Google.Protobuf.ByteString::CopyFrom(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ByteString_CopyFrom_m7C1705BE941190F9F77120C51DB84A385A214AF6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor::BuildFrom(Google.Protobuf.ByteString,Google.Protobuf.Reflection.FileDescriptorProto,Google.Protobuf.Reflection.FileDescriptor[],System.Boolean,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FileDescriptor_BuildFrom_m6AC7E2163109EB8702745047EEB5FB6DAC8E43FB (ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___descriptorData0, FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___proto1, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies2, bool ___allowUnknownDependencies3, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo4, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* DescriptorReflection_get_Descriptor_m4C24D5D32366DB1BB72144F6B0339C61B8B3BAA2 (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileOptions Google.Protobuf.Reflection.FileDescriptorProto::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4* FileDescriptorProto_get_Options_m01BF2F50675E4CDC812593E831772C3B4FAA3773 (FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.FileOptions::get_CustomOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* FileOptions_get_CustomOptions_m123426CB271D1B7CCEC2B470D2BEBC8A1767C23C_inline (FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::.ctor(Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m70D586A7D348405DE1CCE844D4E855FB93602CF9 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, int32_t ___index2, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.ctor(Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___typeIndex3, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo4, const RuntimeMethod* method) ;
// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedEnums()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.EnumDescriptor::.ctor(Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumDescriptor__ctor_m5DF396F94AFB86FE46AC0D53FDCBAE16DC910FBE (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, Type_t* ___clrType4, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::set_ClrType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_m744F6287D106FBDF0B7E00832E5800CCA326AA08_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m99B9737F8FA9ADA1D9E0A059170EBBF4E37856A7 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___clrType0, MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes5, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldAccessorBase::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldAccessorBase__ctor_m756C8E5E365EACEDB10427BA73338222AAE0C279 (FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) ;
// System.Object Google.Protobuf.Reflection.FieldAccessorBase::GetValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldAccessorBase_GetValue_mABB52C5E5391C56E34EE9254B629D0E05BD425D6 (FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m0B17C8E7A00E1D11D012DA3875B6FBEA00C44E3F (U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.DescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptorProto_get_Name_mB58CFB6E06E100F9A1DDEC369CDB332126160AFB (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* GeneratedClrTypeInfo_get_Parser_m4C53F2D6CB863279546D11DE7B3D53ED351B48A8_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_ClrType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m5B443B2BB0A3783E56682580703FF212AF9AEDC2_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m7A2C9983C97A680D32FD61DC7AE7537CD0A77236 (IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.OneofDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m5E01D5F8513D05839423BA6A99ACA6BEDEDE51EB (RuntimeObject* ___input0, IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_mD8DF1CBFCC4360ED79ECD84A87914537A9BF5CA5_gshared)(___input0, ___converter1, method);
}
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.DescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_NestedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* DescriptorProto_get_NestedType_mFB07AE39857C24A91E7C49707962CFB6D43038F1 (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.EnumDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_EnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* DescriptorProto_get_EnumType_mB638C54384C16C50C1ECD0D5895A4E829F1BEF34 (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.FieldDescriptorProto> Google.Protobuf.Reflection.DescriptorProto::get_Field()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* DescriptorProto_get_Field_m5C69AC6B1B0D580AC85EA12068D434A482DA18BA (DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m23548E454F54B7DACDEDFD4CA70FB37C63BBB4AC (IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FieldDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m26AEE0AD695C5BDFECFC0E36CF9D665A14F58616 (RuntimeObject* ___input0, IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_mD8DF1CBFCC4360ED79ECD84A87914537A9BF5CA5_gshared)(___input0, ___converter1, method);
}
// System.Void System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCB50FD0BBFFED49F5F9E0A145ED9A91DDE2E520B (Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m433BEFD6923E79FF4AA0B787B223EA2D9D12E32F (RuntimeObject* ___source0, Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDD931F79E334F31ECBCD42F790CAE0E0F323AA6_gshared)(___source0, ___keySelector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<Google.Protobuf.Reflection.FieldDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>)
inline FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m01CE22040E1AF9A88B8E460C2499E214C28FD2E5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Collections.Generic.IList`1<T>)
inline void ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3 (ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mF2D2ACE0752C3B97343B72328D49200F45C14B65_gshared)(__this, ___list0, method);
}
// Google.Protobuf.Collections.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::CreateJsonFieldMap(System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250* MessageDescriptor_CreateJsonFieldMap_m5C2727789EF0F030F9AAA08BC35F8FA41CD78C07 (RuntimeObject* ___fields0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldCollection__ctor_m43EAACB34F71AEE419BD80BE4D81514F9A3FB35F (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::.ctor()
inline void Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6 (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* __this, String_t* ___key0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7*, String_t*, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String Google.Protobuf.Reflection.FieldDescriptor::get_JsonName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_JsonName_m1E7529AB79BEB8C99A1318FFDA81F6F4C9E81216_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_mE5A8F25FECCA3E0D5DCAEE05755B1D9889ECD0DA (ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250* __this, RuntimeObject* ___wrapped0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250*, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m406B25C0B35311224BCE2098ADE6CC0158F52AFF_gshared)(__this, ___wrapped0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<Google.Protobuf.Reflection.FieldDescriptor>(System.String)
inline FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___fullName0, const RuntimeMethod* method)
{
	return ((  FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* (*) (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94*, String_t*, const RuntimeMethod*))DescriptorPool_FindSymbol_TisRuntimeObject_m0AEBF237D4755A091C30A8DD89F5021588253F75_gshared)(__this, ___fullName0, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.DescriptorPool::FindFieldByNumber(Google.Protobuf.Reflection.MessageDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* DescriptorPool_FindFieldByNumber_m3306450EAB967767481F0E183ACF0914C749906E (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, int32_t ___number1, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MessageOptions::get_CustomOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* MessageOptions_get_CustomOptions_m1B43F65E32CE5CF29FACF53BC9BA1BE257098637_inline (MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor_CrossLink_mA8C38E8741F9A1DF651EB74C3B05FFC67B9CE196 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* MessageDescriptor_FindFieldByNumber_m1D65624DECB12DDDD354206EB1B0BBE4944651DC (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, int32_t ___number0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* MessageDescriptor_FindFieldByName_m5C4B4A4ECD41D310E72889BEF59BD89A1CC98DA9 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_OneofNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_mEB47A698EDAC7237464F2AD15643BA0E43A5B0D6_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofDescriptor::.ctor(Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor__ctor_m1DF6BC68AE05031163B8774780CA2B5856545429 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, String_t* ___clrName4, const RuntimeMethod* method) ;
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_PropertyNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m90234348C0C94D290A5B78AE50B651C4CDD8E302_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.FieldDescriptor::.ctor(Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor__ctor_m691730DD44930E89A8F7218A20B8E3A51336DF3B (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, String_t* ___propertyName4, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBABF78AE22082EE0CDD0BA1D06892DC8D6CB8B00 (U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::get_ClientStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptorProto_get_ClientStreaming_m2C6A7809C34840D7F55088937F25FEE7197409F3 (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.MethodDescriptorProto::get_ServerStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptorProto_get_ServerStreaming_mFC81302136E94D4B06942C2FA32532C0731D67C3 (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MethodOptions Google.Protobuf.Reflection.MethodDescriptorProto::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* MethodDescriptorProto_get_Options_mEF31E491D76D1C67D9D2FB55C243B9F52E7E9D1A (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MethodOptions::get_CustomOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* MethodOptions_get_CustomOptions_m1A547C37871DC33DEFF149C463A188C0A44928B1_inline (MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_Name_m0E0A77A1B97748A6331C972C766376AAC481BE9D (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_InputType_m3E2EDDE6CB60B9C52CD82AD5216634820EF90FD3 (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.MethodDescriptorProto::get_OutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptorProto_get_OutputType_m535ED7F4F70B9FAD544EB237C5697414A5C37C9F (MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* __this, const RuntimeMethod* method) ;
// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageInt32(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* ReflectionUtil_CreateFuncIMessageInt32_m58AD7053AB0640F04197A08028C0239C2DD79A6C (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessage(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ReflectionUtil_CreateActionIMessage_m6E5086C5181236168BF662877536FD4C241F8180 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Google.Protobuf.IMessage>::Invoke(T)
inline void Action_1_Invoke_mB741A5209F94DEA28AF75D2736CCB6CA8C50C133_inline (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// TResult System.Func`2<Google.Protobuf.IMessage,System.Int32>::Invoke(T)
inline int32_t Func_2_Invoke_m33AD4763C10512F5603E6826A3C2EAC13E41D2B2_inline (Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline)(__this, ___arg0, method);
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* OneofDescriptor_get_ContainingType_m1AE060E44800C9D8135AEE395CD1A522AFE8020D (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.OneofDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneofDescriptorProto_get_Name_m6987249315B54F5D46E0B07B2876370CAFEC826C (OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::CreateAccessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, String_t* ___clrName0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofOptions Google.Protobuf.Reflection.OneofDescriptorProto::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* OneofDescriptorProto_get_Options_m86DDF956444086BD981F9BA68D91DA3A8B9360B6 (OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.OneofOptions::get_CustomOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* OneofOptions_get_CustomOptions_m9AFE5F1C9B9900031F74A40E8C7828C2C672833D_inline (OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>::.ctor()
inline void List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6 (List_1_t64981EE12A2A370C5000034039B00D57761431A3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64981EE12A2A370C5000034039B00D57761431A3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::get_Fields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* MessageDescriptor_get_Fields_mA5EE82B81DE42BB3DAC85301639AD91C9AB94503_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InDeclarationOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InDeclarationOrder_m51C3D79E9FE57BCD482DFF7ADE94555A2AA23FD7 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_ContainingOneof()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* FieldDescriptor_get_ContainingOneof_m910021BB2A5C1B3EF595F5C557EF032691282E13_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.Protobuf.Reflection.FieldDescriptor>::Add(T)
inline void List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_inline (List_1_t64981EE12A2A370C5000034039B00D57761431A3* __this, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64981EE12A2A370C5000034039B00D57761431A3*, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OneofAccessor::.ctor(System.Reflection.PropertyInfo,System.Reflection.MethodInfo,Google.Protobuf.Reflection.OneofDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor__ctor_mFE344A0083D58B6EE27BAE916D3CDD379E21113D (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, PropertyInfo_t* ___caseProperty0, MethodInfo_t* ___clearMethod1, OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor2, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.String>(T,System.String)
inline String_t* ProtoPreconditions_CheckNotNull_TisString_t_mCBD3F1C158AD3A2A5A42D0D1FC734B2B0DB38B62 (String_t* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m277D677CA171282C9EAF18FCD5F3DE9B34F12D87_gshared)(___value0, ___name1, method);
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m59F2568A14369771D8A5471123A4409E6EF85B56_inline (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_PreferredAlias(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_m3D89CC8006C1930E461D3822B4B8EE35788679F3_inline (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::CheckCanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_m2790FACDF87E895EB60C6FA9C7D41CC1AA104127 (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.String>()
inline void ReflectionUtil_ForceInitialize_TisString_t_mC1687DD93A592C947FCF29E8C76DA72495E4E00A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisRuntimeObject_mEB20048F1F87D5D512142A1AF1581BA42D1FB54B_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int32>()
inline void ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50ED82CC561126952DE4D87FCD91E8CE566E162E (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50ED82CC561126952DE4D87FCD91E8CE566E162E_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Int64>()
inline void ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7A30A5A5AE5ED0A9978DDE3A4DE504518A730B59 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7A30A5A5AE5ED0A9978DDE3A4DE504518A730B59_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt32>()
inline void ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m40832FD0837B387AE4FFBA4F57114908CA9D6673 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m40832FD0837B387AE4FFBA4F57114908CA9D6673_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.UInt64>()
inline void ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0421571EC4FC72ABAA77FE2501A4C134AA56487A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0421571EC4FC72ABAA77FE2501A4C134AA56487A_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Single>()
inline void ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3800F56921267EE1B89F08D37FEC61D98B151E7A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3800F56921267EE1B89F08D37FEC61D98B151E7A_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Double>()
inline void ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAF95B4E34B5C325CB18690B72CAAE8665295099D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAF95B4E34B5C325CB18690B72CAAE8665295099D_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Boolean>()
inline void ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD68EA074998649C888551558073D09F0996E48D4 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD68EA074998649C888551558073D09F0996E48D4_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int32>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2BF1C3C374C4512320C150869A641B7963CCB2B4 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2BF1C3C374C4512320C150869A641B7963CCB2B4_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Int64>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6ACD67B6DBD4A96067D3C121AA9EB5089B3E903A (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6ACD67B6DBD4A96067D3C121AA9EB5089B3E903A_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt32>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mC0F4798FFCC84F8F4289DEA74640C87929B28D9C (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mC0F4798FFCC84F8F4289DEA74640C87929B28D9C_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.UInt64>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m041828CB415836196D206D255B60CF55BF442581 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m041828CB415836196D206D255B60CF55BF442581_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Single>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m475C6827501BF3E25EC4E8E68497401B755FDF60 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m475C6827501BF3E25EC4E8E68497401B755FDF60_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Double>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m0B0E9C808715A59763E3EAEAE8B31B211B2FA770 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m0B0E9C808715A59763E3EAEAE8B31B211B2FA770_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<System.Nullable`1<System.Boolean>>()
inline void ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mF7A6EBF954694CFE18F4BBC71F1EF6787CC75D3D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mF7A6EBF954694CFE18F4BBC71F1EF6787CC75D3D_gshared)(method);
}
// System.Void Google.Protobuf.Reflection.ReflectionUtil::ForceInitialize<Google.Protobuf.Reflection.ReflectionUtil/SampleEnum>()
inline void ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_m5399D417FF9BDEEE87B9290D92A1742CE0990743 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))ReflectionUtil_ForceInitialize_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mD269B00139985F20261D795DB3C326BA046F66C5_gshared)(method);
}
// Google.Protobuf.Reflection.ReflectionUtil/SampleEnum Google.Protobuf.Reflection.ReflectionUtil::SampleEnumMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectionUtil_SampleEnumMethod_m5D7FE578BB6F18D4B9C1B0F99B51A6348DE33124 (const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::GetReflectionHelper(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_GetReflectionHelper_mB0F6AE0EDDF3376D97F300E53A0CECDA6678710F (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Delegate Google.Protobuf.Compatibility.MethodInfoExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* MethodInfoExtensions_CreateDelegate_mA619066B8DBAFF94DFD27A53133BCFE290E52BC6 (MethodInfo_t* ___method0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m883D83E52598F0FD9D1E08791BF725660C24A370 (U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.Reflection.ServiceDescriptorProto::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptorProto_get_Name_m335601B56CC8C6E93B045072F27AC8D13C9068DC (ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Google.Protobuf.Reflection.MethodDescriptorProto> Google.Protobuf.Reflection.ServiceDescriptorProto::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E* ServiceDescriptorProto_get_Method_mD603FB2CDAA65A667B86A080996B8FFA01FA3E7C (ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>::.ctor(System.Object,System.IntPtr)
inline void IndexedConverter_2__ctor_m56898EAD4712836360F3B03E6F5EE4AF24B5FFC7 (IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543*, RuntimeObject*, intptr_t, const RuntimeMethod*))IndexedConverter_2__ctor_m2D06A6062BBEC46D07970CCEC1DCB4674C662547_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IList`1<TOutput> Google.Protobuf.Reflection.DescriptorUtil::ConvertAndMakeReadOnly<Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.MethodDescriptor>(System.Collections.Generic.IList`1<TInput>,Google.Protobuf.Reflection.DescriptorUtil/IndexedConverter`2<TInput,TOutput>)
inline RuntimeObject* DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m48FBBF19C23A2F3D0A1EABC7A905D10949AB9DB2 (RuntimeObject* ___input0, IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543* ___converter1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543*, const RuntimeMethod*))DescriptorUtil_ConvertAndMakeReadOnly_TisRuntimeObject_TisRuntimeObject_mD8DF1CBFCC4360ED79ECD84A87914537A9BF5CA5_gshared)(___input0, ___converter1, method);
}
// T Google.Protobuf.Reflection.DescriptorPool::FindSymbol<Google.Protobuf.Reflection.MethodDescriptor>(System.String)
inline MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6 (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* __this, String_t* ___fullName0, const RuntimeMethod* method)
{
	return ((  MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* (*) (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94*, String_t*, const RuntimeMethod*))DescriptorPool_FindSymbol_TisRuntimeObject_m0AEBF237D4755A091C30A8DD89F5021588253F75_gshared)(__this, ___fullName0, method);
}
// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ServiceDescriptor_get_Proto_m6E7C4568043ACAAFE2D6CFEA8AD5B97CB3350170 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.ServiceOptions Google.Protobuf.Reflection.ServiceDescriptorProto::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* ServiceDescriptorProto_get_Options_mC879FAA80CB6FF261B987734BF999D71E2013E03 (ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.ServiceOptions::get_CustomOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ServiceOptions_get_CustomOptions_mE5E290122254B7AC597669622C317F0A588A9C93_inline (ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MethodDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.MethodDescriptor::.ctor(Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.ServiceDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor__ctor_m14EC122B2999003C0BA7C543F9ED0F728AA90FF2 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* ___parent2, int32_t ___index3, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF1F2B1BBE801927E28446628F9FF26FB497DFE40 (U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* ReflectionUtil_CreateActionIMessageObject_mA2F92A36B31A88F2CF7DA8AF4E52FE1A5A476782 (MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::get_FieldType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldType_mD7E8085F4F0B7FCED231CB145D24118346428FB5_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) ;
// Google.Protobuf.ByteString Google.Protobuf.ByteString::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ByteString_get_Empty_m731EFB022957B89D06402B50613BE2D07E64E381 (const RuntimeMethod* method) ;
// System.Void System.Action`1<Google.Protobuf.IMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m489692DDBF6D8FDD191397E1A803CDC0D2D74DF2 (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Google.Protobuf.IMessage,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_m0CF559CD5A31F07C66DF2E464260B44A5A1FA422_inline (Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933 (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* __this, String_t* ___key0, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*, String_t*, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromFiles_mECF9B6C4CA7B2F67AB49E05F0A6C216190192726 (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_mBB1A4D0B911C15BB41A3F69EEA2CAA941E2B0363 (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m277D677CA171282C9EAF18FCD5F3DE9B34F12D87_gshared)(___value0, ___name1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mB03F12F2C4E360F832D9ACC5F5184B0321A3CF47 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_m08923155AF4823AA25B738CC9AC14C787C0AA69C (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___fileDescriptor0, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* Builder_Build_m9DE0B00C503E91F9B88293341A99AA9B7816B581 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromMessages_m9D638E59B941D302B6BA7AACEE793351AA715A28 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) ;
// T Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>>(T,System.String)
inline RuntimeObject* ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m05B72494D6531BC825C70D29797F22EDDB6F1762 (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_m277D677CA171282C9EAF18FCD5F3DE9B34F12D87_gshared)(___value0, ___name1, method);
}
// System.Void System.Func`2<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF8C596E8574CB6944694007939CA8F3692F27663 (Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Google.Protobuf.Reflection.MessageDescriptor,Google.Protobuf.Reflection.FileDescriptor>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m0FE4D834B3E610A3B46B0513F346ACFFB6BC6FDB (RuntimeObject* ___source0, Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::.ctor()
inline void Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_mD8356BAAE81ED3D6C0DA14C145962505CE180FA3 (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* __this, Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* ___fullNameToMessageMap0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_Dependencies()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_mAC7C5AB2751A6B9A4A2F6AE3A4E0DB2216793F7C_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_mB2D0FC7251A0DB7E18E70A90CA2BBA21EA38A070 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9 (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* __this, String_t* ___key0, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*, String_t*, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m852E2A500025865494CCD1B737DB532D867677C1 (U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_mA2E221A01A8B3FBEC4C8A529F3C213C60A3A2C53 (Type_t* ___type0, MethodInfo_t* ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseDoubleEqualityComparerImpl__ctor_mAD6B0428075BBF43DE51F583D37BA0ABF38664D2 (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseSingleEqualityComparerImpl__ctor_m1B0BE327275B9873E6334D1BF5F168CB7550485A (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableDoubleEqualityComparerImpl__ctor_mFB917A2DA5F18FCF1412412980B25B39169C056E (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableSingleEqualityComparerImpl__ctor_mE92B7379D88906CF7BE75DAEB5A478DE32E3AB8F (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* __this, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Double>::.ctor()
inline void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6 (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB*, const RuntimeMethod*))EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Single>::.ctor()
inline void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3 (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499*, const RuntimeMethod*))EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseDoubleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mBDBB3E70C5EA70797FCAAAAC19F398C6F5A04833_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>>::.ctor()
inline void EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694*, const RuntimeMethod*))EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseSingleEqualityComparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m9E46AB39FDABED3DD0CD900646C6986CE4481DC0_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>::.ctor()
inline void EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203*, const RuntimeMethod*))EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair
IL2CPP_EXTERN_C void DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshal_pinvoke(const DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1& unmarshaled, DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___descriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'descriptor' of type 'DescriptorIntPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___descriptor_1Exception, NULL);
}
IL2CPP_EXTERN_C void DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshal_pinvoke_back(const DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshaled_pinvoke& marshaled, DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1& unmarshaled)
{
	Exception_t* ___descriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'descriptor' of type 'DescriptorIntPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___descriptor_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair
IL2CPP_EXTERN_C void DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshal_pinvoke_cleanup(DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair
IL2CPP_EXTERN_C void DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshal_com(const DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1& unmarshaled, DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshaled_com& marshaled)
{
	Exception_t* ___descriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'descriptor' of type 'DescriptorIntPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___descriptor_1Exception, NULL);
}
IL2CPP_EXTERN_C void DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshal_com_back(const DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshaled_com& marshaled, DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1& unmarshaled)
{
	Exception_t* ___descriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'descriptor' of type 'DescriptorIntPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___descriptor_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair
IL2CPP_EXTERN_C void DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshal_com_cleanup(DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_marshaled_com& marshaled)
{
}
// System.Void Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::.ctor(Google.Protobuf.Reflection.IDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorIntPair__ctor_mC0123CA4C487C98A95A8F7735228EE00385C17B7 (DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* __this, RuntimeObject* ___descriptor0, int32_t ___number1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___number1;
		__this->___number_0 = L_0;
		RuntimeObject* L_1 = ___descriptor0;
		__this->___descriptor_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___descriptor_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void DescriptorIntPair__ctor_mC0123CA4C487C98A95A8F7735228EE00385C17B7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___descriptor0, int32_t ___number1, const RuntimeMethod* method)
{
	DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1*>(__this + _offset);
	DescriptorIntPair__ctor_mC0123CA4C487C98A95A8F7735228EE00385C17B7(_thisAdjusted, ___descriptor0, ___number1, method);
}
// System.Boolean Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::Equals(Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DescriptorIntPair_Equals_m5909E1855719AAAE7A9AD2CC8ADC52066D51BC96 (DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* __this, DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->___descriptor_1;
		DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1 L_1 = ___other0;
		RuntimeObject* L_2 = L_1.___descriptor_1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = __this->___number_0;
		DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1 L_4 = ___other0;
		int32_t L_5 = L_4.___number_0;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool DescriptorIntPair_Equals_m5909E1855719AAAE7A9AD2CC8ADC52066D51BC96_AdjustorThunk (RuntimeObject* __this, DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1 ___other0, const RuntimeMethod* method)
{
	DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = DescriptorIntPair_Equals_m5909E1855719AAAE7A9AD2CC8ADC52066D51BC96(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DescriptorIntPair_Equals_m3599F7F497957D0E83234E51636C84B37AA15AAB (DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		bool L_3;
		L_3 = DescriptorIntPair_Equals_m5909E1855719AAAE7A9AD2CC8ADC52066D51BC96(__this, ((*(DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1*)((DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1*)(DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1*)UnBox(L_2, DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0022;
	}

IL_001e:
	{
		V_1 = (bool)0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool DescriptorIntPair_Equals_m3599F7F497957D0E83234E51636C84B37AA15AAB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = DescriptorIntPair_Equals_m3599F7F497957D0E83234E51636C84B37AA15AAB(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Google.Protobuf.Reflection.DescriptorPool/DescriptorIntPair::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DescriptorIntPair_GetHashCode_mE6798C5F13C95765819B4126EA74040B7E5507D3 (DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___descriptor_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		int32_t L_2 = __this->___number_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)65535))), L_2));
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t DescriptorIntPair_GetHashCode_mE6798C5F13C95765819B4126EA74040B7E5507D3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DescriptorIntPair_tFC58E4B4D853133EF126EE40632DAE949D457DB1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DescriptorIntPair_GetHashCode_mE6798C5F13C95765819B4126EA74040B7E5507D3(_thisAdjusted, method);
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
// System.String Google.Protobuf.Reflection.DescriptorValidationException::get_ProblemSymbolName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptorValidationException_get_ProblemSymbolName_m5E227C8178A2E1243F78EF02A7A8CF5702E636A7 (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___name_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Google.Protobuf.Reflection.DescriptorValidationException::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptorValidationException_get_Description_mBBECE4E71A1E3AFC75263BA3AAF2AE101AD0A752 (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___description_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.Protobuf.Reflection.DescriptorValidationException::.ctor(Google.Protobuf.Reflection.IDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366 (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* __this, RuntimeObject* ___problemDescriptor0, String_t* ___description1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDescriptor_t7DB05C0E0D441ECC6ED64C00EEE1FE64C9C84B27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___problemDescriptor0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Google.Protobuf.Reflection.IDescriptor::get_FullName() */, IDescriptor_t7DB05C0E0D441ECC6ED64C00EEE1FE64C9C84B27_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___description1;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_1, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_3, NULL);
		RuntimeObject* L_4 = ___problemDescriptor0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Google.Protobuf.Reflection.IDescriptor::get_FullName() */, IDescriptor_t7DB05C0E0D441ECC6ED64C00EEE1FE64C9C84B27_il2cpp_TypeInfo_var, L_4);
		__this->___name_18 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_18), (void*)L_5);
		String_t* L_6 = ___description1;
		__this->___description_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_19), (void*)L_6);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.DescriptorValidationException::.ctor(Google.Protobuf.Reflection.IDescriptor,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptorValidationException__ctor_mD83CBC44F661559DC1995852F0C83E59ED17F639 (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* __this, RuntimeObject* ___problemDescriptor0, String_t* ___description1, Exception_t* ___cause2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDescriptor_t7DB05C0E0D441ECC6ED64C00EEE1FE64C9C84B27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___problemDescriptor0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Google.Protobuf.Reflection.IDescriptor::get_FullName() */, IDescriptor_t7DB05C0E0D441ECC6ED64C00EEE1FE64C9C84B27_il2cpp_TypeInfo_var, L_0);
		String_t* L_2 = ___description1;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_1, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_2, NULL);
		Exception_t* L_4 = ___cause2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_3, L_4, NULL);
		RuntimeObject* L_5 = ___problemDescriptor0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Google.Protobuf.Reflection.IDescriptor::get_FullName() */, IDescriptor_t7DB05C0E0D441ECC6ED64C00EEE1FE64C9C84B27_il2cpp_TypeInfo_var, L_5);
		__this->___name_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_18), (void*)L_6);
		String_t* L_7 = ___description1;
		__this->___description_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_19), (void*)L_7);
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
// System.Void Google.Protobuf.Reflection.EnumDescriptor::.ctor(Google.Protobuf.Reflection.EnumDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumDescriptor__ctor_m5DF396F94AFB86FE46AC0D53FDCBAE16DC910FBE (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, Type_t* ___clrType4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisEnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mDE7883325426DA31B58872DB67D01EA9C63CCFEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Count_m8036806C568C33FA10BB217BC3C38D43E49FC996_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m2D20DB923C51DD1E3C08CD792B40385314026E30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* L_0 = (U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mC7C122371AAB1D13B81C239358837E997D10B6E1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* L_1 = V_0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_2 = ___file1;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* L_3 = V_0;
		NullCheck(L_3);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_4 = L_3->___file_0;
		U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* L_5 = V_0;
		NullCheck(L_5);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_6 = L_5->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_7 = ___parent2;
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_8 = ___proto0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = EnumDescriptorProto_get_Name_mBE72365EAFAE0A78B45F906B2E44E89EE3969872(L_8, NULL);
		NullCheck(L_6);
		String_t* L_10;
		L_10 = FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F(L_6, L_7, L_9, NULL);
		int32_t L_11 = ___index3;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_4, L_10, L_11, NULL);
		U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* L_12 = V_0;
		NullCheck(L_12);
		L_12->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___U3CU3E4__this_1), (void*)__this);
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_13 = ___proto0;
		__this->___proto_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_13);
		Type_t* L_14 = ___clrType4;
		__this->___clrType_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clrType_6), (void*)L_14);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_15 = ___parent2;
		__this->___containingType_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___containingType_4), (void*)L_15);
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_16 = ___proto0;
		NullCheck(L_16);
		RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9* L_17;
		L_17 = EnumDescriptorProto_get_Value_m49043C5127A742965041E6AAC467BB5C54E9671F(L_16, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = RepeatedField_1_get_Count_m8036806C568C33FA10BB217BC3C38D43E49FC996_inline(L_17, RepeatedField_1_get_Count_m8036806C568C33FA10BB217BC3C38D43E49FC996_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_006b;
		}
	}
	{
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_20 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_20, __this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF76B35125DCAA786F5B5DD1B0ACE410CC04FE83B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EnumDescriptor__ctor_m5DF396F94AFB86FE46AC0D53FDCBAE16DC910FBE_RuntimeMethod_var)));
	}

IL_006b:
	{
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_21 = ___proto0;
		NullCheck(L_21);
		RepeatedField_1_t3D59FA70FAD073B54E94A963E1906D5E534D48B9* L_22;
		L_22 = EnumDescriptorProto_get_Value_m49043C5127A742965041E6AAC467BB5C54E9671F(L_21, NULL);
		U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* L_23 = V_0;
		IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C* L_24 = (IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C*)il2cpp_codegen_object_new(IndexedConverter_2_t3A5716BF91091716966FCDE368F69CEA0B00C44C_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		IndexedConverter_2__ctor_mA223A1F27E483EF83D4279D94E98891433DA0068(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m2D20DB923C51DD1E3C08CD792B40385314026E30_RuntimeMethod_var), NULL);
		RuntimeObject* L_25;
		L_25 = DescriptorUtil_ConvertAndMakeReadOnly_TisEnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mDE7883325426DA31B58872DB67D01EA9C63CCFEE(L_22, L_24, DescriptorUtil_ConvertAndMakeReadOnly_TisEnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mDE7883325426DA31B58872DB67D01EA9C63CCFEE_RuntimeMethod_var);
		__this->___values_5 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values_5), (void*)L_25);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_26;
		L_26 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_26);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_27;
		L_27 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_26, NULL);
		NullCheck(L_27);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_27, __this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.EnumDescriptorProto Google.Protobuf.Reflection.EnumDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* EnumDescriptor_get_Proto_m3DEA6938948AF0EB16A0B8802AB2A98FEFEF0B9F (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, const RuntimeMethod* method) 
{
	EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* V_0 = NULL;
	{
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_0 = __this->___proto_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_1 = V_0;
		return L_1;
	}
}
// System.String Google.Protobuf.Reflection.EnumDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumDescriptor_get_Name_m7F463D5F0D3C784074267A18CE598E037612BB4A (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = EnumDescriptorProto_get_Name_mBE72365EAFAE0A78B45F906B2E44E89EE3969872(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Type Google.Protobuf.Reflection.EnumDescriptor::get_ClrType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* EnumDescriptor_get_ClrType_mEC63864747B764B5CEFBE67912DDEA6519656697 (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, const RuntimeMethod* method) 
{
	Type_t* V_0 = NULL;
	{
		Type_t* L_0 = __this->___clrType_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Type_t* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.EnumDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* EnumDescriptor_get_ContainingType_mA94611DED80C4E223AE69352F30574610F85171E (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, const RuntimeMethod* method) 
{
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___containingType_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumValueDescriptor> Google.Protobuf.Reflection.EnumDescriptor::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumDescriptor_get_Values_m547C36AA3598D865E9A2745B2490AB5EAD406F03 (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___values_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.EnumValueDescriptor Google.Protobuf.Reflection.EnumDescriptor::FindValueByNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* EnumDescriptor_FindValueByNumber_mB1D68E2AE88F5E532126FA48FA235F10C7B7011D (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* V_0 = NULL;
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		int32_t L_2 = ___number0;
		NullCheck(L_1);
		EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* L_3;
		L_3 = DescriptorPool_FindEnumValueByNumber_m2A0B2766A21016B71216A0F0E0BB38938C2DFC4D(L_1, __this, L_2, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* L_4 = V_0;
		return L_4;
	}
}
// Google.Protobuf.Reflection.EnumValueDescriptor Google.Protobuf.Reflection.EnumDescriptor::FindValueByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* EnumDescriptor_FindValueByName_mF72D19E88B45C75D17F8788F99E735613B00A4C5 (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_FindSymbol_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mA5137600BEA6DADC95287768FC2854239092CB19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* V_0 = NULL;
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D(__this, NULL);
		String_t* L_3 = ___name0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		NullCheck(L_1);
		EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* L_5;
		L_5 = DescriptorPool_FindSymbol_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mA5137600BEA6DADC95287768FC2854239092CB19(L_1, L_4, DescriptorPool_FindSymbol_TisEnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_mA5137600BEA6DADC95287768FC2854239092CB19_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* L_6 = V_0;
		return L_6;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.EnumDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* EnumDescriptor_get_CustomOptions_m5742530DD94BBC3635A985BF974AE9DBA0101CB2 (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C* G_B2_0 = NULL;
	EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C* G_B1_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B3_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B5_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B4_0 = NULL;
	{
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_0;
		L_0 = EnumDescriptor_get_Proto_m3DEA6938948AF0EB16A0B8802AB2A98FEFEF0B9F(__this, NULL);
		NullCheck(L_0);
		EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C* L_1;
		L_1 = EnumDescriptorProto_get_Options_mEA0DA52FB39869965CD674114B885C07002990AE(L_0, NULL);
		EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)(NULL));
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_3;
		L_3 = EnumOptions_get_CustomOptions_m31421159F9A83E55281428EC63F4AB424F269DBC_inline(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_5 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields*)il2cpp_codegen_static_fields_for(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var))->___Empty_0;
		G_B5_0 = L_5;
	}

IL_0020:
	{
		return G_B5_0;
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
// System.Void Google.Protobuf.Reflection.EnumDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mC7C122371AAB1D13B81C239358837E997D10B6E1 (U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.EnumValueDescriptor Google.Protobuf.Reflection.EnumDescriptor/<>c__DisplayClass4_0::<.ctor>b__0(Google.Protobuf.Reflection.EnumValueDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m2D20DB923C51DD1E3C08CD792B40385314026E30 (U3CU3Ec__DisplayClass4_0_tD2F004D20C5FE4787B118F4464F3BD05B5B3BD09* __this, EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* ___value0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* L_0 = ___value0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___i1;
		EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* L_4 = (EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372*)il2cpp_codegen_object_new(EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EnumValueDescriptor__ctor_m032AC90D9EB21A4B436414493F86D40CD7E9B2EF(L_4, L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void Google.Protobuf.Reflection.EnumValueDescriptor::.ctor(Google.Protobuf.Reflection.EnumValueDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.EnumDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumValueDescriptor__ctor_m032AC90D9EB21A4B436414493F86D40CD7E9B2EF (EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* __this, EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* ___parent2, int32_t ___index3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ___file1;
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_1 = ___parent2;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D(L_1, NULL);
		EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* L_3 = ___proto0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = EnumValueDescriptorProto_get_Name_mAA420D399D8E04B6414C06B64EA0D3121DA8EAF3(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_4, NULL);
		int32_t L_6 = ___index3;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_0, L_5, L_6, NULL);
		EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* L_7 = ___proto0;
		__this->___proto_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_4), (void*)L_7);
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_8 = ___parent2;
		__this->___enumDescriptor_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumDescriptor_3), (void*)L_8);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_9 = ___file1;
		NullCheck(L_9);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_10;
		L_10 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_9, NULL);
		NullCheck(L_10);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_10, __this, NULL);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_11 = ___file1;
		NullCheck(L_11);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_12;
		L_12 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_11, NULL);
		NullCheck(L_12);
		DescriptorPool_AddEnumValueByNumber_m8E8462C0024ADE05AE1CA5AD4C20EEB58BBCC45D(L_12, __this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.EnumValueDescriptorProto Google.Protobuf.Reflection.EnumValueDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* EnumValueDescriptor_get_Proto_mA61552A432CFAED574FCCC3ADB04035400C8AF84 (EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* __this, const RuntimeMethod* method) 
{
	EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* V_0 = NULL;
	{
		EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* L_0 = __this->___proto_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* L_1 = V_0;
		return L_1;
	}
}
// System.String Google.Protobuf.Reflection.EnumValueDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumValueDescriptor_get_Name_m217E98318391CD424920230C1FF0FA3D62667849 (EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* L_0 = __this->___proto_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = EnumValueDescriptorProto_get_Name_mAA420D399D8E04B6414C06B64EA0D3121DA8EAF3(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Google.Protobuf.Reflection.EnumValueDescriptor::get_Number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumValueDescriptor_get_Number_m610380BC5F817802DAF330D97D231AC56B80E4DC (EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* L_0;
		L_0 = EnumValueDescriptor_get_Proto_mA61552A432CFAED574FCCC3ADB04035400C8AF84(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = EnumValueDescriptorProto_get_Number_mFEA2600F81EA39A8C0C9A614F826B0A60B026352(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.EnumValueDescriptor::get_EnumDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* EnumValueDescriptor_get_EnumDescriptor_mDAB4DEA916110A7B26464CE2F36AA68637C44B1C (EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* __this, const RuntimeMethod* method) 
{
	EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* V_0 = NULL;
	{
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_0 = __this->___enumDescriptor_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.EnumValueDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* EnumValueDescriptor_get_CustomOptions_m1EB05D2DCEF39D9457C527974B97E2DE7CCC1E2F (EnumValueDescriptor_t38FBF68B2DC0B1FF9AB1737198506AEECF84C372* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020* G_B2_0 = NULL;
	EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020* G_B1_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B3_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B5_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B4_0 = NULL;
	{
		EnumValueDescriptorProto_tAAFDC813DA5AF990785209C340990BDF5600A254* L_0;
		L_0 = EnumValueDescriptor_get_Proto_mA61552A432CFAED574FCCC3ADB04035400C8AF84(__this, NULL);
		NullCheck(L_0);
		EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020* L_1;
		L_1 = EnumValueDescriptorProto_get_Options_m496D271294BBA3AEE0E40EBC4D3965EF4A90B570(L_0, NULL);
		EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)(NULL));
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_3;
		L_3 = EnumValueOptions_get_CustomOptions_mC7D5E6C29407440B757E0789CCDD4E826F68C2DD_inline(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_5 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields*)il2cpp_codegen_static_fields_for(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var))->___Empty_0;
		G_B5_0 = L_5;
	}

IL_0020:
	{
		return G_B5_0;
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
// System.Void Google.Protobuf.Reflection.FieldAccessorBase::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldAccessorBase__ctor_m756C8E5E365EACEDB10427BA73338222AAE0C279 (FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_0 = ___descriptor1;
		__this->___descriptor_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___descriptor_1), (void*)L_0);
		PropertyInfo_t* L_1 = ___property0;
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* L_3;
		L_3 = ReflectionUtil_CreateFuncIMessageObject_m1C8236A3A64EDF179D2A3A3D08A9517DBE090408(L_2, NULL);
		__this->___getValueDelegate_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___getValueDelegate_0), (void*)L_3);
		return;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.FieldAccessorBase::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* FieldAccessorBase_get_Descriptor_mC14B91DAEC33988BB6A0832A3A3B9EC42E8E600D (FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4* __this, const RuntimeMethod* method) 
{
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_0 = NULL;
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_0 = __this->___descriptor_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_1 = V_0;
		return L_1;
	}
}
// System.Object Google.Protobuf.Reflection.FieldAccessorBase::GetValue(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldAccessorBase_GetValue_mABB52C5E5391C56E34EE9254B629D0E05BD425D6 (FieldAccessorBase_t5DFC6F7627AB30BC3FE5A3FBBDD8F667872AD4F4* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* L_0 = __this->___getValueDelegate_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = Func_2_Invoke_mEA7D06063C4457454D70B0A1315CFCCF7B2D1027_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
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
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___U3CContainingTypeU3Ek__BackingField_8;
		return L_0;
	}
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_ContainingOneof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* FieldDescriptor_get_ContainingOneof_m910021BB2A5C1B3EF595F5C557EF032691282E13 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = __this->___U3CContainingOneofU3Ek__BackingField_9;
		return L_0;
	}
}
// System.String Google.Protobuf.Reflection.FieldDescriptor::get_JsonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_JsonName_m1E7529AB79BEB8C99A1318FFDA81F6F4C9E81216 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CJsonNameU3Ek__BackingField_10;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FieldDescriptorProto Google.Protobuf.Reflection.FieldDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0 = __this->___U3CProtoU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.FieldDescriptor::.ctor(Google.Protobuf.Reflection.FieldDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor__ctor_m691730DD44930E89A8F7218A20B8E3A51336DF3B (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, String_t* ___propertyName4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t72D63DEDFD3D09D9D034239EC2954718F7FCDB68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Count_mF5A71D406A6CC9A751CEC4A6BDBC443C59BAF8DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B8_0 = 0;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* G_B13_0 = NULL;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* G_B14_1 = NULL;
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ___file1;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = ___file1;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = ___parent2;
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_3 = ___proto0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = FieldDescriptorProto_get_Name_m646BB70456C7F86FD2D87A9343354AEF399D8A01(L_3, NULL);
		NullCheck(L_1);
		String_t* L_5;
		L_5 = FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F(L_1, L_2, L_4, NULL);
		int32_t L_6 = ___index3;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_0, L_5, L_6, NULL);
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_7 = ___proto0;
		__this->___U3CProtoU3Ek__BackingField_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtoU3Ek__BackingField_11), (void*)L_7);
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_8 = ___proto0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = FieldDescriptorProto_get_Type_mAE495B56BC538F2D2ECFC37B6CA25A6DA46317F1(L_8, NULL);
		V_0 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_11 = ___proto0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = FieldDescriptorProto_get_Type_mAE495B56BC538F2D2ECFC37B6CA25A6DA46317F1(L_11, NULL);
		int32_t L_13;
		L_13 = FieldDescriptor_GetFieldTypeFromProtoType_mDB711FAE9E7F86350002629E32223ED76B3337DF(L_12, NULL);
		__this->___fieldType_5 = L_13;
	}

IL_003f:
	{
		int32_t L_14;
		L_14 = FieldDescriptor_get_FieldNumber_m92E0DC0243FE36CA28859096A93B82BAE6927452(__this, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_005c;
		}
	}
	{
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_16 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_16, __this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral406B9381DC587706B87B2DA1065E6CD50CD537F9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor__ctor_m691730DD44930E89A8F7218A20B8E3A51336DF3B_RuntimeMethod_var)));
	}

IL_005c:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_17 = ___parent2;
		__this->___U3CContainingTypeU3Ek__BackingField_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContainingTypeU3Ek__BackingField_8), (void*)L_17);
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_18 = ___proto0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = FieldDescriptorProto_get_OneofIndex_mC02FB09DEAD6B0AEE7AE4697A155844B761F25C2(L_18, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_19) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_21 = ___proto0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = FieldDescriptorProto_get_OneofIndex_mC02FB09DEAD6B0AEE7AE4697A155844B761F25C2(L_21, NULL);
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_23 = ___proto0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = FieldDescriptorProto_get_OneofIndex_mC02FB09DEAD6B0AEE7AE4697A155844B761F25C2(L_23, NULL);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_25 = ___parent2;
		NullCheck(L_25);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_26;
		L_26 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(L_25, NULL);
		NullCheck(L_26);
		RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* L_27;
		L_27 = DescriptorProto_get_OneofDecl_m88B6455AEF8DA27F82D763680A03D0B9E1565BDD(L_26, NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = RepeatedField_1_get_Count_mF5A71D406A6CC9A751CEC4A6BDBC443C59BAF8DE_inline(L_27, RepeatedField_1_get_Count_mF5A71D406A6CC9A751CEC4A6BDBC443C59BAF8DE_RuntimeMethod_var);
		G_B8_0 = ((((int32_t)((((int32_t)L_24) < ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B8_0 = 1;
	}

IL_009b:
	{
		V_3 = (bool)G_B8_0;
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_00b7;
		}
	}
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_30 = ___parent2;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String Google.Protobuf.Reflection.DescriptorBase::get_Name() */, L_30);
		String_t* L_32;
		L_32 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD25F906D9B73DA2DEB38278894A7AE0689907246)), L_31, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_33 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_33, __this, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor__ctor_m691730DD44930E89A8F7218A20B8E3A51336DF3B_RuntimeMethod_var)));
	}

IL_00b7:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_34 = ___parent2;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38_inline(L_34, NULL);
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_36 = ___proto0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = FieldDescriptorProto_get_OneofIndex_mC02FB09DEAD6B0AEE7AE4697A155844B761F25C2(L_36, NULL);
		NullCheck(L_35);
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_38;
		L_38 = InterfaceFuncInvoker1< OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Item(System.Int32) */, IList_1_t72D63DEDFD3D09D9D034239EC2954718F7FCDB68_il2cpp_TypeInfo_var, L_35, L_37);
		__this->___U3CContainingOneofU3Ek__BackingField_9 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContainingOneofU3Ek__BackingField_9), (void*)L_38);
	}

IL_00cf:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_39 = ___file1;
		NullCheck(L_39);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_40;
		L_40 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_39, NULL);
		NullCheck(L_40);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_40, __this, NULL);
		String_t* L_41 = ___propertyName4;
		__this->___propertyName_6 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propertyName_6), (void*)L_41);
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_42;
		L_42 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_42);
		String_t* L_43;
		L_43 = FieldDescriptorProto_get_JsonName_m2F93E89D07D85F0E8D28D8CEAEE648B3F774C5D2(L_42, NULL);
		bool L_44;
		L_44 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_43, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B12_0 = __this;
		if (L_44)
		{
			G_B13_0 = __this;
			goto IL_0109;
		}
	}
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_45;
		L_45 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_45);
		String_t* L_46;
		L_46 = FieldDescriptorProto_get_JsonName_m2F93E89D07D85F0E8D28D8CEAEE648B3F774C5D2(L_45, NULL);
		G_B14_0 = L_46;
		G_B14_1 = G_B12_0;
		goto IL_0119;
	}

IL_0109:
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_47;
		L_47 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_47);
		String_t* L_48;
		L_48 = FieldDescriptorProto_get_Name_m646BB70456C7F86FD2D87A9343354AEF399D8A01(L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_49;
		L_49 = JsonFormatter_ToJsonName_m10CA7FE442A16011EFD74927D312F2E096B78687(L_48, NULL);
		G_B14_0 = L_49;
		G_B14_1 = G_B13_0;
	}

IL_0119:
	{
		NullCheck(G_B14_1);
		G_B14_1->___U3CJsonNameU3Ek__BackingField_10 = G_B14_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_1->___U3CJsonNameU3Ek__BackingField_10), (void*)G_B14_0);
		return;
	}
}
// System.String Google.Protobuf.Reflection.FieldDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_Name_m942175060F8E7EDA35B0BE00FB0BD5ABA35A3B26 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0;
		L_0 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FieldDescriptorProto_get_Name_m646BB70456C7F86FD2D87A9343354AEF399D8A01(L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::get_Accessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldDescriptor_get_Accessor_mBFA4302AF3C75C52CACD857427ABB300A482CA19 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___accessor_7;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::GetFieldTypeFromProtoType(Google.Protobuf.Reflection.FieldDescriptorProto/Types/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptor_GetFieldTypeFromProtoType_mDB711FAE9E7F86350002629E32223ED76B3337DF (int32_t ___type0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___type0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_0061;
			}
			case 4:
			{
				goto IL_0065;
			}
			case 5:
			{
				goto IL_0069;
			}
			case 6:
			{
				goto IL_006d;
			}
			case 7:
			{
				goto IL_0071;
			}
			case 8:
			{
				goto IL_0075;
			}
			case 9:
			{
				goto IL_0079;
			}
			case 10:
			{
				goto IL_007e;
			}
			case 11:
			{
				goto IL_0083;
			}
			case 12:
			{
				goto IL_0088;
			}
			case 13:
			{
				goto IL_008d;
			}
			case 14:
			{
				goto IL_0092;
			}
			case 15:
			{
				goto IL_0097;
			}
			case 16:
			{
				goto IL_009c;
			}
			case 17:
			{
				goto IL_00a1;
			}
		}
	}
	{
		goto IL_00a6;
	}

IL_0055:
	{
		V_1 = 0;
		goto IL_00b1;
	}

IL_0059:
	{
		V_1 = 1;
		goto IL_00b1;
	}

IL_005d:
	{
		V_1 = 2;
		goto IL_00b1;
	}

IL_0061:
	{
		V_1 = 3;
		goto IL_00b1;
	}

IL_0065:
	{
		V_1 = 4;
		goto IL_00b1;
	}

IL_0069:
	{
		V_1 = 5;
		goto IL_00b1;
	}

IL_006d:
	{
		V_1 = 6;
		goto IL_00b1;
	}

IL_0071:
	{
		V_1 = 7;
		goto IL_00b1;
	}

IL_0075:
	{
		V_1 = 8;
		goto IL_00b1;
	}

IL_0079:
	{
		V_1 = ((int32_t)9);
		goto IL_00b1;
	}

IL_007e:
	{
		V_1 = ((int32_t)10);
		goto IL_00b1;
	}

IL_0083:
	{
		V_1 = ((int32_t)11);
		goto IL_00b1;
	}

IL_0088:
	{
		V_1 = ((int32_t)12);
		goto IL_00b1;
	}

IL_008d:
	{
		V_1 = ((int32_t)17);
		goto IL_00b1;
	}

IL_0092:
	{
		V_1 = ((int32_t)13);
		goto IL_00b1;
	}

IL_0097:
	{
		V_1 = ((int32_t)14);
		goto IL_00b1;
	}

IL_009c:
	{
		V_1 = ((int32_t)15);
		goto IL_00b1;
	}

IL_00a1:
	{
		V_1 = ((int32_t)16);
		goto IL_00b1;
	}

IL_00a6:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16F6180B4C8945702AF299EB1C9BC25E2B0B2062)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_GetFieldTypeFromProtoType_mDB711FAE9E7F86350002629E32223ED76B3337DF_RuntimeMethod_var)));
	}

IL_00b1:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Boolean Google.Protobuf.Reflection.FieldDescriptor::get_IsRepeated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptor_get_IsRepeated_m818549546D833BA7E801E6C05FDC6AC4F7446730 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0;
		L_0 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FieldDescriptorProto_get_Label_m8E892F88CB65DC53532A9D49CCAFB0B2D4345991(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean Google.Protobuf.Reflection.FieldDescriptor::get_IsMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptor_get_IsMap_m4C07ED3D4929CEC610CA84097732E25C58DFE8EE (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->___fieldType_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0033;
		}
	}
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = __this->___messageType_4;
		NullCheck(L_1);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_2;
		L_2 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(L_1, NULL);
		NullCheck(L_2);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_3;
		L_3 = DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C(L_2, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_4 = __this->___messageType_4;
		NullCheck(L_4);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_5;
		L_5 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(L_4, NULL);
		NullCheck(L_5);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_6;
		L_6 = DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = MessageOptions_get_MapEntry_m8A9C9E62BA577BACC3E6FCFAACE277D10BDF2ABE(L_6, NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		return (bool)G_B4_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.FieldDescriptor::get_IsPacked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldDescriptor_get_IsPacked_m9DC0A354A71F36ABF4DFB1EBD24B24F3A1D186DE (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0;
		L_0 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_0);
		FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* L_1;
		L_1 = FieldDescriptorProto_get_Options_mE13CF440C6E41D0DD350C323EE6B8FCF8156D337(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_2;
		L_2 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_2);
		FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* L_3;
		L_3 = FieldDescriptorProto_get_Options_mE13CF440C6E41D0DD350C323EE6B8FCF8156D337(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = FieldOptions_get_Packed_mED6C23B2FF13EDE7193A677BE5EA661FA0870B44(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		return (bool)G_B3_0;
	}
}
// Google.Protobuf.Reflection.FieldType Google.Protobuf.Reflection.FieldDescriptor::get_FieldType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldType_mD7E8085F4F0B7FCED231CB145D24118346428FB5 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___fieldType_5;
		return L_0;
	}
}
// System.Int32 Google.Protobuf.Reflection.FieldDescriptor::get_FieldNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldNumber_m92E0DC0243FE36CA28859096A93B82BAE6927452 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0;
		L_0 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FieldDescriptorProto_get_Number_mFBEEEB6CE84E11D2B74091A879F005D6775709AA(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Google.Protobuf.Reflection.FieldDescriptor::CompareTo(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FieldDescriptor_CompareTo_mBBD6DE332D71AC4FCAB442D421A1CA81C89CED58 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_0 = ___other0;
		NullCheck(L_0);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1;
		L_1 = FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA_inline(L_0, NULL);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA_inline(__this, NULL);
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)L_1) == ((RuntimeObject*)(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE5C2B16A9CD82174DC683DB24DD281DCF3F47D3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_CompareTo_mBBD6DE332D71AC4FCAB442D421A1CA81C89CED58_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_5;
		L_5 = FieldDescriptor_get_FieldNumber_m92E0DC0243FE36CA28859096A93B82BAE6927452(__this, NULL);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_6 = ___other0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = FieldDescriptor_get_FieldNumber_m92E0DC0243FE36CA28859096A93B82BAE6927452(L_6, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_7));
		goto IL_0032;
	}

IL_0032:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_EnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* FieldDescriptor_get_EnumType_m408E39BDE6C4A08442F1094C98D2DA598A171A76 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* V_1 = NULL;
	{
		int32_t L_0 = __this->___fieldType_5;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC412FC48405DE7155E805AFABF259900F56B265)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_get_EnumType_m408E39BDE6C4A08442F1094C98D2DA598A171A76_RuntimeMethod_var)));
	}

IL_001e:
	{
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_3 = __this->___enumType_3;
		V_1 = L_3;
		goto IL_0027;
	}

IL_0027:
	{
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_4 = V_1;
		return L_4;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FieldDescriptor::get_MessageType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FieldDescriptor_get_MessageType_m1B2CA889B58B1234702721DC106977CA4C9E4622 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_1 = NULL;
	{
		int32_t L_0 = __this->___fieldType_5;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)10)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F2DC0198377AC41D3D4C8A05CF3EB229F1EB6C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_get_MessageType_m1B2CA889B58B1234702721DC106977CA4C9E4622_RuntimeMethod_var)));
	}

IL_001e:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = __this->___messageType_4;
		V_1 = L_3;
		goto IL_0027;
	}

IL_0027:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_4 = V_1;
		return L_4;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.FieldDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* FieldDescriptor_get_CustomOptions_mE602C0270651204C9E79F1056CA9B5E675EC4C6D (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* G_B2_0 = NULL;
	FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* G_B1_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B3_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B5_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B4_0 = NULL;
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0;
		L_0 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_0);
		FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* L_1;
		L_1 = FieldDescriptorProto_get_Options_mE13CF440C6E41D0DD350C323EE6B8FCF8156D337(L_0, NULL);
		FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)(NULL));
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_3;
		L_3 = FieldOptions_get_CustomOptions_mF1BA62F98E75F38E4BFB354A9EB77B9B553E46E3_inline(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_5 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields*)il2cpp_codegen_static_fields_for(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var))->___Empty_0;
		G_B5_0 = L_5;
	}

IL_0020:
	{
		return G_B5_0;
	}
}
// System.Void Google.Protobuf.Reflection.FieldDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B23_0 = 0;
	int32_t G_B30_0 = 0;
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0;
		L_0 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FieldDescriptorProto_get_TypeName_m3EF7F51FBE29628916590EA367EB255F64777A59(L_0, NULL);
		bool L_2;
		L_2 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0176;
		}
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_4;
		L_4 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_4);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_5;
		L_5 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_4, NULL);
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_6;
		L_6 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = FieldDescriptorProto_get_TypeName_m3EF7F51FBE29628916590EA367EB255F64777A59(L_6, NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = DescriptorPool_LookupSymbol_mF3E2C7A93E8BC401E2AC316FD81FF62CB72A866A(L_5, L_7, __this, NULL);
		V_1 = L_8;
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_9;
		L_9 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = FieldDescriptorProto_get_Type_mAE495B56BC538F2D2ECFC37B6CA25A6DA46317F1(L_9, NULL);
		V_2 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject* L_12 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)IsInstSealed((RuntimeObject*)L_12, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		__this->___fieldType_5 = ((int32_t)10);
		goto IL_009f;
	}

IL_0067:
	{
		RuntimeObject* L_14 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)((EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)IsInstSealed((RuntimeObject*)L_14, EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0082;
		}
	}
	{
		__this->___fieldType_5 = ((int32_t)17);
		goto IL_009f;
	}

IL_0082:
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_16;
		L_16 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = FieldDescriptorProto_get_TypeName_m3EF7F51FBE29628916590EA367EB255F64777A59(L_16, NULL);
		String_t* L_18;
		L_18 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90D3DE4EC3FA61ABB0FFC58A9BE7C3F9876A4404)), L_17, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_19 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_19, __this, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D_RuntimeMethod_var)));
	}

IL_009f:
	{
	}

IL_00a0:
	{
		int32_t L_20 = __this->___fieldType_5;
		V_5 = (bool)((((int32_t)L_20) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0117;
		}
	}
	{
		RuntimeObject* L_22 = V_1;
		V_6 = (bool)((((int32_t)((!(((RuntimeObject*)(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)IsInstSealed((RuntimeObject*)L_22, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00e0;
		}
	}
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_24;
		L_24 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = FieldDescriptorProto_get_TypeName_m3EF7F51FBE29628916590EA367EB255F64777A59(L_24, NULL);
		String_t* L_26;
		L_26 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49B6C82A63AD64BA0DB80BE70F64375BD09B00B7)), L_25, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_27 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_27, __this, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D_RuntimeMethod_var)));
	}

IL_00e0:
	{
		RuntimeObject* L_28 = V_1;
		__this->___messageType_4 = ((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_28, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageType_4), (void*)((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_28, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var)));
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_29;
		L_29 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = FieldDescriptorProto_get_DefaultValue_m26FC91CCF6B46876427078DDF8C827E7FC7C2B72(L_29, NULL);
		bool L_31;
		L_31 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_30, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_7 = L_31;
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_0114;
		}
	}
	{
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_33 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_33, __this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6919B813002E982425DEA31BB0B4B39B80D0DD1C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D_RuntimeMethod_var)));
	}

IL_0114:
	{
		goto IL_0173;
	}

IL_0117:
	{
		int32_t L_34 = __this->___fieldType_5;
		V_8 = (bool)((((int32_t)L_34) == ((int32_t)((int32_t)17)))? 1 : 0);
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_0166;
		}
	}
	{
		RuntimeObject* L_36 = V_1;
		V_9 = (bool)((((int32_t)((!(((RuntimeObject*)(EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)((EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)IsInstSealed((RuntimeObject*)L_36, EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_0157;
		}
	}
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_38;
		L_38 = FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline(__this, NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = FieldDescriptorProto_get_TypeName_m3EF7F51FBE29628916590EA367EB255F64777A59(L_38, NULL);
		String_t* L_40;
		L_40 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5ECAF58C726838F7BCCD69FFB3D963BC19324DF)), L_39, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_41 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_41);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_41, __this, L_40, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D_RuntimeMethod_var)));
	}

IL_0157:
	{
		RuntimeObject* L_42 = V_1;
		__this->___enumType_3 = ((EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)CastclassSealed((RuntimeObject*)L_42, EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumType_3), (void*)((EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)CastclassSealed((RuntimeObject*)L_42, EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var)));
		goto IL_0173;
	}

IL_0166:
	{
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_43 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_43);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_43, __this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA148ED3BE9EB55581A21B53F1B203523F1D5918E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D_RuntimeMethod_var)));
	}

IL_0173:
	{
		goto IL_01a2;
	}

IL_0176:
	{
		int32_t L_44 = __this->___fieldType_5;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)10))))
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_45 = __this->___fieldType_5;
		G_B23_0 = ((((int32_t)L_45) == ((int32_t)((int32_t)17)))? 1 : 0);
		goto IL_018e;
	}

IL_018d:
	{
		G_B23_0 = 1;
	}

IL_018e:
	{
		V_10 = (bool)G_B23_0;
		bool L_46 = V_10;
		if (!L_46)
		{
			goto IL_01a1;
		}
	}
	{
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_47 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_47);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_47, __this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE5D19E1394019EFCC5049242F23E76C0F54F6C9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D_RuntimeMethod_var)));
	}

IL_01a1:
	{
	}

IL_01a2:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_48;
		L_48 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_48);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_49;
		L_49 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_48, NULL);
		NullCheck(L_49);
		DescriptorPool_AddFieldByNumber_mAA8D3706D41E05EE7A1B035036F6FAC293A23C74(L_49, __this, NULL);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_50;
		L_50 = FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA_inline(__this, NULL);
		if (!L_50)
		{
			goto IL_01e5;
		}
	}
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_51;
		L_51 = FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA_inline(__this, NULL);
		NullCheck(L_51);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_52;
		L_52 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(L_51, NULL);
		NullCheck(L_52);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_53;
		L_53 = DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C(L_52, NULL);
		if (!L_53)
		{
			goto IL_01e5;
		}
	}
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_54;
		L_54 = FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA_inline(__this, NULL);
		NullCheck(L_54);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_55;
		L_55 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(L_54, NULL);
		NullCheck(L_55);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_56;
		L_56 = DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C(L_55, NULL);
		NullCheck(L_56);
		bool L_57;
		L_57 = MessageOptions_get_MessageSetWireFormat_m22141864ACD4E62CD4C52DB45EC799C2A69394F9(L_56, NULL);
		G_B30_0 = ((int32_t)(L_57));
		goto IL_01e6;
	}

IL_01e5:
	{
		G_B30_0 = 0;
	}

IL_01e6:
	{
		V_11 = (bool)G_B30_0;
		bool L_58 = V_11;
		if (!L_58)
		{
			goto IL_01f9;
		}
	}
	{
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_59 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_59);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_59, __this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABF2FC26E970A72F0697992EDABFBBC779D23F79)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D_RuntimeMethod_var)));
	}

IL_01f9:
	{
		RuntimeObject* L_60;
		L_60 = FieldDescriptor_CreateAccessor_mF8642CDF5D139E375E004978486A3497B7E3FB07(__this, NULL);
		__this->___accessor_7 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessor_7), (void*)L_60);
		return;
	}
}
// Google.Protobuf.Reflection.IFieldAccessor Google.Protobuf.Reflection.FieldDescriptor::CreateAccessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldDescriptor_CreateAccessor_mF8642CDF5D139E375E004978486A3497B7E3FB07 (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	{
		String_t* L_0 = __this->___propertyName_6;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (RuntimeObject*)NULL;
		goto IL_008d;
	}

IL_0013:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA_inline(__this, NULL);
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_2, NULL);
		String_t* L_4 = __this->___propertyName_6;
		NullCheck(L_3);
		PropertyInfo_t* L_5;
		L_5 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_3, L_4, NULL);
		V_0 = L_5;
		PropertyInfo_t* L_6 = V_0;
		V_3 = (bool)((((RuntimeObject*)(PropertyInfo_t*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_8 = __this->___propertyName_6;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_9;
		L_9 = FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA_inline(__this, NULL);
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_9, NULL);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE399D4853E66A0E2DC864D4936E152C63ABAF4B)), L_8, L_10, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_12 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_12, __this, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldDescriptor_CreateAccessor_mF8642CDF5D139E375E004978486A3497B7E3FB07_RuntimeMethod_var)));
	}

IL_0055:
	{
		bool L_13;
		L_13 = FieldDescriptor_get_IsMap_m4C07ED3D4929CEC610CA84097732E25C58DFE8EE(__this, NULL);
		if (L_13)
		{
			goto IL_007f;
		}
	}
	{
		bool L_14;
		L_14 = FieldDescriptor_get_IsRepeated_m818549546D833BA7E801E6C05FDC6AC4F7446730(__this, NULL);
		if (L_14)
		{
			goto IL_0072;
		}
	}
	{
		PropertyInfo_t* L_15 = V_0;
		SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* L_16 = (SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077*)il2cpp_codegen_object_new(SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3(L_16, L_15, __this, NULL);
		V_4 = L_16;
		RuntimeObject* L_17 = V_4;
		G_B8_0 = L_17;
		goto IL_007d;
	}

IL_0072:
	{
		PropertyInfo_t* L_18 = V_0;
		RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0* L_19 = (RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0*)il2cpp_codegen_object_new(RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		RepeatedFieldAccessor__ctor_m2201967E3E6604470A3675957FDC1E65621276D1(L_19, L_18, __this, NULL);
		V_4 = L_19;
		RuntimeObject* L_20 = V_4;
		G_B8_0 = L_20;
	}

IL_007d:
	{
		G_B10_0 = G_B8_0;
		goto IL_008a;
	}

IL_007f:
	{
		PropertyInfo_t* L_21 = V_0;
		MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0* L_22 = (MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0*)il2cpp_codegen_object_new(MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		MapFieldAccessor__ctor_mB4B09BC7300B0D0B7C0D6A2C126DCC2FDE7F282C(L_22, L_21, __this, NULL);
		V_4 = L_22;
		RuntimeObject* L_23 = V_4;
		G_B10_0 = L_23;
	}

IL_008a:
	{
		V_2 = G_B10_0;
		goto IL_008d;
	}

IL_008d:
	{
		RuntimeObject* L_24 = V_2;
		return L_24;
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
// System.Void Google.Protobuf.Reflection.FileDescriptor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDescriptor__cctor_mC4748BADA72D0ADA3C100DFFFF106E12B2D87D9A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_ForceReflectionInitialization_TisCardinality_t00E453F3CF489DBF55358DB554CCA43F4FE566C1_m0C56BEC960663A209D833768EE2BFAE3F7BAABB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_ForceReflectionInitialization_TisKindOneofCase_t69785E0445F1588A4F091A933CD0C7F55E6FCB56_mA76C18DC99C5A65B1E8315951A7246CF139D27E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_ForceReflectionInitialization_TisKind_tB8792E171EE23EE9315163CC75415FE8A46C2AE4_m47C79C7143F941829FC954945941E0542E1EFEAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_ForceReflectionInitialization_TisNullValue_t5D4C6CD193421C6E0654AD7F909C38AB4D914891_m2C91FD6908FBF19E287839DDBF3E900195D752D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_ForceReflectionInitialization_TisSyntax_tE267A4E4C92CCB16CA047F75E57B72F185DDD7F9_m8B6656389C9D558ED7E8B66857EAF4631F623BE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_ForceReflectionInitialization_TisSyntax_tE267A4E4C92CCB16CA047F75E57B72F185DDD7F9_m8B6656389C9D558ED7E8B66857EAF4631F623BE8(FileDescriptor_ForceReflectionInitialization_TisSyntax_tE267A4E4C92CCB16CA047F75E57B72F185DDD7F9_m8B6656389C9D558ED7E8B66857EAF4631F623BE8_RuntimeMethod_var);
		FileDescriptor_ForceReflectionInitialization_TisNullValue_t5D4C6CD193421C6E0654AD7F909C38AB4D914891_m2C91FD6908FBF19E287839DDBF3E900195D752D6(FileDescriptor_ForceReflectionInitialization_TisNullValue_t5D4C6CD193421C6E0654AD7F909C38AB4D914891_m2C91FD6908FBF19E287839DDBF3E900195D752D6_RuntimeMethod_var);
		FileDescriptor_ForceReflectionInitialization_TisCardinality_t00E453F3CF489DBF55358DB554CCA43F4FE566C1_m0C56BEC960663A209D833768EE2BFAE3F7BAABB0(FileDescriptor_ForceReflectionInitialization_TisCardinality_t00E453F3CF489DBF55358DB554CCA43F4FE566C1_m0C56BEC960663A209D833768EE2BFAE3F7BAABB0_RuntimeMethod_var);
		FileDescriptor_ForceReflectionInitialization_TisKind_tB8792E171EE23EE9315163CC75415FE8A46C2AE4_m47C79C7143F941829FC954945941E0542E1EFEAA(FileDescriptor_ForceReflectionInitialization_TisKind_tB8792E171EE23EE9315163CC75415FE8A46C2AE4_m47C79C7143F941829FC954945941E0542E1EFEAA_RuntimeMethod_var);
		FileDescriptor_ForceReflectionInitialization_TisKindOneofCase_t69785E0445F1588A4F091A933CD0C7F55E6FCB56_mA76C18DC99C5A65B1E8315951A7246CF139D27E7(FileDescriptor_ForceReflectionInitialization_TisKindOneofCase_t69785E0445F1588A4F091A933CD0C7F55E6FCB56_mA76C18DC99C5A65B1E8315951A7246CF139D27E7_RuntimeMethod_var);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.FileDescriptor::.ctor(Google.Protobuf.ByteString,Google.Protobuf.Reflection.FileDescriptorProto,Google.Protobuf.Reflection.FileDescriptor[],Google.Protobuf.Reflection.DescriptorPool,System.Boolean,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDescriptor__ctor_m3C90E1E789357CB312A1FCD7B0A5CF9008F5DB91 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___descriptorData0, FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___proto1, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies2, DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* ___pool3, bool ___allowUnknownDependencies4, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_mFB7C9089EC21195DA0BECEDC7D98B9E954A6C827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_mF9DC235EACD0435D6754F4D77F9F17874EFD9762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438_TisServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_mD73A25E0370E4FFAAE4E55041BFC75D881CFCBBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_U3C_ctorU3Eb__1_2_m2B13EA282FCF353C70BB12AE922462F5084415D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m221A63BD59DA122E0B62C1AD04C36EAFF27C73AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__0_m569CE14BC6D7BDFCE7E5E3696DCF8E9A5D9FDCF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__1_mB0808FCE98EE03664FB2977C3189C320468E0DE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* L_0 = (U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_mF1001F30F100A73773A89AB21F9CC1F835315C76(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* L_1 = V_0;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_2 = ___generatedCodeInfo5;
		NullCheck(L_1);
		L_1->___generatedCodeInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___generatedCodeInfo_0), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_4 = ___descriptorData0;
		__this->___U3CSerializedDataU3Ek__BackingField_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSerializedDataU3Ek__BackingField_6), (void*)L_4);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_5 = ___pool3;
		__this->___U3CDescriptorPoolU3Ek__BackingField_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptorPoolU3Ek__BackingField_7), (void*)L_5);
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_6 = ___proto1;
		__this->___U3CProtoU3Ek__BackingField_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtoU3Ek__BackingField_0), (void*)L_6);
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_7 = ___dependencies2;
		NullCheck((RuntimeArray*)L_7);
		RuntimeObject* L_8;
		L_8 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_7, NULL);
		ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C* L_9 = (ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C*)il2cpp_codegen_object_new(ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ReadOnlyCollection_1__ctor_m221A63BD59DA122E0B62C1AD04C36EAFF27C73AB(L_9, (RuntimeObject*)((FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)Castclass((RuntimeObject*)L_8, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var)), ReadOnlyCollection_1__ctor_m221A63BD59DA122E0B62C1AD04C36EAFF27C73AB_RuntimeMethod_var);
		__this->___U3CDependenciesU3Ek__BackingField_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDependenciesU3Ek__BackingField_4), (void*)L_9);
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_10 = ___proto1;
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_11 = ___dependencies2;
		bool L_12 = ___allowUnknownDependencies4;
		il2cpp_codegen_runtime_class_init_inline(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = FileDescriptor_DeterminePublicDependencies_m677FD08FF37563DFF18071AE81258915F8FAD464(__this, L_10, L_11, L_12, NULL);
		__this->___U3CPublicDependenciesU3Ek__BackingField_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicDependenciesU3Ek__BackingField_5), (void*)L_13);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_14 = ___pool3;
		String_t* L_15;
		L_15 = FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F(__this, NULL);
		NullCheck(L_14);
		DescriptorPool_AddPackage_mDB0420EC8C2298C7A48F64DB23C9F184020A0726(L_14, L_15, __this, NULL);
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_16 = ___proto1;
		NullCheck(L_16);
		RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* L_17;
		L_17 = FileDescriptorProto_get_MessageType_mF25E37F200D120C827C8BBA90488F69CD20BF6F0(L_16, NULL);
		U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* L_18 = V_0;
		IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C* L_19 = (IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C*)il2cpp_codegen_object_new(IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		IndexedConverter_2__ctor_m19E1854900D5593942F4E42D26A07C8B2041E605(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__0_m569CE14BC6D7BDFCE7E5E3696DCF8E9A5D9FDCF5_RuntimeMethod_var), NULL);
		RuntimeObject* L_20;
		L_20 = DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_mFB7C9089EC21195DA0BECEDC7D98B9E954A6C827(L_17, L_19, DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_mFB7C9089EC21195DA0BECEDC7D98B9E954A6C827_RuntimeMethod_var);
		__this->___U3CMessageTypesU3Ek__BackingField_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageTypesU3Ek__BackingField_1), (void*)L_20);
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_21 = ___proto1;
		NullCheck(L_21);
		RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* L_22;
		L_22 = FileDescriptorProto_get_EnumType_m6BFF3649A4E8316E9FB6009D4EE3493FD5796DE1(L_21, NULL);
		U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* L_23 = V_0;
		IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4* L_24 = (IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4*)il2cpp_codegen_object_new(IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		IndexedConverter_2__ctor_m87415CE302C72DDD3B741B5A6EEEB4E430D14F43(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__1_mB0808FCE98EE03664FB2977C3189C320468E0DE5_RuntimeMethod_var), NULL);
		RuntimeObject* L_25;
		L_25 = DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_mF9DC235EACD0435D6754F4D77F9F17874EFD9762(L_22, L_24, DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_mF9DC235EACD0435D6754F4D77F9F17874EFD9762_RuntimeMethod_var);
		__this->___U3CEnumTypesU3Ek__BackingField_2 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnumTypesU3Ek__BackingField_2), (void*)L_25);
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_26 = ___proto1;
		NullCheck(L_26);
		RepeatedField_1_t7DD3B3236E6DD9A822E98695E3F915473E7927C0* L_27;
		L_27 = FileDescriptorProto_get_Service_m028FD03406248D6A3B872FA38067AB0D082A842B(L_26, NULL);
		IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F* L_28 = (IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F*)il2cpp_codegen_object_new(IndexedConverter_2_tFEA20DCDF86D6B9BC3B4DC2DFB291D45A2EB589F_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		IndexedConverter_2__ctor_m774105225CBCFE1903016F273F2CF09CF560569C(L_28, __this, (intptr_t)((void*)FileDescriptor_U3C_ctorU3Eb__1_2_m2B13EA282FCF353C70BB12AE922462F5084415D9_RuntimeMethod_var), NULL);
		RuntimeObject* L_29;
		L_29 = DescriptorUtil_ConvertAndMakeReadOnly_TisServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438_TisServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_mD73A25E0370E4FFAAE4E55041BFC75D881CFCBBA(L_27, L_28, DescriptorUtil_ConvertAndMakeReadOnly_TisServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438_TisServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_mD73A25E0370E4FFAAE4E55041BFC75D881CFCBBA_RuntimeMethod_var);
		__this->___U3CServicesU3Ek__BackingField_3 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServicesU3Ek__BackingField_3), (void*)L_29);
		return;
	}
}
// System.String Google.Protobuf.Reflection.FileDescriptor::ComputeFullName(Google.Protobuf.Reflection.MessageDescriptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = ___parent0;
		V_0 = (bool)((!(((RuntimeObject*)(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = ___parent0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D(L_2, NULL);
		String_t* L_4 = ___name1;
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_4, NULL);
		V_1 = L_5;
		goto IL_0049;
	}

IL_001e:
	{
		String_t* L_6;
		L_6 = FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_9;
		L_9 = FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F(__this, NULL);
		String_t* L_10 = ___name1;
		String_t* L_11;
		L_11 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_9, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_10, NULL);
		V_1 = L_11;
		goto IL_0049;
	}

IL_0045:
	{
		String_t* L_12 = ___name1;
		V_1 = L_12;
		goto IL_0049;
	}

IL_0049:
	{
		String_t* L_13 = V_1;
		return L_13;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::DeterminePublicDependencies(Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.FileDescriptorProto,Google.Protobuf.Reflection.FileDescriptor[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_DeterminePublicDependencies_m677FD08FF37563DFF18071AE81258915F8FAD464 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___this0, FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___proto1, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies2, bool ___allowUnknownDependencies3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m131DA44ABC43C30B8DF2E02F9115B2576BD29ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF28567A5499A76FFE6033CB7B95E71A09814F38A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m923BF8D683CB9B551CB82F5EF7B406905600507F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m381F0355B9A3F3034ACE3A9564BC38C7A0916B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5694B8C17080DC391E3E246F2225BE78DAA40B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m221A63BD59DA122E0B62C1AD04C36EAFF27C73AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Count_mA0298EA3DB42DB62CE6E3A358C3DCDA1F0E727CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Count_mB34633071167B2DC07F9490964996552D8D62165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Item_m7664D803BA3EABB40CB97EF021076A294D555754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Item_mB6168B8598D5CE7E89ABEED2F5938CA2E5151B33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD* V_0 = NULL;
	List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5* V_1 = NULL;
	FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* V_2 = NULL;
	int32_t V_3 = 0;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	RuntimeObject* V_13 = NULL;
	int32_t G_B7_0 = 0;
	{
		Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD* L_0 = (Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD*)il2cpp_codegen_object_new(Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m131DA44ABC43C30B8DF2E02F9115B2576BD29ACC(L_0, Dictionary_2__ctor_m131DA44ABC43C30B8DF2E02F9115B2576BD29ACC_RuntimeMethod_var);
		V_0 = L_0;
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_1 = ___dependencies2;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0029;
	}

IL_000e:
	{
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD* L_6 = V_0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(L_7, NULL);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_9 = V_4;
		NullCheck(L_6);
		Dictionary_2_set_Item_m923BF8D683CB9B551CB82F5EF7B406905600507F(L_6, L_8, L_9, Dictionary_2_set_Item_m923BF8D683CB9B551CB82F5EF7B406905600507F_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0029:
	{
		int32_t L_11 = V_3;
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5* L_13 = (List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5*)il2cpp_codegen_object_new(List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_m5694B8C17080DC391E3E246F2225BE78DAA40B2D(L_13, List_1__ctor_m5694B8C17080DC391E3E246F2225BE78DAA40B2D_RuntimeMethod_var);
		V_1 = L_13;
		V_5 = 0;
		goto IL_00d2;
	}

IL_003d:
	{
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_14 = ___proto1;
		NullCheck(L_14);
		RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* L_15;
		L_15 = FileDescriptorProto_get_PublicDependency_m875714F2F58D9714E3FA5B88BB8C5ACA855EA157(L_14, NULL);
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = RepeatedField_1_get_Item_m7664D803BA3EABB40CB97EF021076A294D555754(L_15, L_16, RepeatedField_1_get_Item_m7664D803BA3EABB40CB97EF021076A294D555754_RuntimeMethod_var);
		V_6 = L_17;
		int32_t L_18 = V_6;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_19 = V_6;
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_20 = ___proto1;
		NullCheck(L_20);
		RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* L_21;
		L_21 = FileDescriptorProto_get_Dependency_mFF3DCD4D322807904D2F712DD7B8001429794519(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = RepeatedField_1_get_Count_mA0298EA3DB42DB62CE6E3A358C3DCDA1F0E727CA_inline(L_21, RepeatedField_1_get_Count_mA0298EA3DB42DB62CE6E3A358C3DCDA1F0E727CA_RuntimeMethod_var);
		G_B7_0 = ((((int32_t)((((int32_t)L_19) < ((int32_t)L_22))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0067;
	}

IL_0066:
	{
		G_B7_0 = 1;
	}

IL_0067:
	{
		V_9 = (bool)G_B7_0;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_007a;
		}
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_24 = ___this0;
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_25 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_25, L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF2572217AFE5A8599667EB3119CDA220CCD2883)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileDescriptor_DeterminePublicDependencies_m677FD08FF37563DFF18071AE81258915F8FAD464_RuntimeMethod_var)));
	}

IL_007a:
	{
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_26 = ___proto1;
		NullCheck(L_26);
		RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* L_27;
		L_27 = FileDescriptorProto_get_Dependency_mFF3DCD4D322807904D2F712DD7B8001429794519(L_26, NULL);
		int32_t L_28 = V_6;
		NullCheck(L_27);
		String_t* L_29;
		L_29 = RepeatedField_1_get_Item_mB6168B8598D5CE7E89ABEED2F5938CA2E5151B33(L_27, L_28, RepeatedField_1_get_Item_mB6168B8598D5CE7E89ABEED2F5938CA2E5151B33_RuntimeMethod_var);
		V_7 = L_29;
		Dictionary_2_t6ADF0FAAA960DC04C892BD9D35DB8E0F8F79C1CD* L_30 = V_0;
		String_t* L_31 = V_7;
		NullCheck(L_30);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_32;
		L_32 = Dictionary_2_get_Item_mF28567A5499A76FFE6033CB7B95E71A09814F38A(L_30, L_31, Dictionary_2_get_Item_mF28567A5499A76FFE6033CB7B95E71A09814F38A_RuntimeMethod_var);
		V_8 = L_32;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_33 = V_8;
		V_10 = (bool)((((RuntimeObject*)(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE*)L_33) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_00c0;
		}
	}
	{
		bool L_35 = ___allowUnknownDependencies3;
		V_11 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_11;
		if (!L_36)
		{
			goto IL_00bd;
		}
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_37 = ___this0;
		String_t* L_38 = V_7;
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD4BF78B506AF95C9D9DE8C8B3E0BC4922706861)), L_38, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_40 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_40);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_40, L_37, L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileDescriptor_DeterminePublicDependencies_m677FD08FF37563DFF18071AE81258915F8FAD464_RuntimeMethod_var)));
	}

IL_00bd:
	{
		goto IL_00cb;
	}

IL_00c0:
	{
		List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5* L_41 = V_1;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_42 = V_8;
		NullCheck(L_41);
		List_1_Add_m381F0355B9A3F3034ACE3A9564BC38C7A0916B54_inline(L_41, L_42, List_1_Add_m381F0355B9A3F3034ACE3A9564BC38C7A0916B54_RuntimeMethod_var);
	}

IL_00cb:
	{
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00d2:
	{
		int32_t L_44 = V_5;
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_45 = ___proto1;
		NullCheck(L_45);
		RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* L_46;
		L_46 = FileDescriptorProto_get_PublicDependency_m875714F2F58D9714E3FA5B88BB8C5ACA855EA157(L_45, NULL);
		NullCheck(L_46);
		int32_t L_47;
		L_47 = RepeatedField_1_get_Count_mB34633071167B2DC07F9490964996552D8D62165_inline(L_46, RepeatedField_1_get_Count_mB34633071167B2DC07F9490964996552D8D62165_RuntimeMethod_var);
		V_12 = (bool)((((int32_t)L_44) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_12;
		if (L_48)
		{
			goto IL_003d;
		}
	}
	{
		List_1_tD2F5DF13A0F8F6803F6B6443D5EC14C558276CF5* L_49 = V_1;
		ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C* L_50 = (ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C*)il2cpp_codegen_object_new(ReadOnlyCollection_1_tC8B886ECD2E5BF114E9A2FE6B4243FB7D613886C_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		ReadOnlyCollection_1__ctor_m221A63BD59DA122E0B62C1AD04C36EAFF27C73AB(L_50, L_49, ReadOnlyCollection_1__ctor_m221A63BD59DA122E0B62C1AD04C36EAFF27C73AB_RuntimeMethod_var);
		V_13 = L_50;
		goto IL_00f4;
	}

IL_00f4:
	{
		RuntimeObject* L_51 = V_13;
		return L_51;
	}
}
// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* FileDescriptor_get_Proto_m403A8AB373CF6673929D90243198F2A249E1FF1A (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_0 = __this->___U3CProtoU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_0;
		L_0 = FileDescriptor_get_Proto_m403A8AB373CF6673929D90243198F2A249E1FF1A_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptorProto_get_Name_m7F784B792E8525384825FAF5867D075E75E104A8(L_0, NULL);
		return L_1;
	}
}
// System.String Google.Protobuf.Reflection.FileDescriptor::get_Package()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_0;
		L_0 = FileDescriptor_get_Proto_m403A8AB373CF6673929D90243198F2A249E1FF1A_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptorProto_get_Package_m648AC361F33374AE5687B1B0C15692AAE823966B(L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_EnumTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_EnumTypes_m49C611E8A3F94BDFE0DF41E3601D0615525F405F (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEnumTypesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_Services()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Services_m32AE49DE554CD6104A5792813F458B1E1A065A8D (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CServicesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_Dependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_mAC7C5AB2751A6B9A4A2F6AE3A4E0DB2216793F7C (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDependenciesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_PublicDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_PublicDependencies_m9AF26625B245B51A7BE4E5B43308ECCCA771F4A3 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CPublicDependenciesU3Ek__BackingField_5;
		return L_0;
	}
}
// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::get_SerializedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* FileDescriptor_get_SerializedData_m7E7456ECDD34D0DDAAA67A180BABE7DC4E1ED56A (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0 = __this->___U3CSerializedDataU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String Google.Protobuf.Reflection.FileDescriptor::Google.Protobuf.Reflection.IDescriptor.get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_Google_Protobuf_Reflection_IDescriptor_get_FullName_mCB5A444A78500140F008881845580F77ADBA95A4 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(__this, NULL);
		return L_0;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor::Google.Protobuf.Reflection.IDescriptor.get_File()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FileDescriptor_Google_Protobuf_Reflection_IDescriptor_get_File_mD6F242AC83348B858D1748B0340E9687D1CD38E6 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		return __this;
	}
}
// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::get_DescriptorPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_0 = __this->___U3CDescriptorPoolU3Ek__BackingField_7;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor::BuildFrom(Google.Protobuf.ByteString,Google.Protobuf.Reflection.FileDescriptorProto,Google.Protobuf.Reflection.FileDescriptor[],System.Boolean,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FileDescriptor_BuildFrom_m6AC7E2163109EB8702745047EEB5FB6DAC8E43FB (ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___descriptorData0, FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___proto1, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies2, bool ___allowUnknownDependencies3, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Count_mA0298EA3DB42DB62CE6E3A358C3DCDA1F0E727CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* V_0 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_4 = NULL;
	{
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_0 = ___dependencies2;
		V_2 = (bool)((((RuntimeObject*)(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_2 = (FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F*)SZArrayNew(FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F_il2cpp_TypeInfo_var, (uint32_t)0);
		___dependencies2 = L_2;
	}

IL_0013:
	{
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_3 = ___dependencies2;
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_4 = (DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94*)il2cpp_codegen_object_new(DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DescriptorPool__ctor_m4A2292BFC87CE8CD00435FA11E75F22FF0D2651E(L_4, L_3, NULL);
		V_0 = L_4;
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_5 = ___descriptorData0;
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_6 = ___proto1;
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_7 = ___dependencies2;
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_8 = V_0;
		bool L_9 = ___allowUnknownDependencies3;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_10 = ___generatedCodeInfo4;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_11 = (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE*)il2cpp_codegen_object_new(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FileDescriptor__ctor_m3C90E1E789357CB312A1FCD7B0A5CF9008F5DB91(L_11, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		V_1 = L_11;
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_12 = ___dependencies2;
		NullCheck(L_12);
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_13 = ___proto1;
		NullCheck(L_13);
		RepeatedField_1_tDBC9CC23DDC2FC0F87E34F80D66034BB0F149A58* L_14;
		L_14 = FileDescriptorProto_get_Dependency_mFF3DCD4D322807904D2F712DD7B8001429794519(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RepeatedField_1_get_Count_mA0298EA3DB42DB62CE6E3A358C3DCDA1F0E727CA_inline(L_14, RepeatedField_1_get_Count_mA0298EA3DB42DB62CE6E3A358C3DCDA1F0E727CA_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_004b;
		}
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_17 = V_1;
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_18 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8287231C522EC5240BB4762F274EAA67AE5E8F2A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileDescriptor_BuildFrom_m6AC7E2163109EB8702745047EEB5FB6DAC8E43FB_RuntimeMethod_var)));
	}

IL_004b:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_19 = V_1;
		NullCheck(L_19);
		FileDescriptor_CrossLink_m1F3D9C581B38B6BE2DF68C22DD9543D4658345D5(L_19, NULL);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_20 = V_1;
		V_4 = L_20;
		goto IL_0057;
	}

IL_0057:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_21 = V_4;
		return L_21;
	}
}
// System.Void Google.Protobuf.Reflection.FileDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDescriptor_CrossLink_m1F3D9C581B38B6BE2DF68C22DD9543D4658345D5 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6DDB4A3EE2CF2F2D9E20BA82ED645D522FC7C02F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t644DE6CCB5DEEFAB8C51145F7F385B5CCAD00BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* V_3 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_5;
				L_5 = InterfaceFuncInvoker0< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_6 = V_1;
				NullCheck(L_6);
				MessageDescriptor_CrossLink_mCEDFF8C6BDA2083BA94CB583CEE6AD31E6294C20(L_6, NULL);
			}

IL_0020_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		RuntimeObject* L_9;
		L_9 = FileDescriptor_get_Services_m32AE49DE554CD6104A5792813F458B1E1A065A8D_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.ServiceDescriptor>::GetEnumerator() */, IEnumerable_1_t6DDB4A3EE2CF2F2D9E20BA82ED645D522FC7C02F_il2cpp_TypeInfo_var, L_9);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_0068;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0068:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_0044_1:
			{
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_14;
				L_14 = InterfaceFuncInvoker0< ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.ServiceDescriptor>::get_Current() */, IEnumerator_1_t644DE6CCB5DEEFAB8C51145F7F385B5CCAD00BA7_il2cpp_TypeInfo_var, L_13);
				V_3 = L_14;
				ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_15 = V_3;
				NullCheck(L_15);
				ServiceDescriptor_CrossLink_mF0C898B5054B4C42EAD3B06FD4089772D3D9B0E8(L_15, NULL);
			}

IL_0054_1:
			{
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		return;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor::FromGeneratedCode(System.Byte[],Google.Protobuf.Reflection.FileDescriptor[],Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FileDescriptor_FromGeneratedCode_m53EE79143A40F13ECCE827E2F3E6DA01206950E3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___descriptorData0, FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___dependencies1, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_ParseFrom_mDB05C51FC30FB700344433E3AD634AA43F29F945_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* V_0 = NULL;
	InvalidProtocolBufferException_t43CA2E0CAEA8A4C3E9C5E09C0FB6FCA23CEB4927* V_1 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_2 = NULL;
	DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4_il2cpp_TypeInfo_var);
		MessageParser_1_t3B3CFF200F72B92CDC0FCC070921741B940A1EC0* L_0;
		L_0 = FileDescriptorProto_get_Parser_m32C7BBC6B4AEDB82515DD248B1E735F0DCDD7476(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___descriptorData0;
		NullCheck(L_0);
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_2;
		L_2 = MessageParser_1_ParseFrom_mDB05C51FC30FB700344433E3AD634AA43F29F945(L_0, L_1, MessageParser_1_ParseFrom_mDB05C51FC30FB700344433E3AD634AA43F29F945_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_001f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidProtocolBufferException_t43CA2E0CAEA8A4C3E9C5E09C0FB6FCA23CEB4927_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0011;
		}
		throw e;
	}

CATCH_0011:
	{// begin catch(Google.Protobuf.InvalidProtocolBufferException)
		V_1 = ((InvalidProtocolBufferException_t43CA2E0CAEA8A4C3E9C5E09C0FB6FCA23CEB4927*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidProtocolBufferException_t43CA2E0CAEA8A4C3E9C5E09C0FB6FCA23CEB4927*));
		InvalidProtocolBufferException_t43CA2E0CAEA8A4C3E9C5E09C0FB6FCA23CEB4927* L_3 = V_1;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_mFDDC94E3C94B43E2DFBDA15DD749315C5B246512(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A029722E55AC589CC837C0D437E8F93124EDCF9)), L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileDescriptor_FromGeneratedCode_m53EE79143A40F13ECCE827E2F3E6DA01206950E3_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_001f:
	{
	}
	try
	{// begin try (depth: 1)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___descriptorData0;
		il2cpp_codegen_runtime_class_init_inline(ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_6;
		L_6 = ByteString_CopyFrom_m7C1705BE941190F9F77120C51DB84A385A214AF6(L_5, NULL);
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_7 = V_0;
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_8 = ___dependencies1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_9 = ___generatedCodeInfo2;
		il2cpp_codegen_runtime_class_init_inline(FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_10;
		L_10 = FileDescriptor_BuildFrom_m6AC7E2163109EB8702745047EEB5FB6DAC8E43FB(L_6, L_7, L_8, (bool)1, L_9, NULL);
		V_2 = L_10;
		goto IL_004c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{// begin catch(Google.Protobuf.Reflection.DescriptorValidationException)
		V_3 = ((DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)IL2CPP_GET_ACTIVE_EXCEPTION(DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*));
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = FileDescriptorProto_get_Name_m7F784B792E8525384825FAF5867D075E75E104A8(L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA19DAAB22B0AE3CE6FDE25115E86465DA1B818F0)), L_12, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_14 = V_3;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_mFDDC94E3C94B43E2DFBDA15DD749315C5B246512(L_15, L_13, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileDescriptor_FromGeneratedCode_m53EE79143A40F13ECCE827E2F3E6DA01206950E3_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_004c:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_16 = V_2;
		return L_16;
	}
}
// System.String Google.Protobuf.Reflection.FileDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDescriptor_ToString_mA1932CF907F759EE4ED683CF346656A9D4B95AF4 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral730A568E1D2D29F3D42AACEA8E360D92455473B7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(__this, NULL);
		String_t* L_1;
		L_1 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral730A568E1D2D29F3D42AACEA8E360D92455473B7, L_0, NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor::get_DescriptorProtoFileDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* FileDescriptor_get_DescriptorProtoFileDescriptor_mD7F9F5EB980F388A144E408801A98B43A5A19FE1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorReflection_t4B4D036458780DB7F635EEBA03862C2DF7485791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(DescriptorReflection_t4B4D036458780DB7F635EEBA03862C2DF7485791_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorReflection_get_Descriptor_m4C24D5D32366DB1BB72144F6B0339C61B8B3BAA2(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.FileDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* FileDescriptor_get_CustomOptions_mE7729567480861AA463986BB467231159E6EE688 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4* G_B2_0 = NULL;
	FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4* G_B1_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B3_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B5_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B4_0 = NULL;
	{
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_0;
		L_0 = FileDescriptor_get_Proto_m403A8AB373CF6673929D90243198F2A249E1FF1A_inline(__this, NULL);
		NullCheck(L_0);
		FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4* L_1;
		L_1 = FileDescriptorProto_get_Options_m01BF2F50675E4CDC812593E831772C3B4FAA3773(L_0, NULL);
		FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)(NULL));
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_3;
		L_3 = FileOptions_get_CustomOptions_m123426CB271D1B7CCEC2B470D2BEBC8A1767C23C_inline(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_5 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields*)il2cpp_codegen_static_fields_for(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var))->___Empty_0;
		G_B5_0 = L_5;
	}

IL_0020:
	{
		return G_B5_0;
	}
}
// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.FileDescriptor::<.ctor>b__1_2(Google.Protobuf.Reflection.ServiceDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* FileDescriptor_U3C_ctorU3Eb__1_2_m2B13EA282FCF353C70BB12AE922462F5084415D9 (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ___service0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0 = ___service0;
		int32_t L_1 = ___index1;
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_2 = (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE*)il2cpp_codegen_object_new(ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ServiceDescriptor__ctor_m70D586A7D348405DE1CCE844D4E855FB93602CF9(L_2, L_0, __this, L_1, NULL);
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
// System.Void Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mF1001F30F100A73773A89AB21F9CC1F835315C76 (U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass1_0::<.ctor>b__0(Google.Protobuf.Reflection.DescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__0_m569CE14BC6D7BDFCE7E5E3696DCF8E9A5D9FDCF5 (U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* __this, DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___message0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0 = ___message0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___U3CU3E4__this_1;
		int32_t L_2 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_3 = __this->___generatedCodeInfo_0;
		NullCheck(L_3);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_4;
		L_4 = GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0_inline(L_3, NULL);
		int32_t L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_8 = (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)il2cpp_codegen_object_new(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78(L_8, L_0, L_1, (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)NULL, L_2, L_7, NULL);
		return L_8;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.FileDescriptor/<>c__DisplayClass1_0::<.ctor>b__1(Google.Protobuf.Reflection.EnumDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* U3CU3Ec__DisplayClass1_0_U3C_ctorU3Eb__1_mB0808FCE98EE03664FB2977C3189C320468E0DE5 (U3CU3Ec__DisplayClass1_0_tB2EC92A5004827E6DF5566FED7A5A99A0977A46A* __this, EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* ___enumType0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_0 = ___enumType0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___U3CU3E4__this_1;
		int32_t L_2 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_3 = __this->___generatedCodeInfo_0;
		NullCheck(L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4;
		L_4 = GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC_inline(L_3, NULL);
		int32_t L_5 = ___index1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Type_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_8 = (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)il2cpp_codegen_object_new(EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EnumDescriptor__ctor_m5DF396F94AFB86FE46AC0D53FDCBAE16DC910FBE(L_8, L_0, L_1, (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)NULL, L_2, L_7, NULL);
		return L_8;
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
// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_ClrType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m5B443B2BB0A3783E56682580703FF212AF9AEDC2 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::set_ClrType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_m744F6287D106FBDF0B7E00832E5800CCA326AA08 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CClrTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClrTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* GeneratedClrTypeInfo_get_Parser_m4C53F2D6CB863279546D11DE7B3D53ED351B48A8 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_0 = __this->___U3CParserU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_PropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m90234348C0C94D290A5B78AE50B651C4CDD8E302 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CPropertyNamesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_OneofNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_mEB47A698EDAC7237464F2AD15643BA0E43A5B0D6 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COneofNamesU3Ek__BackingField_5;
		return L_0;
	}
}
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::get_NestedEnums()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CNestedEnumsU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m99B9737F8FA9ADA1D9E0A059170EBBF4E37856A7 (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___clrType0, MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___parser1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertyNames2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___oneofNames3, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* G_B2_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_1 = NULL;
	GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* G_B1_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B4_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B4_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B3_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B3_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B6_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B5_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B8_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B7_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_0 = ___nestedTypes5;
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_2 = ((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0014:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CNestedTypesU3Ek__BackingField_6 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CNestedTypesU3Ek__BackingField_6), (void*)G_B2_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = ___nestedEnums4;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = ((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___EmptyTypes_0;
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
	}

IL_0025:
	{
		NullCheck(G_B4_1);
		G_B4_1->___U3CNestedEnumsU3Ek__BackingField_7 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3CNestedEnumsU3Ek__BackingField_7), (void*)G_B4_0);
		Type_t* L_6 = ___clrType0;
		GeneratedClrTypeInfo_set_ClrType_m744F6287D106FBDF0B7E00832E5800CCA326AA08_inline(__this, L_6, NULL);
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_7 = ___parser1;
		__this->___U3CParserU3Ek__BackingField_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParserU3Ek__BackingField_3), (void*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___propertyNames2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		G_B5_0 = L_9;
		G_B5_1 = __this;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = __this;
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyNames_0;
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
	}

IL_0044:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CPropertyNamesU3Ek__BackingField_4 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CPropertyNamesU3Ek__BackingField_4), (void*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___oneofNames3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		G_B7_0 = L_12;
		G_B7_1 = __this;
		if (L_12)
		{
			G_B8_0 = L_12;
			G_B8_1 = __this;
			goto IL_0055;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyNames_0;
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
	}

IL_0055:
	{
		NullCheck(G_B8_1);
		G_B8_1->___U3COneofNamesU3Ek__BackingField_5 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___U3COneofNamesU3Ek__BackingField_5), (void*)G_B8_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m4B87283798FCFBF617184A3F5417575E243A6F1E (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___nestedEnums0, GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* ___nestedTypes1, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___nestedEnums0;
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_1 = ___nestedTypes1;
		GeneratedClrTypeInfo__ctor_m99B9737F8FA9ADA1D9E0A059170EBBF4E37856A7(__this, (Type_t*)NULL, (MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__cctor_m8814621DDAE64113D2F19782D6D79C564199A692 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyNames_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyNames_0), (void*)L_0);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_1 = (GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89_il2cpp_TypeInfo_var, (uint32_t)0);
		((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_StaticFields*)il2cpp_codegen_static_fields_for(GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E_il2cpp_TypeInfo_var))->___EmptyCodeInfo_1), (void*)L_1);
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
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor__ctor_mB4B09BC7300B0D0B7C0D6A2C126DCC2FDE7F282C (MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = ___property0;
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_1 = ___descriptor1;
		FieldAccessorBase__ctor_m756C8E5E365EACEDB10427BA73338222AAE0C279(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor_Clear_m608EF056A1BC6EDC1ADBD649181B291B24A09263 (MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___message0;
		RuntimeObject* L_1;
		L_1 = FieldAccessorBase_GetValue_mABB52C5E5391C56E34EE9254B629D0E05BD425D6(__this, L_0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(6 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MapFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFieldAccessor_SetValue_m8D2215877377E1F8C78F69B39D58D8BF2CCAC798 (MapFieldAccessor_tAFEEF2867D6275E9E7B870A029E4098B3151B9F0* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA2199D3FAB3E9A0592694D9E1A42317C06006B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapFieldAccessor_SetValue_m8D2215877377E1F8C78F69B39D58D8BF2CCAC798_RuntimeMethod_var)));
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.ctor(Google.Protobuf.Reflection.DescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___typeIndex3, GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* ___generatedCodeInfo4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_mFB7C9089EC21195DA0BECEDC7D98B9E954A6C827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_mF9DC235EACD0435D6754F4D77F9F17874EFD9762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m26AEE0AD695C5BDFECFC0E36CF9D665A14F58616_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m5E01D5F8513D05839423BA6A99ACA6BEDEDE51EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m433BEFD6923E79FF4AA0B787B223EA2D9D12E32F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m01CE22040E1AF9A88B8E460C2499E214C28FD2E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__4_4_mC9A689081510F95D0EFE3892B2828040DE70EA0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mFF9BA6EEFE068F054619A2FDA75E12840AFBF97D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__1_m32DD9584814C82640DD629EEBCEE38FF8E193504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__2_m10EEC948AC8C6C6C96DA79996ECDEFC3F5E54139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__3_m9AE10770D9E560FFF160EA6B8D840C22D05CE601_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* V_0 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B2_1 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B1_1 = NULL;
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* G_B3_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B3_1 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B5_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B5_1 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B4_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B4_1 = NULL;
	Type_t* G_B6_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B6_1 = NULL;
	Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B8_2 = NULL;
	Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B7_2 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_0 = (U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m0B17C8E7A00E1D11D012DA3875B6FBEA00C44E3F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_1 = V_0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_2 = ___file1;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_3 = V_0;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = ___generatedCodeInfo4;
		NullCheck(L_3);
		L_3->___generatedCodeInfo_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___generatedCodeInfo_1), (void*)L_4);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_5 = V_0;
		NullCheck(L_5);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_6 = L_5->___file_0;
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_7 = V_0;
		NullCheck(L_7);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_8 = L_7->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_9 = ___parent2;
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_10 = ___proto0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = DescriptorProto_get_Name_mB58CFB6E06E100F9A1DDEC369CDB332126160AFB(L_10, NULL);
		NullCheck(L_8);
		String_t* L_12;
		L_12 = FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F(L_8, L_9, L_11, NULL);
		int32_t L_13 = ___typeIndex3;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_6, L_12, L_13, NULL);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_14 = V_0;
		NullCheck(L_14);
		L_14->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___U3CU3E4__this_2), (void*)__this);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_15 = ___proto0;
		__this->___U3CProtoU3Ek__BackingField_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProtoU3Ek__BackingField_7), (void*)L_15);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_16 = V_0;
		NullCheck(L_16);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_17 = L_16->___generatedCodeInfo_1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_18 = L_17;
		G_B1_0 = L_18;
		G_B1_1 = __this;
		if (L_18)
		{
			G_B2_0 = L_18;
			G_B2_1 = __this;
			goto IL_0053;
		}
	}
	{
		G_B3_0 = ((MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0058;
	}

IL_0053:
	{
		NullCheck(G_B2_0);
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_19;
		L_19 = GeneratedClrTypeInfo_get_Parser_m4C53F2D6CB863279546D11DE7B3D53ED351B48A8_inline(G_B2_0, NULL);
		G_B3_0 = L_19;
		G_B3_1 = G_B2_1;
	}

IL_0058:
	{
		NullCheck(G_B3_1);
		G_B3_1->___U3CParserU3Ek__BackingField_9 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___U3CParserU3Ek__BackingField_9), (void*)G_B3_0);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_20 = V_0;
		NullCheck(L_20);
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_21 = L_20->___generatedCodeInfo_1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_22 = L_21;
		G_B4_0 = L_22;
		G_B4_1 = __this;
		if (L_22)
		{
			G_B5_0 = L_22;
			G_B5_1 = __this;
			goto IL_006b;
		}
	}
	{
		G_B6_0 = ((Type_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0070;
	}

IL_006b:
	{
		NullCheck(G_B5_0);
		Type_t* L_23;
		L_23 = GeneratedClrTypeInfo_get_ClrType_m5B443B2BB0A3783E56682580703FF212AF9AEDC2_inline(G_B5_0, NULL);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
	}

IL_0070:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CClrTypeU3Ek__BackingField_8 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3CClrTypeU3Ek__BackingField_8), (void*)G_B6_0);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_24 = ___parent2;
		__this->___U3CContainingTypeU3Ek__BackingField_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContainingTypeU3Ek__BackingField_10), (void*)L_24);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_25 = ___proto0;
		NullCheck(L_25);
		RepeatedField_1_t9F109E2AE6C6DAA3EA0EE23E4CD97052F9301FC4* L_26;
		L_26 = DescriptorProto_get_OneofDecl_m88B6455AEF8DA27F82D763680A03D0B9E1565BDD(L_25, NULL);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_27 = V_0;
		IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9* L_28 = (IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9*)il2cpp_codegen_object_new(IndexedConverter_2_tFF5D05C491F41287F243B4B526A8DADCC34E0BA9_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		IndexedConverter_2__ctor_m7A2C9983C97A680D32FD61DC7AE7537CD0A77236(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mFF9BA6EEFE068F054619A2FDA75E12840AFBF97D_RuntimeMethod_var), NULL);
		RuntimeObject* L_29;
		L_29 = DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m5E01D5F8513D05839423BA6A99ACA6BEDEDE51EB(L_26, L_28, DescriptorUtil_ConvertAndMakeReadOnly_TisOneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A_TisOneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_m5E01D5F8513D05839423BA6A99ACA6BEDEDE51EB_RuntimeMethod_var);
		__this->___U3COneofsU3Ek__BackingField_14 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COneofsU3Ek__BackingField_14), (void*)L_29);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_30 = ___proto0;
		NullCheck(L_30);
		RepeatedField_1_t1647174A532CD385C86A4013E9A94E3ED25C783B* L_31;
		L_31 = DescriptorProto_get_NestedType_mFB07AE39857C24A91E7C49707962CFB6D43038F1(L_30, NULL);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_32 = V_0;
		IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C* L_33 = (IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C*)il2cpp_codegen_object_new(IndexedConverter_2_tFCAD597B937F3CEFE1C8FFF01A3045CE41F4F67C_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		IndexedConverter_2__ctor_m19E1854900D5593942F4E42D26A07C8B2041E605(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__1_m32DD9584814C82640DD629EEBCEE38FF8E193504_RuntimeMethod_var), NULL);
		RuntimeObject* L_34;
		L_34 = DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_mFB7C9089EC21195DA0BECEDC7D98B9E954A6C827(L_31, L_33, DescriptorUtil_ConvertAndMakeReadOnly_TisDescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_mFB7C9089EC21195DA0BECEDC7D98B9E954A6C827_RuntimeMethod_var);
		__this->___U3CNestedTypesU3Ek__BackingField_12 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNestedTypesU3Ek__BackingField_12), (void*)L_34);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_35 = ___proto0;
		NullCheck(L_35);
		RepeatedField_1_tD86397FCB230839D8CDFAD16012311B08C27B0D3* L_36;
		L_36 = DescriptorProto_get_EnumType_mB638C54384C16C50C1ECD0D5895A4E829F1BEF34(L_35, NULL);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_37 = V_0;
		IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4* L_38 = (IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4*)il2cpp_codegen_object_new(IndexedConverter_2_t3A6BE85E4DCF21D028DD56A9C8C71B10109B58C4_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		IndexedConverter_2__ctor_m87415CE302C72DDD3B741B5A6EEEB4E430D14F43(L_38, L_37, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__2_m10EEC948AC8C6C6C96DA79996ECDEFC3F5E54139_RuntimeMethod_var), NULL);
		RuntimeObject* L_39;
		L_39 = DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_mF9DC235EACD0435D6754F4D77F9F17874EFD9762(L_36, L_38, DescriptorUtil_ConvertAndMakeReadOnly_TisEnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344_TisEnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_mF9DC235EACD0435D6754F4D77F9F17874EFD9762_RuntimeMethod_var);
		__this->___U3CEnumTypesU3Ek__BackingField_13 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnumTypesU3Ek__BackingField_13), (void*)L_39);
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_40 = ___proto0;
		NullCheck(L_40);
		RepeatedField_1_t7E4B2149855E87DEBE33830CBE70920C8A6E52E1* L_41;
		L_41 = DescriptorProto_get_Field_m5C69AC6B1B0D580AC85EA12068D434A482DA18BA(L_40, NULL);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_42 = V_0;
		IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08* L_43 = (IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08*)il2cpp_codegen_object_new(IndexedConverter_2_t0DDCFB08F1D74E2C7092F67B7BD0E05107B62F08_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		IndexedConverter_2__ctor_m23548E454F54B7DACDEDFD4CA70FB37C63BBB4AC(L_43, L_42, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__3_m9AE10770D9E560FFF160EA6B8D840C22D05CE601_RuntimeMethod_var), NULL);
		RuntimeObject* L_44;
		L_44 = DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m26AEE0AD695C5BDFECFC0E36CF9D665A14F58616(L_41, L_43, DescriptorUtil_ConvertAndMakeReadOnly_TisFieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m26AEE0AD695C5BDFECFC0E36CF9D665A14F58616_RuntimeMethod_var);
		__this->___fieldsInDeclarationOrder_4 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fieldsInDeclarationOrder_4), (void*)L_44);
		RuntimeObject* L_45 = __this->___fieldsInDeclarationOrder_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* L_46 = ((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9__4_4_1;
		Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* L_47 = L_46;
		G_B7_0 = L_47;
		G_B7_1 = L_45;
		G_B7_2 = __this;
		if (L_47)
		{
			G_B8_0 = L_47;
			G_B8_1 = L_45;
			G_B8_2 = __this;
			goto IL_0116;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* L_48 = ((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* L_49 = (Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC*)il2cpp_codegen_object_new(Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		Func_2__ctor_mCB50FD0BBFFED49F5F9E0A145ED9A91DDE2E520B(L_49, L_48, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__4_4_mC9A689081510F95D0EFE3892B2828040DE70EA0D_RuntimeMethod_var), NULL);
		Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* L_50 = L_49;
		((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9__4_4_1 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9__4_4_1), (void*)L_50);
		G_B8_0 = L_50;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0116:
	{
		RuntimeObject* L_51;
		L_51 = Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m433BEFD6923E79FF4AA0B787B223EA2D9D12E32F(G_B8_1, G_B8_0, Enumerable_OrderBy_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m433BEFD6923E79FF4AA0B787B223EA2D9D12E32F_RuntimeMethod_var);
		FieldDescriptorU5BU5D_tBD6F168D4566F082DA9EBBDC4AA3D412F2E9BF81* L_52;
		L_52 = Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m01CE22040E1AF9A88B8E460C2499E214C28FD2E5(L_51, Enumerable_ToArray_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m01CE22040E1AF9A88B8E460C2499E214C28FD2E5_RuntimeMethod_var);
		ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B* L_53 = (ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3(L_53, (RuntimeObject*)L_52, ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var);
		NullCheck(G_B8_2);
		G_B8_2->___fieldsInNumberOrder_5 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___fieldsInNumberOrder_5), (void*)L_53);
		RuntimeObject* L_54 = __this->___fieldsInNumberOrder_5;
		il2cpp_codegen_runtime_class_init_inline(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250* L_55;
		L_55 = MessageDescriptor_CreateJsonFieldMap_m5C2727789EF0F030F9AAA08BC35F8FA41CD78C07(L_54, NULL);
		__this->___jsonFieldMap_6 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonFieldMap_6), (void*)L_55);
		U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* L_56 = V_0;
		NullCheck(L_56);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_57 = L_56->___file_0;
		NullCheck(L_57);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_58;
		L_58 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_57, NULL);
		NullCheck(L_58);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_58, __this, NULL);
		FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* L_59 = (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3*)il2cpp_codegen_object_new(FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		FieldCollection__ctor_m43EAACB34F71AEE419BD80BE4D81514F9A3FB35F(L_59, __this, NULL);
		__this->___U3CFieldsU3Ek__BackingField_11 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFieldsU3Ek__BackingField_11), (void*)L_59);
		return;
	}
}
// Google.Protobuf.Collections.ReadOnlyDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::CreateJsonFieldMap(System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250* MessageDescriptor_CreateJsonFieldMap_m5C2727789EF0F030F9AAA08BC35F8FA41CD78C07 (RuntimeObject* ___fields0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_mE5A8F25FECCA3E0D5DCAEE05755B1D9889ECD0DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_2 = NULL;
	ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250* V_3 = NULL;
	{
		Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* L_0 = (Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7*)il2cpp_codegen_object_new(Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA(L_0, Dictionary_2__ctor_mBD4E6729CB2CD78876040FFFB6EF66E6642B2CEA_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___fields0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_0011_1:
			{
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_6;
				L_6 = InterfaceFuncInvoker0< FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* L_7 = V_0;
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String Google.Protobuf.Reflection.DescriptorBase::get_Name() */, L_8);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_10 = V_2;
				NullCheck(L_7);
				Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6(L_7, L_9, L_10, Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6_RuntimeMethod_var);
				Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* L_11 = V_0;
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_12 = V_2;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = FieldDescriptor_get_JsonName_m1E7529AB79BEB8C99A1318FFDA81F6F4C9E81216_inline(L_12, NULL);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_14 = V_2;
				NullCheck(L_11);
				Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6(L_11, L_13, L_14, Dictionary_2_set_Item_m15158F9A79EA2D0686E04F916C77D923DCE592E6_RuntimeMethod_var);
			}

IL_0036_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_004b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		Dictionary_2_t31CFF5885A32B2296486F78FBD937CABF29763E7* L_17 = V_0;
		ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250* L_18 = (ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ReadOnlyDictionary_2__ctor_mE5A8F25FECCA3E0D5DCAEE05755B1D9889ECD0DA(L_18, L_17, ReadOnlyDictionary_2__ctor_mE5A8F25FECCA3E0D5DCAEE05755B1D9889ECD0DA_RuntimeMethod_var);
		V_3 = L_18;
		goto IL_0054;
	}

IL_0054:
	{
		ReadOnlyDictionary_2_t0E36F6C9B97F8BB8DBB263C24A8E5CB1E5BD3250* L_19 = V_3;
		return L_19;
	}
}
// System.String Google.Protobuf.Reflection.MessageDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageDescriptor_get_Name_m278060B190E17339607EAE1C15C0C92CA6405F08 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0;
		L_0 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = DescriptorProto_get_Name_mB58CFB6E06E100F9A1DDEC369CDB332126160AFB(L_0, NULL);
		return L_1;
	}
}
// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0 = __this->___U3CProtoU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Type Google.Protobuf.Reflection.MessageDescriptor::get_ClrType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_8;
		return L_0;
	}
}
// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* MessageDescriptor_get_Parser_m14CB9BDD6595DEB48D7B860039EDFA121EB076AE (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_0 = __this->___U3CParserU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::get_IsWellKnownType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_get_IsWellKnownType_m95783C76BB8A87930649C5153AF19EE0718BFC08 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = ((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_4;
		L_4 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_3, L_5, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 0;
	}

IL_002f:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.MessageDescriptor::get_IsWrapperType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageDescriptor_get_IsWrapperType_m88B9F67DEB6A63910B0A67376D2D23D533D91735 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FileDescriptor_get_Package_m23DC9E5095D1DD5F7CB43E67337C8A4B4F8AC41F(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral242827F003BDCBB538091F25071ADDB721DF95BE, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_3;
		L_3 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 0;
	}

IL_002f:
	{
		return (bool)G_B3_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* MessageDescriptor_get_ContainingType_m7DDB31EADA22B44AB033C51635D5B9C3E9C1841E (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___U3CContainingTypeU3Ek__BackingField_10;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* MessageDescriptor_get_Fields_mA5EE82B81DE42BB3DAC85301639AD91C9AB94503 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* L_0 = __this->___U3CFieldsU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_EnumTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_EnumTypes_mCAC627C3D64CB7E3A1092FCDC6406C6DC52B70D8 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEnumTypesU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_Oneofs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3COneofsU3Ek__BackingField_14;
		return L_0;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* MessageDescriptor_FindFieldByName_m5C4B4A4ECD41D310E72889BEF59BD89A1CC98DA9 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D(__this, NULL);
		String_t* L_3 = ___name0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		NullCheck(L_1);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_5;
		L_5 = DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF(L_1, L_4, DescriptorPool_FindSymbol_TisFieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_m2B4EFCB9D5CE363F133745A3FB23689CEF10E9AF_RuntimeMethod_var);
		return L_5;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor::FindFieldByNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* MessageDescriptor_FindFieldByNumber_m1D65624DECB12DDDD354206EB1B0BBE4944651DC (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		int32_t L_2 = ___number0;
		NullCheck(L_1);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_3;
		L_3 = DescriptorPool_FindFieldByNumber_m3306450EAB967767481F0E183ACF0914C749906E(L_1, __this, L_2, NULL);
		return L_3;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MessageDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* MessageDescriptor_get_CustomOptions_m20D1440E9E082CFC752D6A4160EF307AF41A3D4C (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* G_B2_0 = NULL;
	MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* G_B1_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B3_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B5_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B4_0 = NULL;
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0;
		L_0 = MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline(__this, NULL);
		NullCheck(L_0);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_1;
		L_1 = DescriptorProto_get_Options_mFEB4E68AE42F39354016ECEA1350E11A25E7314C(L_0, NULL);
		MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)(NULL));
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_3;
		L_3 = MessageOptions_get_CustomOptions_m1B43F65E32CE5CF29FACF53BC9BA1BE257098637_inline(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_5 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields*)il2cpp_codegen_static_fields_for(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var))->___Empty_0;
		G_B5_0 = L_5;
	}

IL_0020:
	{
		return G_B5_0;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor_CrossLink_mCEDFF8C6BDA2083BA94CB583CEE6AD31E6294C20 (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t68F5A27EE65409E27999177803534A3D9708E03B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6644B6D12698554DCC2B0033A9F63423A9DCCE04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* V_5 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_5;
				L_5 = InterfaceFuncInvoker0< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_6 = V_1;
				NullCheck(L_6);
				MessageDescriptor_CrossLink_mCEDFF8C6BDA2083BA94CB583CEE6AD31E6294C20(L_6, NULL);
			}

IL_0020_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		RuntimeObject* L_9 = __this->___fieldsInDeclarationOrder_4;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var, L_9);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_0068;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0068:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_0044_1:
			{
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_14;
				L_14 = InterfaceFuncInvoker0< FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var, L_13);
				V_3 = L_14;
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_15 = V_3;
				NullCheck(L_15);
				FieldDescriptor_CrossLink_m8EDBF05BB7268AE1CBE65F796C5242058DBD8C1D(L_15, NULL);
			}

IL_0054_1:
			{
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		RuntimeObject* L_18;
		L_18 = MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38_inline(__this, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.OneofDescriptor>::GetEnumerator() */, IEnumerable_1_t68F5A27EE65409E27999177803534A3D9708E03B_il2cpp_TypeInfo_var, L_18);
		V_4 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_20 = V_4;
					if (!L_20)
					{
						goto IL_00a3;
					}
				}
				{
					RuntimeObject* L_21 = V_4;
					NullCheck(L_21);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_21);
				}

IL_00a3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008c_1;
			}

IL_0079_1:
			{
				RuntimeObject* L_22 = V_4;
				NullCheck(L_22);
				OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_23;
				L_23 = InterfaceFuncInvoker0< OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.OneofDescriptor>::get_Current() */, IEnumerator_1_t6644B6D12698554DCC2B0033A9F63423A9DCCE04_il2cpp_TypeInfo_var, L_22);
				V_5 = L_23;
				OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_24 = V_5;
				NullCheck(L_24);
				OneofDescriptor_CrossLink_mA8C38E8741F9A1DF651EB74C3B05FFC67B9CE196(L_24, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_25 = V_4;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0079_1;
				}
			}
			{
				goto IL_00a4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDescriptor__cctor_m868232C0B81D6D9602BE0CFACC17D7681EB4528D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = L_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_1, _stringLiteral9F5ABC7336FC408C1B2A29784C0E0AD17174CBB3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = L_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_3, _stringLiteral6FB20A0F1B1FDAAAA1A739E2CAFF14897DF6C793, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_5 = L_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_5, _stringLiteral3F55E7E43CB2A70586349A2527BA34E5C72A498B, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_7 = L_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_7, _stringLiteral2417EEAF8227FB98545F6C2ACA9B3FBC2C4EEF90, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_9 = L_7;
		NullCheck(L_9);
		bool L_10;
		L_10 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_9, _stringLiteralA74B955A01CCCA134BC24725EF08A248AA7C69AC, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_11 = L_9;
		NullCheck(L_11);
		bool L_12;
		L_12 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_11, _stringLiteral4E88D3145087F1B0073380D7BAB6F4766F01F3A3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_13 = L_11;
		NullCheck(L_13);
		bool L_14;
		L_14 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_13, _stringLiteralF89EBB3FB7B1E50D0240AC71C6748BC7640D332C, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_15 = L_13;
		NullCheck(L_15);
		bool L_16;
		L_16 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_15, _stringLiteral64EB2ACDA107A2EAFDE67F4CC2CC898B789613F4, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_17 = L_15;
		NullCheck(L_17);
		bool L_18;
		L_18 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_17, _stringLiteral82183A23D174E9AEB50156CB7C2C0FF0773376F3, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_19 = L_17;
		NullCheck(L_19);
		bool L_20;
		L_20 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_19, _stringLiteral86B2D324A1CE45FD4C4F29A23FADDD09479C4A78, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields*)il2cpp_codegen_static_fields_for(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))->___WellKnownTypeNames_3), (void*)L_19);
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::.ctor(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldCollection__ctor_m43EAACB34F71AEE419BD80BE4D81514F9A3FB35F (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = ___messageDescriptor0;
		__this->___messageDescriptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageDescriptor_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InDeclarationOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InDeclarationOrder_m51C3D79E9FE57BCD482DFF7ADE94555A2AA23FD7 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___fieldsInDeclarationOrder_4;
		return L_1;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::InFieldNumberOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_InFieldNumberOrder_m709086C71CAAB69D3C4E19F1CD2D746040E2FEE4 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___fieldsInNumberOrder_5;
		return L_1;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::ByJsonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldCollection_ByJsonName_mD724E6F366BA1F6935086CE75B98F0CA5FA39C68 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___jsonFieldMap_6;
		return L_1;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* FieldCollection_get_Item_m052B310D1DD599FD9B73016EA71F407461C87799 (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_0 = NULL;
	bool V_1 = false;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_2 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		int32_t L_1 = ___number0;
		NullCheck(L_0);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_2;
		L_2 = MessageDescriptor_FindFieldByNumber_m1D65624DECB12DDDD354206EB1B0BBE4944651DC(L_0, L_1, NULL);
		V_0 = L_2;
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_3 = V_0;
		V_1 = (bool)((((RuntimeObject*)(FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_5 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7012EBD7A52FFE2177DD7A499A4226405016ACB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldCollection_get_Item_m052B310D1DD599FD9B73016EA71F407461C87799_RuntimeMethod_var)));
	}

IL_0022:
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_7 = V_2;
		return L_7;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/FieldCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* FieldCollection_get_Item_mAB58D7A6EBCB6CC402484347DEA6DAB1EAD2D9BE (FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_0 = NULL;
	bool V_1 = false;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_2 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___messageDescriptor_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_2;
		L_2 = MessageDescriptor_FindFieldByName_m5C4B4A4ECD41D310E72889BEF59BD89A1CC98DA9(L_0, L_1, NULL);
		V_0 = L_2;
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_3 = V_0;
		V_1 = (bool)((((RuntimeObject*)(FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_5 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9233D8C418C04829410724511B59AEC0EF627BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FieldCollection_get_Item_mAB58D7A6EBCB6CC402484347DEA6DAB1EAD2D9BE_RuntimeMethod_var)));
	}

IL_0022:
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_7 = V_2;
		return L_7;
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m0B17C8E7A00E1D11D012DA3875B6FBEA00C44E3F (U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0::<.ctor>b__0(Google.Protobuf.Reflection.OneofDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_mFF9BA6EEFE068F054619A2FDA75E12840AFBF97D (U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* __this, OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* ___oneof0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_0 = ___oneof0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = __this->___U3CU3E4__this_2;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = __this->___generatedCodeInfo_1;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = GeneratedClrTypeInfo_get_OneofNames_mEB47A698EDAC7237464F2AD15643BA0E43A5B0D6_inline(L_4, NULL);
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_9 = (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC*)il2cpp_codegen_object_new(OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		OneofDescriptor__ctor_m1DF6BC68AE05031163B8774780CA2B5856545429(L_9, L_0, L_1, L_2, L_3, L_8, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0::<.ctor>b__1(Google.Protobuf.Reflection.DescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__1_m32DD9584814C82640DD629EEBCEE38FF8E193504 (U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* __this, DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___type0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0 = ___type0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = __this->___U3CU3E4__this_2;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = __this->___generatedCodeInfo_1;
		NullCheck(L_4);
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_5;
		L_5 = GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0_inline(L_4, NULL);
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_9 = (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)il2cpp_codegen_object_new(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		MessageDescriptor__ctor_m70A471C5C93507DB23E607F2D0413B66C784DC78(L_9, L_0, L_1, L_2, L_3, L_8, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.EnumDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0::<.ctor>b__2(Google.Protobuf.Reflection.EnumDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__2_m10EEC948AC8C6C6C96DA79996ECDEFC3F5E54139 (U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* __this, EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* ___type0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EnumDescriptorProto_tDEA1092C1B2685AB510109DCF34DBDC5FFADD344* L_0 = ___type0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = __this->___U3CU3E4__this_2;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = __this->___generatedCodeInfo_1;
		NullCheck(L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5;
		L_5 = GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC_inline(L_4, NULL);
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Type_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E* L_9 = (EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E*)il2cpp_codegen_object_new(EnumDescriptor_t6438812B93CAE60734A00FFD08A1C5044575191E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EnumDescriptor__ctor_m5DF396F94AFB86FE46AC0D53FDCBAE16DC910FBE(L_9, L_0, L_1, L_2, L_3, L_8, NULL);
		return L_9;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.MessageDescriptor/<>c__DisplayClass4_0::<.ctor>b__3(Google.Protobuf.Reflection.FieldDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__3_m9AE10770D9E560FFF160EA6B8D840C22D05CE601 (U3CU3Ec__DisplayClass4_0_t71A0116FCCD2BD8D05D7DD0E89AA128D315E111D* __this, FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* ___field0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B2_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B2_3 = NULL;
	FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* G_B2_4 = NULL;
	GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B1_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B1_3 = NULL;
	FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* G_B3_2 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* G_B3_3 = NULL;
	FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* G_B3_4 = NULL;
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0 = ___field0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = __this->___U3CU3E4__this_2;
		int32_t L_3 = ___index1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_4 = __this->___generatedCodeInfo_1;
		GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0022;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = GeneratedClrTypeInfo_get_PropertyNames_m90234348C0C94D290A5B78AE50B651C4CDD8E302_inline(G_B2_0, NULL);
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0022:
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_10 = (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)il2cpp_codegen_object_new(FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		FieldDescriptor__ctor_m691730DD44930E89A8F7218A20B8E3A51336DF3B(L_10, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		return L_10;
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
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFE5EF5A8C0888950E4EDF82BAD5C742856FE6E1E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* L_0 = (U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726*)il2cpp_codegen_object_new(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mBABF78AE22082EE0CDD0BA1D06892DC8D6CB8B00(L_0, NULL);
		((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.MessageDescriptor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBABF78AE22082EE0CDD0BA1D06892DC8D6CB8B00 (U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.Protobuf.Reflection.MessageDescriptor/<>c::<.ctor>b__4_4(Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__4_4_mC9A689081510F95D0EFE3892B2828040DE70EA0D (U3CU3Ec_tA85D4B83A4B25FB22CAF39AD664D4DDB880DA726* __this, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___field0, const RuntimeMethod* method) 
{
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_0 = ___field0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FieldDescriptor_get_FieldNumber_m92E0DC0243FE36CA28859096A93B82BAE6927452(L_0, NULL);
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
// Google.Protobuf.Reflection.ServiceDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* MethodDescriptor_get_Service_m146888F6EED419F95BACDDD683417299D2E44950 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* V_0 = NULL;
	{
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_0 = __this->___service_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_InputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* MethodDescriptor_get_InputType_mEE56436A8E88DC95F19763F7D99282143F273E73 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___inputType_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MethodDescriptor::get_OutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* MethodDescriptor_get_OutputType_mA6A40FD1CD8904986BA9E12311FD113F76B7983A (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___outputType_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Google.Protobuf.Reflection.MethodDescriptor::get_IsClientStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptor_get_IsClientStreaming_m6043817C2E60C4DC2A1C3ECE4C802B46F174E190 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDescriptorProto_get_ClientStreaming_m2C6A7809C34840D7F55088937F25FEE7197409F3(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Google.Protobuf.Reflection.MethodDescriptor::get_IsServerStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodDescriptor_get_IsServerStreaming_mD08E65D80E8E7A1541B8A372F36BA084429D4897 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		bool L_1;
		L_1 = MethodDescriptorProto_get_ServerStreaming_mFC81302136E94D4B06942C2FA32532C0731D67C3(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.MethodDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* MethodDescriptor_get_CustomOptions_mD2670A669863B4E0045CBD439129F9DA9972270E (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* G_B2_0 = NULL;
	MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* G_B1_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B3_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B5_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B4_0 = NULL;
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0;
		L_0 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6(__this, NULL);
		NullCheck(L_0);
		MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* L_1;
		L_1 = MethodDescriptorProto_get_Options_mEF31E491D76D1C67D9D2FB55C243B9F52E7E9D1A(L_0, NULL);
		MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)(NULL));
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_3;
		L_3 = MethodOptions_get_CustomOptions_m1A547C37871DC33DEFF149C463A188C0A44928B1_inline(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_5 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields*)il2cpp_codegen_static_fields_for(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var))->___Empty_0;
		G_B5_0 = L_5;
	}

IL_0020:
	{
		return G_B5_0;
	}
}
// System.Void Google.Protobuf.Reflection.MethodDescriptor::.ctor(Google.Protobuf.Reflection.MethodDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.ServiceDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor__ctor_m14EC122B2999003C0BA7C543F9ED0F728AA90FF2 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* ___parent2, int32_t ___index3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ___file1;
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_1 = ___parent2;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D(L_1, NULL);
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_3 = ___proto0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = MethodDescriptorProto_get_Name_m0E0A77A1B97748A6331C972C766376AAC481BE9D(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_4, NULL);
		int32_t L_6 = ___index3;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_0, L_5, L_6, NULL);
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_7 = ___proto0;
		__this->___proto_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_7);
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_8 = ___parent2;
		__this->___service_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___service_4), (void*)L_8);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_9 = ___file1;
		NullCheck(L_9);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_10;
		L_10 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_9, NULL);
		NullCheck(L_10);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_10, __this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MethodDescriptorProto Google.Protobuf.Reflection.MethodDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* V_0 = NULL;
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = __this->___proto_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_1 = V_0;
		return L_1;
	}
}
// System.String Google.Protobuf.Reflection.MethodDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodDescriptor_get_Name_m9797521EE1CB19B18D5695B5839770CDABD1A37F (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MethodDescriptorProto_get_Name_m0E0A77A1B97748A6331C972C766376AAC481BE9D(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Google.Protobuf.Reflection.MethodDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7 (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_2;
		L_2 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = MethodDescriptorProto_get_InputType_m3E2EDDE6CB60B9C52CD82AD5216634820EF90FD3(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = DescriptorPool_LookupSymbol_mF3E2C7A93E8BC401E2AC316FD81FF62CB72A866A(L_1, L_3, __this, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)IsInstSealed((RuntimeObject*)L_5, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_7;
		L_7 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = MethodDescriptorProto_get_InputType_m3E2EDDE6CB60B9C52CD82AD5216634820EF90FD3(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A)), NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_10 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_10, __this, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7_RuntimeMethod_var)));
	}

IL_0050:
	{
		RuntimeObject* L_11 = V_0;
		__this->___inputType_5 = ((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_11, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputType_5), (void*)((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_11, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var)));
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_12;
		L_12 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_12);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_13;
		L_13 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_12, NULL);
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_14;
		L_14 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6(__this, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = MethodDescriptorProto_get_OutputType_m535ED7F4F70B9FAD544EB237C5697414A5C37C9F(L_14, NULL);
		NullCheck(L_13);
		RuntimeObject* L_16;
		L_16 = DescriptorPool_LookupSymbol_mF3E2C7A93E8BC401E2AC316FD81FF62CB72A866A(L_13, L_15, __this, NULL);
		V_0 = L_16;
		RuntimeObject* L_17 = V_0;
		V_2 = (bool)((((int32_t)((!(((RuntimeObject*)(MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)IsInstSealed((RuntimeObject*)L_17, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00ab;
		}
	}
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_19;
		L_19 = MethodDescriptor_get_Proto_m08BA64B9570CED9E3E993E1F8B6997395C3649F6(__this, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = MethodDescriptorProto_get_OutputType_m535ED7F4F70B9FAD544EB237C5697414A5C37C9F(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD344A405546B27CFAE8780105ACCE0B68620063A)), NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_22 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_22, __this, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7_RuntimeMethod_var)));
	}

IL_00ab:
	{
		RuntimeObject* L_23 = V_0;
		__this->___outputType_6 = ((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_23, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputType_6), (void*)((MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)CastclassSealed((RuntimeObject*)L_23, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_il2cpp_TypeInfo_var)));
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
// System.Void Google.Protobuf.Reflection.OneofAccessor::.ctor(System.Reflection.PropertyInfo,System.Reflection.MethodInfo,Google.Protobuf.Reflection.OneofDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor__ctor_mFE344A0083D58B6EE27BAE916D3CDD379E21113D (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, PropertyInfo_t* ___caseProperty0, MethodInfo_t* ___clearMethod1, OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* ___descriptor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		PropertyInfo_t* L_0 = ___caseProperty0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8151ACC23B614309271528820B9A31B990F4567)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofAccessor__ctor_mFE344A0083D58B6EE27BAE916D3CDD379E21113D_RuntimeMethod_var)));
	}

IL_0021:
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_4 = ___descriptor2;
		__this->___descriptor_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___descriptor_2), (void*)L_4);
		PropertyInfo_t* L_5 = ___caseProperty0;
		NullCheck(L_5);
		MethodInfo_t* L_6;
		L_6 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* L_7;
		L_7 = ReflectionUtil_CreateFuncIMessageInt32_m58AD7053AB0640F04197A08028C0239C2DD79A6C(L_6, NULL);
		__this->___caseDelegate_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___caseDelegate_0), (void*)L_7);
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_8 = ___descriptor2;
		__this->___descriptor_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___descriptor_2), (void*)L_8);
		MethodInfo_t* L_9 = ___clearMethod1;
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_10;
		L_10 = ReflectionUtil_CreateActionIMessage_m6E5086C5181236168BF662877536FD4C241F8180(L_9, NULL);
		__this->___clearDelegate_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_1), (void*)L_10);
		return;
	}
}
// Google.Protobuf.Reflection.OneofDescriptor Google.Protobuf.Reflection.OneofAccessor::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* OneofAccessor_get_Descriptor_mE5762B7FAFA1F5089C8C00201824FC263D5DD9CE (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, const RuntimeMethod* method) 
{
	OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* V_0 = NULL;
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = __this->___descriptor_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_1 = V_0;
		return L_1;
	}
}
// System.Void Google.Protobuf.Reflection.OneofAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofAccessor_Clear_m29989D87DCDC7AA04E7083B47DD8AB511B058E7D (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_0 = __this->___clearDelegate_1;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_mB741A5209F94DEA28AF75D2736CCB6CA8C50C133_inline(L_0, L_1, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.FieldDescriptor Google.Protobuf.Reflection.OneofAccessor::GetCaseFieldDescriptor(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* OneofAccessor_GetCaseFieldDescriptor_m4915CF5321E80B0C750409F84E109D13FF47FBFC (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_2 = NULL;
	{
		Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* L_0 = __this->___caseDelegate_0;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Func_2_Invoke_m33AD4763C10512F5603E6826A3C2EAC13E41D2B2_inline(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_5 = __this->___descriptor_2;
		NullCheck(L_5);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_6;
		L_6 = OneofDescriptor_get_ContainingType_m1AE060E44800C9D8135AEE395CD1A522AFE8020D(L_5, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_8;
		L_8 = MessageDescriptor_FindFieldByNumber_m1D65624DECB12DDDD354206EB1B0BBE4944651DC(L_6, L_7, NULL);
		V_2 = L_8;
		goto IL_002f;
	}

IL_002b:
	{
		V_2 = (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E*)NULL;
		goto IL_002f;
	}

IL_002f:
	{
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_9 = V_2;
		return L_9;
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
// System.Void Google.Protobuf.Reflection.OneofDescriptor::.ctor(Google.Protobuf.Reflection.OneofDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,Google.Protobuf.Reflection.MessageDescriptor,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor__ctor_m1DF6BC68AE05031163B8774780CA2B5856545429 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___parent2, int32_t ___index3, String_t* ___clrName4, const RuntimeMethod* method) 
{
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ___file1;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = ___file1;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2 = ___parent2;
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_3 = ___proto0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = OneofDescriptorProto_get_Name_m6987249315B54F5D46E0B07B2876370CAFEC826C(L_3, NULL);
		NullCheck(L_1);
		String_t* L_5;
		L_5 = FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F(L_1, L_2, L_4, NULL);
		int32_t L_6 = ___index3;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_0, L_5, L_6, NULL);
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_7 = ___proto0;
		__this->___proto_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_7);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_8 = ___parent2;
		__this->___containingType_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___containingType_4), (void*)L_8);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_9 = ___file1;
		NullCheck(L_9);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_10;
		L_10 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_9, NULL);
		NullCheck(L_10);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_10, __this, NULL);
		String_t* L_11 = ___clrName4;
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_12;
		L_12 = OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C(__this, L_11, NULL);
		__this->___accessor_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accessor_6), (void*)L_12);
		return;
	}
}
// System.String Google.Protobuf.Reflection.OneofDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OneofDescriptor_get_Name_m1C703B665485C229A1BD1810B24F0DA251EC093E (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = OneofDescriptorProto_get_Name_m6987249315B54F5D46E0B07B2876370CAFEC826C(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.OneofDescriptor::get_ContainingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* OneofDescriptor_get_ContainingType_m1AE060E44800C9D8135AEE395CD1A522AFE8020D (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___containingType_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.OneofDescriptor::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OneofDescriptor_get_Fields_mA95D85FFC1D1E6A526DDCD8F14A2DB16F27140C0 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___fields_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::get_Accessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofDescriptor_get_Accessor_m6EBDA81DDBD7EF8ACCA4FBF4F52175C73726A0E1 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* V_0 = NULL;
	{
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_0 = __this->___accessor_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.OneofDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* OneofDescriptor_get_CustomOptions_m9289E9ABA67AD2BDD4912F703BF9D122BA56584D (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* G_B2_0 = NULL;
	OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* G_B1_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B3_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B5_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B4_0 = NULL;
	{
		OneofDescriptorProto_t1145E2FD5F18E9247B19C09B3CAEBC8E8650C74A* L_0 = __this->___proto_3;
		NullCheck(L_0);
		OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* L_1;
		L_1 = OneofDescriptorProto_get_Options_m86DDF956444086BD981F9BA68D91DA3A8B9360B6(L_0, NULL);
		OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)(NULL));
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_3;
		L_3 = OneofOptions_get_CustomOptions_m9AFE5F1C9B9900031F74A40E8C7828C2C672833D_inline(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_5 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields*)il2cpp_codegen_static_fields_for(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var))->___Empty_0;
		G_B5_0 = L_5;
	}

IL_0020:
	{
		return G_B5_0;
	}
}
// System.Void Google.Protobuf.Reflection.OneofDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneofDescriptor_CrossLink_mA8C38E8741F9A1DF651EB74C3B05FFC67B9CE196 (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64981EE12A2A370C5000034039B00D57761431A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t64981EE12A2A370C5000034039B00D57761431A3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* V_2 = NULL;
	bool V_3 = false;
	{
		List_1_t64981EE12A2A370C5000034039B00D57761431A3* L_0 = (List_1_t64981EE12A2A370C5000034039B00D57761431A3*)il2cpp_codegen_object_new(List_1_t64981EE12A2A370C5000034039B00D57761431A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6(L_0, List_1__ctor_m4905449B1DA3EBC3C62384AF048391EBE47AC1A6_RuntimeMethod_var);
		V_0 = L_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_1;
		L_1 = OneofDescriptor_get_ContainingType_m1AE060E44800C9D8135AEE395CD1A522AFE8020D(__this, NULL);
		NullCheck(L_1);
		FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* L_2;
		L_2 = MessageDescriptor_get_Fields_mA5EE82B81DE42BB3DAC85301639AD91C9AB94503_inline(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = FieldCollection_InDeclarationOrder_m51C3D79E9FE57BCD482DFF7ADE94555A2AA23FD7(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FieldDescriptor>::GetEnumerator() */, IEnumerable_1_tDDBABD38601B0B3CB8FE8BC3C7192A21443B0D06_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0054:
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

IL_0020_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_8;
				L_8 = InterfaceFuncInvoker0< FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FieldDescriptor>::get_Current() */, IEnumerator_1_tC89C2FE0B79746F860EB87A17DDBB036B9B5CA30_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_9 = V_2;
				NullCheck(L_9);
				OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_10;
				L_10 = FieldDescriptor_get_ContainingOneof_m910021BB2A5C1B3EF595F5C557EF032691282E13_inline(L_9, NULL);
				V_3 = (bool)((((RuntimeObject*)(OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC*)L_10) == ((RuntimeObject*)(OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC*)__this))? 1 : 0);
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_003f_1;
				}
			}
			{
				List_1_t64981EE12A2A370C5000034039B00D57761431A3* L_12 = V_0;
				FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_13 = V_2;
				NullCheck(L_12);
				List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_inline(L_12, L_13, List_1_Add_m1DD998A0CDC162DF71974532CB819315DD20BF80_RuntimeMethod_var);
			}

IL_003f_1:
			{
			}

IL_0040_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		List_1_t64981EE12A2A370C5000034039B00D57761431A3* L_16 = V_0;
		ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B* L_17 = (ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t576A96EB67EFDB504EC4066151F3F1B55149AE2B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3(L_17, L_16, ReadOnlyCollection_1__ctor_m9CFD56BDC2BB0527D5B794B37FC216610DECBBF3_RuntimeMethod_var);
		__this->___fields_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fields_5), (void*)L_17);
		return;
	}
}
// Google.Protobuf.Reflection.OneofAccessor Google.Protobuf.Reflection.OneofDescriptor::CreateAccessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C (OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* __this, String_t* ___clrName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* V_4 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___containingType_4;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_0, NULL);
		String_t* L_2 = ___clrName0;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_2, _stringLiteralCE58DB664A03767A219FB187BBE2B769431C47F8, NULL);
		NullCheck(L_1);
		PropertyInfo_t* L_4;
		L_4 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_1, L_3, NULL);
		V_0 = L_4;
		PropertyInfo_t* L_5 = V_0;
		V_2 = (bool)((((RuntimeObject*)(PropertyInfo_t*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_7 = ___clrName0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_8 = __this->___containingType_4;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC735ABBBA0A4054E66CE20DF45D76FB73FAFF691)), L_7, L_9, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_11 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_11, __this, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C_RuntimeMethod_var)));
	}

IL_0043:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_12 = __this->___containingType_4;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_12, NULL);
		String_t* L_14 = ___clrName0;
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, L_14, NULL);
		NullCheck(L_13);
		MethodInfo_t* L_16;
		L_16 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_13, L_15, NULL);
		V_1 = L_16;
		MethodInfo_t* L_17 = V_1;
		V_3 = (bool)((((RuntimeObject*)(MethodInfo_t*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_19 = ___clrName0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_20 = __this->___containingType_4;
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline(L_20, NULL);
		String_t* L_22;
		L_22 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F6EBD2865CE2FCCB1136CB39B9E6777A5F4777C)), L_19, L_21, NULL);
		DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D* L_23 = (DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DescriptorValidationException_t2238C3FC70A494DBC36F1461352A044A9CEEFE6D_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		DescriptorValidationException__ctor_mC2C1B536F9F3C49A6187D671B499BA003DB9F366(L_23, __this, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OneofDescriptor_CreateAccessor_m43F29BA6164F0BE8A54267EB293DBD4244D1999C_RuntimeMethod_var)));
	}

IL_0085:
	{
		PropertyInfo_t* L_24 = V_0;
		MethodInfo_t* L_25 = V_1;
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_26 = (OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073*)il2cpp_codegen_object_new(OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		OneofAccessor__ctor_mFE344A0083D58B6EE27BAE916D3CDD379E21113D(L_26, L_24, L_25, __this, NULL);
		V_4 = L_26;
		goto IL_0091;
	}

IL_0091:
	{
		OneofAccessor_tD63DD748034BF84C2E98979525B391E9947F9073* L_27 = V_4;
		return L_27;
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
// System.String Google.Protobuf.Reflection.OriginalNameAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OriginalNameAttribute_get_Name_mDA610CA3439C19AA24427BD656E6C88EF7CE5C89 (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m59F2568A14369771D8A5471123A4409E6EF85B56 (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean Google.Protobuf.Reflection.OriginalNameAttribute::get_PreferredAlias()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OriginalNameAttribute_get_PreferredAlias_mB938166E10D4DA2452DE0D3E35430BFB85A741EC (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CPreferredAliasU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::set_PreferredAlias(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_m3D89CC8006C1930E461D3822B4B8EE35788679F3 (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPreferredAliasU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Google.Protobuf.Reflection.OriginalNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OriginalNameAttribute__ctor_m2A988FDA10CFFF937B1898A33A5C778B318FF9E8 (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisString_t_mCBD3F1C158AD3A2A5A42D0D1FC734B2B0DB38B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		String_t* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisString_t_mCBD3F1C158AD3A2A5A42D0D1FC734B2B0DB38B62(L_0, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, ProtoPreconditions_CheckNotNull_TisString_t_mCBD3F1C158AD3A2A5A42D0D1FC734B2B0DB38B62_RuntimeMethod_var);
		OriginalNameAttribute_set_Name_m59F2568A14369771D8A5471123A4409E6EF85B56_inline(__this, L_1, NULL);
		OriginalNameAttribute_set_PreferredAlias_m3D89CC8006C1930E461D3822B4B8EE35788679F3_inline(__this, (bool)1, NULL);
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
// System.Void Google.Protobuf.Reflection.PackageDescriptor::.ctor(System.String,System.String,Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageDescriptor__ctor_m0447E4855109193E9FE04A85DBC5BFB72A39B8B0 (PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F* __this, String_t* ___name0, String_t* ___fullName1, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ___file2;
		__this->___file_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___file_2), (void*)L_0);
		String_t* L_1 = ___fullName1;
		__this->___fullName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullName_1), (void*)L_1);
		String_t* L_2 = ___name0;
		__this->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_2);
		return;
	}
}
// System.String Google.Protobuf.Reflection.PackageDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PackageDescriptor_get_Name_m89EFA496431D9C84EF82176138C203CFE5F31D8A (PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Google.Protobuf.Reflection.PackageDescriptor::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PackageDescriptor_get_FullName_mDC5B9FDD23A705C183D8A61A20E2A963197222D9 (PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___fullName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.PackageDescriptor::get_File()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* PackageDescriptor_get_File_mBD886DF2E471771C0AA1D5C083526CCFA0C4573B (PackageDescriptor_t863834B5D80791AF82D2F92CAAF947D71D2F783F* __this, const RuntimeMethod* method) 
{
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_0 = NULL;
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = __this->___file_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = V_0;
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
// System.Void Google.Protobuf.Reflection.ReflectionUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtil__cctor_m392585136DB373E5300895AB941C7C809D19137B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD68EA074998649C888551558073D09F0996E48D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAF95B4E34B5C325CB18690B72CAAE8665295099D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50ED82CC561126952DE4D87FCD91E8CE566E162E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7A30A5A5AE5ED0A9978DDE3A4DE504518A730B59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6ACD67B6DBD4A96067D3C121AA9EB5089B3E903A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m475C6827501BF3E25EC4E8E68497401B755FDF60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m0B0E9C808715A59763E3EAEAE8B31B211B2FA770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mF7A6EBF954694CFE18F4BBC71F1EF6787CC75D3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2BF1C3C374C4512320C150869A641B7963CCB2B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mC0F4798FFCC84F8F4289DEA74640C87929B28D9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m041828CB415836196D206D255B60CF55BF442581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_m5399D417FF9BDEEE87B9290D92A1742CE0990743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3800F56921267EE1B89F08D37FEC61D98B151E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisString_t_mC1687DD93A592C947FCF29E8C76DA72495E4E00A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m40832FD0837B387AE4FFBA4F57114908CA9D6673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0421571EC4FC72ABAA77FE2501A4C134AA56487A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___EmptyTypes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___EmptyTypes_0), (void*)L_0);
		bool L_1;
		L_1 = ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_m2790FACDF87E895EB60C6FA9C7D41CC1AA104127(NULL);
		((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1 = L_1;
		ReflectionUtil_ForceInitialize_TisString_t_mC1687DD93A592C947FCF29E8C76DA72495E4E00A(ReflectionUtil_ForceInitialize_TisString_t_mC1687DD93A592C947FCF29E8C76DA72495E4E00A_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50ED82CC561126952DE4D87FCD91E8CE566E162E(ReflectionUtil_ForceInitialize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50ED82CC561126952DE4D87FCD91E8CE566E162E_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7A30A5A5AE5ED0A9978DDE3A4DE504518A730B59(ReflectionUtil_ForceInitialize_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7A30A5A5AE5ED0A9978DDE3A4DE504518A730B59_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m40832FD0837B387AE4FFBA4F57114908CA9D6673(ReflectionUtil_ForceInitialize_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m40832FD0837B387AE4FFBA4F57114908CA9D6673_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0421571EC4FC72ABAA77FE2501A4C134AA56487A(ReflectionUtil_ForceInitialize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0421571EC4FC72ABAA77FE2501A4C134AA56487A_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3800F56921267EE1B89F08D37FEC61D98B151E7A(ReflectionUtil_ForceInitialize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3800F56921267EE1B89F08D37FEC61D98B151E7A_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAF95B4E34B5C325CB18690B72CAAE8665295099D(ReflectionUtil_ForceInitialize_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAF95B4E34B5C325CB18690B72CAAE8665295099D_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD68EA074998649C888551558073D09F0996E48D4(ReflectionUtil_ForceInitialize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD68EA074998649C888551558073D09F0996E48D4_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2BF1C3C374C4512320C150869A641B7963CCB2B4(ReflectionUtil_ForceInitialize_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_m2BF1C3C374C4512320C150869A641B7963CCB2B4_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6ACD67B6DBD4A96067D3C121AA9EB5089B3E903A(ReflectionUtil_ForceInitialize_TisNullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_m6ACD67B6DBD4A96067D3C121AA9EB5089B3E903A_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mC0F4798FFCC84F8F4289DEA74640C87929B28D9C(ReflectionUtil_ForceInitialize_TisNullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_mC0F4798FFCC84F8F4289DEA74640C87929B28D9C_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m041828CB415836196D206D255B60CF55BF442581(ReflectionUtil_ForceInitialize_TisNullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_m041828CB415836196D206D255B60CF55BF442581_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m475C6827501BF3E25EC4E8E68497401B755FDF60(ReflectionUtil_ForceInitialize_TisNullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_m475C6827501BF3E25EC4E8E68497401B755FDF60_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m0B0E9C808715A59763E3EAEAE8B31B211B2FA770(ReflectionUtil_ForceInitialize_TisNullable_1_t6E154519A812D040E3016229CD7638843A2CC165_m0B0E9C808715A59763E3EAEAE8B31B211B2FA770_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mF7A6EBF954694CFE18F4BBC71F1EF6787CC75D3D(ReflectionUtil_ForceInitialize_TisNullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_mF7A6EBF954694CFE18F4BBC71F1EF6787CC75D3D_RuntimeMethod_var);
		ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_m5399D417FF9BDEEE87B9290D92A1742CE0990743(ReflectionUtil_ForceInitialize_TisSampleEnum_t2BD35E03D5408696826ED53B77DFC95192F17F37_m5399D417FF9BDEEE87B9290D92A1742CE0990743_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReflectionUtil_SampleEnumMethod_m5D7FE578BB6F18D4B9C1B0F99B51A6348DE33124(NULL);
		return;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* ReflectionUtil_CreateFuncIMessageObject_m1C8236A3A64EDF179D2A3A3D08A9517DBE090408 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_mB0F6AE0EDDF3376D97F300E53A0CECDA6678710F(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_t9F375C79031DDA5B3E25DFCE11100F61C1E8BB2F*, MethodInfo_t* >::Invoke(2 /* System.Func`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageObject(System.Reflection.MethodInfo) */, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil::CreateFuncIMessageInt32(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* ReflectionUtil_CreateFuncIMessageInt32_m58AD7053AB0640F04197A08028C0239C2DD79A6C (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_mB0F6AE0EDDF3376D97F300E53A0CECDA6678710F(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3* L_6;
		L_6 = InterfaceFuncInvoker1< Func_2_tAA7621BADE44DD8FE95297120257F58E03B4D5D3*, MethodInfo_t* >::Invoke(0 /* System.Func`2<Google.Protobuf.IMessage,System.Int32> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateFuncIMessageInt32(System.Reflection.MethodInfo) */, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessageObject(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* ReflectionUtil_CreateActionIMessageObject_mA2F92A36B31A88F2CF7DA8AF4E52FE1A5A476782 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MethodInfo_t* L_2 = ___method0;
		NullCheck(L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3;
		L_3 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		NullCheck(L_3);
		int32_t L_4 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_5);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ReflectionUtil_GetReflectionHelper_mB0F6AE0EDDF3376D97F300E53A0CECDA6678710F(L_1, L_6, NULL);
		MethodInfo_t* L_8 = ___method0;
		NullCheck(L_7);
		Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* L_9;
		L_9 = InterfaceFuncInvoker1< Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171*, MethodInfo_t* >::Invoke(3 /* System.Action`2<Google.Protobuf.IMessage,System.Object> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateActionIMessageObject(System.Reflection.MethodInfo) */, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var, L_7, L_8);
		return L_9;
	}
}
// System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil::CreateActionIMessage(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* ReflectionUtil_CreateActionIMessage_m6E5086C5181236168BF662877536FD4C241F8180 (MethodInfo_t* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___method0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = ReflectionUtil_GetReflectionHelper_mB0F6AE0EDDF3376D97F300E53A0CECDA6678710F(L_1, L_3, NULL);
		MethodInfo_t* L_5 = ___method0;
		NullCheck(L_4);
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_6;
		L_6 = InterfaceFuncInvoker1< Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*, MethodInfo_t* >::Invoke(1 /* System.Action`1<Google.Protobuf.IMessage> Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper::CreateActionIMessage(System.Reflection.MethodInfo) */, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/IReflectionHelper Google.Protobuf.Reflection.ReflectionUtil::GetReflectionHelper(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtil_GetReflectionHelper_mB0F6AE0EDDF3376D97F300E53A0CECDA6678710F (Type_t* ___t10, Type_t* ___t21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionHelper_2_t15D2105C58D73327CC9E1A4BEB87E4A8E941B515_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ReflectionHelper_2_t15D2105C58D73327CC9E1A4BEB87E4A8E941B515_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___t10;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = L_3;
		Type_t* L_6 = ___t21;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_6);
		NullCheck(L_1);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(116 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_5);
		RuntimeObject* L_8;
		L_8 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_7, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IReflectionHelper_t9FE95AD2946D280C723A7A15903BB5A1FC9DD1E6_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::get_CanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_get_CanConvertEnumFuncToInt32Func_m88427DFA771E88AB7525F8F91E5A5D1C785EDF14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		bool L_0 = ((ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var))->___U3CCanConvertEnumFuncToInt32FuncU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean Google.Protobuf.Reflection.ReflectionUtil::CheckCanConvertEnumFuncToInt32Func()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtil_CheckCanConvertEnumFuncToInt32Func_m2790FACDF87E895EB60C6FA9C7D41CC1AA104127 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, _stringLiteralE74B7F5EC9921B41AC1645B0E6B82427B4B0F9F5, NULL);
		V_0 = L_2;
		MethodInfo_t* L_3 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_0_0_0_var) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		Delegate_t* L_6;
		L_6 = MethodInfoExtensions_CreateDelegate_mA619066B8DBAFF94DFD27A53133BCFE290E52BC6(L_3, L_5, NULL);
		V_1 = (bool)1;
		goto IL_0032;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{// begin catch(System.ArgumentException)
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0032;
	}// end catch (depth: 1)

IL_0032:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// Google.Protobuf.Reflection.ReflectionUtil/SampleEnum Google.Protobuf.Reflection.ReflectionUtil::SampleEnumMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReflectionUtil_SampleEnumMethod_m5D7FE578BB6F18D4B9C1B0F99B51A6348DE33124 (const RuntimeMethod* method) 
{
	{
		return (int32_t)(0);
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
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor__ctor_m2201967E3E6604470A3675957FDC1E65621276D1 (RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = ___property0;
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_1 = ___descriptor1;
		FieldAccessorBase__ctor_m756C8E5E365EACEDB10427BA73338222AAE0C279(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor_Clear_m0EF652158B6324862237D62C38F9EA0D7C6A5F7D (RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___message0;
		RuntimeObject* L_1;
		L_1 = FieldAccessorBase_GetValue_mABB52C5E5391C56E34EE9254B629D0E05BD425D6(__this, L_0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.RepeatedFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedFieldAccessor_SetValue_m409AC2667F08C82444547F454C86100883D2DF5A (RepeatedFieldAccessor_t0136427FB150CA5D84DB77F24A844471125C2EE0* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral352DC1AD46B06976FE1F09D69AD2AE07BA1C912F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RepeatedFieldAccessor_SetValue_m409AC2667F08C82444547F454C86100883D2DF5A_RuntimeMethod_var)));
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
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::.ctor(Google.Protobuf.Reflection.ServiceDescriptorProto,Google.Protobuf.Reflection.FileDescriptor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m70D586A7D348405DE1CCE844D4E855FB93602CF9 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ___proto0, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file1, int32_t ___index2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m48FBBF19C23A2F3D0A1EABC7A905D10949AB9DB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC2FCD36B70CE2EF303083CBB57F0622579EED5FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_0 = (U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m883D83E52598F0FD9D1E08791BF725660C24A370(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_1 = V_0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_2 = ___file1;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_3 = V_0;
		NullCheck(L_3);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_4 = L_3->___file_0;
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_5 = V_0;
		NullCheck(L_5);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_6 = L_5->___file_0;
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_7 = ___proto0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ServiceDescriptorProto_get_Name_m335601B56CC8C6E93B045072F27AC8D13C9068DC(L_7, NULL);
		NullCheck(L_6);
		String_t* L_9;
		L_9 = FileDescriptor_ComputeFullName_mCBDE9B2BB4FAD55885BE530C106C278E27E4D11F(L_6, (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*)NULL, L_8, NULL);
		int32_t L_10 = ___index2;
		DescriptorBase__ctor_m002B5D6404EE5F2190E0DC0162F153B9AC6F454A(__this, L_4, L_9, L_10, NULL);
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_11 = V_0;
		NullCheck(L_11);
		L_11->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___U3CU3E4__this_1), (void*)__this);
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_12 = ___proto0;
		__this->___proto_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___proto_3), (void*)L_12);
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_13 = ___proto0;
		NullCheck(L_13);
		RepeatedField_1_tDBB28893EE104846AAAF4D79249AD6254CB6EC7E* L_14;
		L_14 = ServiceDescriptorProto_get_Method_mD603FB2CDAA65A667B86A080996B8FFA01FA3E7C(L_13, NULL);
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_15 = V_0;
		IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543* L_16 = (IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543*)il2cpp_codegen_object_new(IndexedConverter_2_tBFDF7A55E5AD530A48988CD0D6F975525A8A1543_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		IndexedConverter_2__ctor_m56898EAD4712836360F3B03E6F5EE4AF24B5FFC7(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC2FCD36B70CE2EF303083CBB57F0622579EED5FA_RuntimeMethod_var), NULL);
		RuntimeObject* L_17;
		L_17 = DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m48FBBF19C23A2F3D0A1EABC7A905D10949AB9DB2(L_14, L_16, DescriptorUtil_ConvertAndMakeReadOnly_TisMethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_m48FBBF19C23A2F3D0A1EABC7A905D10949AB9DB2_RuntimeMethod_var);
		__this->___methods_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methods_4), (void*)L_17);
		U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* L_18 = V_0;
		NullCheck(L_18);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_19 = L_18->___file_0;
		NullCheck(L_19);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_20;
		L_20 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_19, NULL);
		NullCheck(L_20);
		DescriptorPool_AddSymbol_m9F1D72975649FB85CEE9B12FA92EFC6C30B49614(L_20, __this, NULL);
		return;
	}
}
// System.String Google.Protobuf.Reflection.ServiceDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptor_get_Name_m58AA0169F702A1D78170286760149C76822EF968 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0 = __this->___proto_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ServiceDescriptorProto_get_Name_m335601B56CC8C6E93B045072F27AC8D13C9068DC(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// Google.Protobuf.Reflection.ServiceDescriptorProto Google.Protobuf.Reflection.ServiceDescriptor::get_Proto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* ServiceDescriptor_get_Proto_m6E7C4568043ACAAFE2D6CFEA8AD5B97CB3350170 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* V_0 = NULL;
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0 = __this->___proto_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MethodDescriptor> Google.Protobuf.Reflection.ServiceDescriptor::get_Methods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_get_Methods_m4A4C612FE1BAFCAF8F64AEFB6E10B55233778226 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___methods_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Google.Protobuf.Reflection.MethodDescriptor Google.Protobuf.Reflection.ServiceDescriptor::FindMethodByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* ServiceDescriptor_FindMethodByName_m17C11394D8051DEA2AD68A88145FF5DAD822835C (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* V_0 = NULL;
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(__this, NULL);
		NullCheck(L_0);
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_1;
		L_1 = FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline(L_0, NULL);
		String_t* L_2;
		L_2 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D(__this, NULL);
		String_t* L_3 = ___name0;
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_3, NULL);
		NullCheck(L_1);
		MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* L_5;
		L_5 = DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6(L_1, L_4, DescriptorPool_FindSymbol_TisMethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_mB3A2914B4CA53359B39647DA083161550B2B00E6_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* L_6 = V_0;
		return L_6;
	}
}
// Google.Protobuf.Reflection.CustomOptions Google.Protobuf.Reflection.ServiceDescriptor::get_CustomOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ServiceDescriptor_get_CustomOptions_m4678F3C647C753BFC109C8DCD0464D88D36ABB50 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* G_B2_0 = NULL;
	ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* G_B1_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B3_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B5_0 = NULL;
	CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* G_B4_0 = NULL;
	{
		ServiceDescriptorProto_tCBC64BD452390CC044D67C9F64370DAA7C481438* L_0;
		L_0 = ServiceDescriptor_get_Proto_m6E7C4568043ACAAFE2D6CFEA8AD5B97CB3350170(__this, NULL);
		NullCheck(L_0);
		ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* L_1;
		L_1 = ServiceDescriptorProto_get_Options_mC879FAA80CB6FF261B987734BF999D71E2013E03(L_0, NULL);
		ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C*)(NULL));
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_3;
		L_3 = ServiceOptions_get_CustomOptions_mE5E290122254B7AC597669622C317F0A588A9C93_inline(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var);
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_5 = ((CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_StaticFields*)il2cpp_codegen_static_fields_for(CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C_il2cpp_TypeInfo_var))->___Empty_0;
		G_B5_0 = L_5;
	}

IL_0020:
	{
		return G_B5_0;
	}
}
// System.Void Google.Protobuf.Reflection.ServiceDescriptor::CrossLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor_CrossLink_mF0C898B5054B4C42EAD3B06FD4089772D3D9B0E8 (ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t898B7976CAE5D33C1622374D2775A0163540BD49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC133879EE4DE28AA1E795779EEAB7FFB6DFB65C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___methods_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MethodDescriptor>::GetEnumerator() */, IEnumerable_1_t898B7976CAE5D33C1622374D2775A0163540BD49_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* L_5;
				L_5 = InterfaceFuncInvoker0< MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MethodDescriptor>::get_Current() */, IEnumerator_1_tC133879EE4DE28AA1E795779EEAB7FFB6DFB65C6_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* L_6 = V_1;
				NullCheck(L_6);
				MethodDescriptor_CrossLink_mDA009B32AEA452674E144983DE399890DC1340D7(L_6, NULL);
			}

IL_0020_1:
			{
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
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
// System.Void Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m883D83E52598F0FD9D1E08791BF725660C24A370 (U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.MethodDescriptor Google.Protobuf.Reflection.ServiceDescriptor/<>c__DisplayClass2_0::<.ctor>b__0(Google.Protobuf.Reflection.MethodDescriptorProto,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_mC2FCD36B70CE2EF303083CBB57F0622579EED5FA (U3CU3Ec__DisplayClass2_0_t0462B10BAFB8EAF0E79D516CCE2FF284B4B1EED2* __this, MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* ___method0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodDescriptorProto_t347E056BD2F869A75B2FFC05B522795733E3E73A* L_0 = ___method0;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = __this->___file_0;
		ServiceDescriptor_tD1862B3447B91DA5E3F1A2256F5230CCE4188DAE* L_2 = __this->___U3CU3E4__this_1;
		int32_t L_3 = ___i1;
		MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96* L_4 = (MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96*)il2cpp_codegen_object_new(MethodDescriptor_t32DA3CF543F2EBC3C890341FC33A64E22EB79F96_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MethodDescriptor__ctor_m14EC122B2999003C0BA7C543F9ED0F728AA90FF2(L_4, L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::.ctor(System.Reflection.PropertyInfo,Google.Protobuf.Reflection.FieldDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3 (SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* __this, PropertyInfo_t* ___property0, FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* ___descriptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m41D58494707A4B3EF6DD86221D07F42C5517B3D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* G_B10_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* G_B3_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* G_B8_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* G_B4_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* G_B6_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* G_B5_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* G_B7_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* G_B9_1 = NULL;
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* G_B11_0 = NULL;
	U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* G_B11_1 = NULL;
	{
		PropertyInfo_t* L_0 = ___property0;
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_1 = ___descriptor1;
		FieldAccessorBase__ctor_m756C8E5E365EACEDB10427BA73338222AAE0C279(__this, L_0, L_1, NULL);
		U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* L_2 = (U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		U3CU3Ec__DisplayClass2_0__ctor_mF1F2B1BBE801927E28446628F9FF26FB497DFE40(L_2, NULL);
		V_0 = L_2;
		U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		PropertyInfo_t* L_4 = ___property0;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_4);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral12FC0BF60BCE54234CA58CFD037BD8E5ADE3F2FB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleFieldAccessor__ctor_m667E244B7DF3B7F22AF99FA08D0FC4FEED4A74D3_RuntimeMethod_var)));
	}

IL_0030:
	{
		PropertyInfo_t* L_8 = ___property0;
		NullCheck(L_8);
		MethodInfo_t* L_9;
		L_9 = PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtil_t133AF61595581A1E61D3C82C61BD282162F4876A_il2cpp_TypeInfo_var);
		Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* L_10;
		L_10 = ReflectionUtil_CreateActionIMessageObject_mA2F92A36B31A88F2CF7DA8AF4E52FE1A5A476782(L_9, NULL);
		__this->___setValueDelegate_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___setValueDelegate_2), (void*)L_10);
		PropertyInfo_t* L_11 = ___property0;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_11);
		V_1 = L_12;
		U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* L_13 = V_0;
		FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* L_14 = ___descriptor1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = FieldDescriptor_get_FieldType_mD7E8085F4F0B7FCED231CB145D24118346428FB5_inline(L_14, NULL);
		G_B3_0 = L_13;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)10))))
		{
			G_B10_0 = L_13;
			goto IL_0083;
		}
	}
	{
		Type_t* L_16 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		G_B4_0 = G_B3_0;
		if ((((RuntimeObject*)(Type_t*)L_16) == ((RuntimeObject*)(Type_t*)L_18)))
		{
			G_B8_0 = G_B3_0;
			goto IL_007c;
		}
	}
	{
		Type_t* L_19 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		G_B5_0 = G_B4_0;
		if ((((RuntimeObject*)(Type_t*)L_19) == ((RuntimeObject*)(Type_t*)L_21)))
		{
			G_B6_0 = G_B4_0;
			goto IL_0075;
		}
	}
	{
		Type_t* L_22 = V_1;
		RuntimeObject* L_23;
		L_23 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_22, NULL);
		G_B7_0 = L_23;
		G_B7_1 = G_B5_0;
		goto IL_007a;
	}

IL_0075:
	{
		il2cpp_codegen_runtime_class_init_inline(ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_24;
		L_24 = ByteString_get_Empty_m731EFB022957B89D06402B50613BE2D07E64E381(NULL);
		G_B7_0 = ((RuntimeObject*)(L_24));
		G_B7_1 = G_B6_0;
	}

IL_007a:
	{
		G_B9_0 = G_B7_0;
		G_B9_1 = G_B7_1;
		goto IL_0081;
	}

IL_007c:
	{
		G_B9_0 = ((RuntimeObject*)(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
		G_B9_1 = G_B8_0;
	}

IL_0081:
	{
		G_B11_0 = ((ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592*)(G_B9_0));
		G_B11_1 = G_B9_1;
		goto IL_0084;
	}

IL_0083:
	{
		G_B11_0 = ((ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592*)(NULL));
		G_B11_1 = G_B10_0;
	}

IL_0084:
	{
		NullCheck(G_B11_1);
		G_B11_1->___defaultValue_0 = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->___defaultValue_0), (void*)G_B11_0);
		U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* L_25 = V_0;
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_26 = (Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997*)il2cpp_codegen_object_new(Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_m489692DDBF6D8FDD191397E1A803CDC0D2D74DF2(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m41D58494707A4B3EF6DD86221D07F42C5517B3D3_RuntimeMethod_var), NULL);
		__this->___clearDelegate_3 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clearDelegate_3), (void*)L_26);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::Clear(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor_Clear_m566A232704D21EE0842CDE268B0118B11140C874 (SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		Action_1_t503F0AA36B514FFF46299FA5FE907FF2CC963997* L_0 = __this->___clearDelegate_3;
		RuntimeObject* L_1 = ___message0;
		NullCheck(L_0);
		Action_1_Invoke_mB741A5209F94DEA28AF75D2736CCB6CA8C50C133_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor::SetValue(Google.Protobuf.IMessage,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleFieldAccessor_SetValue_m19D2D0CE097277611660CD0D0AB29A6234ECA907 (SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* __this, RuntimeObject* ___message0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		Action_2_t939E2CC3C1A7288E5CDB844113A2D158F3612171* L_0 = __this->___setValueDelegate_2;
		RuntimeObject* L_1 = ___message0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		Action_2_Invoke_m0CF559CD5A31F07C66DF2E464260B44A5A1FA422_inline(L_0, L_1, L_2, NULL);
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
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mF1F2B1BBE801927E28446628F9FF26FB497DFE40 (U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.SingleFieldAccessor/<>c__DisplayClass2_0::<.ctor>b__0(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3C_ctorU3Eb__0_m41D58494707A4B3EF6DD86221D07F42C5517B3D3 (U3CU3Ec__DisplayClass2_0_t86E685974C60C64AE86B033AE869DD0DEEE30CA3* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	{
		SingleFieldAccessor_tDC6937B124A5282A5302B6991E6D2A315BD49077* L_0 = __this->___U3CU3E4__this_1;
		RuntimeObject* L_1 = ___message0;
		RuntimeObject* L_2 = __this->___defaultValue_0;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Void Google.Protobuf.Reflection.FieldAccessorBase::SetValue(Google.Protobuf.IMessage,System.Object) */, L_0, L_1, L_2);
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
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_get_Empty_m9F6C56ECA8EA1280AB5B4682396EC9D39DF7BFF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_0 = ((TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.String,Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__ctor_mD8356BAAE81ED3D6C0DA14C145962505CE180FA3 (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* __this, Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* ___fullNameToMessageMap0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = ___fullNameToMessageMap0;
		__this->___fullNameToMessageMap_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fullNameToMessageMap_1), (void*)L_0);
		return;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.TypeRegistry::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* TypeRegistry_Find_mAFEE66F8D78A4E25D14BC3FA9EA8C3F9C632599A (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* __this, String_t* ___fullName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_1 = NULL;
	{
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = __this->___fullNameToMessageMap_1;
		String_t* L_1 = ___fullName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m252FB3D32AFC19DE1B40589C914D14FDEC7B5933_RuntimeMethod_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_3 = V_0;
		V_1 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_4 = V_1;
		return L_4;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(Google.Protobuf.Reflection.FileDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromFiles_m327ABBD5C15D9C6FA8AC85B839AF68A31AA55BF3 (FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* V_0 = NULL;
	{
		FileDescriptorU5BU5D_tA6F49087536E770627F6E0A2D6F6E4BE43C8840F* L_0 = ___fileDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_1;
		L_1 = TypeRegistry_FromFiles_mECF9B6C4CA7B2F67AB49E05F0A6C216190192726((RuntimeObject*)L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_2 = V_0;
		return L_2;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromFiles(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromFiles_mECF9B6C4CA7B2F67AB49E05F0A6C216190192726 (RuntimeObject* ___fileDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_mBB1A4D0B911C15BB41A3F69EEA2CAA941E2B0363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565);
		s_Il2CppMethodInitialized = true;
	}
	Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_2 = NULL;
	TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___fileDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_mBB1A4D0B911C15BB41A3F69EEA2CAA941E2B0363(L_0, _stringLiteralA0CB010C646A9359AB17403B716C4C913EA48565, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_mBB1A4D0B911C15BB41A3F69EEA2CAA941E2B0363_RuntimeMethod_var);
		Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* L_2 = (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389*)il2cpp_codegen_object_new(Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_mB03F12F2C4E360F832D9ACC5F5184B0321A3CF47(L_2, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___fileDescriptors0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002e_1;
			}

IL_001d_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_8;
				L_8 = InterfaceFuncInvoker0< FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* L_9 = V_0;
				FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_10 = V_2;
				NullCheck(L_9);
				Builder_AddFile_m08923155AF4823AA25B738CC9AC14C787C0AA69C(L_9, L_10, NULL);
			}

IL_002e_1:
			{
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* L_13 = V_0;
		NullCheck(L_13);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_14;
		L_14 = Builder_Build_m9DE0B00C503E91F9B88293341A99AA9B7816B581(L_13, NULL);
		V_3 = L_14;
		goto IL_004c;
	}

IL_004c:
	{
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_15 = V_3;
		return L_15;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(Google.Protobuf.Reflection.MessageDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromMessages_mA24DE1CACD4B26EDC9116185D0AF3B492FEE93F2 (MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* V_0 = NULL;
	{
		MessageDescriptorU5BU5D_t4F021BD7B685CDD76886DDA2D154EE93234B3818* L_0 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_1;
		L_1 = TypeRegistry_FromMessages_m9D638E59B941D302B6BA7AACEE793351AA715A28((RuntimeObject*)L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_2 = V_0;
		return L_2;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry::FromMessages(System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* TypeRegistry_FromMessages_m9D638E59B941D302B6BA7AACEE793351AA715A28 (RuntimeObject* ___messageDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m0FE4D834B3E610A3B46B0513F346ACFFB6BC6FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m05B72494D6531BC825C70D29797F22EDDB6F1762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFromMessagesU3Eb__9_0_m503DDED16CF919240A19D29A2A8B17E2E4F55644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA);
		s_Il2CppMethodInitialized = true;
	}
	TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* V_0 = NULL;
	Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___messageDescriptors0;
		RuntimeObject* L_1;
		L_1 = ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m05B72494D6531BC825C70D29797F22EDDB6F1762(L_0, _stringLiteral2E8550591CF778669ECDEAD573757A12AE56ADBA, ProtoPreconditions_CheckNotNull_TisIEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_m05B72494D6531BC825C70D29797F22EDDB6F1762_RuntimeMethod_var);
		RuntimeObject* L_2 = ___messageDescriptors0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* L_3 = ((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* L_5 = ((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* L_6 = (Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0*)il2cpp_codegen_object_new(Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mF8C596E8574CB6944694007939CA8F3692F27663(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CFromMessagesU3Eb__9_0_m503DDED16CF919240A19D29A2A8B17E2E4F55644_RuntimeMethod_var), NULL);
		Func_2_tAA9A15EB8AD5D30A7F469C695166D5A8779DD5F0* L_7 = L_6;
		((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002d:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m0FE4D834B3E610A3B46B0513F346ACFFB6BC6FDB(G_B2_1, G_B2_0, Enumerable_Select_TisMessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_TisFileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE_m0FE4D834B3E610A3B46B0513F346ACFFB6BC6FDB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_9;
		L_9 = TypeRegistry_FromFiles_mECF9B6C4CA7B2F67AB49E05F0A6C216190192726(L_8, NULL);
		V_0 = L_9;
		goto IL_003a;
	}

IL_003a:
	{
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_10 = V_0;
		return L_10;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeRegistry__cctor_m8C2240ACC51DF32D19F8BBEEB273D419E7B5C384 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*)il2cpp_codegen_object_new(Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F(L_0, Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var);
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_1 = (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976*)il2cpp_codegen_object_new(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_mD8356BAAE81ED3D6C0DA14C145962505CE180FA3(L_1, L_0, NULL);
		((TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_StaticFields*)il2cpp_codegen_static_fields_for(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var))->___U3CEmptyU3Ek__BackingField_0), (void*)L_1);
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mB03F12F2C4E360F832D9ACC5F5184B0321A3CF47 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = (Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384*)il2cpp_codegen_object_new(Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F(L_0, Dictionary_2__ctor_m13E0AE1CE03825DBDF6EA7B22110FA2D3BD37B6F_RuntimeMethod_var);
		__this->___types_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___types_0), (void*)L_0);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_1 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_1, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		__this->___fileDescriptorNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileDescriptorNames_1), (void*)L_1);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddFile(Google.Protobuf.Reflection.FileDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddFile_m08923155AF4823AA25B738CC9AC14C787C0AA69C (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___fileDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_4 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->___fileDescriptorNames_1;
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1 = ___fileDescriptor0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = FileDescriptor_get_Name_m81861DDFBC6C17CD275F3374FC02268C0F376DF1(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_0, L_2, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0088;
	}

IL_001c:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_5 = ___fileDescriptor0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = FileDescriptor_get_Dependencies_mAC7C5AB2751A6B9A4A2F6AE3A4E0DB2216793F7C_inline(L_5, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.FileDescriptor>::GetEnumerator() */, IEnumerable_1_t122AEB8E657DD14AE7AC316E37A4B28082F53174_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_1;
					if (!L_8)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_9 = V_1;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003c_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_11;
				L_11 = InterfaceFuncInvoker0< FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.FileDescriptor>::get_Current() */, IEnumerator_1_tAA6D759350859194E8F06C8B8A6467A3B07EFF18_il2cpp_TypeInfo_var, L_10);
				V_2 = L_11;
				FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_12 = V_2;
				Builder_AddFile_m08923155AF4823AA25B738CC9AC14C787C0AA69C(__this, L_12, NULL);
			}

IL_003c_1:
			{
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_15 = ___fileDescriptor0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_15, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_3;
					if (!L_18)
					{
						goto IL_0087;
					}
				}
				{
					RuntimeObject* L_19 = V_3;
					NullCheck(L_19);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_0087:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_0060_1:
			{
				RuntimeObject* L_20 = V_3;
				NullCheck(L_20);
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_21;
				L_21 = InterfaceFuncInvoker0< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var, L_20);
				V_4 = L_21;
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_22 = V_4;
				Builder_AddMessage_mB2D0FC7251A0DB7E18E70A90CA2BBA21EA38A070(__this, L_22, NULL);
			}

IL_0073_1:
			{
				RuntimeObject* L_23 = V_3;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0060_1;
				}
			}
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/Builder::AddMessage(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_AddMessage_mB2D0FC7251A0DB7E18E70A90CA2BBA21EA38A070 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___messageDescriptor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* V_1 = NULL;
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = ___messageDescriptor0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Protobuf.Reflection.MessageDescriptor>::GetEnumerator() */, IEnumerable_1_t4CD5EF9BE7925478517917504140E652CD2D743B_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0035;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_6;
				L_6 = InterfaceFuncInvoker0< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Current() */, IEnumerator_1_t3B98BB7867D2E52A76815600B0C3D9EB17791D09_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_7 = V_1;
				Builder_AddMessage_mB2D0FC7251A0DB7E18E70A90CA2BBA21EA38A070(__this, L_7, NULL);
			}

IL_0021_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0036;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_10 = __this->___types_0;
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_11 = ___messageDescriptor0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DescriptorBase_get_FullName_m09E17EE9C9184A528B154958832FDA2977D8B32D(L_11, NULL);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_13 = ___messageDescriptor0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9(L_10, L_12, L_13, Dictionary_2_set_Item_m051A3A61EE67B219C4941AECCFD47540866807D9_RuntimeMethod_var);
		return;
	}
}
// Google.Protobuf.Reflection.TypeRegistry Google.Protobuf.Reflection.TypeRegistry/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* Builder_Build_m9DE0B00C503E91F9B88293341A99AA9B7816B581 (Builder_t5E7B8A6814011F60023CBE0C67083A74E8479389* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* V_0 = NULL;
	{
		Dictionary_2_t1C947CF51B686ECA404BE714771B4CE17FBE3384* L_0 = __this->___types_0;
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_1 = (TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976*)il2cpp_codegen_object_new(TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TypeRegistry__ctor_mD8356BAAE81ED3D6C0DA14C145962505CE180FA3(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		TypeRegistry_tA40635AB816C4A8E884A323935572B3A3E6D1976* L_2 = V_0;
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
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0D1194B4A658799AF9A38F40681FE68BA7CEE81A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* L_0 = (U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB*)il2cpp_codegen_object_new(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m852E2A500025865494CCD1B737DB532D867677C1(L_0, NULL);
		((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Protobuf.Reflection.TypeRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m852E2A500025865494CCD1B737DB532D867677C1 (U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.TypeRegistry/<>c::<FromMessages>b__9_0(Google.Protobuf.Reflection.MessageDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* U3CU3Ec_U3CFromMessagesU3Eb__9_0_m503DDED16CF919240A19D29A2A8B17E2E4F55644 (U3CU3Ec_tBB12CD061CE8790D09580C0C6095D93B2D3572BB* __this, MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___md0, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = ___md0;
		NullCheck(L_0);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_1;
		L_1 = DescriptorBase_get_File_m4ADE18F8259D6F6DEC90FEEDCDCFAD1101AAE7BF(L_0, NULL);
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
// System.Delegate Google.Protobuf.Compatibility.MethodInfoExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* MethodInfoExtensions_CreateDelegate_mA619066B8DBAFF94DFD27A53133BCFE290E52BC6 (MethodInfo_t* ___method0, Type_t* ___type1, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___type1;
		MethodInfo_t* L_1 = ___method0;
		Delegate_t* L_2;
		L_2 = Delegate_CreateDelegate_mA2E221A01A8B3FBEC4C8A529F3C213C60A3A2C53(L_0, L_1, NULL);
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
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetGetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetGetMethod_m76DFBEEC2B2DE379988018BB57D9EAD1F7B35468 (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	MethodInfo_t* G_B4_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_0, NULL);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		MethodInfo_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_3, NULL);
		if (L_4)
		{
			goto IL_0016;
		}
	}

IL_0013:
	{
		G_B4_0 = ((MethodInfo_t*)(NULL));
		goto IL_0017;
	}

IL_0016:
	{
		MethodInfo_t* L_5 = V_0;
		G_B4_0 = L_5;
	}

IL_0017:
	{
		V_1 = G_B4_0;
		goto IL_001a;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_1;
		return L_6;
	}
}
// System.Reflection.MethodInfo Google.Protobuf.Compatibility.PropertyInfoExtensions::GetSetMethod(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfoExtensions_GetSetMethod_mBCDF23F04BAFB301FC66C26B3B4BA210671A495F (PropertyInfo_t* ___target0, const RuntimeMethod* method) 
{
	MethodInfo_t* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	MethodInfo_t* G_B4_0 = NULL;
	{
		PropertyInfo_t* L_0 = ___target0;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B(L_0, NULL);
		V_0 = L_1;
		MethodInfo_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		MethodInfo_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_3, NULL);
		if (L_4)
		{
			goto IL_0016;
		}
	}

IL_0013:
	{
		G_B4_0 = ((MethodInfo_t*)(NULL));
		goto IL_0017;
	}

IL_0016:
	{
		MethodInfo_t* L_5 = V_0;
		G_B4_0 = L_5;
	}

IL_0017:
	{
		V_1 = G_B4_0;
		goto IL_001a;
	}

IL_001a:
	{
		MethodInfo_t* L_6 = V_1;
		return L_6;
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
// System.Void Google.Protobuf.Compatibility.StreamExtensions::CopyTo(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamExtensions_CopyTo_mFBC3A353AE75E819478D52FE8F8C3C24C75765AC (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___source0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___destination1;
		V_2 = (bool)((((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamExtensions_CopyTo_mFBC3A353AE75E819478D52FE8F8C3C24C75765AC_RuntimeMethod_var)));
	}

IL_0015:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)81920));
		V_0 = L_3;
		goto IL_002e;
	}

IL_0022:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___destination1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, L_6);
	}

IL_002e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
		int32_t L_11 = L_10;
		V_1 = L_11;
		V_3 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0022;
		}
	}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.EqualityComparer`1<System.Double> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseDoubleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mBDBB3E70C5EA70797FCAAAAC19F398C6F5A04833 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Single> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseSingleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m9E46AB39FDABED3DD0CD900646C6986CE4481DC0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Double>> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseNullableDoubleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* ProtobufEqualityComparers_get_BitwiseNullableDoubleEqualityComparer_mA79DEC04A1E816DD8655E178D8D385F064DD7A6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4ADF100C7B05C1EF03D0DB5376E49F54A8CC7694* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>> Google.Protobuf.Collections.ProtobufEqualityComparers::get_BitwiseNullableSingleEqualityComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* ProtobufEqualityComparers_get_BitwiseNullableSingleEqualityComparer_m463CFDE2EF50848182B79DB57C78AAF866E500E6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t422C6B4A1A6D1C77F68967B31787AAA8DEA34203* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProtobufEqualityComparers__cctor_m90C02E9BA50085AD640B3D1AE3E75AB038C51199 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* L_0 = (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8*)il2cpp_codegen_object_new(BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BitwiseDoubleEqualityComparerImpl__ctor_mAD6B0428075BBF43DE51F583D37BA0ABF38664D2(L_0, NULL);
		((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0), (void*)L_0);
		BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* L_1 = (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2*)il2cpp_codegen_object_new(BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BitwiseSingleEqualityComparerImpl__ctor_m1B0BE327275B9873E6334D1BF5F168CB7550485A(L_1, NULL);
		((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1), (void*)L_1);
		BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* L_2 = (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C*)il2cpp_codegen_object_new(BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BitwiseNullableDoubleEqualityComparerImpl__ctor_mFB917A2DA5F18FCF1412412980B25B39169C056E(L_2, NULL);
		((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableDoubleEqualityComparerU3Ek__BackingField_2), (void*)L_2);
		BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* L_3 = (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA*)il2cpp_codegen_object_new(BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BitwiseNullableSingleEqualityComparerImpl__ctor_mE92B7379D88906CF7BE75DAEB5A478DE32E3AB8F(L_3, NULL);
		((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseNullableSingleEqualityComparerU3Ek__BackingField_3), (void*)L_3);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::Equals(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseDoubleEqualityComparerImpl_Equals_m4AB730E36E402B55A29683B474AAE3E4BE81E07B (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* __this, double ___x0, double ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		double L_2 = ___y1;
		int64_t L_3;
		L_3 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_2, NULL);
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::GetHashCode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseDoubleEqualityComparerImpl_GetHashCode_m56B58C7253636BDEB978E3E162A8AFC2348FAC1B (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* __this, double ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseDoubleEqualityComparerImpl__ctor_mAD6B0428075BBF43DE51F583D37BA0ABF38664D2 (BitwiseDoubleEqualityComparerImpl_tF935A78EF392CD4354688989133EACA26C8640B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6(__this, EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::Equals(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseSingleEqualityComparerImpl_Equals_mC91C8C4BC0E15E48E1F1D9D2A15325BFFF90BFD6 (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(((double)L_0), NULL);
		float L_2 = ___y1;
		int64_t L_3;
		L_3 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(((double)L_2), NULL);
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::GetHashCode(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseSingleEqualityComparerImpl_GetHashCode_m2421F9F900FCD1394C3A347FDBE4DB4089885B20 (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* __this, float ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		float L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(((double)L_0), NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseSingleEqualityComparerImpl__ctor_m1B0BE327275B9873E6334D1BF5F168CB7550485A (BitwiseSingleEqualityComparerImpl_t54A7C3CD2D3330DC90E7BF4E41E19A32A4630CB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3(__this, EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::Equals(System.Nullable`1<System.Double>,System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseNullableDoubleEqualityComparerImpl_Equals_m65836828DDACC3E899B6BD64BA69951B28564313 (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___x0, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___x0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___y1), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0041;
		}
	}

IL_0012:
	{
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___x0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___y1), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_4;
		L_4 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mBDBB3E70C5EA70797FCAAAAC19F398C6F5A04833_inline(NULL);
		double L_5;
		L_5 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___x0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		double L_6;
		L_6 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___y1), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, double, double >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Double>::Equals(T,T) */, L_4, L_5, L_6);
		G_B6_0 = ((int32_t)(L_7));
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 0;
	}

IL_003f:
	{
		G_B8_0 = G_B6_0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B8_0 = 1;
	}

IL_0042:
	{
		return (bool)G_B8_0;
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::GetHashCode(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseNullableDoubleEqualityComparerImpl_GetHashCode_mCB886DFDA862B5D97ABC89696D12A37EFD7BC32F (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___obj0), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_1;
		L_1 = ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mBDBB3E70C5EA70797FCAAAAC19F398C6F5A04833_inline(NULL);
		double L_2;
		L_2 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___obj0), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, double >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Double>::GetHashCode(T) */, L_1, L_2);
		G_B3_0 = L_3;
		goto IL_0021;
	}

IL_001c:
	{
		G_B3_0 = ((int32_t)293864);
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableDoubleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableDoubleEqualityComparerImpl__ctor_mFB917A2DA5F18FCF1412412980B25B39169C056E (BitwiseNullableDoubleEqualityComparerImpl_t17328B6D301E7839E81FEE9324CF4ABB7623836C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB(__this, EqualityComparer_1__ctor_mA454F90E707038D38215CD8C3E5E8DFD55D0E1FB_RuntimeMethod_var);
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
// System.Boolean Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::Equals(System.Nullable`1<System.Single>,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitwiseNullableSingleEqualityComparerImpl_Equals_m6CF225853FE4766634E3C8D6AD798A6C12297FFB (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___x0, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___x0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___y1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0041;
		}
	}

IL_0012:
	{
		bool L_2;
		L_2 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___x0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___y1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_4;
		L_4 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m9E46AB39FDABED3DD0CD900646C6986CE4481DC0_inline(NULL);
		float L_5;
		L_5 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___x0), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_6;
		L_6 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___y1), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, L_4, L_5, L_6);
		G_B6_0 = ((int32_t)(L_7));
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 0;
	}

IL_003f:
	{
		G_B8_0 = G_B6_0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B8_0 = 1;
	}

IL_0042:
	{
		return (bool)G_B8_0;
	}
}
// System.Int32 Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::GetHashCode(System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseNullableSingleEqualityComparerImpl_GetHashCode_mFEB14C4FC30B469B5FF2E48B4FC8A2573596EBFB (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&___obj0), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_1;
		L_1 = ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m9E46AB39FDABED3DD0CD900646C6986CE4481DC0_inline(NULL);
		float L_2;
		L_2 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&___obj0), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, float >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Single>::GetHashCode(T) */, L_1, L_2);
		G_B3_0 = L_3;
		goto IL_0021;
	}

IL_001c:
	{
		G_B3_0 = ((int32_t)293864);
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Void Google.Protobuf.Collections.ProtobufEqualityComparers/BitwiseNullableSingleEqualityComparerImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseNullableSingleEqualityComparerImpl__ctor_mE92B7379D88906CF7BE75DAEB5A478DE32E3AB8F (BitwiseNullableSingleEqualityComparerImpl_tAC371318D4964393815DC27A1EAA2A0045F06EBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E(__this, EqualityComparer_1__ctor_mC48678D94B2CF1801B7AE07518AC52EF47C1900E_RuntimeMethod_var);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* FileDescriptor_get_DescriptorPool_m2C9A3FFBC669C3DAFDD5C7DBFE51EF37094021CD_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* L_0 = __this->___U3CDescriptorPoolU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* EnumOptions_get_CustomOptions_m31421159F9A83E55281428EC63F4AB424F269DBC_inline (EnumOptions_t061B0E88B5D67182DBEB030D2A537918443F4E6C* __this, const RuntimeMethod* method) 
{
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_0 = __this->___U3CCustomOptionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* EnumValueOptions_get_CustomOptions_mC7D5E6C29407440B757E0789CCDD4E826F68C2DD_inline (EnumValueOptions_t30D964F1B96628FE5DD5522681FE65FEB4780020* __this, const RuntimeMethod* method) 
{
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_0 = __this->___U3CCustomOptionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* MessageDescriptor_get_Proto_mE5640E03D5D2191198B0B47401F194D9A1AFD59B_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* L_0 = __this->___U3CProtoU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_Oneofs_m4B21398E1D746B08DD3874635EB9B8BAF81F4E38_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3COneofsU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* FieldDescriptor_get_Proto_m3FDA5E399D03D9BE3D346D654E0F1CC1DD4F2D19_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		FieldDescriptorProto_t6D066FB9991C813815CFC89F4A2CB6B37B648E99* L_0 = __this->___U3CProtoU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* FieldDescriptor_get_ContainingType_m9993750EBC03E80D0E32D947E14946C09A9279EA_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0 = __this->___U3CContainingTypeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* FieldOptions_get_CustomOptions_mF1BA62F98E75F38E4BFB354A9EB77B9B553E46E3_inline (FieldOptions_tD20E5439F1925F7E5632124FF0F5820F9A6F09DC* __this, const RuntimeMethod* method) 
{
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_0 = __this->___U3CCustomOptionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MessageDescriptor_get_ClrType_mE5BB83F9A779B01E975658DFE4F51873F6745656_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* FileDescriptor_get_Proto_m403A8AB373CF6673929D90243198F2A249E1FF1A_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* L_0 = __this->___U3CProtoU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Services_m32AE49DE554CD6104A5792813F458B1E1A065A8D_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CServicesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* FileOptions_get_CustomOptions_m123426CB271D1B7CCEC2B470D2BEBC8A1767C23C_inline (FileOptions_tABFB667034B319193BDFFCFF36D6A45412F960F4* __this, const RuntimeMethod* method) 
{
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_0 = __this->___U3CCustomOptionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* GeneratedClrTypeInfo_get_NestedTypes_m8AED7D6560730E69176023048554B849007EAAA0_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		GeneratedClrTypeInfoU5BU5D_t01D717088F23D02567ED03E8AE5007AAE1EFCC89* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* GeneratedClrTypeInfo_get_NestedEnums_mD3FF2C77CA209172AA17731B31FA24968522A1CC_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CNestedEnumsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo_set_ClrType_m744F6287D106FBDF0B7E00832E5800CCA326AA08_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CClrTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClrTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* GeneratedClrTypeInfo_get_Parser_m4C53F2D6CB863279546D11DE7B3D53ED351B48A8_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* L_0 = __this->___U3CParserU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* GeneratedClrTypeInfo_get_ClrType_m5B443B2BB0A3783E56682580703FF212AF9AEDC2_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CClrTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldDescriptor_get_JsonName_m1E7529AB79BEB8C99A1318FFDA81F6F4C9E81216_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CJsonNameU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* MessageOptions_get_CustomOptions_m1B43F65E32CE5CF29FACF53BC9BA1BE257098637_inline (MessageOptions_t21D90698973F4D57E228B9E596F8E3E8CC429B7A* __this, const RuntimeMethod* method) 
{
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_0 = __this->___U3CCustomOptionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m843BBF2AD3939A0AD39AE080A7E9AE6942FBF1A8_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CNestedTypesU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_OneofNames_mEB47A698EDAC7237464F2AD15643BA0E43A5B0D6_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3COneofNamesU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GeneratedClrTypeInfo_get_PropertyNames_m90234348C0C94D290A5B78AE50B651C4CDD8E302_inline (GeneratedClrTypeInfo_tB6E120D2F48AA6EA289C118CA93929A4D63A636E* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CPropertyNamesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* MethodOptions_get_CustomOptions_m1A547C37871DC33DEFF149C463A188C0A44928B1_inline (MethodOptions_t231FE38BD5312DB18559F1566A090E97A3AF6DB7* __this, const RuntimeMethod* method) 
{
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_0 = __this->___U3CCustomOptionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* OneofOptions_get_CustomOptions_m9AFE5F1C9B9900031F74A40E8C7828C2C672833D_inline (OneofOptions_t499A07FB7EEF49A12136BABBD159BC8B7B6107EF* __this, const RuntimeMethod* method) 
{
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_0 = __this->___U3CCustomOptionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* MessageDescriptor_get_Fields_mA5EE82B81DE42BB3DAC85301639AD91C9AB94503_inline (MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* __this, const RuntimeMethod* method) 
{
	{
		FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* L_0 = __this->___U3CFieldsU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* FieldDescriptor_get_ContainingOneof_m910021BB2A5C1B3EF595F5C557EF032691282E13_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		OneofDescriptor_t3FEFF0AE3C9BC61C5364305A81C6108D6C63B9DC* L_0 = __this->___U3CContainingOneofU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_Name_m59F2568A14369771D8A5471123A4409E6EF85B56_inline (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OriginalNameAttribute_set_PreferredAlias_m3D89CC8006C1930E461D3822B4B8EE35788679F3_inline (OriginalNameAttribute_t9E75B76C2743609B99104B17C9DED79F2F802EEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPreferredAliasU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* ServiceOptions_get_CustomOptions_mE5E290122254B7AC597669622C317F0A588A9C93_inline (ServiceOptions_t7A8BC19A9254D2E797A516E26929EE2B1B12D334* __this, const RuntimeMethod* method) 
{
	{
		CustomOptions_t12630100CA695B8CF5AB0041E08956EC45ED743C* L_0 = __this->___U3CCustomOptionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FieldDescriptor_get_FieldType_mD7E8085F4F0B7FCED231CB145D24118346428FB5_inline (FieldDescriptor_t4E024D7AB0DB4A8B264DAB8AC4F510135CF4547E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___fieldType_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_Dependencies_mAC7C5AB2751A6B9A4A2F6AE3A4E0DB2216793F7C_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDependenciesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ProtobufEqualityComparers_get_BitwiseDoubleEqualityComparer_mBDBB3E70C5EA70797FCAAAAC19F398C6F5A04833_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseDoubleEqualityComparerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ProtobufEqualityComparers_get_BitwiseSingleEqualityComparer_m9E46AB39FDABED3DD0CD900646C6986CE4481DC0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var);
		EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* L_0 = ((ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_StaticFields*)il2cpp_codegen_static_fields_for(ProtobufEqualityComparers_t46743CDA0CA66B0BAED5D191D46D990A61282F09_il2cpp_TypeInfo_var))->___U3CBitwiseSingleEqualityComparerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___count_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_mB34633071167B2DC07F9490964996552D8D62165_gshared_inline (RepeatedField_1_tC46DEA37E4E0F796D170AB960175DBB5414924F7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___count_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
