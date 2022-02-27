#ifndef ANDEXPRESSION_H
#define ANDEXPRESSION_H

#include "BooleanExpression.h"

namespace interpreter
{
	class AndExpression : public BooleanExpression
	{
		public:
			explicit AndExpression(BooleanExpression*, BooleanExpression*);
			virtual ~AndExpression();

			virtual bool Evaluate(Context&);

		private:
			BooleanExpression* _operand1;
			BooleanExpression* _operand2;
	};
}

#endif // ANDEXPRESSION_H
