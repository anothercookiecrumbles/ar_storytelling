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

// OnlineMapsBuffer
struct OnlineMapsBuffer_t2643049474;
// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsTile
struct OnlineMapsTile_t21329940;
// System.Collections.Generic.List`1<OnlineMapsTile>
struct List_1_t3685418368;
// OnlineMapsVector2i
struct OnlineMapsVector2i_t2180897250;
// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;
// System.Collections.Generic.IEnumerable`1<OnlineMapsMarker>
struct IEnumerable_1_t3784293727;
// OnlineMapsMarkerBase
struct OnlineMapsMarkerBase_t3900955221;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMaps1893290312.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsTile21329940.h"
#include "AssemblyU2DCSharp_OnlineMapsVector2i2180897250.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_OnlineMapsMarker3492166682.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void OnlineMapsBuffer::.ctor(OnlineMaps)
extern "C"  void OnlineMapsBuffer__ctor_m1435381991 (OnlineMapsBuffer_t2643049474 * __this, OnlineMaps_t1893290312 * ___api0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsBuffer::get_apiPosition()
extern "C"  Vector2_t2243707579  OnlineMapsBuffer_get_apiPosition_m4187905412 (OnlineMapsBuffer_t2643049474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsBuffer::get_topLeftPosition()
extern "C"  Vector2_t2243707579  OnlineMapsBuffer_get_topLeftPosition_m295217690 (OnlineMapsBuffer_t2643049474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::ApplyNewTiles()
extern "C"  void OnlineMapsBuffer_ApplyNewTiles_m2381799378 (OnlineMapsBuffer_t2643049474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::ApplyTile(OnlineMapsTile)
extern "C"  void OnlineMapsBuffer_ApplyTile_m2128583591 (OnlineMapsBuffer_t2643049474 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<OnlineMapsTile> OnlineMapsBuffer::CreateParents(System.Collections.Generic.List`1<OnlineMapsTile>,System.Int32)
extern "C"  List_1_t3685418368 * OnlineMapsBuffer_CreateParents_m2817256634 (OnlineMapsBuffer_t2643049474 * __this, List_1_t3685418368 * ___tiles0, int32_t ___zoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::CreateTileParent(System.Int32,OnlineMapsTile,System.Collections.Generic.List`1<OnlineMapsTile>)
extern "C"  void OnlineMapsBuffer_CreateTileParent_m1007898922 (OnlineMapsBuffer_t2643049474 * __this, int32_t ___zoom0, OnlineMapsTile_t21329940 * ___tile1, List_1_t3685418368 * ___newParentTiles2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::Dispose()
extern "C"  void OnlineMapsBuffer_Dispose_m3637697040 (OnlineMapsBuffer_t2643049474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::GenerateFrontBuffer()
extern "C"  void OnlineMapsBuffer_GenerateFrontBuffer_m3232406573 (OnlineMapsBuffer_t2643049474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsVector2i OnlineMapsBuffer::GetBackBufferPosition(System.Double,System.Double,OnlineMapsVector2i,System.Int32,System.Int32,System.Int32)
extern "C"  OnlineMapsVector2i_t2180897250 * OnlineMapsBuffer_GetBackBufferPosition_m2933781049 (OnlineMapsBuffer_t2643049474 * __this, double ___px0, double ___py1, OnlineMapsVector2i_t2180897250 * ____bufferPosition2, int32_t ___zoom3, int32_t ___apiWidth4, int32_t ___apiHeight5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::GetCorners(System.Double&,System.Double&,System.Double&,System.Double&)
extern "C"  void OnlineMapsBuffer_GetCorners_m2776605177 (OnlineMapsBuffer_t2643049474 * __this, double* ___tlx0, double* ___tly1, double* ___brx2, double* ___bry3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::GetFrontBufferPosition(System.Double,System.Double,OnlineMapsVector2i,System.Int32,System.Int32,System.Int32)
extern "C"  void OnlineMapsBuffer_GetFrontBufferPosition_m2592782842 (OnlineMapsBuffer_t2643049474 * __this, double ___px0, double ___py1, OnlineMapsVector2i_t2180897250 * ____bufferPosition2, int32_t ___zoom3, int32_t ___apiWidth4, int32_t ___apiHeight5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsBuffer::GetMarkerRect(OnlineMapsMarker)
extern "C"  Rect_t3681755626  OnlineMapsBuffer_GetMarkerRect_m1764657557 (OnlineMapsBuffer_t2643049474 * __this, OnlineMapsMarker_t3492166682 * ___marker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::InitTile(System.Int32,OnlineMapsVector2i,System.Int32,System.Collections.Generic.List`1<OnlineMapsTile>,System.Int32,System.Int32)
extern "C"  void OnlineMapsBuffer_InitTile_m3175246997 (OnlineMapsBuffer_t2643049474 * __this, int32_t ___zoom0, OnlineMapsVector2i_t2180897250 * ___pos1, int32_t ___maxY2, List_1_t3685418368 * ___newBaseTiles3, int32_t ___y4, int32_t ___px5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::InitTiles(System.Int32,System.Int32,OnlineMapsVector2i,System.Int32,System.Int32,System.Collections.Generic.List`1<OnlineMapsTile>)
extern "C"  void OnlineMapsBuffer_InitTiles_m1325059288 (OnlineMapsBuffer_t2643049474 * __this, int32_t ___zoom0, int32_t ___countX1, OnlineMapsVector2i_t2180897250 * ___pos2, int32_t ___countY3, int32_t ___maxY4, List_1_t3685418368 * ___newBaseTiles5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::OnTileSetColor(OnlineMapsTile)
extern "C"  void OnlineMapsBuffer_OnTileSetColor_m4007819309 (OnlineMapsBuffer_t2643049474 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsBuffer::SetBufferTile(OnlineMapsTile)
extern "C"  Rect_t3681755626  OnlineMapsBuffer_SetBufferTile_m2658893277 (OnlineMapsBuffer_t2643049474 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsBuffer::SetBufferTileFromParent(OnlineMapsTile,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool OnlineMapsBuffer_SetBufferTileFromParent_m1649356588 (OnlineMapsBuffer_t2643049474 * __this, OnlineMapsTile_t21329940 * ___tile0, int32_t ___px1, int32_t ___py2, int32_t ___size3, int32_t ___sx4, int32_t ___sy5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::SetColorToBuffer(UnityEngine.Color,OnlineMapsVector2i,System.Int32,System.Int32)
extern "C"  void OnlineMapsBuffer_SetColorToBuffer_m614932523 (OnlineMapsBuffer_t2643049474 * __this, Color_t2020392075  ___clr0, OnlineMapsVector2i_t2180897250 * ___ip1, int32_t ___y2, int32_t ___x3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::SetMarkerToBuffer(OnlineMapsMarker,System.Double,System.Double,System.Double,System.Double)
extern "C"  void OnlineMapsBuffer_SetMarkerToBuffer_m4202024610 (OnlineMapsBuffer_t2643049474 * __this, OnlineMapsMarker_t3492166682 * ___marker0, double ___sx1, double ___sy2, double ___ex3, double ___ey4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::SetMarkersToBuffer(System.Collections.Generic.IEnumerable`1<OnlineMapsMarker>)
extern "C"  void OnlineMapsBuffer_SetMarkersToBuffer_m2623399738 (OnlineMapsBuffer_t2643049474 * __this, Il2CppObject* ___markers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::UnloadOldTiles()
extern "C"  void OnlineMapsBuffer_UnloadOldTiles_m1736720940 (OnlineMapsBuffer_t2643049474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsBuffer::UpdateBackBuffer(System.Double,System.Double,System.Int32,System.Boolean)
extern "C"  bool OnlineMapsBuffer_UpdateBackBuffer_m3410981023 (OnlineMapsBuffer_t2643049474 * __this, double ___px0, double ___py1, int32_t ___zoom2, bool ___fullRedraw3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::UpdateFrontBuffer(System.Int32,System.Int32)
extern "C"  void OnlineMapsBuffer_UpdateFrontBuffer_m3622700963 (OnlineMapsBuffer_t2643049474 * __this, int32_t ___apiWidth0, int32_t ___apiHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsBuffer::UpdateSmartBuffer(System.Int32,System.Int32)
extern "C"  void OnlineMapsBuffer_UpdateSmartBuffer_m3393552063 (OnlineMapsBuffer_t2643049474 * __this, int32_t ___apiWidth0, int32_t ___apiHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsBuffer::<SetMarkersToBuffer>m__0(OnlineMapsMarker)
extern "C"  bool OnlineMapsBuffer_U3CSetMarkersToBufferU3Em__0_m1230589292 (OnlineMapsBuffer_t2643049474 * __this, OnlineMapsMarker_t3492166682 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsMarkerBase OnlineMapsBuffer::<SetMarkersToBuffer>m__1(OnlineMapsMarker)
extern "C"  OnlineMapsMarkerBase_t3900955221 * OnlineMapsBuffer_U3CSetMarkersToBufferU3Em__1_m2548558011 (Il2CppObject * __this /* static, unused */, OnlineMapsMarker_t3492166682 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
