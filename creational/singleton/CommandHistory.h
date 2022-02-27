#ifndef __COMMAND_HISTORY_H
#define __COMMAND_HISTORY_H

#include <list>
#include <string>
#include <iostream>

using namespace std;

namespace creational
{
	class Command
	{
		public:
			Command(const char* pCommand)
			{
				m_CommandName = new string( pCommand );
			}

			const char* CommandName() const
			{
				if( m_CommandName )
				{
					return m_CommandName->c_str();
				}

				return NULL;
			}

			~Command()
			{
				if( m_CommandName )
				{
					delete m_CommandName;
				}
				m_CommandName = NULL;
			}
		private:
			string* m_CommandName;
	};

	class TException
	{
#define ENOINSTANCE "ENoInstance"
		public:
			typedef enum
			{
				ESuccess = 0,
				ENoInstance = -1
			}TError;

			TException(TError pError)
			{
				m_Error = pError;
			}

			const char* ErrorDescription()
			{
				switch(m_Error)
				{
					case ENoInstance:
						{
							return ENOINSTANCE;
						}
						break;
					default:
						;
				}
			}
		
		private:
			TError m_Error;
	};

	class CommandHistory
	{
		public:
			// Creates the instance of this class if not created
			static const CommandHistory* GetInstance();
			// Removes the instance if this class if created
			static void RemoveInstance();
			void AddCommand( Command* pCommand ) const;
			const Command* UndoCommand() const;
			const char* ListOfCommands() const;

		private: 
			// It will make sure that the user of this class does not
			// construct and destruct. Only one instance of this class
			// is possible during its lifetime, making it a singleton.
			CommandHistory();
			~CommandHistory();

		private:
			list<Command*> *m_CommandList;
			static CommandHistory* m_Self;
			string* m_CommandString;
	};
}

#endif // __COMMAND_HISTORY_H
