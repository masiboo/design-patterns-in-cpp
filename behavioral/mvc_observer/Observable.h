#ifndef __OBSERVABLE_H
#define __OBSERVABLE_H

#include <vector>

using namespace std;

class GenericObserver;
class GenericModel;

class Observable
{
	public:
		Observable();
		virtual ~Observable();

	public:
		void Register(const GenericObserver& p_Observer);
		void UnRegister(const GenericObserver& p_Observer);
	public:
		virtual void SendNotification();
		
	private:
		vector<GenericObserver*> *m_RegObserver;
		GenericModel* m_Model;
};

#endif // __OBSERVABLE_H
