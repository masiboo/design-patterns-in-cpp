#include "RealClient.h"
#include <iostream>

using proxy::RealClient;
using std::cout;

RealClient::RealClient()
{
	cout<<"RealClient initialized...\n";
	m_AccNum = new string( "1234-5678" );
}

RealClient::~RealClient()
{
	delete m_AccNum;
	m_AccNum = NULL;
}

const string& RealClient::GetAccountNumber()
{
	if( m_AccNum )
	{
		return *m_AccNum;
	}

	throw "Account Number NULL\n";
}
