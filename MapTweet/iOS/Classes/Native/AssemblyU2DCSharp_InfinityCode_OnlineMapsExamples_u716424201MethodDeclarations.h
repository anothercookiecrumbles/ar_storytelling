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

// InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample
struct uGUICustomMarkerEngineExample_t716424201;
// UnityEngine.Camera
struct Camera_t189460977;
// InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample
struct uGUICustomMarkerExample_t2414665147;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_InfinityCode_OnlineMapsExamples_2414665147.h"

// System.Void InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::.ctor()
extern "C"  void uGUICustomMarkerEngineExample__ctor_m298044760 (uGUICustomMarkerEngineExample_t716424201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::get_instance()
extern "C"  uGUICustomMarkerEngineExample_t716424201 * uGUICustomMarkerEngineExample_get_instance_m1291429426 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::get_worldCamera()
extern "C"  Camera_t189460977 * uGUICustomMarkerEngineExample_get_worldCamera_m3776939669 (uGUICustomMarkerEngineExample_t716424201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::AddMarker(UnityEngine.Vector2,System.String)
extern "C"  uGUICustomMarkerExample_t2414665147 * uGUICustomMarkerEngineExample_AddMarker_m2154686227 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::AddMarker(System.Double,System.Double,System.String)
extern "C"  uGUICustomMarkerExample_t2414665147 * uGUICustomMarkerEngineExample_AddMarker_m3938331695 (Il2CppObject * __this /* static, unused */, double ___lng0, double ___lat1, String_t* ___text2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::OnEnable()
extern "C"  void uGUICustomMarkerEngineExample_OnEnable_m500564292 (uGUICustomMarkerEngineExample_t716424201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::RemoveAllMarkers()
extern "C"  void uGUICustomMarkerEngineExample_RemoveAllMarkers_m3687980668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::RemoveMarker(InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample)
extern "C"  void uGUICustomMarkerEngineExample_RemoveMarker_m1575442637 (Il2CppObject * __this /* static, unused */, uGUICustomMarkerExample_t2414665147 * ___marker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::RemoveMarkerAt(System.Int32)
extern "C"  void uGUICustomMarkerEngineExample_RemoveMarkerAt_m1065264276 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::Start()
extern "C"  void uGUICustomMarkerEngineExample_Start_m3640586724 (uGUICustomMarkerEngineExample_t716424201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::UpdateMarkers()
extern "C"  void uGUICustomMarkerEngineExample_UpdateMarkers_m1495547340 (uGUICustomMarkerEngineExample_t716424201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::UpdateMarker(InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample)
extern "C"  void uGUICustomMarkerEngineExample_UpdateMarker_m2834686132 (uGUICustomMarkerEngineExample_t716424201 * __this, uGUICustomMarkerExample_t2414665147 * ___marker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InfinityCode.OnlineMapsExamples.uGUICustomMarkerEngineExample::UpdateMarker(InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample,System.Double,System.Double,System.Double,System.Double)
extern "C"  void uGUICustomMarkerEngineExample_UpdateMarker_m1900544308 (uGUICustomMarkerEngineExample_t716424201 * __this, uGUICustomMarkerExample_t2414665147 * ___marker0, double ___tlx1, double ___tly2, double ___brx3, double ___bry4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
