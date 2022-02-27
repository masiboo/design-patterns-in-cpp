#ifndef __GENERICMODEL_H
#define __GENERICMODEL_H

#define DATA_CONST_CAST(x) reinterpret_cast<const char*>(x)
#define DATA_CAST(x) reinterpret_cast<char*>(x)

typedef unsigned char TModelData;

class GenericModel
{
	public:
		GenericModel();
		~GenericModel();

	public:
		inline TModelData* GetModelData() const
		{
			return m_Data;
		}
		void CreateModel(TModelData* pData);

	private:
		TModelData* m_Data;
};

#endif // __GENERICMODEL
