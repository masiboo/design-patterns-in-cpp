#ifndef __APPOINTMENTBUILDER_H
#define __APPOINTMENTBUILDER_H

#include "Appointment.h"

namespace builder
{
	// Builder class for creating the complex class:
	// Appointment
	class AppointmentBuilder
	{
		public: // ctor - dtor
			AppointmentBuilder(){}
			~AppointmentBuilder();

		public: // Builder methods
			void BuildAppointment();
			void BuildLocations(Location& pLocation);
			void BuildDates(Date& pStartDate,
					Date& pEndDate);
			void BuildAttendees(AttendeeList* pAttendee);
			const Appointment* GetAppointment();

			// Release the Appointment object
			void DestroyAppointment();

		protected:
			Appointment* m_Appointment;
	};

}

#endif // __APPOINTMENTBUILDER_H
