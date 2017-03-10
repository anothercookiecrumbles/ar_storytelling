#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Material
struct Material_t193706927;
// System.Collections.Generic.List`1<Vuforia.WordResult>
struct List_1_t1284628329;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;
// UnityEngine.Canvas
struct Canvas_t209405766;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextEventHandler
struct  TextEventHandler_t4116109227  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TextEventHandler::mLoupeWidth
	float ___mLoupeWidth_2;
	// System.Single TextEventHandler::mLoupeHeight
	float ___mLoupeHeight_3;
	// System.Single TextEventHandler::mBBoxLineWidth
	float ___mBBoxLineWidth_4;
	// System.Single TextEventHandler::mBBoxPadding
	float ___mBBoxPadding_5;
	// UnityEngine.Color TextEventHandler::mBBoxColor
	Color_t2020392075  ___mBBoxColor_6;
	// UnityEngine.Rect TextEventHandler::mDetectionAndTrackingRect
	Rect_t3681755626  ___mDetectionAndTrackingRect_7;
	// UnityEngine.Texture2D TextEventHandler::mBoundingBoxTexture
	Texture2D_t3542995729 * ___mBoundingBoxTexture_8;
	// UnityEngine.Material TextEventHandler::mBoundingBoxMaterial
	Material_t193706927 * ___mBoundingBoxMaterial_9;
	// System.Boolean TextEventHandler::mIsInitialized
	bool ___mIsInitialized_10;
	// System.Boolean TextEventHandler::mVideoBackgroundChanged
	bool ___mVideoBackgroundChanged_11;
	// System.Collections.Generic.List`1<Vuforia.WordResult> TextEventHandler::mSortedWords
	List_1_t1284628329 * ___mSortedWords_12;
	// UnityEngine.UI.Text[] TextEventHandler::mDisplayedWords
	TextU5BU5D_t4216439300* ___mDisplayedWords_13;
	// UnityEngine.Material TextEventHandler::boundingBoxMaterial
	Material_t193706927 * ___boundingBoxMaterial_14;
	// UnityEngine.Canvas TextEventHandler::textRecoCanvas
	Canvas_t209405766 * ___textRecoCanvas_15;

public:
	inline static int32_t get_offset_of_mLoupeWidth_2() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mLoupeWidth_2)); }
	inline float get_mLoupeWidth_2() const { return ___mLoupeWidth_2; }
	inline float* get_address_of_mLoupeWidth_2() { return &___mLoupeWidth_2; }
	inline void set_mLoupeWidth_2(float value)
	{
		___mLoupeWidth_2 = value;
	}

	inline static int32_t get_offset_of_mLoupeHeight_3() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mLoupeHeight_3)); }
	inline float get_mLoupeHeight_3() const { return ___mLoupeHeight_3; }
	inline float* get_address_of_mLoupeHeight_3() { return &___mLoupeHeight_3; }
	inline void set_mLoupeHeight_3(float value)
	{
		___mLoupeHeight_3 = value;
	}

	inline static int32_t get_offset_of_mBBoxLineWidth_4() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mBBoxLineWidth_4)); }
	inline float get_mBBoxLineWidth_4() const { return ___mBBoxLineWidth_4; }
	inline float* get_address_of_mBBoxLineWidth_4() { return &___mBBoxLineWidth_4; }
	inline void set_mBBoxLineWidth_4(float value)
	{
		___mBBoxLineWidth_4 = value;
	}

	inline static int32_t get_offset_of_mBBoxPadding_5() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mBBoxPadding_5)); }
	inline float get_mBBoxPadding_5() const { return ___mBBoxPadding_5; }
	inline float* get_address_of_mBBoxPadding_5() { return &___mBBoxPadding_5; }
	inline void set_mBBoxPadding_5(float value)
	{
		___mBBoxPadding_5 = value;
	}

	inline static int32_t get_offset_of_mBBoxColor_6() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mBBoxColor_6)); }
	inline Color_t2020392075  get_mBBoxColor_6() const { return ___mBBoxColor_6; }
	inline Color_t2020392075 * get_address_of_mBBoxColor_6() { return &___mBBoxColor_6; }
	inline void set_mBBoxColor_6(Color_t2020392075  value)
	{
		___mBBoxColor_6 = value;
	}

	inline static int32_t get_offset_of_mDetectionAndTrackingRect_7() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mDetectionAndTrackingRect_7)); }
	inline Rect_t3681755626  get_mDetectionAndTrackingRect_7() const { return ___mDetectionAndTrackingRect_7; }
	inline Rect_t3681755626 * get_address_of_mDetectionAndTrackingRect_7() { return &___mDetectionAndTrackingRect_7; }
	inline void set_mDetectionAndTrackingRect_7(Rect_t3681755626  value)
	{
		___mDetectionAndTrackingRect_7 = value;
	}

	inline static int32_t get_offset_of_mBoundingBoxTexture_8() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mBoundingBoxTexture_8)); }
	inline Texture2D_t3542995729 * get_mBoundingBoxTexture_8() const { return ___mBoundingBoxTexture_8; }
	inline Texture2D_t3542995729 ** get_address_of_mBoundingBoxTexture_8() { return &___mBoundingBoxTexture_8; }
	inline void set_mBoundingBoxTexture_8(Texture2D_t3542995729 * value)
	{
		___mBoundingBoxTexture_8 = value;
		Il2CppCodeGenWriteBarrier(&___mBoundingBoxTexture_8, value);
	}

	inline static int32_t get_offset_of_mBoundingBoxMaterial_9() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mBoundingBoxMaterial_9)); }
	inline Material_t193706927 * get_mBoundingBoxMaterial_9() const { return ___mBoundingBoxMaterial_9; }
	inline Material_t193706927 ** get_address_of_mBoundingBoxMaterial_9() { return &___mBoundingBoxMaterial_9; }
	inline void set_mBoundingBoxMaterial_9(Material_t193706927 * value)
	{
		___mBoundingBoxMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___mBoundingBoxMaterial_9, value);
	}

	inline static int32_t get_offset_of_mIsInitialized_10() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mIsInitialized_10)); }
	inline bool get_mIsInitialized_10() const { return ___mIsInitialized_10; }
	inline bool* get_address_of_mIsInitialized_10() { return &___mIsInitialized_10; }
	inline void set_mIsInitialized_10(bool value)
	{
		___mIsInitialized_10 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundChanged_11() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mVideoBackgroundChanged_11)); }
	inline bool get_mVideoBackgroundChanged_11() const { return ___mVideoBackgroundChanged_11; }
	inline bool* get_address_of_mVideoBackgroundChanged_11() { return &___mVideoBackgroundChanged_11; }
	inline void set_mVideoBackgroundChanged_11(bool value)
	{
		___mVideoBackgroundChanged_11 = value;
	}

	inline static int32_t get_offset_of_mSortedWords_12() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mSortedWords_12)); }
	inline List_1_t1284628329 * get_mSortedWords_12() const { return ___mSortedWords_12; }
	inline List_1_t1284628329 ** get_address_of_mSortedWords_12() { return &___mSortedWords_12; }
	inline void set_mSortedWords_12(List_1_t1284628329 * value)
	{
		___mSortedWords_12 = value;
		Il2CppCodeGenWriteBarrier(&___mSortedWords_12, value);
	}

	inline static int32_t get_offset_of_mDisplayedWords_13() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___mDisplayedWords_13)); }
	inline TextU5BU5D_t4216439300* get_mDisplayedWords_13() const { return ___mDisplayedWords_13; }
	inline TextU5BU5D_t4216439300** get_address_of_mDisplayedWords_13() { return &___mDisplayedWords_13; }
	inline void set_mDisplayedWords_13(TextU5BU5D_t4216439300* value)
	{
		___mDisplayedWords_13 = value;
		Il2CppCodeGenWriteBarrier(&___mDisplayedWords_13, value);
	}

	inline static int32_t get_offset_of_boundingBoxMaterial_14() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___boundingBoxMaterial_14)); }
	inline Material_t193706927 * get_boundingBoxMaterial_14() const { return ___boundingBoxMaterial_14; }
	inline Material_t193706927 ** get_address_of_boundingBoxMaterial_14() { return &___boundingBoxMaterial_14; }
	inline void set_boundingBoxMaterial_14(Material_t193706927 * value)
	{
		___boundingBoxMaterial_14 = value;
		Il2CppCodeGenWriteBarrier(&___boundingBoxMaterial_14, value);
	}

	inline static int32_t get_offset_of_textRecoCanvas_15() { return static_cast<int32_t>(offsetof(TextEventHandler_t4116109227, ___textRecoCanvas_15)); }
	inline Canvas_t209405766 * get_textRecoCanvas_15() const { return ___textRecoCanvas_15; }
	inline Canvas_t209405766 ** get_address_of_textRecoCanvas_15() { return &___textRecoCanvas_15; }
	inline void set_textRecoCanvas_15(Canvas_t209405766 * value)
	{
		___textRecoCanvas_15 = value;
		Il2CppCodeGenWriteBarrier(&___textRecoCanvas_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
