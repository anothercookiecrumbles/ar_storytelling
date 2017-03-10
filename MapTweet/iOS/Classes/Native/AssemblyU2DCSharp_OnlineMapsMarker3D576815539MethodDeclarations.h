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

// OnlineMapsMarker3D
struct OnlineMapsMarker3D_t576815539;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsControlBase3D
struct OnlineMapsControlBase3D_t2801313279;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"
#include "AssemblyU2DCSharp_OnlineMaps1893290312.h"
#include "AssemblyU2DCSharp_OnlineMapsControlBase3D2801313279.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

// System.Void OnlineMapsMarker3D::.ctor()
extern "C"  void OnlineMapsMarker3D__ctor_m3659847096 (OnlineMapsMarker3D_t576815539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::.ctor(UnityEngine.GameObject)
extern "C"  void OnlineMapsMarker3D__ctor_m332801502 (OnlineMapsMarker3D_t576815539 * __this, GameObject_t1756533147 * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::set_enabled(System.Boolean)
extern "C"  void OnlineMapsMarker3D_set_enabled_m4252797393 (OnlineMapsMarker3D_t576815539 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OnlineMapsMarker3D::get_relativePosition()
extern "C"  Vector3_t2243707580  OnlineMapsMarker3D_get_relativePosition_m4172240010 (OnlineMapsMarker3D_t576815539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion OnlineMapsMarker3D::get_rotation()
extern "C"  Quaternion_t4030073918  OnlineMapsMarker3D_get_rotation_m2615390023 (OnlineMapsMarker3D_t576815539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::set_rotation(UnityEngine.Quaternion)
extern "C"  void OnlineMapsMarker3D_set_rotation_m2409835304 (OnlineMapsMarker3D_t576815539 * __this, Quaternion_t4030073918  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsMarker3D::get_rotationY()
extern "C"  float OnlineMapsMarker3D_get_rotationY_m3465943164 (OnlineMapsMarker3D_t576815539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::set_rotationY(System.Single)
extern "C"  void OnlineMapsMarker3D_set_rotationY_m2868978767 (OnlineMapsMarker3D_t576815539 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform OnlineMapsMarker3D::get_transform()
extern "C"  Transform_t3275118058 * OnlineMapsMarker3D_get_transform_m3679921503 (OnlineMapsMarker3D_t576815539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsMarker3D::get_visible()
extern "C"  bool OnlineMapsMarker3D_get_visible_m4114124101 (OnlineMapsMarker3D_t576815539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::set_visible(System.Boolean)
extern "C"  void OnlineMapsMarker3D_set_visible_m638775112 (OnlineMapsMarker3D_t576815539 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::Init(UnityEngine.Transform)
extern "C"  void OnlineMapsMarker3D_Init_m3384351791 (OnlineMapsMarker3D_t576815539 * __this, Transform_t3275118058 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::LookToCoordinates(UnityEngine.Vector2)
extern "C"  void OnlineMapsMarker3D_LookToCoordinates_m1223730719 (OnlineMapsMarker3D_t576815539 * __this, Vector2_t2243707579  ___coordinates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::Reinit(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C"  void OnlineMapsMarker3D_Reinit_m1975385408 (OnlineMapsMarker3D_t576815539 * __this, Vector2_t2243707579  ___topLeft0, Vector2_t2243707579  ___bottomRight1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::Reinit(System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void OnlineMapsMarker3D_Reinit_m1343274112 (OnlineMapsMarker3D_t576815539 * __this, double ___tlx0, double ___tly1, double ___brx2, double ___bry3, int32_t ___zoom4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMapsMarker3D::Save(OnlineMapsXML)
extern "C"  OnlineMapsXML_t3341520387 * OnlineMapsMarker3D_Save_m3914461362 (OnlineMapsMarker3D_t576815539 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::Update()
extern "C"  void OnlineMapsMarker3D_Update_m1875525975 (OnlineMapsMarker3D_t576815539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::Update(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C"  void OnlineMapsMarker3D_Update_m4208805526 (OnlineMapsMarker3D_t576815539 * __this, Vector2_t2243707579  ___topLeft0, Vector2_t2243707579  ___bottomRight1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::Update(System.Double,System.Double,System.Double,System.Double,System.Int32)
extern "C"  void OnlineMapsMarker3D_Update_m524786006 (OnlineMapsMarker3D_t576815539 * __this, double ___tlx0, double ___tly1, double ___brx2, double ___bry3, int32_t ___zoom4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsMarker3D::Update(OnlineMaps,OnlineMapsControlBase3D,UnityEngine.Bounds,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Double,System.Double,System.Double,System.Double,System.Single)
extern "C"  void OnlineMapsMarker3D_Update_m1838174886 (OnlineMapsMarker3D_t576815539 * __this, OnlineMaps_t1893290312 * ___map0, OnlineMapsControlBase3D_t2801313279 * ___control1, Bounds_t3033363703  ___bounds2, double ___tlx3, double ___tly4, double ___brx5, double ___bry6, int32_t ___zoom7, double ___ttlx8, double ___ttly9, double ___tbrx10, double ___tbry11, float ___bestYScale12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
