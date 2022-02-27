#include "Address.h"

using namespace prototype;

// This method does the deep copying of the Address
// instance Thus creates a prototype of the object.
Copyable* Address::copy()
{
	Address* addr = new Address(*m_Street, *m_Country);
	return addr;
}

string* Address::GetAddress()
{
	string* addr = new string();
	addr->append("Street: ");
	addr->append( *m_Street );
	addr->append("\nCountry: ");
	addr->append( *m_Country );
	return addr;
}
