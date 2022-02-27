#include <iostream>
#include "ConcreteClass.h"

using namespace std;
using namespace template_method;

void Monopoly::initializeGame()
{
	m_IsOver = false;
	cout<<"Initializing Monopoly.\n";
}

void Monopoly::makePlay( int player )
{
	m_Player = player;
	cout<<"Player id: "<<player<<" playing.\n";	
	
	if( player == 1 )
	{
		m_IsOver = true;
	}
}

bool Monopoly::endOfGame()
{
	return m_IsOver;
}

void Monopoly::printWinner()
{
	cout<<"Winner is: "<<m_Player<<endl;
}

void Chess::initializeGame()
{
	m_IsOver = false;
	cout<<"Initializing Chess.\n";
}

void Chess::makePlay( int player )
{
	m_Player = player;
	cout<<"Player id: "<<player<<" playing.\n";
	if( player >= 1 )
	{
		m_IsOver = true;
	}
}

bool Chess::endOfGame()
{
	return m_IsOver;
}

void Chess::printWinner()
{
	cout<<"Winner is: "<<m_Player<<endl;
}


