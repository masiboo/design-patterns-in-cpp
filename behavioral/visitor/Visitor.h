#ifndef __VISITOR_H
#define __VISITOR_H

namespace visitor
{
	class Wheel;
	class Engine;
	class Body;
	class Car;

	class Visitor
	{
		public:
			virtual void visit(Wheel& wheel) = 0;
			virtual void visit(Engine& engine) = 0;
			virtual void visit(Body& body) = 0;
			virtual void visitCar(Car& car) = 0;
	};
}

#endif // __VISITOR
