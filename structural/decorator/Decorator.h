#ifndef __DECORATOR_H
#define __DECORATOR_H

#include "Window.h"

namespace decorator
{
	class Decorator : public Window
	{
		public:
			Decorator( Window* pWin );
			virtual ~Decorator();

		public: // virtual method from Window
			void Draw();

		private:
			Window* m_Window;
	};

	class HorizontalScrollBar : public Decorator
	{
		public:
			HorizontalScrollBar( Window* pWin );
			void Draw();
	};

	class VerticalScrollBar : public Decorator
	{
		public:
			VerticalScrollBar( Window* pWin );
			void Draw();
	};
}

#endif // __DECORATOR_H
