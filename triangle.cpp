#include <iostream>
#include "triangle.h"

using namespace std;



void triangle::Set_abc(double valueA, double valueB, double valueC)
{
	a = valueA;
	b = valueB;
	c = valueC;
}

double triangle::Get_a()
{
	return a;
}

double triangle::Get_b()
{
	return b;
}

double triangle::Get_c()
{
	return c;
}

bool triangle::exst_tr()
{
	if (a + b > c && a + c > b && b + c > a)
		return 1;
}

void triangle::show()
{
	cout << "1 сторона: " << a << "\t2 сторона: " << b << "\t3 сторона: " << c << endl;
}

double triangle::perimetr()
{
	return a + b + c;
}

double triangle::square()
{
	double p = (a + b + c) / 2;
	double result = sqrt(p * (p - a) * (p - b) * (p - c));
	return result;
}
