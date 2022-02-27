#include <iostream>
#include "ConcreteState.h"

using namespace std;
using namespace state;

PenTool::PenTool() : mMouseIsDown(false)
{
}

PenTool::~PenTool()
{
}

void PenTool::MoveTo(const Point& inP) 
{
	if(mMouseIsDown) 
	{
		cout<<"Line drawn from ("<<mLastP.X()<<", "<<mLastP.Y()<<")"<<" to ("<<const_cast<Point&>(inP).X()<<", "<<const_cast<Point&>(inP).Y()<<")"<<endl;
	}
	
	mLastP = inP;
}

void PenTool::MouseDown(const Point& inP)
{
	mMouseIsDown = true;
	mLastP = inP;
}

void PenTool::MouseUp(const Point& inP)
{ 
	mMouseIsDown = false;
}

// End of file

