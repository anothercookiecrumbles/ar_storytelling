#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// OnlineMapsJPEGDecoder/Component[]
struct ComponentU5BU5D_t4109796755;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t717853552;
// OnlineMapsJPEGDecoder/Code[][]
struct CodeU5BU5DU5BU5D_t3490726218;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsJPEGDecoder_JPEGResult4270095944.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsJPEGDecoder/Context
struct  Context_t2423182662  : public Il2CppObject
{
public:
	// System.Byte[] OnlineMapsJPEGDecoder/Context::posb
	ByteU5BU5D_t3397334013* ___posb_0;
	// OnlineMapsJPEGDecoder/JPEGResult OnlineMapsJPEGDecoder/Context::error
	int32_t ___error_1;
	// System.Int32 OnlineMapsJPEGDecoder/Context::pos
	int32_t ___pos_2;
	// System.Int32 OnlineMapsJPEGDecoder/Context::size
	int32_t ___size_3;
	// System.Int32 OnlineMapsJPEGDecoder/Context::length
	int32_t ___length_4;
	// System.Int32 OnlineMapsJPEGDecoder/Context::width
	int32_t ___width_5;
	// System.Int32 OnlineMapsJPEGDecoder/Context::height
	int32_t ___height_6;
	// System.Int32 OnlineMapsJPEGDecoder/Context::mbwidth
	int32_t ___mbwidth_7;
	// System.Int32 OnlineMapsJPEGDecoder/Context::mbheight
	int32_t ___mbheight_8;
	// System.Int32 OnlineMapsJPEGDecoder/Context::mbsizex
	int32_t ___mbsizex_9;
	// System.Int32 OnlineMapsJPEGDecoder/Context::mbsizey
	int32_t ___mbsizey_10;
	// System.Int32 OnlineMapsJPEGDecoder/Context::ncomp
	int32_t ___ncomp_11;
	// OnlineMapsJPEGDecoder/Component[] OnlineMapsJPEGDecoder/Context::comp
	ComponentU5BU5D_t4109796755* ___comp_12;
	// System.Byte[][] OnlineMapsJPEGDecoder/Context::qtab
	ByteU5BU5DU5BU5D_t717853552* ___qtab_13;
	// OnlineMapsJPEGDecoder/Code[][] OnlineMapsJPEGDecoder/Context::vlctab
	CodeU5BU5DU5BU5D_t3490726218* ___vlctab_14;
	// System.Int32 OnlineMapsJPEGDecoder/Context::buf
	int32_t ___buf_15;
	// System.Int32 OnlineMapsJPEGDecoder/Context::bufbits
	int32_t ___bufbits_16;
	// System.Int32 OnlineMapsJPEGDecoder/Context::rstinterval
	int32_t ___rstinterval_17;
	// System.Byte[] OnlineMapsJPEGDecoder/Context::rgb
	ByteU5BU5D_t3397334013* ___rgb_18;

public:
	inline static int32_t get_offset_of_posb_0() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___posb_0)); }
	inline ByteU5BU5D_t3397334013* get_posb_0() const { return ___posb_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_posb_0() { return &___posb_0; }
	inline void set_posb_0(ByteU5BU5D_t3397334013* value)
	{
		___posb_0 = value;
		Il2CppCodeGenWriteBarrier(&___posb_0, value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_width_5() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___width_5)); }
	inline int32_t get_width_5() const { return ___width_5; }
	inline int32_t* get_address_of_width_5() { return &___width_5; }
	inline void set_width_5(int32_t value)
	{
		___width_5 = value;
	}

	inline static int32_t get_offset_of_height_6() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___height_6)); }
	inline int32_t get_height_6() const { return ___height_6; }
	inline int32_t* get_address_of_height_6() { return &___height_6; }
	inline void set_height_6(int32_t value)
	{
		___height_6 = value;
	}

	inline static int32_t get_offset_of_mbwidth_7() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___mbwidth_7)); }
	inline int32_t get_mbwidth_7() const { return ___mbwidth_7; }
	inline int32_t* get_address_of_mbwidth_7() { return &___mbwidth_7; }
	inline void set_mbwidth_7(int32_t value)
	{
		___mbwidth_7 = value;
	}

	inline static int32_t get_offset_of_mbheight_8() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___mbheight_8)); }
	inline int32_t get_mbheight_8() const { return ___mbheight_8; }
	inline int32_t* get_address_of_mbheight_8() { return &___mbheight_8; }
	inline void set_mbheight_8(int32_t value)
	{
		___mbheight_8 = value;
	}

	inline static int32_t get_offset_of_mbsizex_9() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___mbsizex_9)); }
	inline int32_t get_mbsizex_9() const { return ___mbsizex_9; }
	inline int32_t* get_address_of_mbsizex_9() { return &___mbsizex_9; }
	inline void set_mbsizex_9(int32_t value)
	{
		___mbsizex_9 = value;
	}

	inline static int32_t get_offset_of_mbsizey_10() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___mbsizey_10)); }
	inline int32_t get_mbsizey_10() const { return ___mbsizey_10; }
	inline int32_t* get_address_of_mbsizey_10() { return &___mbsizey_10; }
	inline void set_mbsizey_10(int32_t value)
	{
		___mbsizey_10 = value;
	}

	inline static int32_t get_offset_of_ncomp_11() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___ncomp_11)); }
	inline int32_t get_ncomp_11() const { return ___ncomp_11; }
	inline int32_t* get_address_of_ncomp_11() { return &___ncomp_11; }
	inline void set_ncomp_11(int32_t value)
	{
		___ncomp_11 = value;
	}

	inline static int32_t get_offset_of_comp_12() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___comp_12)); }
	inline ComponentU5BU5D_t4109796755* get_comp_12() const { return ___comp_12; }
	inline ComponentU5BU5D_t4109796755** get_address_of_comp_12() { return &___comp_12; }
	inline void set_comp_12(ComponentU5BU5D_t4109796755* value)
	{
		___comp_12 = value;
		Il2CppCodeGenWriteBarrier(&___comp_12, value);
	}

	inline static int32_t get_offset_of_qtab_13() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___qtab_13)); }
	inline ByteU5BU5DU5BU5D_t717853552* get_qtab_13() const { return ___qtab_13; }
	inline ByteU5BU5DU5BU5D_t717853552** get_address_of_qtab_13() { return &___qtab_13; }
	inline void set_qtab_13(ByteU5BU5DU5BU5D_t717853552* value)
	{
		___qtab_13 = value;
		Il2CppCodeGenWriteBarrier(&___qtab_13, value);
	}

	inline static int32_t get_offset_of_vlctab_14() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___vlctab_14)); }
	inline CodeU5BU5DU5BU5D_t3490726218* get_vlctab_14() const { return ___vlctab_14; }
	inline CodeU5BU5DU5BU5D_t3490726218** get_address_of_vlctab_14() { return &___vlctab_14; }
	inline void set_vlctab_14(CodeU5BU5DU5BU5D_t3490726218* value)
	{
		___vlctab_14 = value;
		Il2CppCodeGenWriteBarrier(&___vlctab_14, value);
	}

	inline static int32_t get_offset_of_buf_15() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___buf_15)); }
	inline int32_t get_buf_15() const { return ___buf_15; }
	inline int32_t* get_address_of_buf_15() { return &___buf_15; }
	inline void set_buf_15(int32_t value)
	{
		___buf_15 = value;
	}

	inline static int32_t get_offset_of_bufbits_16() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___bufbits_16)); }
	inline int32_t get_bufbits_16() const { return ___bufbits_16; }
	inline int32_t* get_address_of_bufbits_16() { return &___bufbits_16; }
	inline void set_bufbits_16(int32_t value)
	{
		___bufbits_16 = value;
	}

	inline static int32_t get_offset_of_rstinterval_17() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___rstinterval_17)); }
	inline int32_t get_rstinterval_17() const { return ___rstinterval_17; }
	inline int32_t* get_address_of_rstinterval_17() { return &___rstinterval_17; }
	inline void set_rstinterval_17(int32_t value)
	{
		___rstinterval_17 = value;
	}

	inline static int32_t get_offset_of_rgb_18() { return static_cast<int32_t>(offsetof(Context_t2423182662, ___rgb_18)); }
	inline ByteU5BU5D_t3397334013* get_rgb_18() const { return ___rgb_18; }
	inline ByteU5BU5D_t3397334013** get_address_of_rgb_18() { return &___rgb_18; }
	inline void set_rgb_18(ByteU5BU5D_t3397334013* value)
	{
		___rgb_18 = value;
		Il2CppCodeGenWriteBarrier(&___rgb_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
