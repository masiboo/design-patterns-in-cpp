#ifndef __PROXY_INTERFACE_H
#define __PROXY_INTERFACE_H

#include <string>

using std::string;

namespace proxy
{
	class ProxyInterface
	{
		public:
			virtual const string& GetAccountNumber() = 0;
			virtual ~ProxyInterface(){ }
	};
}
#endif // __PROXY_INTERFACE_H
