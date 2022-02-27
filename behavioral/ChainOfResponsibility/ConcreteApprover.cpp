#include <iostream>
#include "ConcreteApprover.h"
#include "Purchase.h"

using namespace std;
using namespace chain_of_rsp;

void Director::ProcessRequest(Purchase& purchase)
{
	if (purchase.Amount() < 10000.0f)
	{
		cout<<"Director approved request# "<< purchase.Number()<<endl;
	}
	else if (Successor() != NULL)
	{
		Successor()->ProcessRequest(purchase);
	}
}

void VicePresident::ProcessRequest(Purchase& purchase)
{
	if (purchase.Amount() < 25000.0)
	{
		cout<<"VicePresident approved request# "<< purchase.Number()<<endl;
	}
	else if (Successor() != NULL)
	{
		Successor()->ProcessRequest(purchase);
	}
}

void President::ProcessRequest(Purchase& purchase)
{
	if (purchase.Amount() < 100000.0)
	{
		cout<<"President approved request# "<< purchase.Number()<<endl;
	}
	else
	{
		cout<<"Request# " << purchase.Number() <<" requires an executive meeting!" << endl;
	}
}

// End of file

