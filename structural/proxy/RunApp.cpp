#include "SecureProxy.h"
#include <iostream>

// Proxy is class acting as an interface of other class.
// In this example SecureProxy is acting as a proxy of the
// RealClient class. RealClient class has an account number
// which is password protected. SecureProxy checks the password
// and gets the account number from RealClient if it's correct.

using std::cout;
using namespace proxy;

int main(int argc, char* argv[])
{
	ProxyInterface* pi = new SecureProxy("pass1234");
	cout<<"Getting Account Number...\n";
	try
	{
		cout<<"Account Number: "<<pi->GetAccountNumber()<<"\n";
	}
	catch(char* ex)
	{
		cout<<ex;
	}

	delete pi;
}

// End of file
