#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OnlineMapsWWW>
struct List_1_t2616532725;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsJSLoader
struct  OnlineMapsJSLoader_t3851808156  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<OnlineMapsWWW> OnlineMapsJSLoader::requests
	List_1_t2616532725 * ___requests_2;

public:
	inline static int32_t get_offset_of_requests_2() { return static_cast<int32_t>(offsetof(OnlineMapsJSLoader_t3851808156, ___requests_2)); }
	inline List_1_t2616532725 * get_requests_2() const { return ___requests_2; }
	inline List_1_t2616532725 ** get_address_of_requests_2() { return &___requests_2; }
	inline void set_requests_2(List_1_t2616532725 * value)
	{
		___requests_2 = value;
		Il2CppCodeGenWriteBarrier(&___requests_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
