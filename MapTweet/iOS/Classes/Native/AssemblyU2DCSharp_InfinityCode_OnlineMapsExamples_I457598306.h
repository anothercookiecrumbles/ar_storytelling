#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Double>
struct List_1_t3447136813;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.InertiaExample
struct  InertiaExample_t457598306  : public MonoBehaviour_t1158329972
{
public:
	// System.Single InfinityCode.OnlineMapsExamples.InertiaExample::friction
	float ___friction_2;
	// System.Boolean InfinityCode.OnlineMapsExamples.InertiaExample::isInteract
	bool ___isInteract_3;
	// System.Collections.Generic.List`1<System.Double> InfinityCode.OnlineMapsExamples.InertiaExample::speedX
	List_1_t3447136813 * ___speedX_4;
	// System.Collections.Generic.List`1<System.Double> InfinityCode.OnlineMapsExamples.InertiaExample::speedY
	List_1_t3447136813 * ___speedY_5;
	// System.Double InfinityCode.OnlineMapsExamples.InertiaExample::rsX
	double ___rsX_6;
	// System.Double InfinityCode.OnlineMapsExamples.InertiaExample::rsY
	double ___rsY_7;
	// System.Double InfinityCode.OnlineMapsExamples.InertiaExample::lng
	double ___lng_8;
	// System.Double InfinityCode.OnlineMapsExamples.InertiaExample::lat
	double ___lat_9;

public:
	inline static int32_t get_offset_of_friction_2() { return static_cast<int32_t>(offsetof(InertiaExample_t457598306, ___friction_2)); }
	inline float get_friction_2() const { return ___friction_2; }
	inline float* get_address_of_friction_2() { return &___friction_2; }
	inline void set_friction_2(float value)
	{
		___friction_2 = value;
	}

	inline static int32_t get_offset_of_isInteract_3() { return static_cast<int32_t>(offsetof(InertiaExample_t457598306, ___isInteract_3)); }
	inline bool get_isInteract_3() const { return ___isInteract_3; }
	inline bool* get_address_of_isInteract_3() { return &___isInteract_3; }
	inline void set_isInteract_3(bool value)
	{
		___isInteract_3 = value;
	}

	inline static int32_t get_offset_of_speedX_4() { return static_cast<int32_t>(offsetof(InertiaExample_t457598306, ___speedX_4)); }
	inline List_1_t3447136813 * get_speedX_4() const { return ___speedX_4; }
	inline List_1_t3447136813 ** get_address_of_speedX_4() { return &___speedX_4; }
	inline void set_speedX_4(List_1_t3447136813 * value)
	{
		___speedX_4 = value;
		Il2CppCodeGenWriteBarrier(&___speedX_4, value);
	}

	inline static int32_t get_offset_of_speedY_5() { return static_cast<int32_t>(offsetof(InertiaExample_t457598306, ___speedY_5)); }
	inline List_1_t3447136813 * get_speedY_5() const { return ___speedY_5; }
	inline List_1_t3447136813 ** get_address_of_speedY_5() { return &___speedY_5; }
	inline void set_speedY_5(List_1_t3447136813 * value)
	{
		___speedY_5 = value;
		Il2CppCodeGenWriteBarrier(&___speedY_5, value);
	}

	inline static int32_t get_offset_of_rsX_6() { return static_cast<int32_t>(offsetof(InertiaExample_t457598306, ___rsX_6)); }
	inline double get_rsX_6() const { return ___rsX_6; }
	inline double* get_address_of_rsX_6() { return &___rsX_6; }
	inline void set_rsX_6(double value)
	{
		___rsX_6 = value;
	}

	inline static int32_t get_offset_of_rsY_7() { return static_cast<int32_t>(offsetof(InertiaExample_t457598306, ___rsY_7)); }
	inline double get_rsY_7() const { return ___rsY_7; }
	inline double* get_address_of_rsY_7() { return &___rsY_7; }
	inline void set_rsY_7(double value)
	{
		___rsY_7 = value;
	}

	inline static int32_t get_offset_of_lng_8() { return static_cast<int32_t>(offsetof(InertiaExample_t457598306, ___lng_8)); }
	inline double get_lng_8() const { return ___lng_8; }
	inline double* get_address_of_lng_8() { return &___lng_8; }
	inline void set_lng_8(double value)
	{
		___lng_8 = value;
	}

	inline static int32_t get_offset_of_lat_9() { return static_cast<int32_t>(offsetof(InertiaExample_t457598306, ___lat_9)); }
	inline double get_lat_9() const { return ___lat_9; }
	inline double* get_address_of_lat_9() { return &___lat_9; }
	inline void set_lat_9(double value)
	{
		___lat_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
