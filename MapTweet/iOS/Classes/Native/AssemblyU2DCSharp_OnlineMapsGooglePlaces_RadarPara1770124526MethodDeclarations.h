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

// OnlineMapsGooglePlaces/RadarParams
struct RadarParams_t1770124526;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsGooglePlaces/RadarParams::.ctor(System.Double,System.Double,System.Int32)
extern "C"  void RadarParams__ctor_m4009185920 (RadarParams_t1770124526 * __this, double ___longitude0, double ___latitude1, int32_t ___radius2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces/RadarParams::.ctor(UnityEngine.Vector2,System.Int32)
extern "C"  void RadarParams__ctor_m2910639746 (RadarParams_t1770124526 * __this, Vector2_t2243707579  ___lnglat0, int32_t ___radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsGooglePlaces/RadarParams::get_lnglat()
extern "C"  Vector2_t2243707579  RadarParams_get_lnglat_m1250385003 (RadarParams_t1770124526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces/RadarParams::set_lnglat(UnityEngine.Vector2)
extern "C"  void RadarParams_set_lnglat_m2291314472 (RadarParams_t1770124526 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsGooglePlaces/RadarParams::get_typePath()
extern "C"  String_t* RadarParams_get_typePath_m2473868878 (RadarParams_t1770124526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces/RadarParams::AppendParams(System.Text.StringBuilder)
extern "C"  void RadarParams_AppendParams_m912674503 (RadarParams_t1770124526 * __this, StringBuilder_t1221177846 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
