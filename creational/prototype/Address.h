#ifndef __ADDRESS_H
#define __ADDRESS_H

#include <string>

using namespace std;

namespace prototype
{
	class Copyable
	{
		public:
			virtual Copyable* copy() = 0;
	};

	class Address : public Copyable
	{
		public:
			Address(string& pStreet, string& pCountry)
			{
				m_Street = new string(pStreet);
				m_Country = new string(pCountry);
			}

			~Address()
			{
				if( m_Street )
				{
					delete m_Street;
				}
				m_Street = NULL;

				if( m_Country )
				{
					delete m_Country;
				}
				m_Country = NULL;
			}

		public:
			Copyable* copy();
			string* GetAddress();

		private:
			string* m_Street;
			string* m_Country;
	};
}
#endif // __ADDRESS_H
