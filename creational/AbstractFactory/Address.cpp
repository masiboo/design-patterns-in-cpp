#include <string.h>
#include "Address.h"

using namespace abs_factory;

Address::Address() : m_AddrStr(NULL)
{
	memset(m_Street,0,STREET_LEN);
	memset(m_City,0,CITY_LEN);
	m_AddrStr = new std::string();
}

Address::~Address()
{
	if(m_AddrStr)
	{
		delete m_AddrStr;
	}
	m_AddrStr = NULL;
}

void
Address::SetStreet(const char* aStreet)
{
	strcpy(m_Street,aStreet);
}

void
Address::SetCity(const char* aCity)
{
	strcpy(m_City, aCity);
}

char*
Address::GetStreet()
{
	return m_Street;
}

char*
Address::GetCity()
{
	return m_City;
}

const std::string&
Address::GetFullAddress()
{
	if(m_AddrStr->size())
	{
		m_AddrStr->clear();
	}
	m_AddrStr->append(m_Street);
	m_AddrStr->append("\n");
	m_AddrStr->append(m_City);
	m_AddrStr->append("\n");
	return *m_AddrStr;
}

