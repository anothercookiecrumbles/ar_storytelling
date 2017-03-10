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

// OnlineMapsOSMAPIQuery/OSMXMLNode
struct OSMXMLNode_t3849182672;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void OnlineMapsOSMAPIQuery/OSMXMLNode::.ctor(System.String,System.Int32&)
extern "C"  void OSMXMLNode__ctor_m734216806 (OSMXMLNode_t3849182672 * __this, String_t* ___s0, int32_t* ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMAPIQuery/OSMXMLNode::ParseValue(System.String,System.Int32&)
extern "C"  void OSMXMLNode_ParseValue_m96311670 (OSMXMLNode_t3849182672 * __this, String_t* ___s0, int32_t* ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMAPIQuery/OSMXMLNode::ParseChild(System.String,System.Int32&)
extern "C"  void OSMXMLNode_ParseChild_m2786387985 (OSMXMLNode_t3849182672 * __this, String_t* ___s0, int32_t* ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsOSMAPIQuery/OSMXMLNode::GetAttribute(System.String)
extern "C"  String_t* OSMXMLNode_GetAttribute_m4043841000 (OSMXMLNode_t3849182672 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMAPIQuery/OSMXMLNode::GetNameIndices(System.String,System.Int32,System.Int32&,System.Int32&,System.Char&)
extern "C"  void OSMXMLNode_GetNameIndices_m1234026951 (OSMXMLNode_t3849182672 * __this, String_t* ___s0, int32_t ___i1, int32_t* ___startIndex2, int32_t* ___endIndex3, Il2CppChar* ___lastChar4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMAPIQuery/OSMXMLNode::ParseAttributes(System.String,System.Int32&,System.Char&)
extern "C"  void OSMXMLNode_ParseAttributes_m1698830213 (OSMXMLNode_t3849182672 * __this, String_t* ___s0, int32_t* ___i1, Il2CppChar* ___lastChar2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsOSMAPIQuery/OSMXMLNode::ParseAttribute(System.String,System.Int32&,System.Char&)
extern "C"  bool OSMXMLNode_ParseAttribute_m599855056 (OSMXMLNode_t3849182672 * __this, String_t* ___s0, int32_t* ___i1, Il2CppChar* ___lastChar2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMAPIQuery/OSMXMLNode::GetAttributeValue(System.String,System.Int32,System.Int32&,System.Int32&)
extern "C"  void OSMXMLNode_GetAttributeValue_m3484907817 (OSMXMLNode_t3849182672 * __this, String_t* ___s0, int32_t ___i1, int32_t* ___svi2, int32_t* ___evi3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
