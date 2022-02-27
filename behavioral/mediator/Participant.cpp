#include <iostream>

#include "Participant.h"

using namespace std;
using namespace mediator;

Participant::Participant(const char* pName)
{
	m_Name = new string( pName );	
}

Participant::~Participant()
{
	delete m_Name;
}

string& Participant::Name()
{
	return *m_Name;
}

void Participant::SetChatroom( Chatroom& pChatroom )
{
	m_Chatroom = &pChatroom;
}

Chatroom& Participant::GetChatroom()
{
	return *m_Chatroom;
}

void Participant::Send( string& to, string& pMsg )
{
	m_Chatroom->Send( *m_Name, to, pMsg );
}

void Participant::Receive( string& from,  string& pMsg )
{
	cout<<from<<" to "<<*m_Name<<" '"<< pMsg <<"' "<<endl;
}

