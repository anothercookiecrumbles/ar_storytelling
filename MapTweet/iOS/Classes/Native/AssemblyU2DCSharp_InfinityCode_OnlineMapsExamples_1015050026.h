#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.DetectWaterByTextureExample
struct  DetectWaterByTextureExample_t1015050026  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D InfinityCode.OnlineMapsExamples.DetectWaterByTextureExample::mapForDetectWater
	Texture2D_t3542995729 * ___mapForDetectWater_3;

public:
	inline static int32_t get_offset_of_mapForDetectWater_3() { return static_cast<int32_t>(offsetof(DetectWaterByTextureExample_t1015050026, ___mapForDetectWater_3)); }
	inline Texture2D_t3542995729 * get_mapForDetectWater_3() const { return ___mapForDetectWater_3; }
	inline Texture2D_t3542995729 ** get_address_of_mapForDetectWater_3() { return &___mapForDetectWater_3; }
	inline void set_mapForDetectWater_3(Texture2D_t3542995729 * value)
	{
		___mapForDetectWater_3 = value;
		Il2CppCodeGenWriteBarrier(&___mapForDetectWater_3, value);
	}
};

struct DetectWaterByTextureExample_t1015050026_StaticFields
{
public:
	// UnityEngine.Color32 InfinityCode.OnlineMapsExamples.DetectWaterByTextureExample::waterColor
	Color32_t874517518  ___waterColor_2;

public:
	inline static int32_t get_offset_of_waterColor_2() { return static_cast<int32_t>(offsetof(DetectWaterByTextureExample_t1015050026_StaticFields, ___waterColor_2)); }
	inline Color32_t874517518  get_waterColor_2() const { return ___waterColor_2; }
	inline Color32_t874517518 * get_address_of_waterColor_2() { return &___waterColor_2; }
	inline void set_waterColor_2(Color32_t874517518  value)
	{
		___waterColor_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
