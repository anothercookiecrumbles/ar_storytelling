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

// OnlineMapsUIRawImageControl
struct OnlineMapsUIRawImageControl_t3061318298;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void OnlineMapsUIRawImageControl::.ctor()
extern "C"  void OnlineMapsUIRawImageControl__ctor_m969072515 (OnlineMapsUIRawImageControl_t3061318298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsUIRawImageControl OnlineMapsUIRawImageControl::get_instance()
extern "C"  OnlineMapsUIRawImageControl_t3061318298 * OnlineMapsUIRawImageControl_get_instance_m2388430034 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera OnlineMapsUIRawImageControl::get_worldCamera()
extern "C"  Camera_t189460977 * OnlineMapsUIRawImageControl_get_worldCamera_m2784834570 (OnlineMapsUIRawImageControl_t3061318298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUIRawImageControl::BeforeUpdate()
extern "C"  void OnlineMapsUIRawImageControl_BeforeUpdate_m3580371455 (OnlineMapsUIRawImageControl_t3061318298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUIRawImageControl::GetCoords(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsUIRawImageControl_GetCoords_m932670560 (OnlineMapsUIRawImageControl_t3061318298 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUIRawImageControl::GetCoords(System.Double&,System.Double&,UnityEngine.Vector2)
extern "C"  bool OnlineMapsUIRawImageControl_GetCoords_m2364636951 (OnlineMapsUIRawImageControl_t3061318298 * __this, double* ___lng0, double* ___lat1, Vector2_t2243707579  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsUIRawImageControl::GetRect()
extern "C"  Rect_t3681755626  OnlineMapsUIRawImageControl_GetRect_m130228633 (OnlineMapsUIRawImageControl_t3061318298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUIRawImageControl::HitTest()
extern "C"  bool OnlineMapsUIRawImageControl_HitTest_m3316314418 (OnlineMapsUIRawImageControl_t3061318298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUIRawImageControl::HitTest(UnityEngine.Vector2)
extern "C"  bool OnlineMapsUIRawImageControl_HitTest_m1487807602 (OnlineMapsUIRawImageControl_t3061318298 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUIRawImageControl::OnEnableLate()
extern "C"  void OnlineMapsUIRawImageControl_OnEnableLate_m4034894323 (OnlineMapsUIRawImageControl_t3061318298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUIRawImageControl::SetTexture(UnityEngine.Texture2D)
extern "C"  void OnlineMapsUIRawImageControl_SetTexture_m2472496616 (OnlineMapsUIRawImageControl_t3061318298 * __this, Texture2D_t3542995729 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
