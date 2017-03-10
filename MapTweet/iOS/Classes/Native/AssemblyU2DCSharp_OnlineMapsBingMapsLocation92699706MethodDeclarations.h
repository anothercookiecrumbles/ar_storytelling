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

// OnlineMapsBingMapsLocation
struct OnlineMapsBingMapsLocation_t92699706;
// System.String
struct String_t;
// OnlineMapsBingMapsLocationResult[]
struct OnlineMapsBingMapsLocationResultU5BU5D_t567405562;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void OnlineMapsBingMapsLocation::.ctor(System.String,System.String,System.Int32,System.Boolean)
extern "C"  void OnlineMapsBingMapsLocation__ctor_m1242519661 (OnlineMapsBingMapsLocation_t92699706 * __this, String_t* ___query0, String_t* ___key1, int32_t ___maxResults2, bool ___includeNeighborhood3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBingMapsLocation::.ctor(UnityEngine.Vector2,System.String,System.Boolean)
extern "C"  void OnlineMapsBingMapsLocation__ctor_m3977742602 (OnlineMapsBingMapsLocation_t92699706 * __this, Vector2_t2243707579  ___point0, String_t* ___key1, bool ___includeNeighborhood2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBingMapsLocation OnlineMapsBingMapsLocation::FindByQuery(System.String,System.String,System.Int32,System.Boolean)
extern "C"  OnlineMapsBingMapsLocation_t92699706 * OnlineMapsBingMapsLocation_FindByQuery_m919126304 (Il2CppObject * __this /* static, unused */, String_t* ___query0, String_t* ___key1, int32_t ___maxResults2, bool ___includeNeighborhood3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBingMapsLocation OnlineMapsBingMapsLocation::FindByPoint(UnityEngine.Vector2,System.String,System.Boolean)
extern "C"  OnlineMapsBingMapsLocation_t92699706 * OnlineMapsBingMapsLocation_FindByPoint_m2193293231 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___point0, String_t* ___key1, bool ___includeNeighborhood2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsBingMapsLocationResult[] OnlineMapsBingMapsLocation::GetResults(System.String)
extern "C"  OnlineMapsBingMapsLocationResultU5BU5D_t567405562* OnlineMapsBingMapsLocation_GetResults_m805054661 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
