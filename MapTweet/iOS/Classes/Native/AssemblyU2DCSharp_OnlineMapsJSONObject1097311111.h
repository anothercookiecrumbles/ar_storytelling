#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsJSONItem>
struct Dictionary_2_t1088929753;

#include "AssemblyU2DCSharp_OnlineMapsJSONItem3469117787.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsJSONObject
struct  OnlineMapsJSONObject_t1097311111  : public OnlineMapsJSONItem_t3469117787
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsJSONItem> OnlineMapsJSONObject::_table
	Dictionary_2_t1088929753 * ____table_0;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(OnlineMapsJSONObject_t1097311111, ____table_0)); }
	inline Dictionary_2_t1088929753 * get__table_0() const { return ____table_0; }
	inline Dictionary_2_t1088929753 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(Dictionary_2_t1088929753 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier(&____table_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
