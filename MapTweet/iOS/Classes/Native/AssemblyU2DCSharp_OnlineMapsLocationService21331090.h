#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<OnlineMapsLocationService/LastPositionItem>
struct List_1_t4191618883;

#include "AssemblyU2DCSharp_OnlineMapsLocationServiceGeneric2770355874.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsLocationService
struct  OnlineMapsLocationService_t21331090  : public OnlineMapsLocationServiceGenericBase_1_t2770355874
{
public:
	// System.Single OnlineMapsLocationService::desiredAccuracy
	float ___desiredAccuracy_35;
	// System.Single OnlineMapsLocationService::updateDistance
	float ___updateDistance_36;
	// System.Collections.Generic.List`1<OnlineMapsLocationService/LastPositionItem> OnlineMapsLocationService::lastPositions
	List_1_t4191618883 * ___lastPositions_37;
	// System.Double OnlineMapsLocationService::lastLocationInfoTimestamp
	double ___lastLocationInfoTimestamp_38;

public:
	inline static int32_t get_offset_of_desiredAccuracy_35() { return static_cast<int32_t>(offsetof(OnlineMapsLocationService_t21331090, ___desiredAccuracy_35)); }
	inline float get_desiredAccuracy_35() const { return ___desiredAccuracy_35; }
	inline float* get_address_of_desiredAccuracy_35() { return &___desiredAccuracy_35; }
	inline void set_desiredAccuracy_35(float value)
	{
		___desiredAccuracy_35 = value;
	}

	inline static int32_t get_offset_of_updateDistance_36() { return static_cast<int32_t>(offsetof(OnlineMapsLocationService_t21331090, ___updateDistance_36)); }
	inline float get_updateDistance_36() const { return ___updateDistance_36; }
	inline float* get_address_of_updateDistance_36() { return &___updateDistance_36; }
	inline void set_updateDistance_36(float value)
	{
		___updateDistance_36 = value;
	}

	inline static int32_t get_offset_of_lastPositions_37() { return static_cast<int32_t>(offsetof(OnlineMapsLocationService_t21331090, ___lastPositions_37)); }
	inline List_1_t4191618883 * get_lastPositions_37() const { return ___lastPositions_37; }
	inline List_1_t4191618883 ** get_address_of_lastPositions_37() { return &___lastPositions_37; }
	inline void set_lastPositions_37(List_1_t4191618883 * value)
	{
		___lastPositions_37 = value;
		Il2CppCodeGenWriteBarrier(&___lastPositions_37, value);
	}

	inline static int32_t get_offset_of_lastLocationInfoTimestamp_38() { return static_cast<int32_t>(offsetof(OnlineMapsLocationService_t21331090, ___lastLocationInfoTimestamp_38)); }
	inline double get_lastLocationInfoTimestamp_38() const { return ___lastLocationInfoTimestamp_38; }
	inline double* get_address_of_lastLocationInfoTimestamp_38() { return &___lastLocationInfoTimestamp_38; }
	inline void set_lastLocationInfoTimestamp_38(double value)
	{
		___lastLocationInfoTimestamp_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
