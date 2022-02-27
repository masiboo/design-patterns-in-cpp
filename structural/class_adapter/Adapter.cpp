#include "Adapter.h"

using namespace adapter;

Adapter::Adapter()
	:
	Adaptee1(),
	Adaptee2()
{
}

Adapter::~Adapter()
{
}

// Wraps the functionalities of the Adaptee classes.
void Adapter::AdaptedMethod()
{
	ForeignMethod1();
	ForeignMethod2();
}
