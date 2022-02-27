#include <iostream>
#include "ConcreteElement.h"
#include "ConcreteVisitor.h"

using namespace visitor;
using std::auto_ptr;

int main(int argc, char* argv[])
{
	Car car;
	auto_ptr<Visitor> printVisitor( new PrintVisitor );
	auto_ptr<Visitor> doVisitor( new DoVisitor );
	printVisitor->visitCar(car);
	doVisitor->visitCar(car);
	return 0;
}
