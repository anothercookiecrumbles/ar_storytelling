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
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGPXObject/Copyright
struct  Copyright_t2104469052  : public Il2CppObject
{
public:
	// System.String OnlineMapsGPXObject/Copyright::author
	String_t* ___author_0;
	// System.Nullable`1<System.Int32> OnlineMapsGPXObject/Copyright::year
	Nullable_1_t334943763  ___year_1;
	// System.String OnlineMapsGPXObject/Copyright::license
	String_t* ___license_2;

public:
	inline static int32_t get_offset_of_author_0() { return static_cast<int32_t>(offsetof(Copyright_t2104469052, ___author_0)); }
	inline String_t* get_author_0() const { return ___author_0; }
	inline String_t** get_address_of_author_0() { return &___author_0; }
	inline void set_author_0(String_t* value)
	{
		___author_0 = value;
		Il2CppCodeGenWriteBarrier(&___author_0, value);
	}

	inline static int32_t get_offset_of_year_1() { return static_cast<int32_t>(offsetof(Copyright_t2104469052, ___year_1)); }
	inline Nullable_1_t334943763  get_year_1() const { return ___year_1; }
	inline Nullable_1_t334943763 * get_address_of_year_1() { return &___year_1; }
	inline void set_year_1(Nullable_1_t334943763  value)
	{
		___year_1 = value;
	}

	inline static int32_t get_offset_of_license_2() { return static_cast<int32_t>(offsetof(Copyright_t2104469052, ___license_2)); }
	inline String_t* get_license_2() const { return ___license_2; }
	inline String_t** get_address_of_license_2() { return &___license_2; }
	inline void set_license_2(String_t* value)
	{
		___license_2 = value;
		Il2CppCodeGenWriteBarrier(&___license_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
