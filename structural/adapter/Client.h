#ifndef __CLIENT_H
#define __CLIENT_H

class Existing;

namespace adapter
{
	class Client
	{
		public:
			Client();
			~Client();

		public:
			void ClientMethod(Existing& pExisting);

	};
}

#endif // __CLIENT_H
