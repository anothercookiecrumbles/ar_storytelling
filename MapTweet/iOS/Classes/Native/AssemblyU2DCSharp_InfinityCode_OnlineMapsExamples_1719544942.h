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

// InfinityCode.OnlineMapsExamples.Marker3D_Example
struct  Marker3D_Example_t1719544942  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject InfinityCode.OnlineMapsExamples.Marker3D_Example::markerPrefab
	GameObject_t1756533147 * ___markerPrefab_2;
	// OnlineMapsMarker3D InfinityCode.OnlineMapsExamples.Marker3D_Example::marker3D
	OnlineMapsMarker3D_t576815539 * ___marker3D_3;

public:
	inline static int32_t get_offset_of_markerPrefab_2() { return static_cast<int32_t>(offsetof(Marker3D_Example_t1719544942, ___markerPrefab_2)); }
	inline GameObject_t1756533147 * get_markerPrefab_2() const { return ___markerPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_markerPrefab_2() { return &___markerPrefab_2; }
	inline void set_markerPrefab_2(GameObject_t1756533147 * value)
	{
		___markerPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___markerPrefab_2, value);
	}

	inline static int32_t get_offset_of_marker3D_3() { return static_cast<int32_t>(offsetof(Marker3D_Example_t1719544942, ___marker3D_3)); }
	inline OnlineMapsMarker3D_t576815539 * get_marker3D_3() const { return ___marker3D_3; }
	inline OnlineMapsMarker3D_t576815539 ** get_address_of_marker3D_3() { return &___marker3D_3; }
	inline void set_marker3D_3(OnlineMapsMarker3D_t576815539 * value)
	{
		___marker3D_3 = value;
		Il2CppCodeGenWriteBarrier(&___marker3D_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
