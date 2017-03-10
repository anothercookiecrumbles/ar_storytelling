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

// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// OnlineMapsVector2i
struct OnlineMapsVector2i_t2180897250;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_OnlineMapsVector2i2180897250.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"

// System.Void OnlineMapsMarker::.ctor()
extern "C"  void OnlineMapsMarker__ctor_m2887694713 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] OnlineMapsMarker::get_colors()
extern "C"  Color32U5BU5D_t30278651* OnlineMapsMarker_get_colors_m1720240152 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker::set_enabled(System.Boolean)
extern "C"  void OnlineMapsMarker_set_enabled_m792356502 (OnlineMapsMarker_t3492166682 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsMarker::get_height()
extern "C"  int32_t OnlineMapsMarker_get_height_m3135824661 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsMarker::get_rotation()
extern "C"  float OnlineMapsMarker_get_rotation_m2090154736 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker::set_rotation(System.Single)
extern "C"  void OnlineMapsMarker_set_rotation_m297985189 (OnlineMapsMarker_t3492166682 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsMarker::get_scale()
extern "C"  float OnlineMapsMarker_get_scale_m2543509094 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker::set_scale(System.Single)
extern "C"  void OnlineMapsMarker_set_scale_m3744929509 (OnlineMapsMarker_t3492166682 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsMarker::get_screenRect()
extern "C"  Rect_t3681755626  OnlineMapsMarker_get_screenRect_m3545473446 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsMarker::get_realScreenRect()
extern "C"  Rect_t3681755626  OnlineMapsMarker_get_realScreenRect_m1390503966 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsMarker::get_width()
extern "C"  int32_t OnlineMapsMarker_get_width_m824653140 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsVector2i OnlineMapsMarker::GetAlignedPosition(OnlineMapsVector2i)
extern "C"  OnlineMapsVector2i_t2180897250 * OnlineMapsMarker_GetAlignedPosition_m3677230881 (OnlineMapsMarker_t3492166682 * __this, OnlineMapsVector2i_t2180897250 * ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsVector2i OnlineMapsMarker::GetAlignedPosition(System.Int32,System.Int32)
extern "C"  OnlineMapsVector2i_t2180897250 * OnlineMapsMarker_GetAlignedPosition_m768161007 (OnlineMapsMarker_t3492166682 * __this, int32_t ___px0, int32_t ___py1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsVector2i OnlineMapsMarker::GetAlignOffset()
extern "C"  OnlineMapsVector2i_t2180897250 * OnlineMapsMarker_GetAlignOffset_m3668650546 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsMarker::GetRect()
extern "C"  Rect_t3681755626  OnlineMapsMarker_GetRect_m1856022591 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsMarker::HitTest(UnityEngine.Vector2,System.Int32)
extern "C"  bool OnlineMapsMarker_HitTest_m2990904919 (OnlineMapsMarker_t3492166682 * __this, Vector2_t2243707579  ___coordinates0, int32_t ___zoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker::Init()
extern "C"  void OnlineMapsMarker_Init_m2580732675 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker::LookToCoordinates(UnityEngine.Vector2)
extern "C"  void OnlineMapsMarker_LookToCoordinates_m2687612856 (OnlineMapsMarker_t3492166682 * __this, Vector2_t2243707579  ___coordinates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMapsMarker::Save(OnlineMapsXML)
extern "C"  OnlineMapsXML_t3341520387 * OnlineMapsMarker_Save_m1651592811 (OnlineMapsMarker_t3492166682 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker::UpdateRotatedBuffer()
extern "C"  void OnlineMapsMarker_UpdateRotatedBuffer_m1324488749 (OnlineMapsMarker_t3492166682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
