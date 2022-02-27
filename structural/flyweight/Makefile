CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: RunApp.cpp GraphicChar.cpp GraphicChar.h GraphicCharFactory.cpp GraphicCharFactory.h
	${CC} -o $(target) RunApp.cpp GraphicChar.cpp GraphicCharFactory.cpp -g

clean:
	rm -f RunApp
