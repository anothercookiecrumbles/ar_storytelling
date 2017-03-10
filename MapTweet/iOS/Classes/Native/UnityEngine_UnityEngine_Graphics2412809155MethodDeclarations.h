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

// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_RenderBuffer2767087968.h"
#include "UnityEngine_UnityEngine_CubemapFace1725775554.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C"  void Graphics_DrawMeshNow_m150453421 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow2_m2841272972 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003  ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m434064341 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Matrix4x4_t2933234003 * ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
extern "C"  int32_t Graphics_Internal_GetMaxDrawMeshInstanceCount_m3046083541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_Internal_SetRTSimple_m1052203585 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2767087968 * ___color0, RenderBuffer_t2767087968 * ___depth1, int32_t ___mip2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_SetRenderTargetImpl_m2993156656 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2767087968  ___colorBuffer0, RenderBuffer_t2767087968  ___depthBuffer1, int32_t ___mipLevel2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer)
extern "C"  void Graphics_SetRenderTarget_m3373863973 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2767087968  ___colorBuffer0, RenderBuffer_t2767087968  ___depthBuffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::.cctor()
extern "C"  void Graphics__cctor_m3711221683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
