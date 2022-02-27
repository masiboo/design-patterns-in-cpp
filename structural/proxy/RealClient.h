#ifndef __REAL_CLIENT_H
#define __REAL_CLIENT_H

#include "ProxyInterface.h"

namespace proxy
{
	class RealClient : public ProxyInterface
	{
		public:
			RealClient();
			~RealClient();

		public:
			const string& GetAccountNumber();

		private:
			string* m_AccNum;
	};
}

#endif // __REAL_CLIENT_H
