#include "Money.h"
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

void Money::Init(long x, long y, long m, long k)
{
	UAH = x;
	UAH2 = y;
	lungs = m;
	multiplicationn = k;
}
void Money::Init1(double a, double b, double c, double d)
{
	kopec = a;
	kopec1 = b;
	lungs1 = c;
	multiplicationn1 = d;
}

void Money::Read()
{
	long x, y, m, k;
	double a, b, c, d;
	cout << " Гривні: " << endl;
	cout << " Гривні перша сума більша = "; cin >> x;
	cout << " Гривні друга сума менша = "; cin >> y;
	cout << " Дробове число гривнів = "; cin >> m;
	cout << " Число для множення гривнів = "; cin >> k;
	cout << " Копійки:" << endl;
	cout << " Копійки перша сума більша = "; cin >> a;
	cout << " Копійки друга сума менша = "; cin >> b;
	cout << " Дробове число копійки = "; cin >> c;
	cout << " Число для множення копійки = "; cin >> d;

	Init(x, y, m, k);
	Init1(a, b, c, d);
}
long Money::addition()
{
	return UAH + UAH2;
}
long Money::subtraction()
{
	return UAH - UAH2;
}
long Money::divisionofsums()
{
	return addition() / subtraction();
}
long Money::lungss()
{
	return sqrt(lungs) / divisionofsums();
}
long Money::multiplication()
{
	return sqrt(lungs) * multiplicationn;
}
void Money::Display()
{
	cout << endl;
	cout << " Додавання гривнів = " << addition() << endl;
	cout << " Віднімання гривнів = " << subtraction() << endl;
	cout << " Ділення сум гривнів = " << divisionofsums() << endl;
	cout << " Ділення сум на дробове число для гривнів = " << lungss() << endl;
	cout << " Mноження на дробове число для гривнів = " << multiplication() << endl;
	cout << " Додавання копійок = " << addition1() << endl;
	cout << " Віднімання копійок = " << subtraction1() << endl;
	cout << " Ділення сум копійок = " << divisionofsums3() << endl;
	cout << " Ділення сум на дробове число для копійок = " << lungss3() << endl;
	cout << " Mноження на дробове число для копійок = " << multiplication3() << endl;
}
double Money::addition1()
{
	return (kopec * 0.01) + (kopec1 * 0.01);
}
double Money::subtraction1()
{
	return (kopec * 0.01) - (kopec1 * 0.01);
}
double Money::divisionofsums3()
{
	return addition1() / subtraction1();
}
double Money::lungss3()
{
	return sqrt((lungs1) * 0.01) / divisionofsums3();
}
double Money::multiplication3()
{
	return sqrt((lungs1) * 0.01) - (multiplicationn1 * 0.01);
}
void Money::Сomparison()
{
	if (multiplication() == multiplication3())
		cout << multiplication() << "  дорівнює  " << multiplication3() << " \n ";
	if (multiplication() > multiplication3())
		cout << multiplication() << "  більше  " << multiplication3() << " \n ";
	if (multiplication() < multiplication3())
		cout << multiplication() << "  менше   " << multiplication3() << " \n ";
}
