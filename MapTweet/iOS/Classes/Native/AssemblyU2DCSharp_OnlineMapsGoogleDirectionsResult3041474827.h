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

// OnlineMapsGoogleDirectionsResult/Fare
struct  Fare_t3041474827  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult/Fare::currency
	String_t* ___currency_0;
	// System.Double OnlineMapsGoogleDirectionsResult/Fare::value
	double ___value_1;
	// System.String OnlineMapsGoogleDirectionsResult/Fare::text
	String_t* ___text_2;

public:
	inline static int32_t get_offset_of_currency_0() { return static_cast<int32_t>(offsetof(Fare_t3041474827, ___currency_0)); }
	inline String_t* get_currency_0() const { return ___currency_0; }
	inline String_t** get_address_of_currency_0() { return &___currency_0; }
	inline void set_currency_0(String_t* value)
	{
		___currency_0 = value;
		Il2CppCodeGenWriteBarrier(&___currency_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Fare_t3041474827, ___value_1)); }
	inline double get_value_1() const { return ___value_1; }
	inline double* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(double value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Fare_t3041474827, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
