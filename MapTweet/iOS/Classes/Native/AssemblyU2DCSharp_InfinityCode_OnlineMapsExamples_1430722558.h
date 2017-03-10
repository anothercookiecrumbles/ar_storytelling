#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsTileSetControl
struct OnlineMapsTileSetControl_t3368302803;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.InterceptElevationRequestExample
struct  InterceptElevationRequestExample_t1430722558  : public MonoBehaviour_t1158329972
{
public:
	// OnlineMapsTileSetControl InfinityCode.OnlineMapsExamples.InterceptElevationRequestExample::control
	OnlineMapsTileSetControl_t3368302803 * ___control_2;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(InterceptElevationRequestExample_t1430722558, ___control_2)); }
	inline OnlineMapsTileSetControl_t3368302803 * get_control_2() const { return ___control_2; }
	inline OnlineMapsTileSetControl_t3368302803 ** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(OnlineMapsTileSetControl_t3368302803 * value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
