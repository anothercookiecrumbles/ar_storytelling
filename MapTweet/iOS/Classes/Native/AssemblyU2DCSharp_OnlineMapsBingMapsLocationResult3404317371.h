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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBingMapsLocationResult
struct  OnlineMapsBingMapsLocationResult_t3404317371  : public Il2CppObject
{
public:
	// System.String OnlineMapsBingMapsLocationResult::name
	String_t* ___name_0;
	// UnityEngine.Vector2 OnlineMapsBingMapsLocationResult::location
	Vector2_t2243707579  ___location_1;
	// System.Double OnlineMapsBingMapsLocationResult::latitude
	double ___latitude_2;
	// System.Double OnlineMapsBingMapsLocationResult::longitude
	double ___longitude_3;
	// UnityEngine.Rect OnlineMapsBingMapsLocationResult::boundingBox
	Rect_t3681755626  ___boundingBox_4;
	// System.String OnlineMapsBingMapsLocationResult::entityType
	String_t* ___entityType_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> OnlineMapsBingMapsLocationResult::address
	Dictionary_2_t3943999495 * ___address_6;
	// System.String OnlineMapsBingMapsLocationResult::formattedAddress
	String_t* ___formattedAddress_7;
	// System.String OnlineMapsBingMapsLocationResult::confidence
	String_t* ___confidence_8;
	// System.String OnlineMapsBingMapsLocationResult::matchCode
	String_t* ___matchCode_9;
	// OnlineMapsXML OnlineMapsBingMapsLocationResult::node
	OnlineMapsXML_t3341520387 * ___node_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_location_1() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___location_1)); }
	inline Vector2_t2243707579  get_location_1() const { return ___location_1; }
	inline Vector2_t2243707579 * get_address_of_location_1() { return &___location_1; }
	inline void set_location_1(Vector2_t2243707579  value)
	{
		___location_1 = value;
	}

	inline static int32_t get_offset_of_latitude_2() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___latitude_2)); }
	inline double get_latitude_2() const { return ___latitude_2; }
	inline double* get_address_of_latitude_2() { return &___latitude_2; }
	inline void set_latitude_2(double value)
	{
		___latitude_2 = value;
	}

	inline static int32_t get_offset_of_longitude_3() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___longitude_3)); }
	inline double get_longitude_3() const { return ___longitude_3; }
	inline double* get_address_of_longitude_3() { return &___longitude_3; }
	inline void set_longitude_3(double value)
	{
		___longitude_3 = value;
	}

	inline static int32_t get_offset_of_boundingBox_4() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___boundingBox_4)); }
	inline Rect_t3681755626  get_boundingBox_4() const { return ___boundingBox_4; }
	inline Rect_t3681755626 * get_address_of_boundingBox_4() { return &___boundingBox_4; }
	inline void set_boundingBox_4(Rect_t3681755626  value)
	{
		___boundingBox_4 = value;
	}

	inline static int32_t get_offset_of_entityType_5() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___entityType_5)); }
	inline String_t* get_entityType_5() const { return ___entityType_5; }
	inline String_t** get_address_of_entityType_5() { return &___entityType_5; }
	inline void set_entityType_5(String_t* value)
	{
		___entityType_5 = value;
		Il2CppCodeGenWriteBarrier(&___entityType_5, value);
	}

	inline static int32_t get_offset_of_address_6() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___address_6)); }
	inline Dictionary_2_t3943999495 * get_address_6() const { return ___address_6; }
	inline Dictionary_2_t3943999495 ** get_address_of_address_6() { return &___address_6; }
	inline void set_address_6(Dictionary_2_t3943999495 * value)
	{
		___address_6 = value;
		Il2CppCodeGenWriteBarrier(&___address_6, value);
	}

	inline static int32_t get_offset_of_formattedAddress_7() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___formattedAddress_7)); }
	inline String_t* get_formattedAddress_7() const { return ___formattedAddress_7; }
	inline String_t** get_address_of_formattedAddress_7() { return &___formattedAddress_7; }
	inline void set_formattedAddress_7(String_t* value)
	{
		___formattedAddress_7 = value;
		Il2CppCodeGenWriteBarrier(&___formattedAddress_7, value);
	}

	inline static int32_t get_offset_of_confidence_8() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___confidence_8)); }
	inline String_t* get_confidence_8() const { return ___confidence_8; }
	inline String_t** get_address_of_confidence_8() { return &___confidence_8; }
	inline void set_confidence_8(String_t* value)
	{
		___confidence_8 = value;
		Il2CppCodeGenWriteBarrier(&___confidence_8, value);
	}

	inline static int32_t get_offset_of_matchCode_9() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___matchCode_9)); }
	inline String_t* get_matchCode_9() const { return ___matchCode_9; }
	inline String_t** get_address_of_matchCode_9() { return &___matchCode_9; }
	inline void set_matchCode_9(String_t* value)
	{
		___matchCode_9 = value;
		Il2CppCodeGenWriteBarrier(&___matchCode_9, value);
	}

	inline static int32_t get_offset_of_node_10() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsLocationResult_t3404317371, ___node_10)); }
	inline OnlineMapsXML_t3341520387 * get_node_10() const { return ___node_10; }
	inline OnlineMapsXML_t3341520387 ** get_address_of_node_10() { return &___node_10; }
	inline void set_node_10(OnlineMapsXML_t3341520387 * value)
	{
		___node_10 = value;
		Il2CppCodeGenWriteBarrier(&___node_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
