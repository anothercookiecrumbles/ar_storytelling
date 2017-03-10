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

// OnlineMapsCache/FileCacheItem
struct  FileCacheItem_t981860722  : public Il2CppObject
{
public:
	// System.Int32 OnlineMapsCache/FileCacheItem::size
	int32_t ___size_0;
	// System.String OnlineMapsCache/FileCacheItem::filename
	String_t* ___filename_1;
	// System.Int32 OnlineMapsCache/FileCacheItem::hash
	int32_t ___hash_2;
	// System.Int64 OnlineMapsCache/FileCacheItem::time
	int64_t ___time_3;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(FileCacheItem_t981860722, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_filename_1() { return static_cast<int32_t>(offsetof(FileCacheItem_t981860722, ___filename_1)); }
	inline String_t* get_filename_1() const { return ___filename_1; }
	inline String_t** get_address_of_filename_1() { return &___filename_1; }
	inline void set_filename_1(String_t* value)
	{
		___filename_1 = value;
		Il2CppCodeGenWriteBarrier(&___filename_1, value);
	}

	inline static int32_t get_offset_of_hash_2() { return static_cast<int32_t>(offsetof(FileCacheItem_t981860722, ___hash_2)); }
	inline int32_t get_hash_2() const { return ___hash_2; }
	inline int32_t* get_address_of_hash_2() { return &___hash_2; }
	inline void set_hash_2(int32_t value)
	{
		___hash_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(FileCacheItem_t981860722, ___time_3)); }
	inline int64_t get_time_3() const { return ___time_3; }
	inline int64_t* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(int64_t value)
	{
		___time_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
