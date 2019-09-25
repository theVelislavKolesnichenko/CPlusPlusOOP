#ifndef NUM_H 
#define NUM_H 

class Num
{
protected:
	int num;
public:
	Num();
	Num(int n);
	int getNum();
	Num operator-(const Num& b);
	Num operator+(const Num& b);

};

#endif
