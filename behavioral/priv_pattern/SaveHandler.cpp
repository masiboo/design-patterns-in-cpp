#include "SaveHandler.h"
#include "SaveInterface.h"

void SaveHandler::Execute()
{
	m_SaveInterface.SaveData();
}
