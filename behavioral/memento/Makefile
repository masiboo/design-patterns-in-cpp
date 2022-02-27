CC = g++ -O3 -Wall -pedantic-errors -g
target = RunApp

RunApp: Caretaker Memento Originator RunApp.o
	$(CC) -o RunApp Caretaker.o Memento.o Originator.o RunApp.o

Caretaker: Caretaker.cpp Caretaker.h
	$(CC) -c Caretaker.cpp

Memento: Memento.cpp Memento.h
	$(CC) -c Memento.cpp

Originator: Originator.h Originator.cpp
	$(CC) -c Originator.cpp

RunApp.o: RunApp.cpp
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
