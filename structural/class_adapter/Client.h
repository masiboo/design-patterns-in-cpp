#ifndef __CLIENT_H
#define __CLIENT_H

namespace adapter
{
	class Adapter;

	class Client
	{
		public:
			Client();
			~Client();

		public:
			void ClientMethod(Adapter& pAdapter);

	};
}

#endif // __CLIENT_H
