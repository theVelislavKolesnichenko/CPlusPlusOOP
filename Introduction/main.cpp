#include <iostream>
#include "Num.h"
#include "Point.h"
#include "Line.h"

#pragma endregion

using namespace std;

int main()
{
	Num num(Num(4));
	Point point(5, 7);

	std::cout << point.get_x().getNum() << std::endl;
	std::cout << point.get_y().getNum() << std::endl;

	++point;
	point++;

	std::cout << "New" << std::endl;
	std::cout << point.get_x().getNum() << std::endl;
	std::cout << point.get_y().getNum() << std::endl;

	std::cout << "New" << std::endl;
	std::cout << point.get_x().getNum() << std::endl;
	std::cout << point.get_y().getNum() << std::endl;

	std::cout << endl << num.getNum() << std::endl;

	Line line(Point(12, 13), Point(14, 15));
	cout << line.length();
	
	cout << point << endl;

	return 0;
}
