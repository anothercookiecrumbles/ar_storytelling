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

#include "AssemblyU2DCSharp_OnlineMapsGoogleGeocoding_RequestP52588726.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleGeocoding/ReverseGeocodingParams
struct  ReverseGeocodingParams_t2213838188  : public RequestParams_t52588726
{
public:
	// System.Nullable`1<System.Double> OnlineMapsGoogleGeocoding/ReverseGeocodingParams::longitude
	Nullable_1_t2341081996  ___longitude_4;
	// System.Nullable`1<System.Double> OnlineMapsGoogleGeocoding/ReverseGeocodingParams::latitude
	Nullable_1_t2341081996  ___latitude_5;
	// System.String OnlineMapsGoogleGeocoding/ReverseGeocodingParams::placeId
	String_t* ___placeId_6;
	// System.String OnlineMapsGoogleGeocoding/ReverseGeocodingParams::result_type
	String_t* ___result_type_7;
	// System.String OnlineMapsGoogleGeocoding/ReverseGeocodingParams::location_type
	String_t* ___location_type_8;

public:
	inline static int32_t get_offset_of_longitude_4() { return static_cast<int32_t>(offsetof(ReverseGeocodingParams_t2213838188, ___longitude_4)); }
	inline Nullable_1_t2341081996  get_longitude_4() const { return ___longitude_4; }
	inline Nullable_1_t2341081996 * get_address_of_longitude_4() { return &___longitude_4; }
	inline void set_longitude_4(Nullable_1_t2341081996  value)
	{
		___longitude_4 = value;
	}

	inline static int32_t get_offset_of_latitude_5() { return static_cast<int32_t>(offsetof(ReverseGeocodingParams_t2213838188, ___latitude_5)); }
	inline Nullable_1_t2341081996  get_latitude_5() const { return ___latitude_5; }
	inline Nullable_1_t2341081996 * get_address_of_latitude_5() { return &___latitude_5; }
	inline void set_latitude_5(Nullable_1_t2341081996  value)
	{
		___latitude_5 = value;
	}

	inline static int32_t get_offset_of_placeId_6() { return static_cast<int32_t>(offsetof(ReverseGeocodingParams_t2213838188, ___placeId_6)); }
	inline String_t* get_placeId_6() const { return ___placeId_6; }
	inline String_t** get_address_of_placeId_6() { return &___placeId_6; }
	inline void set_placeId_6(String_t* value)
	{
		___placeId_6 = value;
		Il2CppCodeGenWriteBarrier(&___placeId_6, value);
	}

	inline static int32_t get_offset_of_result_type_7() { return static_cast<int32_t>(offsetof(ReverseGeocodingParams_t2213838188, ___result_type_7)); }
	inline String_t* get_result_type_7() const { return ___result_type_7; }
	inline String_t** get_address_of_result_type_7() { return &___result_type_7; }
	inline void set_result_type_7(String_t* value)
	{
		___result_type_7 = value;
		Il2CppCodeGenWriteBarrier(&___result_type_7, value);
	}

	inline static int32_t get_offset_of_location_type_8() { return static_cast<int32_t>(offsetof(ReverseGeocodingParams_t2213838188, ___location_type_8)); }
	inline String_t* get_location_type_8() const { return ___location_type_8; }
	inline String_t** get_address_of_location_type_8() { return &___location_type_8; }
	inline void set_location_type_8(String_t* value)
	{
		___location_type_8 = value;
		Il2CppCodeGenWriteBarrier(&___location_type_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
