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

// OnlineMapsGoogleGeocoding/RequestParams
struct  RequestParams_t52588726  : public Il2CppObject
{
public:
	// System.String OnlineMapsGoogleGeocoding/RequestParams::key
	String_t* ___key_0;
	// System.String OnlineMapsGoogleGeocoding/RequestParams::language
	String_t* ___language_1;
	// System.String OnlineMapsGoogleGeocoding/RequestParams::client
	String_t* ___client_2;
	// System.String OnlineMapsGoogleGeocoding/RequestParams::signature
	String_t* ___signature_3;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RequestParams_t52588726, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_language_1() { return static_cast<int32_t>(offsetof(RequestParams_t52588726, ___language_1)); }
	inline String_t* get_language_1() const { return ___language_1; }
	inline String_t** get_address_of_language_1() { return &___language_1; }
	inline void set_language_1(String_t* value)
	{
		___language_1 = value;
		Il2CppCodeGenWriteBarrier(&___language_1, value);
	}

	inline static int32_t get_offset_of_client_2() { return static_cast<int32_t>(offsetof(RequestParams_t52588726, ___client_2)); }
	inline String_t* get_client_2() const { return ___client_2; }
	inline String_t** get_address_of_client_2() { return &___client_2; }
	inline void set_client_2(String_t* value)
	{
		___client_2 = value;
		Il2CppCodeGenWriteBarrier(&___client_2, value);
	}

	inline static int32_t get_offset_of_signature_3() { return static_cast<int32_t>(offsetof(RequestParams_t52588726, ___signature_3)); }
	inline String_t* get_signature_3() const { return ___signature_3; }
	inline String_t** get_address_of_signature_3() { return &___signature_3; }
	inline void set_signature_3(String_t* value)
	{
		___signature_3 = value;
		Il2CppCodeGenWriteBarrier(&___signature_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
