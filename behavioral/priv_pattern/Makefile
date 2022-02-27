CC = g++ -O3 -pedantic -pedantic-errors -Wall
target: RunApp

RunApp: RunApp.cpp Document.cpp SaveHandler.cpp
	$(CC) -o $@ RunApp.cpp Document.cpp SaveHandler.cpp
