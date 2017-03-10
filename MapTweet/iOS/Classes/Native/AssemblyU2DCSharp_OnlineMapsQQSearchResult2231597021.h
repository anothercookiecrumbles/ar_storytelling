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
// OnlineMapsQQSearchResult/Data[]
struct DataU5BU5D_t561931301;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsQQSearchResult
struct  OnlineMapsQQSearchResult_t2231597021  : public Il2CppObject
{
public:
	// System.Int32 OnlineMapsQQSearchResult::status
	int32_t ___status_0;
	// System.String OnlineMapsQQSearchResult::message
	String_t* ___message_1;
	// System.Int32 OnlineMapsQQSearchResult::count
	int32_t ___count_2;
	// System.String OnlineMapsQQSearchResult::request_id
	String_t* ___request_id_3;
	// OnlineMapsQQSearchResult/Data[] OnlineMapsQQSearchResult::data
	DataU5BU5D_t561931301* ___data_4;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(OnlineMapsQQSearchResult_t2231597021, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(OnlineMapsQQSearchResult_t2231597021, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier(&___message_1, value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(OnlineMapsQQSearchResult_t2231597021, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_request_id_3() { return static_cast<int32_t>(offsetof(OnlineMapsQQSearchResult_t2231597021, ___request_id_3)); }
	inline String_t* get_request_id_3() const { return ___request_id_3; }
	inline String_t** get_address_of_request_id_3() { return &___request_id_3; }
	inline void set_request_id_3(String_t* value)
	{
		___request_id_3 = value;
		Il2CppCodeGenWriteBarrier(&___request_id_3, value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(OnlineMapsQQSearchResult_t2231597021, ___data_4)); }
	inline DataU5BU5D_t561931301* get_data_4() const { return ___data_4; }
	inline DataU5BU5D_t561931301** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(DataU5BU5D_t561931301* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
