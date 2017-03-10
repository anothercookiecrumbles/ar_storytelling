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

// ObbComparison
struct ObbComparison_t4173085576;
// Vuforia.WordResult
struct WordResult_t1915507197;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WordResult1915507197.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo3172429123.h"

// System.Void ObbComparison::.ctor()
extern "C"  void ObbComparison__ctor_m3922114721 (ObbComparison_t4173085576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObbComparison::Compare(Vuforia.WordResult,Vuforia.WordResult)
extern "C"  int32_t ObbComparison_Compare_m2801846046 (ObbComparison_t4173085576 * __this, WordResult_t1915507197 * ___x0, WordResult_t1915507197 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObbComparison::CompareX(Vuforia.OrientedBoundingBox,Vuforia.OrientedBoundingBox)
extern "C"  int32_t ObbComparison_CompareX_m4223516646 (Il2CppObject * __this /* static, unused */, OrientedBoundingBox_t3172429123  ___box10, OrientedBoundingBox_t3172429123  ___box21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObbComparison::CompareY(Vuforia.OrientedBoundingBox,Vuforia.OrientedBoundingBox)
extern "C"  int32_t ObbComparison_CompareY_m3999683713 (Il2CppObject * __this /* static, unused */, OrientedBoundingBox_t3172429123  ___box10, OrientedBoundingBox_t3172429123  ___box21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
