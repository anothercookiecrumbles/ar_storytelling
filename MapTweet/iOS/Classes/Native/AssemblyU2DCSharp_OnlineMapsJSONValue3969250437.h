#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "AssemblyU2DCSharp_OnlineMapsJSONItem3469117787.h"
#include "AssemblyU2DCSharp_OnlineMapsJSONValue_ValueType177070661.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsJSONValue
struct  OnlineMapsJSONValue_t3969250437  : public OnlineMapsJSONItem_t3469117787
{
public:
	// OnlineMapsJSONValue/ValueType OnlineMapsJSONValue::_type
	int32_t ____type_0;
	// System.Object OnlineMapsJSONValue::_value
	Il2CppObject * ____value_1;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(OnlineMapsJSONValue_t3969250437, ____type_0)); }
	inline int32_t get__type_0() const { return ____type_0; }
	inline int32_t* get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(int32_t value)
	{
		____type_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(OnlineMapsJSONValue_t3969250437, ____value_1)); }
	inline Il2CppObject * get__value_1() const { return ____value_1; }
	inline Il2CppObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(Il2CppObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier(&____value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
