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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/MetaInfo
struct  MetaInfo_t1970633309  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/MetaInfo::requestId
	String_t* ___requestId_0;
	// System.String OnlineMapsHereRoutingAPIResult/MetaInfo::timestamp
	String_t* ___timestamp_1;
	// System.String OnlineMapsHereRoutingAPIResult/MetaInfo::mapVersion
	String_t* ___mapVersion_2;
	// System.String OnlineMapsHereRoutingAPIResult/MetaInfo::moduleVersion
	String_t* ___moduleVersion_3;
	// System.String OnlineMapsHereRoutingAPIResult/MetaInfo::interfaceVersion
	String_t* ___interfaceVersion_4;

public:
	inline static int32_t get_offset_of_requestId_0() { return static_cast<int32_t>(offsetof(MetaInfo_t1970633309, ___requestId_0)); }
	inline String_t* get_requestId_0() const { return ___requestId_0; }
	inline String_t** get_address_of_requestId_0() { return &___requestId_0; }
	inline void set_requestId_0(String_t* value)
	{
		___requestId_0 = value;
		Il2CppCodeGenWriteBarrier(&___requestId_0, value);
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(MetaInfo_t1970633309, ___timestamp_1)); }
	inline String_t* get_timestamp_1() const { return ___timestamp_1; }
	inline String_t** get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(String_t* value)
	{
		___timestamp_1 = value;
		Il2CppCodeGenWriteBarrier(&___timestamp_1, value);
	}

	inline static int32_t get_offset_of_mapVersion_2() { return static_cast<int32_t>(offsetof(MetaInfo_t1970633309, ___mapVersion_2)); }
	inline String_t* get_mapVersion_2() const { return ___mapVersion_2; }
	inline String_t** get_address_of_mapVersion_2() { return &___mapVersion_2; }
	inline void set_mapVersion_2(String_t* value)
	{
		___mapVersion_2 = value;
		Il2CppCodeGenWriteBarrier(&___mapVersion_2, value);
	}

	inline static int32_t get_offset_of_moduleVersion_3() { return static_cast<int32_t>(offsetof(MetaInfo_t1970633309, ___moduleVersion_3)); }
	inline String_t* get_moduleVersion_3() const { return ___moduleVersion_3; }
	inline String_t** get_address_of_moduleVersion_3() { return &___moduleVersion_3; }
	inline void set_moduleVersion_3(String_t* value)
	{
		___moduleVersion_3 = value;
		Il2CppCodeGenWriteBarrier(&___moduleVersion_3, value);
	}

	inline static int32_t get_offset_of_interfaceVersion_4() { return static_cast<int32_t>(offsetof(MetaInfo_t1970633309, ___interfaceVersion_4)); }
	inline String_t* get_interfaceVersion_4() const { return ___interfaceVersion_4; }
	inline String_t** get_address_of_interfaceVersion_4() { return &___interfaceVersion_4; }
	inline void set_interfaceVersion_4(String_t* value)
	{
		___interfaceVersion_4 = value;
		Il2CppCodeGenWriteBarrier(&___interfaceVersion_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
