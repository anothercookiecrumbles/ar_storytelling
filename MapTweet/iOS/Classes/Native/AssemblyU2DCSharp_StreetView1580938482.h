#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StreetView
struct  StreetView_t1580938482  : public MonoBehaviour_t1158329972
{
public:
	// System.Single StreetView::speed
	float ___speed_2;
	// UnityEngine.Transform StreetView::rotorY
	Transform_t3275118058 * ___rotorY_3;
	// UnityEngine.Transform StreetView::rotorX
	Transform_t3275118058 * ___rotorX_4;
	// UnityEngine.Vector3 StreetView::dragStart
	Vector3_t2243707580  ___dragStart_5;
	// UnityEngine.Vector3 StreetView::dragDelta
	Vector3_t2243707580  ___dragDelta_6;
	// UnityEngine.Vector3 StreetView::initialEulers
	Vector3_t2243707580  ___initialEulers_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(StreetView_t1580938482, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rotorY_3() { return static_cast<int32_t>(offsetof(StreetView_t1580938482, ___rotorY_3)); }
	inline Transform_t3275118058 * get_rotorY_3() const { return ___rotorY_3; }
	inline Transform_t3275118058 ** get_address_of_rotorY_3() { return &___rotorY_3; }
	inline void set_rotorY_3(Transform_t3275118058 * value)
	{
		___rotorY_3 = value;
		Il2CppCodeGenWriteBarrier(&___rotorY_3, value);
	}

	inline static int32_t get_offset_of_rotorX_4() { return static_cast<int32_t>(offsetof(StreetView_t1580938482, ___rotorX_4)); }
	inline Transform_t3275118058 * get_rotorX_4() const { return ___rotorX_4; }
	inline Transform_t3275118058 ** get_address_of_rotorX_4() { return &___rotorX_4; }
	inline void set_rotorX_4(Transform_t3275118058 * value)
	{
		___rotorX_4 = value;
		Il2CppCodeGenWriteBarrier(&___rotorX_4, value);
	}

	inline static int32_t get_offset_of_dragStart_5() { return static_cast<int32_t>(offsetof(StreetView_t1580938482, ___dragStart_5)); }
	inline Vector3_t2243707580  get_dragStart_5() const { return ___dragStart_5; }
	inline Vector3_t2243707580 * get_address_of_dragStart_5() { return &___dragStart_5; }
	inline void set_dragStart_5(Vector3_t2243707580  value)
	{
		___dragStart_5 = value;
	}

	inline static int32_t get_offset_of_dragDelta_6() { return static_cast<int32_t>(offsetof(StreetView_t1580938482, ___dragDelta_6)); }
	inline Vector3_t2243707580  get_dragDelta_6() const { return ___dragDelta_6; }
	inline Vector3_t2243707580 * get_address_of_dragDelta_6() { return &___dragDelta_6; }
	inline void set_dragDelta_6(Vector3_t2243707580  value)
	{
		___dragDelta_6 = value;
	}

	inline static int32_t get_offset_of_initialEulers_7() { return static_cast<int32_t>(offsetof(StreetView_t1580938482, ___initialEulers_7)); }
	inline Vector3_t2243707580  get_initialEulers_7() const { return ___initialEulers_7; }
	inline Vector3_t2243707580 * get_address_of_initialEulers_7() { return &___initialEulers_7; }
	inline void set_initialEulers_7(Vector3_t2243707580  value)
	{
		___initialEulers_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
