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

// OnlineMapsProjectionSphericalMercator
struct OnlineMapsProjectionSphericalMercator_t2196923925;

#include "codegen/il2cpp-codegen.h"

// System.Void OnlineMapsProjectionSphericalMercator::.ctor()
extern "C"  void OnlineMapsProjectionSphericalMercator__ctor_m487267552 (OnlineMapsProjectionSphericalMercator_t2196923925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProjectionSphericalMercator::CoordinatesToTile(System.Double,System.Double,System.Int32,System.Double&,System.Double&)
extern "C"  void OnlineMapsProjectionSphericalMercator_CoordinatesToTile_m1335040595 (OnlineMapsProjectionSphericalMercator_t2196923925 * __this, double ___lng0, double ___lat1, int32_t ___zoom2, double* ___tx3, double* ___ty4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsProjectionSphericalMercator::TileToCoordinates(System.Double,System.Double,System.Int32,System.Double&,System.Double&)
extern "C"  void OnlineMapsProjectionSphericalMercator_TileToCoordinates_m1188573767 (OnlineMapsProjectionSphericalMercator_t2196923925 * __this, double ___tx0, double ___ty1, int32_t ___zoom2, double* ___lng3, double* ___lat4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
