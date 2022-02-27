#include <assert.h>
#include "LocalizeFacade.h"
#include "Nation.h"

using namespace facade;

LocalizeFacade::LocalizeFacade(TProperty pType, int pNumOfNations) : m_NumOfNations( pNumOfNations ),
	m_Prop(NULL)
{
	m_Prop = new Property();
	m_Prop->LoadProperty(pType);
	
	m_Nations = new Nation*[pNumOfNations];
	string n1("US");
	string n2("France");
	string dp1("+1");
	string dp2("+33");

	m_Nations[0] = new Nation(n1, dp1);
	m_Nations[1] = new Nation(n2, dp2);

	m_NationMap = new map<const char*, Nation*>();

	for(int i = 0; i<pNumOfNations; i++)
	{
		(*m_NationMap)[m_Nations[i]->Name().c_str()]=m_Nations[i];
	}

}

LocalizeFacade::~LocalizeFacade()
{
	int i = 0;

	if( m_Prop )
	{
		delete m_Prop;
	}
	m_Prop = NULL;

	for(int i = 0; i < m_NumOfNations; i++)
	{
		delete m_Nations[i];
	}
	delete[] m_Nations;

	if( m_NationMap )
	{
		delete m_NationMap;
	}
	m_NationMap = NULL;
}

Nation**
LocalizeFacade::GetNations()
{
	assert("m_Nations is con constructed" && 
			m_Nations != NULL );
	return m_Nations;
}

Nation*
LocalizeFacade::GetNation(const char* pName)
{
	assert("m_NationMap is not constructed" &&
			m_NationMap != NULL );

	for( map<const char*, Nation*>::iterator iter = m_NationMap->begin(); iter != m_NationMap->end(); iter++ ) 
	{
		if( !strcmp(pName, (*iter).first) )
		{
			return (*iter).second;
		}
	}

	return NULL;
}

const char*
LocalizeFacade::GetProperty( const char* pKey )
{
	assert("m_Prop is not constructed" &&
			m_Prop != NULL );

	return m_Prop->GetProperty( pKey );
}

void
LocalizeFacade::LoadProperty( TProperty pType )
{
	m_Prop->LoadProperty(pType);
}

// End of file

