#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsMarkerBase
struct OnlineMapsMarkerBase_t3900955221;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.OnHoverExample
struct  OnHoverExample_t3905613251  : public MonoBehaviour_t1158329972
{
public:
	// OnlineMapsMarkerBase InfinityCode.OnlineMapsExamples.OnHoverExample::hoverMarker
	OnlineMapsMarkerBase_t3900955221 * ___hoverMarker_2;

public:
	inline static int32_t get_offset_of_hoverMarker_2() { return static_cast<int32_t>(offsetof(OnHoverExample_t3905613251, ___hoverMarker_2)); }
	inline OnlineMapsMarkerBase_t3900955221 * get_hoverMarker_2() const { return ___hoverMarker_2; }
	inline OnlineMapsMarkerBase_t3900955221 ** get_address_of_hoverMarker_2() { return &___hoverMarker_2; }
	inline void set_hoverMarker_2(OnlineMapsMarkerBase_t3900955221 * value)
	{
		___hoverMarker_2 = value;
		Il2CppCodeGenWriteBarrier(&___hoverMarker_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
