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
// OnlineMapsQQSearchResult/Location
struct Location_t1652199295;
// OnlineMapsQQSearchResult/AdInfo
struct AdInfo_t1838030609;
// System.String[]
struct StringU5BU5D_t1642385972;
// OnlineMapsQQSearchResult/Pano
struct Pano_t2729510056;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsQQSearchResult/Data
struct  Data_t3260660652  : public Il2CppObject
{
public:
	// System.String OnlineMapsQQSearchResult/Data::id
	String_t* ___id_0;
	// System.String OnlineMapsQQSearchResult/Data::title
	String_t* ___title_1;
	// System.String OnlineMapsQQSearchResult/Data::address
	String_t* ___address_2;
	// System.String OnlineMapsQQSearchResult/Data::tel
	String_t* ___tel_3;
	// System.String OnlineMapsQQSearchResult/Data::category
	String_t* ___category_4;
	// System.Int32 OnlineMapsQQSearchResult/Data::type
	int32_t ___type_5;
	// OnlineMapsQQSearchResult/Location OnlineMapsQQSearchResult/Data::location
	Location_t1652199295 * ___location_6;
	// OnlineMapsQQSearchResult/AdInfo OnlineMapsQQSearchResult/Data::ad_info
	AdInfo_t1838030609 * ___ad_info_7;
	// System.String[] OnlineMapsQQSearchResult/Data::boundary
	StringU5BU5D_t1642385972* ___boundary_8;
	// OnlineMapsQQSearchResult/Pano OnlineMapsQQSearchResult/Data::pano
	Pano_t2729510056 * ___pano_9;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier(&___title_1, value);
	}

	inline static int32_t get_offset_of_address_2() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___address_2)); }
	inline String_t* get_address_2() const { return ___address_2; }
	inline String_t** get_address_of_address_2() { return &___address_2; }
	inline void set_address_2(String_t* value)
	{
		___address_2 = value;
		Il2CppCodeGenWriteBarrier(&___address_2, value);
	}

	inline static int32_t get_offset_of_tel_3() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___tel_3)); }
	inline String_t* get_tel_3() const { return ___tel_3; }
	inline String_t** get_address_of_tel_3() { return &___tel_3; }
	inline void set_tel_3(String_t* value)
	{
		___tel_3 = value;
		Il2CppCodeGenWriteBarrier(&___tel_3, value);
	}

	inline static int32_t get_offset_of_category_4() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___category_4)); }
	inline String_t* get_category_4() const { return ___category_4; }
	inline String_t** get_address_of_category_4() { return &___category_4; }
	inline void set_category_4(String_t* value)
	{
		___category_4 = value;
		Il2CppCodeGenWriteBarrier(&___category_4, value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_location_6() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___location_6)); }
	inline Location_t1652199295 * get_location_6() const { return ___location_6; }
	inline Location_t1652199295 ** get_address_of_location_6() { return &___location_6; }
	inline void set_location_6(Location_t1652199295 * value)
	{
		___location_6 = value;
		Il2CppCodeGenWriteBarrier(&___location_6, value);
	}

	inline static int32_t get_offset_of_ad_info_7() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___ad_info_7)); }
	inline AdInfo_t1838030609 * get_ad_info_7() const { return ___ad_info_7; }
	inline AdInfo_t1838030609 ** get_address_of_ad_info_7() { return &___ad_info_7; }
	inline void set_ad_info_7(AdInfo_t1838030609 * value)
	{
		___ad_info_7 = value;
		Il2CppCodeGenWriteBarrier(&___ad_info_7, value);
	}

	inline static int32_t get_offset_of_boundary_8() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___boundary_8)); }
	inline StringU5BU5D_t1642385972* get_boundary_8() const { return ___boundary_8; }
	inline StringU5BU5D_t1642385972** get_address_of_boundary_8() { return &___boundary_8; }
	inline void set_boundary_8(StringU5BU5D_t1642385972* value)
	{
		___boundary_8 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_8, value);
	}

	inline static int32_t get_offset_of_pano_9() { return static_cast<int32_t>(offsetof(Data_t3260660652, ___pano_9)); }
	inline Pano_t2729510056 * get_pano_9() const { return ___pano_9; }
	inline Pano_t2729510056 ** get_address_of_pano_9() { return &___pano_9; }
	inline void set_pano_9(Pano_t2729510056 * value)
	{
		___pano_9 = value;
		Il2CppCodeGenWriteBarrier(&___pano_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
