#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGPXObject/Bounds
struct  Bounds_t3670962826  : public Il2CppObject
{
public:
	// System.Double OnlineMapsGPXObject/Bounds::_minlat
	double ____minlat_0;
	// System.Double OnlineMapsGPXObject/Bounds::_minlon
	double ____minlon_1;
	// System.Double OnlineMapsGPXObject/Bounds::_maxlat
	double ____maxlat_2;
	// System.Double OnlineMapsGPXObject/Bounds::_maxlon
	double ____maxlon_3;

public:
	inline static int32_t get_offset_of__minlat_0() { return static_cast<int32_t>(offsetof(Bounds_t3670962826, ____minlat_0)); }
	inline double get__minlat_0() const { return ____minlat_0; }
	inline double* get_address_of__minlat_0() { return &____minlat_0; }
	inline void set__minlat_0(double value)
	{
		____minlat_0 = value;
	}

	inline static int32_t get_offset_of__minlon_1() { return static_cast<int32_t>(offsetof(Bounds_t3670962826, ____minlon_1)); }
	inline double get__minlon_1() const { return ____minlon_1; }
	inline double* get_address_of__minlon_1() { return &____minlon_1; }
	inline void set__minlon_1(double value)
	{
		____minlon_1 = value;
	}

	inline static int32_t get_offset_of__maxlat_2() { return static_cast<int32_t>(offsetof(Bounds_t3670962826, ____maxlat_2)); }
	inline double get__maxlat_2() const { return ____maxlat_2; }
	inline double* get_address_of__maxlat_2() { return &____maxlat_2; }
	inline void set__maxlat_2(double value)
	{
		____maxlat_2 = value;
	}

	inline static int32_t get_offset_of__maxlon_3() { return static_cast<int32_t>(offsetof(Bounds_t3670962826, ____maxlon_3)); }
	inline double get__maxlon_3() const { return ____maxlon_3; }
	inline double* get_address_of__maxlon_3() { return &____maxlon_3; }
	inline void set__maxlon_3(double value)
	{
		____maxlon_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
