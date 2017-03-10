#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate
struct  GeoCoordinate_t2186656463  : public Il2CppObject
{
public:
	// System.Double OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate::latitude
	double ___latitude_0;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate::longitude
	double ___longitude_1;
	// System.Nullable`1<System.Double> OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate::altitude
	Nullable_1_t2341081996  ___altitude_2;

public:
	inline static int32_t get_offset_of_latitude_0() { return static_cast<int32_t>(offsetof(GeoCoordinate_t2186656463, ___latitude_0)); }
	inline double get_latitude_0() const { return ___latitude_0; }
	inline double* get_address_of_latitude_0() { return &___latitude_0; }
	inline void set_latitude_0(double value)
	{
		___latitude_0 = value;
	}

	inline static int32_t get_offset_of_longitude_1() { return static_cast<int32_t>(offsetof(GeoCoordinate_t2186656463, ___longitude_1)); }
	inline double get_longitude_1() const { return ___longitude_1; }
	inline double* get_address_of_longitude_1() { return &___longitude_1; }
	inline void set_longitude_1(double value)
	{
		___longitude_1 = value;
	}

	inline static int32_t get_offset_of_altitude_2() { return static_cast<int32_t>(offsetof(GeoCoordinate_t2186656463, ___altitude_2)); }
	inline Nullable_1_t2341081996  get_altitude_2() const { return ___altitude_2; }
	inline Nullable_1_t2341081996 * get_address_of_altitude_2() { return &___altitude_2; }
	inline void set_altitude_2(Nullable_1_t2341081996  value)
	{
		___altitude_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
