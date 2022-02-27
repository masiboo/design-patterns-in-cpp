#include <assert.h>
#include "Nation.h"

using namespace facade;

Nation::Nation(string& pName, string& pDialPrefix)
{
	m_Name = new string( pName );
	m_DialPrefix = new string( pDialPrefix );
}

Nation::~Nation()
{
	if( m_Name )
	{
		delete m_Name;
	}
	m_Name = NULL;

	if( m_DialPrefix )
	{
		delete m_DialPrefix;
	}
	m_DialPrefix = NULL;
}

const string& Nation::Name()
{
	assert("m_Name is not constructed" &&
			m_Name != NULL );
	return *m_Name;
}

const string& Nation::DialPrefix()
{
	assert("m_DialPrefix is not constructed" &&
			m_DialPrefix != NULL );
	return *m_DialPrefix;
}
