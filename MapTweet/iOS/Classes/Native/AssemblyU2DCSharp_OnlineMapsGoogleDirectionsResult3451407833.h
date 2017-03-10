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
// OnlineMapsGoogleDirectionsResult/TransitAgency[]
struct TransitAgencyU5BU5D_t1676892358;
// OnlineMapsGoogleDirectionsResult/Vehicle
struct Vehicle_t3724188267;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirectionsResult/Line
struct  Line_t3451407833  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleDirectionsResult/Line::name
	String_t* ___name_0;
	// System.String OnlineMapsGoogleDirectionsResult/Line::short_name
	String_t* ___short_name_1;
	// System.String OnlineMapsGoogleDirectionsResult/Line::color
	String_t* ___color_2;
	// OnlineMapsGoogleDirectionsResult/TransitAgency[] OnlineMapsGoogleDirectionsResult/Line::agencies
	TransitAgencyU5BU5D_t1676892358* ___agencies_3;
	// System.String OnlineMapsGoogleDirectionsResult/Line::url
	String_t* ___url_4;
	// System.String OnlineMapsGoogleDirectionsResult/Line::icon
	String_t* ___icon_5;
	// System.String OnlineMapsGoogleDirectionsResult/Line::text_color
	String_t* ___text_color_6;
	// OnlineMapsGoogleDirectionsResult/Vehicle OnlineMapsGoogleDirectionsResult/Line::vehicle
	Vehicle_t3724188267 * ___vehicle_7;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Line_t3451407833, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_short_name_1() { return static_cast<int32_t>(offsetof(Line_t3451407833, ___short_name_1)); }
	inline String_t* get_short_name_1() const { return ___short_name_1; }
	inline String_t** get_address_of_short_name_1() { return &___short_name_1; }
	inline void set_short_name_1(String_t* value)
	{
		___short_name_1 = value;
		Il2CppCodeGenWriteBarrier(&___short_name_1, value);
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(Line_t3451407833, ___color_2)); }
	inline String_t* get_color_2() const { return ___color_2; }
	inline String_t** get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(String_t* value)
	{
		___color_2 = value;
		Il2CppCodeGenWriteBarrier(&___color_2, value);
	}

	inline static int32_t get_offset_of_agencies_3() { return static_cast<int32_t>(offsetof(Line_t3451407833, ___agencies_3)); }
	inline TransitAgencyU5BU5D_t1676892358* get_agencies_3() const { return ___agencies_3; }
	inline TransitAgencyU5BU5D_t1676892358** get_address_of_agencies_3() { return &___agencies_3; }
	inline void set_agencies_3(TransitAgencyU5BU5D_t1676892358* value)
	{
		___agencies_3 = value;
		Il2CppCodeGenWriteBarrier(&___agencies_3, value);
	}

	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(Line_t3451407833, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier(&___url_4, value);
	}

	inline static int32_t get_offset_of_icon_5() { return static_cast<int32_t>(offsetof(Line_t3451407833, ___icon_5)); }
	inline String_t* get_icon_5() const { return ___icon_5; }
	inline String_t** get_address_of_icon_5() { return &___icon_5; }
	inline void set_icon_5(String_t* value)
	{
		___icon_5 = value;
		Il2CppCodeGenWriteBarrier(&___icon_5, value);
	}

	inline static int32_t get_offset_of_text_color_6() { return static_cast<int32_t>(offsetof(Line_t3451407833, ___text_color_6)); }
	inline String_t* get_text_color_6() const { return ___text_color_6; }
	inline String_t** get_address_of_text_color_6() { return &___text_color_6; }
	inline void set_text_color_6(String_t* value)
	{
		___text_color_6 = value;
		Il2CppCodeGenWriteBarrier(&___text_color_6, value);
	}

	inline static int32_t get_offset_of_vehicle_7() { return static_cast<int32_t>(offsetof(Line_t3451407833, ___vehicle_7)); }
	inline Vehicle_t3724188267 * get_vehicle_7() const { return ___vehicle_7; }
	inline Vehicle_t3724188267 ** get_address_of_vehicle_7() { return &___vehicle_7; }
	inline void set_vehicle_7(Vehicle_t3724188267 * value)
	{
		___vehicle_7 = value;
		Il2CppCodeGenWriteBarrier(&___vehicle_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
