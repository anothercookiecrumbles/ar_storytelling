#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsOSMWay
struct OnlineMapsOSMWay_t3319895272;
// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode>
struct Dictionary_2_t1003802369;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBuildingsNodeData
struct  OnlineMapsBuildingsNodeData_t1471864431  : public Il2CppObject
{
public:
	// OnlineMapsOSMWay OnlineMapsBuildingsNodeData::way
	OnlineMapsOSMWay_t3319895272 * ___way_0;
	// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode> OnlineMapsBuildingsNodeData::nodes
	Dictionary_2_t1003802369 * ___nodes_1;

public:
	inline static int32_t get_offset_of_way_0() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingsNodeData_t1471864431, ___way_0)); }
	inline OnlineMapsOSMWay_t3319895272 * get_way_0() const { return ___way_0; }
	inline OnlineMapsOSMWay_t3319895272 ** get_address_of_way_0() { return &___way_0; }
	inline void set_way_0(OnlineMapsOSMWay_t3319895272 * value)
	{
		___way_0 = value;
		Il2CppCodeGenWriteBarrier(&___way_0, value);
	}

	inline static int32_t get_offset_of_nodes_1() { return static_cast<int32_t>(offsetof(OnlineMapsBuildingsNodeData_t1471864431, ___nodes_1)); }
	inline Dictionary_2_t1003802369 * get_nodes_1() const { return ___nodes_1; }
	inline Dictionary_2_t1003802369 ** get_address_of_nodes_1() { return &___nodes_1; }
	inline void set_nodes_1(Dictionary_2_t1003802369 * value)
	{
		___nodes_1 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
