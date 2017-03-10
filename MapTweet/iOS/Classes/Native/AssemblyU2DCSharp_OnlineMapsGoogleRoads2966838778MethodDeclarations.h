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

// OnlineMapsGoogleRoads
struct OnlineMapsGoogleRoads_t2966838778;
// System.String
struct String_t;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// OnlineMapsGoogleRoads/SnapToRoadResult[]
struct SnapToRoadResultU5BU5D_t1073049680;
// OnlineMapsJSONObject
struct OnlineMapsJSONObject_t1097311111;
// OnlineMapsGoogleRoads/SpeedLimitResult[]
struct SpeedLimitResultU5BU5D_t114928561;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsGoogleRoads_Units1565397030.h"
#include "AssemblyU2DCSharp_OnlineMapsJSONObject1097311111.h"

// System.Void OnlineMapsGoogleRoads::.ctor(System.String,System.Collections.IEnumerable,System.Boolean)
extern "C"  void OnlineMapsGoogleRoads__ctor_m175864019 (OnlineMapsGoogleRoads_t2966838778 * __this, String_t* ___key0, Il2CppObject * ___path1, bool ___interpolate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleRoads::.ctor(System.String,System.Collections.IEnumerable,OnlineMapsGoogleRoads/Units)
extern "C"  void OnlineMapsGoogleRoads__ctor_m1429297984 (OnlineMapsGoogleRoads_t2966838778 * __this, String_t* ___key0, Il2CppObject * ___path1, int32_t ___units2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleRoads/SnapToRoadResult[] OnlineMapsGoogleRoads::GetSnapToRoadResults(System.String)
extern "C"  SnapToRoadResultU5BU5D_t1073049680* OnlineMapsGoogleRoads_GetSnapToRoadResults_m2517852812 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleRoads/SnapToRoadResult[] OnlineMapsGoogleRoads::GetSnapToRoadResults(OnlineMapsJSONObject)
extern "C"  SnapToRoadResultU5BU5D_t1073049680* OnlineMapsGoogleRoads_GetSnapToRoadResults_m2528798989 (Il2CppObject * __this /* static, unused */, OnlineMapsJSONObject_t1097311111 * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleRoads/SpeedLimitResult[] OnlineMapsGoogleRoads::GetSpeedLimitResults(System.String)
extern "C"  SpeedLimitResultU5BU5D_t114928561* OnlineMapsGoogleRoads_GetSpeedLimitResults_m2591404598 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleRoads/SpeedLimitResult[] OnlineMapsGoogleRoads::GetSpeedLimitResults(OnlineMapsJSONObject)
extern "C"  SpeedLimitResultU5BU5D_t114928561* OnlineMapsGoogleRoads_GetSpeedLimitResults_m2464010689 (Il2CppObject * __this /* static, unused */, OnlineMapsJSONObject_t1097311111 * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleRoads OnlineMapsGoogleRoads::SnapToRoads(System.String,System.Collections.IEnumerable,System.Boolean)
extern "C"  OnlineMapsGoogleRoads_t2966838778 * OnlineMapsGoogleRoads_SnapToRoads_m4226178524 (Il2CppObject * __this /* static, unused */, String_t* ___key0, Il2CppObject * ___path1, bool ___interpolate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleRoads OnlineMapsGoogleRoads::SpeedLimits(System.String,System.Collections.IEnumerable,OnlineMapsGoogleRoads/Units)
extern "C"  OnlineMapsGoogleRoads_t2966838778 * OnlineMapsGoogleRoads_SpeedLimits_m3667628008 (Il2CppObject * __this /* static, unused */, String_t* ___key0, Il2CppObject * ___path1, int32_t ___units2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
