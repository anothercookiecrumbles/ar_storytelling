#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// OnlineMapsMarker3D
struct OnlineMapsMarker3D_t576815539;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.Marker3D_GPS_Example
struct  Marker3D_GPS_Example_t4167198249  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject InfinityCode.OnlineMapsExamples.Marker3D_GPS_Example::prefab
	GameObject_t1756533147 * ___prefab_2;
	// OnlineMapsMarker3D InfinityCode.OnlineMapsExamples.Marker3D_GPS_Example::locationMarker
	OnlineMapsMarker3D_t576815539 * ___locationMarker_3;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(Marker3D_GPS_Example_t4167198249, ___prefab_2)); }
	inline GameObject_t1756533147 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_t1756533147 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_t1756533147 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}

	inline static int32_t get_offset_of_locationMarker_3() { return static_cast<int32_t>(offsetof(Marker3D_GPS_Example_t4167198249, ___locationMarker_3)); }
	inline OnlineMapsMarker3D_t576815539 * get_locationMarker_3() const { return ___locationMarker_3; }
	inline OnlineMapsMarker3D_t576815539 ** get_address_of_locationMarker_3() { return &___locationMarker_3; }
	inline void set_locationMarker_3(OnlineMapsMarker3D_t576815539 * value)
	{
		___locationMarker_3 = value;
		Il2CppCodeGenWriteBarrier(&___locationMarker_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
