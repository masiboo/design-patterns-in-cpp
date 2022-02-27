CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: RunApp.cpp Decorator.cpp Window.cpp
	${CC} -o $(target) RunApp.cpp Decorator.cpp Window.cpp -g

clean:
	rm -f RunApp
