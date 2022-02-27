#ifndef __PARTICIPANT_H
#define __PARTICIPANT_H

#include <string>
#include "Chatroom.h"

using std::string;

namespace mediator
{
	class Chatroom;

	class Participant
	{
		public:
			Participant(const char* pName);
			~Participant();

		public:
			string& Name();
			void SetChatroom( Chatroom& pChatroom );
			Chatroom& GetChatroom();
			void Send( string& to, string& pMsg );
			virtual void Receive( string& from,  string& pMsg );
			
		private:
			string* m_Name;
			Chatroom* m_Chatroom;
	};
}

#endif // __PARTICIPANT_H
