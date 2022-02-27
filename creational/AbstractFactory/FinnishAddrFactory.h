#ifndef __FINNISH_ADDRESS_FACTORY_H
#define __FINNISH_ADDRESS_FACTORY_H

#include "AddressFactory.h"

namespace abs_factory
{

	class Address;

	class FinnishAddressFactory : public AddressFactory
	{
		public: // virtual function from Address.
			Address* CreateAddress();
	};

}

#endif // __FINNISH_ADDRESS_FACTORY_H
