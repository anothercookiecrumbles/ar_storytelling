#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsGoogleDirectionsResult/NameLocation
struct NameLocation_t3892601953;
// OnlineMapsGoogleDirectionsResult/TextValueZone`1<System.String>
struct TextValueZone_1_t2115376360;
// System.String
struct String_t;
// OnlineMapsGoogleDirectionsResult/Line
struct Line_t3451407833;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirectionsResult/TransitDetails
struct  TransitDetails_t3700021106  : public Il2CppObject
{
public:
	// OnlineMapsGoogleDirectionsResult/NameLocation OnlineMapsGoogleDirectionsResult/TransitDetails::arrival_stop
	NameLocation_t3892601953 * ___arrival_stop_0;
	// OnlineMapsGoogleDirectionsResult/NameLocation OnlineMapsGoogleDirectionsResult/TransitDetails::departure_stop
	NameLocation_t3892601953 * ___departure_stop_1;
	// OnlineMapsGoogleDirectionsResult/TextValueZone`1<System.String> OnlineMapsGoogleDirectionsResult/TransitDetails::arrival_time
	TextValueZone_1_t2115376360 * ___arrival_time_2;
	// OnlineMapsGoogleDirectionsResult/TextValueZone`1<System.String> OnlineMapsGoogleDirectionsResult/TransitDetails::departure_time
	TextValueZone_1_t2115376360 * ___departure_time_3;
	// System.String OnlineMapsGoogleDirectionsResult/TransitDetails::headsign
	String_t* ___headsign_4;
	// System.Int32 OnlineMapsGoogleDirectionsResult/TransitDetails::headway
	int32_t ___headway_5;
	// System.Int32 OnlineMapsGoogleDirectionsResult/TransitDetails::num_stops
	int32_t ___num_stops_6;
	// OnlineMapsGoogleDirectionsResult/Line OnlineMapsGoogleDirectionsResult/TransitDetails::line
	Line_t3451407833 * ___line_7;

public:
	inline static int32_t get_offset_of_arrival_stop_0() { return static_cast<int32_t>(offsetof(TransitDetails_t3700021106, ___arrival_stop_0)); }
	inline NameLocation_t3892601953 * get_arrival_stop_0() const { return ___arrival_stop_0; }
	inline NameLocation_t3892601953 ** get_address_of_arrival_stop_0() { return &___arrival_stop_0; }
	inline void set_arrival_stop_0(NameLocation_t3892601953 * value)
	{
		___arrival_stop_0 = value;
		Il2CppCodeGenWriteBarrier(&___arrival_stop_0, value);
	}

	inline static int32_t get_offset_of_departure_stop_1() { return static_cast<int32_t>(offsetof(TransitDetails_t3700021106, ___departure_stop_1)); }
	inline NameLocation_t3892601953 * get_departure_stop_1() const { return ___departure_stop_1; }
	inline NameLocation_t3892601953 ** get_address_of_departure_stop_1() { return &___departure_stop_1; }
	inline void set_departure_stop_1(NameLocation_t3892601953 * value)
	{
		___departure_stop_1 = value;
		Il2CppCodeGenWriteBarrier(&___departure_stop_1, value);
	}

	inline static int32_t get_offset_of_arrival_time_2() { return static_cast<int32_t>(offsetof(TransitDetails_t3700021106, ___arrival_time_2)); }
	inline TextValueZone_1_t2115376360 * get_arrival_time_2() const { return ___arrival_time_2; }
	inline TextValueZone_1_t2115376360 ** get_address_of_arrival_time_2() { return &___arrival_time_2; }
	inline void set_arrival_time_2(TextValueZone_1_t2115376360 * value)
	{
		___arrival_time_2 = value;
		Il2CppCodeGenWriteBarrier(&___arrival_time_2, value);
	}

	inline static int32_t get_offset_of_departure_time_3() { return static_cast<int32_t>(offsetof(TransitDetails_t3700021106, ___departure_time_3)); }
	inline TextValueZone_1_t2115376360 * get_departure_time_3() const { return ___departure_time_3; }
	inline TextValueZone_1_t2115376360 ** get_address_of_departure_time_3() { return &___departure_time_3; }
	inline void set_departure_time_3(TextValueZone_1_t2115376360 * value)
	{
		___departure_time_3 = value;
		Il2CppCodeGenWriteBarrier(&___departure_time_3, value);
	}

	inline static int32_t get_offset_of_headsign_4() { return static_cast<int32_t>(offsetof(TransitDetails_t3700021106, ___headsign_4)); }
	inline String_t* get_headsign_4() const { return ___headsign_4; }
	inline String_t** get_address_of_headsign_4() { return &___headsign_4; }
	inline void set_headsign_4(String_t* value)
	{
		___headsign_4 = value;
		Il2CppCodeGenWriteBarrier(&___headsign_4, value);
	}

	inline static int32_t get_offset_of_headway_5() { return static_cast<int32_t>(offsetof(TransitDetails_t3700021106, ___headway_5)); }
	inline int32_t get_headway_5() const { return ___headway_5; }
	inline int32_t* get_address_of_headway_5() { return &___headway_5; }
	inline void set_headway_5(int32_t value)
	{
		___headway_5 = value;
	}

	inline static int32_t get_offset_of_num_stops_6() { return static_cast<int32_t>(offsetof(TransitDetails_t3700021106, ___num_stops_6)); }
	inline int32_t get_num_stops_6() const { return ___num_stops_6; }
	inline int32_t* get_address_of_num_stops_6() { return &___num_stops_6; }
	inline void set_num_stops_6(int32_t value)
	{
		___num_stops_6 = value;
	}

	inline static int32_t get_offset_of_line_7() { return static_cast<int32_t>(offsetof(TransitDetails_t3700021106, ___line_7)); }
	inline Line_t3451407833 * get_line_7() const { return ___line_7; }
	inline Line_t3451407833 ** get_address_of_line_7() { return &___line_7; }
	inline void set_line_7(Line_t3451407833 * value)
	{
		___line_7 = value;
		Il2CppCodeGenWriteBarrier(&___line_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
