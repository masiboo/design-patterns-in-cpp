#ifndef __CONTEXT_H
#define __CONTEXT_H

#include "State.h"
#include <iostream>

using std::auto_ptr;

namespace state
{
	class DrawingController
	{
		public:
			DrawingController();
			void MoveTo(const Point& inP);
			void MouseDown(const Point& inP);
			void MouseUp(const Point& inP);
			void selectPenTool();

		private:
			auto_ptr<AbstractTool> currentTool;
	};
}

#endif // __CONTEXT_H
