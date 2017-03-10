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

// VBSoccerballEventHandler
struct  VBSoccerballEventHandler_t3236383594  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject VBSoccerballEventHandler::mSoccerball
	GameObject_t1756533147 * ___mSoccerball_2;
	// System.Boolean VBSoccerballEventHandler::mIsRolling
	bool ___mIsRolling_3;
	// System.Single VBSoccerballEventHandler::mTimeRolling
	float ___mTimeRolling_4;
	// System.Single VBSoccerballEventHandler::mForce
	float ___mForce_5;

public:
	inline static int32_t get_offset_of_mSoccerball_2() { return static_cast<int32_t>(offsetof(VBSoccerballEventHandler_t3236383594, ___mSoccerball_2)); }
	inline GameObject_t1756533147 * get_mSoccerball_2() const { return ___mSoccerball_2; }
	inline GameObject_t1756533147 ** get_address_of_mSoccerball_2() { return &___mSoccerball_2; }
	inline void set_mSoccerball_2(GameObject_t1756533147 * value)
	{
		___mSoccerball_2 = value;
		Il2CppCodeGenWriteBarrier(&___mSoccerball_2, value);
	}

	inline static int32_t get_offset_of_mIsRolling_3() { return static_cast<int32_t>(offsetof(VBSoccerballEventHandler_t3236383594, ___mIsRolling_3)); }
	inline bool get_mIsRolling_3() const { return ___mIsRolling_3; }
	inline bool* get_address_of_mIsRolling_3() { return &___mIsRolling_3; }
	inline void set_mIsRolling_3(bool value)
	{
		___mIsRolling_3 = value;
	}

	inline static int32_t get_offset_of_mTimeRolling_4() { return static_cast<int32_t>(offsetof(VBSoccerballEventHandler_t3236383594, ___mTimeRolling_4)); }
	inline float get_mTimeRolling_4() const { return ___mTimeRolling_4; }
	inline float* get_address_of_mTimeRolling_4() { return &___mTimeRolling_4; }
	inline void set_mTimeRolling_4(float value)
	{
		___mTimeRolling_4 = value;
	}

	inline static int32_t get_offset_of_mForce_5() { return static_cast<int32_t>(offsetof(VBSoccerballEventHandler_t3236383594, ___mForce_5)); }
	inline float get_mForce_5() const { return ___mForce_5; }
	inline float* get_address_of_mForce_5() { return &___mForce_5; }
	inline void set_mForce_5(float value)
	{
		___mForce_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
