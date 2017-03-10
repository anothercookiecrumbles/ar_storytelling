#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNodeList
struct XmlNodeList_t497326455;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsXMLList
struct  OnlineMapsXMLList_t1635558505  : public Il2CppObject
{
public:
	// System.Xml.XmlNodeList OnlineMapsXMLList::_list
	XmlNodeList_t497326455 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(OnlineMapsXMLList_t1635558505, ____list_0)); }
	inline XmlNodeList_t497326455 * get__list_0() const { return ____list_0; }
	inline XmlNodeList_t497326455 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(XmlNodeList_t497326455 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
