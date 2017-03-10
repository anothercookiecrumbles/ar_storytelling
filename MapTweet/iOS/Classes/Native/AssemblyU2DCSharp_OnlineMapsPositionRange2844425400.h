#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsPositionRangeType3691382528.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsPositionRange
struct  OnlineMapsPositionRange_t2844425400  : public Il2CppObject
{
public:
	// System.Single OnlineMapsPositionRange::minLat
	float ___minLat_0;
	// System.Single OnlineMapsPositionRange::minLng
	float ___minLng_1;
	// System.Single OnlineMapsPositionRange::maxLat
	float ___maxLat_2;
	// System.Single OnlineMapsPositionRange::maxLng
	float ___maxLng_3;
	// OnlineMapsPositionRangeType OnlineMapsPositionRange::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_minLat_0() { return static_cast<int32_t>(offsetof(OnlineMapsPositionRange_t2844425400, ___minLat_0)); }
	inline float get_minLat_0() const { return ___minLat_0; }
	inline float* get_address_of_minLat_0() { return &___minLat_0; }
	inline void set_minLat_0(float value)
	{
		___minLat_0 = value;
	}

	inline static int32_t get_offset_of_minLng_1() { return static_cast<int32_t>(offsetof(OnlineMapsPositionRange_t2844425400, ___minLng_1)); }
	inline float get_minLng_1() const { return ___minLng_1; }
	inline float* get_address_of_minLng_1() { return &___minLng_1; }
	inline void set_minLng_1(float value)
	{
		___minLng_1 = value;
	}

	inline static int32_t get_offset_of_maxLat_2() { return static_cast<int32_t>(offsetof(OnlineMapsPositionRange_t2844425400, ___maxLat_2)); }
	inline float get_maxLat_2() const { return ___maxLat_2; }
	inline float* get_address_of_maxLat_2() { return &___maxLat_2; }
	inline void set_maxLat_2(float value)
	{
		___maxLat_2 = value;
	}

	inline static int32_t get_offset_of_maxLng_3() { return static_cast<int32_t>(offsetof(OnlineMapsPositionRange_t2844425400, ___maxLng_3)); }
	inline float get_maxLng_3() const { return ___maxLng_3; }
	inline float* get_address_of_maxLng_3() { return &___maxLng_3; }
	inline void set_maxLng_3(float value)
	{
		___maxLng_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(OnlineMapsPositionRange_t2844425400, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
