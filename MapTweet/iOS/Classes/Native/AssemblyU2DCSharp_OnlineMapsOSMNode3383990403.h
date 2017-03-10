#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_OnlineMapsOSMBase540795536.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsOSMNode
struct  OnlineMapsOSMNode_t3383990403  : public OnlineMapsOSMBase_t540795536
{
public:
	// System.Single OnlineMapsOSMNode::lat
	float ___lat_2;
	// System.Single OnlineMapsOSMNode::lon
	float ___lon_3;

public:
	inline static int32_t get_offset_of_lat_2() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNode_t3383990403, ___lat_2)); }
	inline float get_lat_2() const { return ___lat_2; }
	inline float* get_address_of_lat_2() { return &___lat_2; }
	inline void set_lat_2(float value)
	{
		___lat_2 = value;
	}

	inline static int32_t get_offset_of_lon_3() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNode_t3383990403, ___lon_3)); }
	inline float get_lon_3() const { return ___lon_3; }
	inline float* get_address_of_lon_3() { return &___lon_3; }
	inline void set_lon_3(float value)
	{
		___lon_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
