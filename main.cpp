﻿#include <iostream>
#include "triangle.h"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Rus"); 

	triangle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "Введите a, b, c для треугольника № " << i + 1 << " через пробел: " << endl;
		cin >> a >> b >> c;
		mas[i].Set_abc(a, b, c);
		if (!(mas[i].exst_tr())) {
			mas[i].show();
			cout << "треугольник с такими сторонами не существует" << endl;
			i--;
		}
	}
	
	for (int i = 0; i < 3; i++) {
		mas[i].show();
		cout << "периметр треугольника: " << mas[i].perimetr() << endl;
		cout << "площадь треугольника: " << mas[i].square() << endl;
	}
	return 0;
}
