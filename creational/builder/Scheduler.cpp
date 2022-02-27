#include "Scheduler.h"

using namespace builder;

const Appointment* Scheduler::CreateAppointment( AppointmentBuilder& pBuilder,
								Date& pStartDate,
								Date& pEndDate,
								Location& pLocation,
								AttendeeList* pAttList
								)
{
	pBuilder.BuildAppointment();
	pBuilder.BuildDates(pStartDate,pEndDate);
	pBuilder.BuildLocations(pLocation);
	pBuilder.BuildAttendees(pAttList);
	return pBuilder.GetAppointment();
}

void Scheduler::CloseAppointment(AppointmentBuilder& pBuilder)
{
	pBuilder.DestroyAppointment();
}
