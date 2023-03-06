#pragma once
class triangle
{
private:
	double a, b, c;
public:
	void Set_abc(double valueA, double valueB, double valueC);
	double Get_a();
	double Get_b();
	double Get_c();
	bool exst_tr();
	void show();
	double perimetr();
	double square();

};