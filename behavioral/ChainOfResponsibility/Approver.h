#ifndef __APPROVER_H
#define __APPROVER_H

namespace chain_of_rsp
{
	class Purchase;

	class Approver
	{
		public:
			void SetSuccessor(Approver* successor)
			{
				m_Successor = successor;
			}

			Approver* Successor()
			{
				return m_Successor;
			}

			virtual void ProcessRequest( Purchase& pPurchase ) = 0;

		private:
			Approver* m_Successor;
	};
}

#endif // __APPROVER_H
