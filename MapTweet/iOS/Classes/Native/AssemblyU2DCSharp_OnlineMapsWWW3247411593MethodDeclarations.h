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

// OnlineMapsWWW
struct OnlineMapsWWW_t3247411593;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Text.Encoding
struct Encoding_t663144255;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_OnlineMapsWWW_RequestType7170551.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void OnlineMapsWWW::.ctor(System.String)
extern "C"  void OnlineMapsWWW__ctor_m629151148 (OnlineMapsWWW_t3247411593 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsWWW::.ctor(System.String,OnlineMapsWWW/RequestType,System.String)
extern "C"  void OnlineMapsWWW__ctor_m962692689 (OnlineMapsWWW_t3247411593 * __this, String_t* ___url0, int32_t ___type1, String_t* ___reqID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsWWW::.ctor(UnityEngine.WWW)
extern "C"  void OnlineMapsWWW__ctor_m1429990942 (OnlineMapsWWW_t3247411593 * __this, WWW_t2919945039 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] OnlineMapsWWW::get_bytes()
extern "C"  ByteU5BU5D_t3397334013* OnlineMapsWWW_get_bytes_m3105084846 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 OnlineMapsWWW::get_bytesDownloaded()
extern "C"  int32_t OnlineMapsWWW_get_bytesDownloaded_m1223749591 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsWWW::get_error()
extern "C"  String_t* OnlineMapsWWW_get_error_m2912188906 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsWWW::get_id()
extern "C"  String_t* OnlineMapsWWW_get_id_m2717431129 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnlineMapsWWW::get_isDone()
extern "C"  bool OnlineMapsWWW_get_isDone_m4005861903 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> OnlineMapsWWW::get_responseHeaders()
extern "C"  Dictionary_2_t3943999495 * OnlineMapsWWW_get_responseHeaders_m3981188900 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsWWW::get_text()
extern "C"  String_t* OnlineMapsWWW_get_text_m3663700949 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsWWW::get_url()
extern "C"  String_t* OnlineMapsWWW_get_url_m671393371 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsWWW::Dispose()
extern "C"  void OnlineMapsWWW_Dispose_m967186843 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OnlineMapsWWW::EscapeURL(System.String)
extern "C"  String_t* OnlineMapsWWW_EscapeURL_m4139461505 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsWWW::Finish()
extern "C"  void OnlineMapsWWW_Finish_m1138959403 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding OnlineMapsWWW::GetTextEncoder()
extern "C"  Encoding_t663144255 * OnlineMapsWWW_GetTextEncoder_m3277970875 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsWWW::LoadImageIntoTexture(UnityEngine.Texture2D)
extern "C"  void OnlineMapsWWW_LoadImageIntoTexture_m4094167544 (OnlineMapsWWW_t3247411593 * __this, Texture2D_t3542995729 * ___tex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> OnlineMapsWWW::ParseHTTPHeaderString(System.String)
extern "C"  Dictionary_2_t3943999495 * OnlineMapsWWW_ParseHTTPHeaderString_m3551220217 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsWWW::SetBytes(System.String,System.Byte[])
extern "C"  void OnlineMapsWWW_SetBytes_m1819518626 (OnlineMapsWWW_t3247411593 * __this, String_t* ___responseHeadersString0, ByteU5BU5D_t3397334013* ____bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnlineMapsWWW::SetError(System.String)
extern "C"  void OnlineMapsWWW_SetError_m4148175916 (OnlineMapsWWW_t3247411593 * __this, String_t* ___errorStr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator OnlineMapsWWW::WaitResponse()
extern "C"  Il2CppObject * OnlineMapsWWW_WaitResponse_m1628651254 (OnlineMapsWWW_t3247411593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OnlineMapsWWW OnlineMapsWWW::op_Implicit(UnityEngine.WWW)
extern "C"  OnlineMapsWWW_t3247411593 * OnlineMapsWWW_op_Implicit_m130652895 (Il2CppObject * __this /* static, unused */, WWW_t2919945039 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
