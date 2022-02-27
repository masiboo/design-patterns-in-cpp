#include "Adapter.h"
#include "Adaptee.h"

using namespace adapter;

Adapter::Adapter()
{
	m_Adaptee = new Adaptee();
}

Adapter::~Adapter()
{
	delete m_Adaptee;
}

void Adapter::ExistingMethod()
{
	m_Adaptee->ForeignMethod();
}
