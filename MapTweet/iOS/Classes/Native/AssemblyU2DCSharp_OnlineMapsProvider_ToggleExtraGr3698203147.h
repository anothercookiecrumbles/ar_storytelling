#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsProvider/IExtraField[]
struct IExtraFieldU5BU5D_t3169866680;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsProvider/ToggleExtraGroup
struct  ToggleExtraGroup_t3698203147  : public Il2CppObject
{
public:
	// OnlineMapsProvider/IExtraField[] OnlineMapsProvider/ToggleExtraGroup::fields
	IExtraFieldU5BU5D_t3169866680* ___fields_0;
	// System.String OnlineMapsProvider/ToggleExtraGroup::title
	String_t* ___title_1;
	// System.Boolean OnlineMapsProvider/ToggleExtraGroup::value
	bool ___value_2;
	// System.String OnlineMapsProvider/ToggleExtraGroup::id
	String_t* ___id_3;

public:
	inline static int32_t get_offset_of_fields_0() { return static_cast<int32_t>(offsetof(ToggleExtraGroup_t3698203147, ___fields_0)); }
	inline IExtraFieldU5BU5D_t3169866680* get_fields_0() const { return ___fields_0; }
	inline IExtraFieldU5BU5D_t3169866680** get_address_of_fields_0() { return &___fields_0; }
	inline void set_fields_0(IExtraFieldU5BU5D_t3169866680* value)
	{
		___fields_0 = value;
		Il2CppCodeGenWriteBarrier(&___fields_0, value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(ToggleExtraGroup_t3698203147, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier(&___title_1, value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ToggleExtraGroup_t3698203147, ___value_2)); }
	inline bool get_value_2() const { return ___value_2; }
	inline bool* get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(bool value)
	{
		___value_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(ToggleExtraGroup_t3698203147, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier(&___id_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
