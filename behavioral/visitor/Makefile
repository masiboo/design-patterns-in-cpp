CC = g++ -O3 -Wall -pedantic-errors
target = RunApp

RunApp: ConcreteElement ConcreteVisitor RunApp.o
	$(CC) -o RunApp ConcreteVisitor.o ConcreteElement.o RunApp.o

ConcreteVisitor: ConcreteVisitor.cpp ConcreteVisitor.h 
	$(CC) -c ConcreteVisitor.cpp

ConcreteElement: ConcreteElement.cpp ConcreteElement.h
	$(CC) -c ConcreteElement.cpp

RunApp.o: RunApp.cpp
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
