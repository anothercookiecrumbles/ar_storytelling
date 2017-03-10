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

// OnlineMapsQQSearchResult/Location
struct  Location_t1652199295  : public Il2CppObject
{
public:
	// System.Double OnlineMapsQQSearchResult/Location::lat
	double ___lat_0;
	// System.Double OnlineMapsQQSearchResult/Location::lng
	double ___lng_1;

public:
	inline static int32_t get_offset_of_lat_0() { return static_cast<int32_t>(offsetof(Location_t1652199295, ___lat_0)); }
	inline double get_lat_0() const { return ___lat_0; }
	inline double* get_address_of_lat_0() { return &___lat_0; }
	inline void set_lat_0(double value)
	{
		___lat_0 = value;
	}

	inline static int32_t get_offset_of_lng_1() { return static_cast<int32_t>(offsetof(Location_t1652199295, ___lng_1)); }
	inline double get_lng_1() const { return ___lng_1; }
	inline double* get_address_of_lng_1() { return &___lng_1; }
	inline void set_lng_1(double value)
	{
		___lng_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
