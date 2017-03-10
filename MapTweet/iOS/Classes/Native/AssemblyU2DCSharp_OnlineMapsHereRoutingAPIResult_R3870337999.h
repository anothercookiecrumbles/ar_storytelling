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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine/Stop
struct  Stop_t3870337999  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine/Stop::id
	String_t* ___id_0;
	// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine/Stop::position
	GeoCoordinate_t2186656463 * ___position_1;
	// System.String OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine/Stop::line
	String_t* ___line_2;
	// System.String OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine/Stop::stopName
	String_t* ___stopName_3;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/PublicTransportLine/Stop::travelTime
	double ___travelTime_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Stop_t3870337999, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Stop_t3870337999, ___position_1)); }
	inline GeoCoordinate_t2186656463 * get_position_1() const { return ___position_1; }
	inline GeoCoordinate_t2186656463 ** get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(GeoCoordinate_t2186656463 * value)
	{
		___position_1 = value;
		Il2CppCodeGenWriteBarrier(&___position_1, value);
	}

	inline static int32_t get_offset_of_line_2() { return static_cast<int32_t>(offsetof(Stop_t3870337999, ___line_2)); }
	inline String_t* get_line_2() const { return ___line_2; }
	inline String_t** get_address_of_line_2() { return &___line_2; }
	inline void set_line_2(String_t* value)
	{
		___line_2 = value;
		Il2CppCodeGenWriteBarrier(&___line_2, value);
	}

	inline static int32_t get_offset_of_stopName_3() { return static_cast<int32_t>(offsetof(Stop_t3870337999, ___stopName_3)); }
	inline String_t* get_stopName_3() const { return ___stopName_3; }
	inline String_t** get_address_of_stopName_3() { return &___stopName_3; }
	inline void set_stopName_3(String_t* value)
	{
		___stopName_3 = value;
		Il2CppCodeGenWriteBarrier(&___stopName_3, value);
	}

	inline static int32_t get_offset_of_travelTime_4() { return static_cast<int32_t>(offsetof(Stop_t3870337999, ___travelTime_4)); }
	inline double get_travelTime_4() const { return ___travelTime_4; }
	inline double* get_address_of_travelTime_4() { return &___travelTime_4; }
	inline void set_travelTime_4(double value)
	{
		___travelTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
