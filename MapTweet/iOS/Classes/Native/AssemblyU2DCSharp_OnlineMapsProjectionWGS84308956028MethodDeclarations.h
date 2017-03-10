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

// OnlineMapsProjectionWGS84
struct OnlineMapsProjectionWGS84_t308956028;

#include "codegen/il2cpp-codegen.h"

// System.Void OnlineMapsProjectionWGS84::.ctor()
extern "C"  void OnlineMapsProjectionWGS84__ctor_m552730997 (OnlineMapsProjectionWGS84_t308956028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProjectionWGS84::CoordinatesToTile(System.Double,System.Double,System.Int32,System.Double&,System.Double&)
extern "C"  void OnlineMapsProjectionWGS84_CoordinatesToTile_m442732100 (OnlineMapsProjectionWGS84_t308956028 * __this, double ___lng0, double ___lat1, int32_t ___zoom2, double* ___tx3, double* ___ty4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProjectionWGS84::TileToCoordinates(System.Double,System.Double,System.Int32,System.Double&,System.Double&)
extern "C"  void OnlineMapsProjectionWGS84_TileToCoordinates_m2661527190 (OnlineMapsProjectionWGS84_t308956028 * __this, double ___tx0, double ___ty1, int32_t ___zoom2, double* ___lng3, double* ___lat4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
