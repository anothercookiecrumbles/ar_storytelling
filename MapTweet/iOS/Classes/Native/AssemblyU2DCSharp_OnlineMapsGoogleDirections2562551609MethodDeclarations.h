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

// OnlineMapsGoogleDirections
struct OnlineMapsGoogleDirections_t2562551609;
// System.String
struct String_t;
// OnlineMapsGoogleDirections/Params
struct Params_t4049735432;
// OnlineMapsGoogleDirectionsResult
struct OnlineMapsGoogleDirectionsResult_t3904223280;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsGoogleDirections_Param4049735432.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void OnlineMapsGoogleDirections::.ctor()
extern "C"  void OnlineMapsGoogleDirections__ctor_m15802480 (OnlineMapsGoogleDirections_t2562551609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleDirections::.ctor(System.String,System.String,System.Boolean)
extern "C"  void OnlineMapsGoogleDirections__ctor_m3804780383 (OnlineMapsGoogleDirections_t2562551609 * __this, String_t* ___origin0, String_t* ___destination1, bool ___alternatives2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleDirections::.ctor(OnlineMapsGoogleDirections/Params)
extern "C"  void OnlineMapsGoogleDirections__ctor_m481044022 (OnlineMapsGoogleDirections_t2562551609 * __this, Params_t4049735432 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleDirections OnlineMapsGoogleDirections::Find(System.String,System.String,System.Boolean)
extern "C"  OnlineMapsGoogleDirections_t2562551609 * OnlineMapsGoogleDirections_Find_m3744672292 (Il2CppObject * __this /* static, unused */, String_t* ___origin0, String_t* ___destination1, bool ___alternatives2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleDirections OnlineMapsGoogleDirections::Find(System.String,UnityEngine.Vector2,System.Boolean)
extern "C"  OnlineMapsGoogleDirections_t2562551609 * OnlineMapsGoogleDirections_Find_m3752228046 (Il2CppObject * __this /* static, unused */, String_t* ___origin0, Vector2_t2243707579  ___destination1, bool ___alternatives2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleDirections OnlineMapsGoogleDirections::Find(UnityEngine.Vector2,System.String,System.Boolean)
extern "C"  OnlineMapsGoogleDirections_t2562551609 * OnlineMapsGoogleDirections_Find_m3025526286 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, String_t* ___destination1, bool ___alternatives2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleDirections OnlineMapsGoogleDirections::Find(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  OnlineMapsGoogleDirections_t2562551609 * OnlineMapsGoogleDirections_Find_m1323845220 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___origin0, Vector2_t2243707579  ___destination1, bool ___alternatives2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleDirections OnlineMapsGoogleDirections::Find(OnlineMapsGoogleDirections/Params)
extern "C"  OnlineMapsGoogleDirections_t2562551609 * OnlineMapsGoogleDirections_Find_m3779725265 (Il2CppObject * __this /* static, unused */, Params_t4049735432 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGoogleDirectionsResult OnlineMapsGoogleDirections::GetResult(System.String)
extern "C"  OnlineMapsGoogleDirectionsResult_t3904223280 * OnlineMapsGoogleDirections_GetResult_m1952556758 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGoogleDirections::GetValuesFromEnum(System.Text.StringBuilder,System.String,System.Type,System.Int32)
extern "C"  void OnlineMapsGoogleDirections_GetValuesFromEnum_m2670072199 (OnlineMapsGoogleDirections_t2562551609 * __this, StringBuilder_t1221177846 * ___builder0, String_t* ___key1, Type_t * ___type2, int32_t ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
