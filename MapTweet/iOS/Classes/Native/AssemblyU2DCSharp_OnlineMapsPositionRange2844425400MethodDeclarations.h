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

// OnlineMapsPositionRange
struct OnlineMapsPositionRange_t2844425400;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsPositionRangeType3691382528.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void OnlineMapsPositionRange::.ctor(System.Single,System.Single,System.Single,System.Single,OnlineMapsPositionRangeType)
extern "C"  void OnlineMapsPositionRange__ctor_m3888763947 (OnlineMapsPositionRange_t2844425400 * __this, float ___minLat0, float ___minLng1, float ___maxLat2, float ___maxLng3, int32_t ___type4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsPositionRange::get_center()
extern "C"  Vector2_t2243707579  OnlineMapsPositionRange_get_center_m374331474 (OnlineMapsPositionRange_t2844425400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsPositionRange::CheckAndFix(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsPositionRange_CheckAndFix_m1166874608 (OnlineMapsPositionRange_t2844425400 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsPositionRange::CheckAndFix(System.Double&,System.Double&)
extern "C"  bool OnlineMapsPositionRange_CheckAndFix_m719674871 (OnlineMapsPositionRange_t2844425400 * __this, double* ___lng0, double* ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsPositionRange::InRange(UnityEngine.Vector2)
extern "C"  bool OnlineMapsPositionRange_InRange_m2518776137 (OnlineMapsPositionRange_t2844425400 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
