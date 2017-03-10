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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfinityCode.OnlineMapsExamples.SaveMarker3DExample
struct  SaveMarker3DExample_t142641868  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject InfinityCode.OnlineMapsExamples.SaveMarker3DExample::markerPrefab
	GameObject_t1756533147 * ___markerPrefab_3;
	// System.Int32 InfinityCode.OnlineMapsExamples.SaveMarker3DExample::markerScale
	int32_t ___markerScale_4;

public:
	inline static int32_t get_offset_of_markerPrefab_3() { return static_cast<int32_t>(offsetof(SaveMarker3DExample_t142641868, ___markerPrefab_3)); }
	inline GameObject_t1756533147 * get_markerPrefab_3() const { return ___markerPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_markerPrefab_3() { return &___markerPrefab_3; }
	inline void set_markerPrefab_3(GameObject_t1756533147 * value)
	{
		___markerPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___markerPrefab_3, value);
	}

	inline static int32_t get_offset_of_markerScale_4() { return static_cast<int32_t>(offsetof(SaveMarker3DExample_t142641868, ___markerScale_4)); }
	inline int32_t get_markerScale_4() const { return ___markerScale_4; }
	inline int32_t* get_address_of_markerScale_4() { return &___markerScale_4; }
	inline void set_markerScale_4(int32_t value)
	{
		___markerScale_4 = value;
	}
};

struct SaveMarker3DExample_t142641868_StaticFields
{
public:
	// System.String InfinityCode.OnlineMapsExamples.SaveMarker3DExample::prefsKey
	String_t* ___prefsKey_2;

public:
	inline static int32_t get_offset_of_prefsKey_2() { return static_cast<int32_t>(offsetof(SaveMarker3DExample_t142641868_StaticFields, ___prefsKey_2)); }
	inline String_t* get_prefsKey_2() const { return ___prefsKey_2; }
	inline String_t** get_address_of_prefsKey_2() { return &___prefsKey_2; }
	inline void set_prefsKey_2(String_t* value)
	{
		___prefsKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefsKey_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
