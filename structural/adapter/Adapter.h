#ifndef __adapter_H
#define __adapter_H

#include "Existing.h"

namespace adapter
{
	class Adaptee;

	class Adapter: public Existing
	{
		public:
			Adapter();
			~Adapter();

		public:
			void ExistingMethod();

		private:
			Adaptee* m_Adaptee;
	};
}

#endif // __adapter_H
