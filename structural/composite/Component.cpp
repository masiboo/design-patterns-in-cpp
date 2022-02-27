#include <iostream>
#include "Component.h"

using std::cout;
using std::endl;

using namespace composite;

Math::Math(string* pName, int pGrade) :
	m_Name( pName ),
	m_Grade( pGrade )
{
}

Math::~Math()
{
	delete m_Name;
	m_Name = NULL;
}

void Math::PrintInfo()
{
	cout<<"Course name: "<<*m_Name<<endl;
	cout<<"Course grade: "<<m_Grade<<endl;
}

Physics::Physics(string* pName, int pGrade) :
	m_Name( pName ),
	m_Grade( pGrade )
{
}

Physics::~Physics()
{
	delete m_Name;
	m_Name = NULL;
}

void Physics::PrintInfo()
{
	cout<<"Course name: "<<*m_Name<<endl;
	cout<<"Course grade: "<<m_Grade<<endl;
}

Program::Program(string* pName) :
	m_Name( pName )
{
}

Program::~Program()
{
	delete m_Name;
	m_Name = NULL;
}

void Program::add(Component *obj)
{
	m_Courses.push_back(obj);
}

void Program::PrintInfo()
{
	cout << "Program name: "<< *m_Name << endl;

	for (vector<Component*>::iterator it = m_Courses.begin();
			it != m_Courses.end(); ++it)
	{
		(*it)->PrintInfo();
	}
}
