CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: RunApp.cpp SecureProxy.cpp RealClient.cpp ProxyInterface.h
	${CC} -o $(target) RunApp.cpp SecureProxy.cpp RealClient.cpp -g

clean:
	rm -f RunApp
