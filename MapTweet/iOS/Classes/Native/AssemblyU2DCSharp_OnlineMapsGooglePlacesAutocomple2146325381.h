﻿#pragma once

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

// OnlineMapsGooglePlacesAutocompleteResult/Term
struct  Term_t2146325381  : public Il2CppObject
{
public:
	// System.String OnlineMapsGooglePlacesAutocompleteResult/Term::value
	String_t* ___value_0;
	// System.Int32 OnlineMapsGooglePlacesAutocompleteResult/Term::offset
	int32_t ___offset_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Term_t2146325381, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier(&___value_0, value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(Term_t2146325381, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
