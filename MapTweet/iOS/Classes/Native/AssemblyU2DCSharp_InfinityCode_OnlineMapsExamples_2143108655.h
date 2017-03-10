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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.ChangeMarkerTextureExample
struct  ChangeMarkerTextureExample_t2143108655  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D InfinityCode.OnlineMapsExamples.ChangeMarkerTextureExample::newMarkerTexture
	Texture2D_t3542995729 * ___newMarkerTexture_2;

public:
	inline static int32_t get_offset_of_newMarkerTexture_2() { return static_cast<int32_t>(offsetof(ChangeMarkerTextureExample_t2143108655, ___newMarkerTexture_2)); }
	inline Texture2D_t3542995729 * get_newMarkerTexture_2() const { return ___newMarkerTexture_2; }
	inline Texture2D_t3542995729 ** get_address_of_newMarkerTexture_2() { return &___newMarkerTexture_2; }
	inline void set_newMarkerTexture_2(Texture2D_t3542995729 * value)
	{
		___newMarkerTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___newMarkerTexture_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
