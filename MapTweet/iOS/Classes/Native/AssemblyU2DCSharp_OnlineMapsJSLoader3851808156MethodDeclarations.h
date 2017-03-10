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

// OnlineMapsJSLoader
struct OnlineMapsJSLoader_t3851808156;
// OnlineMapsWWW
struct OnlineMapsWWW_t3247411593;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsJSLoader::.ctor()
extern "C"  void OnlineMapsJSLoader__ctor_m3405169867 (OnlineMapsJSLoader_t3851808156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSLoader::Start()
extern "C"  void OnlineMapsJSLoader_Start_m2578447303 (OnlineMapsJSLoader_t3851808156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsWWW OnlineMapsJSLoader::OnGetWWW(System.String)
extern "C"  OnlineMapsWWW_t3247411593 * OnlineMapsJSLoader_OnGetWWW_m1193679041 (OnlineMapsJSLoader_t3851808156 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSLoader::OnGetURLSuccess(System.String)
extern "C"  void OnlineMapsJSLoader_OnGetURLSuccess_m2860684722 (OnlineMapsJSLoader_t3851808156 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJSLoader::OnGetURLError(System.String)
extern "C"  void OnlineMapsJSLoader_OnGetURLError_m3733783901 (OnlineMapsJSLoader_t3851808156 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
