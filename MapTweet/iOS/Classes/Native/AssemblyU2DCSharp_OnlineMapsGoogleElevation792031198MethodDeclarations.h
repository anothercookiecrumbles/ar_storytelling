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

// OnlineMapsGoogleElevation
struct OnlineMapsGoogleElevation_t792031198;
// System.String
struct String_t;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// OnlineMapsGoogleElevationResult[]
struct OnlineMapsGoogleElevationResultU5BU5D_t660336348;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsGoogleElevation::.ctor()
extern "C"  void OnlineMapsGoogleElevation__ctor_m4235560129 (OnlineMapsGoogleElevation_t792031198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleElevation::.ctor(UnityEngine.Vector2,System.String,System.String,System.String)
extern "C"  void OnlineMapsGoogleElevation__ctor_m2380010299 (OnlineMapsGoogleElevation_t792031198 * __this, Vector2_t2243707579  ___location0, String_t* ___key1, String_t* ___client2, String_t* ___signature3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleElevation::.ctor(UnityEngine.Vector2[],System.String,System.String,System.String)
extern "C"  void OnlineMapsGoogleElevation__ctor_m2341616013 (OnlineMapsGoogleElevation_t792031198 * __this, Vector2U5BU5D_t686124026* ___locations0, String_t* ___key1, String_t* ___client2, String_t* ___signature3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleElevation::.ctor(UnityEngine.Vector2[],System.Int32,System.String,System.String,System.String)
extern "C"  void OnlineMapsGoogleElevation__ctor_m1475136782 (OnlineMapsGoogleElevation_t792031198 * __this, Vector2U5BU5D_t686124026* ___path0, int32_t ___samples1, String_t* ___key2, String_t* ___client3, String_t* ___signature4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleElevation OnlineMapsGoogleElevation::Find(UnityEngine.Vector2,System.String,System.String,System.String)
extern "C"  OnlineMapsGoogleElevation_t792031198 * OnlineMapsGoogleElevation_Find_m4293305659 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___location0, String_t* ___key1, String_t* ___client2, String_t* ___signature3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleElevation OnlineMapsGoogleElevation::Find(UnityEngine.Vector2[],System.String,System.String,System.String)
extern "C"  OnlineMapsGoogleElevation_t792031198 * OnlineMapsGoogleElevation_Find_m617657169 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t686124026* ___locations0, String_t* ___key1, String_t* ___client2, String_t* ___signature3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleElevation OnlineMapsGoogleElevation::Find(UnityEngine.Vector2[],System.Int32,System.String,System.String,System.String)
extern "C"  OnlineMapsGoogleElevation_t792031198 * OnlineMapsGoogleElevation_Find_m2256835356 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t686124026* ___path0, int32_t ___samples1, String_t* ___key2, String_t* ___client3, String_t* ___signature4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleElevationResult[] OnlineMapsGoogleElevation::GetResults(System.String)
extern "C"  OnlineMapsGoogleElevationResultU5BU5D_t660336348* OnlineMapsGoogleElevation_GetResults_m1057945333 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
