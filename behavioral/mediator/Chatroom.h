#ifndef __CHATROOM_H
#define __CHATROOM_H

#include <map>
#include "Mediator.h"

using std::map;

namespace mediator
{
	class Participant;

	class Chatroom: public Mediator
	{
		public:
			Chatroom();
			~Chatroom();
			void Register(Participant& participant);
			void Send(string& from, string& to, string& message);
		private:
			map<string, Participant*> *m_Participants;	
	};
}

#endif // __CHATROOM_H
