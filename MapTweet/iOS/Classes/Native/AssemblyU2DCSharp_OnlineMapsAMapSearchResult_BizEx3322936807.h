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

// OnlineMapsAMapSearchResult/BizExt
struct  BizExt_t3322936807  : public Il2CppObject
{
public:
	// System.String OnlineMapsAMapSearchResult/BizExt::rating
	String_t* ___rating_0;
	// System.String OnlineMapsAMapSearchResult/BizExt::cost
	String_t* ___cost_1;

public:
	inline static int32_t get_offset_of_rating_0() { return static_cast<int32_t>(offsetof(BizExt_t3322936807, ___rating_0)); }
	inline String_t* get_rating_0() const { return ___rating_0; }
	inline String_t** get_address_of_rating_0() { return &___rating_0; }
	inline void set_rating_0(String_t* value)
	{
		___rating_0 = value;
		Il2CppCodeGenWriteBarrier(&___rating_0, value);
	}

	inline static int32_t get_offset_of_cost_1() { return static_cast<int32_t>(offsetof(BizExt_t3322936807, ___cost_1)); }
	inline String_t* get_cost_1() const { return ___cost_1; }
	inline String_t** get_address_of_cost_1() { return &___cost_1; }
	inline void set_cost_1(String_t* value)
	{
		___cost_1 = value;
		Il2CppCodeGenWriteBarrier(&___cost_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
