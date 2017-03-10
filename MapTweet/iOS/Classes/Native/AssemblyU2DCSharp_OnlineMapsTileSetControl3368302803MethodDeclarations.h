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

// OnlineMapsTileSetControl
struct OnlineMapsTileSetControl_t3368302803;
// OnlineMapsVector2i
struct OnlineMapsVector2i_t2180897250;
// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Shader
struct Shader_t2430389951;
// System.String
struct String_t;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// System.Int16[0...,0...]
struct Int16U5BU2CU5D_t3104283264;
// System.Collections.Generic.List`1<UnityEngine.Texture>
struct List_1_t1612747451;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_t810119712;
// OnlineMapsTileSetControl/TilesetSortedMarker
struct TilesetSortedMarker_t2480816995;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsTileSetControl_OnlineM3481217700.h"
#include "AssemblyU2DCSharp_OnlineMapsMarker2DMode2893795757.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"
#include "AssemblyU2DCSharp_OnlineMapsMarker3492166682.h"
#include "AssemblyU2DCSharp_OnlineMapsTileSetControl_Tileset2480816995.h"

// System.Void OnlineMapsTileSetControl::.ctor()
extern "C"  void OnlineMapsTileSetControl__ctor_m2031663892 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsTileSetControl OnlineMapsTileSetControl::get_instance()
extern "C"  OnlineMapsTileSetControl_t3368302803 * OnlineMapsTileSetControl_get_instance_m3816851372 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsVector2i OnlineMapsTileSetControl::get_bufferPosition()
extern "C"  OnlineMapsVector2i_t2180897250 * OnlineMapsTileSetControl_get_bufferPosition_m3907478995 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsTileSetControl/OnlineMapsSmoothZoomMode OnlineMapsTileSetControl::get_smoothZoomMode()
extern "C"  int32_t OnlineMapsTileSetControl_get_smoothZoomMode_m3663225768 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::set_smoothZoomMode(OnlineMapsTileSetControl/OnlineMapsSmoothZoomMode)
extern "C"  void OnlineMapsTileSetControl_set_smoothZoomMode_m3301772125 (OnlineMapsTileSetControl_t3368302803 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::Clear2DMarkerInstances(OnlineMapsMarker2DMode)
extern "C"  void OnlineMapsTileSetControl_Clear2DMarkerInstances_m1018370416 (OnlineMapsTileSetControl_t3368302803 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsTileSetControl::GetBestElevationYScale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float OnlineMapsTileSetControl_GetBestElevationYScale_m1188057264 (OnlineMapsTileSetControl_t3368302803 * __this, Vector2_t2243707579  ___topLeftPosition0, Vector2_t2243707579  ___bottomRightPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsTileSetControl::GetBestElevationYScale(System.Double,System.Double,System.Double,System.Double)
extern "C"  float OnlineMapsTileSetControl_GetBestElevationYScale_m159370992 (OnlineMapsTileSetControl_t3368302803 * __this, double ___tlx0, double ___tly1, double ___brx2, double ___bry3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsTileSetControl::GetCoords(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsTileSetControl_GetCoords_m3084496701 (OnlineMapsTileSetControl_t3368302803 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsTileSetControl::GetCoords(System.Double&,System.Double&,UnityEngine.Vector2)
extern "C"  bool OnlineMapsTileSetControl_GetCoords_m1452966636 (OnlineMapsTileSetControl_t3368302803 * __this, double* ___lng0, double* ___lat1, Vector2_t2243707579  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsTileSetControl::GetCoordsByWorldPosition(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  OnlineMapsTileSetControl_GetCoordsByWorldPosition_m1526948152 (OnlineMapsTileSetControl_t3368302803 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsTileSetControl::GetCoordsByWorldPosition(System.Double&,System.Double&,UnityEngine.Vector3)
extern "C"  bool OnlineMapsTileSetControl_GetCoordsByWorldPosition_m2702350559 (OnlineMapsTileSetControl_t3368302803 * __this, double* ___lng0, double* ___lat1, Vector3_t2243707580  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::GetElevation()
extern "C"  void OnlineMapsTileSetControl_GetElevation_m1326761527 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsTileSetControl::GetElevationValue(System.Single,System.Single,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float OnlineMapsTileSetControl_GetElevationValue_m3077676175 (OnlineMapsTileSetControl_t3368302803 * __this, float ___x0, float ___z1, float ___yScale2, Vector2_t2243707579  ___topLeftPosition3, Vector2_t2243707579  ___bottomRightPosition4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsTileSetControl::GetElevationValue(System.Single,System.Single,System.Single,System.Double,System.Double,System.Double,System.Double)
extern "C"  float OnlineMapsTileSetControl_GetElevationValue_m2206471887 (OnlineMapsTileSetControl_t3368302803 * __this, float ___x0, float ___z1, float ___yScale2, double ___tlx3, double ___tly4, double ___brx5, double ___bry6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsTileSetControl::GetElevationValue(System.Double,System.Double,System.Single,System.Double,System.Double,System.Double,System.Double)
extern "C"  float OnlineMapsTileSetControl_GetElevationValue_m3858353903 (OnlineMapsTileSetControl_t3368302803 * __this, double ___x0, double ___z1, float ___yScale2, double ___tlx3, double ___tly4, double ___brx5, double ___bry6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsTileSetControl::GetMaxElevationValue(System.Single)
extern "C"  float OnlineMapsTileSetControl_GetMaxElevationValue_m3955315087 (OnlineMapsTileSetControl_t3368302803 * __this, float ___yScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker OnlineMapsTileSetControl::GetMarkerFromScreen(UnityEngine.Vector2)
extern "C"  OnlineMapsMarker_t3492166682 * OnlineMapsTileSetControl_GetMarkerFromScreen_m298295761 (OnlineMapsTileSetControl_t3368302803 * __this, Vector2_t2243707579  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OnlineMapsTileSetControl::GetWorldPosition(UnityEngine.Vector2)
extern "C"  Vector3_t2243707580  OnlineMapsTileSetControl_GetWorldPosition_m2092959021 (OnlineMapsTileSetControl_t3368302803 * __this, Vector2_t2243707579  ___coords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OnlineMapsTileSetControl::GetWorldPosition(System.Double,System.Double)
extern "C"  Vector3_t2243707580  OnlineMapsTileSetControl_GetWorldPosition_m857321029 (OnlineMapsTileSetControl_t3368302803 * __this, double ___lng0, double ___lat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OnlineMapsTileSetControl::GetWorldPositionWithElevation(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector3_t2243707580  OnlineMapsTileSetControl_GetWorldPositionWithElevation_m3296039444 (OnlineMapsTileSetControl_t3368302803 * __this, Vector2_t2243707579  ___coords0, Vector2_t2243707579  ___topLeftPosition1, Vector2_t2243707579  ___bottomRightPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OnlineMapsTileSetControl::GetWorldPositionWithElevation(UnityEngine.Vector2,System.Double,System.Double,System.Double,System.Double)
extern "C"  Vector3_t2243707580  OnlineMapsTileSetControl_GetWorldPositionWithElevation_m3643009236 (OnlineMapsTileSetControl_t3368302803 * __this, Vector2_t2243707579  ___coords0, double ___tlx1, double ___tly2, double ___brx3, double ___bry4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OnlineMapsTileSetControl::GetWorldPositionWithElevation(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
extern "C"  Vector3_t2243707580  OnlineMapsTileSetControl_GetWorldPositionWithElevation_m3456332382 (OnlineMapsTileSetControl_t3368302803 * __this, double ___lng0, double ___lat1, double ___tlx2, double ___tly3, double ___brx4, double ___bry5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsTileSetControl::HitTest()
extern "C"  bool OnlineMapsTileSetControl_HitTest_m4161040729 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsTileSetControl::HitTest(UnityEngine.Vector2)
extern "C"  bool OnlineMapsTileSetControl_HitTest_m2903630665 (OnlineMapsTileSetControl_t3368302803 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::InitDrawingsMesh()
extern "C"  void OnlineMapsTileSetControl_InitDrawingsMesh_m3971620582 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::InitMapMesh()
extern "C"  void OnlineMapsTileSetControl_InitMapMesh_m1367929039 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::InitMapSubMesh(UnityEngine.Vector3[]&,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Vector2,System.Int32,System.Int32)
extern "C"  void OnlineMapsTileSetControl_InitMapSubMesh_m1963148670 (OnlineMapsTileSetControl_t3368302803 * __this, Vector3U5BU5D_t1172311765** ___normals0, int32_t ___x1, int32_t ___y2, int32_t ___w3, int32_t ___h4, Vector2_t2243707579  ___subMeshSize5, int32_t ___subMeshVX6, int32_t ___subMeshVZ7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::InitMapSubMeshTriangles(UnityEngine.Material[]&,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Shader)
extern "C"  void OnlineMapsTileSetControl_InitMapSubMeshTriangles_m3094595828 (OnlineMapsTileSetControl_t3368302803 * __this, MaterialU5BU5D_t3123989686** ___materials0, int32_t ___x1, int32_t ___y2, int32_t ___w3, int32_t ___h4, int32_t ___subMeshVX5, int32_t ___subMeshVZ6, Shader_t2430389951 * ___tileShader7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::InitSimpleMeshCollider()
extern "C"  void OnlineMapsTileSetControl_InitSimpleMeshCollider_m3825073371 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::OnAwakeBefore()
extern "C"  void OnlineMapsTileSetControl_OnAwakeBefore_m571578535 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::OnDestroyLate()
extern "C"  void OnlineMapsTileSetControl_OnDestroyLate_m2840059325 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::OnElevationRequestComplete(System.String)
extern "C"  void OnlineMapsTileSetControl_OnElevationRequestComplete_m3746612434 (OnlineMapsTileSetControl_t3368302803 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::ReinitMapMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void OnlineMapsTileSetControl_ReinitMapMesh_m773898264 (OnlineMapsTileSetControl_t3368302803 * __this, int32_t ___w0, int32_t ___h1, int32_t ___subMeshVX2, int32_t ___subMeshVZ3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::Resize(System.Int32,System.Int32,System.Boolean)
extern "C"  void OnlineMapsTileSetControl_Resize_m2890966763 (OnlineMapsTileSetControl_t3368302803 * __this, int32_t ___width0, int32_t ___height1, bool ___changeSizeInScene2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::Resize(System.Int32,System.Int32,System.Single,System.Single)
extern "C"  void OnlineMapsTileSetControl_Resize_m1027843278 (OnlineMapsTileSetControl_t3368302803 * __this, int32_t ___width0, int32_t ___height1, float ___sizeX2, float ___sizeZ3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::Resize(System.Int32,System.Int32,UnityEngine.Vector2)
extern "C"  void OnlineMapsTileSetControl_Resize_m994096084 (OnlineMapsTileSetControl_t3368302803 * __this, int32_t ___width0, int32_t ___height1, Vector2_t2243707579  ___sizeInScene2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::RestoreGestureZoom()
extern "C"  void OnlineMapsTileSetControl_RestoreGestureZoom_m1748426192 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::RestoreGestureZoom(System.Boolean)
extern "C"  void OnlineMapsTileSetControl_RestoreGestureZoom_m1430911489 (OnlineMapsTileSetControl_t3368302803 * __this, bool ___forceRestore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsXML OnlineMapsTileSetControl::SaveSettings(OnlineMapsXML)
extern "C"  OnlineMapsXML_t3341520387 * OnlineMapsTileSetControl_SaveSettings_m819750213 (OnlineMapsTileSetControl_t3368302803 * __this, OnlineMapsXML_t3341520387 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::SetElevationData(System.Int16[0...,0...])
extern "C"  void OnlineMapsTileSetControl_SetElevationData_m2867190074 (OnlineMapsTileSetControl_t3368302803 * __this, Int16U5BU2CU5D_t3104283264* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::StartDownloadElevation(System.Double,System.Double,System.Double,System.Double)
extern "C"  void OnlineMapsTileSetControl_StartDownloadElevation_m2169550657 (OnlineMapsTileSetControl_t3368302803 * __this, double ___sx0, double ___sy1, double ___ex2, double ___ey3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::UpdateControl()
extern "C"  void OnlineMapsTileSetControl_UpdateControl_m541815238 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::UpdateElevationMinMax()
extern "C"  void OnlineMapsTileSetControl_UpdateElevationMinMax_m2271705682 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::UpdateGestureZoom()
extern "C"  void OnlineMapsTileSetControl_UpdateGestureZoom_m2761423751 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::UpdateMapMesh()
extern "C"  void OnlineMapsTileSetControl_UpdateMapMesh_m1184773644 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::UpdateMapSubMesh(System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Double,System.Int32,System.Int32,System.Double,System.Double,System.Single,System.Double,System.Double,System.Double,System.Double,UnityEngine.Material[],System.Single&,System.Single&,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void OnlineMapsTileSetControl_UpdateMapSubMesh_m1479207636 (OnlineMapsTileSetControl_t3368302803 * __this, int32_t ___x0, int32_t ___y1, int32_t ___w2, int32_t ___h3, double ___subMeshSizeX4, double ___subMeshSizeY5, int32_t ___subMeshVX6, int32_t ___subMeshVZ7, double ___startPosX8, double ___startPosZ9, float ___yScale10, double ___tlx11, double ___tly12, double ___brx13, double ___bry14, MaterialU5BU5D_t3123989686* ___materials15, float* ___minY16, float* ___maxY17, bool ___hasTraffic18, bool ___hasOverlayBack19, bool ___hasOverlayBackAlpha20, bool ___hasOverlayFront21, bool ___hasOverlayFrontAlpha22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::UpdateMarkersMesh()
extern "C"  void OnlineMapsTileSetControl_UpdateMarkersMesh_m1183000597 (OnlineMapsTileSetControl_t3368302803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::SetMarkersMesh(System.Int32,System.Collections.Generic.List`1<UnityEngine.Texture>,System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,System.Int32)
extern "C"  void OnlineMapsTileSetControl_SetMarkersMesh_m1295864113 (OnlineMapsTileSetControl_t3368302803 * __this, int32_t ___usedMarkersCount0, List_1_t1612747451 * ___usedTextures1, List_1_t810119712 * ___usedTexturesMarkerIndex2, int32_t ___meshIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTileSetControl::UpdateSimpleMeshCollider(System.Single,System.Double,System.Double,System.Double,System.Double)
extern "C"  void OnlineMapsTileSetControl_UpdateSimpleMeshCollider_m1596899209 (OnlineMapsTileSetControl_t3368302803 * __this, float ___yScale0, double ___tlx1, double ___tly2, double ___brx3, double ___bry4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker OnlineMapsTileSetControl::<UpdateMarkersMesh>m__0(OnlineMapsMarker)
extern "C"  OnlineMapsMarker_t3492166682 * OnlineMapsTileSetControl_U3CUpdateMarkersMeshU3Em__0_m1874295125 (Il2CppObject * __this /* static, unused */, OnlineMapsMarker_t3492166682 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OnlineMapsTileSetControl::<UpdateMarkersMesh>m__1(OnlineMapsMarker)
extern "C"  double OnlineMapsTileSetControl_U3CUpdateMarkersMeshU3Em__1_m2257511944 (Il2CppObject * __this /* static, unused */, OnlineMapsMarker_t3492166682 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsTileSetControl::<UpdateMarkersMesh>m__2(OnlineMapsTileSetControl/TilesetSortedMarker)
extern "C"  float OnlineMapsTileSetControl_U3CUpdateMarkersMeshU3Em__2_m2991632603 (Il2CppObject * __this /* static, unused */, TilesetSortedMarker_t2480816995 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarker OnlineMapsTileSetControl::<UpdateMarkersMesh>m__3(OnlineMapsTileSetControl/TilesetSortedMarker)
extern "C"  OnlineMapsMarker_t3492166682 * OnlineMapsTileSetControl_U3CUpdateMarkersMeshU3Em__3_m3712124225 (Il2CppObject * __this /* static, unused */, TilesetSortedMarker_t2480816995 * ___sm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
