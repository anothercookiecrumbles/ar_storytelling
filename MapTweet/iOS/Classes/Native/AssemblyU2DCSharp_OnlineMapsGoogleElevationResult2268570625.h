#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleElevationResult
struct  OnlineMapsGoogleElevationResult_t2268570625  : public Il2CppObject
{
public:
	// System.Single OnlineMapsGoogleElevationResult::elevation
	float ___elevation_0;
	// UnityEngine.Vector2 OnlineMapsGoogleElevationResult::location
	Vector2_t2243707579  ___location_1;
	// System.Single OnlineMapsGoogleElevationResult::resolution
	float ___resolution_2;

public:
	inline static int32_t get_offset_of_elevation_0() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleElevationResult_t2268570625, ___elevation_0)); }
	inline float get_elevation_0() const { return ___elevation_0; }
	inline float* get_address_of_elevation_0() { return &___elevation_0; }
	inline void set_elevation_0(float value)
	{
		___elevation_0 = value;
	}

	inline static int32_t get_offset_of_location_1() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleElevationResult_t2268570625, ___location_1)); }
	inline Vector2_t2243707579  get_location_1() const { return ___location_1; }
	inline Vector2_t2243707579 * get_address_of_location_1() { return &___location_1; }
	inline void set_location_1(Vector2_t2243707579  value)
	{
		___location_1 = value;
	}

	inline static int32_t get_offset_of_resolution_2() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleElevationResult_t2268570625, ___resolution_2)); }
	inline float get_resolution_2() const { return ___resolution_2; }
	inline float* get_address_of_resolution_2() { return &___resolution_2; }
	inline void set_resolution_2(float value)
	{
		___resolution_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
