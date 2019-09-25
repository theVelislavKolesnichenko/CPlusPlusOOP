#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
	Calculator<int> calc(5, 8);

	calc.displayResult();

	return 0;
}

