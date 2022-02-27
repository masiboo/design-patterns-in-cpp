#include <iostream>

#include "Adaptee.h"

using namespace std;
using namespace adapter;

Adaptee1::Adaptee1()
{
}

Adaptee1::~Adaptee1()
{
}

void Adaptee1::ForeignMethod1()
{
	cout<<"Foreign adapted method: "<<__FUNCTION__<<endl;
}

Adaptee2::Adaptee2()
{
}

Adaptee2::~Adaptee2()
{
}

void Adaptee2::ForeignMethod2()
{
	cout<<"Foreign adapted method: "<<__FUNCTION__<<endl;
}
