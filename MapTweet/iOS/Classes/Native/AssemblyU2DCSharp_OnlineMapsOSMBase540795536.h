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
// System.Collections.Generic.List`1<OnlineMapsOSMTag>
struct List_1_t2998192597;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsOSMBase
struct  OnlineMapsOSMBase_t540795536  : public Il2CppObject
{
public:
	// System.String OnlineMapsOSMBase::id
	String_t* ___id_0;
	// System.Collections.Generic.List`1<OnlineMapsOSMTag> OnlineMapsOSMBase::tags
	List_1_t2998192597 * ___tags_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(OnlineMapsOSMBase_t540795536, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_tags_1() { return static_cast<int32_t>(offsetof(OnlineMapsOSMBase_t540795536, ___tags_1)); }
	inline List_1_t2998192597 * get_tags_1() const { return ___tags_1; }
	inline List_1_t2998192597 ** get_address_of_tags_1() { return &___tags_1; }
	inline void set_tags_1(List_1_t2998192597 * value)
	{
		___tags_1 = value;
		Il2CppCodeGenWriteBarrier(&___tags_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
