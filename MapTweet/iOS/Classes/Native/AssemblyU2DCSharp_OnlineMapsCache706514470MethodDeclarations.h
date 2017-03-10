#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// OnlineMapsCache
struct OnlineMapsCache_t706514470;
// OnlineMapsTile
struct OnlineMapsTile_t21329940;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsTile21329940.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsCache::.ctor()
extern "C"  void OnlineMapsCache__ctor_m3676617295 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsCache OnlineMapsCache::get_instance()
extern "C"  OnlineMapsCache_t706514470 * OnlineMapsCache_get_instance_m4077746962 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsCache::get_fileCacheSize()
extern "C"  int32_t OnlineMapsCache_get_fileCacheSize_m2974055351 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsCache::get_memoryCacheSize()
extern "C"  int32_t OnlineMapsCache_get_memoryCacheSize_m359787718 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::AddFileCacheItem(OnlineMapsTile,System.Byte[])
extern "C"  void OnlineMapsCache_AddFileCacheItem_m3996158390 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::AddMemoryCacheItem(OnlineMapsTile,System.Byte[])
extern "C"  void OnlineMapsCache_AddMemoryCacheItem_m2892995269 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::AddMemoryCacheItem(System.Byte[],System.Int32,System.String)
extern "C"  void OnlineMapsCache_AddMemoryCacheItem_m488125158 (OnlineMapsCache_t706514470 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___tileHash1, String_t* ___tileKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::AddMemoryCacheTrafficItem(OnlineMapsTile,System.Byte[])
extern "C"  void OnlineMapsCache_AddMemoryCacheTrafficItem_m4216499424 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::ClearAllCaches()
extern "C"  void OnlineMapsCache_ClearAllCaches_m3372106662 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::ClearFileCache()
extern "C"  void OnlineMapsCache_ClearFileCache_m3574826178 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::ClearMemoryCache()
extern "C"  void OnlineMapsCache_ClearMemoryCache_m3807615867 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder OnlineMapsCache::GetFileCacheFolder()
extern "C"  StringBuilder_t1221177846 * OnlineMapsCache_GetFileCacheFolder_m647172622 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsCache::GetFileCacheSizeFast()
extern "C"  int32_t OnlineMapsCache_GetFileCacheSizeFast_m2976156020 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsCache::GetTileKey(OnlineMapsTile)
extern "C"  String_t* OnlineMapsCache_GetTileKey_m4258225735 (Il2CppObject * __this /* static, unused */, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsCache::GetTrafficKey(OnlineMapsTile)
extern "C"  String_t* OnlineMapsCache_GetTrafficKey_m1043042172 (Il2CppObject * __this /* static, unused */, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsCache::GetFullTilePath(System.String)
extern "C"  String_t* OnlineMapsCache_GetFullTilePath_m3609083176 (OnlineMapsCache_t706514470 * __this, String_t* ___shortFilename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder OnlineMapsCache::GetShortTilePath(OnlineMapsTile)
extern "C"  StringBuilder_t1221177846 * OnlineMapsCache_GetShortTilePath_m600947249 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::LoadFileCacheAtlas()
extern "C"  void OnlineMapsCache_LoadFileCacheAtlas_m2843277426 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::LoadTile(OnlineMapsTile,System.Byte[])
extern "C"  void OnlineMapsCache_LoadTile_m1312705600 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::OnDisable()
extern "C"  void OnlineMapsCache_OnDisable_m2029721050 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::OnEnable()
extern "C"  void OnlineMapsCache_OnEnable_m2239444491 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::OnPreloadTiles()
extern "C"  void OnlineMapsCache_OnPreloadTiles_m3730257318 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::OnStartDownloadTileM(OnlineMapsTile)
extern "C"  void OnlineMapsCache_OnStartDownloadTileM_m3103049107 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::OnTileDownloaded(OnlineMapsTile)
extern "C"  void OnlineMapsCache_OnTileDownloaded_m702426363 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::OnTrafficDownloaded(OnlineMapsTile)
extern "C"  void OnlineMapsCache_OnTrafficDownloaded_m1948875938 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator OnlineMapsCache::SaveFileCacheAtlas()
extern "C"  Il2CppObject * OnlineMapsCache_SaveFileCacheAtlas_m2292163657 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::Start()
extern "C"  void OnlineMapsCache_Start_m119319083 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsCache::TryLoadFromCache(OnlineMapsTile)
extern "C"  bool OnlineMapsCache_TryLoadFromCache_m3310446546 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsCache::TryLoadFromFileCache(OnlineMapsTile)
extern "C"  bool OnlineMapsCache_TryLoadFromFileCache_m3344600356 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsCache::TryLoadFromMemoryCache(OnlineMapsTile)
extern "C"  bool OnlineMapsCache_TryLoadFromMemoryCache_m3703239461 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsCache::TryLoadTraffic(OnlineMapsTile)
extern "C"  bool OnlineMapsCache_TryLoadTraffic_m3080660267 (OnlineMapsCache_t706514470 * __this, OnlineMapsTile_t21329940 * ___tile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache::UnloadOldMemoryCacheItems()
extern "C"  void OnlineMapsCache_UnloadOldMemoryCacheItems_m4092762780 (OnlineMapsCache_t706514470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
