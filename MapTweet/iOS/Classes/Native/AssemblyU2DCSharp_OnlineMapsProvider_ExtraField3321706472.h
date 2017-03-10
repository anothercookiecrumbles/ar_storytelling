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

// OnlineMapsProvider/ExtraField
struct  ExtraField_t3321706472  : public Il2CppObject
{
public:
	// System.String OnlineMapsProvider/ExtraField::title
	String_t* ___title_0;
	// System.String OnlineMapsProvider/ExtraField::value
	String_t* ___value_1;
	// System.String OnlineMapsProvider/ExtraField::defaultValue
	String_t* ___defaultValue_2;
	// System.String OnlineMapsProvider/ExtraField::token
	String_t* ___token_3;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(ExtraField_t3321706472, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier(&___title_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ExtraField_t3321706472, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}

	inline static int32_t get_offset_of_defaultValue_2() { return static_cast<int32_t>(offsetof(ExtraField_t3321706472, ___defaultValue_2)); }
	inline String_t* get_defaultValue_2() const { return ___defaultValue_2; }
	inline String_t** get_address_of_defaultValue_2() { return &___defaultValue_2; }
	inline void set_defaultValue_2(String_t* value)
	{
		___defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier(&___defaultValue_2, value);
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(ExtraField_t3321706472, ___token_3)); }
	inline String_t* get_token_3() const { return ___token_3; }
	inline String_t** get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(String_t* value)
	{
		___token_3 = value;
		Il2CppCodeGenWriteBarrier(&___token_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
