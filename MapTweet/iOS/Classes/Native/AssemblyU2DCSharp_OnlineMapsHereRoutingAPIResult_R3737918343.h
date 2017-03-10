#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_OnlineMapsHereRoutingAPIResult_R4011134204.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/SummaryByCountry
struct  SummaryByCountry_t3737918343  : public Summary_t4011134204
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/SummaryByCountry::country
	String_t* ___country_9;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/SummaryByCountry::tollRoadDistance
	double ___tollRoadDistance_10;

public:
	inline static int32_t get_offset_of_country_9() { return static_cast<int32_t>(offsetof(SummaryByCountry_t3737918343, ___country_9)); }
	inline String_t* get_country_9() const { return ___country_9; }
	inline String_t** get_address_of_country_9() { return &___country_9; }
	inline void set_country_9(String_t* value)
	{
		___country_9 = value;
		Il2CppCodeGenWriteBarrier(&___country_9, value);
	}

	inline static int32_t get_offset_of_tollRoadDistance_10() { return static_cast<int32_t>(offsetof(SummaryByCountry_t3737918343, ___tollRoadDistance_10)); }
	inline double get_tollRoadDistance_10() const { return ___tollRoadDistance_10; }
	inline double* get_address_of_tollRoadDistance_10() { return &___tollRoadDistance_10; }
	inline void set_tollRoadDistance_10(double value)
	{
		___tollRoadDistance_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
