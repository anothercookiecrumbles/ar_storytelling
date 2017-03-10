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

// OnlineMapsBingMapsElevation/PointsParams
struct PointsParams_t2852440104;
// System.String
struct String_t;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Heigh688094327.h"
#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Outp2838038948.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsBingMapsElevation/PointsParams::.ctor(System.String,OnlineMapsBingMapsElevation/Heights,OnlineMapsBingMapsElevation/Output,System.Collections.IEnumerable)
extern "C"  void PointsParams__ctor_m3637313627 (PointsParams_t2852440104 * __this, String_t* ___key0, int32_t ___heights1, int32_t ___output2, Il2CppObject * ___points3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsBingMapsElevation/PointsParams::get_urlToken()
extern "C"  String_t* PointsParams_get_urlToken_m4105713929 (PointsParams_t2852440104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsBingMapsElevation/PointsParams::EncodePoints()
extern "C"  String_t* PointsParams_EncodePoints_m4155784273 (PointsParams_t2852440104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBingMapsElevation/PointsParams::GenerateURL(System.Text.StringBuilder)
extern "C"  void PointsParams_GenerateURL_m1282199981 (PointsParams_t2852440104 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
