CC = g++ -O3 -Wall -pedantic-errors
target = RunApp

RunApp: RunApp.o
	$(CC) -o RunApp RunApp.o

RunApp.o: stack.h RunApp.cpp
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
