#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsCache/FileCacheItem[]
struct FileCacheItemU5BU5D_t3202441351;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsCache/FileCacheAtlas
struct  FileCacheAtlas_t1511139548  : public Il2CppObject
{
public:
	// System.Int32 OnlineMapsCache/FileCacheAtlas::_size
	int32_t ____size_1;
	// OnlineMapsCache/FileCacheItem[] OnlineMapsCache/FileCacheAtlas::items
	FileCacheItemU5BU5D_t3202441351* ___items_2;
	// System.Int32 OnlineMapsCache/FileCacheAtlas::capacity
	int32_t ___capacity_3;
	// System.Int32 OnlineMapsCache/FileCacheAtlas::count
	int32_t ___count_4;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(FileCacheAtlas_t1511139548, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of_items_2() { return static_cast<int32_t>(offsetof(FileCacheAtlas_t1511139548, ___items_2)); }
	inline FileCacheItemU5BU5D_t3202441351* get_items_2() const { return ___items_2; }
	inline FileCacheItemU5BU5D_t3202441351** get_address_of_items_2() { return &___items_2; }
	inline void set_items_2(FileCacheItemU5BU5D_t3202441351* value)
	{
		___items_2 = value;
		Il2CppCodeGenWriteBarrier(&___items_2, value);
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(FileCacheAtlas_t1511139548, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(FileCacheAtlas_t1511139548, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
