CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: RunApp.cpp DrawingAPI.cpp Shape.h
	${CC} -o $(target) RunApp.cpp DrawingAPI.cpp Shape.h -g

clean:
	rm -f RunApp
