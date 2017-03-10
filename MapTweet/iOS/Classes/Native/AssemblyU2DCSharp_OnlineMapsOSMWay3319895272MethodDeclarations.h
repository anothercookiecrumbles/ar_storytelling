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

// OnlineMapsOSMWay
struct OnlineMapsOSMWay_t3319895272;
// OnlineMapsOSMAPIQuery/OSMXMLNode
struct OSMXMLNode_t3849182672;
// OnlineMapsXML
struct OnlineMapsXML_t3341520387;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<OnlineMapsOSMNode>
struct List_1_t2753111535;
// System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode>
struct Dictionary_2_t1003802369;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OnlineMapsOSMAPIQuery_OSMXMLNode3849182672.h"
#include "AssemblyU2DCSharp_OnlineMapsXML3341520387.h"

// System.Void OnlineMapsOSMWay::.ctor(OnlineMapsOSMAPIQuery/OSMXMLNode)
extern "C"  void OnlineMapsOSMWay__ctor_m3752346969 (OnlineMapsOSMWay_t3319895272 * __this, OSMXMLNode_t3849182672 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMWay::.ctor(OnlineMapsXML)
extern "C"  void OnlineMapsOSMWay__ctor_m2360012504 (OnlineMapsOSMWay_t3319895272 * __this, OnlineMapsXML_t3341520387 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> OnlineMapsOSMWay::get_nodeRefs()
extern "C"  List_1_t1398341365 * OnlineMapsOSMWay_get_nodeRefs_m1872286841 (OnlineMapsOSMWay_t3319895272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMWay::Dispose()
extern "C"  void OnlineMapsOSMWay_Dispose_m1752819722 (OnlineMapsOSMWay_t3319895272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<OnlineMapsOSMNode> OnlineMapsOSMWay::GetNodes(System.Collections.Generic.List`1<OnlineMapsOSMNode>)
extern "C"  List_1_t2753111535 * OnlineMapsOSMWay_GetNodes_m2024399831 (OnlineMapsOSMWay_t3319895272 * __this, List_1_t2753111535 * ___nodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<OnlineMapsOSMNode> OnlineMapsOSMWay::GetNodes(System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode>)
extern "C"  List_1_t2753111535 * OnlineMapsOSMWay_GetNodes_m3692015256 (OnlineMapsOSMWay_t3319895272 * __this, Dictionary_2_t1003802369 * ___nodes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsOSMWay::GetNodes(System.Collections.Generic.Dictionary`2<System.String,OnlineMapsOSMNode>,System.Collections.Generic.List`1<OnlineMapsOSMNode>)
extern "C"  void OnlineMapsOSMWay_GetNodes_m2959405975 (OnlineMapsOSMWay_t3319895272 * __this, Dictionary_2_t1003802369 * ___nodes0, List_1_t2753111535 * ___usedNodes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
