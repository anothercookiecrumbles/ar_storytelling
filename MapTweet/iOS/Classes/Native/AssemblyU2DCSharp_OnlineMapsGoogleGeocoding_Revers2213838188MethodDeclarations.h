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

// OnlineMapsGoogleGeocoding/ReverseGeocodingParams
struct ReverseGeocodingParams_t2213838188;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen506773894.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsGoogleGeocoding/ReverseGeocodingParams::.ctor(System.Double,System.Double)
extern "C"  void ReverseGeocodingParams__ctor_m1363135657 (ReverseGeocodingParams_t2213838188 * __this, double ___longitude0, double ___latitude1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleGeocoding/ReverseGeocodingParams::.ctor(UnityEngine.Vector2)
extern "C"  void ReverseGeocodingParams__ctor_m3277212905 (ReverseGeocodingParams_t2213838188 * __this, Vector2_t2243707579  ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleGeocoding/ReverseGeocodingParams::.ctor(System.String)
extern "C"  void ReverseGeocodingParams__ctor_m1660958571 (ReverseGeocodingParams_t2213838188 * __this, String_t* ___placeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<UnityEngine.Vector2> OnlineMapsGoogleGeocoding/ReverseGeocodingParams::get_location()
extern "C"  Nullable_1_t506773894  ReverseGeocodingParams_get_location_m1839283959 (ReverseGeocodingParams_t2213838188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleGeocoding/ReverseGeocodingParams::set_location(System.Nullable`1<UnityEngine.Vector2>)
extern "C"  void ReverseGeocodingParams_set_location_m3801633206 (ReverseGeocodingParams_t2213838188 * __this, Nullable_1_t506773894  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleGeocoding/ReverseGeocodingParams::GenerateURL(System.Text.StringBuilder)
extern "C"  void ReverseGeocodingParams_GenerateURL_m2036296569 (ReverseGeocodingParams_t2213838188 * __this, StringBuilder_t1221177846 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
