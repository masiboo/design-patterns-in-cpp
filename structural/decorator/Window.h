#ifndef __WINDOW_H
#define __WINDOW_H

#ifndef NULL
#define NULL 0
#endif // NULL

namespace decorator
{
	class Window
	{
		public:
			virtual void Draw() = 0;
			virtual ~Window(){ }
	};

	class SimpleWindow : public Window
	{
		public:
			SimpleWindow(int pW, int pH);
			void Draw();

		private:
			int m_W;
			int m_H;
	};
}

#endif // __WINDOW_H
