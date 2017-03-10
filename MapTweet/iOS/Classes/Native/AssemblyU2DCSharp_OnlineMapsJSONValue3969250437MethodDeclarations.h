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

// OnlineMapsJSONValue
struct OnlineMapsJSONValue_t3969250437;
// System.Object
struct Il2CppObject;
// OnlineMapsJSONItem
struct OnlineMapsJSONItem_t3469117787;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.Generic.IEnumerator`1<OnlineMapsJSONItem>
struct IEnumerator_1_t944641614;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsJSONValue_ValueType177070661.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "AssemblyU2DCSharp_OnlineMapsJSONValue3969250437.h"

// System.Void OnlineMapsJSONValue::.ctor(System.Object)
extern "C"  void OnlineMapsJSONValue__ctor_m2825908970 (OnlineMapsJSONValue_t3969250437 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSONValue::.ctor(System.Object,OnlineMapsJSONValue/ValueType)
extern "C"  void OnlineMapsJSONValue__ctor_m2229623949 (OnlineMapsJSONValue_t3969250437 * __this, Il2CppObject * ___value0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONValue::get_Item(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONValue_get_Item_m3088200700 (OnlineMapsJSONValue_t3969250437 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONValue::get_Item(System.Int32)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONValue_get_Item_m258901015 (OnlineMapsJSONValue_t3969250437 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSONValue::get_value()
extern "C"  Il2CppObject * OnlineMapsJSONValue_get_value_m3038546715 (OnlineMapsJSONValue_t3969250437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSONValue::set_value(System.Object)
extern "C"  void OnlineMapsJSONValue_set_value_m2477770360 (OnlineMapsJSONValue_t3969250437 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONValue/ValueType OnlineMapsJSONValue::get_type()
extern "C"  int32_t OnlineMapsJSONValue_get_type_m1047550901 (OnlineMapsJSONValue_t3969250437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSONValue::Deserialize(System.Type)
extern "C"  Il2CppObject * OnlineMapsJSONValue_Deserialize_m3171224049 (OnlineMapsJSONValue_t3969250437 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONValue::GetAll(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONValue_GetAll_m3889496879 (OnlineMapsJSONValue_t3969250437 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSONValue::ToJSON(System.Text.StringBuilder)
extern "C"  void OnlineMapsJSONValue_ToJSON_m311013647 (OnlineMapsJSONValue_t3969250437 * __this, StringBuilder_t1221177846 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<OnlineMapsJSONItem> OnlineMapsJSONValue::GetEnumerator()
extern "C"  Il2CppObject* OnlineMapsJSONValue_GetEnumerator_m2339035233 (OnlineMapsJSONValue_t3969250437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsJSONValue::ToString()
extern "C"  String_t* OnlineMapsJSONValue_ToString_m1909861867 (OnlineMapsJSONValue_t3969250437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSONValue::Value(System.Type)
extern "C"  Il2CppObject * OnlineMapsJSONValue_Value_m2070844333 (OnlineMapsJSONValue_t3969250437 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSONValue::WriteString(System.Text.StringBuilder)
extern "C"  void OnlineMapsJSONValue_WriteString_m2059816202 (OnlineMapsJSONValue_t3969250437 * __this, StringBuilder_t1221177846 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsJSONValue::op_Implicit(OnlineMapsJSONValue)
extern "C"  String_t* OnlineMapsJSONValue_op_Implicit_m4284981021 (Il2CppObject * __this /* static, unused */, OnlineMapsJSONValue_t3969250437 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
