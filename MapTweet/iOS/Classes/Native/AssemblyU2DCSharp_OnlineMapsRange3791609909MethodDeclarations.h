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

// OnlineMapsRange
struct OnlineMapsRange_t3791609909;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void OnlineMapsRange::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void OnlineMapsRange__ctor_m1280198230 (OnlineMapsRange_t3791609909 * __this, int32_t ___min0, int32_t ___max1, int32_t ___minLimit2, int32_t ___maxLimit3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsRange::CheckAndFix(System.Int32)
extern "C"  int32_t OnlineMapsRange_CheckAndFix_m4209323929 (OnlineMapsRange_t3791609909 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsRange::FixZeroRange()
extern "C"  void OnlineMapsRange_FixZeroRange_m3530668076 (OnlineMapsRange_t3791609909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsRange::InRange(System.Int32)
extern "C"  bool OnlineMapsRange_InRange_m2760083081 (OnlineMapsRange_t3791609909 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsRange::ToString()
extern "C"  String_t* OnlineMapsRange_ToString_m977744635 (OnlineMapsRange_t3791609909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsRange::Update(System.Int32,System.Int32)
extern "C"  bool OnlineMapsRange_Update_m3389231009 (OnlineMapsRange_t3791609909 * __this, int32_t ___newMin0, int32_t ___newMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
