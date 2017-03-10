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

// OnlineMapsJSONArray
struct OnlineMapsJSONArray_t2504194763;
// OnlineMapsJSONItem
struct OnlineMapsJSONItem_t3469117787;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<OnlineMapsJSONItem>
struct IEnumerator_1_t944641614;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsJSONItem3469117787.h"
#include "AssemblyU2DCSharp_OnlineMapsJSONArray2504194763.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsJSONArray::.ctor()
extern "C"  void OnlineMapsJSONArray__ctor_m27545566 (OnlineMapsJSONArray_t2504194763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsJSONArray::get_count()
extern "C"  int32_t OnlineMapsJSONArray_get_count_m3504457252 (OnlineMapsJSONArray_t2504194763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONArray::get_Item(System.Int32)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONArray_get_Item_m2097616633 (OnlineMapsJSONArray_t2504194763 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONArray::get_Item(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONArray_get_Item_m2910746280 (OnlineMapsJSONArray_t2504194763 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSONArray::Add(OnlineMapsJSONItem)
extern "C"  void OnlineMapsJSONArray_Add_m2589817014 (OnlineMapsJSONArray_t2504194763 * __this, OnlineMapsJSONItem_t3469117787 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSONArray::AddRange(OnlineMapsJSONArray)
extern "C"  void OnlineMapsJSONArray_AddRange_m17021997 (OnlineMapsJSONArray_t2504194763 * __this, OnlineMapsJSONArray_t2504194763 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSONArray::Deserialize(System.Type)
extern "C"  Il2CppObject * OnlineMapsJSONArray_Deserialize_m3963265643 (OnlineMapsJSONArray_t2504194763 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONArray::Get(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONArray_Get_m2034235868 (OnlineMapsJSONArray_t2504194763 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONArray::GetThis(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONArray_GetThis_m1695937484 (OnlineMapsJSONArray_t2504194763 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONItem OnlineMapsJSONArray::GetAll(System.String)
extern "C"  OnlineMapsJSONItem_t3469117787 * OnlineMapsJSONArray_GetAll_m1218268177 (OnlineMapsJSONArray_t2504194763 * __this, String_t* ___k0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<OnlineMapsJSONItem> OnlineMapsJSONArray::GetEnumerator()
extern "C"  Il2CppObject* OnlineMapsJSONArray_GetEnumerator_m2849023247 (OnlineMapsJSONArray_t2504194763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsJSONArray OnlineMapsJSONArray::ParseArray(System.String)
extern "C"  OnlineMapsJSONArray_t2504194763 * OnlineMapsJSONArray_ParseArray_m2754275102 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSONArray::ToJSON(System.Text.StringBuilder)
extern "C"  void OnlineMapsJSONArray_ToJSON_m2148270045 (OnlineMapsJSONArray_t2504194763 * __this, StringBuilder_t1221177846 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsJSONArray::Value(System.Type)
extern "C"  Il2CppObject * OnlineMapsJSONArray_Value_m1487329627 (OnlineMapsJSONArray_t2504194763 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
