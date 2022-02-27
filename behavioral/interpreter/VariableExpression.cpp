#include <string.h>
#include "VariableExpression.h"

using namespace interpreter;

VariableExpression::VariableExpression(const char* name)
{
	m_Name = new char[strlen(name)+1];
    strcpy(m_Name,name);
}

VariableExpression::~VariableExpression(void)
{
	delete[] m_Name;
}

bool VariableExpression::Evaluate(Context& aContext)
{
    return aContext.Lookup(m_Name);
}

char* VariableExpression::getName()
{
    return m_Name;
}

// End of file

