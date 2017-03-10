#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample
struct  uGUICustomMarkerExample_t2414665147  : public MonoBehaviour_t1158329972
{
public:
	// System.Double InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample::lng
	double ___lng_2;
	// System.Double InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample::lat
	double ___lat_3;
	// UnityEngine.UI.Text InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample::textField
	Text_t356221433 * ___textField_4;
	// System.Single InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample::height
	float ___height_5;
	// System.String InfinityCode.OnlineMapsExamples.uGUICustomMarkerExample::_text
	String_t* ____text_6;

public:
	inline static int32_t get_offset_of_lng_2() { return static_cast<int32_t>(offsetof(uGUICustomMarkerExample_t2414665147, ___lng_2)); }
	inline double get_lng_2() const { return ___lng_2; }
	inline double* get_address_of_lng_2() { return &___lng_2; }
	inline void set_lng_2(double value)
	{
		___lng_2 = value;
	}

	inline static int32_t get_offset_of_lat_3() { return static_cast<int32_t>(offsetof(uGUICustomMarkerExample_t2414665147, ___lat_3)); }
	inline double get_lat_3() const { return ___lat_3; }
	inline double* get_address_of_lat_3() { return &___lat_3; }
	inline void set_lat_3(double value)
	{
		___lat_3 = value;
	}

	inline static int32_t get_offset_of_textField_4() { return static_cast<int32_t>(offsetof(uGUICustomMarkerExample_t2414665147, ___textField_4)); }
	inline Text_t356221433 * get_textField_4() const { return ___textField_4; }
	inline Text_t356221433 ** get_address_of_textField_4() { return &___textField_4; }
	inline void set_textField_4(Text_t356221433 * value)
	{
		___textField_4 = value;
		Il2CppCodeGenWriteBarrier(&___textField_4, value);
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(uGUICustomMarkerExample_t2414665147, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of__text_6() { return static_cast<int32_t>(offsetof(uGUICustomMarkerExample_t2414665147, ____text_6)); }
	inline String_t* get__text_6() const { return ____text_6; }
	inline String_t** get_address_of__text_6() { return &____text_6; }
	inline void set__text_6(String_t* value)
	{
		____text_6 = value;
		Il2CppCodeGenWriteBarrier(&____text_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
