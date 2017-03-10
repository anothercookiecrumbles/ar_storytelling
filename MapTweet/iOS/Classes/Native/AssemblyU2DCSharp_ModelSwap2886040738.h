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
// TrackableSettings
struct TrackableSettings_t4265251850;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelSwap
struct  ModelSwap_t2886040738  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ModelSwap::mDefaultModel
	GameObject_t1756533147 * ___mDefaultModel_2;
	// UnityEngine.GameObject ModelSwap::mExtTrackedModel
	GameObject_t1756533147 * ___mExtTrackedModel_3;
	// UnityEngine.GameObject ModelSwap::mActiveModel
	GameObject_t1756533147 * ___mActiveModel_4;
	// TrackableSettings ModelSwap::mTrackableSettings
	TrackableSettings_t4265251850 * ___mTrackableSettings_5;

public:
	inline static int32_t get_offset_of_mDefaultModel_2() { return static_cast<int32_t>(offsetof(ModelSwap_t2886040738, ___mDefaultModel_2)); }
	inline GameObject_t1756533147 * get_mDefaultModel_2() const { return ___mDefaultModel_2; }
	inline GameObject_t1756533147 ** get_address_of_mDefaultModel_2() { return &___mDefaultModel_2; }
	inline void set_mDefaultModel_2(GameObject_t1756533147 * value)
	{
		___mDefaultModel_2 = value;
		Il2CppCodeGenWriteBarrier(&___mDefaultModel_2, value);
	}

	inline static int32_t get_offset_of_mExtTrackedModel_3() { return static_cast<int32_t>(offsetof(ModelSwap_t2886040738, ___mExtTrackedModel_3)); }
	inline GameObject_t1756533147 * get_mExtTrackedModel_3() const { return ___mExtTrackedModel_3; }
	inline GameObject_t1756533147 ** get_address_of_mExtTrackedModel_3() { return &___mExtTrackedModel_3; }
	inline void set_mExtTrackedModel_3(GameObject_t1756533147 * value)
	{
		___mExtTrackedModel_3 = value;
		Il2CppCodeGenWriteBarrier(&___mExtTrackedModel_3, value);
	}

	inline static int32_t get_offset_of_mActiveModel_4() { return static_cast<int32_t>(offsetof(ModelSwap_t2886040738, ___mActiveModel_4)); }
	inline GameObject_t1756533147 * get_mActiveModel_4() const { return ___mActiveModel_4; }
	inline GameObject_t1756533147 ** get_address_of_mActiveModel_4() { return &___mActiveModel_4; }
	inline void set_mActiveModel_4(GameObject_t1756533147 * value)
	{
		___mActiveModel_4 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveModel_4, value);
	}

	inline static int32_t get_offset_of_mTrackableSettings_5() { return static_cast<int32_t>(offsetof(ModelSwap_t2886040738, ___mTrackableSettings_5)); }
	inline TrackableSettings_t4265251850 * get_mTrackableSettings_5() const { return ___mTrackableSettings_5; }
	inline TrackableSettings_t4265251850 ** get_address_of_mTrackableSettings_5() { return &___mTrackableSettings_5; }
	inline void set_mTrackableSettings_5(TrackableSettings_t4265251850 * value)
	{
		___mTrackableSettings_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableSettings_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
