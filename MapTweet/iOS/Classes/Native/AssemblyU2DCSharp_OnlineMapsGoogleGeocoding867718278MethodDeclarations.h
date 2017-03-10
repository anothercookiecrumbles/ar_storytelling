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

// OnlineMapsGoogleGeocoding
struct OnlineMapsGoogleGeocoding_t867718278;
// System.String
struct String_t;
// OnlineMapsGoogleGeocoding/RequestParams
struct RequestParams_t52588726;
// OnlineMapsGoogleGeocodingResult[]
struct OnlineMapsGoogleGeocodingResultU5BU5D_t2250326706;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsGoogleGeocoding_RequestP52588726.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void OnlineMapsGoogleGeocoding::.ctor(System.String,System.String,System.String)
extern "C"  void OnlineMapsGoogleGeocoding__ctor_m1083856633 (OnlineMapsGoogleGeocoding_t867718278 * __this, String_t* ___address0, String_t* ___latlng1, String_t* ___lang2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleGeocoding::.ctor(OnlineMapsGoogleGeocoding/RequestParams)
extern "C"  void OnlineMapsGoogleGeocoding__ctor_m1315345317 (OnlineMapsGoogleGeocoding_t867718278 * __this, RequestParams_t52588726 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleGeocoding OnlineMapsGoogleGeocoding::Find(System.String,System.String,System.String)
extern "C"  OnlineMapsGoogleGeocoding_t867718278 * OnlineMapsGoogleGeocoding_Find_m1682832295 (Il2CppObject * __this /* static, unused */, String_t* ___address0, String_t* ___latlng1, String_t* ___lang2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleGeocoding OnlineMapsGoogleGeocoding::Find(UnityEngine.Vector2,System.String)
extern "C"  OnlineMapsGoogleGeocoding_t867718278 * OnlineMapsGoogleGeocoding_Find_m4244530683 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___lnglat0, String_t* ___lang1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleGeocoding OnlineMapsGoogleGeocoding::Find(OnlineMapsGoogleGeocoding/RequestParams)
extern "C"  OnlineMapsGoogleGeocoding_t867718278 * OnlineMapsGoogleGeocoding_Find_m878929179 (Il2CppObject * __this /* static, unused */, RequestParams_t52588726 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsGoogleGeocoding::GetCoordinatesFromResult(System.String)
extern "C"  Vector2_t2243707579  OnlineMapsGoogleGeocoding_GetCoordinatesFromResult_m2592106528 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleGeocodingResult[] OnlineMapsGoogleGeocoding::GetResults(System.String)
extern "C"  OnlineMapsGoogleGeocodingResultU5BU5D_t2250326706* OnlineMapsGoogleGeocoding_GetResults_m277831861 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleGeocoding::MovePositionToResult(System.String)
extern "C"  void OnlineMapsGoogleGeocoding_MovePositionToResult_m2491343523 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
