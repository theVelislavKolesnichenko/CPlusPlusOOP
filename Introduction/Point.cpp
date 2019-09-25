#include "Point.h"

Point::Point()
{
	num_x = Num();
	num_y = Num();
}

Point::Point(Num x, Num y)
{
	num_x = x;
	num_y = y;
}

Num Point::get_x()
{
	return num_x;
}

Num Point::get_y()
{
	return num_y;
}

Point Point::operator++()
{
	this->num_x = Num(this->num_x.getNum() + 1);
	this->num_y = Num(this->num_y.getNum() + 1);

	return Point(this->get_x(), this->get_y());
}

Point Point::operator++(int)
{
	Point obj = Point(this->num_x, this->num_y);

	this->num_x = Num(this->num_x.getNum() + 1);
	this->num_y = Num(this->num_y.getNum() + 1);

	return obj;
}

ostream& operator<<(ostream& output, const Point& point)
{
	Point obj = point;
	output << "Point (x, y): (" << obj.get_x().getNum() << ", " << obj.get_y().getNum() << ")";
	return output;
}
