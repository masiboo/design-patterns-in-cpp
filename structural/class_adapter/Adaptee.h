#ifndef __ADAPTEE_H
#define __ADAPTEE_H

namespace adapter
{
	class Adaptee1
	{
		public:
			Adaptee1();
			~Adaptee1();

		public:
			void ForeignMethod1();
	};

	class Adaptee2
	{
		public:
			Adaptee2();
			~Adaptee2();

		public:
			void ForeignMethod2();
	};
}

#endif // __ADAPTEE_H
