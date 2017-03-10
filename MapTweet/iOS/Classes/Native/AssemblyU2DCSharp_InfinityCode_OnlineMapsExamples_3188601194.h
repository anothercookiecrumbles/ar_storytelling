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

// InfinityCode.OnlineMapsExamples.MarkerScaleByZoomExample
struct  MarkerScaleByZoomExample_t3188601194  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 InfinityCode.OnlineMapsExamples.MarkerScaleByZoomExample::defaultZoom
	int32_t ___defaultZoom_2;
	// OnlineMapsMarkerBase InfinityCode.OnlineMapsExamples.MarkerScaleByZoomExample::marker
	OnlineMapsMarkerBase_t3900955221 * ___marker_3;

public:
	inline static int32_t get_offset_of_defaultZoom_2() { return static_cast<int32_t>(offsetof(MarkerScaleByZoomExample_t3188601194, ___defaultZoom_2)); }
	inline int32_t get_defaultZoom_2() const { return ___defaultZoom_2; }
	inline int32_t* get_address_of_defaultZoom_2() { return &___defaultZoom_2; }
	inline void set_defaultZoom_2(int32_t value)
	{
		___defaultZoom_2 = value;
	}

	inline static int32_t get_offset_of_marker_3() { return static_cast<int32_t>(offsetof(MarkerScaleByZoomExample_t3188601194, ___marker_3)); }
	inline OnlineMapsMarkerBase_t3900955221 * get_marker_3() const { return ___marker_3; }
	inline OnlineMapsMarkerBase_t3900955221 ** get_address_of_marker_3() { return &___marker_3; }
	inline void set_marker_3(OnlineMapsMarkerBase_t3900955221 * value)
	{
		___marker_3 = value;
		Il2CppCodeGenWriteBarrier(&___marker_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
