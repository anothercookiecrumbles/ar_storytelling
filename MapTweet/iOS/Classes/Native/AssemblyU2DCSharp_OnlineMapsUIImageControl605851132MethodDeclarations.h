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

// OnlineMapsUIImageControl
struct OnlineMapsUIImageControl_t605851132;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void OnlineMapsUIImageControl::.ctor()
extern "C"  void OnlineMapsUIImageControl__ctor_m1965503927 (OnlineMapsUIImageControl_t605851132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsUIImageControl OnlineMapsUIImageControl::get_instance()
extern "C"  OnlineMapsUIImageControl_t605851132 * OnlineMapsUIImageControl_get_instance_m444366018 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera OnlineMapsUIImageControl::get_worldCamera()
extern "C"  Camera_t189460977 * OnlineMapsUIImageControl_get_worldCamera_m3939193546 (OnlineMapsUIImageControl_t605851132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUIImageControl::BeforeUpdate()
extern "C"  void OnlineMapsUIImageControl_BeforeUpdate_m3549724019 (OnlineMapsUIImageControl_t605851132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUIImageControl::GetCoords(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsUIImageControl_GetCoords_m1999091276 (OnlineMapsUIImageControl_t605851132 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUIImageControl::GetCoords(System.Double&,System.Double&,UnityEngine.Vector2)
extern "C"  bool OnlineMapsUIImageControl_GetCoords_m1123022195 (OnlineMapsUIImageControl_t605851132 * __this, double* ___lng0, double* ___lat1, Vector2_t2243707579  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsUIImageControl::GetRect()
extern "C"  Rect_t3681755626  OnlineMapsUIImageControl_GetRect_m1141979529 (OnlineMapsUIImageControl_t605851132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUIImageControl::HitTest()
extern "C"  bool OnlineMapsUIImageControl_HitTest_m219854828 (OnlineMapsUIImageControl_t605851132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUIImageControl::HitTest(UnityEngine.Vector2)
extern "C"  bool OnlineMapsUIImageControl_HitTest_m2083124732 (OnlineMapsUIImageControl_t605851132 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUIImageControl::OnEnableLate()
extern "C"  void OnlineMapsUIImageControl_OnEnableLate_m2639789967 (OnlineMapsUIImageControl_t605851132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUIImageControl::SetTexture(UnityEngine.Texture2D)
extern "C"  void OnlineMapsUIImageControl_SetTexture_m1179061158 (OnlineMapsUIImageControl_t605851132 * __this, Texture2D_t3542995729 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
