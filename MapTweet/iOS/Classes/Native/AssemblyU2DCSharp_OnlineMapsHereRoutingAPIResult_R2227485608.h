#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsHereRoutingAPIResult/Route/Waypoint
struct Waypoint_t3247364219;
// OnlineMapsHereRoutingAPIResult/Route/Maneuver[]
struct ManeuverU5BU5D_t751352666;
// System.String[]
struct StringU5BU5D_t1642385972;
// OnlineMapsHereRoutingAPI/GeoRect
struct GeoRect_t3839859884;
// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate[]
struct GeoCoordinateU5BU5D_t3518221590;
// OnlineMapsHereRoutingAPIResult/Route/Summary
struct Summary_t4011134204;
// OnlineMapsHereRoutingAPIResult/Route/Summary[]
struct SummaryU5BU5D_t391222165;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/Leg
struct  Leg_t2227485608  : public Il2CppObject
{
public:
	// OnlineMapsHereRoutingAPIResult/Route/Waypoint OnlineMapsHereRoutingAPIResult/Route/Leg::start
	Waypoint_t3247364219 * ___start_0;
	// OnlineMapsHereRoutingAPIResult/Route/Waypoint OnlineMapsHereRoutingAPIResult/Route/Leg::end
	Waypoint_t3247364219 * ___end_1;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Leg::length
	double ___length_2;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Leg::travelTime
	double ___travelTime_3;
	// OnlineMapsHereRoutingAPIResult/Route/Maneuver[] OnlineMapsHereRoutingAPIResult/Route/Leg::maneuvers
	ManeuverU5BU5D_t751352666* ___maneuvers_4;
	// System.String[] OnlineMapsHereRoutingAPIResult/Route/Leg::links
	StringU5BU5D_t1642385972* ___links_5;
	// OnlineMapsHereRoutingAPI/GeoRect OnlineMapsHereRoutingAPIResult/Route/Leg::boundingBox
	GeoRect_t3839859884 * ___boundingBox_6;
	// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate[] OnlineMapsHereRoutingAPIResult/Route/Leg::shape
	GeoCoordinateU5BU5D_t3518221590* ___shape_7;
	// System.Int32 OnlineMapsHereRoutingAPIResult/Route/Leg::firstPoint
	int32_t ___firstPoint_8;
	// System.Int32 OnlineMapsHereRoutingAPIResult/Route/Leg::lastPoint
	int32_t ___lastPoint_9;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Leg::trafficTime
	double ___trafficTime_10;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Leg::baseTime
	double ___baseTime_11;
	// OnlineMapsHereRoutingAPIResult/Route/Summary OnlineMapsHereRoutingAPIResult/Route/Leg::summary
	Summary_t4011134204 * ___summary_12;
	// OnlineMapsHereRoutingAPIResult/Route/Summary[] OnlineMapsHereRoutingAPIResult/Route/Leg::subLegSummary
	SummaryU5BU5D_t391222165* ___subLegSummary_13;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___start_0)); }
	inline Waypoint_t3247364219 * get_start_0() const { return ___start_0; }
	inline Waypoint_t3247364219 ** get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(Waypoint_t3247364219 * value)
	{
		___start_0 = value;
		Il2CppCodeGenWriteBarrier(&___start_0, value);
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___end_1)); }
	inline Waypoint_t3247364219 * get_end_1() const { return ___end_1; }
	inline Waypoint_t3247364219 ** get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(Waypoint_t3247364219 * value)
	{
		___end_1 = value;
		Il2CppCodeGenWriteBarrier(&___end_1, value);
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___length_2)); }
	inline double get_length_2() const { return ___length_2; }
	inline double* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(double value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_travelTime_3() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___travelTime_3)); }
	inline double get_travelTime_3() const { return ___travelTime_3; }
	inline double* get_address_of_travelTime_3() { return &___travelTime_3; }
	inline void set_travelTime_3(double value)
	{
		___travelTime_3 = value;
	}

	inline static int32_t get_offset_of_maneuvers_4() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___maneuvers_4)); }
	inline ManeuverU5BU5D_t751352666* get_maneuvers_4() const { return ___maneuvers_4; }
	inline ManeuverU5BU5D_t751352666** get_address_of_maneuvers_4() { return &___maneuvers_4; }
	inline void set_maneuvers_4(ManeuverU5BU5D_t751352666* value)
	{
		___maneuvers_4 = value;
		Il2CppCodeGenWriteBarrier(&___maneuvers_4, value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___links_5)); }
	inline StringU5BU5D_t1642385972* get_links_5() const { return ___links_5; }
	inline StringU5BU5D_t1642385972** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(StringU5BU5D_t1642385972* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier(&___links_5, value);
	}

	inline static int32_t get_offset_of_boundingBox_6() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___boundingBox_6)); }
	inline GeoRect_t3839859884 * get_boundingBox_6() const { return ___boundingBox_6; }
	inline GeoRect_t3839859884 ** get_address_of_boundingBox_6() { return &___boundingBox_6; }
	inline void set_boundingBox_6(GeoRect_t3839859884 * value)
	{
		___boundingBox_6 = value;
		Il2CppCodeGenWriteBarrier(&___boundingBox_6, value);
	}

	inline static int32_t get_offset_of_shape_7() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___shape_7)); }
	inline GeoCoordinateU5BU5D_t3518221590* get_shape_7() const { return ___shape_7; }
	inline GeoCoordinateU5BU5D_t3518221590** get_address_of_shape_7() { return &___shape_7; }
	inline void set_shape_7(GeoCoordinateU5BU5D_t3518221590* value)
	{
		___shape_7 = value;
		Il2CppCodeGenWriteBarrier(&___shape_7, value);
	}

	inline static int32_t get_offset_of_firstPoint_8() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___firstPoint_8)); }
	inline int32_t get_firstPoint_8() const { return ___firstPoint_8; }
	inline int32_t* get_address_of_firstPoint_8() { return &___firstPoint_8; }
	inline void set_firstPoint_8(int32_t value)
	{
		___firstPoint_8 = value;
	}

	inline static int32_t get_offset_of_lastPoint_9() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___lastPoint_9)); }
	inline int32_t get_lastPoint_9() const { return ___lastPoint_9; }
	inline int32_t* get_address_of_lastPoint_9() { return &___lastPoint_9; }
	inline void set_lastPoint_9(int32_t value)
	{
		___lastPoint_9 = value;
	}

	inline static int32_t get_offset_of_trafficTime_10() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___trafficTime_10)); }
	inline double get_trafficTime_10() const { return ___trafficTime_10; }
	inline double* get_address_of_trafficTime_10() { return &___trafficTime_10; }
	inline void set_trafficTime_10(double value)
	{
		___trafficTime_10 = value;
	}

	inline static int32_t get_offset_of_baseTime_11() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___baseTime_11)); }
	inline double get_baseTime_11() const { return ___baseTime_11; }
	inline double* get_address_of_baseTime_11() { return &___baseTime_11; }
	inline void set_baseTime_11(double value)
	{
		___baseTime_11 = value;
	}

	inline static int32_t get_offset_of_summary_12() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___summary_12)); }
	inline Summary_t4011134204 * get_summary_12() const { return ___summary_12; }
	inline Summary_t4011134204 ** get_address_of_summary_12() { return &___summary_12; }
	inline void set_summary_12(Summary_t4011134204 * value)
	{
		___summary_12 = value;
		Il2CppCodeGenWriteBarrier(&___summary_12, value);
	}

	inline static int32_t get_offset_of_subLegSummary_13() { return static_cast<int32_t>(offsetof(Leg_t2227485608, ___subLegSummary_13)); }
	inline SummaryU5BU5D_t391222165* get_subLegSummary_13() const { return ___subLegSummary_13; }
	inline SummaryU5BU5D_t391222165** get_address_of_subLegSummary_13() { return &___subLegSummary_13; }
	inline void set_subLegSummary_13(SummaryU5BU5D_t391222165* value)
	{
		___subLegSummary_13 = value;
		Il2CppCodeGenWriteBarrier(&___subLegSummary_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
