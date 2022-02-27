#ifndef __CONCRETE_APPROVER_H
#define __CONCRETE_APPROVER_H

#include "Approver.h"

namespace chain_of_rsp
{
	class Purchase;

	class Director : public Approver
	{	
		public:
			void ProcessRequest( Purchase& pPurchase );
	};

	class VicePresident : public Approver
	{
		public:
			void ProcessRequest( Purchase& pPurchase );
	};

	class President : public Approver
	{
		public:	
			void ProcessRequest( Purchase& pPurchase );
	};
}

#endif // __CONCRETE_APPROVER_H
