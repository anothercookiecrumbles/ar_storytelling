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

// OnlineMapsProvider
struct OnlineMapsProvider_t1138577395;
// System.String
struct String_t;
// OnlineMapsProvider/MapType[]
struct MapTypeU5BU5D_t4254226749;
// OnlineMapsProvider/MapType
struct MapType_t2083261044;
// OnlineMapsProvider[]
struct OnlineMapsProviderU5BU5D_t3258526434;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsProvider1138577395.h"

// System.Void OnlineMapsProvider::.ctor(System.String)
extern "C"  void OnlineMapsProvider__ctor_m1035978782 (OnlineMapsProvider_t1138577395 * __this, String_t* ___title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider::.ctor(System.String,System.String)
extern "C"  void OnlineMapsProvider__ctor_m1329212722 (OnlineMapsProvider_t1138577395 * __this, String_t* ___id0, String_t* ___title1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider::get_url()
extern "C"  String_t* OnlineMapsProvider_get_url_m4237337793 (OnlineMapsProvider_t1138577395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider::set_url(System.String)
extern "C"  void OnlineMapsProvider_set_url_m1127249064 (OnlineMapsProvider_t1138577395 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsProvider/MapType[] OnlineMapsProvider::get_types()
extern "C"  MapTypeU5BU5D_t4254226749* OnlineMapsProvider_get_types_m2853859603 (OnlineMapsProvider_t1138577395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsProvider/MapType OnlineMapsProvider::FindMapType(System.String)
extern "C"  MapType_t2083261044 * OnlineMapsProvider_FindMapType_m3810644844 (Il2CppObject * __this /* static, unused */, String_t* ___mapTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsProvider/MapType OnlineMapsProvider::GetByIndex(System.Int32,System.Boolean)
extern "C"  MapType_t2083261044 * OnlineMapsProvider_GetByIndex_m2388707934 (OnlineMapsProvider_t1138577395 * __this, int32_t ___index0, bool ___repeat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsProvider[] OnlineMapsProvider::GetProviders()
extern "C"  OnlineMapsProviderU5BU5D_t3258526434* OnlineMapsProvider_GetProviders_m1050847276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] OnlineMapsProvider::GetProvidersTitle()
extern "C"  StringU5BU5D_t1642385972* OnlineMapsProvider_GetProvidersTitle_m2316792497 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider::InitProviders()
extern "C"  void OnlineMapsProvider_InitProviders_m1694653176 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider::Upgrade(System.Int32,System.Int32)
extern "C"  String_t* OnlineMapsProvider_Upgrade_m3770381971 (Il2CppObject * __this /* static, unused */, int32_t ___providerID0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsProvider::<GetProvidersTitle>m__0(OnlineMapsProvider)
extern "C"  String_t* OnlineMapsProvider_U3CGetProvidersTitleU3Em__0_m2587554241 (Il2CppObject * __this /* static, unused */, OnlineMapsProvider_t1138577395 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
