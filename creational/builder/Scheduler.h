#ifndef __SCHEDULER_H
#define __SCHEDULER_H

#include "AppointmentBuilder.h"

namespace builder
{
	class Scheduler
	{
		public:
			// Constructs the complex class: Appointment
			// by AppointmentBuilder class
			const Appointment* CreateAppointment( 
					AppointmentBuilder& ap,
					Date& pStartDate,
					Date& eEndDate,
					Location& pLocation,
					AttendeeList* pAttList
					);

			void CloseAppointment( AppointmentBuilder& pBuilder );
	};

}

#endif // __SCHEDULER_H
