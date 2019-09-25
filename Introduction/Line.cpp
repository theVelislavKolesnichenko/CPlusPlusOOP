#include "Line.h"
#include <math.h>

Line::Line()
{
	a = Point();
	b = Point();
}

Line::Line(Point avalue, Point bvalue)
{
	a = avalue;
	b = bvalue;
}

Point Line::get_a()
{
	return this->a;
}

Point Line::get_b()
{
	return this->b;
}

double Line::length()
{
	return sqrt((this->get_b().get_x().getNum() - this->get_a().get_x().getNum()) + (this->get_b().get_x().getNum() - this->get_a().get_x().getNum()));
	//return sqrt((this->get_b().get_x() - this->get_a().get_x()) + (this->get_b().get_x() - this->get_a().get_x()));
}

bool Line::operator<(const Line& d)
{
	Line obj = d;
	if (this->length() < obj.length()) {
		return true;
	}
	if (this->length() > obj.length()) {
		return true;
	}

	return false;
}
