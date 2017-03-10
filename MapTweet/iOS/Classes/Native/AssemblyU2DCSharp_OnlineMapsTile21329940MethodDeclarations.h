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

// OnlineMapsTile
struct OnlineMapsTile_t21329940;
// OnlineMaps
struct OnlineMaps_t1893290312;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// System.String
struct String_t;
// System.Collections.Generic.List`1<OnlineMapsTile>
struct List_1_t3685418368;
// System.Collections.Generic.Dictionary`2<System.UInt64,OnlineMapsTile>
struct Dictionary_2_t1962412005;
// OnlineMapsTrafficProvider
struct OnlineMapsTrafficProvider_t692180616;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMaps1893290312.h"
#include "AssemblyU2DCSharp_OnlineMapsTile21329940.h"
#include "AssemblyU2DCSharp_OnlineMapsTrafficProvider692180616.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "System_System_Text_RegularExpressions_Match3164245899.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void OnlineMapsTile::.ctor(System.Int32,System.Int32,System.Int32,OnlineMaps,System.Boolean)
extern "C"  void OnlineMapsTile__ctor_m3582613609 (OnlineMapsTile_t21329940 * __this, int32_t ___x0, int32_t ___y1, int32_t ___zoom2, OnlineMaps_t1893290312 * ___map3, bool ___isMapTile4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::.ctor(System.Int32,System.Int32,System.Int32,OnlineMaps,OnlineMapsTile)
extern "C"  void OnlineMapsTile__ctor_m1627206668 (OnlineMapsTile_t21329940 * __this, int32_t ___x0, int32_t ___y1, int32_t ___zoom2, OnlineMaps_t1893290312 * ___map3, OnlineMapsTile_t21329940 * ___parent4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] OnlineMapsTile::get_colors()
extern "C"  Color32U5BU5D_t30278651* OnlineMapsTile_get_colors_m2438060050 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsTile::get_resourcesPath()
extern "C"  String_t* OnlineMapsTile_get_resourcesPath_m558022571 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<OnlineMapsTile> OnlineMapsTile::get_tiles()
extern "C"  List_1_t3685418368 * OnlineMapsTile_get_tiles_m4128207074 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::set_tiles(System.Collections.Generic.List`1<OnlineMapsTile>)
extern "C"  void OnlineMapsTile_set_tiles_m822744339 (Il2CppObject * __this /* static, unused */, List_1_t3685418368 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,OnlineMapsTile> OnlineMapsTile::get_dTiles()
extern "C"  Dictionary_2_t1962412005 * OnlineMapsTile_get_dTiles_m888166752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsTrafficProvider OnlineMapsTile::get_trafficProvider()
extern "C"  OnlineMapsTrafficProvider_t692180616 * OnlineMapsTile_get_trafficProvider_m1968471665 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::set_trafficProvider(OnlineMapsTrafficProvider)
extern "C"  void OnlineMapsTile_set_trafficProvider_m4128189386 (OnlineMapsTile_t21329940 * __this, OnlineMapsTrafficProvider_t692180616 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsTile::get_trafficURL()
extern "C"  String_t* OnlineMapsTile_get_trafficURL_m3265035173 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::set_trafficURL(System.String)
extern "C"  void OnlineMapsTile_set_trafficURL_m2749560010 (OnlineMapsTile_t21329940 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsTile::get_url()
extern "C"  String_t* OnlineMapsTile_get_url_m1191955722 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::set_url(System.String)
extern "C"  void OnlineMapsTile_set_url_m3407975243 (OnlineMapsTile_t21329940 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::ApplyColorsToChilds()
extern "C"  void OnlineMapsTile_ApplyColorsToChilds_m1035841127 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::ApplyLabelTexture()
extern "C"  void OnlineMapsTile_ApplyLabelTexture_m2754085434 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::ApplyTexture(UnityEngine.Texture2D)
extern "C"  void OnlineMapsTile_ApplyTexture_m1499933874 (OnlineMapsTile_t21329940 * __this, Texture2D_t3542995729 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::CheckTextureSize(UnityEngine.Texture2D)
extern "C"  void OnlineMapsTile_CheckTextureSize_m301121153 (OnlineMapsTile_t21329940 * __this, Texture2D_t3542995729 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsTile::CustomProviderReplaceToken(System.Text.RegularExpressions.Match)
extern "C"  String_t* OnlineMapsTile_CustomProviderReplaceToken_m986746745 (OnlineMapsTile_t21329940 * __this, Match_t3164245899 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsTile::CustomTrafficProviderReplaceToken(System.Text.RegularExpressions.Match)
extern "C"  String_t* OnlineMapsTile_CustomTrafficProviderReplaceToken_m1302312436 (OnlineMapsTile_t21329940 * __this, Match_t3164245899 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::Dispose()
extern "C"  void OnlineMapsTile_Dispose_m3769169002 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::Destroy()
extern "C"  void OnlineMapsTile_Destroy_m1358186821 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsTile OnlineMapsTile::GetTile(System.Int32,System.Int32,System.Int32)
extern "C"  OnlineMapsTile_t21329940 * OnlineMapsTile_GetTile_m4170021635 (Il2CppObject * __this /* static, unused */, int32_t ___zoom0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsTile::GetTile(System.Int32,System.Int32,System.Int32,OnlineMapsTile&)
extern "C"  bool OnlineMapsTile_GetTile_m656927344 (Il2CppObject * __this /* static, unused */, int32_t ___zoom0, int32_t ___x1, int32_t ___y2, OnlineMapsTile_t21329940 ** ___tile3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 OnlineMapsTile::GetTileKey(System.Int32,System.Int32,System.Int32)
extern "C"  uint64_t OnlineMapsTile_GetTileKey_m27161875 (Il2CppObject * __this /* static, unused */, int32_t ___zoom0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect OnlineMapsTile::GetRect()
extern "C"  Rect_t3681755626  OnlineMapsTile_GetRect_m1708863753 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsTile::InScreen(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool OnlineMapsTile_InScreen_m1584495792 (OnlineMapsTile_t21329940 * __this, Vector2_t2243707579  ___tl0, Vector2_t2243707579  ___br1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::LoadTexture()
extern "C"  void OnlineMapsTile_LoadTexture_m1799767108 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::LoadTexture(UnityEngine.Texture2D,System.Byte[])
extern "C"  void OnlineMapsTile_LoadTexture_m2209712779 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___texture0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::MergeColors()
extern "C"  void OnlineMapsTile_MergeColors_m541332461 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::OnDownloadComplete()
extern "C"  void OnlineMapsTile_OnDownloadComplete_m3684508399 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::OnDownloadError()
extern "C"  void OnlineMapsTile_OnDownloadError_m902606770 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsTile::OnLabelDownloadComplete()
extern "C"  bool OnlineMapsTile_OnLabelDownloadComplete_m3215169473 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::SetChild(OnlineMapsTile)
extern "C"  void OnlineMapsTile_SetChild_m3235784943 (OnlineMapsTile_t21329940 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::SetParent(OnlineMapsTile)
extern "C"  void OnlineMapsTile_SetParent_m4084560125 (OnlineMapsTile_t21329940 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsTile::ToString()
extern "C"  String_t* OnlineMapsTile_ToString_m1698769694 (OnlineMapsTile_t21329940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsTile::UnloadUnusedTiles()
extern "C"  void OnlineMapsTile_UnloadUnusedTiles_m3265767229 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
