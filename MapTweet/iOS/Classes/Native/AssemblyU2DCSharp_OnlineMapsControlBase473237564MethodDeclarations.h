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

// OnlineMapsControlBase
struct OnlineMapsControlBase_t473237564;
// OnlineMapsMarkerBase
struct OnlineMapsMarkerBase_t3900955221;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsMarkerBase3900955221.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void OnlineMapsControlBase::.ctor()
extern "C"  void OnlineMapsControlBase__ctor_m1637777049 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsControlBase OnlineMapsControlBase::get_instance()
extern "C"  OnlineMapsControlBase_t473237564 * OnlineMapsControlBase_get_instance_m261585874 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsControlBase::get_allowTouchZoom()
extern "C"  bool OnlineMapsControlBase_get_allowTouchZoom_m978470027 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsControlBase::get_allowMarkerScreenRect()
extern "C"  bool OnlineMapsControlBase_get_allowMarkerScreenRect_m2589357475 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarkerBase OnlineMapsControlBase::get_dragMarker()
extern "C"  OnlineMapsMarkerBase_t3900955221 * OnlineMapsControlBase_get_dragMarker_m868728400 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::set_dragMarker(OnlineMapsMarkerBase)
extern "C"  void OnlineMapsControlBase_set_dragMarker_m3999242633 (OnlineMapsControlBase_t473237564 * __this, OnlineMapsMarkerBase_t3900955221 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsControlBase::get_screenRect()
extern "C"  Rect_t3681755626  OnlineMapsControlBase_get_screenRect_m234565568 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsControlBase::get_uvRect()
extern "C"  Rect_t3681755626  OnlineMapsControlBase_get_uvRect_m4174572851 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::AfterUpdate()
extern "C"  void OnlineMapsControlBase_AfterUpdate_m4186240096 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::BeforeUpdate()
extern "C"  void OnlineMapsControlBase_BeforeUpdate_m1999969057 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::CreateMarker()
extern "C"  void OnlineMapsControlBase_CreateMarker_m549747415 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::DragMarker()
extern "C"  void OnlineMapsControlBase_DragMarker_m1856824607 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsControlBase::GetCoords()
extern "C"  Vector2_t2243707579  OnlineMapsControlBase_GetCoords_m131753538 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsControlBase::GetCoords(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsControlBase_GetCoords_m4215456166 (OnlineMapsControlBase_t473237564 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsControlBase::GetCoords(System.Double&,System.Double&)
extern "C"  bool OnlineMapsControlBase_GetCoords_m2744516109 (OnlineMapsControlBase_t473237564 * __this, double* ___lng0, double* ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsControlBase::GetCoords(System.Double&,System.Double&,UnityEngine.Vector2)
extern "C"  bool OnlineMapsControlBase_GetCoords_m2913973909 (OnlineMapsControlBase_t473237564 * __this, double* ___lng0, double* ___lat1, Vector2_t2243707579  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsControlBase::GetInputPosition()
extern "C"  Vector2_t2243707579  OnlineMapsControlBase_GetInputPosition_m301437027 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsControlBase::GetPosition(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsControlBase_GetPosition_m4034301597 (OnlineMapsControlBase_t473237564 * __this, Vector2_t2243707579  ___coords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::GetPosition(System.Double,System.Double,System.Double&,System.Double&)
extern "C"  void OnlineMapsControlBase_GetPosition_m1087692010 (OnlineMapsControlBase_t473237564 * __this, double ___lng0, double ___lat1, double* ___px2, double* ___py3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsControlBase::GetRect()
extern "C"  Rect_t3681755626  OnlineMapsControlBase_GetRect_m604955799 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsControlBase::GetScreenPosition(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsControlBase_GetScreenPosition_m1451770913 (OnlineMapsControlBase_t473237564 * __this, Vector2_t2243707579  ___coords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsControlBase::GetScreenPosition(System.Double,System.Double)
extern "C"  Vector2_t2243707579  OnlineMapsControlBase_GetScreenPosition_m2185836225 (OnlineMapsControlBase_t473237564 * __this, double ___lng0, double ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsControlBase::GetTouchCount()
extern "C"  int32_t OnlineMapsControlBase_GetTouchCount_m3639317891 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsControlBase::HitTest()
extern "C"  bool OnlineMapsControlBase_HitTest_m1127276936 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsControlBase::HitTest(UnityEngine.Vector2)
extern "C"  bool OnlineMapsControlBase_HitTest_m1457693892 (OnlineMapsControlBase_t473237564 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::InvokeBasePress()
extern "C"  void OnlineMapsControlBase_InvokeBasePress_m1243668819 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::InvokeBaseRelease()
extern "C"  void OnlineMapsControlBase_InvokeBaseRelease_m458283561 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::OnAwakeBefore()
extern "C"  void OnlineMapsControlBase_OnAwakeBefore_m1756633936 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::OnDestroy()
extern "C"  void OnlineMapsControlBase_OnDestroy_m536849746 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::OnDestroyLate()
extern "C"  void OnlineMapsControlBase_OnDestroyLate_m922249014 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::OnEnable()
extern "C"  void OnlineMapsControlBase_OnEnable_m1670877025 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::OnEnableLate()
extern "C"  void OnlineMapsControlBase_OnEnableLate_m1586125245 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::OnGestureZoom(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void OnlineMapsControlBase_OnGestureZoom_m589668162 (OnlineMapsControlBase_t473237564 * __this, Vector2_t2243707579  ___p10, Vector2_t2243707579  ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::OnMapBasePress()
extern "C"  void OnlineMapsControlBase_OnMapBasePress_m574676972 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::OnMapBaseRelease()
extern "C"  void OnlineMapsControlBase_OnMapBaseRelease_m4240766966 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMapsControlBase::SaveSettings(OnlineMapsXML)
extern "C"  OnlineMapsXML_t3341520387 * OnlineMapsControlBase_SaveSettings_m2973626698 (OnlineMapsControlBase_t473237564 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::SetTexture(UnityEngine.Texture2D)
extern "C"  void OnlineMapsControlBase_SetTexture_m2250880794 (OnlineMapsControlBase_t473237564 * __this, Texture2D_t3542995729 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::Update()
extern "C"  void OnlineMapsControlBase_Update_m1048668614 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::UpdateGestureZoom()
extern "C"  void OnlineMapsControlBase_UpdateGestureZoom_m2148116532 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::UpdateLastPosition()
extern "C"  void OnlineMapsControlBase_UpdateLastPosition_m3943046899 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::UpdatePosition()
extern "C"  void OnlineMapsControlBase_UpdatePosition_m3877595677 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::UpdateZoom()
extern "C"  void OnlineMapsControlBase_UpdateZoom_m2101917255 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator OnlineMapsControlBase::WaitLongPress()
extern "C"  Il2CppObject * OnlineMapsControlBase_WaitLongPress_m4245799153 (OnlineMapsControlBase_t473237564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsControlBase::ZoomOnPoint(System.Int32,UnityEngine.Vector2)
extern "C"  bool OnlineMapsControlBase_ZoomOnPoint_m4215762786 (OnlineMapsControlBase_t473237564 * __this, int32_t ___zoomOffset0, Vector2_t2243707579  ___screenPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase::.cctor()
extern "C"  void OnlineMapsControlBase__cctor_m1556673998 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
