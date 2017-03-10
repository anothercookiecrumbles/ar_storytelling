#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsHereRoutingAPI/RoutingMode/Feature
struct Feature_t3487983679;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsHereRoutingAPI_RoutingMo66022539.h"
#include "AssemblyU2DCSharp_OnlineMapsHereRoutingAPI_Routing2888575076.h"
#include "mscorlib_System_Nullable_1_gen2521140488.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPI/RoutingMode
struct  RoutingMode_t3690293030  : public Il2CppObject
{
public:
	// OnlineMapsHereRoutingAPI/RoutingMode/Type OnlineMapsHereRoutingAPI/RoutingMode::type
	int32_t ___type_0;
	// OnlineMapsHereRoutingAPI/RoutingMode/TransportModes OnlineMapsHereRoutingAPI/RoutingMode::transportMode
	int32_t ___transportMode_1;
	// System.Nullable`1<OnlineMapsHereRoutingAPI/RoutingMode/TrafficMode> OnlineMapsHereRoutingAPI/RoutingMode::trafficMode
	Nullable_1_t2521140488  ___trafficMode_2;
	// OnlineMapsHereRoutingAPI/RoutingMode/Feature OnlineMapsHereRoutingAPI/RoutingMode::feature
	Feature_t3487983679 * ___feature_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(RoutingMode_t3690293030, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_transportMode_1() { return static_cast<int32_t>(offsetof(RoutingMode_t3690293030, ___transportMode_1)); }
	inline int32_t get_transportMode_1() const { return ___transportMode_1; }
	inline int32_t* get_address_of_transportMode_1() { return &___transportMode_1; }
	inline void set_transportMode_1(int32_t value)
	{
		___transportMode_1 = value;
	}

	inline static int32_t get_offset_of_trafficMode_2() { return static_cast<int32_t>(offsetof(RoutingMode_t3690293030, ___trafficMode_2)); }
	inline Nullable_1_t2521140488  get_trafficMode_2() const { return ___trafficMode_2; }
	inline Nullable_1_t2521140488 * get_address_of_trafficMode_2() { return &___trafficMode_2; }
	inline void set_trafficMode_2(Nullable_1_t2521140488  value)
	{
		___trafficMode_2 = value;
	}

	inline static int32_t get_offset_of_feature_3() { return static_cast<int32_t>(offsetof(RoutingMode_t3690293030, ___feature_3)); }
	inline Feature_t3487983679 * get_feature_3() const { return ___feature_3; }
	inline Feature_t3487983679 ** get_address_of_feature_3() { return &___feature_3; }
	inline void set_feature_3(Feature_t3487983679 * value)
	{
		___feature_3 = value;
		Il2CppCodeGenWriteBarrier(&___feature_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
