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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.SaveMapStateExample
struct  SaveMapStateExample_t1997827798  : public MonoBehaviour_t1158329972
{
public:
	// System.String InfinityCode.OnlineMapsExamples.SaveMapStateExample::key
	String_t* ___key_2;

public:
	inline static int32_t get_offset_of_key_2() { return static_cast<int32_t>(offsetof(SaveMapStateExample_t1997827798, ___key_2)); }
	inline String_t* get_key_2() const { return ___key_2; }
	inline String_t** get_address_of_key_2() { return &___key_2; }
	inline void set_key_2(String_t* value)
	{
		___key_2 = value;
		Il2CppCodeGenWriteBarrier(&___key_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
