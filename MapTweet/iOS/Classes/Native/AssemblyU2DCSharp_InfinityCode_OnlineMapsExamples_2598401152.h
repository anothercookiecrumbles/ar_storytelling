#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsRange
struct OnlineMapsRange_t3791609909;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.ShowMarkerLabelsByZoomExample/ShowMarkerLabelsByZoomItem
struct  ShowMarkerLabelsByZoomItem_t2598401152  : public Il2CppObject
{
public:
	// OnlineMapsRange InfinityCode.OnlineMapsExamples.ShowMarkerLabelsByZoomExample/ShowMarkerLabelsByZoomItem::zoomRange
	OnlineMapsRange_t3791609909 * ___zoomRange_0;
	// System.String InfinityCode.OnlineMapsExamples.ShowMarkerLabelsByZoomExample/ShowMarkerLabelsByZoomItem::label
	String_t* ___label_1;

public:
	inline static int32_t get_offset_of_zoomRange_0() { return static_cast<int32_t>(offsetof(ShowMarkerLabelsByZoomItem_t2598401152, ___zoomRange_0)); }
	inline OnlineMapsRange_t3791609909 * get_zoomRange_0() const { return ___zoomRange_0; }
	inline OnlineMapsRange_t3791609909 ** get_address_of_zoomRange_0() { return &___zoomRange_0; }
	inline void set_zoomRange_0(OnlineMapsRange_t3791609909 * value)
	{
		___zoomRange_0 = value;
		Il2CppCodeGenWriteBarrier(&___zoomRange_0, value);
	}

	inline static int32_t get_offset_of_label_1() { return static_cast<int32_t>(offsetof(ShowMarkerLabelsByZoomItem_t2598401152, ___label_1)); }
	inline String_t* get_label_1() const { return ___label_1; }
	inline String_t** get_address_of_label_1() { return &___label_1; }
	inline void set_label_1(String_t* value)
	{
		___label_1 = value;
		Il2CppCodeGenWriteBarrier(&___label_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
