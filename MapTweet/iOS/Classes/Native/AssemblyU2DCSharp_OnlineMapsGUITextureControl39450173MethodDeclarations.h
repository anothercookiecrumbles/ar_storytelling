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

// OnlineMapsGUITextureControl
struct OnlineMapsGUITextureControl_t39450173;
// UnityEngine.GUITexture
struct GUITexture_t1909122990;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void OnlineMapsGUITextureControl::.ctor()
extern "C"  void OnlineMapsGUITextureControl__ctor_m3275163002 (OnlineMapsGUITextureControl_t39450173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGUITextureControl OnlineMapsGUITextureControl::get_instance()
extern "C"  OnlineMapsGUITextureControl_t39450173 * OnlineMapsGUITextureControl_get_instance_m3068522514 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUITexture OnlineMapsGUITextureControl::get_gTexture()
extern "C"  GUITexture_t1909122990 * OnlineMapsGUITextureControl_get_gTexture_m1652462545 (OnlineMapsGUITextureControl_t39450173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsGUITextureControl::GetCoords(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsGUITextureControl_GetCoords_m1290963415 (OnlineMapsGUITextureControl_t39450173 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsGUITextureControl::GetCoords(System.Double&,System.Double&,UnityEngine.Vector2)
extern "C"  bool OnlineMapsGUITextureControl_GetCoords_m1576810458 (OnlineMapsGUITextureControl_t39450173 * __this, double* ___lng0, double* ___lat1, Vector2_t2243707579  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsGUITextureControl::GetRect()
extern "C"  Rect_t3681755626  OnlineMapsGUITextureControl_GetRect_m864992060 (OnlineMapsGUITextureControl_t39450173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsGUITextureControl::HitTest()
extern "C"  bool OnlineMapsGUITextureControl_HitTest_m3185225539 (OnlineMapsGUITextureControl_t39450173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsGUITextureControl::HitTest(UnityEngine.Vector2)
extern "C"  bool OnlineMapsGUITextureControl_HitTest_m1881191231 (OnlineMapsGUITextureControl_t39450173 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGUITextureControl::OnEnableLate()
extern "C"  void OnlineMapsGUITextureControl_OnEnableLate_m2246802446 (OnlineMapsGUITextureControl_t39450173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGUITextureControl::SetTexture(UnityEngine.Texture2D)
extern "C"  void OnlineMapsGUITextureControl_SetTexture_m1394731883 (OnlineMapsGUITextureControl_t39450173 * __this, Texture2D_t3542995729 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
