#include "DrawingAPI.h"
#include <iostream>

using namespace std;
using namespace bridge;

void
DrawingAPI1::drawCircle(double x, double y,
						double radius)
{
	cout << "DrawingAPI1 -> circle at (" << x << "," << y << ") with radius =" << radius << endl;
}

void
DrawingAPI2::drawCircle(double x, double y,
						double radius)
{
	cout << "DrawingAPI2 -> circle at (" << x << "," << y << ") with radius =" <<  radius << endl;
}

// End of file
