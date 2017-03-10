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

// OnlineMapsQQSearch/Params
struct Params_t4087323383;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void OnlineMapsQQSearch/Params::.ctor(System.String,System.Boolean,System.Nullable`1<System.Double>,System.Nullable`1<System.Double>)
extern "C"  void Params__ctor_m3614383999 (Params_t4087323383 * __this, String_t* ___region0, bool ___auto_extend1, Nullable_1_t2341081996  ___lng2, Nullable_1_t2341081996  ___lat3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsQQSearch/Params::.ctor(System.Double,System.Double,System.Int32)
extern "C"  void Params__ctor_m1386630007 (Params_t4087323383 * __this, double ___lng0, double ___lat1, int32_t ___radius2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsQQSearch/Params::.ctor(System.Double,System.Double,System.Double,System.Double)
extern "C"  void Params__ctor_m2373409014 (Params_t4087323383 * __this, double ___lng10, double ___lat11, double ___lng22, double ___lat23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsQQSearch/Params::AppendParams(System.Text.StringBuilder)
extern "C"  void Params_AppendParams_m1294458254 (Params_t4087323383 * __this, StringBuilder_t1221177846 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
