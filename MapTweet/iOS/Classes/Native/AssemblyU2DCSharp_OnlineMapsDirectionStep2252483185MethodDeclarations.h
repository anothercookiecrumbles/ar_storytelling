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

// OnlineMapsDirectionStep
struct OnlineMapsDirectionStep_t2252483185;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<OnlineMapsDirectionStep>
struct List_1_t1621604317;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.List`1<OnlineMapsDirectionStep>[]
struct List_1U5BU5D_t2342921232;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsDirectionStep::.ctor()
extern "C"  void OnlineMapsDirectionStep__ctor_m3666588070 (OnlineMapsDirectionStep_t2252483185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDirectionStep::.ctor(OnlineMapsXML)
extern "C"  void OnlineMapsDirectionStep__ctor_m1270492321 (OnlineMapsDirectionStep_t2252483185 * __this, OnlineMapsXML_t3341520387 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> OnlineMapsDirectionStep::GetPoints(System.Collections.Generic.List`1<OnlineMapsDirectionStep>)
extern "C"  List_1_t1612828711 * OnlineMapsDirectionStep_GetPoints_m4212446525 (Il2CppObject * __this /* static, unused */, List_1_t1621604317 * ___steps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsDirectionStep::GetStringInstructions()
extern "C"  void OnlineMapsDirectionStep_GetStringInstructions_m103770686 (OnlineMapsDirectionStep_t2252483185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsDirectionStep::StrReplace(System.String,System.String[],System.String[])
extern "C"  String_t* OnlineMapsDirectionStep_StrReplace_m2001941280 (Il2CppObject * __this /* static, unused */, String_t* ___str0, StringU5BU5D_t1642385972* ___origin1, StringU5BU5D_t1642385972* ___replace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<OnlineMapsDirectionStep> OnlineMapsDirectionStep::TryParse(System.String)
extern "C"  List_1_t1621604317 * OnlineMapsDirectionStep_TryParse_m2168295822 (Il2CppObject * __this /* static, unused */, String_t* ___route0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<OnlineMapsDirectionStep> OnlineMapsDirectionStep::TryParseORS(System.String)
extern "C"  List_1_t1621604317 * OnlineMapsDirectionStep_TryParseORS_m4281460498 (Il2CppObject * __this /* static, unused */, String_t* ___route0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<OnlineMapsDirectionStep>[] OnlineMapsDirectionStep::TryParseWithAlternatives(System.String)
extern "C"  List_1U5BU5D_t2342921232* OnlineMapsDirectionStep_TryParseWithAlternatives_m2645746366 (Il2CppObject * __this /* static, unused */, String_t* ___route0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
