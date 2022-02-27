CC = g++ -O3 -pedantic -pedantic-errors -Wall
target = mvc_observer
LIBS = `pkg-config --libs gtk+-2.0`
INCLUDE = `pkg-config --cflags gtk+-2.0`


mvc_observer : GenericModel.cpp View.cpp Observable.cpp Controller.cpp TestApp.cpp
	$(CC) -o mvc_observer GenericModel.cpp View.cpp Observable.cpp Controller.cpp TestApp.cpp $(INCLUDE) \
	$(LIBS)
