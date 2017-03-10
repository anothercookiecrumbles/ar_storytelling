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

// OnlineMapsAMapSearch/AroundParams
struct AroundParams_t3993251837;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsAMapSearch/AroundParams::.ctor(System.String,System.Double,System.Double)
extern "C"  void AroundParams__ctor_m1157510328 (AroundParams_t3993251837 * __this, String_t* ___key0, double ___longitude1, double ___latitude2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsAMapSearch/AroundParams::get_baseurl()
extern "C"  String_t* AroundParams_get_baseurl_m2557106510 (AroundParams_t3993251837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsAMapSearch/AroundParams::GenerateURL(System.Text.StringBuilder)
extern "C"  void AroundParams_GenerateURL_m3079168472 (AroundParams_t3993251837 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
