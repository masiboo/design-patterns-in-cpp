#ifndef __APPOINTMENT_H
#define __APPOINTMENT_H

#include <assert.h>
#include <vector>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

namespace builder
{
	// Class responsible for having Location information
	class Location
	{
		public:
			Location(const char* pLocName)
			{
				m_LocName = new string( pLocName );
			}

			Location(const Location& pSelf)
			{
				m_LocName = new string(pSelf.m_LocName->c_str());
			}

			~Location()
			{
				if( m_LocName )
				{
					delete m_LocName;
				}
				m_LocName = NULL;
			}

		public:
			inline string& LocationName() const
			{
				assert(m_LocName != NULL);
				return *m_LocName;
			}

		private:
			string* m_LocName;
	};

	class Date
	{
		public:
			Date(int dd, int mm, int yy) 
			{
				// Create the date stampe
				struct tm time;
				// Initializing the local variable,
				// otherwise valgrind shows some error
				// about unconditional jump for uninit
				// variables.
				memset(&time,0,sizeof(struct tm));

				assert( ( dd > 0 && dd < 32 ) &&
						( mm > 0 && mm < 13 ) &&
						( yy > 0 ) );

				m_Day = dd, m_Year = yy,
				m_Month = mm;

				// Creating the struct tm
				time.tm_year	= m_Year  - 1900;
				time.tm_mon		= m_Month - 1;
				time.tm_mday	= m_Day;
				time.tm_hour	= 0;
				time.tm_min 	= 0;
				time.tm_sec		= 0;
				time.tm_isdst	= 0;

				m_Date = mktime(&time);
			}

			// Copy constructor for keeping a copy
			// of the appointment date
			Date(const Date& pDate)
			{
				m_Day   = pDate.m_Day,
				m_Year  = pDate.m_Year,
				m_Month = pDate.m_Month;
				m_Date  = pDate.m_Date;
			}

			~Date()
			{
			}
			
			void PrintDate() const
			{
				cout<<m_Day<<"."\
					<<m_Month<<"."\
					<<m_Year<<endl;
			}

			char* GetDateAsString() const
			{
				return ctime(&m_Date);
			}

		private:
			int m_Day, m_Year, m_Month;
			time_t m_Date;
	};

	class Attendee
	{
		public:
			Attendee(const char* pName)
			{
				m_Name = new string( pName );
			}

			Attendee(const Attendee& pAttendee)
			{
				m_Name = new string(pAttendee.m_Name->c_str());
			}

			~Attendee()
			{
				if( m_Name )
				{
					delete m_Name;
				}
				m_Name = NULL;
			}

			inline string& Name() const
			{
				assert(m_Name != NULL);
				return *m_Name;
			}

		private:
			string* m_Name;
	};

	// Container for storing the Attendee
	typedef vector<Attendee*> TAttendeeList;

	class AttendeeList
	{
		public:
			AttendeeList();
			~AttendeeList();
		public:
			void AddAttendee(Attendee& pAttendee);
			const Attendee* GetAttendee(size_t pIndex);
			inline size_t NumerOfAttendees()
			{
				if( m_AttList )
				{
					return m_AttList->size();
				}

				return 0;
			}
		private:
			TAttendeeList* m_AttList;
	};

	class Appointment
	{
		public:
			Appointment();
			~Appointment();

		public: // Accessor methods
			void SetLocation(Location& pLoc);
			void SetStartDate(Date& pDate);
			void SetEndDate(Date& pDate);
			void SetAttendeeList(AttendeeList* pAttendeeList);

			const Location* GetLocation() const;
			const Date*		GetStartDate() const;
			const Date*		GetEndDate();
			AttendeeList*	GetAttendeeList() const;

			void PrintAttendeeInfo();

		private:
			Location* 	m_Location;
			Date*		m_StartDate;
			Date* 		m_EndDate;
			AttendeeList* m_Attendee;
	};
} // namespace

#endif // __APPOINTMENT_H
