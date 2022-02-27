CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: CommandHistory.cpp RunApp.cpp CommandHistory.h
	${CC} -o $(target) RunApp.cpp CommandHistory.cpp -g
