#include <assert.h>
#include "Property.h"

using namespace facade;

const char* GUI_TITLE = "title";
const char* EXIT_CAPTION = "exit";
const char* COUNTRY_LABEL = "country";
const char* PHONE_LABEL = "phone";

Property::Property()
{
	m_Prop = new map<const char*, const char*>();
}

Property::~Property()
{
	delete m_Prop;
}

void Property::LoadProperty( TProperty pType )
{
	assert("m_Prop is object not constructed!!!" &&
			m_Prop != NULL);

	switch( pType )
	{
		case English:
		{
			(*m_Prop)[GUI_TITLE] 		= "Facade Pattern Demonstration";
			(*m_Prop)[EXIT_CAPTION] 	= "Exit";
			(*m_Prop)[COUNTRY_LABEL]	= "Country";
			(*m_Prop)[PHONE_LABEL]		= "Phone Number";
		}
		break;

		case French:
		{
			(*m_Prop)[GUI_TITLE] 		= "Demonstration du Pattern Facade";
			(*m_Prop)[EXIT_CAPTION] 	= "Sortir";
			(*m_Prop)[COUNTRY_LABEL]	= "Pays";
			(*m_Prop)[PHONE_LABEL]	= "Numero de Telephone";
		}
		break;

		default:
			;// Empty
	}
}

const char* Property::GetProperty(const char* pKey)
{
	assert("m_Prop is object not constructed!!!" &&
			m_Prop != NULL);

	map<const char*, const char*>::iterator iter = m_Prop->find(pKey);

	if( iter != m_Prop->end() ) 
	{
		return iter->second;
	}

	return NULL;
}
