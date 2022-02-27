#ifndef __CLIENT_H
#define __CLIENT_H

#include <vector>

using std::vector;

namespace command
{
	class Calculator;
	class Command;

	class Client
	{
		public:
			Client();
			~Client();

		public:
			void Redo( int pLevels );
			void Undo( int pLevels );
			void Compute( char pOp, int pOperand );

		private:
			Calculator* m_Calc;
			vector<Command*> *m_CommVec;
			int m_Current;
	};
}

#endif // __CLIENT_H
