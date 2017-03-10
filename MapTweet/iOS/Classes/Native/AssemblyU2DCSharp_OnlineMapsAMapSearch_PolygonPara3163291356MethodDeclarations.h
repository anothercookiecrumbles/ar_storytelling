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

// OnlineMapsAMapSearch/PolygonParams
struct PolygonParams_t3163291356;
// System.String
struct String_t;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsAMapSearch/PolygonParams::.ctor(System.String,System.Double[])
extern "C"  void PolygonParams__ctor_m172611549 (PolygonParams_t3163291356 * __this, String_t* ___key0, DoubleU5BU5D_t1889952540* ___polygon1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsAMapSearch/PolygonParams::get_baseurl()
extern "C"  String_t* PolygonParams_get_baseurl_m1540131453 (PolygonParams_t3163291356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsAMapSearch/PolygonParams::GenerateURL(System.Text.StringBuilder)
extern "C"  void PolygonParams_GenerateURL_m1080714131 (PolygonParams_t3163291356 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
