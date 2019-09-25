#include "Num.h"
#include <ostream>

using namespace std;

#ifndef COMPLEX_H 
#define COMPLEX_H 

class Complex : public Num {
private:
	int imag;
public:
	Complex();
	Complex(int n, int i);
	Complex operator+ (Complex const& obj);
	friend ostream& operator<<(ostream& output, const Complex& point);
};

#endif