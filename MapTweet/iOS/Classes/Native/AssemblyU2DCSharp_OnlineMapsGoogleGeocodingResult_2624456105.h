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

// OnlineMapsGoogleGeocodingResult/AddressComponent
struct  AddressComponent_t2624456105  : public Il2CppObject
{
public:
	// System.String[] OnlineMapsGoogleGeocodingResult/AddressComponent::types
	StringU5BU5D_t1642385972* ___types_0;
	// System.String OnlineMapsGoogleGeocodingResult/AddressComponent::long_name
	String_t* ___long_name_1;
	// System.String OnlineMapsGoogleGeocodingResult/AddressComponent::short_name
	String_t* ___short_name_2;

public:
	inline static int32_t get_offset_of_types_0() { return static_cast<int32_t>(offsetof(AddressComponent_t2624456105, ___types_0)); }
	inline StringU5BU5D_t1642385972* get_types_0() const { return ___types_0; }
	inline StringU5BU5D_t1642385972** get_address_of_types_0() { return &___types_0; }
	inline void set_types_0(StringU5BU5D_t1642385972* value)
	{
		___types_0 = value;
		Il2CppCodeGenWriteBarrier(&___types_0, value);
	}

	inline static int32_t get_offset_of_long_name_1() { return static_cast<int32_t>(offsetof(AddressComponent_t2624456105, ___long_name_1)); }
	inline String_t* get_long_name_1() const { return ___long_name_1; }
	inline String_t** get_address_of_long_name_1() { return &___long_name_1; }
	inline void set_long_name_1(String_t* value)
	{
		___long_name_1 = value;
		Il2CppCodeGenWriteBarrier(&___long_name_1, value);
	}

	inline static int32_t get_offset_of_short_name_2() { return static_cast<int32_t>(offsetof(AddressComponent_t2624456105, ___short_name_2)); }
	inline String_t* get_short_name_2() const { return ___short_name_2; }
	inline String_t** get_address_of_short_name_2() { return &___short_name_2; }
	inline void set_short_name_2(String_t* value)
	{
		___short_name_2 = value;
		Il2CppCodeGenWriteBarrier(&___short_name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
