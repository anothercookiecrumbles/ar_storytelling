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

// OnlineMapsGooglePlacesAutocomplete
struct OnlineMapsGooglePlacesAutocomplete_t783007221;
// System.String
struct String_t;
// OnlineMapsGooglePlacesAutocompleteResult[]
struct OnlineMapsGooglePlacesAutocompleteResultU5BU5D_t3943192507;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void OnlineMapsGooglePlacesAutocomplete::.ctor()
extern "C"  void OnlineMapsGooglePlacesAutocomplete__ctor_m932015894 (OnlineMapsGooglePlacesAutocomplete_t783007221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsGooglePlacesAutocomplete::.ctor(System.String,System.String,System.String,System.Int32,UnityEngine.Vector2,System.Int32,System.String,System.String)
extern "C"  void OnlineMapsGooglePlacesAutocomplete__ctor_m474860348 (OnlineMapsGooglePlacesAutocomplete_t783007221 * __this, String_t* ___input0, String_t* ___key1, String_t* ___types2, int32_t ___offset3, Vector2_t2243707579  ___lnglat4, int32_t ___radius5, String_t* ___language6, String_t* ___components7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlacesAutocomplete OnlineMapsGooglePlacesAutocomplete::Find(System.String,System.String,System.String,System.Int32,UnityEngine.Vector2,System.Int32,System.String,System.String)
extern "C"  OnlineMapsGooglePlacesAutocomplete_t783007221 * OnlineMapsGooglePlacesAutocomplete_Find_m2994199699 (Il2CppObject * __this /* static, unused */, String_t* ___input0, String_t* ___key1, String_t* ___types2, int32_t ___offset3, Vector2_t2243707579  ___lnglat4, int32_t ___radius5, String_t* ___language6, String_t* ___components7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsGooglePlacesAutocompleteResult[] OnlineMapsGooglePlacesAutocomplete::GetResults(System.String)
extern "C"  OnlineMapsGooglePlacesAutocompleteResultU5BU5D_t3943192507* OnlineMapsGooglePlacesAutocomplete_GetResults_m2650520549 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
