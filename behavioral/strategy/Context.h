#ifndef __CONTEXT_H
#define __CONTEXT_H

namespace strategy
{
	class Strategy;

	class Context
	{
		public:
			Context( Strategy* pStrategy );
			~Context();

		public:
			void ContextInterface();

		private:
			Strategy* m_Strategy;	
	};
}

#endif // __CONTEXT_H
