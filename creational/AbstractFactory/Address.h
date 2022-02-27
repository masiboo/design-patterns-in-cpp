#ifndef __ADDRESS_H
#define __ADDRESS_H

#include <assert.h>
#include <string>

namespace abs_factory
{

#define STREET_LEN 150
#define CITY_LEN 100

	class Address
	{
		public:
			Address();
			virtual ~Address();
			void SetStreet(const char* aStreet);
			void SetCity(const char* aCity);
			char* GetStreet();
			char* GetCity();
		public:
			virtual char* GetCountry() = 0;
			virtual const std::string& GetFullAddress();

		protected:
			inline std::string& GetString()
			{
				assert(m_AddrStr != NULL);

				if(m_AddrStr->size())
				{
					m_AddrStr->clear();
				}
				return *m_AddrStr;
			}

		private:
			char m_Street[STREET_LEN];
			char m_City[CITY_LEN];

		private:
			std::string* m_AddrStr;
	};

} // namespace

#endif // __ADDRESS_H
