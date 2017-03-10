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

// OnlineMapsDrawingElement
struct OnlineMapsDrawingElement_t539447654;
// OnlineMaps
struct OnlineMaps_t1893290312;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// OnlineMapsVector2i
struct OnlineMapsVector2i_t2180897250;
// OnlineMapsTileSetControl
struct OnlineMapsTileSetControl_t3368302803;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_OnlineMapsVector2i2180897250.h"
#include "AssemblyU2DCSharp_OnlineMapsTileSetControl3368302803.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"

// System.Void OnlineMapsDrawingElement::.ctor()
extern "C"  void OnlineMapsDrawingElement__ctor_m3391952609 (OnlineMapsDrawingElement_t539447654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMaps OnlineMapsDrawingElement::get_api()
extern "C"  OnlineMaps_t1893290312 * OnlineMapsDrawingElement_get_api_m4093685331 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsDrawingElement::get_active()
extern "C"  bool OnlineMapsDrawingElement_get_active_m1345135424 (OnlineMapsDrawingElement_t539447654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::set_active(System.Boolean)
extern "C"  void OnlineMapsDrawingElement_set_active_m850349411 (OnlineMapsDrawingElement_t539447654 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsDrawingElement::get_center()
extern "C"  Vector2_t2243707579  OnlineMapsDrawingElement_get_center_m548507894 (OnlineMapsDrawingElement_t539447654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsDrawingElement::get_renderQueueOffset()
extern "C"  int32_t OnlineMapsDrawingElement_get_renderQueueOffset_m2035962256 (OnlineMapsDrawingElement_t539447654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::set_renderQueueOffset(System.Int32)
extern "C"  void OnlineMapsDrawingElement_set_renderQueueOffset_m1757176467 (OnlineMapsDrawingElement_t539447654 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsDrawingElement::get_visible()
extern "C"  bool OnlineMapsDrawingElement_get_visible_m3857295618 (OnlineMapsDrawingElement_t539447654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::set_visible(System.Boolean)
extern "C"  void OnlineMapsDrawingElement_set_visible_m1081666753 (OnlineMapsDrawingElement_t539447654 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::Dispose()
extern "C"  void OnlineMapsDrawingElement_Dispose_m693671920 (OnlineMapsDrawingElement_t539447654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::DisposeLate()
extern "C"  void OnlineMapsDrawingElement_DisposeLate_m2053820716 (OnlineMapsDrawingElement_t539447654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::Draw(UnityEngine.Color32[],OnlineMapsVector2i,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void OnlineMapsDrawingElement_Draw_m3447318638 (OnlineMapsDrawingElement_t539447654 * __this, Color32U5BU5D_t30278651* ___buffer0, OnlineMapsVector2i_t2180897250 * ___bufferPosition1, int32_t ___bufferWidth2, int32_t ___bufferHeight3, int32_t ___zoom4, bool ___invertY5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::DrawActivePoints(OnlineMapsTileSetControl,System.Collections.Generic.List`1<UnityEngine.Vector2>&,System.Collections.Generic.List`1<UnityEngine.Vector3>&,System.Collections.Generic.List`1<UnityEngine.Vector3>&,System.Collections.Generic.List`1<System.Int32>&,System.Collections.Generic.List`1<UnityEngine.Vector2>&,System.Single)
extern "C"  void OnlineMapsDrawingElement_DrawActivePoints_m1470690703 (OnlineMapsDrawingElement_t539447654 * __this, OnlineMapsTileSetControl_t3368302803 * ___control0, List_1_t1612828711 ** ___activePoints1, List_1_t1612828712 ** ___verticles2, List_1_t1612828712 ** ___normals3, List_1_t1440998580 ** ___triangles4, List_1_t1612828711 ** ___uv5, float ___weight6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::DrawLineToBuffer(UnityEngine.Color32[],OnlineMapsVector2i,System.Int32,System.Int32,System.Int32,System.Collections.IEnumerable,UnityEngine.Color32,System.Single,System.Boolean,System.Boolean)
extern "C"  void OnlineMapsDrawingElement_DrawLineToBuffer_m377923395 (OnlineMapsDrawingElement_t539447654 * __this, Color32U5BU5D_t30278651* ___buffer0, OnlineMapsVector2i_t2180897250 * ___bufferPosition1, int32_t ___bufferWidth2, int32_t ___bufferHeight3, int32_t ___zoom4, Il2CppObject * ___points5, Color32_t874517518  ___color6, float ___weight7, bool ___closed8, bool ___invertY9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::DrawLinePartToBuffer(UnityEngine.Color32[],OnlineMapsVector2i,System.Int32,System.Int32,UnityEngine.Color32,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Double&,System.Int32,System.Boolean)
extern "C"  void OnlineMapsDrawingElement_DrawLinePartToBuffer_m855347449 (Il2CppObject * __this /* static, unused */, Color32U5BU5D_t30278651* ___buffer0, OnlineMapsVector2i_t2180897250 * ___bufferPosition1, int32_t ___bufferWidth2, int32_t ___bufferHeight3, Color32_t874517518  ___color4, double ___sx5, double ___sy6, double ___p1tx7, double ___p1ty8, double ___p2tx9, double ___p2ty10, int32_t ___j11, int32_t ___maxX12, double* ___ppx113, int32_t ___w14, bool ___invertY15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::DrawOnTileset(OnlineMapsTileSetControl,System.Int32)
extern "C"  void OnlineMapsDrawingElement_DrawOnTileset_m3493392638 (OnlineMapsDrawingElement_t539447654 * __this, OnlineMapsTileSetControl_t3368302803 * ___control0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::FillPoly(UnityEngine.Color32[],OnlineMapsVector2i,System.Int32,System.Int32,System.Int32,System.Collections.IEnumerable,UnityEngine.Color32,System.Boolean)
extern "C"  void OnlineMapsDrawingElement_FillPoly_m3292018473 (OnlineMapsDrawingElement_t539447654 * __this, Color32U5BU5D_t30278651* ___buffer0, OnlineMapsVector2i_t2180897250 * ___bufferPosition1, int32_t ___bufferWidth2, int32_t ___bufferHeight3, int32_t ___zoom4, Il2CppObject * ___points5, Color32_t874517518  ___color6, bool ___invertY7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] OnlineMapsDrawingElement::GetBufferPoints(OnlineMapsVector2i,System.Int32,System.Collections.IEnumerable,System.Double&,System.Double&,System.Double&,System.Double&)
extern "C"  DoubleU5BU5D_t1889952540* OnlineMapsDrawingElement_GetBufferPoints_m3606676935 (Il2CppObject * __this /* static, unused */, OnlineMapsVector2i_t2180897250 * ___bufferPosition0, int32_t ___zoom1, Il2CppObject * ___points2, double* ___minX3, double* ___maxX4, double* ___minY5, double* ___maxY6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> OnlineMapsDrawingElement::GetLocalPoints(System.Collections.IEnumerable,System.Boolean,System.Boolean)
extern "C"  List_1_t1612828711 * OnlineMapsDrawingElement_GetLocalPoints_m862780891 (OnlineMapsDrawingElement_t539447654 * __this, Il2CppObject * ___points0, bool ___closed1, bool ___optimize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsDrawingElement::HitTest(UnityEngine.Vector2,System.Int32)
extern "C"  bool OnlineMapsDrawingElement_HitTest_m2753774579 (OnlineMapsDrawingElement_t539447654 * __this, Vector2_t2243707579  ___positionLngLat0, int32_t ___zoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::InitLineMesh(System.Collections.IEnumerable,OnlineMapsTileSetControl,System.Collections.Generic.List`1<UnityEngine.Vector3>&,System.Collections.Generic.List`1<UnityEngine.Vector3>&,System.Collections.Generic.List`1<System.Int32>&,System.Collections.Generic.List`1<UnityEngine.Vector2>&,System.Single,System.Boolean)
extern "C"  void OnlineMapsDrawingElement_InitLineMesh_m1224529115 (OnlineMapsDrawingElement_t539447654 * __this, Il2CppObject * ___points0, OnlineMapsTileSetControl_t3368302803 * ___control1, List_1_t1612828712 ** ___verticles2, List_1_t1612828712 ** ___normals3, List_1_t1440998580 ** ___triangles4, List_1_t1612828711 ** ___uv5, float ___weight6, bool ___closed7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsDrawingElement::InitMesh(OnlineMapsTileSetControl,System.String,UnityEngine.Color,UnityEngine.Color,UnityEngine.Texture,UnityEngine.Texture)
extern "C"  bool OnlineMapsDrawingElement_InitMesh_m3117873275 (OnlineMapsDrawingElement_t539447654 * __this, OnlineMapsTileSetControl_t3368302803 * ___control0, String_t* ___name1, Color_t2020392075  ___borderColor2, Color_t2020392075  ___backgroundColor3, Texture_t2243626319 * ___borderTexture4, Texture_t2243626319 * ___backgroundTexture5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::MarkChanged()
extern "C"  void OnlineMapsDrawingElement_MarkChanged_m2953150162 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::OnRemoveFromMap()
extern "C"  void OnlineMapsDrawingElement_OnRemoveFromMap_m2629888296 (OnlineMapsDrawingElement_t539447654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDrawingElement::UpdateMaterialsQuote(OnlineMapsTileSetControl,System.Int32)
extern "C"  void OnlineMapsDrawingElement_UpdateMaterialsQuote_m2818419336 (OnlineMapsDrawingElement_t539447654 * __this, OnlineMapsTileSetControl_t3368302803 * ___control0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsDrawingElement::Validate()
extern "C"  bool OnlineMapsDrawingElement_Validate_m2516368171 (OnlineMapsDrawingElement_t539447654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
