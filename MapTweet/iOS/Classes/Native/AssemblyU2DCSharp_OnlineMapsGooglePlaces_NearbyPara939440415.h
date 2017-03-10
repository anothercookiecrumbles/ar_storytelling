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

#include "AssemblyU2DCSharp_OnlineMapsGooglePlaces_RequestPa3207285289.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen1041506235.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGooglePlaces/NearbyParams
struct  NearbyParams_t939440415  : public RequestParams_t3207285289
{
public:
	// System.Nullable`1<System.Double> OnlineMapsGooglePlaces/NearbyParams::longitude
	Nullable_1_t2341081996  ___longitude_0;
	// System.Nullable`1<System.Double> OnlineMapsGooglePlaces/NearbyParams::latitude
	Nullable_1_t2341081996  ___latitude_1;
	// System.Nullable`1<System.Int32> OnlineMapsGooglePlaces/NearbyParams::radius
	Nullable_1_t334943763  ___radius_2;
	// System.String OnlineMapsGooglePlaces/NearbyParams::keyword
	String_t* ___keyword_3;
	// System.String OnlineMapsGooglePlaces/NearbyParams::name
	String_t* ___name_4;
	// System.String OnlineMapsGooglePlaces/NearbyParams::types
	String_t* ___types_5;
	// System.Nullable`1<System.Int32> OnlineMapsGooglePlaces/NearbyParams::minprice
	Nullable_1_t334943763  ___minprice_6;
	// System.Nullable`1<System.Int32> OnlineMapsGooglePlaces/NearbyParams::maxprice
	Nullable_1_t334943763  ___maxprice_7;
	// System.Nullable`1<System.Boolean> OnlineMapsGooglePlaces/NearbyParams::opennow
	Nullable_1_t2088641033  ___opennow_8;
	// System.Nullable`1<OnlineMapsGooglePlaces/OnlineMapsFindPlacesRankBy> OnlineMapsGooglePlaces/NearbyParams::rankBy
	Nullable_1_t1041506235  ___rankBy_9;
	// System.String OnlineMapsGooglePlaces/NearbyParams::pagetoken
	String_t* ___pagetoken_10;
	// System.Nullable`1<System.Boolean> OnlineMapsGooglePlaces/NearbyParams::zagatselected
	Nullable_1_t2088641033  ___zagatselected_11;

public:
	inline static int32_t get_offset_of_longitude_0() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___longitude_0)); }
	inline Nullable_1_t2341081996  get_longitude_0() const { return ___longitude_0; }
	inline Nullable_1_t2341081996 * get_address_of_longitude_0() { return &___longitude_0; }
	inline void set_longitude_0(Nullable_1_t2341081996  value)
	{
		___longitude_0 = value;
	}

	inline static int32_t get_offset_of_latitude_1() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___latitude_1)); }
	inline Nullable_1_t2341081996  get_latitude_1() const { return ___latitude_1; }
	inline Nullable_1_t2341081996 * get_address_of_latitude_1() { return &___latitude_1; }
	inline void set_latitude_1(Nullable_1_t2341081996  value)
	{
		___latitude_1 = value;
	}

	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___radius_2)); }
	inline Nullable_1_t334943763  get_radius_2() const { return ___radius_2; }
	inline Nullable_1_t334943763 * get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(Nullable_1_t334943763  value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_keyword_3() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___keyword_3)); }
	inline String_t* get_keyword_3() const { return ___keyword_3; }
	inline String_t** get_address_of_keyword_3() { return &___keyword_3; }
	inline void set_keyword_3(String_t* value)
	{
		___keyword_3 = value;
		Il2CppCodeGenWriteBarrier(&___keyword_3, value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_types_5() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___types_5)); }
	inline String_t* get_types_5() const { return ___types_5; }
	inline String_t** get_address_of_types_5() { return &___types_5; }
	inline void set_types_5(String_t* value)
	{
		___types_5 = value;
		Il2CppCodeGenWriteBarrier(&___types_5, value);
	}

	inline static int32_t get_offset_of_minprice_6() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___minprice_6)); }
	inline Nullable_1_t334943763  get_minprice_6() const { return ___minprice_6; }
	inline Nullable_1_t334943763 * get_address_of_minprice_6() { return &___minprice_6; }
	inline void set_minprice_6(Nullable_1_t334943763  value)
	{
		___minprice_6 = value;
	}

	inline static int32_t get_offset_of_maxprice_7() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___maxprice_7)); }
	inline Nullable_1_t334943763  get_maxprice_7() const { return ___maxprice_7; }
	inline Nullable_1_t334943763 * get_address_of_maxprice_7() { return &___maxprice_7; }
	inline void set_maxprice_7(Nullable_1_t334943763  value)
	{
		___maxprice_7 = value;
	}

	inline static int32_t get_offset_of_opennow_8() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___opennow_8)); }
	inline Nullable_1_t2088641033  get_opennow_8() const { return ___opennow_8; }
	inline Nullable_1_t2088641033 * get_address_of_opennow_8() { return &___opennow_8; }
	inline void set_opennow_8(Nullable_1_t2088641033  value)
	{
		___opennow_8 = value;
	}

	inline static int32_t get_offset_of_rankBy_9() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___rankBy_9)); }
	inline Nullable_1_t1041506235  get_rankBy_9() const { return ___rankBy_9; }
	inline Nullable_1_t1041506235 * get_address_of_rankBy_9() { return &___rankBy_9; }
	inline void set_rankBy_9(Nullable_1_t1041506235  value)
	{
		___rankBy_9 = value;
	}

	inline static int32_t get_offset_of_pagetoken_10() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___pagetoken_10)); }
	inline String_t* get_pagetoken_10() const { return ___pagetoken_10; }
	inline String_t** get_address_of_pagetoken_10() { return &___pagetoken_10; }
	inline void set_pagetoken_10(String_t* value)
	{
		___pagetoken_10 = value;
		Il2CppCodeGenWriteBarrier(&___pagetoken_10, value);
	}

	inline static int32_t get_offset_of_zagatselected_11() { return static_cast<int32_t>(offsetof(NearbyParams_t939440415, ___zagatselected_11)); }
	inline Nullable_1_t2088641033  get_zagatselected_11() const { return ___zagatselected_11; }
	inline Nullable_1_t2088641033 * get_address_of_zagatselected_11() { return &___zagatselected_11; }
	inline void set_zagatselected_11(Nullable_1_t2088641033  value)
	{
		___zagatselected_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
