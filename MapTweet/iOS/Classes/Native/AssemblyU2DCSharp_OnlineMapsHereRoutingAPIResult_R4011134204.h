#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/Summary
struct  Summary_t4011134204  : public Il2CppObject
{
public:
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Summary::distance
	double ___distance_0;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Summary::trafficTime
	double ___trafficTime_1;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Summary::baseTime
	double ___baseTime_2;
	// System.String[] OnlineMapsHereRoutingAPIResult/Route/Summary::flags
	StringU5BU5D_t1642385972* ___flags_3;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Summary::travelTime
	double ___travelTime_4;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Summary::text
	String_t* ___text_5;
	// System.Int32 OnlineMapsHereRoutingAPIResult/Route/Summary::costFactor
	int32_t ___costFactor_6;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Summary::co2Emission
	double ___co2Emission_7;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Summary::departure
	String_t* ___departure_8;

public:
	inline static int32_t get_offset_of_distance_0() { return static_cast<int32_t>(offsetof(Summary_t4011134204, ___distance_0)); }
	inline double get_distance_0() const { return ___distance_0; }
	inline double* get_address_of_distance_0() { return &___distance_0; }
	inline void set_distance_0(double value)
	{
		___distance_0 = value;
	}

	inline static int32_t get_offset_of_trafficTime_1() { return static_cast<int32_t>(offsetof(Summary_t4011134204, ___trafficTime_1)); }
	inline double get_trafficTime_1() const { return ___trafficTime_1; }
	inline double* get_address_of_trafficTime_1() { return &___trafficTime_1; }
	inline void set_trafficTime_1(double value)
	{
		___trafficTime_1 = value;
	}

	inline static int32_t get_offset_of_baseTime_2() { return static_cast<int32_t>(offsetof(Summary_t4011134204, ___baseTime_2)); }
	inline double get_baseTime_2() const { return ___baseTime_2; }
	inline double* get_address_of_baseTime_2() { return &___baseTime_2; }
	inline void set_baseTime_2(double value)
	{
		___baseTime_2 = value;
	}

	inline static int32_t get_offset_of_flags_3() { return static_cast<int32_t>(offsetof(Summary_t4011134204, ___flags_3)); }
	inline StringU5BU5D_t1642385972* get_flags_3() const { return ___flags_3; }
	inline StringU5BU5D_t1642385972** get_address_of_flags_3() { return &___flags_3; }
	inline void set_flags_3(StringU5BU5D_t1642385972* value)
	{
		___flags_3 = value;
		Il2CppCodeGenWriteBarrier(&___flags_3, value);
	}

	inline static int32_t get_offset_of_travelTime_4() { return static_cast<int32_t>(offsetof(Summary_t4011134204, ___travelTime_4)); }
	inline double get_travelTime_4() const { return ___travelTime_4; }
	inline double* get_address_of_travelTime_4() { return &___travelTime_4; }
	inline void set_travelTime_4(double value)
	{
		___travelTime_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(Summary_t4011134204, ___text_5)); }
	inline String_t* get_text_5() const { return ___text_5; }
	inline String_t** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(String_t* value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier(&___text_5, value);
	}

	inline static int32_t get_offset_of_costFactor_6() { return static_cast<int32_t>(offsetof(Summary_t4011134204, ___costFactor_6)); }
	inline int32_t get_costFactor_6() const { return ___costFactor_6; }
	inline int32_t* get_address_of_costFactor_6() { return &___costFactor_6; }
	inline void set_costFactor_6(int32_t value)
	{
		___costFactor_6 = value;
	}

	inline static int32_t get_offset_of_co2Emission_7() { return static_cast<int32_t>(offsetof(Summary_t4011134204, ___co2Emission_7)); }
	inline double get_co2Emission_7() const { return ___co2Emission_7; }
	inline double* get_address_of_co2Emission_7() { return &___co2Emission_7; }
	inline void set_co2Emission_7(double value)
	{
		___co2Emission_7 = value;
	}

	inline static int32_t get_offset_of_departure_8() { return static_cast<int32_t>(offsetof(Summary_t4011134204, ___departure_8)); }
	inline String_t* get_departure_8() const { return ___departure_8; }
	inline String_t** get_address_of_departure_8() { return &___departure_8; }
	inline void set_departure_8(String_t* value)
	{
		___departure_8 = value;
		Il2CppCodeGenWriteBarrier(&___departure_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
