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

// InfinityCode.OnlineMapsExamples.ChangeMapTextureExample
struct  ChangeMapTextureExample_t177156729  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D InfinityCode.OnlineMapsExamples.ChangeMapTextureExample::texture1
	Texture2D_t3542995729 * ___texture1_2;
	// UnityEngine.Texture2D InfinityCode.OnlineMapsExamples.ChangeMapTextureExample::texture2
	Texture2D_t3542995729 * ___texture2_3;

public:
	inline static int32_t get_offset_of_texture1_2() { return static_cast<int32_t>(offsetof(ChangeMapTextureExample_t177156729, ___texture1_2)); }
	inline Texture2D_t3542995729 * get_texture1_2() const { return ___texture1_2; }
	inline Texture2D_t3542995729 ** get_address_of_texture1_2() { return &___texture1_2; }
	inline void set_texture1_2(Texture2D_t3542995729 * value)
	{
		___texture1_2 = value;
		Il2CppCodeGenWriteBarrier(&___texture1_2, value);
	}

	inline static int32_t get_offset_of_texture2_3() { return static_cast<int32_t>(offsetof(ChangeMapTextureExample_t177156729, ___texture2_3)); }
	inline Texture2D_t3542995729 * get_texture2_3() const { return ___texture2_3; }
	inline Texture2D_t3542995729 ** get_address_of_texture2_3() { return &___texture2_3; }
	inline void set_texture2_3(Texture2D_t3542995729 * value)
	{
		___texture2_3 = value;
		Il2CppCodeGenWriteBarrier(&___texture2_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
