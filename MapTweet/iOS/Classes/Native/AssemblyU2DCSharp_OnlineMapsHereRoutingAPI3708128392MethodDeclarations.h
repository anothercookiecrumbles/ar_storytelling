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

// OnlineMapsHereRoutingAPI
struct OnlineMapsHereRoutingAPI_t3708128392;
// System.String
struct String_t;
// OnlineMapsHereRoutingAPI/Waypoint[]
struct WaypointU5BU5D_t1254552535;
// OnlineMapsHereRoutingAPI/RoutingMode
struct RoutingMode_t3690293030;
// OnlineMapsHereRoutingAPI/Params
struct Params_t2276111447;
// OnlineMapsTextWebService
struct OnlineMapsTextWebService_t1027474722;
// OnlineMapsHereRoutingAPIResult
struct OnlineMapsHereRoutingAPIResult_t4009328705;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsHereRoutingAPI_Routing3690293030.h"
#include "AssemblyU2DCSharp_OnlineMapsHereRoutingAPI_Params2276111447.h"

// System.Void OnlineMapsHereRoutingAPI::.ctor(System.String,System.String,OnlineMapsHereRoutingAPI/Waypoint[],OnlineMapsHereRoutingAPI/RoutingMode,OnlineMapsHereRoutingAPI/Params)
extern "C"  void OnlineMapsHereRoutingAPI__ctor_m2220979262 (OnlineMapsHereRoutingAPI_t3708128392 * __this, String_t* ___app_id0, String_t* ___app_code1, WaypointU5BU5D_t1254552535* ___waypoints2, RoutingMode_t3690293030 * ___mode3, Params_t2276111447 * ___p4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsTextWebService OnlineMapsHereRoutingAPI::Find(System.String,System.String,OnlineMapsHereRoutingAPI/Waypoint[],OnlineMapsHereRoutingAPI/RoutingMode,OnlineMapsHereRoutingAPI/Params)
extern "C"  OnlineMapsTextWebService_t1027474722 * OnlineMapsHereRoutingAPI_Find_m27121872 (Il2CppObject * __this /* static, unused */, String_t* ___app_id0, String_t* ___app_code1, WaypointU5BU5D_t1254552535* ___waypoints2, RoutingMode_t3690293030 * ___mode3, Params_t2276111447 * ___p4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsHereRoutingAPIResult OnlineMapsHereRoutingAPI::GetResult(System.String)
extern "C"  OnlineMapsHereRoutingAPIResult_t4009328705 * OnlineMapsHereRoutingAPI_GetResult_m2103311600 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
