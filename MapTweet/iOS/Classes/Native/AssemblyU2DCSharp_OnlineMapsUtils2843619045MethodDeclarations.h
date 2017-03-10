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

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1021602117;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// OnlineMapsMarkerBase[]
struct OnlineMapsMarkerBaseU5BU5D_t3690434744;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// OnlineMapsWWW
struct OnlineMapsWWW_t3247411593;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// OnlineMapsVector2i
struct OnlineMapsVector2i_t2180897250;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2364004493;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Single OnlineMapsUtils::Angle2D(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float OnlineMapsUtils_Angle2D_m2418642609 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___point10, Vector2_t2243707579  ___point21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsUtils::Angle2D(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float OnlineMapsUtils_Angle2D_m3995743537 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___point10, Vector3_t2243707580  ___point21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OnlineMapsUtils::Angle2D(System.Double,System.Double,System.Double,System.Double)
extern "C"  double OnlineMapsUtils_Angle2D_m4239652862 (Il2CppObject * __this /* static, unused */, double ___p1x0, double ___p1y1, double ___p2x2, double ___p2y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsUtils::Angle2D(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
extern "C"  float OnlineMapsUtils_Angle2D_m1653782139 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___point10, Vector3_t2243707580  ___point21, Vector3_t2243707580  ___point32, bool ___unsigned3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsUtils::Angle2DRad(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  float OnlineMapsUtils_Angle2DRad_m913515919 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___point10, Vector3_t2243707580  ___point21, float ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsUtils::Angle2DRad(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float OnlineMapsUtils_Angle2DRad_m2917114639 (Il2CppObject * __this /* static, unused */, float ___p1x0, float ___p1z1, float ___p2x2, float ___p2z3, float ___offset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OnlineMapsUtils::Clip(System.Double,System.Double,System.Double)
extern "C"  double OnlineMapsUtils_Clip_m2608044177 (Il2CppObject * __this /* static, unused */, double ___n0, double ___minValue1, double ___maxValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::Crossing(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_Crossing_m1896305105 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___p10, Vector2_t2243707579  ___p21, Vector2_t2243707579  ___p32, Vector2_t2243707579  ___p43, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OnlineMapsUtils::DeepCopy(System.Object,System.Type)
extern "C"  Il2CppObject * OnlineMapsUtils_DeepCopy_m1741684313 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, Type_t * ___targetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> OnlineMapsUtils::DecodePolylinePoints(System.String)
extern "C"  List_1_t1612828711 * OnlineMapsUtils_DecodePolylinePoints_m3268641930 (Il2CppObject * __this /* static, unused */, String_t* ___encodedPoints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::DestroyImmediate(UnityEngine.Object)
extern "C"  void OnlineMapsUtils_DestroyImmediate_m507086301 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::DistanceBetweenPoints(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_DistanceBetweenPoints_m1314289909 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___point10, Vector2_t2243707579  ___point21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::DistanceBetweenPoints(System.Double,System.Double,System.Double,System.Double,System.Double&,System.Double&)
extern "C"  void OnlineMapsUtils_DistanceBetweenPoints_m3432485292 (Il2CppObject * __this /* static, unused */, double ___x10, double ___y11, double ___x22, double ___y23, double* ___dx4, double* ___dy5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OnlineMapsUtils::DistanceBetweenPoints(System.Collections.IEnumerable,System.Double&,System.Double&)
extern "C"  double OnlineMapsUtils_DistanceBetweenPoints_m213979152 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___points0, double* ___dx1, double* ___dy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OnlineMapsUtils::DistanceBetweenPointsD(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  double OnlineMapsUtils_DistanceBetweenPointsD_m4043631011 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___point10, Vector2_t2243707579  ___point21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OnlineMapsUtils::Dot(System.Double,System.Double,System.Double,System.Double)
extern "C"  double OnlineMapsUtils_Dot_m451730292 (Il2CppObject * __this /* static, unused */, double ___lx0, double ___ly1, double ___rx2, double ___ry3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::FixAngle(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_FixAngle_m3416978605 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::FlipNegative(UnityEngine.Rect&)
extern "C"  void OnlineMapsUtils_FlipNegative_m2417454961 (Il2CppObject * __this /* static, unused */, Rect_t3681755626 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::GetCenterPointAndZoom(OnlineMapsMarkerBase[],UnityEngine.Vector2&,System.Int32&)
extern "C"  void OnlineMapsUtils_GetCenterPointAndZoom_m3170306753 (Il2CppObject * __this /* static, unused */, OnlineMapsMarkerBaseU5BU5D_t3690434744* ___markers0, Vector2_t2243707579 * ___center1, int32_t* ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::GetCenterPointAndZoom(UnityEngine.Vector2[],UnityEngine.Vector2&,System.Int32&)
extern "C"  void OnlineMapsUtils_GetCenterPointAndZoom_m3618019590 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t686124026* ___positions0, Vector2_t2243707579 * ___center1, int32_t* ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::GetCoordinateInDistance(System.Double,System.Double,System.Single,System.Single,System.Double&,System.Double&)
extern "C"  void OnlineMapsUtils_GetCoordinateInDistance_m4223292076 (Il2CppObject * __this /* static, unused */, double ___lng0, double ___lat1, float ___distance2, float ___angle3, double* ___nlng4, double* ___nlat5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::GetIntersectionPointOfTwoLines(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Int32&)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_GetIntersectionPointOfTwoLines_m2714104291 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___p110, Vector2_t2243707579  ___p121, Vector2_t2243707579  ___p212, Vector2_t2243707579  ___p223, int32_t* ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsUtils::GetIntersectionPointOfTwoLines(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single&,System.Single&)
extern "C"  int32_t OnlineMapsUtils_GetIntersectionPointOfTwoLines_m1914158121 (Il2CppObject * __this /* static, unused */, float ___p11x0, float ___p11y1, float ___p12x2, float ___p12y3, float ___p21x4, float ___p21y5, float ___p22x6, float ___p22y7, float* ___resultx8, float* ___resulty9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::GetIntersectionPointOfTwoLines(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32&)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_GetIntersectionPointOfTwoLines_m2269731555 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___p110, Vector3_t2243707580  ___p121, Vector3_t2243707580  ___p212, Vector3_t2243707580  ___p223, int32_t* ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsWWW OnlineMapsUtils::GetWWW(System.String)
extern "C"  OnlineMapsWWW_t3247411593 * OnlineMapsUtils_GetWWW_m155512719 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsWWW OnlineMapsUtils::GetWWW(System.Text.StringBuilder)
extern "C"  OnlineMapsWWW_t3247411593 * OnlineMapsUtils_GetWWW_m3136962465 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color OnlineMapsUtils::HexToColor(System.String)
extern "C"  Color_t2020392075  OnlineMapsUtils_HexToColor_m3899320166 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::Intersect(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  bool OnlineMapsUtils_Intersect_m2893035097 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___a0, Rect_t3681755626  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::LineIntersection(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C"  bool OnlineMapsUtils_LineIntersection_m363975817 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___start10, Vector2_t2243707579  ___end11, Vector2_t2243707579  ___start22, Vector2_t2243707579  ___end23, Vector2_t2243707579 * ___out_intersection4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::LineIntersection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single&,System.Single&)
extern "C"  bool OnlineMapsUtils_LineIntersection_m1153825027 (Il2CppObject * __this /* static, unused */, float ___s1x0, float ___s1y1, float ___e1x2, float ___e1y3, float ___s2x4, float ___s2y5, float ___e2x6, float ___e2y7, float* ___intX8, float* ___intY9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::LineIntersection(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_LineIntersection_m3509853330 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___p10, Vector2_t2243707579  ___p21, Vector2_t2243707579  ___p32, Vector2_t2243707579  ___p43, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::same_sign(System.Double,System.Double)
extern "C"  bool OnlineMapsUtils_same_sign_m1520398342 (Il2CppObject * __this /* static, unused */, double ___a0, double ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::IsPointInPolygon(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Single,System.Single)
extern "C"  bool OnlineMapsUtils_IsPointInPolygon_m2414195315 (Il2CppObject * __this /* static, unused */, List_1_t1612828711 * ___poly0, float ___x1, float ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::IsPointInPolygon(System.Collections.IEnumerable,System.Double,System.Double)
extern "C"  bool OnlineMapsUtils_IsPointInPolygon_m2859880646 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___poly0, double ___x1, double ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::IsPointInPolygon(System.Double[],System.Double,System.Double)
extern "C"  bool OnlineMapsUtils_IsPointInPolygon_m3013798105 (Il2CppObject * __this /* static, unused */, DoubleU5BU5D_t1889952540* ___poly0, double ___x1, double ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::LatLongToMercat(System.Single,System.Single)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_LatLongToMercat_m2847378279 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::LatLongToMercat(System.Single&,System.Single&)
extern "C"  void OnlineMapsUtils_LatLongToMercat_m3311997566 (Il2CppObject * __this /* static, unused */, float* ___x0, float* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::LatLongToMercat(System.Double&,System.Double&)
extern "C"  void OnlineMapsUtils_LatLongToMercat_m2205193020 (Il2CppObject * __this /* static, unused */, double* ___x0, double* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsVector2i OnlineMapsUtils::LatLongToTile(System.Single,System.Single,System.Int32)
extern "C"  OnlineMapsVector2i_t2180897250 * OnlineMapsUtils_LatLongToTile_m585552574 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsVector2i OnlineMapsUtils::LatLongToTile(UnityEngine.Vector2,System.Int32)
extern "C"  OnlineMapsVector2i_t2180897250 * OnlineMapsUtils_LatLongToTile_m2201968116 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___p0, int32_t ___zoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsVector2i OnlineMapsUtils::LatLongToTile(System.Double,System.Double,System.Int32)
extern "C"  OnlineMapsVector2i_t2180897250 * OnlineMapsUtils_LatLongToTile_m188463646 (Il2CppObject * __this /* static, unused */, double ___x0, double ___y1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::LatLongToTiled(System.Double,System.Double,System.Int32,System.Double&,System.Double&)
extern "C"  void OnlineMapsUtils_LatLongToTiled_m842368665 (Il2CppObject * __this /* static, unused */, double ___dx0, double ___dy1, int32_t ___zoom2, double* ___tx3, double* ___ty4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::LatLongToTilef(UnityEngine.Vector2,System.Int32)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_LatLongToTilef_m3592792928 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___p0, int32_t ___zoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::LatLongToTilef(UnityEngine.Vector2,System.Int32,System.Single&,System.Single&)
extern "C"  void OnlineMapsUtils_LatLongToTilef_m310559923 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___p0, int32_t ___zoom1, float* ___fx2, float* ___fy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::LatLongToTilef(System.Single,System.Single,System.Int32)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_LatLongToTilef_m3602770146 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OnlineMapsUtils::Magnitude(System.Double,System.Double,System.Double,System.Double)
extern "C"  double OnlineMapsUtils_Magnitude_m3013694229 (Il2CppObject * __this /* static, unused */, double ___p1x0, double ___p1y1, double ___p2x2, double ___p2y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::NearestPointStrict(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_NearestPointStrict_m2049095230 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___point0, Vector2_t2243707579  ___lineStart1, Vector2_t2243707579  ___lineEnd2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::NearestPointStrict(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double&,System.Double&)
extern "C"  void OnlineMapsUtils_NearestPointStrict_m1940027513 (Il2CppObject * __this /* static, unused */, double ___pointX0, double ___pointY1, double ___lineStartX2, double ___lineStartY3, double ___lineEndX4, double ___lineEndY5, double* ___nearestPointX6, double* ___nearestPointY7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OnlineMapsUtils::Repeat(System.Double,System.Double,System.Double)
extern "C"  double OnlineMapsUtils_Repeat_m2742300492 (Il2CppObject * __this /* static, unused */, double ___n0, double ___minValue1, double ___maxValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::TileToLatLong(System.Int32,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_TileToLatLong_m3488977320 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double OnlineMapsUtils::SqrMagnitude(System.Double,System.Double,System.Double,System.Double)
extern "C"  double OnlineMapsUtils_SqrMagnitude_m3355276133 (Il2CppObject * __this /* static, unused */, double ___p1x0, double ___p1y1, double ___p2x2, double ___p2y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::TileToLatLong(System.Single,System.Single,System.Int32)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_TileToLatLong_m2363134714 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsUtils::TileToLatLong(System.Double,System.Double,System.Int32,System.Double&,System.Double&)
extern "C"  void OnlineMapsUtils_TileToLatLong_m1919929301 (Il2CppObject * __this /* static, unused */, double ___tx0, double ___ty1, int32_t ___zoom2, double* ___lx3, double* ___ly4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsUtils::TileToLatLong(UnityEngine.Vector2,System.Int32)
extern "C"  Vector2_t2243707579  OnlineMapsUtils_TileToLatLong_m4139591544 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___p0, int32_t ___zoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsUtils::TileToQuadKey(System.Int32,System.Int32,System.Int32)
extern "C"  String_t* OnlineMapsUtils_TileToQuadKey_m307608553 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, int32_t ___zoom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Int32> OnlineMapsUtils::Triangulate(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  Il2CppObject* OnlineMapsUtils_Triangulate_m4009476513 (Il2CppObject * __this /* static, unused */, List_1_t1612828711 * ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Int32> OnlineMapsUtils::Triangulate(System.Single[],System.Int32,System.Collections.Generic.List`1<System.Int32>)
extern "C"  Il2CppObject* OnlineMapsUtils_Triangulate_m1146798196 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___points0, int32_t ___countVertices1, List_1_t1440998580 * ___indices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsUtils::TriangulateArea(System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  float OnlineMapsUtils_TriangulateArea_m1449516477 (Il2CppObject * __this /* static, unused */, List_1_t1612828711 * ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single OnlineMapsUtils::TriangulateArea(System.Single[],System.Int32)
extern "C"  float OnlineMapsUtils_TriangulateArea_m654665065 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___points0, int32_t ___countVertices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::TriangulateInsideTriangle(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool OnlineMapsUtils_TriangulateInsideTriangle_m4007206950 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___A0, Vector2_t2243707579  ___B1, Vector2_t2243707579  ___C2, Vector2_t2243707579  ___P3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::TriangulateInsideTriangle(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  bool OnlineMapsUtils_TriangulateInsideTriangle_m977916454 (Il2CppObject * __this /* static, unused */, float ___ax0, float ___ay1, float ___bx2, float ___by3, float ___cx4, float ___cy5, float ___px6, float ___py7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::TriangulateSnip(System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  bool OnlineMapsUtils_TriangulateSnip_m3132029563 (Il2CppObject * __this /* static, unused */, List_1_t1612828711 * ___points0, int32_t ___u1, int32_t ___v2, int32_t ___w3, int32_t ___n4, Int32U5BU5D_t3030399641* ___V5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsUtils::TriangulateSnip(System.Single[],System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  bool OnlineMapsUtils_TriangulateSnip_m2866064040 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___points0, int32_t ___u1, int32_t ___v2, int32_t ___w3, int32_t ___n4, Int32U5BU5D_t3030399641* ___V5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
