#include "Caretaker.h"
#include "Memento.h"

using namespace memento;

Caretaker::Caretaker()
{
	m_Memento = NULL;
}

Caretaker::~Caretaker()
{
	if( m_Memento )
	{
		delete m_Memento;
	}
}

Memento& Caretaker::GetMemento()
{
	return *m_Memento;
}

void Caretaker::SetMemento( Memento* pMemento )
{
	m_Memento = pMemento;
}
