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

// OnlineMapsOSMAPIQuery
struct OnlineMapsOSMAPIQuery_t1899738209;
// System.String
struct String_t;
// System.Collections.Generic.List`1<OnlineMapsOSMNode>
struct List_1_t2753111535;
// System.Collections.Generic.List`1<OnlineMapsOSMWay>
struct List_1_t2689016404;
// System.Collections.Generic.List`1<OnlineMapsOSMRelation>
struct List_1_t1241103929;
// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode>
struct Dictionary_2_t1003802369;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsOSMAPIQuery::.ctor(System.String)
extern "C"  void OnlineMapsOSMAPIQuery__ctor_m2599154674 (OnlineMapsOSMAPIQuery_t1899738209 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsOSMAPIQuery OnlineMapsOSMAPIQuery::Find(System.String)
extern "C"  OnlineMapsOSMAPIQuery_t1899738209 * OnlineMapsOSMAPIQuery_Find_m540309639 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMAPIQuery::ParseOSMResponse(System.String,System.Collections.Generic.List`1<OnlineMapsOSMNode>&,System.Collections.Generic.List`1<OnlineMapsOSMWay>&,System.Collections.Generic.List`1<OnlineMapsOSMRelation>&)
extern "C"  void OnlineMapsOSMAPIQuery_ParseOSMResponse_m3569763705 (Il2CppObject * __this /* static, unused */, String_t* ___response0, List_1_t2753111535 ** ___nodes1, List_1_t2689016404 ** ___ways2, List_1_t1241103929 ** ___relations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMAPIQuery::ParseOSMResponse(System.String,System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode>&,System.Collections.Generic.List`1<OnlineMapsOSMWay>&,System.Collections.Generic.List`1<OnlineMapsOSMRelation>&)
extern "C"  void OnlineMapsOSMAPIQuery_ParseOSMResponse_m1418789004 (Il2CppObject * __this /* static, unused */, String_t* ___response0, Dictionary_2_t1003802369 ** ___nodes1, List_1_t2689016404 ** ___ways2, List_1_t1241103929 ** ___relations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMAPIQuery::ParseOSMResponseFast(System.String,System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode>&,System.Collections.Generic.List`1<OnlineMapsOSMWay>&,System.Collections.Generic.List`1<OnlineMapsOSMRelation>&)
extern "C"  void OnlineMapsOSMAPIQuery_ParseOSMResponseFast_m2614837110 (Il2CppObject * __this /* static, unused */, String_t* ___response0, Dictionary_2_t1003802369 ** ___nodes1, List_1_t2689016404 ** ___ways2, List_1_t1241103929 ** ___relations3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
