#ifndef __MEMENTO_H
#define __MEMENTO_H

#include <string>

using std::string;

namespace memento
{
	class Memento
	{
		public:
			Memento(string* pName,
					string* pPhone,	
					double pBudget);
			~Memento();

		public:
			string* Name();
			string* Phone();
			double  Budget();

		private:
			string* m_Name;
			string* m_Phone;
			double	m_Budget;
	};
}

#endif // __MEMENTO_H

