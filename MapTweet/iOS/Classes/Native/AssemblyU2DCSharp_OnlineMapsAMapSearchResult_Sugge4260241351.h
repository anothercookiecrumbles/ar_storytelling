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

// OnlineMapsAMapSearchResult/Suggestion
struct  Suggestion_t4260241351  : public Il2CppObject
{
public:
	// System.String OnlineMapsAMapSearchResult/Suggestion::keywords
	String_t* ___keywords_0;
	// System.String OnlineMapsAMapSearchResult/Suggestion::cities
	String_t* ___cities_1;

public:
	inline static int32_t get_offset_of_keywords_0() { return static_cast<int32_t>(offsetof(Suggestion_t4260241351, ___keywords_0)); }
	inline String_t* get_keywords_0() const { return ___keywords_0; }
	inline String_t** get_address_of_keywords_0() { return &___keywords_0; }
	inline void set_keywords_0(String_t* value)
	{
		___keywords_0 = value;
		Il2CppCodeGenWriteBarrier(&___keywords_0, value);
	}

	inline static int32_t get_offset_of_cities_1() { return static_cast<int32_t>(offsetof(Suggestion_t4260241351, ___cities_1)); }
	inline String_t* get_cities_1() const { return ___cities_1; }
	inline String_t** get_address_of_cities_1() { return &___cities_1; }
	inline void set_cities_1(String_t* value)
	{
		___cities_1 = value;
		Il2CppCodeGenWriteBarrier(&___cities_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
