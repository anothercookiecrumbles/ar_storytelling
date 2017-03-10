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

// OnlineMapsCache/FileCacheAtlas
struct FileCacheAtlas_t1511139548;
// OnlineMapsCache
struct OnlineMapsCache_t706514470;
// OnlineMapsTile
struct OnlineMapsTile_t21329940;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsCache706514470.h"
#include "AssemblyU2DCSharp_OnlineMapsTile21329940.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsCache/FileCacheAtlas::.ctor()
extern "C"  void FileCacheAtlas__ctor_m3576764453 (FileCacheAtlas_t1511139548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsCache/FileCacheAtlas::get_size()
extern "C"  int32_t FileCacheAtlas_get_size_m2515124515 (FileCacheAtlas_t1511139548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache/FileCacheAtlas::Add(OnlineMapsCache,OnlineMapsTile,System.Byte[])
extern "C"  void FileCacheAtlas_Add_m2869437515 (FileCacheAtlas_t1511139548 * __this, OnlineMapsCache_t706514470 * ___cache0, OnlineMapsTile_t21329940 * ___tile1, ByteU5BU5D_t3397334013* ___bytes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache/FileCacheAtlas::AddItem(System.String,System.Int32)
extern "C"  void FileCacheAtlas_AddItem_m1800998910 (FileCacheAtlas_t1511139548 * __this, String_t* ___filename0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsCache/FileCacheAtlas::Contains(System.String)
extern "C"  bool FileCacheAtlas_Contains_m2929216798 (FileCacheAtlas_t1511139548 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache/FileCacheAtlas::DeleteOldItems(OnlineMapsCache)
extern "C"  void FileCacheAtlas_DeleteOldItems_m2619799733 (FileCacheAtlas_t1511139548 * __this, OnlineMapsCache_t706514470 * ___cache0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache/FileCacheAtlas::Load(OnlineMapsCache)
extern "C"  void FileCacheAtlas_Load_m698038355 (FileCacheAtlas_t1511139548 * __this, OnlineMapsCache_t706514470 * ___cache0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsCache/FileCacheAtlas::Save(OnlineMapsCache)
extern "C"  void FileCacheAtlas_Save_m2367677378 (FileCacheAtlas_t1511139548 * __this, OnlineMapsCache_t706514470 * ___cache0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
