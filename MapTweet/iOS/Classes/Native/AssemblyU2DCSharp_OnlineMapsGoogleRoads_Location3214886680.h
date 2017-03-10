#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleRoads/Location
struct  Location_t3214886680  : public Il2CppObject
{
public:
	// System.Double OnlineMapsGoogleRoads/Location::longitude
	double ___longitude_0;
	// System.Double OnlineMapsGoogleRoads/Location::latitude
	double ___latitude_1;

public:
	inline static int32_t get_offset_of_longitude_0() { return static_cast<int32_t>(offsetof(Location_t3214886680, ___longitude_0)); }
	inline double get_longitude_0() const { return ___longitude_0; }
	inline double* get_address_of_longitude_0() { return &___longitude_0; }
	inline void set_longitude_0(double value)
	{
		___longitude_0 = value;
	}

	inline static int32_t get_offset_of_latitude_1() { return static_cast<int32_t>(offsetof(Location_t3214886680, ___latitude_1)); }
	inline double get_latitude_1() const { return ___latitude_1; }
	inline double* get_address_of_latitude_1() { return &___latitude_1; }
	inline void set_latitude_1(double value)
	{
		___latitude_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
