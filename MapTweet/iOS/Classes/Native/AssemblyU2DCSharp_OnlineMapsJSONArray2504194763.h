#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OnlineMapsJSONItem>
struct List_1_t2838238919;

#include "AssemblyU2DCSharp_OnlineMapsJSONItem3469117787.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsJSONArray
struct  OnlineMapsJSONArray_t2504194763  : public OnlineMapsJSONItem_t3469117787
{
public:
	// System.Collections.Generic.List`1<OnlineMapsJSONItem> OnlineMapsJSONArray::array
	List_1_t2838238919 * ___array_0;
	// System.Int32 OnlineMapsJSONArray::_count
	int32_t ____count_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(OnlineMapsJSONArray_t2504194763, ___array_0)); }
	inline List_1_t2838238919 * get_array_0() const { return ___array_0; }
	inline List_1_t2838238919 ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(List_1_t2838238919 * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier(&___array_0, value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(OnlineMapsJSONArray_t2504194763, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
