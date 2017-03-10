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

// OnlineMapsGoogleDirectionsResult/TransitAgency
struct  TransitAgency_t68236511  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult/TransitAgency::name
	String_t* ___name_0;
	// System.String OnlineMapsGoogleDirectionsResult/TransitAgency::url
	String_t* ___url_1;
	// System.String OnlineMapsGoogleDirectionsResult/TransitAgency::phone
	String_t* ___phone_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TransitAgency_t68236511, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(TransitAgency_t68236511, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier(&___url_1, value);
	}

	inline static int32_t get_offset_of_phone_2() { return static_cast<int32_t>(offsetof(TransitAgency_t68236511, ___phone_2)); }
	inline String_t* get_phone_2() const { return ___phone_2; }
	inline String_t** get_address_of_phone_2() { return &___phone_2; }
	inline void set_phone_2(String_t* value)
	{
		___phone_2 = value;
		Il2CppCodeGenWriteBarrier(&___phone_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
