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
// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate
struct GeoCoordinate_t2186656463;
// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate[]
struct GeoCoordinateU5BU5D_t3518221590;
// OnlineMapsHereRoutingAPIResult/Route/Note[]
struct NoteU5BU5D_t1742368649;
// OnlineMapsHereRoutingAPI/GeoRect
struct GeoRect_t3839859884;
// OnlineMapsHereRoutingAPIResult/Route/Maneuver/RoadShield
struct RoadShield_t1027223199;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/Maneuver
struct  Maneuver_t145317595  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::id
	String_t* ___id_0;
	// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate OnlineMapsHereRoutingAPIResult/Route/Maneuver::position
	GeoCoordinate_t2186656463 * ___position_1;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::instruction
	String_t* ___instruction_2;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPIResult/Route/Maneuver::travelTime
	Nullable_1_t2341081996  ___travelTime_3;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPIResult/Route/Maneuver::length
	Nullable_1_t2341081996  ___length_4;
	// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate[] OnlineMapsHereRoutingAPIResult/Route/Maneuver::shape
	GeoCoordinateU5BU5D_t3518221590* ___shape_5;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPIResult/Route/Maneuver::firstPoint
	Nullable_1_t334943763  ___firstPoint_6;
	// System.Nullable`1<System.Int32> OnlineMapsHereRoutingAPIResult/Route/Maneuver::lastPoint
	Nullable_1_t334943763  ___lastPoint_7;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPIResult/Route/Maneuver::time
	Nullable_1_t2341081996  ___time_8;
	// OnlineMapsHereRoutingAPIResult/Route/Note[] OnlineMapsHereRoutingAPIResult/Route/Maneuver::notes
	NoteU5BU5D_t1742368649* ___notes_9;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::nextManeuver
	String_t* ___nextManeuver_10;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::toLink
	String_t* ___toLink_11;
	// OnlineMapsHereRoutingAPI/GeoRect OnlineMapsHereRoutingAPIResult/Route/Maneuver::boundingBox
	GeoRect_t3839859884 * ___boundingBox_12;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::shapeQuality
	String_t* ___shapeQuality_13;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::action
	String_t* ___action_14;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::nextRoadName
	String_t* ___nextRoadName_15;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::direction
	String_t* ___direction_16;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::roadName
	String_t* ___roadName_17;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::signPost
	String_t* ___signPost_18;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::roadNumber
	String_t* ___roadNumber_19;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::nextRoadNumber
	String_t* ___nextRoadNumber_20;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::freewayExit
	String_t* ___freewayExit_21;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::freewayJunction
	String_t* ___freewayJunction_22;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Maneuver::trafficTime
	double ___trafficTime_23;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Maneuver::baseTime
	double ___baseTime_24;
	// OnlineMapsHereRoutingAPIResult/Route/Maneuver/RoadShield OnlineMapsHereRoutingAPIResult/Route/Maneuver::roadShield
	RoadShield_t1027223199 * ___roadShield_25;
	// System.Int32 OnlineMapsHereRoutingAPIResult/Route/Maneuver::startAngle
	int32_t ___startAngle_26;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::stopName
	String_t* ___stopName_27;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::arrivalPlatform
	String_t* ___arrivalPlatform_28;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::departurePlatform
	String_t* ___departurePlatform_29;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::line
	String_t* ___line_30;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::toLine
	String_t* ___toLine_31;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::accessPointName
	String_t* ___accessPointName_32;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Maneuver::waitTime
	double ___waitTime_33;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Maneuver::timeEstimatePrecision
	double ___timeEstimatePrecision_34;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Maneuver::ticket
	String_t* ___ticket_35;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Maneuver::departureDelay
	double ___departureDelay_36;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Maneuver::arrivalDelay
	double ___arrivalDelay_37;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___position_1)); }
	inline GeoCoordinate_t2186656463 * get_position_1() const { return ___position_1; }
	inline GeoCoordinate_t2186656463 ** get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(GeoCoordinate_t2186656463 * value)
	{
		___position_1 = value;
		Il2CppCodeGenWriteBarrier(&___position_1, value);
	}

	inline static int32_t get_offset_of_instruction_2() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___instruction_2)); }
	inline String_t* get_instruction_2() const { return ___instruction_2; }
	inline String_t** get_address_of_instruction_2() { return &___instruction_2; }
	inline void set_instruction_2(String_t* value)
	{
		___instruction_2 = value;
		Il2CppCodeGenWriteBarrier(&___instruction_2, value);
	}

	inline static int32_t get_offset_of_travelTime_3() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___travelTime_3)); }
	inline Nullable_1_t2341081996  get_travelTime_3() const { return ___travelTime_3; }
	inline Nullable_1_t2341081996 * get_address_of_travelTime_3() { return &___travelTime_3; }
	inline void set_travelTime_3(Nullable_1_t2341081996  value)
	{
		___travelTime_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___length_4)); }
	inline Nullable_1_t2341081996  get_length_4() const { return ___length_4; }
	inline Nullable_1_t2341081996 * get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(Nullable_1_t2341081996  value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_shape_5() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___shape_5)); }
	inline GeoCoordinateU5BU5D_t3518221590* get_shape_5() const { return ___shape_5; }
	inline GeoCoordinateU5BU5D_t3518221590** get_address_of_shape_5() { return &___shape_5; }
	inline void set_shape_5(GeoCoordinateU5BU5D_t3518221590* value)
	{
		___shape_5 = value;
		Il2CppCodeGenWriteBarrier(&___shape_5, value);
	}

	inline static int32_t get_offset_of_firstPoint_6() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___firstPoint_6)); }
	inline Nullable_1_t334943763  get_firstPoint_6() const { return ___firstPoint_6; }
	inline Nullable_1_t334943763 * get_address_of_firstPoint_6() { return &___firstPoint_6; }
	inline void set_firstPoint_6(Nullable_1_t334943763  value)
	{
		___firstPoint_6 = value;
	}

	inline static int32_t get_offset_of_lastPoint_7() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___lastPoint_7)); }
	inline Nullable_1_t334943763  get_lastPoint_7() const { return ___lastPoint_7; }
	inline Nullable_1_t334943763 * get_address_of_lastPoint_7() { return &___lastPoint_7; }
	inline void set_lastPoint_7(Nullable_1_t334943763  value)
	{
		___lastPoint_7 = value;
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___time_8)); }
	inline Nullable_1_t2341081996  get_time_8() const { return ___time_8; }
	inline Nullable_1_t2341081996 * get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(Nullable_1_t2341081996  value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_notes_9() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___notes_9)); }
	inline NoteU5BU5D_t1742368649* get_notes_9() const { return ___notes_9; }
	inline NoteU5BU5D_t1742368649** get_address_of_notes_9() { return &___notes_9; }
	inline void set_notes_9(NoteU5BU5D_t1742368649* value)
	{
		___notes_9 = value;
		Il2CppCodeGenWriteBarrier(&___notes_9, value);
	}

	inline static int32_t get_offset_of_nextManeuver_10() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___nextManeuver_10)); }
	inline String_t* get_nextManeuver_10() const { return ___nextManeuver_10; }
	inline String_t** get_address_of_nextManeuver_10() { return &___nextManeuver_10; }
	inline void set_nextManeuver_10(String_t* value)
	{
		___nextManeuver_10 = value;
		Il2CppCodeGenWriteBarrier(&___nextManeuver_10, value);
	}

	inline static int32_t get_offset_of_toLink_11() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___toLink_11)); }
	inline String_t* get_toLink_11() const { return ___toLink_11; }
	inline String_t** get_address_of_toLink_11() { return &___toLink_11; }
	inline void set_toLink_11(String_t* value)
	{
		___toLink_11 = value;
		Il2CppCodeGenWriteBarrier(&___toLink_11, value);
	}

	inline static int32_t get_offset_of_boundingBox_12() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___boundingBox_12)); }
	inline GeoRect_t3839859884 * get_boundingBox_12() const { return ___boundingBox_12; }
	inline GeoRect_t3839859884 ** get_address_of_boundingBox_12() { return &___boundingBox_12; }
	inline void set_boundingBox_12(GeoRect_t3839859884 * value)
	{
		___boundingBox_12 = value;
		Il2CppCodeGenWriteBarrier(&___boundingBox_12, value);
	}

	inline static int32_t get_offset_of_shapeQuality_13() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___shapeQuality_13)); }
	inline String_t* get_shapeQuality_13() const { return ___shapeQuality_13; }
	inline String_t** get_address_of_shapeQuality_13() { return &___shapeQuality_13; }
	inline void set_shapeQuality_13(String_t* value)
	{
		___shapeQuality_13 = value;
		Il2CppCodeGenWriteBarrier(&___shapeQuality_13, value);
	}

	inline static int32_t get_offset_of_action_14() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___action_14)); }
	inline String_t* get_action_14() const { return ___action_14; }
	inline String_t** get_address_of_action_14() { return &___action_14; }
	inline void set_action_14(String_t* value)
	{
		___action_14 = value;
		Il2CppCodeGenWriteBarrier(&___action_14, value);
	}

	inline static int32_t get_offset_of_nextRoadName_15() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___nextRoadName_15)); }
	inline String_t* get_nextRoadName_15() const { return ___nextRoadName_15; }
	inline String_t** get_address_of_nextRoadName_15() { return &___nextRoadName_15; }
	inline void set_nextRoadName_15(String_t* value)
	{
		___nextRoadName_15 = value;
		Il2CppCodeGenWriteBarrier(&___nextRoadName_15, value);
	}

	inline static int32_t get_offset_of_direction_16() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___direction_16)); }
	inline String_t* get_direction_16() const { return ___direction_16; }
	inline String_t** get_address_of_direction_16() { return &___direction_16; }
	inline void set_direction_16(String_t* value)
	{
		___direction_16 = value;
		Il2CppCodeGenWriteBarrier(&___direction_16, value);
	}

	inline static int32_t get_offset_of_roadName_17() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___roadName_17)); }
	inline String_t* get_roadName_17() const { return ___roadName_17; }
	inline String_t** get_address_of_roadName_17() { return &___roadName_17; }
	inline void set_roadName_17(String_t* value)
	{
		___roadName_17 = value;
		Il2CppCodeGenWriteBarrier(&___roadName_17, value);
	}

	inline static int32_t get_offset_of_signPost_18() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___signPost_18)); }
	inline String_t* get_signPost_18() const { return ___signPost_18; }
	inline String_t** get_address_of_signPost_18() { return &___signPost_18; }
	inline void set_signPost_18(String_t* value)
	{
		___signPost_18 = value;
		Il2CppCodeGenWriteBarrier(&___signPost_18, value);
	}

	inline static int32_t get_offset_of_roadNumber_19() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___roadNumber_19)); }
	inline String_t* get_roadNumber_19() const { return ___roadNumber_19; }
	inline String_t** get_address_of_roadNumber_19() { return &___roadNumber_19; }
	inline void set_roadNumber_19(String_t* value)
	{
		___roadNumber_19 = value;
		Il2CppCodeGenWriteBarrier(&___roadNumber_19, value);
	}

	inline static int32_t get_offset_of_nextRoadNumber_20() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___nextRoadNumber_20)); }
	inline String_t* get_nextRoadNumber_20() const { return ___nextRoadNumber_20; }
	inline String_t** get_address_of_nextRoadNumber_20() { return &___nextRoadNumber_20; }
	inline void set_nextRoadNumber_20(String_t* value)
	{
		___nextRoadNumber_20 = value;
		Il2CppCodeGenWriteBarrier(&___nextRoadNumber_20, value);
	}

	inline static int32_t get_offset_of_freewayExit_21() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___freewayExit_21)); }
	inline String_t* get_freewayExit_21() const { return ___freewayExit_21; }
	inline String_t** get_address_of_freewayExit_21() { return &___freewayExit_21; }
	inline void set_freewayExit_21(String_t* value)
	{
		___freewayExit_21 = value;
		Il2CppCodeGenWriteBarrier(&___freewayExit_21, value);
	}

	inline static int32_t get_offset_of_freewayJunction_22() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___freewayJunction_22)); }
	inline String_t* get_freewayJunction_22() const { return ___freewayJunction_22; }
	inline String_t** get_address_of_freewayJunction_22() { return &___freewayJunction_22; }
	inline void set_freewayJunction_22(String_t* value)
	{
		___freewayJunction_22 = value;
		Il2CppCodeGenWriteBarrier(&___freewayJunction_22, value);
	}

	inline static int32_t get_offset_of_trafficTime_23() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___trafficTime_23)); }
	inline double get_trafficTime_23() const { return ___trafficTime_23; }
	inline double* get_address_of_trafficTime_23() { return &___trafficTime_23; }
	inline void set_trafficTime_23(double value)
	{
		___trafficTime_23 = value;
	}

	inline static int32_t get_offset_of_baseTime_24() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___baseTime_24)); }
	inline double get_baseTime_24() const { return ___baseTime_24; }
	inline double* get_address_of_baseTime_24() { return &___baseTime_24; }
	inline void set_baseTime_24(double value)
	{
		___baseTime_24 = value;
	}

	inline static int32_t get_offset_of_roadShield_25() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___roadShield_25)); }
	inline RoadShield_t1027223199 * get_roadShield_25() const { return ___roadShield_25; }
	inline RoadShield_t1027223199 ** get_address_of_roadShield_25() { return &___roadShield_25; }
	inline void set_roadShield_25(RoadShield_t1027223199 * value)
	{
		___roadShield_25 = value;
		Il2CppCodeGenWriteBarrier(&___roadShield_25, value);
	}

	inline static int32_t get_offset_of_startAngle_26() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___startAngle_26)); }
	inline int32_t get_startAngle_26() const { return ___startAngle_26; }
	inline int32_t* get_address_of_startAngle_26() { return &___startAngle_26; }
	inline void set_startAngle_26(int32_t value)
	{
		___startAngle_26 = value;
	}

	inline static int32_t get_offset_of_stopName_27() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___stopName_27)); }
	inline String_t* get_stopName_27() const { return ___stopName_27; }
	inline String_t** get_address_of_stopName_27() { return &___stopName_27; }
	inline void set_stopName_27(String_t* value)
	{
		___stopName_27 = value;
		Il2CppCodeGenWriteBarrier(&___stopName_27, value);
	}

	inline static int32_t get_offset_of_arrivalPlatform_28() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___arrivalPlatform_28)); }
	inline String_t* get_arrivalPlatform_28() const { return ___arrivalPlatform_28; }
	inline String_t** get_address_of_arrivalPlatform_28() { return &___arrivalPlatform_28; }
	inline void set_arrivalPlatform_28(String_t* value)
	{
		___arrivalPlatform_28 = value;
		Il2CppCodeGenWriteBarrier(&___arrivalPlatform_28, value);
	}

	inline static int32_t get_offset_of_departurePlatform_29() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___departurePlatform_29)); }
	inline String_t* get_departurePlatform_29() const { return ___departurePlatform_29; }
	inline String_t** get_address_of_departurePlatform_29() { return &___departurePlatform_29; }
	inline void set_departurePlatform_29(String_t* value)
	{
		___departurePlatform_29 = value;
		Il2CppCodeGenWriteBarrier(&___departurePlatform_29, value);
	}

	inline static int32_t get_offset_of_line_30() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___line_30)); }
	inline String_t* get_line_30() const { return ___line_30; }
	inline String_t** get_address_of_line_30() { return &___line_30; }
	inline void set_line_30(String_t* value)
	{
		___line_30 = value;
		Il2CppCodeGenWriteBarrier(&___line_30, value);
	}

	inline static int32_t get_offset_of_toLine_31() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___toLine_31)); }
	inline String_t* get_toLine_31() const { return ___toLine_31; }
	inline String_t** get_address_of_toLine_31() { return &___toLine_31; }
	inline void set_toLine_31(String_t* value)
	{
		___toLine_31 = value;
		Il2CppCodeGenWriteBarrier(&___toLine_31, value);
	}

	inline static int32_t get_offset_of_accessPointName_32() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___accessPointName_32)); }
	inline String_t* get_accessPointName_32() const { return ___accessPointName_32; }
	inline String_t** get_address_of_accessPointName_32() { return &___accessPointName_32; }
	inline void set_accessPointName_32(String_t* value)
	{
		___accessPointName_32 = value;
		Il2CppCodeGenWriteBarrier(&___accessPointName_32, value);
	}

	inline static int32_t get_offset_of_waitTime_33() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___waitTime_33)); }
	inline double get_waitTime_33() const { return ___waitTime_33; }
	inline double* get_address_of_waitTime_33() { return &___waitTime_33; }
	inline void set_waitTime_33(double value)
	{
		___waitTime_33 = value;
	}

	inline static int32_t get_offset_of_timeEstimatePrecision_34() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___timeEstimatePrecision_34)); }
	inline double get_timeEstimatePrecision_34() const { return ___timeEstimatePrecision_34; }
	inline double* get_address_of_timeEstimatePrecision_34() { return &___timeEstimatePrecision_34; }
	inline void set_timeEstimatePrecision_34(double value)
	{
		___timeEstimatePrecision_34 = value;
	}

	inline static int32_t get_offset_of_ticket_35() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___ticket_35)); }
	inline String_t* get_ticket_35() const { return ___ticket_35; }
	inline String_t** get_address_of_ticket_35() { return &___ticket_35; }
	inline void set_ticket_35(String_t* value)
	{
		___ticket_35 = value;
		Il2CppCodeGenWriteBarrier(&___ticket_35, value);
	}

	inline static int32_t get_offset_of_departureDelay_36() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___departureDelay_36)); }
	inline double get_departureDelay_36() const { return ___departureDelay_36; }
	inline double* get_address_of_departureDelay_36() { return &___departureDelay_36; }
	inline void set_departureDelay_36(double value)
	{
		___departureDelay_36 = value;
	}

	inline static int32_t get_offset_of_arrivalDelay_37() { return static_cast<int32_t>(offsetof(Maneuver_t145317595, ___arrivalDelay_37)); }
	inline double get_arrivalDelay_37() const { return ___arrivalDelay_37; }
	inline double* get_address_of_arrivalDelay_37() { return &___arrivalDelay_37; }
	inline void set_arrivalDelay_37(double value)
	{
		___arrivalDelay_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
