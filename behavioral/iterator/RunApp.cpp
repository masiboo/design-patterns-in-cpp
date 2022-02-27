#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char* argv[])
{
	GenericStack<int> IntStack;
	
	for(int i=8;i<=10;i++)
	{
		IntStack.push_item(i);
	}

	GenericStack<int>::iterator it = IntStack.begin();
	
	// First iteration
	for(;!it->isDone();it->next())
	{
		cout<<*it;	
	}

	// Second iteration
	for(it = IntStack.begin();!it->isDone();it->next())
	{
		cout<<*it;	
	}

	return 0;
}

// End of file

