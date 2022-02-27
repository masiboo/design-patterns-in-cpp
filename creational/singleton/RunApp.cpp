#include <iostream>
#include "CommandHistory.h"

using namespace std;
using namespace creational;

int main(int argc, char* argv[])
{
	// Get a singleton instance which will be shared if
	// other instances are requested
	const CommandHistory* ch = CommandHistory::GetInstance();
	const CommandHistory* ch1 = CommandHistory::GetInstance();
	Command* edit = new Command("Edit");
	Command* edit2 = new Command("Edit2");

	// Removing instance cause the singleton instance to be deleted
	//ch1->RemoveInstance();
	
	// Add commmand
	try
	{
		ch->AddCommand( edit );
		ch->AddCommand( edit2 );
		ch1->AddCommand( edit );
	}
	catch(TException& ex)
	{
		cout<<"Exception: "<<ex.ErrorDescription()<<endl;
	}
	
	const Command* edit1 = NULL;

	try
	{
		edit1 = ch->UndoCommand();
	}
	catch(TException& ex)
	{
		cout<<"Exception: "<<ex.ErrorDescription()<<endl;
	}
	
	if( edit1 )
	{
		cout<<"Undo: "<< edit1->CommandName()<<endl;
	}

	try
	{
		cout<<"Command History: (ch)"<<ch->ListOfCommands()<<"\n";
		cout<<"Command History: (ch1)"<<ch1->ListOfCommands()<<"\n";
	}
	catch(TException& ex)
	{
		cout<<"Exception: "<<ex.ErrorDescription()<<endl;
	}

	ch->RemoveInstance();
	delete edit;
	delete edit2;
	return 0;
}
