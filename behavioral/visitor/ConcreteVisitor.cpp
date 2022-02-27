#include <iostream>
#include "ConcreteVisitor.h"

using namespace std;
using namespace visitor;

void PrintVisitor::visit(Wheel& wheel) 
{ 
	cout << "Visiting " << wheel.getName() << " wheel" << endl;
}

void PrintVisitor::visit(Engine& engine) 
{
	cout << "Visiting engine" << endl;
}

void PrintVisitor::visit(Body& body) 
{
	cout << "Visiting body" << endl;
}

void PrintVisitor::visitCar(Car& car) 
{
	cout << endl << "Visiting car" << endl;
	list<CarElement*> & lst = car.getElements();
	list<CarElement*>::iterator it = lst.begin();
	while ( it != lst.end() )
	{
		(*it)->accept(*this);     // this issues the callback i.e. to this from the element
		++it;
	}
	cout << "Visited car" << endl;
}

void DoVisitor::visit(Wheel& wheel) 
{
	cout << "Kicking my " << wheel.getName() << endl;
}

void DoVisitor::visit(Engine& engine) 
{
	cout << "Starting my engine" << endl;
}

void DoVisitor::visit(Body& body) 
{
	cout << "Moving my body" << endl;
}

void DoVisitor::visitCar(Car& car) 
{
	cout << endl << "Starting my car" << endl;
	list<CarElement*> & lst = car.getElements();
	list<CarElement*>::iterator it = lst.begin();
	while ( it != lst.end() )
	{
		(*it)->accept(*this);     // this issues the callback i.e. to this from the element
		++it;
	}
	cout << "Stopped car" << endl;
}
