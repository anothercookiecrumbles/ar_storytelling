#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<OnlineMapsOSMAPIQuery/OSMXMLNode>
struct List_1_t3218303804;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsOSMAPIQuery/OSMXMLNode
struct  OSMXMLNode_t3849182672  : public Il2CppObject
{
public:
	// System.String OnlineMapsOSMAPIQuery/OSMXMLNode::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<OnlineMapsOSMAPIQuery/OSMXMLNode> OnlineMapsOSMAPIQuery/OSMXMLNode::childs
	List_1_t3218303804 * ___childs_1;
	// System.String[] OnlineMapsOSMAPIQuery/OSMXMLNode::attributeKeys
	StringU5BU5D_t1642385972* ___attributeKeys_2;
	// System.String[] OnlineMapsOSMAPIQuery/OSMXMLNode::attributeValues
	StringU5BU5D_t1642385972* ___attributeValues_3;
	// System.String OnlineMapsOSMAPIQuery/OSMXMLNode::value
	String_t* ___value_4;
	// System.Int32 OnlineMapsOSMAPIQuery/OSMXMLNode::l
	int32_t ___l_5;
	// System.Int32 OnlineMapsOSMAPIQuery/OSMXMLNode::attributeCapacity
	int32_t ___attributeCapacity_6;
	// System.Int32 OnlineMapsOSMAPIQuery/OSMXMLNode::attributeCount
	int32_t ___attributeCount_7;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(OSMXMLNode_t3849182672, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_childs_1() { return static_cast<int32_t>(offsetof(OSMXMLNode_t3849182672, ___childs_1)); }
	inline List_1_t3218303804 * get_childs_1() const { return ___childs_1; }
	inline List_1_t3218303804 ** get_address_of_childs_1() { return &___childs_1; }
	inline void set_childs_1(List_1_t3218303804 * value)
	{
		___childs_1 = value;
		Il2CppCodeGenWriteBarrier(&___childs_1, value);
	}

	inline static int32_t get_offset_of_attributeKeys_2() { return static_cast<int32_t>(offsetof(OSMXMLNode_t3849182672, ___attributeKeys_2)); }
	inline StringU5BU5D_t1642385972* get_attributeKeys_2() const { return ___attributeKeys_2; }
	inline StringU5BU5D_t1642385972** get_address_of_attributeKeys_2() { return &___attributeKeys_2; }
	inline void set_attributeKeys_2(StringU5BU5D_t1642385972* value)
	{
		___attributeKeys_2 = value;
		Il2CppCodeGenWriteBarrier(&___attributeKeys_2, value);
	}

	inline static int32_t get_offset_of_attributeValues_3() { return static_cast<int32_t>(offsetof(OSMXMLNode_t3849182672, ___attributeValues_3)); }
	inline StringU5BU5D_t1642385972* get_attributeValues_3() const { return ___attributeValues_3; }
	inline StringU5BU5D_t1642385972** get_address_of_attributeValues_3() { return &___attributeValues_3; }
	inline void set_attributeValues_3(StringU5BU5D_t1642385972* value)
	{
		___attributeValues_3 = value;
		Il2CppCodeGenWriteBarrier(&___attributeValues_3, value);
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(OSMXMLNode_t3849182672, ___value_4)); }
	inline String_t* get_value_4() const { return ___value_4; }
	inline String_t** get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(String_t* value)
	{
		___value_4 = value;
		Il2CppCodeGenWriteBarrier(&___value_4, value);
	}

	inline static int32_t get_offset_of_l_5() { return static_cast<int32_t>(offsetof(OSMXMLNode_t3849182672, ___l_5)); }
	inline int32_t get_l_5() const { return ___l_5; }
	inline int32_t* get_address_of_l_5() { return &___l_5; }
	inline void set_l_5(int32_t value)
	{
		___l_5 = value;
	}

	inline static int32_t get_offset_of_attributeCapacity_6() { return static_cast<int32_t>(offsetof(OSMXMLNode_t3849182672, ___attributeCapacity_6)); }
	inline int32_t get_attributeCapacity_6() const { return ___attributeCapacity_6; }
	inline int32_t* get_address_of_attributeCapacity_6() { return &___attributeCapacity_6; }
	inline void set_attributeCapacity_6(int32_t value)
	{
		___attributeCapacity_6 = value;
	}

	inline static int32_t get_offset_of_attributeCount_7() { return static_cast<int32_t>(offsetof(OSMXMLNode_t3849182672, ___attributeCount_7)); }
	inline int32_t get_attributeCount_7() const { return ___attributeCount_7; }
	inline int32_t* get_address_of_attributeCount_7() { return &___attributeCount_7; }
	inline void set_attributeCount_7(int32_t value)
	{
		___attributeCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
