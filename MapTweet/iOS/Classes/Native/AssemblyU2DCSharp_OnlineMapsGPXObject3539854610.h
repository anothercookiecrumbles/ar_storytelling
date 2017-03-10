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
// OnlineMapsGPXObject/Meta
struct Meta_t21578898;
// System.Collections.Generic.List`1<OnlineMapsGPXObject/Waypoint>
struct List_1_t1700864428;
// System.Collections.Generic.List`1<OnlineMapsGPXObject/Route>
struct List_1_t2088036932;
// System.Collections.Generic.List`1<OnlineMapsGPXObject/Track>
struct List_1_t3036032558;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsGPXObject
struct  OnlineMapsGPXObject_t3539854610  : public Il2CppObject
{
public:
	// System.String OnlineMapsGPXObject::version
	String_t* ___version_0;
	// System.String OnlineMapsGPXObject::creator
	String_t* ___creator_1;
	// OnlineMapsGPXObject/Meta OnlineMapsGPXObject::metadata
	Meta_t21578898 * ___metadata_2;
	// System.Collections.Generic.List`1<OnlineMapsGPXObject/Waypoint> OnlineMapsGPXObject::waypoints
	List_1_t1700864428 * ___waypoints_3;
	// System.Collections.Generic.List`1<OnlineMapsGPXObject/Route> OnlineMapsGPXObject::routes
	List_1_t2088036932 * ___routes_4;
	// System.Collections.Generic.List`1<OnlineMapsGPXObject/Track> OnlineMapsGPXObject::tracks
	List_1_t3036032558 * ___tracks_5;
	// OnlineMapsXML OnlineMapsGPXObject::extensions
	OnlineMapsXML_t3341520387 * ___extensions_6;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(OnlineMapsGPXObject_t3539854610, ___version_0)); }
	inline String_t* get_version_0() const { return ___version_0; }
	inline String_t** get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(String_t* value)
	{
		___version_0 = value;
		Il2CppCodeGenWriteBarrier(&___version_0, value);
	}

	inline static int32_t get_offset_of_creator_1() { return static_cast<int32_t>(offsetof(OnlineMapsGPXObject_t3539854610, ___creator_1)); }
	inline String_t* get_creator_1() const { return ___creator_1; }
	inline String_t** get_address_of_creator_1() { return &___creator_1; }
	inline void set_creator_1(String_t* value)
	{
		___creator_1 = value;
		Il2CppCodeGenWriteBarrier(&___creator_1, value);
	}

	inline static int32_t get_offset_of_metadata_2() { return static_cast<int32_t>(offsetof(OnlineMapsGPXObject_t3539854610, ___metadata_2)); }
	inline Meta_t21578898 * get_metadata_2() const { return ___metadata_2; }
	inline Meta_t21578898 ** get_address_of_metadata_2() { return &___metadata_2; }
	inline void set_metadata_2(Meta_t21578898 * value)
	{
		___metadata_2 = value;
		Il2CppCodeGenWriteBarrier(&___metadata_2, value);
	}

	inline static int32_t get_offset_of_waypoints_3() { return static_cast<int32_t>(offsetof(OnlineMapsGPXObject_t3539854610, ___waypoints_3)); }
	inline List_1_t1700864428 * get_waypoints_3() const { return ___waypoints_3; }
	inline List_1_t1700864428 ** get_address_of_waypoints_3() { return &___waypoints_3; }
	inline void set_waypoints_3(List_1_t1700864428 * value)
	{
		___waypoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___waypoints_3, value);
	}

	inline static int32_t get_offset_of_routes_4() { return static_cast<int32_t>(offsetof(OnlineMapsGPXObject_t3539854610, ___routes_4)); }
	inline List_1_t2088036932 * get_routes_4() const { return ___routes_4; }
	inline List_1_t2088036932 ** get_address_of_routes_4() { return &___routes_4; }
	inline void set_routes_4(List_1_t2088036932 * value)
	{
		___routes_4 = value;
		Il2CppCodeGenWriteBarrier(&___routes_4, value);
	}

	inline static int32_t get_offset_of_tracks_5() { return static_cast<int32_t>(offsetof(OnlineMapsGPXObject_t3539854610, ___tracks_5)); }
	inline List_1_t3036032558 * get_tracks_5() const { return ___tracks_5; }
	inline List_1_t3036032558 ** get_address_of_tracks_5() { return &___tracks_5; }
	inline void set_tracks_5(List_1_t3036032558 * value)
	{
		___tracks_5 = value;
		Il2CppCodeGenWriteBarrier(&___tracks_5, value);
	}

	inline static int32_t get_offset_of_extensions_6() { return static_cast<int32_t>(offsetof(OnlineMapsGPXObject_t3539854610, ___extensions_6)); }
	inline OnlineMapsXML_t3341520387 * get_extensions_6() const { return ___extensions_6; }
	inline OnlineMapsXML_t3341520387 ** get_address_of_extensions_6() { return &___extensions_6; }
	inline void set_extensions_6(OnlineMapsXML_t3341520387 * value)
	{
		___extensions_6 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
