CC = g++ -O3 -Wall -pedantic-errors -ggdb
target = RunApp

RunApp: AndExpression.o BooleanExpression OrExpression VariableExpression Context RunApp.o
	$(CC) -o RunApp AndExpression.o BooleanExpression.o OrExpression.o Context.o VariableExpression.o RunApp.o

AndExpression.o: AndExpression.h AndExpression.cpp
	$(CC) -c AndExpression.cpp

BooleanExpression: BooleanExpression.h BooleanExpression.cpp
	$(CC) -c BooleanExpression.cpp

OrExpression: OrExpression.h OrExpression.cpp 
	$(CC) -c OrExpression.cpp

VariableExpression: VariableExpression.h VariableExpression.cpp
	$(CC) -c VariableExpression.cpp

Context: Context.h Context.cpp
	$(CC) -c Context.cpp

RunApp.o: RunApp.cpp
	$(CC) -c RunApp.cpp

clean:
	rm -f *.o RunApp
