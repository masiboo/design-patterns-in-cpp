#ifndef __FINNISH_ADDRESS_H
#define __FINNISH_ADDRESS_H

#include <string>
#include "Address.h"

namespace abs_factory
{

	class FinnishAddress : public Address
	{
		public:
			FinnishAddress();
			~FinnishAddress();

		public: // Virtual method from Address
			char* GetCountry();

		public:
			const std::string& GetFullAddress();

	};

}

#endif // __FINNISH_ADDRESS_H
