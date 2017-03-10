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
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirectionsResult/NameLocation
struct  NameLocation_t3892601953  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult/NameLocation::name
	String_t* ___name_0;
	// UnityEngine.Vector2 OnlineMapsGoogleDirectionsResult/NameLocation::location
	Vector2_t2243707579  ___location_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameLocation_t3892601953, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_location_1() { return static_cast<int32_t>(offsetof(NameLocation_t3892601953, ___location_1)); }
	inline Vector2_t2243707579  get_location_1() const { return ___location_1; }
	inline Vector2_t2243707579 * get_address_of_location_1() { return &___location_1; }
	inline void set_location_1(Vector2_t2243707579  value)
	{
		___location_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
