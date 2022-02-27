//#include "Appointment.h"
#include "AppointmentBuilder.h"

using namespace builder;

AppointmentBuilder::~AppointmentBuilder()
{
	if( m_Appointment )
	{
		delete m_Appointment;
	}
	m_Appointment = NULL;
}

const Appointment* AppointmentBuilder::GetAppointment()
{
	return m_Appointment;
}

// Builder methods > BEGIN
void AppointmentBuilder::BuildAppointment()
{
	m_Appointment = new Appointment();
}

void AppointmentBuilder::BuildLocations(Location& pLocation)
{
	m_Appointment->SetLocation(pLocation);
}

void AppointmentBuilder::BuildDates(Date& pStartDate,
								Date& pEndDate)
{
	m_Appointment->SetStartDate(pStartDate);
	m_Appointment->SetEndDate(pEndDate);
}

void AppointmentBuilder::BuildAttendees(AttendeeList* pAttendee)
{
	m_Appointment->SetAttendeeList(pAttendee);
}

// Builder methods < END

void AppointmentBuilder::DestroyAppointment()
{
	if( m_Appointment )
	{
		delete m_Appointment;
	}
	m_Appointment = NULL;
}

// End of file
