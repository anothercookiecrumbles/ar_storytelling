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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsQQSearchResult/Pano
struct  Pano_t2729510056  : public Il2CppObject
{
public:
	// System.String OnlineMapsQQSearchResult/Pano::id
	String_t* ___id_0;
	// System.Int32 OnlineMapsQQSearchResult/Pano::heading
	int32_t ___heading_1;
	// System.Int32 OnlineMapsQQSearchResult/Pano::pitch
	int32_t ___pitch_2;
	// System.Int32 OnlineMapsQQSearchResult/Pano::zoom
	int32_t ___zoom_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Pano_t2729510056, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_heading_1() { return static_cast<int32_t>(offsetof(Pano_t2729510056, ___heading_1)); }
	inline int32_t get_heading_1() const { return ___heading_1; }
	inline int32_t* get_address_of_heading_1() { return &___heading_1; }
	inline void set_heading_1(int32_t value)
	{
		___heading_1 = value;
	}

	inline static int32_t get_offset_of_pitch_2() { return static_cast<int32_t>(offsetof(Pano_t2729510056, ___pitch_2)); }
	inline int32_t get_pitch_2() const { return ___pitch_2; }
	inline int32_t* get_address_of_pitch_2() { return &___pitch_2; }
	inline void set_pitch_2(int32_t value)
	{
		___pitch_2 = value;
	}

	inline static int32_t get_offset_of_zoom_3() { return static_cast<int32_t>(offsetof(Pano_t2729510056, ___zoom_3)); }
	inline int32_t get_zoom_3() const { return ___zoom_3; }
	inline int32_t* get_address_of_zoom_3() { return &___zoom_3; }
	inline void set_zoom_3(int32_t value)
	{
		___zoom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
