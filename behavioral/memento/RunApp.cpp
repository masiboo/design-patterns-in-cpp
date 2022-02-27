#include "Originator.h"
#include "Caretaker.h"

using namespace memento;

int main(int argc, char* argv[])
{
	Originator* org = new Originator();
	org->SetName("Mr. Wilson");
	org->SetPhone("050670707");
	org->SetBudget( 25000.00 );

	Caretaker* ct = new Caretaker();
	ct->SetMemento( org->SaveMemento() );
	org->DisplayCurrentContent();

	org->SetName("Mr. Leo");
	org->SetPhone("040670707");
	org->SetBudget( 35000.00 );
	org->DisplayCurrentContent();

	org->ReStoreMemento( ct->GetMemento() );
	org->DisplayCurrentContent();

	delete org;
	delete ct;

	return 0;
}

