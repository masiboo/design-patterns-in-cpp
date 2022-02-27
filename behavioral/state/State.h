#ifndef __STATE_H
#define __STATE_H

#include "Point.h"

namespace state
{
	class AbstractTool
	{
		public:
			virtual void MoveTo(const Point& inP) = 0;
			virtual void MouseDown(const Point& inP) = 0;
			virtual void MouseUp(const Point& inP) = 0;
	};
}

#endif // __STATE_H

