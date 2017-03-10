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

// System.Linq.OrderedSequence`2<System.Object,System.Double>
struct OrderedSequence_2_t3716354493;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// System.Func`2<System.Object,System.Double>
struct Func_2_t4214070567;
// System.Collections.Generic.IComparer`1<System.Double>
struct IComparer_1_t2032478803;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t1798778454;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection759359329.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m2766352346_gshared (OrderedSequence_2_t3716354493 * __this, Il2CppObject* ___source0, Func_2_t4214070567 * ___key_selector1, Il2CppObject* ___comparer2, int32_t ___direction3, const MethodInfo* method);
#define OrderedSequence_2__ctor_m2766352346(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method) ((  void (*) (OrderedSequence_2_t3716354493 *, Il2CppObject*, Func_2_t4214070567 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m2766352346_gshared)(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Double>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C"  SortContext_1_t1798778454 * OrderedSequence_2_CreateContext_m404154956_gshared (OrderedSequence_2_t3716354493 * __this, SortContext_1_t1798778454 * ___current0, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m404154956(__this, ___current0, method) ((  SortContext_1_t1798778454 * (*) (OrderedSequence_2_t3716354493 *, SortContext_1_t1798778454 *, const MethodInfo*))OrderedSequence_2_CreateContext_m404154956_gshared)(__this, ___current0, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Double>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  Il2CppObject* OrderedSequence_2_Sort_m1469547177_gshared (OrderedSequence_2_t3716354493 * __this, Il2CppObject* ___source0, const MethodInfo* method);
#define OrderedSequence_2_Sort_m1469547177(__this, ___source0, method) ((  Il2CppObject* (*) (OrderedSequence_2_t3716354493 *, Il2CppObject*, const MethodInfo*))OrderedSequence_2_Sort_m1469547177_gshared)(__this, ___source0, method)
