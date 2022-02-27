#include "Decorator.h"

// Decorator design patterns allow new or additional behavior to be added
// to an existing class dynamically.
// In this example, SimpleWindow is the Concrete component derived from Window Component.
// Decorator is the base class for two different scroll bar. Decorator base class has
// composition to Window class and it calls SimpleWindow::Draw() method. Finally, decorator
// object is created with Vertical and Horizontal decorator. So we have the SimpleWindow
// with two new behavior.

using namespace decorator;

int main(int argc, char* argv[])
{
	SimpleWindow* w = new SimpleWindow(200, 100);
	HorizontalScrollBar* hs = new HorizontalScrollBar( w );
	Decorator* decorator = new VerticalScrollBar( hs );
	decorator->Draw();
	delete decoratorFinally, decorator
		object is created with Vertical and Horizontal decorator. So we have the SimpleWindow
		with two new behavior.;
}

// End of file
