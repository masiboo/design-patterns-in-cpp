#ifndef __CONCRETE_STATE_H
#define __CONCRETE_STATE_H

#include "State.h"
#include "Point.h"
#include <iostream>

using std::auto_ptr;

namespace state
{
	class PenTool : public AbstractTool 
	{
		public:
			PenTool();
			~PenTool();
			void MoveTo(const Point& inP);
			void MouseDown(const Point& inP);
			void MouseUp(const Point& inP);
		
		private:
			bool mMouseIsDown;
			Point mLastP;
	};

}

#endif // __CONCRETE_STATE_H

