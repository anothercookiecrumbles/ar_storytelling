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
// OnlineMapsHereRoutingAPIResult/Route/Waypoint[]
struct WaypointU5BU5D_t3595503418;
// OnlineMapsHereRoutingAPI/RoutingMode
struct RoutingMode_t3690293030;
// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate[]
struct GeoCoordinateU5BU5D_t3518221590;
// OnlineMapsHereRoutingAPI/GeoRect
struct GeoRect_t3839859884;
// OnlineMapsHereRoutingAPIResult/Route/Leg[]
struct LegU5BU5D_t3038566585;
// OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine[]
struct PublicTransportLineU5BU5D_t1332872813;
// OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets[]
struct PublicTransportTicketsU5BU5D_t2733585544;
// OnlineMapsHereRoutingAPIResult/Route/Note[]
struct NoteU5BU5D_t1742368649;
// OnlineMapsHereRoutingAPIResult/Route/Summary
struct Summary_t4011134204;
// OnlineMapsHereRoutingAPIResult/Route/SummaryByCountry[]
struct SummaryByCountryU5BU5D_t1742535294;
// OnlineMapsHereRoutingAPIResult/Route/Generalization[]
struct GeneralizationU5BU5D_t1903566545;
// OnlineMapsHereRoutingAPIResult/Route/ManueverGroup[]
struct ManueverGroupU5BU5D_t2535354383;
// OnlineMapsHereRoutingAPIResult/Route/Incident[]
struct IncidentU5BU5D_t1875746307;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route
struct  Route_t1544495295  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route::routeId
	String_t* ___routeId_0;
	// OnlineMapsHereRoutingAPIResult/Route/Waypoint[] OnlineMapsHereRoutingAPIResult/Route::waypoints
	WaypointU5BU5D_t3595503418* ___waypoints_1;
	// OnlineMapsHereRoutingAPI/RoutingMode OnlineMapsHereRoutingAPIResult/Route::mode
	RoutingMode_t3690293030 * ___mode_2;
	// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate[] OnlineMapsHereRoutingAPIResult/Route::shape
	GeoCoordinateU5BU5D_t3518221590* ___shape_3;
	// OnlineMapsHereRoutingAPI/GeoRect OnlineMapsHereRoutingAPIResult/Route::boundingBox
	GeoRect_t3839859884 * ___boundingBox_4;
	// OnlineMapsHereRoutingAPIResult/Route/Leg[] OnlineMapsHereRoutingAPIResult/Route::legs
	LegU5BU5D_t3038566585* ___legs_5;
	// OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine[] OnlineMapsHereRoutingAPIResult/Route::publicTransportLines
	PublicTransportLineU5BU5D_t1332872813* ___publicTransportLines_6;
	// OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets[] OnlineMapsHereRoutingAPIResult/Route::publicTransportTickets
	PublicTransportTicketsU5BU5D_t2733585544* ___publicTransportTickets_7;
	// OnlineMapsHereRoutingAPIResult/Route/Note[] OnlineMapsHereRoutingAPIResult/Route::notes
	NoteU5BU5D_t1742368649* ___notes_8;
	// OnlineMapsHereRoutingAPIResult/Route/Summary OnlineMapsHereRoutingAPIResult/Route::summary
	Summary_t4011134204 * ___summary_9;
	// OnlineMapsHereRoutingAPIResult/Route/SummaryByCountry[] OnlineMapsHereRoutingAPIResult/Route::summaryByCountries
	SummaryByCountryU5BU5D_t1742535294* ___summaryByCountries_10;
	// OnlineMapsHereRoutingAPIResult/Route/Generalization[] OnlineMapsHereRoutingAPIResult/Route::generalizations
	GeneralizationU5BU5D_t1903566545* ___generalizations_11;
	// OnlineMapsHereRoutingAPIResult/Route/ManueverGroup[] OnlineMapsHereRoutingAPIResult/Route::manueverGroups
	ManueverGroupU5BU5D_t2535354383* ___manueverGroups_12;
	// OnlineMapsHereRoutingAPIResult/Route/Incident[] OnlineMapsHereRoutingAPIResult/Route::incidents
	IncidentU5BU5D_t1875746307* ___incidents_13;
	// System.String OnlineMapsHereRoutingAPIResult/Route::label
	String_t* ___label_14;

public:
	inline static int32_t get_offset_of_routeId_0() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___routeId_0)); }
	inline String_t* get_routeId_0() const { return ___routeId_0; }
	inline String_t** get_address_of_routeId_0() { return &___routeId_0; }
	inline void set_routeId_0(String_t* value)
	{
		___routeId_0 = value;
		Il2CppCodeGenWriteBarrier(&___routeId_0, value);
	}

	inline static int32_t get_offset_of_waypoints_1() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___waypoints_1)); }
	inline WaypointU5BU5D_t3595503418* get_waypoints_1() const { return ___waypoints_1; }
	inline WaypointU5BU5D_t3595503418** get_address_of_waypoints_1() { return &___waypoints_1; }
	inline void set_waypoints_1(WaypointU5BU5D_t3595503418* value)
	{
		___waypoints_1 = value;
		Il2CppCodeGenWriteBarrier(&___waypoints_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___mode_2)); }
	inline RoutingMode_t3690293030 * get_mode_2() const { return ___mode_2; }
	inline RoutingMode_t3690293030 ** get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(RoutingMode_t3690293030 * value)
	{
		___mode_2 = value;
		Il2CppCodeGenWriteBarrier(&___mode_2, value);
	}

	inline static int32_t get_offset_of_shape_3() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___shape_3)); }
	inline GeoCoordinateU5BU5D_t3518221590* get_shape_3() const { return ___shape_3; }
	inline GeoCoordinateU5BU5D_t3518221590** get_address_of_shape_3() { return &___shape_3; }
	inline void set_shape_3(GeoCoordinateU5BU5D_t3518221590* value)
	{
		___shape_3 = value;
		Il2CppCodeGenWriteBarrier(&___shape_3, value);
	}

	inline static int32_t get_offset_of_boundingBox_4() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___boundingBox_4)); }
	inline GeoRect_t3839859884 * get_boundingBox_4() const { return ___boundingBox_4; }
	inline GeoRect_t3839859884 ** get_address_of_boundingBox_4() { return &___boundingBox_4; }
	inline void set_boundingBox_4(GeoRect_t3839859884 * value)
	{
		___boundingBox_4 = value;
		Il2CppCodeGenWriteBarrier(&___boundingBox_4, value);
	}

	inline static int32_t get_offset_of_legs_5() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___legs_5)); }
	inline LegU5BU5D_t3038566585* get_legs_5() const { return ___legs_5; }
	inline LegU5BU5D_t3038566585** get_address_of_legs_5() { return &___legs_5; }
	inline void set_legs_5(LegU5BU5D_t3038566585* value)
	{
		___legs_5 = value;
		Il2CppCodeGenWriteBarrier(&___legs_5, value);
	}

	inline static int32_t get_offset_of_publicTransportLines_6() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___publicTransportLines_6)); }
	inline PublicTransportLineU5BU5D_t1332872813* get_publicTransportLines_6() const { return ___publicTransportLines_6; }
	inline PublicTransportLineU5BU5D_t1332872813** get_address_of_publicTransportLines_6() { return &___publicTransportLines_6; }
	inline void set_publicTransportLines_6(PublicTransportLineU5BU5D_t1332872813* value)
	{
		___publicTransportLines_6 = value;
		Il2CppCodeGenWriteBarrier(&___publicTransportLines_6, value);
	}

	inline static int32_t get_offset_of_publicTransportTickets_7() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___publicTransportTickets_7)); }
	inline PublicTransportTicketsU5BU5D_t2733585544* get_publicTransportTickets_7() const { return ___publicTransportTickets_7; }
	inline PublicTransportTicketsU5BU5D_t2733585544** get_address_of_publicTransportTickets_7() { return &___publicTransportTickets_7; }
	inline void set_publicTransportTickets_7(PublicTransportTicketsU5BU5D_t2733585544* value)
	{
		___publicTransportTickets_7 = value;
		Il2CppCodeGenWriteBarrier(&___publicTransportTickets_7, value);
	}

	inline static int32_t get_offset_of_notes_8() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___notes_8)); }
	inline NoteU5BU5D_t1742368649* get_notes_8() const { return ___notes_8; }
	inline NoteU5BU5D_t1742368649** get_address_of_notes_8() { return &___notes_8; }
	inline void set_notes_8(NoteU5BU5D_t1742368649* value)
	{
		___notes_8 = value;
		Il2CppCodeGenWriteBarrier(&___notes_8, value);
	}

	inline static int32_t get_offset_of_summary_9() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___summary_9)); }
	inline Summary_t4011134204 * get_summary_9() const { return ___summary_9; }
	inline Summary_t4011134204 ** get_address_of_summary_9() { return &___summary_9; }
	inline void set_summary_9(Summary_t4011134204 * value)
	{
		___summary_9 = value;
		Il2CppCodeGenWriteBarrier(&___summary_9, value);
	}

	inline static int32_t get_offset_of_summaryByCountries_10() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___summaryByCountries_10)); }
	inline SummaryByCountryU5BU5D_t1742535294* get_summaryByCountries_10() const { return ___summaryByCountries_10; }
	inline SummaryByCountryU5BU5D_t1742535294** get_address_of_summaryByCountries_10() { return &___summaryByCountries_10; }
	inline void set_summaryByCountries_10(SummaryByCountryU5BU5D_t1742535294* value)
	{
		___summaryByCountries_10 = value;
		Il2CppCodeGenWriteBarrier(&___summaryByCountries_10, value);
	}

	inline static int32_t get_offset_of_generalizations_11() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___generalizations_11)); }
	inline GeneralizationU5BU5D_t1903566545* get_generalizations_11() const { return ___generalizations_11; }
	inline GeneralizationU5BU5D_t1903566545** get_address_of_generalizations_11() { return &___generalizations_11; }
	inline void set_generalizations_11(GeneralizationU5BU5D_t1903566545* value)
	{
		___generalizations_11 = value;
		Il2CppCodeGenWriteBarrier(&___generalizations_11, value);
	}

	inline static int32_t get_offset_of_manueverGroups_12() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___manueverGroups_12)); }
	inline ManueverGroupU5BU5D_t2535354383* get_manueverGroups_12() const { return ___manueverGroups_12; }
	inline ManueverGroupU5BU5D_t2535354383** get_address_of_manueverGroups_12() { return &___manueverGroups_12; }
	inline void set_manueverGroups_12(ManueverGroupU5BU5D_t2535354383* value)
	{
		___manueverGroups_12 = value;
		Il2CppCodeGenWriteBarrier(&___manueverGroups_12, value);
	}

	inline static int32_t get_offset_of_incidents_13() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___incidents_13)); }
	inline IncidentU5BU5D_t1875746307* get_incidents_13() const { return ___incidents_13; }
	inline IncidentU5BU5D_t1875746307** get_address_of_incidents_13() { return &___incidents_13; }
	inline void set_incidents_13(IncidentU5BU5D_t1875746307* value)
	{
		___incidents_13 = value;
		Il2CppCodeGenWriteBarrier(&___incidents_13, value);
	}

	inline static int32_t get_offset_of_label_14() { return static_cast<int32_t>(offsetof(Route_t1544495295, ___label_14)); }
	inline String_t* get_label_14() const { return ___label_14; }
	inline String_t** get_address_of_label_14() { return &___label_14; }
	inline void set_label_14(String_t* value)
	{
		___label_14 = value;
		Il2CppCodeGenWriteBarrier(&___label_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
