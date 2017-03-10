#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnlineMapsThreadManager
struct OnlineMapsThreadManager_t2145254635;
// System.Threading.Thread
struct Thread_t241561612;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsThreadManager
struct  OnlineMapsThreadManager_t2145254635  : public Il2CppObject
{
public:
	// System.Boolean OnlineMapsThreadManager::isAlive
	bool ___isAlive_1;
	// System.Threading.Thread OnlineMapsThreadManager::thread
	Thread_t241561612 * ___thread_2;
	// System.Collections.Generic.List`1<System.Action> OnlineMapsThreadManager::threadActions
	List_1_t2595592884 * ___threadActions_3;

public:
	inline static int32_t get_offset_of_isAlive_1() { return static_cast<int32_t>(offsetof(OnlineMapsThreadManager_t2145254635, ___isAlive_1)); }
	inline bool get_isAlive_1() const { return ___isAlive_1; }
	inline bool* get_address_of_isAlive_1() { return &___isAlive_1; }
	inline void set_isAlive_1(bool value)
	{
		___isAlive_1 = value;
	}

	inline static int32_t get_offset_of_thread_2() { return static_cast<int32_t>(offsetof(OnlineMapsThreadManager_t2145254635, ___thread_2)); }
	inline Thread_t241561612 * get_thread_2() const { return ___thread_2; }
	inline Thread_t241561612 ** get_address_of_thread_2() { return &___thread_2; }
	inline void set_thread_2(Thread_t241561612 * value)
	{
		___thread_2 = value;
		Il2CppCodeGenWriteBarrier(&___thread_2, value);
	}

	inline static int32_t get_offset_of_threadActions_3() { return static_cast<int32_t>(offsetof(OnlineMapsThreadManager_t2145254635, ___threadActions_3)); }
	inline List_1_t2595592884 * get_threadActions_3() const { return ___threadActions_3; }
	inline List_1_t2595592884 ** get_address_of_threadActions_3() { return &___threadActions_3; }
	inline void set_threadActions_3(List_1_t2595592884 * value)
	{
		___threadActions_3 = value;
		Il2CppCodeGenWriteBarrier(&___threadActions_3, value);
	}
};

struct OnlineMapsThreadManager_t2145254635_StaticFields
{
public:
	// OnlineMapsThreadManager OnlineMapsThreadManager::instance
	OnlineMapsThreadManager_t2145254635 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(OnlineMapsThreadManager_t2145254635_StaticFields, ___instance_0)); }
	inline OnlineMapsThreadManager_t2145254635 * get_instance_0() const { return ___instance_0; }
	inline OnlineMapsThreadManager_t2145254635 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(OnlineMapsThreadManager_t2145254635 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
