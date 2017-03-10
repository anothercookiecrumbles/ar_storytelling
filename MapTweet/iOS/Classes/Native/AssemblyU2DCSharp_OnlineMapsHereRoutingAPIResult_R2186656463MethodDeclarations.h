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

// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate
struct GeoCoordinate_t2186656463;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate[]
struct GeoCoordinateU5BU5D_t3518221590;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate::.ctor(System.Double,System.Double,System.Nullable`1<System.Double>)
extern "C"  void GeoCoordinate__ctor_m1442353541 (GeoCoordinate_t2186656463 * __this, double ___longitude0, double ___latitude1, Nullable_1_t2341081996  ___altitude2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate::.ctor(OnlineMapsXML)
extern "C"  void GeoCoordinate__ctor_m2562272551 (GeoCoordinate_t2186656463 * __this, OnlineMapsXML_t3341520387 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate[] OnlineMapsHereRoutingAPIResult/Route/GeoCoordinate::ParseArray(System.String)
extern "C"  GeoCoordinateU5BU5D_t3518221590* GeoCoordinate_ParseArray_m1438444776 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
