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
// System.Double[]
struct DoubleU5BU5D_t1889952540;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsTileSetControl/TilesetFlatMarker
struct  TilesetFlatMarker_t3550885087  : public Il2CppObject
{
public:
	// OnlineMapsMarker OnlineMapsTileSetControl/TilesetFlatMarker::marker
	OnlineMapsMarker_t3492166682 * ___marker_0;
	// System.Double[] OnlineMapsTileSetControl/TilesetFlatMarker::poly
	DoubleU5BU5D_t1889952540* ___poly_1;

public:
	inline static int32_t get_offset_of_marker_0() { return static_cast<int32_t>(offsetof(TilesetFlatMarker_t3550885087, ___marker_0)); }
	inline OnlineMapsMarker_t3492166682 * get_marker_0() const { return ___marker_0; }
	inline OnlineMapsMarker_t3492166682 ** get_address_of_marker_0() { return &___marker_0; }
	inline void set_marker_0(OnlineMapsMarker_t3492166682 * value)
	{
		___marker_0 = value;
		Il2CppCodeGenWriteBarrier(&___marker_0, value);
	}

	inline static int32_t get_offset_of_poly_1() { return static_cast<int32_t>(offsetof(TilesetFlatMarker_t3550885087, ___poly_1)); }
	inline DoubleU5BU5D_t1889952540* get_poly_1() const { return ___poly_1; }
	inline DoubleU5BU5D_t1889952540** get_address_of_poly_1() { return &___poly_1; }
	inline void set_poly_1(DoubleU5BU5D_t1889952540* value)
	{
		___poly_1 = value;
		Il2CppCodeGenWriteBarrier(&___poly_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
