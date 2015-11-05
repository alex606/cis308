#ifndef FRACTION_H
#define FRACTION_H
class fraction
{
private:
	

public:
	fraction();
	~fraction();
	int numerator, denominator;
	void setValues(int, int);
	void print(void);
	fraction plus(fraction);
	fraction minus(fraction);
	fraction times(fraction);
	fraction divide(fraction);
};

#endif