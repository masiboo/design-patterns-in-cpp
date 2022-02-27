#ifndef __ELEMENT_H
#define __ELEMENT_H

#include "Visitor.h"

namespace visitor
{
	class Element
	{
		public:
			virtual void accept(Visitor &visitor) = 0;
	};

	class CarElement : public Element
	{
		public:
			virtual ~CarElement()
			{
			}
			virtual void accept(Visitor &visitor) = 0;
	};
}

#endif // __ELEMENT_H
