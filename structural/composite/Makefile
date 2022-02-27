CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: RunApp.cpp Component.h Component.cpp
	${CC} -o $(target) RunApp.cpp Component.cpp -g

clean:
	rm -f RunApp
