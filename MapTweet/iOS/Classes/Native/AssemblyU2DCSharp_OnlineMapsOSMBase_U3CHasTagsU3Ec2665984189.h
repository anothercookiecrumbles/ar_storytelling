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
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsOSMBase/<HasTags>c__AnonStorey2
struct  U3CHasTagsU3Ec__AnonStorey2_t2665984189  : public Il2CppObject
{
public:
	// System.String OnlineMapsOSMBase/<HasTags>c__AnonStorey2::key
	String_t* ___key_0;
	// System.String[] OnlineMapsOSMBase/<HasTags>c__AnonStorey2::values
	StringU5BU5D_t1642385972* ___values_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CHasTagsU3Ec__AnonStorey2_t2665984189, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(U3CHasTagsU3Ec__AnonStorey2_t2665984189, ___values_1)); }
	inline StringU5BU5D_t1642385972* get_values_1() const { return ___values_1; }
	inline StringU5BU5D_t1642385972** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(StringU5BU5D_t1642385972* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier(&___values_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
