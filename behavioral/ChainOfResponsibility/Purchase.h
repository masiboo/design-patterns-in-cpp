#ifndef __PURCHASE_H
#define __PURCHASE_H

#include <string>

using std::string;

namespace chain_of_rsp
{
	class Purchase
	{
		public:
			Purchase(int number, double amount, 
					const char* purpose);

			~Purchase();

		public:
			inline double Amount()
			{
				return m_Amount;
			}

			inline string& Purpose()
			{
				return *m_Purpose;
			}

			inline int Number()
			{
				return m_Number;
			}

		private:
			int m_Number;
			double m_Amount;
			string* m_Purpose;
	};
}

#endif // __PURCHASE_H
