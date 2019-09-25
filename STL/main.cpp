#include <iostream>
#include "Shape .h"
#include "Rectangle.h"
#include "Triangle.h"
#include<iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<Shape*> shapes;
	shapes.push_back(&Rectangle(5,5));
	shapes.push_back(&Triangle(5, 50));
	shapes.push_back(&Triangle(5, 5));

	vector<Shape*>::iterator ptr;

	auto s = inserter(shapes, ptr);


	cout << "First" << endl;

	for (ptr = shapes.begin(); ptr < shapes.end(); ptr++)
	{
		cout << (*ptr)->area() << endl;
	}

	cout << "Sort" << endl;

	sort(shapes.begin(), shapes.end());

	for(Shape *var : shapes)
	{
		cout << var->area() << endl;
	}

	return 0;
}

