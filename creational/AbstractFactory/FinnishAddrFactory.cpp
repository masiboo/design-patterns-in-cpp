#include "FinnishAddrFactory.h"
#include "FinnishAddress.h"

using namespace abs_factory;

Address* FinnishAddressFactory::CreateAddress()
{
	Address* addr = new FinnishAddress();
	return addr;
}
