#ifndef __ADAPTEE_H
#define __ADAPTEE_H

namespace adapter
{
	class Adaptee
	{
		public:
			Adaptee();
			~Adaptee();

		public:
			void ForeignMethod();
	};
}

#endif // __ADAPTEE_H
