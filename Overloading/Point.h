#ifndef POINT_H 
#define POINT_H 

#include "Num.h"
#include <iostream>

using namespace std;

class Point
{
public:
	Point();
	Point(Num x, Num y);
	Num get_x();
	Num get_y();
	friend ostream& operator<<(ostream& output, const Point& point);
	// overloaded prefix ++ operator
	Point operator++ ();

	// overloaded postfix ++ operator
	Point operator++(int);
private:
	Num num_x;
	Num num_y;
};

#endif
