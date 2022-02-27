#include <iostream>
#include "ConcreteStrategy.h"

using namespace std;
using namespace strategy;

void ConcreteStrategyA::AlgorithmInterface()
{
	cout<<"Called AlgorithmInterface of ConcreteStrategyA"<<endl;
}

void ConcreteStrategyB::AlgorithmInterface()
{
	cout<<"Called AlgorithmInterface of ConcreteStrategyB"<<endl;
}
