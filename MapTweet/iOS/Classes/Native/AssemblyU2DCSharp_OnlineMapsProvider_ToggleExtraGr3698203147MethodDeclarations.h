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

// OnlineMapsProvider/ToggleExtraGroup
struct ToggleExtraGroup_t3698203147;
// System.String
struct String_t;
// OnlineMapsProvider/IExtraField[]
struct IExtraFieldU5BU5D_t3169866680;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsProvider/ToggleExtraGroup::.ctor(System.String,System.Boolean)
extern "C"  void ToggleExtraGroup__ctor_m4107462555 (ToggleExtraGroup_t3698203147 * __this, String_t* ___title0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/ToggleExtraGroup::.ctor(System.String,System.Boolean,OnlineMapsProvider/IExtraField[])
extern "C"  void ToggleExtraGroup__ctor_m2451616838 (ToggleExtraGroup_t3698203147 * __this, String_t* ___title0, bool ___value1, IExtraFieldU5BU5D_t3169866680* ___fields2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/ToggleExtraGroup::GetTokenValue(System.String,System.Boolean,System.String&)
extern "C"  bool ToggleExtraGroup_GetTokenValue_m3306147169 (ToggleExtraGroup_t3698203147 * __this, String_t* ___token0, bool ___useDefaultValue1, String_t** ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProvider/ToggleExtraGroup::SaveSettings(System.Text.StringBuilder)
extern "C"  void ToggleExtraGroup_SaveSettings_m1226940650 (ToggleExtraGroup_t3698203147 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsProvider/ToggleExtraGroup::TryLoadSettings(System.String,System.String,System.Int32,System.Int32)
extern "C"  bool ToggleExtraGroup_TryLoadSettings_m22212632 (ToggleExtraGroup_t3698203147 * __this, String_t* ___title0, String_t* ___settings1, int32_t ___index2, int32_t ___contentSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
