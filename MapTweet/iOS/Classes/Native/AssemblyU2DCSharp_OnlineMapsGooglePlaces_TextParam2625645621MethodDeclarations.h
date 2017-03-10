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

// OnlineMapsGooglePlaces/TextParams
struct TextParams_t2625645621;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsGooglePlaces/TextParams::.ctor(System.String)
extern "C"  void TextParams__ctor_m3201006878 (TextParams_t2625645621 * __this, String_t* ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 OnlineMapsGooglePlaces/TextParams::get_lnglat()
extern "C"  Vector2_t2243707579  TextParams_get_lnglat_m304410178 (TextParams_t2625645621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces/TextParams::set_lnglat(UnityEngine.Vector2)
extern "C"  void TextParams_set_lnglat_m277783889 (TextParams_t2625645621 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsGooglePlaces/TextParams::get_typePath()
extern "C"  String_t* TextParams_get_typePath_m4004057489 (TextParams_t2625645621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlaces/TextParams::AppendParams(System.Text.StringBuilder)
extern "C"  void TextParams_AppendParams_m389714882 (TextParams_t2625645621 * __this, StringBuilder_t1221177846 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
