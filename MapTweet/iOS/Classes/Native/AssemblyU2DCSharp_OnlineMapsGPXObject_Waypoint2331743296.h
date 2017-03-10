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
// System.Collections.Generic.List`1<OnlineMapsGPXObject/Link>
struct List_1_t1601987799;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "mscorlib_System_Nullable_1_gen2304312229.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGPXObject/Waypoint
struct  Waypoint_t2331743296  : public Il2CppObject
{
public:
	// System.Nullable`1<System.Double> OnlineMapsGPXObject/Waypoint::elevation
	Nullable_1_t2341081996  ___elevation_0;
	// System.Nullable`1<System.DateTime> OnlineMapsGPXObject/Waypoint::time
	Nullable_1_t3251239280  ___time_1;
	// System.Nullable`1<System.Double> OnlineMapsGPXObject/Waypoint::geoidheight
	Nullable_1_t2341081996  ___geoidheight_2;
	// System.String OnlineMapsGPXObject/Waypoint::name
	String_t* ___name_3;
	// System.String OnlineMapsGPXObject/Waypoint::comment
	String_t* ___comment_4;
	// System.String OnlineMapsGPXObject/Waypoint::description
	String_t* ___description_5;
	// System.String OnlineMapsGPXObject/Waypoint::source
	String_t* ___source_6;
	// System.Collections.Generic.List`1<OnlineMapsGPXObject/Link> OnlineMapsGPXObject/Waypoint::links
	List_1_t1601987799 * ___links_7;
	// System.String OnlineMapsGPXObject/Waypoint::symbol
	String_t* ___symbol_8;
	// System.String OnlineMapsGPXObject/Waypoint::type
	String_t* ___type_9;
	// System.String OnlineMapsGPXObject/Waypoint::fix
	String_t* ___fix_10;
	// System.Nullable`1<System.UInt32> OnlineMapsGPXObject/Waypoint::sat
	Nullable_1_t412748336  ___sat_11;
	// System.Nullable`1<System.Double> OnlineMapsGPXObject/Waypoint::hdop
	Nullable_1_t2341081996  ___hdop_12;
	// System.Nullable`1<System.Double> OnlineMapsGPXObject/Waypoint::vdop
	Nullable_1_t2341081996  ___vdop_13;
	// System.Nullable`1<System.Double> OnlineMapsGPXObject/Waypoint::pdop
	Nullable_1_t2341081996  ___pdop_14;
	// System.Nullable`1<System.Double> OnlineMapsGPXObject/Waypoint::ageofdgpsdata
	Nullable_1_t2341081996  ___ageofdgpsdata_15;
	// OnlineMapsXML OnlineMapsGPXObject/Waypoint::extensions
	OnlineMapsXML_t3341520387 * ___extensions_16;
	// System.Double OnlineMapsGPXObject/Waypoint::_lat
	double ____lat_17;
	// System.Double OnlineMapsGPXObject/Waypoint::_lon
	double ____lon_18;
	// System.Nullable`1<System.Double> OnlineMapsGPXObject/Waypoint::_magvar
	Nullable_1_t2341081996  ____magvar_19;
	// System.Nullable`1<System.Int16> OnlineMapsGPXObject/Waypoint::_dgpsid
	Nullable_1_t2304312229  ____dgpsid_20;

public:
	inline static int32_t get_offset_of_elevation_0() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___elevation_0)); }
	inline Nullable_1_t2341081996  get_elevation_0() const { return ___elevation_0; }
	inline Nullable_1_t2341081996 * get_address_of_elevation_0() { return &___elevation_0; }
	inline void set_elevation_0(Nullable_1_t2341081996  value)
	{
		___elevation_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___time_1)); }
	inline Nullable_1_t3251239280  get_time_1() const { return ___time_1; }
	inline Nullable_1_t3251239280 * get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(Nullable_1_t3251239280  value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_geoidheight_2() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___geoidheight_2)); }
	inline Nullable_1_t2341081996  get_geoidheight_2() const { return ___geoidheight_2; }
	inline Nullable_1_t2341081996 * get_address_of_geoidheight_2() { return &___geoidheight_2; }
	inline void set_geoidheight_2(Nullable_1_t2341081996  value)
	{
		___geoidheight_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_comment_4() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___comment_4)); }
	inline String_t* get_comment_4() const { return ___comment_4; }
	inline String_t** get_address_of_comment_4() { return &___comment_4; }
	inline void set_comment_4(String_t* value)
	{
		___comment_4 = value;
		Il2CppCodeGenWriteBarrier(&___comment_4, value);
	}

	inline static int32_t get_offset_of_description_5() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___description_5)); }
	inline String_t* get_description_5() const { return ___description_5; }
	inline String_t** get_address_of_description_5() { return &___description_5; }
	inline void set_description_5(String_t* value)
	{
		___description_5 = value;
		Il2CppCodeGenWriteBarrier(&___description_5, value);
	}

	inline static int32_t get_offset_of_source_6() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___source_6)); }
	inline String_t* get_source_6() const { return ___source_6; }
	inline String_t** get_address_of_source_6() { return &___source_6; }
	inline void set_source_6(String_t* value)
	{
		___source_6 = value;
		Il2CppCodeGenWriteBarrier(&___source_6, value);
	}

	inline static int32_t get_offset_of_links_7() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___links_7)); }
	inline List_1_t1601987799 * get_links_7() const { return ___links_7; }
	inline List_1_t1601987799 ** get_address_of_links_7() { return &___links_7; }
	inline void set_links_7(List_1_t1601987799 * value)
	{
		___links_7 = value;
		Il2CppCodeGenWriteBarrier(&___links_7, value);
	}

	inline static int32_t get_offset_of_symbol_8() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___symbol_8)); }
	inline String_t* get_symbol_8() const { return ___symbol_8; }
	inline String_t** get_address_of_symbol_8() { return &___symbol_8; }
	inline void set_symbol_8(String_t* value)
	{
		___symbol_8 = value;
		Il2CppCodeGenWriteBarrier(&___symbol_8, value);
	}

	inline static int32_t get_offset_of_type_9() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___type_9)); }
	inline String_t* get_type_9() const { return ___type_9; }
	inline String_t** get_address_of_type_9() { return &___type_9; }
	inline void set_type_9(String_t* value)
	{
		___type_9 = value;
		Il2CppCodeGenWriteBarrier(&___type_9, value);
	}

	inline static int32_t get_offset_of_fix_10() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___fix_10)); }
	inline String_t* get_fix_10() const { return ___fix_10; }
	inline String_t** get_address_of_fix_10() { return &___fix_10; }
	inline void set_fix_10(String_t* value)
	{
		___fix_10 = value;
		Il2CppCodeGenWriteBarrier(&___fix_10, value);
	}

	inline static int32_t get_offset_of_sat_11() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___sat_11)); }
	inline Nullable_1_t412748336  get_sat_11() const { return ___sat_11; }
	inline Nullable_1_t412748336 * get_address_of_sat_11() { return &___sat_11; }
	inline void set_sat_11(Nullable_1_t412748336  value)
	{
		___sat_11 = value;
	}

	inline static int32_t get_offset_of_hdop_12() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___hdop_12)); }
	inline Nullable_1_t2341081996  get_hdop_12() const { return ___hdop_12; }
	inline Nullable_1_t2341081996 * get_address_of_hdop_12() { return &___hdop_12; }
	inline void set_hdop_12(Nullable_1_t2341081996  value)
	{
		___hdop_12 = value;
	}

	inline static int32_t get_offset_of_vdop_13() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___vdop_13)); }
	inline Nullable_1_t2341081996  get_vdop_13() const { return ___vdop_13; }
	inline Nullable_1_t2341081996 * get_address_of_vdop_13() { return &___vdop_13; }
	inline void set_vdop_13(Nullable_1_t2341081996  value)
	{
		___vdop_13 = value;
	}

	inline static int32_t get_offset_of_pdop_14() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___pdop_14)); }
	inline Nullable_1_t2341081996  get_pdop_14() const { return ___pdop_14; }
	inline Nullable_1_t2341081996 * get_address_of_pdop_14() { return &___pdop_14; }
	inline void set_pdop_14(Nullable_1_t2341081996  value)
	{
		___pdop_14 = value;
	}

	inline static int32_t get_offset_of_ageofdgpsdata_15() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___ageofdgpsdata_15)); }
	inline Nullable_1_t2341081996  get_ageofdgpsdata_15() const { return ___ageofdgpsdata_15; }
	inline Nullable_1_t2341081996 * get_address_of_ageofdgpsdata_15() { return &___ageofdgpsdata_15; }
	inline void set_ageofdgpsdata_15(Nullable_1_t2341081996  value)
	{
		___ageofdgpsdata_15 = value;
	}

	inline static int32_t get_offset_of_extensions_16() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ___extensions_16)); }
	inline OnlineMapsXML_t3341520387 * get_extensions_16() const { return ___extensions_16; }
	inline OnlineMapsXML_t3341520387 ** get_address_of_extensions_16() { return &___extensions_16; }
	inline void set_extensions_16(OnlineMapsXML_t3341520387 * value)
	{
		___extensions_16 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_16, value);
	}

	inline static int32_t get_offset_of__lat_17() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ____lat_17)); }
	inline double get__lat_17() const { return ____lat_17; }
	inline double* get_address_of__lat_17() { return &____lat_17; }
	inline void set__lat_17(double value)
	{
		____lat_17 = value;
	}

	inline static int32_t get_offset_of__lon_18() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ____lon_18)); }
	inline double get__lon_18() const { return ____lon_18; }
	inline double* get_address_of__lon_18() { return &____lon_18; }
	inline void set__lon_18(double value)
	{
		____lon_18 = value;
	}

	inline static int32_t get_offset_of__magvar_19() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ____magvar_19)); }
	inline Nullable_1_t2341081996  get__magvar_19() const { return ____magvar_19; }
	inline Nullable_1_t2341081996 * get_address_of__magvar_19() { return &____magvar_19; }
	inline void set__magvar_19(Nullable_1_t2341081996  value)
	{
		____magvar_19 = value;
	}

	inline static int32_t get_offset_of__dgpsid_20() { return static_cast<int32_t>(offsetof(Waypoint_t2331743296, ____dgpsid_20)); }
	inline Nullable_1_t2304312229  get__dgpsid_20() const { return ____dgpsid_20; }
	inline Nullable_1_t2304312229 * get_address_of__dgpsid_20() { return &____dgpsid_20; }
	inline void set__dgpsid_20(Nullable_1_t2304312229  value)
	{
		____dgpsid_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
