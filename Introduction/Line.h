#ifndef LINE_H 
#define LINE_H 

#include "Point.h"

class Line
{
public:
	Line();
	Line(Point avalue, Point bvalue);
	Point get_a();
	Point get_b();
	double length();
	bool operator <(const Line& d);

private:
	Point a;
	Point b;
};

#endif
