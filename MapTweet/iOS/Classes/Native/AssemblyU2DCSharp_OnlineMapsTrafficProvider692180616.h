#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsTrafficProvider[]
struct OnlineMapsTrafficProviderU5BU5D_t1441044057;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsTrafficProvider
struct  OnlineMapsTrafficProvider_t692180616  : public Il2CppObject
{
public:
	// System.String OnlineMapsTrafficProvider::id
	String_t* ___id_1;
	// System.String OnlineMapsTrafficProvider::title
	String_t* ___title_2;
	// System.String OnlineMapsTrafficProvider::url
	String_t* ___url_3;
	// System.Boolean OnlineMapsTrafficProvider::isCustom
	bool ___isCustom_4;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(OnlineMapsTrafficProvider_t692180616, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier(&___id_1, value);
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(OnlineMapsTrafficProvider_t692180616, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(OnlineMapsTrafficProvider_t692180616, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier(&___url_3, value);
	}

	inline static int32_t get_offset_of_isCustom_4() { return static_cast<int32_t>(offsetof(OnlineMapsTrafficProvider_t692180616, ___isCustom_4)); }
	inline bool get_isCustom_4() const { return ___isCustom_4; }
	inline bool* get_address_of_isCustom_4() { return &___isCustom_4; }
	inline void set_isCustom_4(bool value)
	{
		___isCustom_4 = value;
	}
};

struct OnlineMapsTrafficProvider_t692180616_StaticFields
{
public:
	// OnlineMapsTrafficProvider[] OnlineMapsTrafficProvider::_providers
	OnlineMapsTrafficProviderU5BU5D_t1441044057* ____providers_0;

public:
	inline static int32_t get_offset_of__providers_0() { return static_cast<int32_t>(offsetof(OnlineMapsTrafficProvider_t692180616_StaticFields, ____providers_0)); }
	inline OnlineMapsTrafficProviderU5BU5D_t1441044057* get__providers_0() const { return ____providers_0; }
	inline OnlineMapsTrafficProviderU5BU5D_t1441044057** get_address_of__providers_0() { return &____providers_0; }
	inline void set__providers_0(OnlineMapsTrafficProviderU5BU5D_t1441044057* value)
	{
		____providers_0 = value;
		Il2CppCodeGenWriteBarrier(&____providers_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
