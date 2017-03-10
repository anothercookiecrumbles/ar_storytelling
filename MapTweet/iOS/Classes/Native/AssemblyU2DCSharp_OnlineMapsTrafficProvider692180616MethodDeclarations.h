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

// OnlineMapsTrafficProvider
struct OnlineMapsTrafficProvider_t692180616;
// System.String
struct String_t;
// OnlineMapsTrafficProvider[]
struct OnlineMapsTrafficProviderU5BU5D_t1441044057;
// OnlineMapsTile
struct OnlineMapsTile_t21329940;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsTile21329940.h"

// System.Void OnlineMapsTrafficProvider::.ctor()
extern "C"  void OnlineMapsTrafficProvider__ctor_m3337656299 (OnlineMapsTrafficProvider_t692180616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsTrafficProvider OnlineMapsTrafficProvider::GetByID(System.String)
extern "C"  OnlineMapsTrafficProvider_t692180616 * OnlineMapsTrafficProvider_GetByID_m2556473304 (Il2CppObject * __this /* static, unused */, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsTrafficProvider[] OnlineMapsTrafficProvider::GetProviders()
extern "C"  OnlineMapsTrafficProviderU5BU5D_t1441044057* OnlineMapsTrafficProvider_GetProviders_m1098412398 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsTrafficProvider::GetURL(OnlineMapsTile)
extern "C"  String_t* OnlineMapsTrafficProvider_GetURL_m3467077391 (OnlineMapsTrafficProvider_t692180616 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
