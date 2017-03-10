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

// TextEventHandler
struct TextEventHandler_t4116109227;
// Vuforia.WordResult
struct WordResult_t1915507197;
// Vuforia.Word
struct Word_t3872119486;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WordResult1915507197.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void TextEventHandler::.ctor()
extern "C"  void TextEventHandler__ctor_m980267038 (TextEventHandler_t4116109227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::Start()
extern "C"  void TextEventHandler_Start_m3949631850 (TextEventHandler_t4116109227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnRenderObject()
extern "C"  void TextEventHandler_OnRenderObject_m885688966 (TextEventHandler_t4116109227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::Update()
extern "C"  void TextEventHandler_Update_m1554161975 (TextEventHandler_t4116109227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnInitialized()
extern "C"  void TextEventHandler_OnInitialized_m20628987 (TextEventHandler_t4116109227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnWordDetected(Vuforia.WordResult)
extern "C"  void TextEventHandler_OnWordDetected_m1954542208 (TextEventHandler_t4116109227 * __this, WordResult_t1915507197 * ___wordResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnWordLost(Vuforia.Word)
extern "C"  void TextEventHandler_OnWordLost_m934109253 (TextEventHandler_t4116109227 * __this, Il2CppObject * ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnVideoBackgroundConfigChanged()
extern "C"  void TextEventHandler_OnVideoBackgroundConfigChanged_m3875127810 (TextEventHandler_t4116109227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::DrawWordBoundingBoxes()
extern "C"  void TextEventHandler_DrawWordBoundingBoxes_m1517826229 (TextEventHandler_t4116109227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::DrawBoundingBox(UnityEngine.Vector2[])
extern "C"  void TextEventHandler_DrawBoundingBox_m3614938767 (TextEventHandler_t4116109227 * __this, Vector2U5BU5D_t686124026* ___corners0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] TextEventHandler::ExtendCorners(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single)
extern "C"  Vector2U5BU5D_t686124026* TextEventHandler_ExtendCorners_m2340474666 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t686124026* ___corners0, Vector2U5BU5D_t686124026* ___normals1, float ___extension2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TextEventHandler::IntersectLines(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  TextEventHandler_IntersectLines_m2690968145 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___p10, Vector2_t2243707579  ___p21, Vector2_t2243707579  ___p32, Vector2_t2243707579  ___p43, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::AddWord(Vuforia.WordResult)
extern "C"  void TextEventHandler_AddWord_m2739260046 (TextEventHandler_t4116109227 * __this, WordResult_t1915507197 * ___wordResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::RemoveWord(Vuforia.Word)
extern "C"  void TextEventHandler_RemoveWord_m4134617536 (TextEventHandler_t4116109227 * __this, Il2CppObject * ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TextEventHandler::ContainsWord(Vuforia.Word)
extern "C"  bool TextEventHandler_ContainsWord_m318340171 (TextEventHandler_t4116109227 * __this, Il2CppObject * ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::CalculateLoupeRegion()
extern "C"  void TextEventHandler_CalculateLoupeRegion_m331543881 (TextEventHandler_t4116109227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
