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
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirectionsResult/TextValueZone`1<System.Object>
struct  TextValueZone_1_t2775605422  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult/TextValueZone`1::text
	String_t* ___text_0;
	// T OnlineMapsGoogleDirectionsResult/TextValueZone`1::value
	Il2CppObject * ___value_1;
	// System.String OnlineMapsGoogleDirectionsResult/TextValueZone`1::time_zone
	String_t* ___time_zone_2;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(TextValueZone_1_t2775605422, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier(&___text_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(TextValueZone_1_t2775605422, ___value_1)); }
	inline Il2CppObject * get_value_1() const { return ___value_1; }
	inline Il2CppObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}

	inline static int32_t get_offset_of_time_zone_2() { return static_cast<int32_t>(offsetof(TextValueZone_1_t2775605422, ___time_zone_2)); }
	inline String_t* get_time_zone_2() const { return ___time_zone_2; }
	inline String_t** get_address_of_time_zone_2() { return &___time_zone_2; }
	inline void set_time_zone_2(String_t* value)
	{
		___time_zone_2 = value;
		Il2CppCodeGenWriteBarrier(&___time_zone_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
