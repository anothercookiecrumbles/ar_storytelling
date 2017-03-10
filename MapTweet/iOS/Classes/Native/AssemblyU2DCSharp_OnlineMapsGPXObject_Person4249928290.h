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
// OnlineMapsGPXObject/EMail
struct EMail_t1884994819;
// OnlineMapsGPXObject/Link
struct Link_t2232866667;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGPXObject/Person
struct  Person_t4249928290  : public Il2CppObject
{
public:
	// System.String OnlineMapsGPXObject/Person::name
	String_t* ___name_0;
	// OnlineMapsGPXObject/EMail OnlineMapsGPXObject/Person::email
	EMail_t1884994819 * ___email_1;
	// OnlineMapsGPXObject/Link OnlineMapsGPXObject/Person::link
	Link_t2232866667 * ___link_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Person_t4249928290, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_email_1() { return static_cast<int32_t>(offsetof(Person_t4249928290, ___email_1)); }
	inline EMail_t1884994819 * get_email_1() const { return ___email_1; }
	inline EMail_t1884994819 ** get_address_of_email_1() { return &___email_1; }
	inline void set_email_1(EMail_t1884994819 * value)
	{
		___email_1 = value;
		Il2CppCodeGenWriteBarrier(&___email_1, value);
	}

	inline static int32_t get_offset_of_link_2() { return static_cast<int32_t>(offsetof(Person_t4249928290, ___link_2)); }
	inline Link_t2232866667 * get_link_2() const { return ___link_2; }
	inline Link_t2232866667 ** get_address_of_link_2() { return &___link_2; }
	inline void set_link_2(Link_t2232866667 * value)
	{
		___link_2 = value;
		Il2CppCodeGenWriteBarrier(&___link_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
