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

// OnlineMapsGoogleAPIQuery
struct OnlineMapsGoogleAPIQuery_t356009153;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.String
struct String_t;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"

// System.Void OnlineMapsGoogleAPIQuery::.ctor()
extern "C"  void OnlineMapsGoogleAPIQuery__ctor_m3768454738 (OnlineMapsGoogleAPIQuery_t356009153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> OnlineMapsGoogleAPIQuery::DecodePolylinePoints(System.String)
extern "C"  List_1_t1612828711 * OnlineMapsGoogleAPIQuery_DecodePolylinePoints_m1293988934 (Il2CppObject * __this /* static, unused */, String_t* ___encodedPoints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsGoogleAPIQuery::GetVector2FromNode(OnlineMapsXML)
extern "C"  Vector2_t2243707579  OnlineMapsGoogleAPIQuery_GetVector2FromNode_m2674604069 (Il2CppObject * __this /* static, unused */, OnlineMapsXML_t3341520387 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
