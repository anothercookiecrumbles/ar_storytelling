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

// InfinityCode.OnlineMapsExamples.Marker_GPS_Example
struct  Marker_GPS_Example_t712044354  : public MonoBehaviour_t1158329972
{
public:
	// OnlineMapsMarker InfinityCode.OnlineMapsExamples.Marker_GPS_Example::playerMarker
	OnlineMapsMarker_t3492166682 * ___playerMarker_2;

public:
	inline static int32_t get_offset_of_playerMarker_2() { return static_cast<int32_t>(offsetof(Marker_GPS_Example_t712044354, ___playerMarker_2)); }
	inline OnlineMapsMarker_t3492166682 * get_playerMarker_2() const { return ___playerMarker_2; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_playerMarker_2() { return &___playerMarker_2; }
	inline void set_playerMarker_2(OnlineMapsMarker_t3492166682 * value)
	{
		___playerMarker_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerMarker_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
