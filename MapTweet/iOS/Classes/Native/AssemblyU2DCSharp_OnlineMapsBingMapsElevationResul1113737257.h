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
// OnlineMapsBingMapsElevationResult/ResourceSet[]
struct ResourceSetU5BU5D_t2639912927;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsBingMapsElevationResult
struct  OnlineMapsBingMapsElevationResult_t1113737257  : public Il2CppObject
{
public:
	// System.String OnlineMapsBingMapsElevationResult::authenticationResultCode
	String_t* ___authenticationResultCode_0;
	// System.String OnlineMapsBingMapsElevationResult::brandLogoUri
	String_t* ___brandLogoUri_1;
	// System.String OnlineMapsBingMapsElevationResult::copyright
	String_t* ___copyright_2;
	// OnlineMapsBingMapsElevationResult/ResourceSet[] OnlineMapsBingMapsElevationResult::resourceSets
	ResourceSetU5BU5D_t2639912927* ___resourceSets_3;
	// System.Int32 OnlineMapsBingMapsElevationResult::statusCode
	int32_t ___statusCode_4;
	// System.String OnlineMapsBingMapsElevationResult::statusDescription
	String_t* ___statusDescription_5;
	// System.String OnlineMapsBingMapsElevationResult::traceId
	String_t* ___traceId_6;

public:
	inline static int32_t get_offset_of_authenticationResultCode_0() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsElevationResult_t1113737257, ___authenticationResultCode_0)); }
	inline String_t* get_authenticationResultCode_0() const { return ___authenticationResultCode_0; }
	inline String_t** get_address_of_authenticationResultCode_0() { return &___authenticationResultCode_0; }
	inline void set_authenticationResultCode_0(String_t* value)
	{
		___authenticationResultCode_0 = value;
		Il2CppCodeGenWriteBarrier(&___authenticationResultCode_0, value);
	}

	inline static int32_t get_offset_of_brandLogoUri_1() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsElevationResult_t1113737257, ___brandLogoUri_1)); }
	inline String_t* get_brandLogoUri_1() const { return ___brandLogoUri_1; }
	inline String_t** get_address_of_brandLogoUri_1() { return &___brandLogoUri_1; }
	inline void set_brandLogoUri_1(String_t* value)
	{
		___brandLogoUri_1 = value;
		Il2CppCodeGenWriteBarrier(&___brandLogoUri_1, value);
	}

	inline static int32_t get_offset_of_copyright_2() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsElevationResult_t1113737257, ___copyright_2)); }
	inline String_t* get_copyright_2() const { return ___copyright_2; }
	inline String_t** get_address_of_copyright_2() { return &___copyright_2; }
	inline void set_copyright_2(String_t* value)
	{
		___copyright_2 = value;
		Il2CppCodeGenWriteBarrier(&___copyright_2, value);
	}

	inline static int32_t get_offset_of_resourceSets_3() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsElevationResult_t1113737257, ___resourceSets_3)); }
	inline ResourceSetU5BU5D_t2639912927* get_resourceSets_3() const { return ___resourceSets_3; }
	inline ResourceSetU5BU5D_t2639912927** get_address_of_resourceSets_3() { return &___resourceSets_3; }
	inline void set_resourceSets_3(ResourceSetU5BU5D_t2639912927* value)
	{
		___resourceSets_3 = value;
		Il2CppCodeGenWriteBarrier(&___resourceSets_3, value);
	}

	inline static int32_t get_offset_of_statusCode_4() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsElevationResult_t1113737257, ___statusCode_4)); }
	inline int32_t get_statusCode_4() const { return ___statusCode_4; }
	inline int32_t* get_address_of_statusCode_4() { return &___statusCode_4; }
	inline void set_statusCode_4(int32_t value)
	{
		___statusCode_4 = value;
	}

	inline static int32_t get_offset_of_statusDescription_5() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsElevationResult_t1113737257, ___statusDescription_5)); }
	inline String_t* get_statusDescription_5() const { return ___statusDescription_5; }
	inline String_t** get_address_of_statusDescription_5() { return &___statusDescription_5; }
	inline void set_statusDescription_5(String_t* value)
	{
		___statusDescription_5 = value;
		Il2CppCodeGenWriteBarrier(&___statusDescription_5, value);
	}

	inline static int32_t get_offset_of_traceId_6() { return static_cast<int32_t>(offsetof(OnlineMapsBingMapsElevationResult_t1113737257, ___traceId_6)); }
	inline String_t* get_traceId_6() const { return ___traceId_6; }
	inline String_t** get_address_of_traceId_6() { return &___traceId_6; }
	inline void set_traceId_6(String_t* value)
	{
		___traceId_6 = value;
		Il2CppCodeGenWriteBarrier(&___traceId_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
