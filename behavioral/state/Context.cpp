#include "Context.h"
#include "ConcreteState.h"

using namespace state;

DrawingController::DrawingController() 
{ 
	selectPenTool(); 
}

void DrawingController::MoveTo(const Point& inP) 
{
	currentTool->MoveTo(inP);
}

void DrawingController::MouseDown(const Point& inP)
{
	currentTool->MouseDown(inP);
}

void DrawingController::MouseUp(const Point& inP)
{
	currentTool->MouseUp(inP);
}
 
void DrawingController::selectPenTool()
{
	currentTool.reset(new PenTool());
}
 
// End of file

