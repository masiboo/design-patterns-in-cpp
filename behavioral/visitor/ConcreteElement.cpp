#include "ConcreteElement.h"
#include "Visitor.h"

using namespace visitor;

Wheel::Wheel(const string &name) 
{
	m_Name = name;
}

Wheel::~Wheel()
{
}

string& Wheel::getName() 
{
	return m_Name;
}

void Wheel::accept(Visitor& visitor) 
{
	visitor.visit(*this);
}

void Engine::accept(Visitor& visitor) 
{
	visitor.visit(*this);
}

void Body::accept(Visitor& visitor) 
{
	visitor.visit(*this);
}

Car::Car()
{
	elements.push_back( new Wheel("front left") );
	elements.push_back( new Wheel("front right") );
	elements.push_back( new Wheel("back left") );
	elements.push_back( new Wheel("back right") );
	elements.push_back( new Body() );
	elements.push_back( new Engine() );
}

Car::~Car()
{
	while ( !elements.empty() )
	{
		list<CarElement*>::iterator it = elements.begin();
		CarElement *p = *(it);
		delete p;
		elements.erase( it );
	}
}


list<CarElement*>& Car::getElements()
{
	return elements;
}


