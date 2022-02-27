#include <iostream>
#include "Context.h"
#include "ConcreteStrategy.h"

using namespace strategy;

Context::Context( Strategy* pStrategy )
{
	m_Strategy = pStrategy;
}

Context::~Context()
{
	if( m_Strategy )
	{
		delete m_Strategy;
	}
	m_Strategy = NULL;
}

void Context::ContextInterface()
{
	m_Strategy->AlgorithmInterface();
}
