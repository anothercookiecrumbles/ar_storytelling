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
// OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets/Ticket[]
struct TicketU5BU5D_t404178029;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets
struct  PublicTransportTickets_t1796753093  : public Il2CppObject
{
public:
	// System.String OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets::id
	String_t* ___id_0;
	// OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets/Ticket[] OnlineMapsHereRoutingAPIResult/Route/PublicTransportTickets::tickets
	TicketU5BU5D_t404178029* ___tickets_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PublicTransportTickets_t1796753093, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_tickets_1() { return static_cast<int32_t>(offsetof(PublicTransportTickets_t1796753093, ___tickets_1)); }
	inline TicketU5BU5D_t404178029* get_tickets_1() const { return ___tickets_1; }
	inline TicketU5BU5D_t404178029** get_address_of_tickets_1() { return &___tickets_1; }
	inline void set_tickets_1(TicketU5BU5D_t404178029* value)
	{
		___tickets_1 = value;
		Il2CppCodeGenWriteBarrier(&___tickets_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
