#ifndef __ABSTRACT_CLASS_H
#define __ABSTRACT_CLASS_H

namespace template_method
{
	class Game
	{
		public:
			void PlayOneGame( int playersCount )
			{
				m_plyaersCount = playersCount;
				initializeGame();
				int j = 0;

				while (!endOfGame() && playersCount > 1 )
				{
					makePlay(j);
					j = (j + 1) % playersCount;
				}
				printWinner();
			}

		public:
			virtual void initializeGame() = 0;
			virtual void makePlay( int player ) = 0;
			virtual bool endOfGame() = 0;
			virtual void printWinner() = 0;

		private:
			int m_plyaersCount;
	};
}

#endif // __ABSTRACT_CLASS_H
