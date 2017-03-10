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

// OnlineMapsProvider/MapType
struct MapType_t2083261044;
// System.String
struct String_t;
// OnlineMapsTile
struct OnlineMapsTile_t21329940;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsTile21329940.h"
#include "System_System_Text_RegularExpressions_Match3164245899.h"

// System.Void OnlineMapsProvider/MapType::.ctor(System.String)
extern "C"  void MapType__ctor_m2412057987 (MapType_t2083261044 * __this, String_t* ___title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::.ctor(System.String,System.String)
extern "C"  void MapType__ctor_m528263873 (MapType_t2083261044 * __this, String_t* ___id0, String_t* ___title1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::get_ext()
extern "C"  String_t* MapType_get_ext_m1437524072 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_ext(System.String)
extern "C"  void MapType_set_ext_m839535043 (MapType_t2083261044 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/MapType::get_hasLanguage()
extern "C"  bool MapType_get_hasLanguage_m1460903428 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_hasLanguage(System.Boolean)
extern "C"  void MapType_set_hasLanguage_m664615655 (MapType_t2083261044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/MapType::get_hasLabels()
extern "C"  bool MapType_get_hasLabels_m1303466299 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_hasLabels(System.Boolean)
extern "C"  void MapType_set_hasLabels_m1270653562 (MapType_t2083261044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/MapType::get_labelsEnabled()
extern "C"  bool MapType_get_labelsEnabled_m1513754574 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_labelsEnabled(System.Boolean)
extern "C"  void MapType_set_labelsEnabled_m344308043 (MapType_t2083261044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/MapType::get_logUrl()
extern "C"  bool MapType_get_logUrl_m612303243 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_logUrl(System.Boolean)
extern "C"  void MapType_set_logUrl_m2633167536 (MapType_t2083261044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::get_propWithLabels()
extern "C"  String_t* MapType_get_propWithLabels_m4126380583 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_propWithLabels(System.String)
extern "C"  void MapType_set_propWithLabels_m3777790302 (MapType_t2083261044 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::get_propWithoutLabels()
extern "C"  String_t* MapType_get_propWithoutLabels_m547898469 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_propWithoutLabels(System.String)
extern "C"  void MapType_set_propWithoutLabels_m1151720246 (MapType_t2083261044 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_variant(System.String)
extern "C"  void MapType_set_variant_m3099185533 (MapType_t2083261044 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::get_variantWithLabels()
extern "C"  String_t* MapType_get_variantWithLabels_m1424165177 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_variantWithLabels(System.String)
extern "C"  void MapType_set_variantWithLabels_m926079120 (MapType_t2083261044 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::get_variantWithoutLabels()
extern "C"  String_t* MapType_get_variantWithoutLabels_m1015733519 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_variantWithoutLabels(System.String)
extern "C"  void MapType_set_variantWithoutLabels_m534345108 (MapType_t2083261044 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::get_urlWithLabels()
extern "C"  String_t* MapType_get_urlWithLabels_m2455062669 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_urlWithLabels(System.String)
extern "C"  void MapType_set_urlWithLabels_m70399612 (MapType_t2083261044 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::get_urlWithoutLabels()
extern "C"  String_t* MapType_get_urlWithoutLabels_m3993018059 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_urlWithoutLabels(System.String)
extern "C"  void MapType_set_urlWithoutLabels_m1343683344 (MapType_t2083261044 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/MapType::get_useHTTP()
extern "C"  bool MapType_get_useHTTP_m4140362607 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::set_useHTTP(System.Boolean)
extern "C"  void MapType_set_useHTTP_m3827118406 (MapType_t2083261044 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::GetSettings()
extern "C"  String_t* MapType_GetSettings_m2885870331 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::GetURL(OnlineMapsTile)
extern "C"  String_t* MapType_GetURL_m1651499689 (MapType_t2083261044 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::GetURL(OnlineMapsTile,System.String,System.Boolean)
extern "C"  String_t* MapType_GetURL_m4209469498 (MapType_t2083261044 * __this, OnlineMapsTile_t21329940 * ___tile0, String_t* ___url1, bool ___labels2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/MapType::LoadSettings(System.String)
extern "C"  void MapType_LoadSettings_m1967576692 (MapType_t2083261044 * __this, String_t* ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/MapType::TryUseExtraFields(System.String&)
extern "C"  bool MapType_TryUseExtraFields_m2954709324 (MapType_t2083261044 * __this, String_t** ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::ToString()
extern "C"  String_t* MapType_ToString_m2285374142 (MapType_t2083261044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider/MapType::<GetURL>m__0(System.Text.RegularExpressions.Match)
extern "C"  String_t* MapType_U3CGetURLU3Em__0_m2212929108 (Il2CppObject * __this /* static, unused */, Match_t3164245899 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
