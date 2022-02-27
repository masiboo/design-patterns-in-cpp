#ifndef __COMPONENT_H
#define __COMPONENT_H

#include <string>
#include <vector>

#ifndef NULL
#define NULL 0
#endif

using std::string;
using std::vector;

namespace composite
{
	class Component
	{
		public:
			virtual ~Component(){}
			virtual void PrintInfo() = 0;
	};

	class Math : public Component
	{
		public:
			explicit Math(string* pName, int pGrade);
			~Math();

		public: // Virtual methods
			void PrintInfo();

		private:
			string* m_Name;
			int		m_Grade;
	};

	class Physics : public Component
	{
		public:
			explicit Physics(string* pName, int pGrade);
			~Physics();

		public: // Virtual methods
			void PrintInfo();

		private:
			string* m_Name;
			int		m_Grade;
	};

	class Program : public Component
	{
		public:
			Program(string* pName);
			~Program();

		public:
			void add(Component *obj);

		public: // Virtual methods
			void PrintInfo();

		private:
			string* m_Name;
			vector <Component*> m_Courses;
	};

}

#endif // __COMPONENT_H
