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

// OnlineMapsGPXObject/EMail
struct  EMail_t1884994819  : public Il2CppObject
{
public:
	// System.String OnlineMapsGPXObject/EMail::id
	String_t* ___id_0;
	// System.String OnlineMapsGPXObject/EMail::domain
	String_t* ___domain_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(EMail_t1884994819, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_domain_1() { return static_cast<int32_t>(offsetof(EMail_t1884994819, ___domain_1)); }
	inline String_t* get_domain_1() const { return ___domain_1; }
	inline String_t** get_address_of_domain_1() { return &___domain_1; }
	inline void set_domain_1(String_t* value)
	{
		___domain_1 = value;
		Il2CppCodeGenWriteBarrier(&___domain_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
