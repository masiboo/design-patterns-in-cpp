#ifndef __NATION_H
#define __NATION_H

#include <string>

using namespace std;

namespace facade
{
	class Nation
	{
		public:
			Nation(string& pName, string& pDialPrefix);
			~Nation();

		public:
			const string& Name();
			const string& DialPrefix();

		private:
			string* m_Name;
			string* m_DialPrefix;
	};
}

#endif // __NATION_H
