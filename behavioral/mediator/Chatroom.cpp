#include "Chatroom.h"
#include "Participant.h"

using namespace mediator;

Chatroom::Chatroom()
{
	m_Participants = new map<string, Participant*>();
}

Chatroom::~Chatroom()
{
	delete m_Participants;
}

void Chatroom::Register(Participant& participant)
{
	if( (*m_Participants)[participant.Name()] == NULL )
	{
		(*m_Participants)[participant.Name()] = &participant;
	}

	participant.SetChatroom( *this );
}

void Chatroom::Send(string& from, string& to, string& message)
{
	Participant* pto = (*m_Participants)[to];

	if ( pto != NULL )
	{
		pto->Receive(from, message);
	}
}
