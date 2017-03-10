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

// OnlineMapsControlBase3D
struct OnlineMapsControlBase3D_t2801313279;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Renderer
struct Renderer_t257310565;
// OnlineMapsMarker3D
struct OnlineMapsMarker3D_t576815539;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// OnlineMapsMarkerInstanceBase
struct OnlineMapsMarkerInstanceBase_t538187336;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_OnlineMapsMarker3D576815539.h"
#include "AssemblyU2DCSharp_OnlineMapsMarker2DMode2893795757.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"

// System.Void OnlineMapsControlBase3D::.ctor()
extern "C"  void OnlineMapsControlBase3D__ctor_m3225990066 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider OnlineMapsControlBase3D::get_cl()
extern "C"  Collider_t3497673348 * OnlineMapsControlBase3D_get_cl_m1671207796 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer OnlineMapsControlBase3D::get_rendererInstance()
extern "C"  Renderer_t257310565 * OnlineMapsControlBase3D_get_rendererInstance_m2379999284 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsControlBase3D OnlineMapsControlBase3D::get_instance()
extern "C"  OnlineMapsControlBase3D_t2801313279 * OnlineMapsControlBase3D_get_instance_m561468050 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker3D OnlineMapsControlBase3D::AddMarker3D(UnityEngine.Vector2,UnityEngine.GameObject)
extern "C"  OnlineMapsMarker3D_t576815539 * OnlineMapsControlBase3D_AddMarker3D_m2315050644 (OnlineMapsControlBase3D_t2801313279 * __this, Vector2_t2243707579  ___markerPosition0, GameObject_t1756533147 * ___prefab1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker3D OnlineMapsControlBase3D::AddMarker3D(System.Double,System.Double,UnityEngine.GameObject)
extern "C"  OnlineMapsMarker3D_t576815539 * OnlineMapsControlBase3D_AddMarker3D_m547819214 (OnlineMapsControlBase3D_t2801313279 * __this, double ___markerLng0, double ___markerLat1, GameObject_t1756533147 * ___prefab2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker3D OnlineMapsControlBase3D::AddMarker3D(OnlineMapsMarker3D)
extern "C"  OnlineMapsMarker3D_t576815539 * OnlineMapsControlBase3D_AddMarker3D_m1710746477 (OnlineMapsControlBase3D_t2801313279 * __this, OnlineMapsMarker3D_t576815539 * ___marker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::AfterUpdate()
extern "C"  void OnlineMapsControlBase3D_AfterUpdate_m3042986095 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::BeforeUpdate()
extern "C"  void OnlineMapsControlBase3D_BeforeUpdate_m3048341214 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::Clear2DMarkerBillboards()
extern "C"  void OnlineMapsControlBase3D_Clear2DMarkerBillboards_m4283736581 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::Clear2DMarkerInstances(OnlineMapsMarker2DMode)
extern "C"  void OnlineMapsControlBase3D_Clear2DMarkerInstances_m2798547190 (OnlineMapsControlBase3D_t2801313279 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsControlBase3D::GetBestElevationYScale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float OnlineMapsControlBase3D_GetBestElevationYScale_m1306975242 (OnlineMapsControlBase3D_t2801313279 * __this, Vector2_t2243707579  ___topLeftPosition0, Vector2_t2243707579  ___bottomRightPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsControlBase3D::GetBestElevationYScale(System.Double,System.Double,System.Double,System.Double)
extern "C"  float OnlineMapsControlBase3D_GetBestElevationYScale_m2028765642 (OnlineMapsControlBase3D_t2801313279 * __this, double ___tlx0, double ___tly1, double ___brx2, double ___bry3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarkerInstanceBase OnlineMapsControlBase3D::GetBillboardMarkerFromScreen(UnityEngine.Vector2)
extern "C"  OnlineMapsMarkerInstanceBase_t538187336 * OnlineMapsControlBase3D_GetBillboardMarkerFromScreen_m140244508 (OnlineMapsControlBase3D_t2801313279 * __this, Vector2_t2243707579  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsControlBase3D::GetElevationValue(System.Single,System.Single,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float OnlineMapsControlBase3D_GetElevationValue_m3306202315 (OnlineMapsControlBase3D_t2801313279 * __this, float ___x0, float ___z1, float ___yScale2, Vector2_t2243707579  ___topLeftPosition3, Vector2_t2243707579  ___bottomRightPosition4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsControlBase3D::GetElevationValue(System.Single,System.Single,System.Single,System.Double,System.Double,System.Double,System.Double)
extern "C"  float OnlineMapsControlBase3D_GetElevationValue_m22776715 (OnlineMapsControlBase3D_t2801313279 * __this, float ___x0, float ___z1, float ___yScale2, double ___tlx3, double ___tly4, double ___brx5, double ___bry6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsControlBase3D::GetScreenPosition(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsControlBase3D_GetScreenPosition_m2492840282 (OnlineMapsControlBase3D_t2801313279 * __this, Vector2_t2243707579  ___coords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsControlBase3D::GetScreenPosition(System.Double,System.Double)
extern "C"  Vector2_t2243707579  OnlineMapsControlBase3D_GetScreenPosition_m2407748072 (OnlineMapsControlBase3D_t2801313279 * __this, double ___lng0, double ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh OnlineMapsControlBase3D::InitMarkersMesh(System.Int32)
extern "C"  Mesh_t1356156583 * OnlineMapsControlBase3D_InitMarkersMesh_m2652702230 (OnlineMapsControlBase3D_t2801313279 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::OnDestroyLate()
extern "C"  void OnlineMapsControlBase3D_OnDestroyLate_m3418318685 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::OnEnableLate()
extern "C"  void OnlineMapsControlBase3D_OnEnableLate_m4034002746 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::OnGestureZoom(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void OnlineMapsControlBase3D_OnGestureZoom_m3773705595 (OnlineMapsControlBase3D_t2801313279 * __this, Vector2_t2243707579  ___p10, Vector2_t2243707579  ___p21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::RemoveAllMarker3D()
extern "C"  void OnlineMapsControlBase3D_RemoveAllMarker3D_m2688490880 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::RemoveMarker3D(OnlineMapsMarker3D)
extern "C"  void OnlineMapsControlBase3D_RemoveMarker3D_m911509058 (OnlineMapsControlBase3D_t2801313279 * __this, OnlineMapsMarker3D_t576815539 * ___marker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::RemoveMarker3DAt(System.Int32)
extern "C"  void OnlineMapsControlBase3D_RemoveMarker3DAt_m998378973 (OnlineMapsControlBase3D_t2801313279 * __this, int32_t ___markerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMapsControlBase3D::SaveMarkers3D(OnlineMapsXML)
extern "C"  OnlineMapsXML_t3341520387 * OnlineMapsControlBase3D_SaveMarkers3D_m1242876612 (OnlineMapsControlBase3D_t2801313279 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMapsControlBase3D::SaveSettings(OnlineMapsXML)
extern "C"  OnlineMapsXML_t3341520387 * OnlineMapsControlBase3D_SaveSettings_m4119658993 (OnlineMapsControlBase3D_t2801313279 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::Start()
extern "C"  void OnlineMapsControlBase3D_Start_m3948414982 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::UpdateCameraPosition()
extern "C"  void OnlineMapsControlBase3D_UpdateCameraPosition_m2960095727 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::UpdateControl()
extern "C"  void OnlineMapsControlBase3D_UpdateControl_m170912016 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::UpdateMarkers3D()
extern "C"  void OnlineMapsControlBase3D_UpdateMarkers3D_m245837253 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsControlBase3D::UpdateMarkersBillboard()
extern "C"  void OnlineMapsControlBase3D_UpdateMarkersBillboard_m842572035 (OnlineMapsControlBase3D_t2801313279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsControlBase3D::<Start>m__0(OnlineMapsMarker3D)
extern "C"  bool OnlineMapsControlBase3D_U3CStartU3Em__0_m1502215918 (Il2CppObject * __this /* static, unused */, OnlineMapsMarker3D_t576815539 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
