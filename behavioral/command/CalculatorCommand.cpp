#include "CalculatorCommand.h"
#include "Calculator.h"

using namespace command;

CalculatorCommand::CalculatorCommand(Calculator* pCalc, char pOp,
									 int pOperand)
{
	m_Op = pOp;
	m_Operand = pOperand;
	m_Calc = pCalc;
}

CalculatorCommand::~CalculatorCommand()
{
	if( m_Calc )
	{
		delete m_Calc;
	}
	m_Calc = 0;
}

void CalculatorCommand::SetOperator( int pOp )
{
	m_Op = pOp;
}

void CalculatorCommand::SetOperand( int pOperand )
{
	m_Operand = pOperand;
}

// Virtual method from Command
void CalculatorCommand::Execute()
{
	m_Calc->Operation(m_Op, m_Operand);
}

// Virtual method from Command
void CalculatorCommand::UnExecute()
{
	m_Calc->Operation( Undo(m_Op), m_Operand);
}

char CalculatorCommand::Undo( char pOp )
{
	char undo;

	switch( pOp )
	{
		case '+': undo = '-'; break;
		case '-': undo = '+'; break;
		case '*': undo = '/'; break;
		case '/': undo = '*'; break;
		default : undo = ' '; break;
	}
	
	return undo;
}

// End of file

