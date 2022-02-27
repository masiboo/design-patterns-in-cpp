#include "Appointment.h"

using namespace builder;

Appointment::Appointment() :
	m_Location(NULL),
	m_StartDate(NULL),
	m_Attendee(NULL)
{
}

Appointment::~Appointment()
{
	if( m_Location )
	{
		delete m_Location;
	}
	m_Location = NULL;

	if( m_StartDate )
	{
		delete m_StartDate;
	}
	m_StartDate = NULL;

	if( m_EndDate )
	{
		delete m_EndDate;
	}
	m_EndDate = NULL;

	if( m_Attendee )
	{
		delete m_Attendee;
	}
	m_Attendee = NULL;
}

// Accessor methods > BEGIN

void Appointment::SetLocation( Location& pLoc )
{
	m_Location = new Location(pLoc);
}

void Appointment::SetStartDate( Date& pDate )
{
	m_StartDate = new Date(pDate);
}

void Appointment::SetEndDate( Date& pDate )
{
	m_EndDate = new Date(pDate);
}

void Appointment::SetAttendeeList(AttendeeList* pAttendeeList)
{
	if( pAttendeeList )
	{
		m_Attendee = pAttendeeList;
	}
}

const Date* Appointment::GetStartDate() const
{
	assert(m_StartDate != NULL);
	return m_StartDate;
}

const Date* Appointment::GetEndDate()
{
	assert(m_EndDate != NULL);
	return m_EndDate;
}

const Location* Appointment::GetLocation() const
{
	assert(m_Location != NULL);
	return m_Location;
}

AttendeeList* Appointment::GetAttendeeList() const
{
	assert( m_Attendee != NULL );
	return m_Attendee;
}
// Accessor methods < END


// Implementaion of class AttendeeList

AttendeeList::AttendeeList()
{
	m_AttList = new TAttendeeList();
}

AttendeeList::~AttendeeList()
{
	// First remove the added Attendee
	TAttendeeList::iterator it = m_AttList->begin();

	while(it != m_AttList->end())
	{
		Attendee* attendee = *it;
		delete attendee;
		it++;
	}

	if( m_AttList )
	{
		delete m_AttList; 
	}
	m_AttList = NULL;
}

void AttendeeList::AddAttendee( Attendee& pAttendee )
{
	if( m_AttList )
	{
		Attendee* attendee = new Attendee(pAttendee);
		m_AttList->push_back(attendee);
	}
}

const Attendee* AttendeeList::GetAttendee(size_t pIndex)
{
	TAttendeeList::iterator it = m_AttList->begin();

	if( pIndex >= 0 && pIndex <= m_AttList->size() )
	{
		return m_AttList->at(pIndex);
	}

	return NULL;
}

// Implementaion of class AttendeeList

// End of file

