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

// OnlineMapsHereRoutingAPIResult/Route/Generalization
struct  Generalization_t1332301168  : public Il2CppObject
{
public:
	// System.Double OnlineMapsHereRoutingAPIResult/Route/Generalization::tolerance
	double ___tolerance_0;
	// System.Int32 OnlineMapsHereRoutingAPIResult/Route/Generalization::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_tolerance_0() { return static_cast<int32_t>(offsetof(Generalization_t1332301168, ___tolerance_0)); }
	inline double get_tolerance_0() const { return ___tolerance_0; }
	inline double* get_address_of_tolerance_0() { return &___tolerance_0; }
	inline void set_tolerance_0(double value)
	{
		___tolerance_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Generalization_t1332301168, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
