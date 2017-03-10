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

#include "AssemblyU2DCSharp_OnlineMapsMarkerInstanceBase538187336.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsMarkerBillboard
struct  OnlineMapsMarkerBillboard_t495103289  : public OnlineMapsMarkerInstanceBase_t538187336
{
public:
	// System.Boolean OnlineMapsMarkerBillboard::used
	bool ___used_2;
	// OnlineMapsMarker OnlineMapsMarkerBillboard::_marker
	OnlineMapsMarker_t3492166682 * ____marker_3;

public:
	inline static int32_t get_offset_of_used_2() { return static_cast<int32_t>(offsetof(OnlineMapsMarkerBillboard_t495103289, ___used_2)); }
	inline bool get_used_2() const { return ___used_2; }
	inline bool* get_address_of_used_2() { return &___used_2; }
	inline void set_used_2(bool value)
	{
		___used_2 = value;
	}

	inline static int32_t get_offset_of__marker_3() { return static_cast<int32_t>(offsetof(OnlineMapsMarkerBillboard_t495103289, ____marker_3)); }
	inline OnlineMapsMarker_t3492166682 * get__marker_3() const { return ____marker_3; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of__marker_3() { return &____marker_3; }
	inline void set__marker_3(OnlineMapsMarker_t3492166682 * value)
	{
		____marker_3 = value;
		Il2CppCodeGenWriteBarrier(&____marker_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
