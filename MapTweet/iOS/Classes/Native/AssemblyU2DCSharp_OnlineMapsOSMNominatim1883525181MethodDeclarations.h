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

// OnlineMapsOSMNominatim
struct OnlineMapsOSMNominatim_t1883525181;
// System.String
struct String_t;
// OnlineMapsTextWebService
struct OnlineMapsTextWebService_t1027474722;
// OnlineMapsOSMNominatimResult[]
struct OnlineMapsOSMNominatimResultU5BU5D_t2986748805;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void OnlineMapsOSMNominatim::.ctor(System.String,System.String,System.Int32,System.Boolean)
extern "C"  void OnlineMapsOSMNominatim__ctor_m381279756 (OnlineMapsOSMNominatim_t1883525181 * __this, String_t* ___query0, String_t* ___acceptlanguage1, int32_t ___limit2, bool ___addressdetails3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMNominatim::.ctor(UnityEngine.Vector2,System.String,System.Boolean)
extern "C"  void OnlineMapsOSMNominatim__ctor_m2317878377 (OnlineMapsOSMNominatim_t1883525181 * __this, Vector2_t2243707579  ___location0, String_t* ___acceptlanguage1, bool ___addressdetails2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsTextWebService OnlineMapsOSMNominatim::Search(System.String,System.String,System.Int32,System.Boolean)
extern "C"  OnlineMapsTextWebService_t1027474722 * OnlineMapsOSMNominatim_Search_m409351695 (Il2CppObject * __this /* static, unused */, String_t* ___query0, String_t* ___acceptlanguage1, int32_t ___limit2, bool ___addressdetails3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsTextWebService OnlineMapsOSMNominatim::Reverse(UnityEngine.Vector2,System.String,System.Boolean)
extern "C"  OnlineMapsTextWebService_t1027474722 * OnlineMapsOSMNominatim_Reverse_m176982002 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___location0, String_t* ___acceptlanguage1, bool ___addressdetails2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsOSMNominatimResult[] OnlineMapsOSMNominatim::GetResults(System.String)
extern "C"  OnlineMapsOSMNominatimResultU5BU5D_t2986748805* OnlineMapsOSMNominatim_GetResults_m4170890637 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
