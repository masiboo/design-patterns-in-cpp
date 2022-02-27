#ifndef __SHAPE_H
#define __SHAPE_H

#include "DrawingAPI.h"


namespace bridge
{
	class DrawingAPI;

	// Abstraction
	class Shape
	{
		public:
			virtual ~Shape() {};
			virtual void Draw() = 0;
			virtual void ResizeByPercentage(double pct) = 0;
	};

	// Refined Abstraction
	template <class T>
	class CircleShape : public Shape
	{
		public:
			~CircleShape();
			CircleShape(double x, double y,
					double radius);

			void Draw();
			void ResizeByPercentage(double pct);

		private:
			double m_x,m_y,m_radius;
			DrawingAPI *m_drawingAPI;
	};

	template <class T>
	CircleShape<T>::~CircleShape()
	{
		delete m_drawingAPI;
		m_drawingAPI = 0;
	}

	template <class T>
	CircleShape<T>::CircleShape(double x, double y,
				double radius )
	{
		m_x = x;
		m_y = y;
		m_radius = radius;
		m_drawingAPI = new T();
	}

	template <class T>
	void CircleShape<T>::Draw()
	{
		m_drawingAPI->drawCircle(m_x,m_y,m_radius);
	}

	template <class T>
	void CircleShape<T>::ResizeByPercentage(double pct)
	{
		m_radius *= pct;
	}
}


#endif // __SHAPE_H
