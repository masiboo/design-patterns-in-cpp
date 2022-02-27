#include "Window.h"
#include <iostream>

using std::cout;
using decorator::SimpleWindow;

SimpleWindow::SimpleWindow(int pW, int pH) :
	m_W( pW ),
	m_H( pH )
{
}

void SimpleWindow::Draw()
{
	cout<<"Drawing Window -> size = "<<m_W<<"x"<<m_H<<"\n";
}

// End of file
