#include "FinnishAddress.h"

using namespace abs_factory;

#define COUNTRY "FINLAND"

FinnishAddress::FinnishAddress()
{
}

FinnishAddress::~FinnishAddress()
{
}

char*
FinnishAddress::GetCountry()
{
	return const_cast<char*>(COUNTRY);
}

const std::string&
FinnishAddress::GetFullAddress()
{
	std::string* str = &Address::GetString();
	str->append(GetStreet());
	str->append("\n");
	str->append(GetCity());
	str->append("\n");
	str->append(GetCountry());
	return *str;
}
