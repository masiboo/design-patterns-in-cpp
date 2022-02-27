#include "GraphicChar.h"
#include <iostream>

using namespace flyweight;
using std::cout;
using std::endl;

GraphicChar::~GraphicChar()
{
	delete m_Font;
}

GraphicChar::GraphicChar(char pChar, string pFont)
{
	m_Char = pChar;
	m_Font = new string(pFont);
}

// static
void GraphicChar::PrintAtPosition(GraphicChar* pGrCh, int pX, int pY)
{
	cout<<"Printing "<<pGrCh->m_Char<<" in "<<*(pGrCh->m_Font)<<" at position {"<<pX<<"}"<<" {"<<pY<<"}"<<endl;
}
