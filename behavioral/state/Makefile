CC = g++ -O3 -Wall -pedantic-errors
target = RunApp

RunApp: Point ConcreteState Context RunApp.o
	$(CC) -o RunApp Point.o ConcreteState.o Context.o RunApp.o

Point: Point.h Point.cpp 
	$(CC) -c Point.cpp

ConcreteState: ConcreteState.h ConcreteState.cpp
	$(CC) -c ConcreteState.cpp

Context: Context.h Context.cpp
	$(CC) -c Context.cpp

RunApp.o: RunApp.cpp
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
