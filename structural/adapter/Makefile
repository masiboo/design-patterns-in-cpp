CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: RunApp.cpp Adapter.cpp Adaptee.cpp Client.cpp
	${CC} -o $(target) RunApp.cpp Adapter.cpp Adaptee.cpp Client.cpp -g

clean:
	rm -f RunApp
