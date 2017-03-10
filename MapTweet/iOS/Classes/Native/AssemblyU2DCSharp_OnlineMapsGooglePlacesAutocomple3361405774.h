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
// OnlineMapsGooglePlacesAutocompleteResult/Term[]
struct TermU5BU5D_t1570610376;
// OnlineMapsGooglePlacesAutocompleteResult/MatchedSubstring
struct MatchedSubstring_t2780883300;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGooglePlacesAutocompleteResult
struct  OnlineMapsGooglePlacesAutocompleteResult_t3361405774  : public Il2CppObject
{
public:
	// System.String OnlineMapsGooglePlacesAutocompleteResult::description
	String_t* ___description_0;
	// System.String OnlineMapsGooglePlacesAutocompleteResult::reference
	String_t* ___reference_1;
	// System.String OnlineMapsGooglePlacesAutocompleteResult::id
	String_t* ___id_2;
	// System.String OnlineMapsGooglePlacesAutocompleteResult::place_id
	String_t* ___place_id_3;
	// System.String[] OnlineMapsGooglePlacesAutocompleteResult::types
	StringU5BU5D_t1642385972* ___types_4;
	// OnlineMapsGooglePlacesAutocompleteResult/Term[] OnlineMapsGooglePlacesAutocompleteResult::terms
	TermU5BU5D_t1570610376* ___terms_5;
	// OnlineMapsGooglePlacesAutocompleteResult/MatchedSubstring OnlineMapsGooglePlacesAutocompleteResult::matchedSubstring
	MatchedSubstring_t2780883300 * ___matchedSubstring_6;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesAutocompleteResult_t3361405774, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier(&___description_0, value);
	}

	inline static int32_t get_offset_of_reference_1() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesAutocompleteResult_t3361405774, ___reference_1)); }
	inline String_t* get_reference_1() const { return ___reference_1; }
	inline String_t** get_address_of_reference_1() { return &___reference_1; }
	inline void set_reference_1(String_t* value)
	{
		___reference_1 = value;
		Il2CppCodeGenWriteBarrier(&___reference_1, value);
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesAutocompleteResult_t3361405774, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_2, value);
	}

	inline static int32_t get_offset_of_place_id_3() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesAutocompleteResult_t3361405774, ___place_id_3)); }
	inline String_t* get_place_id_3() const { return ___place_id_3; }
	inline String_t** get_address_of_place_id_3() { return &___place_id_3; }
	inline void set_place_id_3(String_t* value)
	{
		___place_id_3 = value;
		Il2CppCodeGenWriteBarrier(&___place_id_3, value);
	}

	inline static int32_t get_offset_of_types_4() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesAutocompleteResult_t3361405774, ___types_4)); }
	inline StringU5BU5D_t1642385972* get_types_4() const { return ___types_4; }
	inline StringU5BU5D_t1642385972** get_address_of_types_4() { return &___types_4; }
	inline void set_types_4(StringU5BU5D_t1642385972* value)
	{
		___types_4 = value;
		Il2CppCodeGenWriteBarrier(&___types_4, value);
	}

	inline static int32_t get_offset_of_terms_5() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesAutocompleteResult_t3361405774, ___terms_5)); }
	inline TermU5BU5D_t1570610376* get_terms_5() const { return ___terms_5; }
	inline TermU5BU5D_t1570610376** get_address_of_terms_5() { return &___terms_5; }
	inline void set_terms_5(TermU5BU5D_t1570610376* value)
	{
		___terms_5 = value;
		Il2CppCodeGenWriteBarrier(&___terms_5, value);
	}

	inline static int32_t get_offset_of_matchedSubstring_6() { return static_cast<int32_t>(offsetof(OnlineMapsGooglePlacesAutocompleteResult_t3361405774, ___matchedSubstring_6)); }
	inline MatchedSubstring_t2780883300 * get_matchedSubstring_6() const { return ___matchedSubstring_6; }
	inline MatchedSubstring_t2780883300 ** get_address_of_matchedSubstring_6() { return &___matchedSubstring_6; }
	inline void set_matchedSubstring_6(MatchedSubstring_t2780883300 * value)
	{
		___matchedSubstring_6 = value;
		Il2CppCodeGenWriteBarrier(&___matchedSubstring_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
