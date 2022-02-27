#ifndef __SECURE_PROXY_H
#define __SECURE_PROXY_H

#include "ProxyInterface.h"

namespace proxy
{
	class RealClient;

	class SecureProxy : public ProxyInterface
	{
		public:
			SecureProxy(const char* pPasswd);
			~SecureProxy();

		public:
			const string& GetAccountNumber();

		private:
			RealClient* m_Client;
			string*		m_Passwd;
	};
}

#endif // __SECURE_PROXY_H
