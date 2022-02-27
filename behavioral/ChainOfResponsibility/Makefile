CC = g++ -O3 -Wall -pedantic-errors
target = RunApp

RunApp: Purchase.o ConcreteApprover.o RunApp.o
	$(CC) -o RunApp Purchase.o ConcreteApprover.o RunApp.o

Purchase.o: Purchase.h Purchase.cpp 
	$(CC) -c Purchase.cpp

ConcreteApprover.o: ConcreteApprover.h ConcreteApprover.cpp
	$(CC) -c ConcreteApprover.cpp

RunApp.o: RunApp.cpp
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
