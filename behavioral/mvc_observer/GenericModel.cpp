#include <iostream>
#include "GenericModel.h"

using namespace std;

GenericModel::GenericModel(): m_Data(NULL)
{
}

GenericModel::~GenericModel()
{
	if( m_Data )
	{
		delete[] m_Data;
	}
	m_Data = NULL;
}

void GenericModel::CreateModel(TModelData* pData)
{
	if( pData )
	{
		int size = strlen(DATA_CONST_CAST(pData));

		// Delete the previous model
		if(m_Data)
		{
			delete[] m_Data;
		}
		m_Data = NULL;

		m_Data = new TModelData[size+1];
		strcpy(reinterpret_cast<char*>(m_Data), DATA_CONST_CAST(pData) );
	}
}

