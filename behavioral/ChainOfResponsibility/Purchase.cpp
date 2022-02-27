#include "Purchase.h"

using namespace chain_of_rsp;

Purchase::Purchase(int number, double amount, 
				   const char* purpose)
{
	m_Purpose = new string( purpose );
	m_Number = number;
	m_Amount = amount;
}

Purchase::~Purchase()
{
	delete m_Purpose;
}

// End of file

