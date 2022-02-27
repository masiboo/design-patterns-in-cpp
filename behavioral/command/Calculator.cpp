#include <iostream>
#include "Calculator.h"

using namespace std;
using namespace command;

void Calculator::Operation(char pOp, int pOperand)
{
	switch(pOp)
	{
		case '+': m_Curr += pOperand; break;
		case '-': m_Curr -= pOperand; break;
		case '*': m_Curr *= pOperand; break;
		case '/': m_Curr /= pOperand; break;
	}

	cout<<"Current value = "<<m_Curr<<" (following "<<pOp<<" "<<pOperand<<") "<<endl;
}
