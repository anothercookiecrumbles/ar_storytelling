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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsTileSetControl/TilesetSortedMarker
struct  TilesetSortedMarker_t2480816995  : public Il2CppObject
{
public:
	// OnlineMapsMarker OnlineMapsTileSetControl/TilesetSortedMarker::marker
	OnlineMapsMarker_t3492166682 * ___marker_0;
	// System.Single OnlineMapsTileSetControl/TilesetSortedMarker::offset
	float ___offset_1;

public:
	inline static int32_t get_offset_of_marker_0() { return static_cast<int32_t>(offsetof(TilesetSortedMarker_t2480816995, ___marker_0)); }
	inline OnlineMapsMarker_t3492166682 * get_marker_0() const { return ___marker_0; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_marker_0() { return &___marker_0; }
	inline void set_marker_0(OnlineMapsMarker_t3492166682 * value)
	{
		___marker_0 = value;
		Il2CppCodeGenWriteBarrier(&___marker_0, value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(TilesetSortedMarker_t2480816995, ___offset_1)); }
	inline float get_offset_1() const { return ___offset_1; }
	inline float* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(float value)
	{
		___offset_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
