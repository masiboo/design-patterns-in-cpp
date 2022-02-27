CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: RunApp.cpp Property.cpp LocalizeFacade.cpp Nation.cpp LocalizeFacade.h
	${CC} -o $(target) RunApp.cpp Property.cpp LocalizeFacade.cpp Nation.cpp -g

clean:
	rm -f RunApp
