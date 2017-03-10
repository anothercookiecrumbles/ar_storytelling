#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesAboutScreenInfo
struct  SamplesAboutScreenInfo_t1023079980  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SamplesAboutScreenInfo::titles
	Dictionary_2_t3943999495 * ___titles_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SamplesAboutScreenInfo::descriptions
	Dictionary_2_t3943999495 * ___descriptions_1;

public:
	inline static int32_t get_offset_of_titles_0() { return static_cast<int32_t>(offsetof(SamplesAboutScreenInfo_t1023079980, ___titles_0)); }
	inline Dictionary_2_t3943999495 * get_titles_0() const { return ___titles_0; }
	inline Dictionary_2_t3943999495 ** get_address_of_titles_0() { return &___titles_0; }
	inline void set_titles_0(Dictionary_2_t3943999495 * value)
	{
		___titles_0 = value;
		Il2CppCodeGenWriteBarrier(&___titles_0, value);
	}

	inline static int32_t get_offset_of_descriptions_1() { return static_cast<int32_t>(offsetof(SamplesAboutScreenInfo_t1023079980, ___descriptions_1)); }
	inline Dictionary_2_t3943999495 * get_descriptions_1() const { return ___descriptions_1; }
	inline Dictionary_2_t3943999495 ** get_address_of_descriptions_1() { return &___descriptions_1; }
	inline void set_descriptions_1(Dictionary_2_t3943999495 * value)
	{
		___descriptions_1 = value;
		Il2CppCodeGenWriteBarrier(&___descriptions_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
