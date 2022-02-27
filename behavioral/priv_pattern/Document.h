#ifndef __DOCUMENT_H
#define __DOCUMENT_H

#include "SaveInterface.h"
#include "SaveHandler.h"

class SaveHandler;

class Document: private SaveInterface
{
	public:
		Document()
		{
			m_saveHandler = new SaveHandler(*this);
		}

		~Document()
		{
			if( m_saveHandler )
			{
				delete m_saveHandler;
			}
		}
		void Backup() const;

	private:
		void SaveData() const;

	private:
		SaveHandler* m_saveHandler;
};

#endif // __DOCUMENT_H
