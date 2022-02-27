#include "Chatroom.h"
#include "Participant.h"

using namespace mediator;

int main(int argc, char* argv[])
{
	Chatroom* chatroom = new Chatroom();
	Participant* George = new Participant("George");
	Participant* Yoko = new Participant("Yoko");

	chatroom->Register(*George);
    chatroom->Register(*Yoko);
	
	// Chatting participants
	string str1("George");
	string str2("Hi George!");
	Yoko->Send (str1, str2);

	delete chatroom;
	delete George;
	delete Yoko;

	return 0;
}
