#ifndef __GRAPHICCHAR_FACTORY_H
#define __GRAPHICCHAR_FACTORY_H

#include <string>
#include <map>

#ifndef NULL
#define NULL 0
#endif

using std::string;
using std::map;

namespace flyweight
{
	class GraphicChar;

	class GraphicCharFactory
	{
		public:
			~GraphicCharFactory();
			GraphicCharFactory();
			GraphicChar* Get(char pChar, string pFont);
			inline size_t GetNumOfChars()
			{
				if( m_GraphCharPool )
				{
					return m_GraphCharPool->size();
				}

				return 0;
			}

		private:
			map<string, GraphicChar*> *m_GraphCharPool;
	};
}

#endif // __GRAPHICCHAR_FACTORY_H
