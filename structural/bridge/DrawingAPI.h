#ifndef __DRAWING_API
#define __DRAWING_API

namespace bridge
{
	// Implementor
	class DrawingAPI 
	{
		public:
			virtual void drawCircle(double x, double y, double radius) = 0;
			virtual ~DrawingAPI(){};
	};

	// Concrete Implementor
	class DrawingAPI1 : public DrawingAPI 
	{
		public:
			void drawCircle(double x, double y, double radius);
	};

	// Concrete Implementor
	class DrawingAPI2 : public DrawingAPI
	{
		public:
			void drawCircle(double x, double y, double radius);
	};
}

#endif // __DRAWING_API
