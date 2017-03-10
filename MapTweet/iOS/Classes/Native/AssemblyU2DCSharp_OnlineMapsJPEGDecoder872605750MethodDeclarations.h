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

// OnlineMapsJPEGDecoder
struct OnlineMapsJPEGDecoder_t872605750;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// OnlineMapsJPEGDecoder/Component
struct Component_t3519836246;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// OnlineMapsJPEGDecoder/Code[]
struct CodeU5BU5D_t4050074539;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsJPEGDecoder_Component3519836246.h"
#include "AssemblyU2DCSharp_OnlineMapsJPEGDecoder_JPEGResult4270095944.h"

// System.Void OnlineMapsJPEGDecoder::.ctor()
extern "C"  void OnlineMapsJPEGDecoder__ctor_m1055643937 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::ByteAlign()
extern "C"  void OnlineMapsJPEGDecoder_ByteAlign_m2622774962 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::ColIDCT(System.Int32[],System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void OnlineMapsJPEGDecoder_ColIDCT_m3696870940 (OnlineMapsJPEGDecoder_t872605750 * __this, Int32U5BU5D_t3030399641* ___blk0, int32_t ___coef1, ByteU5BU5D_t3397334013* ___pixels2, int32_t ___outv3, int32_t ___stride4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::Convert()
extern "C"  void OnlineMapsJPEGDecoder_Convert_m326374314 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::Decode(System.Byte[])
extern "C"  void OnlineMapsJPEGDecoder_Decode_m2566875046 (OnlineMapsJPEGDecoder_t872605750 * __this, ByteU5BU5D_t3397334013* ___jpeg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 OnlineMapsJPEGDecoder::Decode16(System.Int32)
extern "C"  uint16_t OnlineMapsJPEGDecoder_Decode16_m483350856 (OnlineMapsJPEGDecoder_t872605750 * __this, int32_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::DecodeBlock(OnlineMapsJPEGDecoder/Component,System.Int32)
extern "C"  void OnlineMapsJPEGDecoder_DecodeBlock_m3064434863 (OnlineMapsJPEGDecoder_t872605750 * __this, Component_t3519836246 * ___c0, int32_t ___outv1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::DecodeDHT()
extern "C"  void OnlineMapsJPEGDecoder_DecodeDHT_m3221375953 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::DecodeDQT()
extern "C"  void OnlineMapsJPEGDecoder_DecodeDQT_m3221376826 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::DecodeDRI()
extern "C"  void OnlineMapsJPEGDecoder_DecodeDRI_m3228024878 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::DecodeLength()
extern "C"  void OnlineMapsJPEGDecoder_DecodeLength_m3276809525 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::DecodeScan()
extern "C"  void OnlineMapsJPEGDecoder_DecodeScan_m1909894886 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::DecodeSOF()
extern "C"  void OnlineMapsJPEGDecoder_DecodeSOF_m4128511779 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsJPEGDecoder::GetBits(System.Int32)
extern "C"  int32_t OnlineMapsJPEGDecoder_GetBits_m1747292466 (OnlineMapsJPEGDecoder_t872605750 * __this, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] OnlineMapsJPEGDecoder::GetColors(System.Byte[])
extern "C"  Color32U5BU5D_t30278651* OnlineMapsJPEGDecoder_GetColors_m3511986808 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsJPEGDecoder::GetVLC(OnlineMapsJPEGDecoder/Code[],System.Byte&)
extern "C"  int32_t OnlineMapsJPEGDecoder_GetVLC_m3649729209 (OnlineMapsJPEGDecoder_t872605750 * __this, CodeU5BU5D_t4050074539* ___vlc0, uint8_t* ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::RowIDCT(System.Int32[],System.Int32)
extern "C"  void OnlineMapsJPEGDecoder_RowIDCT_m421931239 (OnlineMapsJPEGDecoder_t872605750 * __this, Int32U5BU5D_t3030399641* ___blk0, int32_t ___coef1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsJPEGDecoder::ShowBits(System.Int32)
extern "C"  int32_t OnlineMapsJPEGDecoder_ShowBits_m2532982617 (OnlineMapsJPEGDecoder_t872605750 * __this, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::Skip(System.Int32)
extern "C"  void OnlineMapsJPEGDecoder_Skip_m3000099341 (OnlineMapsJPEGDecoder_t872605750 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::SkipBits(System.Int32)
extern "C"  void OnlineMapsJPEGDecoder_SkipBits_m3037075981 (OnlineMapsJPEGDecoder_t872605750 * __this, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::SkipMarker()
extern "C"  void OnlineMapsJPEGDecoder_SkipMarker_m3326566204 (OnlineMapsJPEGDecoder_t872605750 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::Throw(OnlineMapsJPEGDecoder/JPEGResult)
extern "C"  void OnlineMapsJPEGDecoder_Throw_m3133908871 (OnlineMapsJPEGDecoder_t872605750 * __this, int32_t ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::UpsampleH(OnlineMapsJPEGDecoder/Component)
extern "C"  void OnlineMapsJPEGDecoder_UpsampleH_m1657227912 (OnlineMapsJPEGDecoder_t872605750 * __this, Component_t3519836246 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::UpsampleV(OnlineMapsJPEGDecoder/Component)
extern "C"  void OnlineMapsJPEGDecoder_UpsampleV_m1915793342 (OnlineMapsJPEGDecoder_t872605750 * __this, Component_t3519836246 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsJPEGDecoder::.cctor()
extern "C"  void OnlineMapsJPEGDecoder__cctor_m352074272 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
