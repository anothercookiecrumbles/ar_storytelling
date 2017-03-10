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
// OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier/Note
struct Note_t2731603210;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier
struct  Supplier_t2528843629  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier::title
	String_t* ___title_0;
	// System.String OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier::href
	String_t* ___href_1;
	// OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier/Note OnlineMapsHereRoutingAPIResult/SourceAttribution/Supplier::note
	Note_t2731603210 * ___note_2;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(Supplier_t2528843629, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier(&___title_0, value);
	}

	inline static int32_t get_offset_of_href_1() { return static_cast<int32_t>(offsetof(Supplier_t2528843629, ___href_1)); }
	inline String_t* get_href_1() const { return ___href_1; }
	inline String_t** get_address_of_href_1() { return &___href_1; }
	inline void set_href_1(String_t* value)
	{
		___href_1 = value;
		Il2CppCodeGenWriteBarrier(&___href_1, value);
	}

	inline static int32_t get_offset_of_note_2() { return static_cast<int32_t>(offsetof(Supplier_t2528843629, ___note_2)); }
	inline Note_t2731603210 * get_note_2() const { return ___note_2; }
	inline Note_t2731603210 ** get_address_of_note_2() { return &___note_2; }
	inline void set_note_2(Note_t2731603210 * value)
	{
		___note_2 = value;
		Il2CppCodeGenWriteBarrier(&___note_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
