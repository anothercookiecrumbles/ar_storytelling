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
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// OnlineMapsGooglePlacesResult/Photo[]
struct PhotoU5BU5D_t676660440;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGooglePlaceDetailsResult
struct  OnlineMapsGooglePlaceDetailsResult_t1031674087  : public Il2CppObject
{
public:
	// System.String OnlineMapsGooglePlaceDetailsResult::formatted_address
	String_t* ___formatted_address_0;
	// System.String OnlineMapsGooglePlaceDetailsResult::formatted_phone_number
	String_t* ___formatted_phone_number_1;
	// UnityEngine.Vector2 OnlineMapsGooglePlaceDetailsResult::location
	Vector2_t2243707579  ___location_2;
	// System.String OnlineMapsGooglePlaceDetailsResult::icon
	String_t* ___icon_3;
	// System.String OnlineMapsGooglePlaceDetailsResult::id
	String_t* ___id_4;
	// System.String OnlineMapsGooglePlaceDetailsResult::international_phone_number
	String_t* ___international_phone_number_5;
	// System.String OnlineMapsGooglePlaceDetailsResult::name
	String_t* ___name_6;
	// OnlineMapsXML OnlineMapsGooglePlaceDetailsResult::node
	OnlineMapsXML_t3341520387 * ___node_7;
	// OnlineMapsGooglePlacesResult/Photo[] OnlineMapsGooglePlaceDetailsResult::photos
	PhotoU5BU5D_t676660440* ___photos_8;
	// System.String OnlineMapsGooglePlaceDetailsResult::place_id
	String_t* ___place_id_9;
	// System.Int32 OnlineMapsGooglePlaceDetailsResult::price_level
	int32_t ___price_level_10;
	// System.Single OnlineMapsGooglePlaceDetailsResult::rating
	float ___rating_11;
	// System.String OnlineMapsGooglePlaceDetailsResult::reference
	String_t* ___reference_12;
	// System.String[] OnlineMapsGooglePlaceDetailsResult::types
	StringU5BU5D_t1642385972* ___types_13;
	// System.String OnlineMapsGooglePlaceDetailsResult::url
	String_t* ___url_14;
	// System.String OnlineMapsGooglePlaceDetailsResult::utc_offset
	String_t* ___utc_offset_15;
	// System.String OnlineMapsGooglePlaceDetailsResult::vicinity
	String_t* ___vicinity_16;
	// System.String OnlineMapsGooglePlaceDetailsResult::website
	String_t* ___website_17;

public:
	inline static int32_t get_offset_of_formatted_address_0() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___formatted_address_0)); }
	inline String_t* get_formatted_address_0() const { return ___formatted_address_0; }
	inline String_t** get_address_of_formatted_address_0() { return &___formatted_address_0; }
	inline void set_formatted_address_0(String_t* value)
	{
		___formatted_address_0 = value;
		Il2CppCodeGenWriteBarrier(&___formatted_address_0, value);
	}

	inline static int32_t get_offset_of_formatted_phone_number_1() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___formatted_phone_number_1)); }
	inline String_t* get_formatted_phone_number_1() const { return ___formatted_phone_number_1; }
	inline String_t** get_address_of_formatted_phone_number_1() { return &___formatted_phone_number_1; }
	inline void set_formatted_phone_number_1(String_t* value)
	{
		___formatted_phone_number_1 = value;
		Il2CppCodeGenWriteBarrier(&___formatted_phone_number_1, value);
	}

	inline static int32_t get_offset_of_location_2() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___location_2)); }
	inline Vector2_t2243707579  get_location_2() const { return ___location_2; }
	inline Vector2_t2243707579 * get_address_of_location_2() { return &___location_2; }
	inline void set_location_2(Vector2_t2243707579  value)
	{
		___location_2 = value;
	}

	inline static int32_t get_offset_of_icon_3() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___icon_3)); }
	inline String_t* get_icon_3() const { return ___icon_3; }
	inline String_t** get_address_of_icon_3() { return &___icon_3; }
	inline void set_icon_3(String_t* value)
	{
		___icon_3 = value;
		Il2CppCodeGenWriteBarrier(&___icon_3, value);
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___id_4)); }
	inline String_t* get_id_4() const { return ___id_4; }
	inline String_t** get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(String_t* value)
	{
		___id_4 = value;
		Il2CppCodeGenWriteBarrier(&___id_4, value);
	}

	inline static int32_t get_offset_of_international_phone_number_5() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___international_phone_number_5)); }
	inline String_t* get_international_phone_number_5() const { return ___international_phone_number_5; }
	inline String_t** get_address_of_international_phone_number_5() { return &___international_phone_number_5; }
	inline void set_international_phone_number_5(String_t* value)
	{
		___international_phone_number_5 = value;
		Il2CppCodeGenWriteBarrier(&___international_phone_number_5, value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier(&___name_6, value);
	}

	inline static int32_t get_offset_of_node_7() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___node_7)); }
	inline OnlineMapsXML_t3341520387 * get_node_7() const { return ___node_7; }
	inline OnlineMapsXML_t3341520387 ** get_address_of_node_7() { return &___node_7; }
	inline void set_node_7(OnlineMapsXML_t3341520387 * value)
	{
		___node_7 = value;
		Il2CppCodeGenWriteBarrier(&___node_7, value);
	}

	inline static int32_t get_offset_of_photos_8() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___photos_8)); }
	inline PhotoU5BU5D_t676660440* get_photos_8() const { return ___photos_8; }
	inline PhotoU5BU5D_t676660440** get_address_of_photos_8() { return &___photos_8; }
	inline void set_photos_8(PhotoU5BU5D_t676660440* value)
	{
		___photos_8 = value;
		Il2CppCodeGenWriteBarrier(&___photos_8, value);
	}

	inline static int32_t get_offset_of_place_id_9() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___place_id_9)); }
	inline String_t* get_place_id_9() const { return ___place_id_9; }
	inline String_t** get_address_of_place_id_9() { return &___place_id_9; }
	inline void set_place_id_9(String_t* value)
	{
		___place_id_9 = value;
		Il2CppCodeGenWriteBarrier(&___place_id_9, value);
	}

	inline static int32_t get_offset_of_price_level_10() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___price_level_10)); }
	inline int32_t get_price_level_10() const { return ___price_level_10; }
	inline int32_t* get_address_of_price_level_10() { return &___price_level_10; }
	inline void set_price_level_10(int32_t value)
	{
		___price_level_10 = value;
	}

	inline static int32_t get_offset_of_rating_11() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___rating_11)); }
	inline float get_rating_11() const { return ___rating_11; }
	inline float* get_address_of_rating_11() { return &___rating_11; }
	inline void set_rating_11(float value)
	{
		___rating_11 = value;
	}

	inline static int32_t get_offset_of_reference_12() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___reference_12)); }
	inline String_t* get_reference_12() const { return ___reference_12; }
	inline String_t** get_address_of_reference_12() { return &___reference_12; }
	inline void set_reference_12(String_t* value)
	{
		___reference_12 = value;
		Il2CppCodeGenWriteBarrier(&___reference_12, value);
	}

	inline static int32_t get_offset_of_types_13() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___types_13)); }
	inline StringU5BU5D_t1642385972* get_types_13() const { return ___types_13; }
	inline StringU5BU5D_t1642385972** get_address_of_types_13() { return &___types_13; }
	inline void set_types_13(StringU5BU5D_t1642385972* value)
	{
		___types_13 = value;
		Il2CppCodeGenWriteBarrier(&___types_13, value);
	}

	inline static int32_t get_offset_of_url_14() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___url_14)); }
	inline String_t* get_url_14() const { return ___url_14; }
	inline String_t** get_address_of_url_14() { return &___url_14; }
	inline void set_url_14(String_t* value)
	{
		___url_14 = value;
		Il2CppCodeGenWriteBarrier(&___url_14, value);
	}

	inline static int32_t get_offset_of_utc_offset_15() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___utc_offset_15)); }
	inline String_t* get_utc_offset_15() const { return ___utc_offset_15; }
	inline String_t** get_address_of_utc_offset_15() { return &___utc_offset_15; }
	inline void set_utc_offset_15(String_t* value)
	{
		___utc_offset_15 = value;
		Il2CppCodeGenWriteBarrier(&___utc_offset_15, value);
	}

	inline static int32_t get_offset_of_vicinity_16() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___vicinity_16)); }
	inline String_t* get_vicinity_16() const { return ___vicinity_16; }
	inline String_t** get_address_of_vicinity_16() { return &___vicinity_16; }
	inline void set_vicinity_16(String_t* value)
	{
		___vicinity_16 = value;
		Il2CppCodeGenWriteBarrier(&___vicinity_16, value);
	}

	inline static int32_t get_offset_of_website_17() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlaceDetailsResult_t1031674087, ___website_17)); }
	inline String_t* get_website_17() const { return ___website_17; }
	inline String_t** get_address_of_website_17() { return &___website_17; }
	inline void set_website_17(String_t* value)
	{
		___website_17 = value;
		Il2CppCodeGenWriteBarrier(&___website_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
