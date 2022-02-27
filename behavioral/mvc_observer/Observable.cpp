#include <iostream>

#include "Observable.h"
#include "GenericObserver.h"
#include "GenericModel.h"

Observable::Observable() : m_RegObserver (NULL),
						   m_Model(NULL)
{
	m_RegObserver = new vector<GenericObserver*>();
}

Observable::~Observable()
{
	if( m_RegObserver )
	{
		delete m_RegObserver;
	}
	m_RegObserver = NULL;

	if( m_Model )
	{
		delete m_Model;
	}
	m_Model = NULL;
}

// Base class implemetation
void Observable::Register(const GenericObserver& p_Observer)
{
	if( m_RegObserver )
	{
		m_RegObserver->push_back(const_cast<GenericObserver*>(&p_Observer));
	}
}

void Observable::UnRegister(const GenericObserver& p_Observer)
{
	if( m_RegObserver && !m_RegObserver->empty() )
	{
		vector<GenericObserver*>::iterator it = m_RegObserver->begin();

		while(it != m_RegObserver->end())
		{
			GenericObserver* tmp = *it;
			if( tmp == &p_Observer )
			{
				m_RegObserver->erase(it);
				break;
			}
			it++;
		}
	}
}

void Observable::SendNotification()
{
	vector<GenericObserver*>::iterator it = m_RegObserver->begin();

	if(!m_Model)
	{
		m_Model = new GenericModel();
	}

	TModelData* tmpData = new TModelData[100];
	strcpy(DATA_CAST(tmpData), "Model has been changed.");

	m_Model->CreateModel(tmpData);
	delete[] tmpData;

	while(it != m_RegObserver->end())
	{
		GenericObserver* tmp = *it;
		tmp->Notify(*m_Model);
		it++;
	}
}

