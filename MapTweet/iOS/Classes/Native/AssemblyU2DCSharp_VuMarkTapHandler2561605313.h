#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_TapHandler3409799063.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkTapHandler
struct  VuMarkTapHandler_t2561605313  : public TapHandler_t3409799063
{
public:
	// UnityEngine.GameObject VuMarkTapHandler::VuMarkCard
	GameObject_t1756533147 * ___VuMarkCard_6;

public:
	inline static int32_t get_offset_of_VuMarkCard_6() { return static_cast<int32_t>(offsetof(VuMarkTapHandler_t2561605313, ___VuMarkCard_6)); }
	inline GameObject_t1756533147 * get_VuMarkCard_6() const { return ___VuMarkCard_6; }
	inline GameObject_t1756533147 ** get_address_of_VuMarkCard_6() { return &___VuMarkCard_6; }
	inline void set_VuMarkCard_6(GameObject_t1756533147 * value)
	{
		___VuMarkCard_6 = value;
		Il2CppCodeGenWriteBarrier(&___VuMarkCard_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
