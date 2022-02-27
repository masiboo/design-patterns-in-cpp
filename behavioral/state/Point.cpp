#include "Point.h"

using namespace state;

Point::Point(double pX=0.0, double pY=0.0)
{
	m_X = pX, m_Y = pY;
}

double Point::X()
{
	return m_X;
}

double Point::Y()
{
	return m_Y;
}

