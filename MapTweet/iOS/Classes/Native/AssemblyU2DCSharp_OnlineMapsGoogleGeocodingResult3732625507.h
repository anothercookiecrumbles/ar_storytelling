#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsGoogleGeocodingResult/AddressComponent[]
struct AddressComponentU5BU5D_t1958594964;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleGeocodingResult
struct  OnlineMapsGoogleGeocodingResult_t3732625507  : public Il2CppObject
{
public:
	// OnlineMapsGoogleGeocodingResult/AddressComponent[] OnlineMapsGoogleGeocodingResult::address_components
	AddressComponentU5BU5D_t1958594964* ___address_components_0;
	// System.String[] OnlineMapsGoogleGeocodingResult::types
	StringU5BU5D_t1642385972* ___types_1;
	// System.String OnlineMapsGoogleGeocodingResult::formatted_address
	String_t* ___formatted_address_2;
	// System.String[] OnlineMapsGoogleGeocodingResult::postcode_localities
	StringU5BU5D_t1642385972* ___postcode_localities_3;
	// UnityEngine.Vector2 OnlineMapsGoogleGeocodingResult::geometry_location
	Vector2_t2243707579  ___geometry_location_4;
	// System.String OnlineMapsGoogleGeocodingResult::geometry_location_type
	String_t* ___geometry_location_type_5;
	// UnityEngine.Vector2 OnlineMapsGoogleGeocodingResult::geometry_viewport_northeast
	Vector2_t2243707579  ___geometry_viewport_northeast_6;
	// UnityEngine.Vector2 OnlineMapsGoogleGeocodingResult::geometry_viewport_southwest
	Vector2_t2243707579  ___geometry_viewport_southwest_7;
	// System.String OnlineMapsGoogleGeocodingResult::place_id
	String_t* ___place_id_8;
	// UnityEngine.Vector2 OnlineMapsGoogleGeocodingResult::geometry_bounds_northeast
	Vector2_t2243707579  ___geometry_bounds_northeast_9;
	// UnityEngine.Vector2 OnlineMapsGoogleGeocodingResult::geometry_bounds_southwest
	Vector2_t2243707579  ___geometry_bounds_southwest_10;
	// System.Boolean OnlineMapsGoogleGeocodingResult::partial_match
	bool ___partial_match_11;

public:
	inline static int32_t get_offset_of_address_components_0() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___address_components_0)); }
	inline AddressComponentU5BU5D_t1958594964* get_address_components_0() const { return ___address_components_0; }
	inline AddressComponentU5BU5D_t1958594964** get_address_of_address_components_0() { return &___address_components_0; }
	inline void set_address_components_0(AddressComponentU5BU5D_t1958594964* value)
	{
		___address_components_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_components_0, value);
	}

	inline static int32_t get_offset_of_types_1() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___types_1)); }
	inline StringU5BU5D_t1642385972* get_types_1() const { return ___types_1; }
	inline StringU5BU5D_t1642385972** get_address_of_types_1() { return &___types_1; }
	inline void set_types_1(StringU5BU5D_t1642385972* value)
	{
		___types_1 = value;
		Il2CppCodeGenWriteBarrier(&___types_1, value);
	}

	inline static int32_t get_offset_of_formatted_address_2() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___formatted_address_2)); }
	inline String_t* get_formatted_address_2() const { return ___formatted_address_2; }
	inline String_t** get_address_of_formatted_address_2() { return &___formatted_address_2; }
	inline void set_formatted_address_2(String_t* value)
	{
		___formatted_address_2 = value;
		Il2CppCodeGenWriteBarrier(&___formatted_address_2, value);
	}

	inline static int32_t get_offset_of_postcode_localities_3() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___postcode_localities_3)); }
	inline StringU5BU5D_t1642385972* get_postcode_localities_3() const { return ___postcode_localities_3; }
	inline StringU5BU5D_t1642385972** get_address_of_postcode_localities_3() { return &___postcode_localities_3; }
	inline void set_postcode_localities_3(StringU5BU5D_t1642385972* value)
	{
		___postcode_localities_3 = value;
		Il2CppCodeGenWriteBarrier(&___postcode_localities_3, value);
	}

	inline static int32_t get_offset_of_geometry_location_4() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___geometry_location_4)); }
	inline Vector2_t2243707579  get_geometry_location_4() const { return ___geometry_location_4; }
	inline Vector2_t2243707579 * get_address_of_geometry_location_4() { return &___geometry_location_4; }
	inline void set_geometry_location_4(Vector2_t2243707579  value)
	{
		___geometry_location_4 = value;
	}

	inline static int32_t get_offset_of_geometry_location_type_5() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___geometry_location_type_5)); }
	inline String_t* get_geometry_location_type_5() const { return ___geometry_location_type_5; }
	inline String_t** get_address_of_geometry_location_type_5() { return &___geometry_location_type_5; }
	inline void set_geometry_location_type_5(String_t* value)
	{
		___geometry_location_type_5 = value;
		Il2CppCodeGenWriteBarrier(&___geometry_location_type_5, value);
	}

	inline static int32_t get_offset_of_geometry_viewport_northeast_6() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___geometry_viewport_northeast_6)); }
	inline Vector2_t2243707579  get_geometry_viewport_northeast_6() const { return ___geometry_viewport_northeast_6; }
	inline Vector2_t2243707579 * get_address_of_geometry_viewport_northeast_6() { return &___geometry_viewport_northeast_6; }
	inline void set_geometry_viewport_northeast_6(Vector2_t2243707579  value)
	{
		___geometry_viewport_northeast_6 = value;
	}

	inline static int32_t get_offset_of_geometry_viewport_southwest_7() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___geometry_viewport_southwest_7)); }
	inline Vector2_t2243707579  get_geometry_viewport_southwest_7() const { return ___geometry_viewport_southwest_7; }
	inline Vector2_t2243707579 * get_address_of_geometry_viewport_southwest_7() { return &___geometry_viewport_southwest_7; }
	inline void set_geometry_viewport_southwest_7(Vector2_t2243707579  value)
	{
		___geometry_viewport_southwest_7 = value;
	}

	inline static int32_t get_offset_of_place_id_8() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___place_id_8)); }
	inline String_t* get_place_id_8() const { return ___place_id_8; }
	inline String_t** get_address_of_place_id_8() { return &___place_id_8; }
	inline void set_place_id_8(String_t* value)
	{
		___place_id_8 = value;
		Il2CppCodeGenWriteBarrier(&___place_id_8, value);
	}

	inline static int32_t get_offset_of_geometry_bounds_northeast_9() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___geometry_bounds_northeast_9)); }
	inline Vector2_t2243707579  get_geometry_bounds_northeast_9() const { return ___geometry_bounds_northeast_9; }
	inline Vector2_t2243707579 * get_address_of_geometry_bounds_northeast_9() { return &___geometry_bounds_northeast_9; }
	inline void set_geometry_bounds_northeast_9(Vector2_t2243707579  value)
	{
		___geometry_bounds_northeast_9 = value;
	}

	inline static int32_t get_offset_of_geometry_bounds_southwest_10() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___geometry_bounds_southwest_10)); }
	inline Vector2_t2243707579  get_geometry_bounds_southwest_10() const { return ___geometry_bounds_southwest_10; }
	inline Vector2_t2243707579 * get_address_of_geometry_bounds_southwest_10() { return &___geometry_bounds_southwest_10; }
	inline void set_geometry_bounds_southwest_10(Vector2_t2243707579  value)
	{
		___geometry_bounds_southwest_10 = value;
	}

	inline static int32_t get_offset_of_partial_match_11() { return static_cast<int32_t>(offsetof(OnlineMapsGoogleGeocodingResult_t3732625507, ___partial_match_11)); }
	inline bool get_partial_match_11() const { return ___partial_match_11; }
	inline bool* get_address_of_partial_match_11() { return &___partial_match_11; }
	inline void set_partial_match_11(bool value)
	{
		___partial_match_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
