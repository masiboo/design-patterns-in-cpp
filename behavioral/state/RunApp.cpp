#include "Context.h"

using namespace state;

int main(int argc, char* argv[])
{
	DrawingController* dc = new DrawingController();
	Point p1(3.0, 5.0);
	Point p2(6.0, 10.0);
	dc->MouseDown(p1);
	dc->MoveTo(p2);
	delete dc;
}
