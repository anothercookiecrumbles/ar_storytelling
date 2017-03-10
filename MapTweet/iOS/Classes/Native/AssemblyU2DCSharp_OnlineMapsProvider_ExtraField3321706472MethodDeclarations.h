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

// OnlineMapsProvider/ExtraField
struct ExtraField_t3321706472;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsProvider/ExtraField::.ctor(System.String,System.String)
extern "C"  void ExtraField__ctor_m1511180953 (ExtraField_t3321706472 * __this, String_t* ___title0, String_t* ___token1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/ExtraField::.ctor(System.String,System.String,System.String)
extern "C"  void ExtraField__ctor_m661054795 (ExtraField_t3321706472 * __this, String_t* ___title0, String_t* ___token1, String_t* ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/ExtraField::GetTokenValue(System.String,System.Boolean,System.String&)
extern "C"  bool ExtraField_GetTokenValue_m804491138 (ExtraField_t3321706472 * __this, String_t* ___token0, bool ___useDefaultValue1, String_t** ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/ExtraField::SaveSettings(System.Text.StringBuilder)
extern "C"  void ExtraField_SaveSettings_m702455965 (ExtraField_t3321706472 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/ExtraField::TryLoadSettings(System.String,System.String,System.Int32,System.Int32)
extern "C"  bool ExtraField_TryLoadSettings_m913198181 (ExtraField_t3321706472 * __this, String_t* ___title0, String_t* ___settings1, int32_t ___index2, int32_t ___contentSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
