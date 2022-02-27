#ifndef __adapter_H
#define __adapter_H

#include "Adaptee.h"

namespace adapter
{
	class Adapter : Adaptee1,
					Adaptee2
	{
		public:
			Adapter();
			~Adapter();

		public:
			void AdaptedMethod();
	};
}

#endif // __adapter_H
