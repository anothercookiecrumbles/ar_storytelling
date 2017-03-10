#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsTile
struct OnlineMapsTile_t21329940;
// OnlineMapsProvider/MapType
struct MapType_t2083261044;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsProvider/MapType/<GetURL>c__AnonStorey0
struct  U3CGetURLU3Ec__AnonStorey0_t3790429479  : public Il2CppObject
{
public:
	// OnlineMapsTile OnlineMapsProvider/MapType/<GetURL>c__AnonStorey0::tile
	OnlineMapsTile_t21329940 * ___tile_0;
	// System.Boolean OnlineMapsProvider/MapType/<GetURL>c__AnonStorey0::labels
	bool ___labels_1;
	// OnlineMapsProvider/MapType OnlineMapsProvider/MapType/<GetURL>c__AnonStorey0::$this
	MapType_t2083261044 * ___U24this_2;

public:
	inline static int32_t get_offset_of_tile_0() { return static_cast<int32_t>(offsetof(U3CGetURLU3Ec__AnonStorey0_t3790429479, ___tile_0)); }
	inline OnlineMapsTile_t21329940 * get_tile_0() const { return ___tile_0; }
	inline OnlineMapsTile_t21329940 ** get_address_of_tile_0() { return &___tile_0; }
	inline void set_tile_0(OnlineMapsTile_t21329940 * value)
	{
		___tile_0 = value;
		Il2CppCodeGenWriteBarrier(&___tile_0, value);
	}

	inline static int32_t get_offset_of_labels_1() { return static_cast<int32_t>(offsetof(U3CGetURLU3Ec__AnonStorey0_t3790429479, ___labels_1)); }
	inline bool get_labels_1() const { return ___labels_1; }
	inline bool* get_address_of_labels_1() { return &___labels_1; }
	inline void set_labels_1(bool value)
	{
		___labels_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetURLU3Ec__AnonStorey0_t3790429479, ___U24this_2)); }
	inline MapType_t2083261044 * get_U24this_2() const { return ___U24this_2; }
	inline MapType_t2083261044 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(MapType_t2083261044 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
