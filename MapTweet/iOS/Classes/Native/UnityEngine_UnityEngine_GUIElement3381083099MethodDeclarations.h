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

// UnityEngine.GUIElement
struct GUIElement_t3381083099;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GUIElement3381083099.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Boolean UnityEngine.GUIElement::HitTest(UnityEngine.Vector3)
extern "C"  bool GUIElement_HitTest_m3066714724 (GUIElement_t3381083099 * __this, Vector3_t2243707580  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIElement::INTERNAL_CALL_HitTest(UnityEngine.GUIElement,UnityEngine.Vector3&,UnityEngine.Camera)
extern "C"  bool GUIElement_INTERNAL_CALL_HitTest_m1420899641 (Il2CppObject * __this /* static, unused */, GUIElement_t3381083099 * ___self0, Vector3_t2243707580 * ___screenPosition1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUIElement::GetScreenRect()
extern "C"  Rect_t3681755626  GUIElement_GetScreenRect_m3141129978 (GUIElement_t3381083099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIElement::INTERNAL_CALL_GetScreenRect(UnityEngine.GUIElement,UnityEngine.Camera,UnityEngine.Rect&)
extern "C"  void GUIElement_INTERNAL_CALL_GetScreenRect_m1163453080 (Il2CppObject * __this /* static, unused */, GUIElement_t3381083099 * ___self0, Camera_t189460977 * ___camera1, Rect_t3681755626 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
