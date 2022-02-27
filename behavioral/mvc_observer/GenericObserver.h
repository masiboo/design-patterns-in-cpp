#ifndef __GENERICOBSERVER_H
#define __GENERICOBSERVER_H

class GenericModel;

class GenericObserver
{
	public:
		virtual void Notify(const GenericModel& p_Model) = 0;
};

#endif // __GENERICOBSERVER_H
