#include "GraphicCharFactory.h"
#include "GraphicChar.h"
#include <iostream>

using namespace std;
using namespace flyweight;

GraphicCharFactory::~GraphicCharFactory()
{
	map<string, GraphicChar*>::iterator it = m_GraphCharPool->begin();

	for( ; it != m_GraphCharPool->end(); it++ )
	{
		GraphicChar* gc = (GraphicChar*)it->second;
		delete gc;
	}

	m_GraphCharPool->clear();
	delete m_GraphCharPool;
}

GraphicCharFactory::GraphicCharFactory()
{
	m_GraphCharPool = new map<string, GraphicChar*>();
}

GraphicChar* GraphicCharFactory::Get(char pChar, string pFont)
{
	string key = pFont + pChar;
	GraphicChar* gc = (*m_GraphCharPool)[key];
	
	if( gc == NULL )
	{
		gc = new GraphicChar(pChar, pFont);
		(*m_GraphCharPool)[key] = gc;
		//m_GraphCharPool->insert( pair<string, GraphicChar*>(key, gc) );
		//m_GraphCharPool->insert( make_pair(key,gc) );
	}

	return gc;
}
