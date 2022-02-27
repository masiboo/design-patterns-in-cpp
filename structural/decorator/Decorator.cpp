#include "Decorator.h"
#include <iostream>

using std::cout;
using decorator::Decorator;
using decorator::HorizontalScrollBar;
using decorator::VerticalScrollBar;

Decorator::Decorator( Window* pWin ) :
	m_Window( pWin )
{
}

Decorator::~Decorator()
{
	delete m_Window;
	m_Window = NULL;
}

void Decorator::Draw()
{
	m_Window->Draw();
}

HorizontalScrollBar::HorizontalScrollBar( Window* pWin ) : 
	Decorator( pWin )
{
}

void HorizontalScrollBar::Draw()
{
	Decorator::Draw();
	cout<<"Drawing Horizontal Bar...\n";
}

VerticalScrollBar::VerticalScrollBar( Window* pWin ) : 
	Decorator( pWin )
{
}

void VerticalScrollBar::Draw()
{
	Decorator::Draw();
	cout<<"Drawing Vertical Scroll Bar...\n";
}



