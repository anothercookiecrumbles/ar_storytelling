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

// OnlineMapsGoogleRoads/SpeedLimitResult
struct  SpeedLimitResult_t181656080  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleRoads/SpeedLimitResult::placeId
	String_t* ___placeId_0;
	// System.Int32 OnlineMapsGoogleRoads/SpeedLimitResult::speedLimit
	int32_t ___speedLimit_1;
	// System.String OnlineMapsGoogleRoads/SpeedLimitResult::units
	String_t* ___units_2;

public:
	inline static int32_t get_offset_of_placeId_0() { return static_cast<int32_t>(offsetof(SpeedLimitResult_t181656080, ___placeId_0)); }
	inline String_t* get_placeId_0() const { return ___placeId_0; }
	inline String_t** get_address_of_placeId_0() { return &___placeId_0; }
	inline void set_placeId_0(String_t* value)
	{
		___placeId_0 = value;
		Il2CppCodeGenWriteBarrier(&___placeId_0, value);
	}

	inline static int32_t get_offset_of_speedLimit_1() { return static_cast<int32_t>(offsetof(SpeedLimitResult_t181656080, ___speedLimit_1)); }
	inline int32_t get_speedLimit_1() const { return ___speedLimit_1; }
	inline int32_t* get_address_of_speedLimit_1() { return &___speedLimit_1; }
	inline void set_speedLimit_1(int32_t value)
	{
		___speedLimit_1 = value;
	}

	inline static int32_t get_offset_of_units_2() { return static_cast<int32_t>(offsetof(SpeedLimitResult_t181656080, ___units_2)); }
	inline String_t* get_units_2() const { return ___units_2; }
	inline String_t** get_address_of_units_2() { return &___units_2; }
	inline void set_units_2(String_t* value)
	{
		___units_2 = value;
		Il2CppCodeGenWriteBarrier(&___units_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
