#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsCache/MemoryCacheItem
struct  MemoryCacheItem_t3477911489  : public Il2CppObject
{
public:
	// System.Byte[] OnlineMapsCache/MemoryCacheItem::bytes
	ByteU5BU5D_t3397334013* ___bytes_0;
	// System.Int32 OnlineMapsCache/MemoryCacheItem::size
	int32_t ___size_1;
	// System.Int32 OnlineMapsCache/MemoryCacheItem::hash
	int32_t ___hash_2;
	// System.String OnlineMapsCache/MemoryCacheItem::key
	String_t* ___key_3;
	// System.Int64 OnlineMapsCache/MemoryCacheItem::time
	int64_t ___time_4;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(MemoryCacheItem_t3477911489, ___bytes_0)); }
	inline ByteU5BU5D_t3397334013* get_bytes_0() const { return ___bytes_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(ByteU5BU5D_t3397334013* value)
	{
		___bytes_0 = value;
		Il2CppCodeGenWriteBarrier(&___bytes_0, value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(MemoryCacheItem_t3477911489, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_hash_2() { return static_cast<int32_t>(offsetof(MemoryCacheItem_t3477911489, ___hash_2)); }
	inline int32_t get_hash_2() const { return ___hash_2; }
	inline int32_t* get_address_of_hash_2() { return &___hash_2; }
	inline void set_hash_2(int32_t value)
	{
		___hash_2 = value;
	}

	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(MemoryCacheItem_t3477911489, ___key_3)); }
	inline String_t* get_key_3() const { return ___key_3; }
	inline String_t** get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(String_t* value)
	{
		___key_3 = value;
		Il2CppCodeGenWriteBarrier(&___key_3, value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(MemoryCacheItem_t3477911489, ___time_4)); }
	inline int64_t get_time_4() const { return ___time_4; }
	inline int64_t* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(int64_t value)
	{
		___time_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
