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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBuildingBase/MetaInfo
struct  MetaInfo_t2902101193 
{
public:
	// System.String OnlineMapsBuildingBase/MetaInfo::info
	String_t* ___info_0;
	// System.String OnlineMapsBuildingBase/MetaInfo::title
	String_t* ___title_1;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(MetaInfo_t2902101193, ___info_0)); }
	inline String_t* get_info_0() const { return ___info_0; }
	inline String_t** get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(String_t* value)
	{
		___info_0 = value;
		Il2CppCodeGenWriteBarrier(&___info_0, value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(MetaInfo_t2902101193, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier(&___title_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of OnlineMapsBuildingBase/MetaInfo
struct MetaInfo_t2902101193_marshaled_pinvoke
{
	char* ___info_0;
	char* ___title_1;
};
// Native definition for COM marshalling of OnlineMapsBuildingBase/MetaInfo
struct MetaInfo_t2902101193_marshaled_com
{
	Il2CppChar* ___info_0;
	Il2CppChar* ___title_1;
};
