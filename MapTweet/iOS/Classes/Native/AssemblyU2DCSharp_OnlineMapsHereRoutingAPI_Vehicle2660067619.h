#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsHereRoutingAPI_Vehicle4177934346.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPI/VehicleType
struct  VehicleType_t2660067619  : public Il2CppObject
{
public:
	// OnlineMapsHereRoutingAPI/VehicleType/EngineType OnlineMapsHereRoutingAPI/VehicleType::engineType
	int32_t ___engineType_0;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPI/VehicleType::averageConsumption
	Nullable_1_t2341081996  ___averageConsumption_1;

public:
	inline static int32_t get_offset_of_engineType_0() { return static_cast<int32_t>(offsetof(VehicleType_t2660067619, ___engineType_0)); }
	inline int32_t get_engineType_0() const { return ___engineType_0; }
	inline int32_t* get_address_of_engineType_0() { return &___engineType_0; }
	inline void set_engineType_0(int32_t value)
	{
		___engineType_0 = value;
	}

	inline static int32_t get_offset_of_averageConsumption_1() { return static_cast<int32_t>(offsetof(VehicleType_t2660067619, ___averageConsumption_1)); }
	inline Nullable_1_t2341081996  get_averageConsumption_1() const { return ___averageConsumption_1; }
	inline Nullable_1_t2341081996 * get_address_of_averageConsumption_1() { return &___averageConsumption_1; }
	inline void set_averageConsumption_1(Nullable_1_t2341081996  value)
	{
		___averageConsumption_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
