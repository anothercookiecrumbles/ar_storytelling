#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// System.Xml.XmlElement
struct XmlElement_t2877111883;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsXML
struct  OnlineMapsXML_t3341520387  : public Il2CppObject
{
public:
	// System.Xml.XmlDocument OnlineMapsXML::_document
	XmlDocument_t3649534162 * ____document_0;
	// System.Xml.XmlElement OnlineMapsXML::_element
	XmlElement_t2877111883 * ____element_1;

public:
	inline static int32_t get_offset_of__document_0() { return static_cast<int32_t>(offsetof(OnlineMapsXML_t3341520387, ____document_0)); }
	inline XmlDocument_t3649534162 * get__document_0() const { return ____document_0; }
	inline XmlDocument_t3649534162 ** get_address_of__document_0() { return &____document_0; }
	inline void set__document_0(XmlDocument_t3649534162 * value)
	{
		____document_0 = value;
		Il2CppCodeGenWriteBarrier(&____document_0, value);
	}

	inline static int32_t get_offset_of__element_1() { return static_cast<int32_t>(offsetof(OnlineMapsXML_t3341520387, ____element_1)); }
	inline XmlElement_t2877111883 * get__element_1() const { return ____element_1; }
	inline XmlElement_t2877111883 ** get_address_of__element_1() { return &____element_1; }
	inline void set__element_1(XmlElement_t2877111883 * value)
	{
		____element_1 = value;
		Il2CppCodeGenWriteBarrier(&____element_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
