#include <iostream>
#include "Shape .h"
#include "Rectangle.h"
#include "Triangle.h"

#pragma endregion

using namespace std;

int main()
{

	Shape* shape[2];

	// store the address of Rectangle
	shape[0] = &Rectangle(10, 7);

	// call rectangle area.
	shape[0]->area();

	// store the address of Triangle
	shape[1] = &Triangle(10, 5);

	// call triangle area.
	shape[1]->area();

	return 0;
}
