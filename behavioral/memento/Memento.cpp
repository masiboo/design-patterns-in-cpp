#include "Memento.h"

using namespace memento;

Memento::Memento(string* pName, 
				 string* pPhone,
				 double pBudget)
{
	m_Name = new string( *pName );
	m_Phone = new string( *pPhone );
	m_Budget = pBudget;
}

Memento::~Memento()
{
	delete m_Name;
	delete m_Phone;
}

string* Memento::Name()
{
	return m_Name;
}

string* Memento::Phone()
{
	return m_Phone;
}

double Memento::Budget()
{
	return m_Budget;
}
