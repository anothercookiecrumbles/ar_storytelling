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
// OnlineMapsGeoRect
struct OnlineMapsGeoRect_t3036102555;

#include "AssemblyU2DCSharp_OnlineMapsGoogleGeocoding_RequestP52588726.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleGeocoding/GeocodingParams
struct  GeocodingParams_t3435063812  : public RequestParams_t52588726
{
public:
	// System.String OnlineMapsGoogleGeocoding/GeocodingParams::address
	String_t* ___address_4;
	// System.String OnlineMapsGoogleGeocoding/GeocodingParams::components
	String_t* ___components_5;
	// OnlineMapsGeoRect OnlineMapsGoogleGeocoding/GeocodingParams::bounds
	OnlineMapsGeoRect_t3036102555 * ___bounds_6;
	// System.String OnlineMapsGoogleGeocoding/GeocodingParams::region
	String_t* ___region_7;

public:
	inline static int32_t get_offset_of_address_4() { return static_cast<int32_t>(offsetof(GeocodingParams_t3435063812, ___address_4)); }
	inline String_t* get_address_4() const { return ___address_4; }
	inline String_t** get_address_of_address_4() { return &___address_4; }
	inline void set_address_4(String_t* value)
	{
		___address_4 = value;
		Il2CppCodeGenWriteBarrier(&___address_4, value);
	}

	inline static int32_t get_offset_of_components_5() { return static_cast<int32_t>(offsetof(GeocodingParams_t3435063812, ___components_5)); }
	inline String_t* get_components_5() const { return ___components_5; }
	inline String_t** get_address_of_components_5() { return &___components_5; }
	inline void set_components_5(String_t* value)
	{
		___components_5 = value;
		Il2CppCodeGenWriteBarrier(&___components_5, value);
	}

	inline static int32_t get_offset_of_bounds_6() { return static_cast<int32_t>(offsetof(GeocodingParams_t3435063812, ___bounds_6)); }
	inline OnlineMapsGeoRect_t3036102555 * get_bounds_6() const { return ___bounds_6; }
	inline OnlineMapsGeoRect_t3036102555 ** get_address_of_bounds_6() { return &___bounds_6; }
	inline void set_bounds_6(OnlineMapsGeoRect_t3036102555 * value)
	{
		___bounds_6 = value;
		Il2CppCodeGenWriteBarrier(&___bounds_6, value);
	}

	inline static int32_t get_offset_of_region_7() { return static_cast<int32_t>(offsetof(GeocodingParams_t3435063812, ___region_7)); }
	inline String_t* get_region_7() const { return ___region_7; }
	inline String_t** get_address_of_region_7() { return &___region_7; }
	inline void set_region_7(String_t* value)
	{
		___region_7 = value;
		Il2CppCodeGenWriteBarrier(&___region_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
