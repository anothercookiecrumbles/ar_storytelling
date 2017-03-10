#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScanLine
struct  ScanLine_t1592915667  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ScanLine::mTime
	float ___mTime_2;
	// System.Single ScanLine::mScanDuration
	float ___mScanDuration_3;
	// System.Boolean ScanLine::mMovingDown
	bool ___mMovingDown_4;

public:
	inline static int32_t get_offset_of_mTime_2() { return static_cast<int32_t>(offsetof(ScanLine_t1592915667, ___mTime_2)); }
	inline float get_mTime_2() const { return ___mTime_2; }
	inline float* get_address_of_mTime_2() { return &___mTime_2; }
	inline void set_mTime_2(float value)
	{
		___mTime_2 = value;
	}

	inline static int32_t get_offset_of_mScanDuration_3() { return static_cast<int32_t>(offsetof(ScanLine_t1592915667, ___mScanDuration_3)); }
	inline float get_mScanDuration_3() const { return ___mScanDuration_3; }
	inline float* get_address_of_mScanDuration_3() { return &___mScanDuration_3; }
	inline void set_mScanDuration_3(float value)
	{
		___mScanDuration_3 = value;
	}

	inline static int32_t get_offset_of_mMovingDown_4() { return static_cast<int32_t>(offsetof(ScanLine_t1592915667, ___mMovingDown_4)); }
	inline bool get_mMovingDown_4() const { return ___mMovingDown_4; }
	inline bool* get_address_of_mMovingDown_4() { return &___mMovingDown_4; }
	inline void set_mMovingDown_4(bool value)
	{
		___mMovingDown_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
