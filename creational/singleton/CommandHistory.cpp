#include "CommandHistory.h"

using namespace creational;

CommandHistory* CommandHistory::m_Self = NULL;

CommandHistory::CommandHistory()
{
	m_CommandList = new list<Command*>();
	m_CommandString = new string();
}

CommandHistory::~CommandHistory()
{
	if( m_CommandList )
	{
		delete m_CommandList;
	}
	m_CommandList = NULL;

	if( m_CommandString )
	{
		delete m_CommandString;
	}
	m_CommandString = NULL;
}

// static
const CommandHistory* CommandHistory::GetInstance()
{
	if( m_Self == NULL )
	{
		m_Self = new CommandHistory();
	}
	return m_Self;
}

// static
void CommandHistory::RemoveInstance()
{
	if( m_Self )
	{
		delete m_Self;
	}
	m_Self = NULL;
}

void CommandHistory::AddCommand( Command* pCommand ) const
{
	if( !m_Self )
	{
		TException ex(TException::ENoInstance);
		throw (ex);
	}

	if( m_CommandList )
	{
		m_CommandList->push_back( pCommand );
	}
}

const Command* CommandHistory::UndoCommand() const
{
	if( !m_Self )
	{
		TException ex(TException::ENoInstance);
		throw (ex);
	}

	const Command* comm = m_CommandList->back();
	m_CommandList->pop_back();
	return comm;
}

const char* CommandHistory::ListOfCommands() const
{
	list<Command*>::iterator it;

	if( !m_Self )
	{
		TException ex(TException::ENoInstance);
		throw (ex);
	}

	if( m_CommandString )
	{
		m_CommandString->clear();
	}

	for(it = m_CommandList->begin(); it != m_CommandList->end(); it++)
	{
		Command* comm = *it;
		
		if( m_CommandString )
		{
			m_CommandString->append( comm->CommandName() );
		}
	}

	return m_CommandString->c_str();
}
