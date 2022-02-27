CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: Address.cpp RunApp.cpp
	${CC} -o $(target) Address.cpp RunApp.cpp -g

clean:
	rm -f RunApp
