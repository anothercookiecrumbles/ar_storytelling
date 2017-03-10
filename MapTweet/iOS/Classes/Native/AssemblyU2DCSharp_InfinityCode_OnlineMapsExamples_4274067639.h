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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.DragMarkerAndTranslateMapExample
struct  DragMarkerAndTranslateMapExample_t4274067639  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject InfinityCode.OnlineMapsExamples.DragMarkerAndTranslateMapExample::prefab
	GameObject_t1756533147 * ___prefab_2;
	// System.Single InfinityCode.OnlineMapsExamples.DragMarkerAndTranslateMapExample::minSpeed
	float ___minSpeed_3;
	// System.Single InfinityCode.OnlineMapsExamples.DragMarkerAndTranslateMapExample::maxSpeed
	float ___maxSpeed_4;
	// System.Single InfinityCode.OnlineMapsExamples.DragMarkerAndTranslateMapExample::edge
	float ___edge_5;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(DragMarkerAndTranslateMapExample_t4274067639, ___prefab_2)); }
	inline GameObject_t1756533147 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_t1756533147 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_t1756533147 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}

	inline static int32_t get_offset_of_minSpeed_3() { return static_cast<int32_t>(offsetof(DragMarkerAndTranslateMapExample_t4274067639, ___minSpeed_3)); }
	inline float get_minSpeed_3() const { return ___minSpeed_3; }
	inline float* get_address_of_minSpeed_3() { return &___minSpeed_3; }
	inline void set_minSpeed_3(float value)
	{
		___minSpeed_3 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_4() { return static_cast<int32_t>(offsetof(DragMarkerAndTranslateMapExample_t4274067639, ___maxSpeed_4)); }
	inline float get_maxSpeed_4() const { return ___maxSpeed_4; }
	inline float* get_address_of_maxSpeed_4() { return &___maxSpeed_4; }
	inline void set_maxSpeed_4(float value)
	{
		___maxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_edge_5() { return static_cast<int32_t>(offsetof(DragMarkerAndTranslateMapExample_t4274067639, ___edge_5)); }
	inline float get_edge_5() const { return ___edge_5; }
	inline float* get_address_of_edge_5() { return &___edge_5; }
	inline void set_edge_5(float value)
	{
		___edge_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
