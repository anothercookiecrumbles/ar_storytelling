#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<OnlineMapsWWW>
struct Action_1_t3049210975;
// System.Object
struct Il2CppObject;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_OnlineMapsWWW_RequestType7170551.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsWWW
struct  OnlineMapsWWW_t3247411593  : public Il2CppObject
{
public:
	// System.Action`1<OnlineMapsWWW> OnlineMapsWWW::OnComplete
	Action_1_t3049210975 * ___OnComplete_0;
	// System.Object OnlineMapsWWW::customData
	Il2CppObject * ___customData_1;
	// UnityEngine.WWW OnlineMapsWWW::www
	WWW_t2919945039 * ___www_2;
	// OnlineMapsWWW/RequestType OnlineMapsWWW::type
	int32_t ___type_3;
	// System.Byte[] OnlineMapsWWW::_bytes
	ByteU5BU5D_t3397334013* ____bytes_4;
	// System.String OnlineMapsWWW::_error
	String_t* ____error_5;
	// System.Boolean OnlineMapsWWW::_isDone
	bool ____isDone_6;
	// System.String OnlineMapsWWW::_url
	String_t* ____url_7;
	// System.String OnlineMapsWWW::responseHeadersString
	String_t* ___responseHeadersString_8;
	// System.String OnlineMapsWWW::_id
	String_t* ____id_9;
	// System.Collections.IEnumerator OnlineMapsWWW::waitResponse
	Il2CppObject * ___waitResponse_10;

public:
	inline static int32_t get_offset_of_OnComplete_0() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ___OnComplete_0)); }
	inline Action_1_t3049210975 * get_OnComplete_0() const { return ___OnComplete_0; }
	inline Action_1_t3049210975 ** get_address_of_OnComplete_0() { return &___OnComplete_0; }
	inline void set_OnComplete_0(Action_1_t3049210975 * value)
	{
		___OnComplete_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_0, value);
	}

	inline static int32_t get_offset_of_customData_1() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ___customData_1)); }
	inline Il2CppObject * get_customData_1() const { return ___customData_1; }
	inline Il2CppObject ** get_address_of_customData_1() { return &___customData_1; }
	inline void set_customData_1(Il2CppObject * value)
	{
		___customData_1 = value;
		Il2CppCodeGenWriteBarrier(&___customData_1, value);
	}

	inline static int32_t get_offset_of_www_2() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ___www_2)); }
	inline WWW_t2919945039 * get_www_2() const { return ___www_2; }
	inline WWW_t2919945039 ** get_address_of_www_2() { return &___www_2; }
	inline void set_www_2(WWW_t2919945039 * value)
	{
		___www_2 = value;
		Il2CppCodeGenWriteBarrier(&___www_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of__bytes_4() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ____bytes_4)); }
	inline ByteU5BU5D_t3397334013* get__bytes_4() const { return ____bytes_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__bytes_4() { return &____bytes_4; }
	inline void set__bytes_4(ByteU5BU5D_t3397334013* value)
	{
		____bytes_4 = value;
		Il2CppCodeGenWriteBarrier(&____bytes_4, value);
	}

	inline static int32_t get_offset_of__error_5() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ____error_5)); }
	inline String_t* get__error_5() const { return ____error_5; }
	inline String_t** get_address_of__error_5() { return &____error_5; }
	inline void set__error_5(String_t* value)
	{
		____error_5 = value;
		Il2CppCodeGenWriteBarrier(&____error_5, value);
	}

	inline static int32_t get_offset_of__isDone_6() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ____isDone_6)); }
	inline bool get__isDone_6() const { return ____isDone_6; }
	inline bool* get_address_of__isDone_6() { return &____isDone_6; }
	inline void set__isDone_6(bool value)
	{
		____isDone_6 = value;
	}

	inline static int32_t get_offset_of__url_7() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ____url_7)); }
	inline String_t* get__url_7() const { return ____url_7; }
	inline String_t** get_address_of__url_7() { return &____url_7; }
	inline void set__url_7(String_t* value)
	{
		____url_7 = value;
		Il2CppCodeGenWriteBarrier(&____url_7, value);
	}

	inline static int32_t get_offset_of_responseHeadersString_8() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ___responseHeadersString_8)); }
	inline String_t* get_responseHeadersString_8() const { return ___responseHeadersString_8; }
	inline String_t** get_address_of_responseHeadersString_8() { return &___responseHeadersString_8; }
	inline void set_responseHeadersString_8(String_t* value)
	{
		___responseHeadersString_8 = value;
		Il2CppCodeGenWriteBarrier(&___responseHeadersString_8, value);
	}

	inline static int32_t get_offset_of__id_9() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ____id_9)); }
	inline String_t* get__id_9() const { return ____id_9; }
	inline String_t** get_address_of__id_9() { return &____id_9; }
	inline void set__id_9(String_t* value)
	{
		____id_9 = value;
		Il2CppCodeGenWriteBarrier(&____id_9, value);
	}

	inline static int32_t get_offset_of_waitResponse_10() { return static_cast<int32_t>(offsetof(OnlineMapsWWW_t3247411593, ___waitResponse_10)); }
	inline Il2CppObject * get_waitResponse_10() const { return ___waitResponse_10; }
	inline Il2CppObject ** get_address_of_waitResponse_10() { return &___waitResponse_10; }
	inline void set_waitResponse_10(Il2CppObject * value)
	{
		___waitResponse_10 = value;
		Il2CppCodeGenWriteBarrier(&___waitResponse_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
