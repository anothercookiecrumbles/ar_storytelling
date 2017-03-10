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
// OnlineMapsGPXObject/Person
struct Person_t4249928290;
// OnlineMapsGPXObject/Copyright
struct Copyright_t2104469052;
// System.Collections.Generic.List`1<OnlineMapsGPXObject/Link>
struct List_1_t1601987799;
// OnlineMapsGPXObject/Bounds
struct Bounds_t3670962826;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGPXObject/Meta
struct  Meta_t21578898  : public Il2CppObject
{
public:
	// System.String OnlineMapsGPXObject/Meta::name
	String_t* ___name_0;
	// System.String OnlineMapsGPXObject/Meta::description
	String_t* ___description_1;
	// OnlineMapsGPXObject/Person OnlineMapsGPXObject/Meta::author
	Person_t4249928290 * ___author_2;
	// OnlineMapsGPXObject/Copyright OnlineMapsGPXObject/Meta::copyright
	Copyright_t2104469052 * ___copyright_3;
	// System.Collections.Generic.List`1<OnlineMapsGPXObject/Link> OnlineMapsGPXObject/Meta::links
	List_1_t1601987799 * ___links_4;
	// System.Nullable`1<System.DateTime> OnlineMapsGPXObject/Meta::time
	Nullable_1_t3251239280  ___time_5;
	// System.String OnlineMapsGPXObject/Meta::keywords
	String_t* ___keywords_6;
	// OnlineMapsGPXObject/Bounds OnlineMapsGPXObject/Meta::bounds
	Bounds_t3670962826 * ___bounds_7;
	// OnlineMapsXML OnlineMapsGPXObject/Meta::extensions
	OnlineMapsXML_t3341520387 * ___extensions_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Meta_t21578898, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Meta_t21578898, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier(&___description_1, value);
	}

	inline static int32_t get_offset_of_author_2() { return static_cast<int32_t>(offsetof(Meta_t21578898, ___author_2)); }
	inline Person_t4249928290 * get_author_2() const { return ___author_2; }
	inline Person_t4249928290 ** get_address_of_author_2() { return &___author_2; }
	inline void set_author_2(Person_t4249928290 * value)
	{
		___author_2 = value;
		Il2CppCodeGenWriteBarrier(&___author_2, value);
	}

	inline static int32_t get_offset_of_copyright_3() { return static_cast<int32_t>(offsetof(Meta_t21578898, ___copyright_3)); }
	inline Copyright_t2104469052 * get_copyright_3() const { return ___copyright_3; }
	inline Copyright_t2104469052 ** get_address_of_copyright_3() { return &___copyright_3; }
	inline void set_copyright_3(Copyright_t2104469052 * value)
	{
		___copyright_3 = value;
		Il2CppCodeGenWriteBarrier(&___copyright_3, value);
	}

	inline static int32_t get_offset_of_links_4() { return static_cast<int32_t>(offsetof(Meta_t21578898, ___links_4)); }
	inline List_1_t1601987799 * get_links_4() const { return ___links_4; }
	inline List_1_t1601987799 ** get_address_of_links_4() { return &___links_4; }
	inline void set_links_4(List_1_t1601987799 * value)
	{
		___links_4 = value;
		Il2CppCodeGenWriteBarrier(&___links_4, value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(Meta_t21578898, ___time_5)); }
	inline Nullable_1_t3251239280  get_time_5() const { return ___time_5; }
	inline Nullable_1_t3251239280 * get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(Nullable_1_t3251239280  value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_keywords_6() { return static_cast<int32_t>(offsetof(Meta_t21578898, ___keywords_6)); }
	inline String_t* get_keywords_6() const { return ___keywords_6; }
	inline String_t** get_address_of_keywords_6() { return &___keywords_6; }
	inline void set_keywords_6(String_t* value)
	{
		___keywords_6 = value;
		Il2CppCodeGenWriteBarrier(&___keywords_6, value);
	}

	inline static int32_t get_offset_of_bounds_7() { return static_cast<int32_t>(offsetof(Meta_t21578898, ___bounds_7)); }
	inline Bounds_t3670962826 * get_bounds_7() const { return ___bounds_7; }
	inline Bounds_t3670962826 ** get_address_of_bounds_7() { return &___bounds_7; }
	inline void set_bounds_7(Bounds_t3670962826 * value)
	{
		___bounds_7 = value;
		Il2CppCodeGenWriteBarrier(&___bounds_7, value);
	}

	inline static int32_t get_offset_of_extensions_8() { return static_cast<int32_t>(offsetof(Meta_t21578898, ___extensions_8)); }
	inline OnlineMapsXML_t3341520387 * get_extensions_8() const { return ___extensions_8; }
	inline OnlineMapsXML_t3341520387 ** get_address_of_extensions_8() { return &___extensions_8; }
	inline void set_extensions_8(OnlineMapsXML_t3341520387 * value)
	{
		___extensions_8 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
