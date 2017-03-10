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
// OnlineMapsJPEGDecoder/Context
struct Context_t2423182662;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsJPEGDecoder
struct  OnlineMapsJPEGDecoder_t872605750  : public Il2CppObject
{
public:
	// OnlineMapsJPEGDecoder/Context OnlineMapsJPEGDecoder::context
	Context_t2423182662 * ___context_19;
	// System.Int32[] OnlineMapsJPEGDecoder::block
	Int32U5BU5D_t3030399641* ___block_20;

public:
	inline static int32_t get_offset_of_context_19() { return static_cast<int32_t>(offsetof(OnlineMapsJPEGDecoder_t872605750, ___context_19)); }
	inline Context_t2423182662 * get_context_19() const { return ___context_19; }
	inline Context_t2423182662 ** get_address_of_context_19() { return &___context_19; }
	inline void set_context_19(Context_t2423182662 * value)
	{
		___context_19 = value;
		Il2CppCodeGenWriteBarrier(&___context_19, value);
	}

	inline static int32_t get_offset_of_block_20() { return static_cast<int32_t>(offsetof(OnlineMapsJPEGDecoder_t872605750, ___block_20)); }
	inline Int32U5BU5D_t3030399641* get_block_20() const { return ___block_20; }
	inline Int32U5BU5D_t3030399641** get_address_of_block_20() { return &___block_20; }
	inline void set_block_20(Int32U5BU5D_t3030399641* value)
	{
		___block_20 = value;
		Il2CppCodeGenWriteBarrier(&___block_20, value);
	}
};

struct OnlineMapsJPEGDecoder_t872605750_StaticFields
{
public:
	// System.Byte[] OnlineMapsJPEGDecoder::ZZ
	ByteU5BU5D_t3397334013* ___ZZ_18;

public:
	inline static int32_t get_offset_of_ZZ_18() { return static_cast<int32_t>(offsetof(OnlineMapsJPEGDecoder_t872605750_StaticFields, ___ZZ_18)); }
	inline ByteU5BU5D_t3397334013* get_ZZ_18() const { return ___ZZ_18; }
	inline ByteU5BU5D_t3397334013** get_address_of_ZZ_18() { return &___ZZ_18; }
	inline void set_ZZ_18(ByteU5BU5D_t3397334013* value)
	{
		___ZZ_18 = value;
		Il2CppCodeGenWriteBarrier(&___ZZ_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
