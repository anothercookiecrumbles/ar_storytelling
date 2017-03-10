#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsHereRoutingAPIResult/MetaInfo
struct MetaInfo_t1970633309;
// OnlineMapsHereRoutingAPIResult/Route[]
struct RouteU5BU5D_t841998694;
// System.String
struct String_t;
// OnlineMapsHereRoutingAPIResult/SourceAttribution
struct SourceAttribution_t4246365728;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult
struct  OnlineMapsHereRoutingAPIResult_t4009328705  : public Il2CppObject
{
public:
	// OnlineMapsHereRoutingAPIResult/MetaInfo OnlineMapsHereRoutingAPIResult::metaInfo
	MetaInfo_t1970633309 * ___metaInfo_0;
	// OnlineMapsHereRoutingAPIResult/Route[] OnlineMapsHereRoutingAPIResult::routes
	RouteU5BU5D_t841998694* ___routes_1;
	// System.String OnlineMapsHereRoutingAPIResult::language
	String_t* ___language_2;
	// OnlineMapsHereRoutingAPIResult/SourceAttribution OnlineMapsHereRoutingAPIResult::sourceAttribution
	SourceAttribution_t4246365728 * ___sourceAttribution_3;

public:
	inline static int32_t get_offset_of_metaInfo_0() { return static_cast<int32_t>(offsetof(OnlineMapsHereRoutingAPIResult_t4009328705, ___metaInfo_0)); }
	inline MetaInfo_t1970633309 * get_metaInfo_0() const { return ___metaInfo_0; }
	inline MetaInfo_t1970633309 ** get_address_of_metaInfo_0() { return &___metaInfo_0; }
	inline void set_metaInfo_0(MetaInfo_t1970633309 * value)
	{
		___metaInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___metaInfo_0, value);
	}

	inline static int32_t get_offset_of_routes_1() { return static_cast<int32_t>(offsetof(OnlineMapsHereRoutingAPIResult_t4009328705, ___routes_1)); }
	inline RouteU5BU5D_t841998694* get_routes_1() const { return ___routes_1; }
	inline RouteU5BU5D_t841998694** get_address_of_routes_1() { return &___routes_1; }
	inline void set_routes_1(RouteU5BU5D_t841998694* value)
	{
		___routes_1 = value;
		Il2CppCodeGenWriteBarrier(&___routes_1, value);
	}

	inline static int32_t get_offset_of_language_2() { return static_cast<int32_t>(offsetof(OnlineMapsHereRoutingAPIResult_t4009328705, ___language_2)); }
	inline String_t* get_language_2() const { return ___language_2; }
	inline String_t** get_address_of_language_2() { return &___language_2; }
	inline void set_language_2(String_t* value)
	{
		___language_2 = value;
		Il2CppCodeGenWriteBarrier(&___language_2, value);
	}

	inline static int32_t get_offset_of_sourceAttribution_3() { return static_cast<int32_t>(offsetof(OnlineMapsHereRoutingAPIResult_t4009328705, ___sourceAttribution_3)); }
	inline SourceAttribution_t4246365728 * get_sourceAttribution_3() const { return ___sourceAttribution_3; }
	inline SourceAttribution_t4246365728 ** get_address_of_sourceAttribution_3() { return &___sourceAttribution_3; }
	inline void set_sourceAttribution_3(SourceAttribution_t4246365728 * value)
	{
		___sourceAttribution_3 = value;
		Il2CppCodeGenWriteBarrier(&___sourceAttribution_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
