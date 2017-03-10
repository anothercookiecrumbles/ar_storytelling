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
// System.Collections.Generic.List`1<OnlineMapsGPXObject/TrackSegment>
struct List_1_t2145230319;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGPXObject/Track
struct  Track_t3666911426  : public Il2CppObject
{
public:
	// System.String OnlineMapsGPXObject/Track::name
	String_t* ___name_0;
	// System.String OnlineMapsGPXObject/Track::comment
	String_t* ___comment_1;
	// System.String OnlineMapsGPXObject/Track::description
	String_t* ___description_2;
	// System.String OnlineMapsGPXObject/Track::source
	String_t* ___source_3;
	// System.Collections.Generic.List`1<OnlineMapsGPXObject/Link> OnlineMapsGPXObject/Track::links
	List_1_t1601987799 * ___links_4;
	// System.Nullable`1<System.UInt32> OnlineMapsGPXObject/Track::number
	Nullable_1_t412748336  ___number_5;
	// System.String OnlineMapsGPXObject/Track::type
	String_t* ___type_6;
	// System.Collections.Generic.List`1<OnlineMapsGPXObject/TrackSegment> OnlineMapsGPXObject/Track::segments
	List_1_t2145230319 * ___segments_7;
	// OnlineMapsXML OnlineMapsGPXObject/Track::extensions
	OnlineMapsXML_t3341520387 * ___extensions_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Track_t3666911426, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_comment_1() { return static_cast<int32_t>(offsetof(Track_t3666911426, ___comment_1)); }
	inline String_t* get_comment_1() const { return ___comment_1; }
	inline String_t** get_address_of_comment_1() { return &___comment_1; }
	inline void set_comment_1(String_t* value)
	{
		___comment_1 = value;
		Il2CppCodeGenWriteBarrier(&___comment_1, value);
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(Track_t3666911426, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier(&___description_2, value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(Track_t3666911426, ___source_3)); }
	inline String_t* get_source_3() const { return ___source_3; }
	inline String_t** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(String_t* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of_links_4() { return static_cast<int32_t>(offsetof(Track_t3666911426, ___links_4)); }
	inline List_1_t1601987799 * get_links_4() const { return ___links_4; }
	inline List_1_t1601987799 ** get_address_of_links_4() { return &___links_4; }
	inline void set_links_4(List_1_t1601987799 * value)
	{
		___links_4 = value;
		Il2CppCodeGenWriteBarrier(&___links_4, value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(Track_t3666911426, ___number_5)); }
	inline Nullable_1_t412748336  get_number_5() const { return ___number_5; }
	inline Nullable_1_t412748336 * get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(Nullable_1_t412748336  value)
	{
		___number_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(Track_t3666911426, ___type_6)); }
	inline String_t* get_type_6() const { return ___type_6; }
	inline String_t** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(String_t* value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier(&___type_6, value);
	}

	inline static int32_t get_offset_of_segments_7() { return static_cast<int32_t>(offsetof(Track_t3666911426, ___segments_7)); }
	inline List_1_t2145230319 * get_segments_7() const { return ___segments_7; }
	inline List_1_t2145230319 ** get_address_of_segments_7() { return &___segments_7; }
	inline void set_segments_7(List_1_t2145230319 * value)
	{
		___segments_7 = value;
		Il2CppCodeGenWriteBarrier(&___segments_7, value);
	}

	inline static int32_t get_offset_of_extensions_8() { return static_cast<int32_t>(offsetof(Track_t3666911426, ___extensions_8)); }
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
