#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// OnlineMapsGoogleDirectionsResult/Leg[]
struct LegU5BU5D_t2851586560;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// OnlineMapsGPXObject/Bounds
struct Bounds_t3670962826;
// System.String[]
struct StringU5BU5D_t1642385972;
// OnlineMapsGoogleDirectionsResult/Fare
struct Fare_t3041474827;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirectionsResult/Route
struct  Route_t2611031718  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult/Route::summary
	String_t* ___summary_0;
	// OnlineMapsGoogleDirectionsResult/Leg[] OnlineMapsGoogleDirectionsResult/Route::legs
	LegU5BU5D_t2851586560* ___legs_1;
	// System.String OnlineMapsGoogleDirectionsResult/Route::copyrights
	String_t* ___copyrights_2;
	// System.Int32[] OnlineMapsGoogleDirectionsResult/Route::waypoint_order
	Int32U5BU5D_t3030399641* ___waypoint_order_3;
	// UnityEngine.Vector2[] OnlineMapsGoogleDirectionsResult/Route::overview_polyline
	Vector2U5BU5D_t686124026* ___overview_polyline_4;
	// OnlineMapsGPXObject/Bounds OnlineMapsGoogleDirectionsResult/Route::bounds
	Bounds_t3670962826 * ___bounds_5;
	// System.String[] OnlineMapsGoogleDirectionsResult/Route::warnings
	StringU5BU5D_t1642385972* ___warnings_6;
	// OnlineMapsGoogleDirectionsResult/Fare OnlineMapsGoogleDirectionsResult/Route::fare
	Fare_t3041474827 * ___fare_7;

public:
	inline static int32_t get_offset_of_summary_0() { return static_cast<int32_t>(offsetof(Route_t2611031718, ___summary_0)); }
	inline String_t* get_summary_0() const { return ___summary_0; }
	inline String_t** get_address_of_summary_0() { return &___summary_0; }
	inline void set_summary_0(String_t* value)
	{
		___summary_0 = value;
		Il2CppCodeGenWriteBarrier(&___summary_0, value);
	}

	inline static int32_t get_offset_of_legs_1() { return static_cast<int32_t>(offsetof(Route_t2611031718, ___legs_1)); }
	inline LegU5BU5D_t2851586560* get_legs_1() const { return ___legs_1; }
	inline LegU5BU5D_t2851586560** get_address_of_legs_1() { return &___legs_1; }
	inline void set_legs_1(LegU5BU5D_t2851586560* value)
	{
		___legs_1 = value;
		Il2CppCodeGenWriteBarrier(&___legs_1, value);
	}

	inline static int32_t get_offset_of_copyrights_2() { return static_cast<int32_t>(offsetof(Route_t2611031718, ___copyrights_2)); }
	inline String_t* get_copyrights_2() const { return ___copyrights_2; }
	inline String_t** get_address_of_copyrights_2() { return &___copyrights_2; }
	inline void set_copyrights_2(String_t* value)
	{
		___copyrights_2 = value;
		Il2CppCodeGenWriteBarrier(&___copyrights_2, value);
	}

	inline static int32_t get_offset_of_waypoint_order_3() { return static_cast<int32_t>(offsetof(Route_t2611031718, ___waypoint_order_3)); }
	inline Int32U5BU5D_t3030399641* get_waypoint_order_3() const { return ___waypoint_order_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_waypoint_order_3() { return &___waypoint_order_3; }
	inline void set_waypoint_order_3(Int32U5BU5D_t3030399641* value)
	{
		___waypoint_order_3 = value;
		Il2CppCodeGenWriteBarrier(&___waypoint_order_3, value);
	}

	inline static int32_t get_offset_of_overview_polyline_4() { return static_cast<int32_t>(offsetof(Route_t2611031718, ___overview_polyline_4)); }
	inline Vector2U5BU5D_t686124026* get_overview_polyline_4() const { return ___overview_polyline_4; }
	inline Vector2U5BU5D_t686124026** get_address_of_overview_polyline_4() { return &___overview_polyline_4; }
	inline void set_overview_polyline_4(Vector2U5BU5D_t686124026* value)
	{
		___overview_polyline_4 = value;
		Il2CppCodeGenWriteBarrier(&___overview_polyline_4, value);
	}

	inline static int32_t get_offset_of_bounds_5() { return static_cast<int32_t>(offsetof(Route_t2611031718, ___bounds_5)); }
	inline Bounds_t3670962826 * get_bounds_5() const { return ___bounds_5; }
	inline Bounds_t3670962826 ** get_address_of_bounds_5() { return &___bounds_5; }
	inline void set_bounds_5(Bounds_t3670962826 * value)
	{
		___bounds_5 = value;
		Il2CppCodeGenWriteBarrier(&___bounds_5, value);
	}

	inline static int32_t get_offset_of_warnings_6() { return static_cast<int32_t>(offsetof(Route_t2611031718, ___warnings_6)); }
	inline StringU5BU5D_t1642385972* get_warnings_6() const { return ___warnings_6; }
	inline StringU5BU5D_t1642385972** get_address_of_warnings_6() { return &___warnings_6; }
	inline void set_warnings_6(StringU5BU5D_t1642385972* value)
	{
		___warnings_6 = value;
		Il2CppCodeGenWriteBarrier(&___warnings_6, value);
	}

	inline static int32_t get_offset_of_fare_7() { return static_cast<int32_t>(offsetof(Route_t2611031718, ___fare_7)); }
	inline Fare_t3041474827 * get_fare_7() const { return ___fare_7; }
	inline Fare_t3041474827 ** get_address_of_fare_7() { return &___fare_7; }
	inline void set_fare_7(Fare_t3041474827 * value)
	{
		___fare_7 = value;
		Il2CppCodeGenWriteBarrier(&___fare_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
