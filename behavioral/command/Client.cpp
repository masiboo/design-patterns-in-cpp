#include <iostream>
#include "Client.h"
#include "CalculatorCommand.h"
#include "Calculator.h"

using namespace std;
using namespace command;

Client::Client()
{
	m_Calc = new Calculator();
	m_CommVec = new vector<Command*>();
	m_Current = 0;
}

Client::~Client()
{
	delete m_Calc;
	delete m_CommVec;
}

void Client::Redo( int pLevels )
{
	cout<<"\n---- Redo "<< pLevels << endl;

	// Perform redo operations
	for (int i = 0; i < pLevels; i++)
	{
		if( m_Current < (int)m_CommVec->size() )
		{
			Command* command = m_CommVec->at(m_Current++);
			command->Execute();
		}
	}
}

void Client::Undo( int pLevels )
{
	cout<<"\n---- Undo "<< pLevels << endl;

	// Perform redo operations
	for (int i = 0; i < pLevels; i++)
	{
		if( m_Current > 0 )
		{
			Command* command = m_CommVec->at(--m_Current);
			command->UnExecute();
		}
	}
}

void Client::Compute( char pOp, int pOperand )
{
	Command* comm = new CalculatorCommand( m_Calc, pOp, pOperand );
	comm->Execute();
	m_CommVec->push_back( comm );
	m_Current++;
}

// End of file

