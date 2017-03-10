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
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen4213605476.h"
#include "mscorlib_System_Nullable_1_gen3110267798.h"
#include "mscorlib_System_Nullable_1_gen3840795690.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Nullable_1_gen2622114599.h"
#include "mscorlib_System_Nullable_1_gen2860035737.h"
#include "mscorlib_System_Nullable_1_gen5003507.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGoogleDirections/Params
struct  Params_t4049735432  : public Il2CppObject
{
public:
	// System.Object OnlineMapsGoogleDirections/Params::origin
	Il2CppObject * ___origin_0;
	// System.Object OnlineMapsGoogleDirections/Params::destination
	Il2CppObject * ___destination_1;
	// System.Nullable`1<OnlineMapsGoogleDirections/Mode> OnlineMapsGoogleDirections/Params::mode
	Nullable_1_t4213605476  ___mode_2;
	// System.Collections.IEnumerable OnlineMapsGoogleDirections/Params::waypoints
	Il2CppObject * ___waypoints_3;
	// System.Boolean OnlineMapsGoogleDirections/Params::alternatives
	bool ___alternatives_4;
	// System.Nullable`1<OnlineMapsGoogleDirections/Avoid> OnlineMapsGoogleDirections/Params::avoid
	Nullable_1_t3110267798  ___avoid_5;
	// System.Nullable`1<OnlineMapsGoogleDirections/Units> OnlineMapsGoogleDirections/Params::units
	Nullable_1_t3840795690  ___units_6;
	// System.String OnlineMapsGoogleDirections/Params::region
	String_t* ___region_7;
	// System.Nullable`1<System.Int64> OnlineMapsGoogleDirections/Params::arrival_time
	Nullable_1_t3467111648  ___arrival_time_8;
	// System.String OnlineMapsGoogleDirections/Params::language
	String_t* ___language_9;
	// System.String OnlineMapsGoogleDirections/Params::key
	String_t* ___key_10;
	// System.Nullable`1<OnlineMapsGoogleDirections/TrafficModel> OnlineMapsGoogleDirections/Params::traffic_model
	Nullable_1_t2622114599  ___traffic_model_11;
	// System.Nullable`1<OnlineMapsGoogleDirections/TransitMode> OnlineMapsGoogleDirections/Params::transit_mode
	Nullable_1_t2860035737  ___transit_mode_12;
	// System.Nullable`1<OnlineMapsGoogleDirections/TransitRoutingPreference> OnlineMapsGoogleDirections/Params::transit_routing_preference
	Nullable_1_t5003507  ___transit_routing_preference_13;
	// System.Object OnlineMapsGoogleDirections/Params::_departure_time
	Il2CppObject * ____departure_time_14;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___origin_0)); }
	inline Il2CppObject * get_origin_0() const { return ___origin_0; }
	inline Il2CppObject ** get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(Il2CppObject * value)
	{
		___origin_0 = value;
		Il2CppCodeGenWriteBarrier(&___origin_0, value);
	}

	inline static int32_t get_offset_of_destination_1() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___destination_1)); }
	inline Il2CppObject * get_destination_1() const { return ___destination_1; }
	inline Il2CppObject ** get_address_of_destination_1() { return &___destination_1; }
	inline void set_destination_1(Il2CppObject * value)
	{
		___destination_1 = value;
		Il2CppCodeGenWriteBarrier(&___destination_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___mode_2)); }
	inline Nullable_1_t4213605476  get_mode_2() const { return ___mode_2; }
	inline Nullable_1_t4213605476 * get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(Nullable_1_t4213605476  value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_waypoints_3() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___waypoints_3)); }
	inline Il2CppObject * get_waypoints_3() const { return ___waypoints_3; }
	inline Il2CppObject ** get_address_of_waypoints_3() { return &___waypoints_3; }
	inline void set_waypoints_3(Il2CppObject * value)
	{
		___waypoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___waypoints_3, value);
	}

	inline static int32_t get_offset_of_alternatives_4() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___alternatives_4)); }
	inline bool get_alternatives_4() const { return ___alternatives_4; }
	inline bool* get_address_of_alternatives_4() { return &___alternatives_4; }
	inline void set_alternatives_4(bool value)
	{
		___alternatives_4 = value;
	}

	inline static int32_t get_offset_of_avoid_5() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___avoid_5)); }
	inline Nullable_1_t3110267798  get_avoid_5() const { return ___avoid_5; }
	inline Nullable_1_t3110267798 * get_address_of_avoid_5() { return &___avoid_5; }
	inline void set_avoid_5(Nullable_1_t3110267798  value)
	{
		___avoid_5 = value;
	}

	inline static int32_t get_offset_of_units_6() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___units_6)); }
	inline Nullable_1_t3840795690  get_units_6() const { return ___units_6; }
	inline Nullable_1_t3840795690 * get_address_of_units_6() { return &___units_6; }
	inline void set_units_6(Nullable_1_t3840795690  value)
	{
		___units_6 = value;
	}

	inline static int32_t get_offset_of_region_7() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___region_7)); }
	inline String_t* get_region_7() const { return ___region_7; }
	inline String_t** get_address_of_region_7() { return &___region_7; }
	inline void set_region_7(String_t* value)
	{
		___region_7 = value;
		Il2CppCodeGenWriteBarrier(&___region_7, value);
	}

	inline static int32_t get_offset_of_arrival_time_8() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___arrival_time_8)); }
	inline Nullable_1_t3467111648  get_arrival_time_8() const { return ___arrival_time_8; }
	inline Nullable_1_t3467111648 * get_address_of_arrival_time_8() { return &___arrival_time_8; }
	inline void set_arrival_time_8(Nullable_1_t3467111648  value)
	{
		___arrival_time_8 = value;
	}

	inline static int32_t get_offset_of_language_9() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___language_9)); }
	inline String_t* get_language_9() const { return ___language_9; }
	inline String_t** get_address_of_language_9() { return &___language_9; }
	inline void set_language_9(String_t* value)
	{
		___language_9 = value;
		Il2CppCodeGenWriteBarrier(&___language_9, value);
	}

	inline static int32_t get_offset_of_key_10() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___key_10)); }
	inline String_t* get_key_10() const { return ___key_10; }
	inline String_t** get_address_of_key_10() { return &___key_10; }
	inline void set_key_10(String_t* value)
	{
		___key_10 = value;
		Il2CppCodeGenWriteBarrier(&___key_10, value);
	}

	inline static int32_t get_offset_of_traffic_model_11() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___traffic_model_11)); }
	inline Nullable_1_t2622114599  get_traffic_model_11() const { return ___traffic_model_11; }
	inline Nullable_1_t2622114599 * get_address_of_traffic_model_11() { return &___traffic_model_11; }
	inline void set_traffic_model_11(Nullable_1_t2622114599  value)
	{
		___traffic_model_11 = value;
	}

	inline static int32_t get_offset_of_transit_mode_12() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___transit_mode_12)); }
	inline Nullable_1_t2860035737  get_transit_mode_12() const { return ___transit_mode_12; }
	inline Nullable_1_t2860035737 * get_address_of_transit_mode_12() { return &___transit_mode_12; }
	inline void set_transit_mode_12(Nullable_1_t2860035737  value)
	{
		___transit_mode_12 = value;
	}

	inline static int32_t get_offset_of_transit_routing_preference_13() { return static_cast<int32_t>(offsetof(Params_t4049735432, ___transit_routing_preference_13)); }
	inline Nullable_1_t5003507  get_transit_routing_preference_13() const { return ___transit_routing_preference_13; }
	inline Nullable_1_t5003507 * get_address_of_transit_routing_preference_13() { return &___transit_routing_preference_13; }
	inline void set_transit_routing_preference_13(Nullable_1_t5003507  value)
	{
		___transit_routing_preference_13 = value;
	}

	inline static int32_t get_offset_of__departure_time_14() { return static_cast<int32_t>(offsetof(Params_t4049735432, ____departure_time_14)); }
	inline Il2CppObject * get__departure_time_14() const { return ____departure_time_14; }
	inline Il2CppObject ** get_address_of__departure_time_14() { return &____departure_time_14; }
	inline void set__departure_time_14(Il2CppObject * value)
	{
		____departure_time_14 = value;
		Il2CppCodeGenWriteBarrier(&____departure_time_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
