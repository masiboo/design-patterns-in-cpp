#ifndef __CALCULATOR_H
#define __CALCULATOR_H

namespace command
{
	class Calculator
	{
		public:
			void Operation(char pOp, int pOperand);
		private:
			int m_Curr;
	};
}

#endif // __CALCULATOR_H
