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

// OnlineMapsBingMapsElevation/BoundsParams
struct BoundsParams_t2314425094;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Heigh688094327.h"
#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Outp2838038948.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsBingMapsElevation/BoundsParams::.ctor(System.String,OnlineMapsBingMapsElevation/Heights,OnlineMapsBingMapsElevation/Output,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32)
extern "C"  void BoundsParams__ctor_m1162039968 (BoundsParams_t2314425094 * __this, String_t* ___key0, int32_t ___heights1, int32_t ___output2, double ___leftLongitude3, double ___topLatitude4, double ___rightLongitude5, double ___bottomLatitude6, int32_t ___rows7, int32_t ___cols8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsBingMapsElevation/BoundsParams::get_urlToken()
extern "C"  String_t* BoundsParams_get_urlToken_m2523776955 (BoundsParams_t2314425094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBingMapsElevation/BoundsParams::GenerateURL(System.Text.StringBuilder)
extern "C"  void BoundsParams_GenerateURL_m3519891307 (BoundsParams_t2314425094 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
