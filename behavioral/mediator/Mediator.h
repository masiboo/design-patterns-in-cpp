#ifndef __MEDIATOR_H
#define __MEDIATOR_H

#include <string>

using std::string;

namespace mediator
{
	class Participant;

	class Mediator
	{
		public:
			virtual void Register(Participant& participant) = 0;
			virtual void Send(string& from, string& to, string& message) = 0;
	};
}

#endif // __MEDIATOR_H
