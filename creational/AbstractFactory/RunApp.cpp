// RunApp for testing the AbstractFactory pattern

#include <string>
#include "FinnishAddrFactory.h"
#include "FinnishAddress.h"

using namespace abs_factory;

int main(int argc, char* argv[])
{
	// Abstract factory
	AddressFactory* finAddrFac = new FinnishAddressFactory();
	// Constructing the right address object
	FinnishAddress* addr = static_cast<FinnishAddress*>(finAddrFac->CreateAddress());
	addr->SetStreet("Kirstintie 7 B 30");
	addr->SetCity("Espoo");
	std::string str = addr->GetFullAddress();
	printf("Address: %s\n",str.c_str());
	addr->SetStreet("Valimotie 9");
	str = addr->GetFullAddress();
	printf("Address: %s\n",str.c_str());
	delete finAddrFac;
	delete addr;
	return 0;
}
