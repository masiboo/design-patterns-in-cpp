#ifndef __CONCRETE_CLASS_H
#define __CONCRETE_CLASS_H 

#include "AbstractClass.h"

namespace template_method
{
	class Monopoly : public Game
	{
		public:
			void initializeGame();
			void makePlay( int player );
			bool endOfGame();
			void printWinner();

		private:
			int m_Player;
			bool m_IsOver;
	};

	class Chess : public Game
	{
		public:
			void initializeGame();
			void makePlay( int player );
			bool endOfGame();
			void printWinner();

		private:
			int m_Player;
			bool m_IsOver;
	};
}

#endif // __CONCRETE_CLASS_H
