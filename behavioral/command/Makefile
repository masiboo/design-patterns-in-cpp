CC = g++ -O3 -Wall -pedantic-errors
target = RunApp

RunApp: CalculatorCommand.o Calculator.o Client.o RunApp.o
	$(CC) -o RunApp CalculatorCommand.o Calculator.o Client.o RunApp.o

CalculatorCommand.o: CalculatorCommand.h CalculatorCommand.cpp 
	$(CC) -c CalculatorCommand.cpp

Calculator.o: Calculator.h Calculator.cpp
	$(CC) -c Calculator.cpp

Client.o: Client.cpp Client.h 
	$(CC) -c Client.cpp

RunApp.o: RunApp.cpp 
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
