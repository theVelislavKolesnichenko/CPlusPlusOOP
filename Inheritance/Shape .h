#ifndef SHAPE_H 
#define SHAPE_H 

class Shape {
protected:
	int width, height;

public:
	Shape();
	Shape(int h, int w);
	virtual int area();
};

#endif