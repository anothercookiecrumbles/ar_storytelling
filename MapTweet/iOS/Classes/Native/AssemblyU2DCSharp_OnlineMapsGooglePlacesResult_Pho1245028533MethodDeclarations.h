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

// OnlineMapsGooglePlacesResult/Photo
struct Photo_t1245028533;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// OnlineMapsGooglePlacePhoto
struct OnlineMapsGooglePlacePhoto_t3871514534;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

// System.Void OnlineMapsGooglePlacesResult/Photo::.ctor()
extern "C"  void Photo__ctor_m3809792492 (Photo_t1245028533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlacesResult/Photo::.ctor(OnlineMapsXML)
extern "C"  void Photo__ctor_m1212461493 (Photo_t1245028533 * __this, OnlineMapsXML_t3341520387 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlacePhoto OnlineMapsGooglePlacesResult/Photo::Download(System.String,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>)
extern "C"  OnlineMapsGooglePlacePhoto_t3871514534 * Photo_Download_m2598456699 (Photo_t1245028533 * __this, String_t* ___key0, Nullable_1_t334943763  ___maxWidth1, Nullable_1_t334943763  ___maxHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
