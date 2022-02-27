#ifndef __GENERICSTACK_H
#define __GENERICSTACK_H

#include <iostream>

using namespace std;

template <class T>
class GenericStack
{
	class Iterator
	{
		GenericStack* m_Stack;
		int index;

	public:
		Iterator(GenericStack* pStack)
		{
			m_Stack = pStack;
			index = 0;
		}

		void first()
		{
			index = 0;
		}

		void next()
		{
			index++;
		}

		T& currentItem()
		{
			return m_Stack->m_items[index];	
		}	

		bool isDone()
		{
			return (index == m_Stack->m_top+1);	
		}

		void value(int& pv)
		{
			pv = m_Stack->m_items[index];
		}

		int& operator*()
		{
			return m_Stack->m_items[index];
		}

		friend void operator <<(ostream &os, const Iterator& it)
		{
			os<<const_cast<Iterator&>(it).currentItem()<<endl;
		}

	};

public:
	typedef Iterator* iterator;

	GenericStack(int = 10); // default stack size=10
	~GenericStack()
	{
		delete [] m_items;
		delete m_it;
	}

	bool push_item(const T&);
	T& pop();
	
	iterator begin()
	{
		m_it->first();
		return m_it;
	}

	
private: //
	inline bool is_stack_empty()
	{
		return (m_top == -1);
	}

	inline bool is_stack_full()
	{
		return (m_top == m_size - 1);
	}

	private:
	int m_size;
	int m_top;
	T* m_items;
	iterator m_it;
};

//constructor with the default m_size 10
template <class T>
GenericStack<T>::GenericStack(int s)
{
	m_size = s > 0 ? s : 10;
	m_top = -1 ;  // init the top position of stack
	m_items = new T[m_size] ;
	m_it = new Iterator(this);
}

// push_item an element onto the GenericStack
template <class T>
bool GenericStack<T>::push_item(const T& item)
{
	if (!is_stack_full())
	{
		m_items[++m_top] = item ;
		return true;
	}
	else
	{
		int i = 0;
		int prev_size = m_size;

		// Increase the multiple of the initial m_size.
		m_size = 2*prev_size;
		T* tmp = new T[m_size];

		for(;i<prev_size;i++)
		{
			tmp[i] = m_items[i];
		}

		if( m_items )
		{
			delete[] m_items;
		}
		m_items = NULL;

		m_items = tmp;
		m_items[++m_top] = item;
		return true;
	}

	return false;
}

template <class T>
T& GenericStack<T>::pop()
{
	return m_items[m_top--] ;
}

#endif // __GENERICSTACK_H

// End of file

