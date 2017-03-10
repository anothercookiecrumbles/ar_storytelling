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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsDemos.Aircraft
struct  Aircraft_t1482479722  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject InfinityCode.OnlineMapsDemos.Aircraft::container
	GameObject_t1756533147 * ___container_2;
	// System.Single InfinityCode.OnlineMapsDemos.Aircraft::altitude
	float ___altitude_3;
	// System.Single InfinityCode.OnlineMapsDemos.Aircraft::speed
	float ___speed_4;
	// UnityEngine.Vector3 InfinityCode.OnlineMapsDemos.Aircraft::cameraOffset
	Vector3_t2243707580  ___cameraOffset_5;
	// System.Single InfinityCode.OnlineMapsDemos.Aircraft::tiltSpeed
	float ___tiltSpeed_6;
	// System.Double InfinityCode.OnlineMapsDemos.Aircraft::px
	double ___px_7;
	// System.Double InfinityCode.OnlineMapsDemos.Aircraft::py
	double ___py_8;
	// System.Single InfinityCode.OnlineMapsDemos.Aircraft::tilt
	float ___tilt_9;
	// System.Single InfinityCode.OnlineMapsDemos.Aircraft::rotateSpeed
	float ___rotateSpeed_10;

public:
	inline static int32_t get_offset_of_container_2() { return static_cast<int32_t>(offsetof(Aircraft_t1482479722, ___container_2)); }
	inline GameObject_t1756533147 * get_container_2() const { return ___container_2; }
	inline GameObject_t1756533147 ** get_address_of_container_2() { return &___container_2; }
	inline void set_container_2(GameObject_t1756533147 * value)
	{
		___container_2 = value;
		Il2CppCodeGenWriteBarrier(&___container_2, value);
	}

	inline static int32_t get_offset_of_altitude_3() { return static_cast<int32_t>(offsetof(Aircraft_t1482479722, ___altitude_3)); }
	inline float get_altitude_3() const { return ___altitude_3; }
	inline float* get_address_of_altitude_3() { return &___altitude_3; }
	inline void set_altitude_3(float value)
	{
		___altitude_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Aircraft_t1482479722, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_cameraOffset_5() { return static_cast<int32_t>(offsetof(Aircraft_t1482479722, ___cameraOffset_5)); }
	inline Vector3_t2243707580  get_cameraOffset_5() const { return ___cameraOffset_5; }
	inline Vector3_t2243707580 * get_address_of_cameraOffset_5() { return &___cameraOffset_5; }
	inline void set_cameraOffset_5(Vector3_t2243707580  value)
	{
		___cameraOffset_5 = value;
	}

	inline static int32_t get_offset_of_tiltSpeed_6() { return static_cast<int32_t>(offsetof(Aircraft_t1482479722, ___tiltSpeed_6)); }
	inline float get_tiltSpeed_6() const { return ___tiltSpeed_6; }
	inline float* get_address_of_tiltSpeed_6() { return &___tiltSpeed_6; }
	inline void set_tiltSpeed_6(float value)
	{
		___tiltSpeed_6 = value;
	}

	inline static int32_t get_offset_of_px_7() { return static_cast<int32_t>(offsetof(Aircraft_t1482479722, ___px_7)); }
	inline double get_px_7() const { return ___px_7; }
	inline double* get_address_of_px_7() { return &___px_7; }
	inline void set_px_7(double value)
	{
		___px_7 = value;
	}

	inline static int32_t get_offset_of_py_8() { return static_cast<int32_t>(offsetof(Aircraft_t1482479722, ___py_8)); }
	inline double get_py_8() const { return ___py_8; }
	inline double* get_address_of_py_8() { return &___py_8; }
	inline void set_py_8(double value)
	{
		___py_8 = value;
	}

	inline static int32_t get_offset_of_tilt_9() { return static_cast<int32_t>(offsetof(Aircraft_t1482479722, ___tilt_9)); }
	inline float get_tilt_9() const { return ___tilt_9; }
	inline float* get_address_of_tilt_9() { return &___tilt_9; }
	inline void set_tilt_9(float value)
	{
		___tilt_9 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_10() { return static_cast<int32_t>(offsetof(Aircraft_t1482479722, ___rotateSpeed_10)); }
	inline float get_rotateSpeed_10() const { return ___rotateSpeed_10; }
	inline float* get_address_of_rotateSpeed_10() { return &___rotateSpeed_10; }
	inline void set_rotateSpeed_10(float value)
	{
		___rotateSpeed_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
