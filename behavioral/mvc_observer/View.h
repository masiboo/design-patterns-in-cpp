#ifndef VIEW_H
#define VIEW_H

#include "Observable.h"

class View : public Observable
{
	public:
		View(){};
	public:
		void SendNotification();
};

#endif // VIEW_H
