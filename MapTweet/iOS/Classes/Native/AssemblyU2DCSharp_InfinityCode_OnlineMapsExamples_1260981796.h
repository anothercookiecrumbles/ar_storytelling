#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMaps
struct OnlineMaps_t1893290312;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.ChangePositionUsingGyro
struct  ChangePositionUsingGyro_t1260981796  : public MonoBehaviour_t1158329972
{
public:
	// System.Single InfinityCode.OnlineMapsExamples.ChangePositionUsingGyro::speed
	float ___speed_2;
	// System.Boolean InfinityCode.OnlineMapsExamples.ChangePositionUsingGyro::allowDrag
	bool ___allowDrag_3;
	// OnlineMaps InfinityCode.OnlineMapsExamples.ChangePositionUsingGyro::map
	OnlineMaps_t1893290312 * ___map_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ChangePositionUsingGyro_t1260981796, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_allowDrag_3() { return static_cast<int32_t>(offsetof(ChangePositionUsingGyro_t1260981796, ___allowDrag_3)); }
	inline bool get_allowDrag_3() const { return ___allowDrag_3; }
	inline bool* get_address_of_allowDrag_3() { return &___allowDrag_3; }
	inline void set_allowDrag_3(bool value)
	{
		___allowDrag_3 = value;
	}

	inline static int32_t get_offset_of_map_4() { return static_cast<int32_t>(offsetof(ChangePositionUsingGyro_t1260981796, ___map_4)); }
	inline OnlineMaps_t1893290312 * get_map_4() const { return ___map_4; }
	inline OnlineMaps_t1893290312 ** get_address_of_map_4() { return &___map_4; }
	inline void set_map_4(OnlineMaps_t1893290312 * value)
	{
		___map_4 = value;
		Il2CppCodeGenWriteBarrier(&___map_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
