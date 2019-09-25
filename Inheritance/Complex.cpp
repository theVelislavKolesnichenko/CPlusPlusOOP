#include "Complex.h"

Complex::Complex() : Num(), imag(0) { }
Complex::Complex(int n, int i) : Num(n), imag(i) { }

Complex Complex::operator+(Complex const& obj)
{
	Complex res;
	res.num = num + obj.num;
	res.imag = imag + obj.imag;
	return res;
}

ostream& operator<<(ostream& output, const Complex& complex)
{
	output << complex.num << " + i" << complex.imag << endl;
	return output;
}
