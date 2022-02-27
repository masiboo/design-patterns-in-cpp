#include "SecureProxy.h"
#include "RealClient.h"

#include <iostream>

using std::cin;
using std::cout;
using proxy::SecureProxy;

SecureProxy::SecureProxy(const char* pPasswd)
{
	m_Passwd = new string( pPasswd );
	m_Client = new RealClient();
}

SecureProxy::~SecureProxy()
{
	delete m_Passwd;
	m_Passwd = NULL;
	delete m_Client;
	m_Client = NULL;
}

const string& SecureProxy::GetAccountNumber()
{
	string tmpPass;
	cout<<"Enter passward: ";
	cin>>tmpPass;

	if( !tmpPass.compare( m_Passwd->c_str() ) )
	{
		return m_Client->GetAccountNumber();
	}

	throw "Illegal password...\n";
}
