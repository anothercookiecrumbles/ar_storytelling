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

// OnlineMapsGoogleDirectionsResult/ViaWaypoint
struct  ViaWaypoint_t3437876992  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 OnlineMapsGoogleDirectionsResult/ViaWaypoint::location
	Vector2_t2243707579  ___location_0;
	// System.Int32 OnlineMapsGoogleDirectionsResult/ViaWaypoint::step_index
	int32_t ___step_index_1;
	// System.Double OnlineMapsGoogleDirectionsResult/ViaWaypoint::step_interpolation
	double ___step_interpolation_2;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(ViaWaypoint_t3437876992, ___location_0)); }
	inline Vector2_t2243707579  get_location_0() const { return ___location_0; }
	inline Vector2_t2243707579 * get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(Vector2_t2243707579  value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_step_index_1() { return static_cast<int32_t>(offsetof(ViaWaypoint_t3437876992, ___step_index_1)); }
	inline int32_t get_step_index_1() const { return ___step_index_1; }
	inline int32_t* get_address_of_step_index_1() { return &___step_index_1; }
	inline void set_step_index_1(int32_t value)
	{
		___step_index_1 = value;
	}

	inline static int32_t get_offset_of_step_interpolation_2() { return static_cast<int32_t>(offsetof(ViaWaypoint_t3437876992, ___step_interpolation_2)); }
	inline double get_step_interpolation_2() const { return ___step_interpolation_2; }
	inline double* get_address_of_step_interpolation_2() { return &___step_interpolation_2; }
	inline void set_step_interpolation_2(double value)
	{
		___step_interpolation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
