#ifndef __CARETAKER_H
#define __CARETAKER_H

namespace memento
{
	class Memento;

	class Caretaker
	{
		public:
			Caretaker();
			~Caretaker();

		public:
			Memento& GetMemento();
			void SetMemento( Memento* pMemento );

		private:
			Memento* m_Memento;		
	};
}

#endif // __CARETAKER_H
