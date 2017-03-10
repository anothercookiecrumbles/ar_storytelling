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

// OnlineMapsJSONObject
struct OnlineMapsJSONObject_t1097311111;
// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsJSONItem>
struct Dictionary_2_t1088929753;
// OnlineMapsJSONItem
struct OnlineMapsJSONItem_t3469117787;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// System.Collections.Generic.IEnumerator`1<OnlineMapsJSONItem>
struct IEnumerator_1_t944641614;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsJSONItem3469117787.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsJSONObject::.ctor()
extern "C"  void OnlineMapsJSONObject__ctor_m606445400 (OnlineMapsJSONObject_t1097311111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsJSONItem> OnlineMapsJSONObject::get_table()
extern "C"  Dictionary_2_t1088929753 * OnlineMapsJSONObject_get_table_m1265430270 (OnlineMapsJSONObject_t1097311111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONObject::get_Item(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONObject_get_Item_m1520330622 (OnlineMapsJSONObject_t1097311111 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONObject::get_Item(System.Int32)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONObject_get_Item_m3096644669 (OnlineMapsJSONObject_t1097311111 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSONObject::Add(System.String,OnlineMapsJSONItem)
extern "C"  void OnlineMapsJSONObject_Add_m1073774552 (OnlineMapsJSONObject_t1097311111 * __this, String_t* ___name0, OnlineMapsJSONItem_t3469117787 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSONObject::Deserialize(System.Type)
extern "C"  Il2CppObject * OnlineMapsJSONObject_Deserialize_m2401252355 (OnlineMapsJSONObject_t1097311111 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSONObject::Deserialize(System.Type,System.Reflection.MemberInfo[])
extern "C"  Il2CppObject * OnlineMapsJSONObject_Deserialize_m3091075053 (OnlineMapsJSONObject_t1097311111 * __this, Type_t * ___type0, MemberInfoU5BU5D_t4238939941* ___members1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONObject::Get(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONObject_Get_m2536196294 (OnlineMapsJSONObject_t1097311111 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONObject::GetThis(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONObject_GetThis_m804497218 (OnlineMapsJSONObject_t1097311111 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONObject::GetAll(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONObject_GetAll_m26425845 (OnlineMapsJSONObject_t1097311111 * __this, String_t* ___k0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<OnlineMapsJSONItem> OnlineMapsJSONObject::GetEnumerator()
extern "C"  Il2CppObject* OnlineMapsJSONObject_GetEnumerator_m3439712631 (OnlineMapsJSONObject_t1097311111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONObject OnlineMapsJSONObject::ParseObject(System.String)
extern "C"  OnlineMapsJSONObject_t1097311111 * OnlineMapsJSONObject_ParseObject_m2927541522 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSONObject::ToJSON(System.Text.StringBuilder)
extern "C"  void OnlineMapsJSONObject_ToJSON_m2838308077 (OnlineMapsJSONObject_t1097311111 * __this, StringBuilder_t1221177846 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSONObject::Value(System.Type)
extern "C"  Il2CppObject * OnlineMapsJSONObject_Value_m1876346947 (OnlineMapsJSONObject_t1097311111 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
