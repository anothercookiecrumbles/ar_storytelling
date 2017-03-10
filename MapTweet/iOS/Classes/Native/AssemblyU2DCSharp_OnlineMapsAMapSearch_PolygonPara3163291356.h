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
// System.Double[]
struct DoubleU5BU5D_t1889952540;

#include "AssemblyU2DCSharp_OnlineMapsAMapSearch_Params313115834.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsAMapSearch/PolygonParams
struct  PolygonParams_t3163291356  : public Params_t313115834
{
public:
	// System.String OnlineMapsAMapSearch/PolygonParams::keywords
	String_t* ___keywords_1;
	// System.String OnlineMapsAMapSearch/PolygonParams::types
	String_t* ___types_2;
	// System.Nullable`1<System.Int32> OnlineMapsAMapSearch/PolygonParams::offset
	Nullable_1_t334943763  ___offset_3;
	// System.Nullable`1<System.Int32> OnlineMapsAMapSearch/PolygonParams::page
	Nullable_1_t334943763  ___page_4;
	// System.String OnlineMapsAMapSearch/PolygonParams::extensions
	String_t* ___extensions_5;
	// System.String OnlineMapsAMapSearch/PolygonParams::sig
	String_t* ___sig_6;
	// System.Double[] OnlineMapsAMapSearch/PolygonParams::polygon
	DoubleU5BU5D_t1889952540* ___polygon_7;

public:
	inline static int32_t get_offset_of_keywords_1() { return static_cast<int32_t>(offsetof(PolygonParams_t3163291356, ___keywords_1)); }
	inline String_t* get_keywords_1() const { return ___keywords_1; }
	inline String_t** get_address_of_keywords_1() { return &___keywords_1; }
	inline void set_keywords_1(String_t* value)
	{
		___keywords_1 = value;
		Il2CppCodeGenWriteBarrier(&___keywords_1, value);
	}

	inline static int32_t get_offset_of_types_2() { return static_cast<int32_t>(offsetof(PolygonParams_t3163291356, ___types_2)); }
	inline String_t* get_types_2() const { return ___types_2; }
	inline String_t** get_address_of_types_2() { return &___types_2; }
	inline void set_types_2(String_t* value)
	{
		___types_2 = value;
		Il2CppCodeGenWriteBarrier(&___types_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(PolygonParams_t3163291356, ___offset_3)); }
	inline Nullable_1_t334943763  get_offset_3() const { return ___offset_3; }
	inline Nullable_1_t334943763 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Nullable_1_t334943763  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_page_4() { return static_cast<int32_t>(offsetof(PolygonParams_t3163291356, ___page_4)); }
	inline Nullable_1_t334943763  get_page_4() const { return ___page_4; }
	inline Nullable_1_t334943763 * get_address_of_page_4() { return &___page_4; }
	inline void set_page_4(Nullable_1_t334943763  value)
	{
		___page_4 = value;
	}

	inline static int32_t get_offset_of_extensions_5() { return static_cast<int32_t>(offsetof(PolygonParams_t3163291356, ___extensions_5)); }
	inline String_t* get_extensions_5() const { return ___extensions_5; }
	inline String_t** get_address_of_extensions_5() { return &___extensions_5; }
	inline void set_extensions_5(String_t* value)
	{
		___extensions_5 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_5, value);
	}

	inline static int32_t get_offset_of_sig_6() { return static_cast<int32_t>(offsetof(PolygonParams_t3163291356, ___sig_6)); }
	inline String_t* get_sig_6() const { return ___sig_6; }
	inline String_t** get_address_of_sig_6() { return &___sig_6; }
	inline void set_sig_6(String_t* value)
	{
		___sig_6 = value;
		Il2CppCodeGenWriteBarrier(&___sig_6, value);
	}

	inline static int32_t get_offset_of_polygon_7() { return static_cast<int32_t>(offsetof(PolygonParams_t3163291356, ___polygon_7)); }
	inline DoubleU5BU5D_t1889952540* get_polygon_7() const { return ___polygon_7; }
	inline DoubleU5BU5D_t1889952540** get_address_of_polygon_7() { return &___polygon_7; }
	inline void set_polygon_7(DoubleU5BU5D_t1889952540* value)
	{
		___polygon_7 = value;
		Il2CppCodeGenWriteBarrier(&___polygon_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
