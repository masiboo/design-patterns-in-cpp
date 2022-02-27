#ifndef __CREATOR_H
#define __CREATOR_H

#include <string>

using namespace std;

namespace FactoryMethod
{
	class GenericProduct
	{
		public:
			virtual string* GetProductName() = 0;
	};

	class Creator
	{
		public:
			~Creator();

		public:
			GenericProduct& CreateProduct();

		private:
			class Product : public GenericProduct 
			{
				public:
					Product();
					~Product();

				public:
					string* GetProductName();
			};

		private:
			Product* m_Product;
	};
}

#endif // __CREATOR
