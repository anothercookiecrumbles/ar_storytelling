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
// System.String[]
struct StringU5BU5D_t1642385972;
// OnlineMapsGooglePlacesResult/Photo[]
struct PhotoU5BU5D_t676660440;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGooglePlacesResult
struct  OnlineMapsGooglePlacesResult_t2975985938  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 OnlineMapsGooglePlacesResult::location
	Vector2_t2243707579  ___location_0;
	// System.String OnlineMapsGooglePlacesResult::icon
	String_t* ___icon_1;
	// System.String OnlineMapsGooglePlacesResult::id
	String_t* ___id_2;
	// System.String OnlineMapsGooglePlacesResult::formatted_address
	String_t* ___formatted_address_3;
	// System.String OnlineMapsGooglePlacesResult::name
	String_t* ___name_4;
	// System.String OnlineMapsGooglePlacesResult::place_id
	String_t* ___place_id_5;
	// System.String OnlineMapsGooglePlacesResult::reference
	String_t* ___reference_6;
	// System.String[] OnlineMapsGooglePlacesResult::types
	StringU5BU5D_t1642385972* ___types_7;
	// System.String OnlineMapsGooglePlacesResult::vicinity
	String_t* ___vicinity_8;
	// System.Int32 OnlineMapsGooglePlacesResult::price_level
	int32_t ___price_level_9;
	// System.Single OnlineMapsGooglePlacesResult::rating
	float ___rating_10;
	// System.Boolean OnlineMapsGooglePlacesResult::open_now
	bool ___open_now_11;
	// System.String OnlineMapsGooglePlacesResult::scope
	String_t* ___scope_12;
	// System.String[] OnlineMapsGooglePlacesResult::weekday_text
	StringU5BU5D_t1642385972* ___weekday_text_13;
	// OnlineMapsGooglePlacesResult/Photo[] OnlineMapsGooglePlacesResult::photos
	PhotoU5BU5D_t676660440* ___photos_14;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___location_0)); }
	inline Vector2_t2243707579  get_location_0() const { return ___location_0; }
	inline Vector2_t2243707579 * get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(Vector2_t2243707579  value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_icon_1() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___icon_1)); }
	inline String_t* get_icon_1() const { return ___icon_1; }
	inline String_t** get_address_of_icon_1() { return &___icon_1; }
	inline void set_icon_1(String_t* value)
	{
		___icon_1 = value;
		Il2CppCodeGenWriteBarrier(&___icon_1, value);
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_2, value);
	}

	inline static int32_t get_offset_of_formatted_address_3() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___formatted_address_3)); }
	inline String_t* get_formatted_address_3() const { return ___formatted_address_3; }
	inline String_t** get_address_of_formatted_address_3() { return &___formatted_address_3; }
	inline void set_formatted_address_3(String_t* value)
	{
		___formatted_address_3 = value;
		Il2CppCodeGenWriteBarrier(&___formatted_address_3, value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_place_id_5() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___place_id_5)); }
	inline String_t* get_place_id_5() const { return ___place_id_5; }
	inline String_t** get_address_of_place_id_5() { return &___place_id_5; }
	inline void set_place_id_5(String_t* value)
	{
		___place_id_5 = value;
		Il2CppCodeGenWriteBarrier(&___place_id_5, value);
	}

	inline static int32_t get_offset_of_reference_6() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___reference_6)); }
	inline String_t* get_reference_6() const { return ___reference_6; }
	inline String_t** get_address_of_reference_6() { return &___reference_6; }
	inline void set_reference_6(String_t* value)
	{
		___reference_6 = value;
		Il2CppCodeGenWriteBarrier(&___reference_6, value);
	}

	inline static int32_t get_offset_of_types_7() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___types_7)); }
	inline StringU5BU5D_t1642385972* get_types_7() const { return ___types_7; }
	inline StringU5BU5D_t1642385972** get_address_of_types_7() { return &___types_7; }
	inline void set_types_7(StringU5BU5D_t1642385972* value)
	{
		___types_7 = value;
		Il2CppCodeGenWriteBarrier(&___types_7, value);
	}

	inline static int32_t get_offset_of_vicinity_8() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___vicinity_8)); }
	inline String_t* get_vicinity_8() const { return ___vicinity_8; }
	inline String_t** get_address_of_vicinity_8() { return &___vicinity_8; }
	inline void set_vicinity_8(String_t* value)
	{
		___vicinity_8 = value;
		Il2CppCodeGenWriteBarrier(&___vicinity_8, value);
	}

	inline static int32_t get_offset_of_price_level_9() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___price_level_9)); }
	inline int32_t get_price_level_9() const { return ___price_level_9; }
	inline int32_t* get_address_of_price_level_9() { return &___price_level_9; }
	inline void set_price_level_9(int32_t value)
	{
		___price_level_9 = value;
	}

	inline static int32_t get_offset_of_rating_10() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___rating_10)); }
	inline float get_rating_10() const { return ___rating_10; }
	inline float* get_address_of_rating_10() { return &___rating_10; }
	inline void set_rating_10(float value)
	{
		___rating_10 = value;
	}

	inline static int32_t get_offset_of_open_now_11() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___open_now_11)); }
	inline bool get_open_now_11() const { return ___open_now_11; }
	inline bool* get_address_of_open_now_11() { return &___open_now_11; }
	inline void set_open_now_11(bool value)
	{
		___open_now_11 = value;
	}

	inline static int32_t get_offset_of_scope_12() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___scope_12)); }
	inline String_t* get_scope_12() const { return ___scope_12; }
	inline String_t** get_address_of_scope_12() { return &___scope_12; }
	inline void set_scope_12(String_t* value)
	{
		___scope_12 = value;
		Il2CppCodeGenWriteBarrier(&___scope_12, value);
	}

	inline static int32_t get_offset_of_weekday_text_13() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___weekday_text_13)); }
	inline StringU5BU5D_t1642385972* get_weekday_text_13() const { return ___weekday_text_13; }
	inline StringU5BU5D_t1642385972** get_address_of_weekday_text_13() { return &___weekday_text_13; }
	inline void set_weekday_text_13(StringU5BU5D_t1642385972* value)
	{
		___weekday_text_13 = value;
		Il2CppCodeGenWriteBarrier(&___weekday_text_13, value);
	}

	inline static int32_t get_offset_of_photos_14() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesResult_t2975985938, ___photos_14)); }
	inline PhotoU5BU5D_t676660440* get_photos_14() const { return ___photos_14; }
	inline PhotoU5BU5D_t676660440** get_address_of_photos_14() { return &___photos_14; }
	inline void set_photos_14(PhotoU5BU5D_t676660440* value)
	{
		___photos_14 = value;
		Il2CppCodeGenWriteBarrier(&___photos_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
