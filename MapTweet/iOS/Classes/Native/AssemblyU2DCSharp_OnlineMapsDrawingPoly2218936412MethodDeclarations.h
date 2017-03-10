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

// OnlineMapsDrawingPoly
struct OnlineMapsDrawingPoly_t2218936412;
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
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsVector2i2180897250.h"
#include "AssemblyU2DCSharp_OnlineMapsTileSetControl3368302803.h"

// System.Void OnlineMapsDrawingPoly::.ctor()
extern "C"  void OnlineMapsDrawingPoly__ctor_m3746760621 (OnlineMapsDrawingPoly_t2218936412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingPoly::.ctor(System.Collections.IEnumerable)
extern "C"  void OnlineMapsDrawingPoly__ctor_m1849557064 (OnlineMapsDrawingPoly_t2218936412 * __this, Il2CppObject * ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingPoly::.ctor(System.Collections.IEnumerable,UnityEngine.Color)
extern "C"  void OnlineMapsDrawingPoly__ctor_m1063680266 (OnlineMapsDrawingPoly_t2218936412 * __this, Il2CppObject * ___points0, Color_t2020392075  ___borderColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingPoly::.ctor(System.Collections.IEnumerable,UnityEngine.Color,System.Single)
extern "C"  void OnlineMapsDrawingPoly__ctor_m2743946033 (OnlineMapsDrawingPoly_t2218936412 * __this, Il2CppObject * ___points0, Color_t2020392075  ___borderColor1, float ___borderWeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingPoly::.ctor(System.Collections.IEnumerable,UnityEngine.Color,System.Single,UnityEngine.Color)
extern "C"  void OnlineMapsDrawingPoly__ctor_m1572412487 (OnlineMapsDrawingPoly_t2218936412 * __this, Il2CppObject * ___points0, Color_t2020392075  ___borderColor1, float ___borderWeight2, Color_t2020392075  ___backgroundColor3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable OnlineMapsDrawingPoly::get_points()
extern "C"  Il2CppObject * OnlineMapsDrawingPoly_get_points_m1135394723 (OnlineMapsDrawingPoly_t2218936412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingPoly::set_points(System.Collections.IEnumerable)
extern "C"  void OnlineMapsDrawingPoly_set_points_m3633465042 (OnlineMapsDrawingPoly_t2218936412 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsDrawingPoly::get_center()
extern "C"  Vector2_t2243707579  OnlineMapsDrawingPoly_get_center_m3262732566 (OnlineMapsDrawingPoly_t2218936412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingPoly::Draw(UnityEngine.Color32[],OnlineMapsVector2i,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void OnlineMapsDrawingPoly_Draw_m1393007700 (OnlineMapsDrawingPoly_t2218936412 * __this, Color32U5BU5D_t30278651* ___buffer0, OnlineMapsVector2i_t2180897250 * ___bufferPosition1, int32_t ___bufferWidth2, int32_t ___bufferHeight3, int32_t ___zoom4, bool ___invertY5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingPoly::DrawOnTileset(OnlineMapsTileSetControl,System.Int32)
extern "C"  void OnlineMapsDrawingPoly_DrawOnTileset_m2894290056 (OnlineMapsDrawingPoly_t2218936412 * __this, OnlineMapsTileSetControl_t3368302803 * ___control0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsDrawingPoly::HitTest(UnityEngine.Vector2,System.Int32)
extern "C"  bool OnlineMapsDrawingPoly_HitTest_m386327015 (OnlineMapsDrawingPoly_t2218936412 * __this, Vector2_t2243707579  ___positionLngLat0, int32_t ___zoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingPoly::DisposeLate()
extern "C"  void OnlineMapsDrawingPoly_DisposeLate_m2557246770 (OnlineMapsDrawingPoly_t2218936412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsDrawingPoly::Validate()
extern "C"  bool OnlineMapsDrawingPoly_Validate_m1283185535 (OnlineMapsDrawingPoly_t2218936412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
