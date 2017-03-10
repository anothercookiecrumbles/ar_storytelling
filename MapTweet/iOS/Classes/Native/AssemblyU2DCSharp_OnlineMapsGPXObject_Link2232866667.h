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

// OnlineMapsGPXObject/Link
struct  Link_t2232866667  : public Il2CppObject
{
public:
	// System.String OnlineMapsGPXObject/Link::href
	String_t* ___href_0;
	// System.String OnlineMapsGPXObject/Link::text
	String_t* ___text_1;
	// System.String OnlineMapsGPXObject/Link::type
	String_t* ___type_2;

public:
	inline static int32_t get_offset_of_href_0() { return static_cast<int32_t>(offsetof(Link_t2232866667, ___href_0)); }
	inline String_t* get_href_0() const { return ___href_0; }
	inline String_t** get_address_of_href_0() { return &___href_0; }
	inline void set_href_0(String_t* value)
	{
		___href_0 = value;
		Il2CppCodeGenWriteBarrier(&___href_0, value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Link_t2232866667, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Link_t2232866667, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
