#include <iostream>
#include "Address.h"

using namespace std;
using namespace prototype;

int main(int argc, char* argv[])
{
	string street("Kirstintie 7");
	string country("Finland");
	Address* addr1 = new Address(street, country);
	
	string* addr_v = addr1->GetAddress();
	cout<<*addr_v<<endl;
	delete addr_v;

	cout<<"Copying address...\n";
	// Deep copying the addr1
	Address* addr2 = static_cast<Address*>(addr1->copy());
	addr_v = addr2->GetAddress();
	cout<<*addr_v<<endl;
	delete addr_v;

	delete addr1;
	delete addr2;
	return 0;
}
