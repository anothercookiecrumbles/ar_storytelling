﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// UnityEngine.Gyroscope
struct Gyroscope_t1705362817;
// UnityEngine.Touch[]
struct TouchU5BU5D_t3887265178;
// UnityEngine.LocationService
struct LocationService_t1617852714;
// UnityEngine.Compass
struct Compass_t2500694222;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"
#include "UnityEngine_UnityEngine_DeviceOrientation895964084.h"
#include "UnityEngine_UnityEngine_IMECompositionMode1898275508.h"

// System.Int32 UnityEngine.Input::mainGyroIndex_Internal()
extern "C"  int32_t Input_mainGyroIndex_Internal_m1868841043 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
extern "C"  bool Input_GetKeyInt_m4143570188 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUpInt(System.Int32)
extern "C"  bool Input_GetKeyUpInt_m2486491081 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m2098048324 (Il2CppObject * __this /* static, unused */, String_t* ___axisName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C"  float Input_GetAxisRaw_m4133353720 (Il2CppObject * __this /* static, unused */, String_t* ___axisName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
extern "C"  Gyroscope_t1705362817 * Input_get_gyro_m4027090408 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C"  bool Input_GetButtonDown_m2792523731 (Il2CppObject * __this /* static, unused */, String_t* ___buttonName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3849524999 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyUp_m1008512962 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m464100923 (Il2CppObject * __this /* static, unused */, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m47917805 (Il2CppObject * __this /* static, unused */, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m1275967966 (Il2CppObject * __this /* static, unused */, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C"  void Input_INTERNAL_get_mousePosition_m2302165941 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern "C"  Vector2_t2243707579  Input_get_mouseScrollDelta_m3430638853 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)
extern "C"  void Input_INTERNAL_get_mouseScrollDelta_m1140491498 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C"  bool Input_get_mousePresent_m1434891730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern "C"  TouchU5BU5D_t3887265178* Input_get_touches_m388011594 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t407273883  Input_GetTouch_m1463942798 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_CALL_GetTouch(System.Int32,UnityEngine.Touch&)
extern "C"  void Input_INTERNAL_CALL_GetTouch_m1737132542 (Il2CppObject * __this /* static, unused */, int32_t ___index0, Touch_t407273883 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m2050827666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C"  bool Input_get_touchSupported_m3352846145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LocationService UnityEngine.Input::get_location()
extern "C"  LocationService_t1617852714 * Input_get_location_m1390884443 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Compass UnityEngine.Input::get_compass()
extern "C"  Compass_t2500694222 * Input_get_compass_m630986328 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DeviceOrientation UnityEngine.Input::get_deviceOrientation()
extern "C"  int32_t Input_get_deviceOrientation_m2415424840 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode()
extern "C"  int32_t Input_get_imeCompositionMode_m4250689464 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern "C"  void Input_set_imeCompositionMode_m2881085485 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Input::get_compositionString()
extern "C"  String_t* Input_get_compositionString_m636835668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Input::get_compositionCursorPos()
extern "C"  Vector2_t2243707579  Input_get_compositionCursorPos_m1262302043 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern "C"  void Input_set_compositionCursorPos_m1615567306 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_get_compositionCursorPos(UnityEngine.Vector2&)
extern "C"  void Input_INTERNAL_get_compositionCursorPos_m2426914348 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C"  void Input_INTERNAL_set_compositionCursorPos_m1501857600 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::.cctor()
extern "C"  void Input__cctor_m829848544 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;