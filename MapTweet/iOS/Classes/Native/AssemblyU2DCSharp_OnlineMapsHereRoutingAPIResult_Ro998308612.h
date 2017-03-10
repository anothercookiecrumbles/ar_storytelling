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

// OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets/Ticket
struct  Ticket_t998308612  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets/Ticket::id
	String_t* ___id_0;
	// System.String OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets/Ticket::ticketName
	String_t* ___ticketName_1;
	// System.String OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets/Ticket::currency
	String_t* ___currency_2;
	// System.Double OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets/Ticket::price
	double ___price_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Ticket_t998308612, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_ticketName_1() { return static_cast<int32_t>(offsetof(Ticket_t998308612, ___ticketName_1)); }
	inline String_t* get_ticketName_1() const { return ___ticketName_1; }
	inline String_t** get_address_of_ticketName_1() { return &___ticketName_1; }
	inline void set_ticketName_1(String_t* value)
	{
		___ticketName_1 = value;
		Il2CppCodeGenWriteBarrier(&___ticketName_1, value);
	}

	inline static int32_t get_offset_of_currency_2() { return static_cast<int32_t>(offsetof(Ticket_t998308612, ___currency_2)); }
	inline String_t* get_currency_2() const { return ___currency_2; }
	inline String_t** get_address_of_currency_2() { return &___currency_2; }
	inline void set_currency_2(String_t* value)
	{
		___currency_2 = value;
		Il2CppCodeGenWriteBarrier(&___currency_2, value);
	}

	inline static int32_t get_offset_of_price_3() { return static_cast<int32_t>(offsetof(Ticket_t998308612, ___price_3)); }
	inline double get_price_3() const { return ___price_3; }
	inline double* get_address_of_price_3() { return &___price_3; }
	inline void set_price_3(double value)
	{
		___price_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
