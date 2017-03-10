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

// OnlineMapsAMapSearch/TextParams
struct TextParams_t163374199;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsAMapSearch/TextParams::.ctor(System.String)
extern "C"  void TextParams__ctor_m1813076170 (TextParams_t163374199 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsAMapSearch/TextParams::get_baseurl()
extern "C"  String_t* TextParams_get_baseurl_m707172852 (TextParams_t163374199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsAMapSearch/TextParams::GenerateURL(System.Text.StringBuilder)
extern "C"  void TextParams_GenerateURL_m1736698802 (TextParams_t163374199 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
