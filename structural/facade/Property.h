#ifndef __PROPERTY_H
#define __PROPERTY_H

#include <map>

using namespace std;

extern const char* GUI_TITLE;
extern const char* EXIT_CAPTION;
extern const char* COUNTRY_LABEL;
extern const char* PHONE_LABEL;

typedef enum
{
	English = 0x1,
	French
}TProperty;

namespace facade
{
	class Property
	{
		public:
			Property();
			~Property();

		public:
			void 		LoadProperty(TProperty pType);
			const char* GetProperty(const char* pKey);

		private:
			map<const char*, const char*>* m_Prop;
	};
}

#endif // __PROPERTY_H
