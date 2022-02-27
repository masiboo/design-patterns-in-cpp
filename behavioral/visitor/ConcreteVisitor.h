#ifndef __CONCRETE_VISITOR_H
#define __CONCRETE_VISITOR_H

#include <list>
#include "Visitor.h"
#include "ConcreteElement.h"

using std::list;

namespace visitor
{
	class PrintVisitor : public Visitor 
	{
		public:
			PrintVisitor(){}
			void visit(Wheel& wheel);
			void visit(Engine& engine);
			void visit(Body& engine);
			void visitCar(Car& car);
	};

	class DoVisitor : public Visitor 
	{
		public:
			void visit(Wheel& wheel);
			void visit(Engine& engine);
			void visit(Body& engine);
			void visitCar(Car& car);
	};
}

#endif // __CONCRETE_VISITOR_H
