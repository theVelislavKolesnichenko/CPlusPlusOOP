#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle() : Shape(0, 0) { }

Triangle::Triangle(int h, int w) : Shape(h, w) { }

int Triangle::area()
{
	cout << "Triangle area :" << endl;
	return (width * height / 2);
}
