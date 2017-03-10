#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsOSMNominatimResult
struct  OnlineMapsOSMNominatimResult_t3536961484  : public Il2CppObject
{
public:
	// OnlineMapsXML OnlineMapsOSMNominatimResult::node
	OnlineMapsXML_t3341520387 * ___node_0;
	// System.Int64 OnlineMapsOSMNominatimResult::place_id
	int64_t ___place_id_1;
	// System.String OnlineMapsOSMNominatimResult::osm_type
	String_t* ___osm_type_2;
	// System.Int64 OnlineMapsOSMNominatimResult::osm_id
	int64_t ___osm_id_3;
	// System.Int32 OnlineMapsOSMNominatimResult::place_rank
	int32_t ___place_rank_4;
	// UnityEngine.Rect OnlineMapsOSMNominatimResult::boundingbox
	Rect_t3681755626  ___boundingbox_5;
	// System.Double OnlineMapsOSMNominatimResult::latitude
	double ___latitude_6;
	// System.Double OnlineMapsOSMNominatimResult::longitude
	double ___longitude_7;
	// UnityEngine.Vector2 OnlineMapsOSMNominatimResult::location
	Vector2_t2243707579  ___location_8;
	// System.String OnlineMapsOSMNominatimResult::display_name
	String_t* ___display_name_9;
	// System.String OnlineMapsOSMNominatimResult::type
	String_t* ___type_10;
	// System.Double OnlineMapsOSMNominatimResult::importance
	double ___importance_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> OnlineMapsOSMNominatimResult::addressdetails
	Dictionary_2_t3943999495 * ___addressdetails_12;

public:
	inline static int32_t get_offset_of_node_0() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___node_0)); }
	inline OnlineMapsXML_t3341520387 * get_node_0() const { return ___node_0; }
	inline OnlineMapsXML_t3341520387 ** get_address_of_node_0() { return &___node_0; }
	inline void set_node_0(OnlineMapsXML_t3341520387 * value)
	{
		___node_0 = value;
		Il2CppCodeGenWriteBarrier(&___node_0, value);
	}

	inline static int32_t get_offset_of_place_id_1() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___place_id_1)); }
	inline int64_t get_place_id_1() const { return ___place_id_1; }
	inline int64_t* get_address_of_place_id_1() { return &___place_id_1; }
	inline void set_place_id_1(int64_t value)
	{
		___place_id_1 = value;
	}

	inline static int32_t get_offset_of_osm_type_2() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___osm_type_2)); }
	inline String_t* get_osm_type_2() const { return ___osm_type_2; }
	inline String_t** get_address_of_osm_type_2() { return &___osm_type_2; }
	inline void set_osm_type_2(String_t* value)
	{
		___osm_type_2 = value;
		Il2CppCodeGenWriteBarrier(&___osm_type_2, value);
	}

	inline static int32_t get_offset_of_osm_id_3() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___osm_id_3)); }
	inline int64_t get_osm_id_3() const { return ___osm_id_3; }
	inline int64_t* get_address_of_osm_id_3() { return &___osm_id_3; }
	inline void set_osm_id_3(int64_t value)
	{
		___osm_id_3 = value;
	}

	inline static int32_t get_offset_of_place_rank_4() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___place_rank_4)); }
	inline int32_t get_place_rank_4() const { return ___place_rank_4; }
	inline int32_t* get_address_of_place_rank_4() { return &___place_rank_4; }
	inline void set_place_rank_4(int32_t value)
	{
		___place_rank_4 = value;
	}

	inline static int32_t get_offset_of_boundingbox_5() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___boundingbox_5)); }
	inline Rect_t3681755626  get_boundingbox_5() const { return ___boundingbox_5; }
	inline Rect_t3681755626 * get_address_of_boundingbox_5() { return &___boundingbox_5; }
	inline void set_boundingbox_5(Rect_t3681755626  value)
	{
		___boundingbox_5 = value;
	}

	inline static int32_t get_offset_of_latitude_6() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___latitude_6)); }
	inline double get_latitude_6() const { return ___latitude_6; }
	inline double* get_address_of_latitude_6() { return &___latitude_6; }
	inline void set_latitude_6(double value)
	{
		___latitude_6 = value;
	}

	inline static int32_t get_offset_of_longitude_7() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___longitude_7)); }
	inline double get_longitude_7() const { return ___longitude_7; }
	inline double* get_address_of_longitude_7() { return &___longitude_7; }
	inline void set_longitude_7(double value)
	{
		___longitude_7 = value;
	}

	inline static int32_t get_offset_of_location_8() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___location_8)); }
	inline Vector2_t2243707579  get_location_8() const { return ___location_8; }
	inline Vector2_t2243707579 * get_address_of_location_8() { return &___location_8; }
	inline void set_location_8(Vector2_t2243707579  value)
	{
		___location_8 = value;
	}

	inline static int32_t get_offset_of_display_name_9() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___display_name_9)); }
	inline String_t* get_display_name_9() const { return ___display_name_9; }
	inline String_t** get_address_of_display_name_9() { return &___display_name_9; }
	inline void set_display_name_9(String_t* value)
	{
		___display_name_9 = value;
		Il2CppCodeGenWriteBarrier(&___display_name_9, value);
	}

	inline static int32_t get_offset_of_type_10() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___type_10)); }
	inline String_t* get_type_10() const { return ___type_10; }
	inline String_t** get_address_of_type_10() { return &___type_10; }
	inline void set_type_10(String_t* value)
	{
		___type_10 = value;
		Il2CppCodeGenWriteBarrier(&___type_10, value);
	}

	inline static int32_t get_offset_of_importance_11() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___importance_11)); }
	inline double get_importance_11() const { return ___importance_11; }
	inline double* get_address_of_importance_11() { return &___importance_11; }
	inline void set_importance_11(double value)
	{
		___importance_11 = value;
	}

	inline static int32_t get_offset_of_addressdetails_12() { return static_cast<int32_t>(offsetof(OnlineMapsOSMNominatimResult_t3536961484, ___addressdetails_12)); }
	inline Dictionary_2_t3943999495 * get_addressdetails_12() const { return ___addressdetails_12; }
	inline Dictionary_2_t3943999495 ** get_address_of_addressdetails_12() { return &___addressdetails_12; }
	inline void set_addressdetails_12(Dictionary_2_t3943999495 * value)
	{
		___addressdetails_12 = value;
		Il2CppCodeGenWriteBarrier(&___addressdetails_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
