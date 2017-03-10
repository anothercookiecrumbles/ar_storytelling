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

// Mono.Xml.DTDContentModel
struct DTDContentModel_t445576364;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1113953282;
// System.String
struct String_t;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t3164170484;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel1113953282.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Xml_Mono_Xml_DTDOccurence99371501.h"
#include "System_Xml_Mono_Xml_DTDContentOrderType3150259539.h"

// System.Void Mono.Xml.DTDContentModel::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDContentModel__ctor_m3157775975 (DTDContentModel_t445576364 * __this, DTDObjectModel_t1113953282 * ___root0, String_t* ___ownerElementName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::get_ChildModels()
extern "C"  DTDContentModelCollection_t3164170484 * DTDContentModel_get_ChildModels_m3548121267 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDContentModel::get_ElementName()
extern "C"  String_t* DTDContentModel_get_ElementName_m548033030 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_ElementName(System.String)
extern "C"  void DTDContentModel_set_ElementName_m2289916771 (DTDContentModel_t445576364 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_Occurence(Mono.Xml.DTDOccurence)
extern "C"  void DTDContentModel_set_Occurence_m2708496106 (DTDContentModel_t445576364 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::get_OrderType()
extern "C"  int32_t DTDContentModel_get_OrderType_m48408306 (DTDContentModel_t445576364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDContentModel::set_OrderType(Mono.Xml.DTDContentOrderType)
extern "C"  void DTDContentModel_set_OrderType_m3392436687 (DTDContentModel_t445576364 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
