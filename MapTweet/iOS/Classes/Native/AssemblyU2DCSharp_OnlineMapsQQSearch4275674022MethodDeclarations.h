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

// OnlineMapsQQSearch
struct OnlineMapsQQSearch_t4275674022;
// System.String
struct String_t;
// OnlineMapsQQSearch/Params
struct Params_t4087323383;
// OnlineMapsQQSearchResult
struct OnlineMapsQQSearchResult_t2231597021;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsQQSearch_Params4087323383.h"

// System.Void OnlineMapsQQSearch::.ctor(System.String,System.String,OnlineMapsQQSearch/Params)
extern "C"  void OnlineMapsQQSearch__ctor_m1703371030 (OnlineMapsQQSearch_t4275674022 * __this, String_t* ___key0, String_t* ___keyword1, Params_t4087323383 * ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsQQSearch OnlineMapsQQSearch::Find(System.String,System.String,OnlineMapsQQSearch/Params)
extern "C"  OnlineMapsQQSearch_t4275674022 * OnlineMapsQQSearch_Find_m2815099364 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___keyword1, Params_t4087323383 * ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsQQSearchResult OnlineMapsQQSearch::GetResult(System.String)
extern "C"  OnlineMapsQQSearchResult_t2231597021 * OnlineMapsQQSearch_GetResult_m674307440 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
