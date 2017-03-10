#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMaps
struct OnlineMaps_t1893290312;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapButtonsLeft
struct  MapButtonsLeft_t4149307330  : public MonoBehaviour_t1158329972
{
public:
	// OnlineMaps MapButtonsLeft::map
	OnlineMaps_t1893290312 * ___map_2;

public:
	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(MapButtonsLeft_t4149307330, ___map_2)); }
	inline OnlineMaps_t1893290312 * get_map_2() const { return ___map_2; }
	inline OnlineMaps_t1893290312 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(OnlineMaps_t1893290312 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier(&___map_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
