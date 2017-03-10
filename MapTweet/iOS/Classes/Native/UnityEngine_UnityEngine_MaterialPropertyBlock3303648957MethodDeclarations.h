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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"

// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
extern "C"  void MaterialPropertyBlock__ctor_m4079790842 (MaterialPropertyBlock_t3303648957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::InitBlock()
extern "C"  void MaterialPropertyBlock_InitBlock_m3262857359 (MaterialPropertyBlock_t3303648957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::DestroyBlock()
extern "C"  void MaterialPropertyBlock_DestroyBlock_m620634255 (MaterialPropertyBlock_t3303648957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::Finalize()
extern "C"  void MaterialPropertyBlock_Finalize_m671672866 (MaterialPropertyBlock_t3303648957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void MaterialPropertyBlock_SetTexture_m1924948531 (MaterialPropertyBlock_t3303648957 * __this, String_t* ___name0, Texture_t2243626319 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void MaterialPropertyBlock_SetTexture_m792019488 (MaterialPropertyBlock_t3303648957 * __this, int32_t ___nameID0, Texture_t2243626319 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
