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

// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// UnityEngine.TextEditor
struct TextEditor_t3975561390;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3486805455;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "UnityEngine_UnityEngine_GUISkin1436893342.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "UnityEngine_UnityEngine_FocusType488772178.h"
#include "UnityEngine_UnityEngine_TextEditor3975561390.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction3486805455.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1321863889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m2724006954 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m3391676555 (Il2CppObject * __this /* static, unused */, GUISkin_t1436893342 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t1436893342 * GUI_get_skin_m2309570990 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m3603287387 (Il2CppObject * __this /* static, unused */, GUISkin_t1436893342 * ___newSkin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C"  void GUI_Label_m2412846501 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2231582000 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m98409281 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
extern "C"  void GUI_Box_m2739364838 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C"  void GUI_Box_m2063946709 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Box_m4178954864 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m3054448581 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m2919274209 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::RepeatButton(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  bool GUI_RepeatButton_m3063925197 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C"  bool GUI_DoRepeatButton_m3482958082 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, int32_t ___focusType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::TextField(UnityEngine.Rect,System.String)
extern "C"  String_t* GUI_TextField_m1044694001 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C"  String_t* GUI_PasswordFieldGetStrToShow_m4123430954 (Il2CppObject * __this /* static, unused */, String_t* ___password0, Il2CppChar ___maskChar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle)
extern "C"  void GUI_DoTextField_m1993004116 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, int32_t ___id1, GUIContent_t4210063000 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t1799908754 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String)
extern "C"  void GUI_DoTextField_m2489485608 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, int32_t ___id1, GUIContent_t4210063000 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t1799908754 * ___style5, String_t* ___secureText6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C"  void GUI_DoTextField_m368568689 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, int32_t ___id1, GUIContent_t4210063000 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t1799908754 * ___style5, String_t* ___secureText6, Il2CppChar ___maskChar7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C"  void GUI_HandleTextFieldEventForTouchscreen_m3221946725 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, int32_t ___id1, GUIContent_t4210063000 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t1799908754 * ___style5, String_t* ___secureText6, Il2CppChar ___maskChar7, TextEditor_t3975561390 * ___editor8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForDesktop(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,UnityEngine.TextEditor)
extern "C"  void GUI_HandleTextFieldEventForDesktop_m3573214059 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, int32_t ___id1, GUIContent_t4210063000 * ___content2, bool ___multiline3, int32_t ___maxLength4, GUIStyle_t1799908754 * ___style5, TextEditor_t3975561390 * ___editor6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,System.String)
extern "C"  bool GUI_Toggle_m1352663248 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, bool ___value1, String_t* ___text2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Toggle_m2718941758 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, bool ___value1, GUIContent_t4210063000 * ___content2, GUIStyle_t1799908754 * ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_BeginGroup_m3506508283 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C"  void GUI_EndGroup_m1672170830 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t3681755626  GUI_Window_m2988139263 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t3681755626  ___clientRect1, WindowFunction_t3486805455 * ___func2, String_t* ___text3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m634477008 (Il2CppObject * __this /* static, unused */, WindowFunction_t3486805455 * ___func0, int32_t ___id1, GUISkin_t1436893342 * ____skin2, int32_t ___forceRect3, float ___width4, float ___height5, GUIStyle_t1799908754 * ___style6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_backgroundColor()
extern "C"  Color_t2020392075  GUI_get_backgroundColor_m1228381085 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
extern "C"  void GUI_set_backgroundColor_m1176185368 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_backgroundColor(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_get_backgroundColor_m51503716 (Il2CppObject * __this /* static, unused */, Color_t2020392075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_set_backgroundColor_m2897950968 (Il2CppObject * __this /* static, unused */, Color_t2020392075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m470833806 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m2414316575 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m2786347772 (Il2CppObject * __this /* static, unused */, Rect_t3681755626 * ___position0, GUIContent_t4210063000 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m1396731179 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m603378840 (Il2CppObject * __this /* static, unused */, Rect_t3681755626 * ___position0, GUIContent_t4210063000 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoToggle_m3427584861 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, int32_t ___id1, bool ___value2, GUIContent_t4210063000 * ___content3, IntPtr_t ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoToggle_m2357217006 (Il2CppObject * __this /* static, unused */, Rect_t3681755626 * ___position0, int32_t ___id1, bool ___value2, GUIContent_t4210063000 * ___content3, IntPtr_t ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C"  Rect_t3681755626  GUI_DoWindow_m3474462434 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t3681755626  ___clientRect1, WindowFunction_t3486805455 * ___func2, GUIContent_t4210063000 * ___title3, GUIStyle_t1799908754 * ___style4, GUISkin_t1436893342 * ___skin5, bool ___forceRectOnLayout6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean,UnityEngine.Rect&)
extern "C"  void GUI_INTERNAL_CALL_DoWindow_m1548763310 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Rect_t3681755626 * ___clientRect1, WindowFunction_t3486805455 * ___func2, GUIContent_t4210063000 * ___title3, GUIStyle_t1799908754 * ___style4, GUISkin_t1436893342 * ___skin5, bool ___forceRectOnLayout6, Rect_t3681755626 * ___value7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
