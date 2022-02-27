#include <iostream>
#include "AppointmentBuilder.h"
#include "Scheduler.h"

using namespace std;
using namespace builder;

AttendeeList* CreateAttendeeList()
{
	AttendeeList* aList = new AttendeeList();
	Attendee a1("Islam1");
	Attendee a2("Islam2");
	aList->AddAttendee(a1);
	aList->AddAttendee(a2);
	return aList;
}

int main(int argc, char* argv[])
{
	Scheduler* scrumScheduler = new Scheduler();
	AppointmentBuilder* aptBuilder = new AppointmentBuilder();
	Date d(31,11,2008);
	Location l("Espoo");
	AttendeeList* aList = CreateAttendeeList();
	// Transfer the ownership of aList so that it will be deleted from the AppointmentBuilder destructor.
	const Appointment* ap = scrumScheduler->CreateAppointment(*aptBuilder, d, d, l, aList);

	cout<<"Date: "<<ap->GetStartDate()->GetDateAsString();
	size_t attNum = ap->GetAttendeeList()->NumerOfAttendees();

	// Enumerate the AttendeeList
	for(size_t i = 0; i < attNum; i++)
	{
		const Attendee* attendee = ap->GetAttendeeList()->GetAttendee(i);
		cout<<"Attendee Name: "<<attendee->Name()<<endl;
	}

	cout<<"Location: "<<ap->GetLocation()->LocationName()<<endl;

	// Here it release the Appointment resources
	scrumScheduler->CloseAppointment(*aptBuilder);

	delete aptBuilder;
	delete scrumScheduler;

	return 0;
}
