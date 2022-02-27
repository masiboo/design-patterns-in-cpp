#ifndef __CONCRETE_STRATEGY_H
#define __CONCRETE_STRATEGY_H

#include "Strategy.h"

namespace strategy
{
	class ConcreteStrategyA : public Strategy
	{
		public:
			void AlgorithmInterface();
	};

	class ConcreteStrategyB : public Strategy
	{
		public:
			void AlgorithmInterface();
	};	
}

#endif // __CONCRETE_STRATEGY_H
