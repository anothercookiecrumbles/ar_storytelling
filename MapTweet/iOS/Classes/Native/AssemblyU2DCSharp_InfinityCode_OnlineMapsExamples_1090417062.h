#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// OnlineMapsTileSetControl
struct OnlineMapsTileSetControl_t3368302803;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.ResetCameraRotationExample
struct  ResetCameraRotationExample_t1090417062  : public MonoBehaviour_t1158329972
{
public:
	// System.Single InfinityCode.OnlineMapsExamples.ResetCameraRotationExample::animationTime
	float ___animationTime_2;
	// UnityEngine.AnimationCurve InfinityCode.OnlineMapsExamples.ResetCameraRotationExample::animationCurve
	AnimationCurve_t3306541151 * ___animationCurve_3;
	// System.Single InfinityCode.OnlineMapsExamples.ResetCameraRotationExample::time
	float ___time_4;
	// System.Boolean InfinityCode.OnlineMapsExamples.ResetCameraRotationExample::isReset
	bool ___isReset_5;
	// System.Single InfinityCode.OnlineMapsExamples.ResetCameraRotationExample::camX
	float ___camX_6;
	// System.Single InfinityCode.OnlineMapsExamples.ResetCameraRotationExample::camY
	float ___camY_7;
	// OnlineMapsTileSetControl InfinityCode.OnlineMapsExamples.ResetCameraRotationExample::control
	OnlineMapsTileSetControl_t3368302803 * ___control_8;

public:
	inline static int32_t get_offset_of_animationTime_2() { return static_cast<int32_t>(offsetof(ResetCameraRotationExample_t1090417062, ___animationTime_2)); }
	inline float get_animationTime_2() const { return ___animationTime_2; }
	inline float* get_address_of_animationTime_2() { return &___animationTime_2; }
	inline void set_animationTime_2(float value)
	{
		___animationTime_2 = value;
	}

	inline static int32_t get_offset_of_animationCurve_3() { return static_cast<int32_t>(offsetof(ResetCameraRotationExample_t1090417062, ___animationCurve_3)); }
	inline AnimationCurve_t3306541151 * get_animationCurve_3() const { return ___animationCurve_3; }
	inline AnimationCurve_t3306541151 ** get_address_of_animationCurve_3() { return &___animationCurve_3; }
	inline void set_animationCurve_3(AnimationCurve_t3306541151 * value)
	{
		___animationCurve_3 = value;
		Il2CppCodeGenWriteBarrier(&___animationCurve_3, value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(ResetCameraRotationExample_t1090417062, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_isReset_5() { return static_cast<int32_t>(offsetof(ResetCameraRotationExample_t1090417062, ___isReset_5)); }
	inline bool get_isReset_5() const { return ___isReset_5; }
	inline bool* get_address_of_isReset_5() { return &___isReset_5; }
	inline void set_isReset_5(bool value)
	{
		___isReset_5 = value;
	}

	inline static int32_t get_offset_of_camX_6() { return static_cast<int32_t>(offsetof(ResetCameraRotationExample_t1090417062, ___camX_6)); }
	inline float get_camX_6() const { return ___camX_6; }
	inline float* get_address_of_camX_6() { return &___camX_6; }
	inline void set_camX_6(float value)
	{
		___camX_6 = value;
	}

	inline static int32_t get_offset_of_camY_7() { return static_cast<int32_t>(offsetof(ResetCameraRotationExample_t1090417062, ___camY_7)); }
	inline float get_camY_7() const { return ___camY_7; }
	inline float* get_address_of_camY_7() { return &___camY_7; }
	inline void set_camY_7(float value)
	{
		___camY_7 = value;
	}

	inline static int32_t get_offset_of_control_8() { return static_cast<int32_t>(offsetof(ResetCameraRotationExample_t1090417062, ___control_8)); }
	inline OnlineMapsTileSetControl_t3368302803 * get_control_8() const { return ___control_8; }
	inline OnlineMapsTileSetControl_t3368302803 ** get_address_of_control_8() { return &___control_8; }
	inline void set_control_8(OnlineMapsTileSetControl_t3368302803 * value)
	{
		___control_8 = value;
		Il2CppCodeGenWriteBarrier(&___control_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
