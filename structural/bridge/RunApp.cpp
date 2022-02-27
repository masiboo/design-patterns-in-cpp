#include <iostream>
#include "DrawingAPI.h"
#include "Shape.h"

using namespace std;
using namespace bridge;

// Bridge design patterns decouple an abstraction from its implementation so that two can vary
// independly. In this example, Shape and DrawingAPI abstract classes decoupled. 
// DrawingAPI1 and DrawingAPI2 are two implementors for DrawingAPI. CircleShape is
// concrete template class which creates a different DrawingAPI from the given template.

int main(int argc, char* argv[])
{
	Shape* shapes[2];
	int i = 0;

	// Construction the CircleShape with different drawing API
	shapes[0] = new CircleShape<DrawingAPI1>(1, 2, 3);
	shapes[1] = new CircleShape<DrawingAPI2>(5, 7, 11);

	for(; i<2; i++)
	{
		shapes[i]->ResizeByPercentage(2.5);
        shapes[i]->Draw();
	}

	for(i=0; i<2; i++)
	{
		delete shapes[i];
	}

	return 0;
}

// End of file
