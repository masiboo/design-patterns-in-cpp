CC = g++ -O3 -Wall -pedantic-errors
target = RunApp

RunApp: ConcreteClass RunApp.o
	$(CC) -o RunApp ConcreteClass.o RunApp.o

ConcreteClass: ConcreteClass.h ConcreteClass.cpp 
	$(CC) -c ConcreteClass.cpp

RunApp.o: RunApp.cpp
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
