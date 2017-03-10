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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/Note
struct  Note_t764539160  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/Note::type
	String_t* ___type_0;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Note::code
	String_t* ___code_1;
	// System.String OnlineMapsHereRoutingAPIResult/Route/Note::text
	String_t* ___text_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> OnlineMapsHereRoutingAPIResult/Route/Note::additionalData
	Dictionary_2_t3943999495 * ___additionalData_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Note_t764539160, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier(&___type_0, value);
	}

	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(Note_t764539160, ___code_1)); }
	inline String_t* get_code_1() const { return ___code_1; }
	inline String_t** get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(String_t* value)
	{
		___code_1 = value;
		Il2CppCodeGenWriteBarrier(&___code_1, value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Note_t764539160, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_additionalData_3() { return static_cast<int32_t>(offsetof(Note_t764539160, ___additionalData_3)); }
	inline Dictionary_2_t3943999495 * get_additionalData_3() const { return ___additionalData_3; }
	inline Dictionary_2_t3943999495 ** get_address_of_additionalData_3() { return &___additionalData_3; }
	inline void set_additionalData_3(Dictionary_2_t3943999495 * value)
	{
		___additionalData_3 = value;
		Il2CppCodeGenWriteBarrier(&___additionalData_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
