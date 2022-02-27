#ifndef __CALCULATOR_COMMAND_H
#define __CALCULATOR_COMMAND_H

#include "Command.h"

namespace command
{
	class Calculator;

	class CalculatorCommand : public Command
	{
		public:
			CalculatorCommand(Calculator* pCalc, char pOp,
							int pOperand);
			~CalculatorCommand();

		public:
			void SetOperator( int pOp );
			void SetOperand( int pOperand );

		public: // Virtual method from Command
			void Execute();
			void UnExecute();

		private:
			char Undo( char pOp );

		private:
			char m_Op;
			int m_Operand;
			Calculator* m_Calc;
	};
}

#endif // __CALCULATOR_COMMAND_H

