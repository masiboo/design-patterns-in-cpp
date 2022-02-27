#include "Document.h"
#include <iostream>

void Document::Backup() const
{
	if( m_saveHandler )
	{
		m_saveHandler->Execute();
	}
}

// private mehtod which is public virtual in SaveInterface
void Document::SaveData() const
{
	std::cout<<"Data is saved\n";
}

