#ifndef __CONTROLLER_H
#define __CONTROLLER_H

#include "GenericObserver.h"

class GenericModel;

class Controller : public GenericObserver
{
	public:
		Controller(){}

	public: // Virtual methods from GenericObserver
		void Notify(const GenericModel& p_Model);
		void DisplayModel(const GenericModel& p_Model);
};

#endif // __CONTROLLER_H
