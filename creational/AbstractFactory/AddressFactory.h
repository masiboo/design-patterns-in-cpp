#ifndef __ADDRESS_FACTORY_H
#define __ADDRESS_FACTORY_H

namespace abs_factory
{
	class Address;

	class AddressFactory
	{
		public:
			virtual Address* CreateAddress() = 0;
	};
}

#endif // __ADDRESS_FACTORY_H
