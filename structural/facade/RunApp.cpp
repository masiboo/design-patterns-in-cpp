#include <iostream>
#include "LocalizeFacade.h"
#include "Nation.h"

using namespace std;
using namespace facade;

// A Facade object is an object that provides a simplified interface to a larger body of code,
// Facade pattern provides the following flexibilities.
// such as a class library.
// make a software library easier to use and understand.
// reduce dependencies of outside code on the inner workings of a library which is used by Facade
// wrap a poorly designed collection of APIs with a single well-designed API.

// LocalizeFacade class is acting as a Facade object in the following example. It provides easy access
// to localize the system depending on different system.


int main(int argc, char* argv[])
{
	Nation* n1 = NULL;
	int option = 0;
	char op;

	LocalizeFacade* lf = new LocalizeFacade(English,2);
	Nation** nations = lf->GetNations();

	cout<<"E: "<<endl;
	cout<<"F: "<<endl;
	cout<<"Press 'E' for English and 'F' for French property: ";
	cin>>op;

	if( op == 'E' )
	{
		lf->LoadProperty( English );
	}
	else if( op == 'F' )
	{
		lf->LoadProperty( French );
	}

	cout<<lf->GetProperty(GUI_TITLE)<<endl;
	cout<<"1: "<<nations[0]->Name()<<endl;
	cout<<"2: "<<nations[1]->Name()<<endl;
	cout<<"Choose your options and press enter: ";
	cin>>option;

	if( option > 0 && option < 3 )
	{
		n1 = lf->GetNation(nations[option-1]->Name().c_str());
		cout<<lf->GetProperty(COUNTRY_LABEL)<<": "<<n1->Name()<<endl;
		cout<<lf->GetProperty(PHONE_LABEL)<<": "<<n1->DialPrefix()<<endl;
	}
	else
	{
		cout<<" Invalid option\n";
	}

	cout<<lf->GetProperty(EXIT_CAPTION)<<"..."<<endl;

	delete lf;
	return 0;
}

// End of file
