#include <iostream>
#include "BooleanExpression.h"
#include "OrExpression.h"
#include "AndExpression.h"
#include "VariableExpression.h"

using namespace std;
using namespace interpreter;

int main(int argc, char* argv[])
{
    BooleanExpression* expression;
    Context context;
	
	VariableExpression* x = new VariableExpression("X");
    VariableExpression* y = new VariableExpression("Y");

    context.AssignX(x, true);
    context.AssignY(y, false);

	expression = new AndExpression( x, y );

    bool result = expression->Evaluate(context);

    printf("Overall result is %d\n", result);

	delete x;
	delete y;
	delete expression;

	return 0;
}
