#include <iostream>
#include "ConcreteStrategy.h"
#include "Context.h"

using std::auto_ptr;
using namespace strategy;

int main( int argc, char* argv[] )
{
	auto_ptr<Context> context;
	context = auto_ptr<Context> ( new Context( new ConcreteStrategyA() ) );
	context->ContextInterface();

	context = auto_ptr<Context> ( new Context( new ConcreteStrategyB() ) );
	context->ContextInterface();

	return 0;
}
