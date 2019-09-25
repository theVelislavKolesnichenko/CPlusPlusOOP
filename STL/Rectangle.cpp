#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() : Shape(0, 0) { }

Rectangle::Rectangle(int h, int w) : Shape(h, w) { }

int Rectangle::area()
{
	cout << "Rectangle area :" << endl;
	return (width * height);
}
