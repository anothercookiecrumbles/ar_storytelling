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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/Maneuver/RoadShield
struct  RoadShield_t1027223199  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver/RoadShield::region
	String_t* ___region_0;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver/RoadShield::category
	String_t* ___category_1;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver/RoadShield::label
	String_t* ___label_2;

public:
	inline static int32_t get_offset_of_region_0() { return static_cast<int32_t>(offsetof(RoadShield_t1027223199, ___region_0)); }
	inline String_t* get_region_0() const { return ___region_0; }
	inline String_t** get_address_of_region_0() { return &___region_0; }
	inline void set_region_0(String_t* value)
	{
		___region_0 = value;
		Il2CppCodeGenWriteBarrier(&___region_0, value);
	}

	inline static int32_t get_offset_of_category_1() { return static_cast<int32_t>(offsetof(RoadShield_t1027223199, ___category_1)); }
	inline String_t* get_category_1() const { return ___category_1; }
	inline String_t** get_address_of_category_1() { return &___category_1; }
	inline void set_category_1(String_t* value)
	{
		___category_1 = value;
		Il2CppCodeGenWriteBarrier(&___category_1, value);
	}

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(RoadShield_t1027223199, ___label_2)); }
	inline String_t* get_label_2() const { return ___label_2; }
	inline String_t** get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(String_t* value)
	{
		___label_2 = value;
		Il2CppCodeGenWriteBarrier(&___label_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
