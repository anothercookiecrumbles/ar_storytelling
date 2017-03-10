#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBingMapsElevationResult/Resource
struct  Resource_t4280619438  : public Il2CppObject
{
public:
	// System.Int32[] OnlineMapsBingMapsElevationResult/Resource::offsets
	Int32U5BU5D_t3030399641* ___offsets_0;
	// System.Int32[] OnlineMapsBingMapsElevationResult/Resource::elevations
	Int32U5BU5D_t3030399641* ___elevations_1;
	// System.Int32 OnlineMapsBingMapsElevationResult/Resource::zoomLevel
	int32_t ___zoomLevel_2;

public:
	inline static int32_t get_offset_of_offsets_0() { return static_cast<int32_t>(offsetof(Resource_t4280619438, ___offsets_0)); }
	inline Int32U5BU5D_t3030399641* get_offsets_0() const { return ___offsets_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_offsets_0() { return &___offsets_0; }
	inline void set_offsets_0(Int32U5BU5D_t3030399641* value)
	{
		___offsets_0 = value;
		Il2CppCodeGenWriteBarrier(&___offsets_0, value);
	}

	inline static int32_t get_offset_of_elevations_1() { return static_cast<int32_t>(offsetof(Resource_t4280619438, ___elevations_1)); }
	inline Int32U5BU5D_t3030399641* get_elevations_1() const { return ___elevations_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_elevations_1() { return &___elevations_1; }
	inline void set_elevations_1(Int32U5BU5D_t3030399641* value)
	{
		___elevations_1 = value;
		Il2CppCodeGenWriteBarrier(&___elevations_1, value);
	}

	inline static int32_t get_offset_of_zoomLevel_2() { return static_cast<int32_t>(offsetof(Resource_t4280619438, ___zoomLevel_2)); }
	inline int32_t get_zoomLevel_2() const { return ___zoomLevel_2; }
	inline int32_t* get_address_of_zoomLevel_2() { return &___zoomLevel_2; }
	inline void set_zoomLevel_2(int32_t value)
	{
		___zoomLevel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
