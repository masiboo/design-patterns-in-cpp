#ifndef __SAVE_HANDLER_H
#define __SAVE_HANDLER_H


class SaveInterface;

class SaveHandler
{
	public:
		SaveHandler( SaveInterface& pSaveInterface ) : m_SaveInterface(pSaveInterface)
		{
		}

	public:
		void Execute();
	
	private:
		SaveInterface& m_SaveInterface;
};

#endif // __SAVE_HANDLER_H
