#include "Shape .h"
#include <iostream>
using namespace std;

Shape::Shape() : width(0), height(0) { }

Shape::Shape(int h, int w) : width(w), height(h) { }

int Shape::area()
{
	cout << "Shape area" << endl;
	return 0;
}
