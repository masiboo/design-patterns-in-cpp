CC = g++ -O3 -Wall -pedantic-errors
target = RunApp

RunApp: Participant Chatroom RunApp.o
	$(CC) -o RunApp Participant.o Chatroom.o RunApp.o

Participant: Participant.h Participant.cpp 
	$(CC) -c Participant.cpp

Chatroom: Chatroom.h Chatroom.cpp
	$(CC) -c Chatroom.cpp

RunApp.o: RunApp.cpp
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
