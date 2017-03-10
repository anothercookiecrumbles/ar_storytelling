#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsLocationService/LastPositionItem
struct  LastPositionItem_t527530455 
{
public:
	// System.Single OnlineMapsLocationService/LastPositionItem::lat
	float ___lat_0;
	// System.Single OnlineMapsLocationService/LastPositionItem::lng
	float ___lng_1;
	// System.Double OnlineMapsLocationService/LastPositionItem::timestamp
	double ___timestamp_2;

public:
	inline static int32_t get_offset_of_lat_0() { return static_cast<int32_t>(offsetof(LastPositionItem_t527530455, ___lat_0)); }
	inline float get_lat_0() const { return ___lat_0; }
	inline float* get_address_of_lat_0() { return &___lat_0; }
	inline void set_lat_0(float value)
	{
		___lat_0 = value;
	}

	inline static int32_t get_offset_of_lng_1() { return static_cast<int32_t>(offsetof(LastPositionItem_t527530455, ___lng_1)); }
	inline float get_lng_1() const { return ___lng_1; }
	inline float* get_address_of_lng_1() { return &___lng_1; }
	inline void set_lng_1(float value)
	{
		___lng_1 = value;
	}

	inline static int32_t get_offset_of_timestamp_2() { return static_cast<int32_t>(offsetof(LastPositionItem_t527530455, ___timestamp_2)); }
	inline double get_timestamp_2() const { return ___timestamp_2; }
	inline double* get_address_of_timestamp_2() { return &___timestamp_2; }
	inline void set_timestamp_2(double value)
	{
		___timestamp_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
