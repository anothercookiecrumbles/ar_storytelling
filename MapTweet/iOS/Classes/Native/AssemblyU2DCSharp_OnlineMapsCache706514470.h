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
// OnlineMapsCache
struct OnlineMapsCache_t706514470;
// System.Action`1<OnlineMapsTile>
struct Action_1_t4118096618;
// OnlineMaps
struct OnlineMaps_t1893290312;
// OnlineMapsCache/MemoryCacheItem[]
struct MemoryCacheItemU5BU5D_t1902335004;
// OnlineMapsCache/FileCacheAtlas
struct FileCacheAtlas_t1511139548;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_OnlineMapsCache_CacheLocation3086238124.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsCache
struct  OnlineMapsCache_t706514470  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<OnlineMapsTile> OnlineMapsCache::OnLoadedFromCache
	Action_1_t4118096618 * ___OnLoadedFromCache_4;
	// System.Action`1<OnlineMapsTile> OnlineMapsCache::OnLoadedFromFileCache
	Action_1_t4118096618 * ___OnLoadedFromFileCache_5;
	// System.Action`1<OnlineMapsTile> OnlineMapsCache::OnLoadedFromMemoryCache
	Action_1_t4118096618 * ___OnLoadedFromMemoryCache_6;
	// System.Action`1<OnlineMapsTile> OnlineMapsCache::OnStartDownloadTile
	Action_1_t4118096618 * ___OnStartDownloadTile_7;
	// OnlineMapsCache/CacheLocation OnlineMapsCache::fileCacheLocation
	int32_t ___fileCacheLocation_8;
	// System.String OnlineMapsCache::fileCacheCustomPath
	String_t* ___fileCacheCustomPath_9;
	// System.String OnlineMapsCache::fileCacheTilePath
	String_t* ___fileCacheTilePath_10;
	// System.Single OnlineMapsCache::fileCacheUnloadRate
	float ___fileCacheUnloadRate_11;
	// System.Int32 OnlineMapsCache::maxFileCacheSize
	int32_t ___maxFileCacheSize_12;
	// System.Int32 OnlineMapsCache::maxMemoryCacheSize
	int32_t ___maxMemoryCacheSize_13;
	// System.Single OnlineMapsCache::memoryCacheUnloadRate
	float ___memoryCacheUnloadRate_14;
	// System.Boolean OnlineMapsCache::useFileCache
	bool ___useFileCache_15;
	// System.Boolean OnlineMapsCache::useMemoryCache
	bool ___useMemoryCache_16;
	// OnlineMaps OnlineMapsCache::map
	OnlineMaps_t1893290312 * ___map_17;
	// OnlineMapsCache/MemoryCacheItem[] OnlineMapsCache::memoryCache
	MemoryCacheItemU5BU5D_t1902335004* ___memoryCache_18;
	// System.Int32 OnlineMapsCache::countMemoryItems
	int32_t ___countMemoryItems_19;
	// OnlineMapsCache/FileCacheAtlas OnlineMapsCache::fileCacheAtlas
	FileCacheAtlas_t1511139548 * ___fileCacheAtlas_20;
	// System.Int32 OnlineMapsCache::_memoryCacheSize
	int32_t ____memoryCacheSize_21;
	// System.Collections.IEnumerator OnlineMapsCache::saveFileCacheAtlasCoroutine
	Il2CppObject * ___saveFileCacheAtlasCoroutine_22;

public:
	inline static int32_t get_offset_of_OnLoadedFromCache_4() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___OnLoadedFromCache_4)); }
	inline Action_1_t4118096618 * get_OnLoadedFromCache_4() const { return ___OnLoadedFromCache_4; }
	inline Action_1_t4118096618 ** get_address_of_OnLoadedFromCache_4() { return &___OnLoadedFromCache_4; }
	inline void set_OnLoadedFromCache_4(Action_1_t4118096618 * value)
	{
		___OnLoadedFromCache_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadedFromCache_4, value);
	}

	inline static int32_t get_offset_of_OnLoadedFromFileCache_5() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___OnLoadedFromFileCache_5)); }
	inline Action_1_t4118096618 * get_OnLoadedFromFileCache_5() const { return ___OnLoadedFromFileCache_5; }
	inline Action_1_t4118096618 ** get_address_of_OnLoadedFromFileCache_5() { return &___OnLoadedFromFileCache_5; }
	inline void set_OnLoadedFromFileCache_5(Action_1_t4118096618 * value)
	{
		___OnLoadedFromFileCache_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadedFromFileCache_5, value);
	}

	inline static int32_t get_offset_of_OnLoadedFromMemoryCache_6() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___OnLoadedFromMemoryCache_6)); }
	inline Action_1_t4118096618 * get_OnLoadedFromMemoryCache_6() const { return ___OnLoadedFromMemoryCache_6; }
	inline Action_1_t4118096618 ** get_address_of_OnLoadedFromMemoryCache_6() { return &___OnLoadedFromMemoryCache_6; }
	inline void set_OnLoadedFromMemoryCache_6(Action_1_t4118096618 * value)
	{
		___OnLoadedFromMemoryCache_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadedFromMemoryCache_6, value);
	}

	inline static int32_t get_offset_of_OnStartDownloadTile_7() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___OnStartDownloadTile_7)); }
	inline Action_1_t4118096618 * get_OnStartDownloadTile_7() const { return ___OnStartDownloadTile_7; }
	inline Action_1_t4118096618 ** get_address_of_OnStartDownloadTile_7() { return &___OnStartDownloadTile_7; }
	inline void set_OnStartDownloadTile_7(Action_1_t4118096618 * value)
	{
		___OnStartDownloadTile_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnStartDownloadTile_7, value);
	}

	inline static int32_t get_offset_of_fileCacheLocation_8() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___fileCacheLocation_8)); }
	inline int32_t get_fileCacheLocation_8() const { return ___fileCacheLocation_8; }
	inline int32_t* get_address_of_fileCacheLocation_8() { return &___fileCacheLocation_8; }
	inline void set_fileCacheLocation_8(int32_t value)
	{
		___fileCacheLocation_8 = value;
	}

	inline static int32_t get_offset_of_fileCacheCustomPath_9() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___fileCacheCustomPath_9)); }
	inline String_t* get_fileCacheCustomPath_9() const { return ___fileCacheCustomPath_9; }
	inline String_t** get_address_of_fileCacheCustomPath_9() { return &___fileCacheCustomPath_9; }
	inline void set_fileCacheCustomPath_9(String_t* value)
	{
		___fileCacheCustomPath_9 = value;
		Il2CppCodeGenWriteBarrier(&___fileCacheCustomPath_9, value);
	}

	inline static int32_t get_offset_of_fileCacheTilePath_10() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___fileCacheTilePath_10)); }
	inline String_t* get_fileCacheTilePath_10() const { return ___fileCacheTilePath_10; }
	inline String_t** get_address_of_fileCacheTilePath_10() { return &___fileCacheTilePath_10; }
	inline void set_fileCacheTilePath_10(String_t* value)
	{
		___fileCacheTilePath_10 = value;
		Il2CppCodeGenWriteBarrier(&___fileCacheTilePath_10, value);
	}

	inline static int32_t get_offset_of_fileCacheUnloadRate_11() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___fileCacheUnloadRate_11)); }
	inline float get_fileCacheUnloadRate_11() const { return ___fileCacheUnloadRate_11; }
	inline float* get_address_of_fileCacheUnloadRate_11() { return &___fileCacheUnloadRate_11; }
	inline void set_fileCacheUnloadRate_11(float value)
	{
		___fileCacheUnloadRate_11 = value;
	}

	inline static int32_t get_offset_of_maxFileCacheSize_12() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___maxFileCacheSize_12)); }
	inline int32_t get_maxFileCacheSize_12() const { return ___maxFileCacheSize_12; }
	inline int32_t* get_address_of_maxFileCacheSize_12() { return &___maxFileCacheSize_12; }
	inline void set_maxFileCacheSize_12(int32_t value)
	{
		___maxFileCacheSize_12 = value;
	}

	inline static int32_t get_offset_of_maxMemoryCacheSize_13() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___maxMemoryCacheSize_13)); }
	inline int32_t get_maxMemoryCacheSize_13() const { return ___maxMemoryCacheSize_13; }
	inline int32_t* get_address_of_maxMemoryCacheSize_13() { return &___maxMemoryCacheSize_13; }
	inline void set_maxMemoryCacheSize_13(int32_t value)
	{
		___maxMemoryCacheSize_13 = value;
	}

	inline static int32_t get_offset_of_memoryCacheUnloadRate_14() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___memoryCacheUnloadRate_14)); }
	inline float get_memoryCacheUnloadRate_14() const { return ___memoryCacheUnloadRate_14; }
	inline float* get_address_of_memoryCacheUnloadRate_14() { return &___memoryCacheUnloadRate_14; }
	inline void set_memoryCacheUnloadRate_14(float value)
	{
		___memoryCacheUnloadRate_14 = value;
	}

	inline static int32_t get_offset_of_useFileCache_15() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___useFileCache_15)); }
	inline bool get_useFileCache_15() const { return ___useFileCache_15; }
	inline bool* get_address_of_useFileCache_15() { return &___useFileCache_15; }
	inline void set_useFileCache_15(bool value)
	{
		___useFileCache_15 = value;
	}

	inline static int32_t get_offset_of_useMemoryCache_16() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___useMemoryCache_16)); }
	inline bool get_useMemoryCache_16() const { return ___useMemoryCache_16; }
	inline bool* get_address_of_useMemoryCache_16() { return &___useMemoryCache_16; }
	inline void set_useMemoryCache_16(bool value)
	{
		___useMemoryCache_16 = value;
	}

	inline static int32_t get_offset_of_map_17() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___map_17)); }
	inline OnlineMaps_t1893290312 * get_map_17() const { return ___map_17; }
	inline OnlineMaps_t1893290312 ** get_address_of_map_17() { return &___map_17; }
	inline void set_map_17(OnlineMaps_t1893290312 * value)
	{
		___map_17 = value;
		Il2CppCodeGenWriteBarrier(&___map_17, value);
	}

	inline static int32_t get_offset_of_memoryCache_18() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___memoryCache_18)); }
	inline MemoryCacheItemU5BU5D_t1902335004* get_memoryCache_18() const { return ___memoryCache_18; }
	inline MemoryCacheItemU5BU5D_t1902335004** get_address_of_memoryCache_18() { return &___memoryCache_18; }
	inline void set_memoryCache_18(MemoryCacheItemU5BU5D_t1902335004* value)
	{
		___memoryCache_18 = value;
		Il2CppCodeGenWriteBarrier(&___memoryCache_18, value);
	}

	inline static int32_t get_offset_of_countMemoryItems_19() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___countMemoryItems_19)); }
	inline int32_t get_countMemoryItems_19() const { return ___countMemoryItems_19; }
	inline int32_t* get_address_of_countMemoryItems_19() { return &___countMemoryItems_19; }
	inline void set_countMemoryItems_19(int32_t value)
	{
		___countMemoryItems_19 = value;
	}

	inline static int32_t get_offset_of_fileCacheAtlas_20() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___fileCacheAtlas_20)); }
	inline FileCacheAtlas_t1511139548 * get_fileCacheAtlas_20() const { return ___fileCacheAtlas_20; }
	inline FileCacheAtlas_t1511139548 ** get_address_of_fileCacheAtlas_20() { return &___fileCacheAtlas_20; }
	inline void set_fileCacheAtlas_20(FileCacheAtlas_t1511139548 * value)
	{
		___fileCacheAtlas_20 = value;
		Il2CppCodeGenWriteBarrier(&___fileCacheAtlas_20, value);
	}

	inline static int32_t get_offset_of__memoryCacheSize_21() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ____memoryCacheSize_21)); }
	inline int32_t get__memoryCacheSize_21() const { return ____memoryCacheSize_21; }
	inline int32_t* get_address_of__memoryCacheSize_21() { return &____memoryCacheSize_21; }
	inline void set__memoryCacheSize_21(int32_t value)
	{
		____memoryCacheSize_21 = value;
	}

	inline static int32_t get_offset_of_saveFileCacheAtlasCoroutine_22() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470, ___saveFileCacheAtlasCoroutine_22)); }
	inline Il2CppObject * get_saveFileCacheAtlasCoroutine_22() const { return ___saveFileCacheAtlasCoroutine_22; }
	inline Il2CppObject ** get_address_of_saveFileCacheAtlasCoroutine_22() { return &___saveFileCacheAtlasCoroutine_22; }
	inline void set_saveFileCacheAtlasCoroutine_22(Il2CppObject * value)
	{
		___saveFileCacheAtlasCoroutine_22 = value;
		Il2CppCodeGenWriteBarrier(&___saveFileCacheAtlasCoroutine_22, value);
	}
};

struct OnlineMapsCache_t706514470_StaticFields
{
public:
	// OnlineMapsCache OnlineMapsCache::_instance
	OnlineMapsCache_t706514470 * ____instance_3;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(OnlineMapsCache_t706514470_StaticFields, ____instance_3)); }
	inline OnlineMapsCache_t706514470 * get__instance_3() const { return ____instance_3; }
	inline OnlineMapsCache_t706514470 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(OnlineMapsCache_t706514470 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier(&____instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
