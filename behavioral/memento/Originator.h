#ifndef __ORIGINATOR_H
#define __ORIGINATOR_H

#include <string>

using std::string;

namespace memento
{
	class Memento;

	class Originator
	{
		public:
			Originator();
			~Originator();

		public:
			void SetName( const char* pName);
			void SetPhone( const char* pPHone );
			void SetBudget( double pBudget);
			string& Name();
			string& Phone();
			double  Budget();
			void DisplayCurrentContent();

			Memento* SaveMemento();
			void	 ReStoreMemento( Memento& pMemento );

		private:
			string* m_Name;
			string* m_Phone;
			double	m_Budget;
	};
}

#endif // __ ORIGINATOR_H
