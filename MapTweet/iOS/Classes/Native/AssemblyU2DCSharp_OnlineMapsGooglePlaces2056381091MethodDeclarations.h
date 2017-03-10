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

// OnlineMapsGooglePlaces
struct OnlineMapsGooglePlaces_t2056381091;
// System.String
struct String_t;
// OnlineMapsGooglePlaces/RequestParams
struct RequestParams_t3207285289;
// OnlineMapsGooglePlaces/NearbyParams
struct NearbyParams_t939440415;
// OnlineMapsGooglePlaces/TextParams
struct TextParams_t2625645621;
// OnlineMapsGooglePlaces/RadarParams
struct RadarParams_t1770124526;
// OnlineMapsGooglePlacesResult[]
struct OnlineMapsGooglePlacesResultU5BU5D_t485138023;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsGooglePlaces_RequestPa3207285289.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsGooglePlaces_OnlineMap2778439920.h"
#include "AssemblyU2DCSharp_OnlineMapsGooglePlaces_NearbyPara939440415.h"
#include "AssemblyU2DCSharp_OnlineMapsGooglePlaces_TextParam2625645621.h"
#include "AssemblyU2DCSharp_OnlineMapsGooglePlaces_RadarPara1770124526.h"

// System.Void OnlineMapsGooglePlaces::.ctor()
extern "C"  void OnlineMapsGooglePlaces__ctor_m283546726 (OnlineMapsGooglePlaces_t2056381091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces::.ctor(System.String,OnlineMapsGooglePlaces/RequestParams)
extern "C"  void OnlineMapsGooglePlaces__ctor_m4230925699 (OnlineMapsGooglePlaces_t2056381091 * __this, String_t* ___key0, RequestParams_t3207285289 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlaces OnlineMapsGooglePlaces::FindNearby(UnityEngine.Vector2,System.Int32,System.String,System.String,System.String,System.String,System.Int32,System.Int32,System.Boolean,OnlineMapsGooglePlaces/OnlineMapsFindPlacesRankBy)
extern "C"  OnlineMapsGooglePlaces_t2056381091 * OnlineMapsGooglePlaces_FindNearby_m796484474 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___lnglat0, int32_t ___radius1, String_t* ___key2, String_t* ___keyword3, String_t* ___name4, String_t* ___types5, int32_t ___minprice6, int32_t ___maxprice7, bool ___opennow8, int32_t ___rankBy9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlaces OnlineMapsGooglePlaces::FindNearby(System.String,OnlineMapsGooglePlaces/NearbyParams)
extern "C"  OnlineMapsGooglePlaces_t2056381091 * OnlineMapsGooglePlaces_FindNearby_m2427411241 (Il2CppObject * __this /* static, unused */, String_t* ___key0, NearbyParams_t939440415 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlaces OnlineMapsGooglePlaces::FindText(System.String,System.String,UnityEngine.Vector2,System.Int32,System.String,System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  OnlineMapsGooglePlaces_t2056381091 * OnlineMapsGooglePlaces_FindText_m267450430 (Il2CppObject * __this /* static, unused */, String_t* ___query0, String_t* ___key1, Vector2_t2243707579  ___lnglat2, int32_t ___radius3, String_t* ___language4, String_t* ___types5, int32_t ___minprice6, int32_t ___maxprice7, bool ___opennow8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlaces OnlineMapsGooglePlaces::FindText(System.String,OnlineMapsGooglePlaces/TextParams)
extern "C"  OnlineMapsGooglePlaces_t2056381091 * OnlineMapsGooglePlaces_FindText_m1926945481 (Il2CppObject * __this /* static, unused */, String_t* ___key0, TextParams_t2625645621 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlaces OnlineMapsGooglePlaces::FindRadar(UnityEngine.Vector2,System.Int32,System.String,System.String,System.String,System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  OnlineMapsGooglePlaces_t2056381091 * OnlineMapsGooglePlaces_FindRadar_m1074492563 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___lnglat0, int32_t ___radius1, String_t* ___key2, String_t* ___keyword3, String_t* ___name4, String_t* ___types5, int32_t ___minprice6, int32_t ___maxprice7, bool ___opennow8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlaces OnlineMapsGooglePlaces::FindRadar(System.String,OnlineMapsGooglePlaces/RadarParams)
extern "C"  OnlineMapsGooglePlaces_t2056381091 * OnlineMapsGooglePlaces_FindRadar_m4060627433 (Il2CppObject * __this /* static, unused */, String_t* ___key0, RadarParams_t1770124526 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlacesResult[] OnlineMapsGooglePlaces::GetResults(System.String)
extern "C"  OnlineMapsGooglePlacesResultU5BU5D_t485138023* OnlineMapsGooglePlaces_GetResults_m3637979113 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlacesResult[] OnlineMapsGooglePlaces::GetResults(System.String,System.String&)
extern "C"  OnlineMapsGooglePlacesResultU5BU5D_t485138023* OnlineMapsGooglePlaces_GetResults_m89288661 (Il2CppObject * __this /* static, unused */, String_t* ___response0, String_t** ___nextPageToken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
