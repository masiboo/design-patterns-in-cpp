#ifndef __LOCALIZE_FACADE_H
#define __LOCALIZE_FACADE_H

#include "Property.h"

namespace facade
{
	class Nation;

	class LocalizeFacade
	{
		public:
			LocalizeFacade(TProperty pType, int pNumOfNations);
			~LocalizeFacade();

		public:
			Nation**	GetNations();
			Nation*		GetNation(const char* pName);
			const char* GetProperty( const char* pKey );
			void		LoadProperty( TProperty pType );

		private:
			Property*					m_Prop;
			Nation**					m_Nations;
			int							m_NumOfNations;
			map<const char*, Nation*>*	m_NationMap;
	};
}

#endif // __LOCALIZE_FACADE_H
