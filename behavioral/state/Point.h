#ifndef __POINT_H
#define __POINT_H

namespace state
{
	class Point
	{
		public:
			Point(){}
			Point(double pX, double pY);

		public:
			double X();
			double Y();
		
		private:
			double m_X;
			double m_Y;
	};
}

#endif // __POINT_H
