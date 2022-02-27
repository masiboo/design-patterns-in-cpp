#include "Creator.h"

using namespace std;
using namespace FactoryMethod;

Creator::~Creator()
{
	if( m_Product )
	{
		delete m_Product;
	}
	m_Product = NULL;
}

GenericProduct& Creator::CreateProduct()
{
	if( !m_Product )
	{
		m_Product = new Product();
	}

	return *m_Product;
}

Creator::Product::Product()
{
}

Creator::Product::~Product()
{
}

string* Creator::Product::GetProductName()
{
	string* pName = new string("ProductA");
	return pName;
}
