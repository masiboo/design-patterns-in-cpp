#include <iostream>
#include "Creator.h"

using namespace std;
using namespace FactoryMethod;

int main(int argc, char* argv[])
{
	Creator* cr = new Creator();
	GenericProduct& pr =  cr->CreateProduct();
	string* pName = pr.GetProductName();
	cout<<"Product name: "<<*pName<<endl;
	delete pName;
	delete cr;

	return 0;
}
