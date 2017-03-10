#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsBingMapsElevationResult/Resource[]
struct ResourceU5BU5D_t97663963;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBingMapsElevationResult/ResourceSet
struct  ResourceSet_t1164796666  : public Il2CppObject
{
public:
	// System.Int32 OnlineMapsBingMapsElevationResult/ResourceSet::estimatedTotal
	int32_t ___estimatedTotal_0;
	// OnlineMapsBingMapsElevationResult/Resource[] OnlineMapsBingMapsElevationResult/ResourceSet::resources
	ResourceU5BU5D_t97663963* ___resources_1;

public:
	inline static int32_t get_offset_of_estimatedTotal_0() { return static_cast<int32_t>(offsetof(ResourceSet_t1164796666, ___estimatedTotal_0)); }
	inline int32_t get_estimatedTotal_0() const { return ___estimatedTotal_0; }
	inline int32_t* get_address_of_estimatedTotal_0() { return &___estimatedTotal_0; }
	inline void set_estimatedTotal_0(int32_t value)
	{
		___estimatedTotal_0 = value;
	}

	inline static int32_t get_offset_of_resources_1() { return static_cast<int32_t>(offsetof(ResourceSet_t1164796666, ___resources_1)); }
	inline ResourceU5BU5D_t97663963* get_resources_1() const { return ___resources_1; }
	inline ResourceU5BU5D_t97663963** get_address_of_resources_1() { return &___resources_1; }
	inline void set_resources_1(ResourceU5BU5D_t97663963* value)
	{
		___resources_1 = value;
		Il2CppCodeGenWriteBarrier(&___resources_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
