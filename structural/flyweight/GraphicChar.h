#ifndef __GRAPHIC_CHAR_H
#define __GRAPHIC_CHAR_H

#include <string>

using std::string;

namespace flyweight
{
	class GraphicChar
	{
		public:
			~GraphicChar();
			GraphicChar(char pChar, string pFont);
			static void PrintAtPosition(GraphicChar* pGrCh, int pX, int pY);

		private:
			char m_Char;
			string* m_Font;
	};
}

#endif // __GRAPHIC_CHAR_H
