﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OnlineMapsBingMapsElevation/PolylineParams
struct PolylineParams_t1926974915;
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

// System.Void OnlineMapsBingMapsElevation/PolylineParams::.ctor(System.String,OnlineMapsBingMapsElevation/Heights,OnlineMapsBingMapsElevation/Output,System.Collections.IEnumerable,System.Int32)
extern "C"  void PolylineParams__ctor_m2498319505 (PolylineParams_t1926974915 * __this, String_t* ___key0, int32_t ___heights1, int32_t ___output2, Il2CppObject * ___points3, int32_t ___samples4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsBingMapsElevation/PolylineParams::get_urlToken()
extern "C"  String_t* PolylineParams_get_urlToken_m149090510 (PolylineParams_t1926974915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBingMapsElevation/PolylineParams::GenerateURL(System.Text.StringBuilder)
extern "C"  void PolylineParams_GenerateURL_m1906803544 (PolylineParams_t1926974915 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
