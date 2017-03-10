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

// OnlineMapsBingMapsElevation
struct OnlineMapsBingMapsElevation_t2714164788;
// OnlineMapsBingMapsElevation/Params
struct Params_t1354251003;
// System.String
struct String_t;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// OnlineMapsBingMapsElevationResult
struct OnlineMapsBingMapsElevationResult_t1113737257;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Array
struct Il2CppArray;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Para1354251003.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Heigh688094327.h"
#include "AssemblyU2DCSharp_OnlineMapsBingMapsElevation_Outp2838038948.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void OnlineMapsBingMapsElevation::.ctor(OnlineMapsBingMapsElevation/Params)
extern "C"  void OnlineMapsBingMapsElevation__ctor_m4252143866 (OnlineMapsBingMapsElevation_t2714164788 * __this, Params_t1354251003 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBingMapsElevation OnlineMapsBingMapsElevation::GetElevationByPoints(System.String,System.Collections.IEnumerable,OnlineMapsBingMapsElevation/Heights,OnlineMapsBingMapsElevation/Output)
extern "C"  OnlineMapsBingMapsElevation_t2714164788 * OnlineMapsBingMapsElevation_GetElevationByPoints_m4085924207 (Il2CppObject * __this /* static, unused */, String_t* ___key0, Il2CppObject * ___points1, int32_t ___heights2, int32_t ___output3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBingMapsElevation OnlineMapsBingMapsElevation::GetElevationByPolyline(System.String,System.Collections.IEnumerable,System.Int32,OnlineMapsBingMapsElevation/Heights,OnlineMapsBingMapsElevation/Output)
extern "C"  OnlineMapsBingMapsElevation_t2714164788 * OnlineMapsBingMapsElevation_GetElevationByPolyline_m1630806329 (Il2CppObject * __this /* static, unused */, String_t* ___key0, Il2CppObject * ___points1, int32_t ___samples2, int32_t ___heights3, int32_t ___output4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBingMapsElevation OnlineMapsBingMapsElevation::GetElevationByBounds(System.String,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,OnlineMapsBingMapsElevation/Heights,OnlineMapsBingMapsElevation/Output)
extern "C"  OnlineMapsBingMapsElevation_t2714164788 * OnlineMapsBingMapsElevation_GetElevationByBounds_m2190495290 (Il2CppObject * __this /* static, unused */, String_t* ___key0, double ___leftLongitude1, double ___topLatitude2, double ___rightLongitude3, double ___bottomLatitude4, int32_t ___rows5, int32_t ___cols6, int32_t ___heights7, int32_t ___output8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBingMapsElevation OnlineMapsBingMapsElevation::GetSeaLevel(System.String,System.Collections.IEnumerable,OnlineMapsBingMapsElevation/Output)
extern "C"  OnlineMapsBingMapsElevation_t2714164788 * OnlineMapsBingMapsElevation_GetSeaLevel_m3412006676 (Il2CppObject * __this /* static, unused */, String_t* ___key0, Il2CppObject * ___points1, int32_t ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBingMapsElevationResult OnlineMapsBingMapsElevation::GetResult(System.String,OnlineMapsBingMapsElevation/Output)
extern "C"  OnlineMapsBingMapsElevationResult_t1113737257 * OnlineMapsBingMapsElevation_GetResult_m303610864 (Il2CppObject * __this /* static, unused */, String_t* ___response0, int32_t ___outputType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsBingMapsElevation::IndexOf(System.String,System.String[])
extern "C"  int32_t OnlineMapsBingMapsElevation_IndexOf_m1120674394 (Il2CppObject * __this /* static, unused */, String_t* ___str0, StringU5BU5D_t1642385972* ___parts1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsBingMapsElevation::ParseElevationArray(System.String,OnlineMapsBingMapsElevation/Output,System.Array&)
extern "C"  bool OnlineMapsBingMapsElevation_ParseElevationArray_m378352482 (Il2CppObject * __this /* static, unused */, String_t* ___response0, int32_t ___outputType1, Il2CppArray ** ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBingMapsElevation::ParseJSONElevations(System.String,System.Array,System.Int32,System.Int32,System.Int32,System.Type)
extern "C"  void OnlineMapsBingMapsElevation_ParseJSONElevations_m2288924594 (Il2CppObject * __this /* static, unused */, String_t* ___response0, Il2CppArray * ___array1, int32_t ___l12, int32_t ___l23, int32_t ___rank4, Type_t * ___t25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBingMapsElevation::ParseXMLElevations(System.String,System.Array,System.Int32,System.Int32,System.Int32,System.Type)
extern "C"  void OnlineMapsBingMapsElevation_ParseXMLElevations_m1614370567 (Il2CppObject * __this /* static, unused */, String_t* ___response0, Il2CppArray * ___array1, int32_t ___l12, int32_t ___l23, int32_t ___rank4, Type_t * ___t25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
