#include "Num.h"

Num::Num()
{
	num = 0;
}

Num::Num(int n)
{
	num = n;
}

int Num::getNum()
{
	return num;
}

Num Num::operator-(const Num& b)
{
	return this->num - b.num;
}

Num Num::operator+(const Num& b)
{
	return this->num + b.num;
}