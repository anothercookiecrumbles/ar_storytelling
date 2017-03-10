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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier/Note
struct  Note_t2731603210  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier/Note::type
	String_t* ___type_0;
	// System.String OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier/Note::text
	String_t* ___text_1;
	// System.String OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier/Note::href
	String_t* ___href_2;
	// System.String OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier/Note::hrefText
	String_t* ___hrefText_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Note_t2731603210, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Note_t2731603210, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}

	inline static int32_t get_offset_of_href_2() { return static_cast<int32_t>(offsetof(Note_t2731603210, ___href_2)); }
	inline String_t* get_href_2() const { return ___href_2; }
	inline String_t** get_address_of_href_2() { return &___href_2; }
	inline void set_href_2(String_t* value)
	{
		___href_2 = value;
		Il2CppCodeGenWriteBarrier(&___href_2, value);
	}

	inline static int32_t get_offset_of_hrefText_3() { return static_cast<int32_t>(offsetof(Note_t2731603210, ___hrefText_3)); }
	inline String_t* get_hrefText_3() const { return ___hrefText_3; }
	inline String_t** get_address_of_hrefText_3() { return &___hrefText_3; }
	inline void set_hrefText_3(String_t* value)
	{
		___hrefText_3 = value;
		Il2CppCodeGenWriteBarrier(&___hrefText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
