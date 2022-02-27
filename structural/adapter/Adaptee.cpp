#include <iostream>

#include "Adaptee.h"

using namespace std;
using namespace adapter;

Adaptee::Adaptee()
{
}

Adaptee::~Adaptee()
{
}

void Adaptee::ForeignMethod()
{
	cout<<"Foreign adapted method.\n";
}
