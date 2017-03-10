#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<System.Boolean>
struct Action_1_t3627374100;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMaps/<CheckServerConnection>c__AnonStorey0
struct  U3CCheckServerConnectionU3Ec__AnonStorey0_t2538294809  : public Il2CppObject
{
public:
	// System.Action`1<System.Boolean> OnlineMaps/<CheckServerConnection>c__AnonStorey0::callback
	Action_1_t3627374100 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CCheckServerConnectionU3Ec__AnonStorey0_t2538294809, ___callback_0)); }
	inline Action_1_t3627374100 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3627374100 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3627374100 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
