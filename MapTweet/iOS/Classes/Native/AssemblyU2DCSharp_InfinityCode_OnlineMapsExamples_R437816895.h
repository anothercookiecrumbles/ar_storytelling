#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsMarker
struct OnlineMapsMarker_t3492166682;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.RotateMapInsteadMarkerExample
struct  RotateMapInsteadMarkerExample_t437816895  : public MonoBehaviour_t1158329972
{
public:
	// OnlineMapsMarker InfinityCode.OnlineMapsExamples.RotateMapInsteadMarkerExample::marker
	OnlineMapsMarker_t3492166682 * ___marker_2;

public:
	inline static int32_t get_offset_of_marker_2() { return static_cast<int32_t>(offsetof(RotateMapInsteadMarkerExample_t437816895, ___marker_2)); }
	inline OnlineMapsMarker_t3492166682 * get_marker_2() const { return ___marker_2; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_marker_2() { return &___marker_2; }
	inline void set_marker_2(OnlineMapsMarker_t3492166682 * value)
	{
		___marker_2 = value;
		Il2CppCodeGenWriteBarrier(&___marker_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
