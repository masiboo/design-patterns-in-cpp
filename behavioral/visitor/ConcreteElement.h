#ifndef __CONCRETE_ELEMENT_H
#define __CONCRETE_ELEMENT_H

#include <string>
#include <list>
#include "Element.h"

using std::string;
using std::list;

namespace visitor
{
	class Visitor;

	class Wheel : public CarElement
	{
		public:
			~Wheel();
			Wheel(const string &name);
			string& getName();
			void accept(Visitor& visitor);

		private:
			string m_Name;
	};

	// engine
	class Engine : public CarElement
	{
		public:
			void accept(Visitor& visitor);
	};

	// body
	class Body : public CarElement
	{
		public:
			void accept(Visitor& visitor);
	};

	// car, all car elements(parts) together
	class Car 
	{
		public:
			Car();
			~Car();
			list<CarElement*> & getElements();

		private:
			list<CarElement*> elements;
	};

}

#endif // __CONCRETE_ELEMENT_H
