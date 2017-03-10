#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SplashLauncher
struct  SplashLauncher_t1698096973  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.TrackableBehaviour SplashLauncher::trackable
	TrackableBehaviour_t1779888572 * ___trackable_2;

public:
	inline static int32_t get_offset_of_trackable_2() { return static_cast<int32_t>(offsetof(SplashLauncher_t1698096973, ___trackable_2)); }
	inline TrackableBehaviour_t1779888572 * get_trackable_2() const { return ___trackable_2; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_trackable_2() { return &___trackable_2; }
	inline void set_trackable_2(TrackableBehaviour_t1779888572 * value)
	{
		___trackable_2 = value;
		Il2CppCodeGenWriteBarrier(&___trackable_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
