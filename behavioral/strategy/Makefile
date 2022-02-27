CC = g++ -O3 -Wall -pedantic-errors
target = RunApp

RunApp: ConcreteStrategy Context RunApp.o
	$(CC) -o RunApp ConcreteStrategy.o Context.o RunApp.o

ConcreteStrategy: ConcreteStrategy.h ConcreteStrategy.cpp 
	$(CC) -c ConcreteStrategy.cpp

Context: Context.h Context.cpp
	$(CC) -c Context.cpp

RunApp.o: RunApp.cpp
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
