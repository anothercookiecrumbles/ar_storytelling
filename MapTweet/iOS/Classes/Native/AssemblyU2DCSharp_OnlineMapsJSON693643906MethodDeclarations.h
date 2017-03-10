#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OnlineMapsJSON
struct OnlineMapsJSON_t693643906;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// OnlineMapsJSONItem
struct OnlineMapsJSONItem_t3469117787;
// OnlineMapsJSONArray
struct OnlineMapsJSONArray_t2504194763;
// OnlineMapsJSONObject
struct OnlineMapsJSONObject_t1097311111;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsJSON_Token1193842908.h"

// System.Void OnlineMapsJSON::.ctor(System.String)
extern "C"  void OnlineMapsJSON__ctor_m533771045 (OnlineMapsJSON_t693643906 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSON::DeserializeValue(System.Type,System.Object)
extern "C"  Il2CppObject * OnlineMapsJSON_DeserializeValue_m2977815375 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Il2CppObject * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSON::DeserializeArray(System.Type,System.Collections.Generic.List`1<System.Object>)
extern "C"  Il2CppObject * OnlineMapsJSON_DeserializeArray_m3388500479 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, List_1_t2058570427 * ___list1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSON::DeserializeObject(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * OnlineMapsJSON_DeserializeObject_m82029934 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Dictionary_2_t309261261 * ___table1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSON/Token OnlineMapsJSON::LookAhead()
extern "C"  int32_t OnlineMapsJSON_LookAhead_m428886012 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSON/Token OnlineMapsJSON::NextToken()
extern "C"  int32_t OnlineMapsJSON_NextToken_m3114287450 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSON/Token OnlineMapsJSON::NextTokenCore()
extern "C"  int32_t OnlineMapsJSON_NextTokenCore_m1699099931 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSON::Parse(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSON_Parse_m551104232 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSON::ParseDirect(System.String)
extern "C"  Il2CppObject * OnlineMapsJSON_ParseDirect_m956579084 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONArray OnlineMapsJSON::ParseArray()
extern "C"  OnlineMapsJSONArray_t2504194763 * OnlineMapsJSON_ParseArray_m152787105 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> OnlineMapsJSON::ParseArrayDirect()
extern "C"  List_1_t2058570427 * OnlineMapsJSON_ParseArrayDirect_m3584223061 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSON::ParseNumber()
extern "C"  Il2CppObject * OnlineMapsJSON_ParseNumber_m1437980050 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONObject OnlineMapsJSON::ParseObject()
extern "C"  OnlineMapsJSONObject_t1097311111 * OnlineMapsJSON_ParseObject_m3785678601 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> OnlineMapsJSON::ParseObjectDirect()
extern "C"  Dictionary_2_t309261261 * OnlineMapsJSON_ParseObjectDirect_m3252037096 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 OnlineMapsJSON::ParseSingleChar(System.Char,System.UInt32)
extern "C"  uint32_t OnlineMapsJSON_ParseSingleChar_m4191980418 (OnlineMapsJSON_t693643906 * __this, Il2CppChar ___c10, uint32_t ___multipliyer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsJSON::ParseString()
extern "C"  String_t* OnlineMapsJSON_ParseString_m4137204960 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 OnlineMapsJSON::ParseUnicode(System.Char,System.Char,System.Char,System.Char)
extern "C"  uint32_t OnlineMapsJSON_ParseUnicode_m977340620 (OnlineMapsJSON_t693643906 * __this, Il2CppChar ___c10, Il2CppChar ___c21, Il2CppChar ___c32, Il2CppChar ___c43, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSON::ParseValue()
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSON_ParseValue_m4200803479 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSON::ParseValueDirect()
extern "C"  Il2CppObject * OnlineMapsJSON_ParseValueDirect_m2780806861 (OnlineMapsJSON_t693643906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSON::Serialize(System.Object)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSON_Serialize_m2789979537 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
