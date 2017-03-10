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

// OnlineMapsMarkerBase
struct OnlineMapsMarkerBase_t3900955221;
// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsMarkerBase3900955221.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"

// System.Void OnlineMapsMarkerBase::.ctor()
extern "C"  void OnlineMapsMarkerBase__ctor_m3618283158 (OnlineMapsMarkerBase_t3900955221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsMarkerBase::get_enabled()
extern "C"  bool OnlineMapsMarkerBase_get_enabled_m2515744006 (OnlineMapsMarkerBase_t3900955221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::set_enabled(System.Boolean)
extern "C"  void OnlineMapsMarkerBase_set_enabled_m3119616627 (OnlineMapsMarkerBase_t3900955221 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMaps OnlineMapsMarkerBase::get_map()
extern "C"  OnlineMaps_t1893290312 * OnlineMapsMarkerBase_get_map_m2726991430 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsMarkerBase::get_position()
extern "C"  Vector2_t2243707579  OnlineMapsMarkerBase_get_position_m1999462843 (OnlineMapsMarkerBase_t3900955221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::set_position(UnityEngine.Vector2)
extern "C"  void OnlineMapsMarkerBase_set_position_m1957419274 (OnlineMapsMarkerBase_t3900955221 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsMarkerBase::get_scale()
extern "C"  float OnlineMapsMarkerBase_get_scale_m4266476523 (OnlineMapsMarkerBase_t3900955221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::set_scale(System.Single)
extern "C"  void OnlineMapsMarkerBase_set_scale_m1608708320 (OnlineMapsMarkerBase_t3900955221 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsMarkerBase::get_inMapView()
extern "C"  bool OnlineMapsMarkerBase_get_inMapView_m1645214887 (OnlineMapsMarkerBase_t3900955221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::Dispose()
extern "C"  void OnlineMapsMarkerBase_Dispose_m345398087 (OnlineMapsMarkerBase_t3900955221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::GetPosition(System.Double&,System.Double&)
extern "C"  void OnlineMapsMarkerBase_GetPosition_m3274407131 (OnlineMapsMarkerBase_t3900955221 * __this, double* ___lng0, double* ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::GetTilePosition(System.Double&,System.Double&)
extern "C"  void OnlineMapsMarkerBase_GetTilePosition_m3160946583 (OnlineMapsMarkerBase_t3900955221 * __this, double* ___px0, double* ___py1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::GetTilePosition(System.Double&,System.Double&,System.Int32)
extern "C"  void OnlineMapsMarkerBase_GetTilePosition_m4192840516 (OnlineMapsMarkerBase_t3900955221 * __this, double* ___px0, double* ___py1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::LookToCoordinates(UnityEngine.Vector2)
extern "C"  void OnlineMapsMarkerBase_LookToCoordinates_m1416514237 (OnlineMapsMarkerBase_t3900955221 * __this, Vector2_t2243707579  ___coordinates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::OnMarkerPress(OnlineMapsMarkerBase)
extern "C"  void OnlineMapsMarkerBase_OnMarkerPress_m4209991711 (OnlineMapsMarkerBase_t3900955221 * __this, OnlineMapsMarkerBase_t3900955221 * ___onlineMapsMarkerBase0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMapsMarkerBase::Save(OnlineMapsXML)
extern "C"  OnlineMapsXML_t3341520387 * OnlineMapsMarkerBase_Save_m3380208592 (OnlineMapsMarkerBase_t3900955221 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::SetPosition(System.Double,System.Double)
extern "C"  void OnlineMapsMarkerBase_SetPosition_m2648006687 (OnlineMapsMarkerBase_t3900955221 * __this, double ___lng0, double ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::SetDragable()
extern "C"  void OnlineMapsMarkerBase_SetDragable_m3220499180 (OnlineMapsMarkerBase_t3900955221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::Update()
extern "C"  void OnlineMapsMarkerBase_Update_m1792184693 (OnlineMapsMarkerBase_t3900955221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::Update(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C"  void OnlineMapsMarkerBase_Update_m3496941560 (OnlineMapsMarkerBase_t3900955221 * __this, Vector2_t2243707579  ___topLeft0, Vector2_t2243707579  ___bottomRight1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarkerBase::Update(System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void OnlineMapsMarkerBase_Update_m2060007992 (OnlineMapsMarkerBase_t3900955221 * __this, double ___tlx0, double ___tly1, double ___brx2, double ___bry3, int32_t ___zoom4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
