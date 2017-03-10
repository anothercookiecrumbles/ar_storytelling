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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGooglePlacesResult/Photo
struct  Photo_t1245028533  : public Il2CppObject
{
public:
	// System.Int32 OnlineMapsGooglePlacesResult/Photo::width
	int32_t ___width_0;
	// System.Int32 OnlineMapsGooglePlacesResult/Photo::height
	int32_t ___height_1;
	// System.String OnlineMapsGooglePlacesResult/Photo::photo_reference
	String_t* ___photo_reference_2;
	// System.String[] OnlineMapsGooglePlacesResult/Photo::html_attributions
	StringU5BU5D_t1642385972* ___html_attributions_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Photo_t1245028533, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Photo_t1245028533, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_photo_reference_2() { return static_cast<int32_t>(offsetof(Photo_t1245028533, ___photo_reference_2)); }
	inline String_t* get_photo_reference_2() const { return ___photo_reference_2; }
	inline String_t** get_address_of_photo_reference_2() { return &___photo_reference_2; }
	inline void set_photo_reference_2(String_t* value)
	{
		___photo_reference_2 = value;
		Il2CppCodeGenWriteBarrier(&___photo_reference_2, value);
	}

	inline static int32_t get_offset_of_html_attributions_3() { return static_cast<int32_t>(offsetof(Photo_t1245028533, ___html_attributions_3)); }
	inline StringU5BU5D_t1642385972* get_html_attributions_3() const { return ___html_attributions_3; }
	inline StringU5BU5D_t1642385972** get_address_of_html_attributions_3() { return &___html_attributions_3; }
	inline void set_html_attributions_3(StringU5BU5D_t1642385972* value)
	{
		___html_attributions_3 = value;
		Il2CppCodeGenWriteBarrier(&___html_attributions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
