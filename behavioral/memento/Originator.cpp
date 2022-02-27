#include <iostream>

#include "Originator.h"
#include "Memento.h"

using namespace std;
using namespace memento;

Originator::Originator()
{
	m_Name = NULL;
	m_Phone = NULL;
}

Originator::~Originator()
{
	delete m_Name;
	delete m_Phone;
}

void Originator::DisplayCurrentContent()
{
	cout<<"\n Current Content: \n\n";
	cout<<"Name   : "<<*m_Name<<endl;
	cout<<"Phone  : "<<*m_Phone<<endl;
	cout<<"Budget : "<<m_Budget<<endl;
}

void Originator::SetName( const char* pName)
{
	delete m_Name;
	m_Name = NULL;
	m_Name = new string( pName );
}

void Originator::SetPhone( const char* pPHone )
{
	delete m_Phone;
	m_Phone = NULL;
	m_Phone = new string( pPHone );
}

void Originator::SetBudget( double pBudget)
{
	m_Budget = pBudget;
}

string& Originator::Name()
{
	return *m_Name;
}

string& Originator::Phone()
{
	return *m_Phone;
}

double Originator::Budget()
{
	return m_Budget;
}

Memento* Originator::SaveMemento()
{
	cout<<"\n Saving state -- \n";
	return new Memento(m_Name, m_Phone, m_Budget);
}

void Originator::ReStoreMemento( Memento& pMemento )
{
	cout<<"\nRestoring state --\n";
	if( m_Name )
	{
		delete m_Name;
	}
	m_Name = NULL;
	m_Name = new string( *pMemento.Name() );

	if( m_Phone )
	{
		delete m_Phone;
	}
	m_Phone = new string( *pMemento.Phone() );

	m_Budget = pMemento.Budget();
}
