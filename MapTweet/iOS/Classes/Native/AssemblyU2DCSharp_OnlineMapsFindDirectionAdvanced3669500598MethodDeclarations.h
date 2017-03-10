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

// OnlineMapsFindDirectionAdvanced
struct OnlineMapsFindDirectionAdvanced_t3669500598;
// OnlineMapsGoogleAPIQuery
struct OnlineMapsGoogleAPIQuery_t356009153;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// OnlineMapsFindDirectionResult
struct OnlineMapsFindDirectionResult_t3435689343;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsGoogleDirections_Mode1655571865.h"
#include "AssemblyU2DCSharp_OnlineMapsGoogleDirections_Avoid552234187.h"
#include "AssemblyU2DCSharp_OnlineMapsGoogleDirections_Units1282762079.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsFindDirectionAdvanced::.ctor()
extern "C"  void OnlineMapsFindDirectionAdvanced__ctor_m487453725 (OnlineMapsFindDirectionAdvanced_t3669500598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleAPIQuery OnlineMapsFindDirectionAdvanced::Find(UnityEngine.Vector2,UnityEngine.Vector2,OnlineMapsGoogleDirections/Mode,System.String[],System.Boolean,OnlineMapsGoogleDirections/Avoid,OnlineMapsGoogleDirections/Units,System.String,System.Int64,System.Int64,System.String)
extern "C"  OnlineMapsGoogleAPIQuery_t356009153 * OnlineMapsFindDirectionAdvanced_Find_m306789564 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___destination1, int32_t ___mode2, StringU5BU5D_t1642385972* ___waypoints3, bool ___alternatives4, int32_t ___avoid5, int32_t ___units6, String_t* ___region7, int64_t ___departure_time8, int64_t ___arrival_time9, String_t* ___language10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleAPIQuery OnlineMapsFindDirectionAdvanced::Find(UnityEngine.Vector2,System.String,OnlineMapsGoogleDirections/Mode,System.String[],System.Boolean,OnlineMapsGoogleDirections/Avoid,OnlineMapsGoogleDirections/Units,System.String,System.Int64,System.Int64,System.String)
extern "C"  OnlineMapsGoogleAPIQuery_t356009153 * OnlineMapsFindDirectionAdvanced_Find_m891211746 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, String_t* ___destination1, int32_t ___mode2, StringU5BU5D_t1642385972* ___waypoints3, bool ___alternatives4, int32_t ___avoid5, int32_t ___units6, String_t* ___region7, int64_t ___departure_time8, int64_t ___arrival_time9, String_t* ___language10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleAPIQuery OnlineMapsFindDirectionAdvanced::Find(System.String,UnityEngine.Vector2,OnlineMapsGoogleDirections/Mode,System.String[],System.Boolean,OnlineMapsGoogleDirections/Avoid,OnlineMapsGoogleDirections/Units,System.String,System.Int64,System.Int64,System.String)
extern "C"  OnlineMapsGoogleAPIQuery_t356009153 * OnlineMapsFindDirectionAdvanced_Find_m2998752226 (Il2CppObject * __this /* static, unused */, String_t* ___origin0, Vector2_t2243707579  ___destination1, int32_t ___mode2, StringU5BU5D_t1642385972* ___waypoints3, bool ___alternatives4, int32_t ___avoid5, int32_t ___units6, String_t* ___region7, int64_t ___departure_time8, int64_t ___arrival_time9, String_t* ___language10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleAPIQuery OnlineMapsFindDirectionAdvanced::Find(System.String,System.String,OnlineMapsGoogleDirections/Mode,System.String[],System.Boolean,OnlineMapsGoogleDirections/Avoid,OnlineMapsGoogleDirections/Units,System.String,System.Int64,System.Int64,System.String)
extern "C"  OnlineMapsGoogleAPIQuery_t356009153 * OnlineMapsFindDirectionAdvanced_Find_m270128700 (Il2CppObject * __this /* static, unused */, String_t* ___origin0, String_t* ___destination1, int32_t ___mode2, StringU5BU5D_t1642385972* ___waypoints3, bool ___alternatives4, int32_t ___avoid5, int32_t ___units6, String_t* ___region7, int64_t ___departure_time8, int64_t ___arrival_time9, String_t* ___language10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsFindDirectionResult OnlineMapsFindDirectionAdvanced::GetResult(System.String)
extern "C"  OnlineMapsFindDirectionResult_t3435689343 * OnlineMapsFindDirectionAdvanced_GetResult_m3176765136 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
