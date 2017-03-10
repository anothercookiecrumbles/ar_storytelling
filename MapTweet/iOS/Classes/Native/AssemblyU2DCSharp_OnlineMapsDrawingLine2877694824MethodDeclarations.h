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

// OnlineMapsDrawingLine
struct OnlineMapsDrawingLine_t2877694824;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// OnlineMapsVector2i
struct OnlineMapsVector2i_t2180897250;
// OnlineMapsTileSetControl
struct OnlineMapsTileSetControl_t3368302803;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_OnlineMapsVector2i2180897250.h"
#include "AssemblyU2DCSharp_OnlineMapsTileSetControl3368302803.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void OnlineMapsDrawingLine::.ctor()
extern "C"  void OnlineMapsDrawingLine__ctor_m3886484749 (OnlineMapsDrawingLine_t2877694824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingLine::.ctor(System.Collections.IEnumerable)
extern "C"  void OnlineMapsDrawingLine__ctor_m3887234748 (OnlineMapsDrawingLine_t2877694824 * __this, Il2CppObject * ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingLine::.ctor(System.Collections.IEnumerable,UnityEngine.Color)
extern "C"  void OnlineMapsDrawingLine__ctor_m1983188602 (OnlineMapsDrawingLine_t2877694824 * __this, Il2CppObject * ___points0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingLine::.ctor(System.Collections.IEnumerable,UnityEngine.Color,System.Single)
extern "C"  void OnlineMapsDrawingLine__ctor_m1037467913 (OnlineMapsDrawingLine_t2877694824 * __this, Il2CppObject * ___points0, Color_t2020392075  ___color1, float ___weight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable OnlineMapsDrawingLine::get_points()
extern "C"  Il2CppObject * OnlineMapsDrawingLine_get_points_m1043486511 (OnlineMapsDrawingLine_t2877694824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingLine::set_points(System.Collections.IEnumerable)
extern "C"  void OnlineMapsDrawingLine_set_points_m2561280178 (OnlineMapsDrawingLine_t2877694824 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingLine::Draw(UnityEngine.Color32[],OnlineMapsVector2i,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void OnlineMapsDrawingLine_Draw_m93916892 (OnlineMapsDrawingLine_t2877694824 * __this, Color32U5BU5D_t30278651* ___buffer0, OnlineMapsVector2i_t2180897250 * ___bufferPosition1, int32_t ___bufferWidth2, int32_t ___bufferHeight3, int32_t ___zoom4, bool ___invertY5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingLine::DrawOnTileset(OnlineMapsTileSetControl,System.Int32)
extern "C"  void OnlineMapsDrawingLine_DrawOnTileset_m1734335476 (OnlineMapsDrawingLine_t2877694824 * __this, OnlineMapsTileSetControl_t3368302803 * ___control0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingLine::DisposeLate()
extern "C"  void OnlineMapsDrawingLine_DisposeLate_m3630179398 (OnlineMapsDrawingLine_t2877694824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsDrawingLine::HitTest(UnityEngine.Vector2,System.Int32)
extern "C"  bool OnlineMapsDrawingLine_HitTest_m2854469123 (OnlineMapsDrawingLine_t2877694824 * __this, Vector2_t2243707579  ___positionLngLat0, int32_t ___zoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsDrawingLine::Validate()
extern "C"  bool OnlineMapsDrawingLine_Validate_m4176204323 (OnlineMapsDrawingLine_t2877694824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
