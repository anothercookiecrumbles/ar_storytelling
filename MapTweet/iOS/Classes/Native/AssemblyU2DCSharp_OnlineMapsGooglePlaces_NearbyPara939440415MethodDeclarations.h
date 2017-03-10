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

// OnlineMapsGooglePlaces/NearbyParams
struct NearbyParams_t939440415;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsGooglePlaces/NearbyParams::.ctor(System.Double,System.Double,System.Int32)
extern "C"  void NearbyParams__ctor_m1952872035 (NearbyParams_t939440415 * __this, double ___longitude0, double ___latitude1, int32_t ___radius2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces/NearbyParams::.ctor(UnityEngine.Vector2,System.Int32)
extern "C"  void NearbyParams__ctor_m2408274111 (NearbyParams_t939440415 * __this, Vector2_t2243707579  ___lnglat0, int32_t ___radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces/NearbyParams::.ctor(System.String)
extern "C"  void NearbyParams__ctor_m2849162394 (NearbyParams_t939440415 * __this, String_t* ___pagetoken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsGooglePlaces/NearbyParams::get_lnglat()
extern "C"  Vector2_t2243707579  NearbyParams_get_lnglat_m22420494 (NearbyParams_t939440415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces/NearbyParams::set_lnglat(UnityEngine.Vector2)
extern "C"  void NearbyParams_set_lnglat_m3888681003 (NearbyParams_t939440415 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsGooglePlaces/NearbyParams::get_typePath()
extern "C"  String_t* NearbyParams_get_typePath_m729303187 (NearbyParams_t939440415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces/NearbyParams::AppendParams(System.Text.StringBuilder)
extern "C"  void NearbyParams_AppendParams_m4219168398 (NearbyParams_t939440415 * __this, StringBuilder_t1221177846 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
