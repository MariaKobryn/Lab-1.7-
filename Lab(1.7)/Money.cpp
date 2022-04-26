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
	cout << " �����: " << endl;
	cout << " ����� ����� ���� ����� = "; cin >> x;
	cout << " ����� ����� ���� ����� = "; cin >> y;
	cout << " ������� ����� ������ = "; cin >> m;
	cout << " ����� ��� �������� ������ = "; cin >> k;
	cout << " ������:" << endl;
	cout << " ������ ����� ���� ����� = "; cin >> a;
	cout << " ������ ����� ���� ����� = "; cin >> b;
	cout << " ������� ����� ������ = "; cin >> c;
	cout << " ����� ��� �������� ������ = "; cin >> d;

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
	cout << " ��������� ������ = " << addition() << endl;
	cout << " ³������� ������ = " << subtraction() << endl;
	cout << " ĳ����� ��� ������ = " << divisionofsums() << endl;
	cout << " ĳ����� ��� �� ������� ����� ��� ������ = " << lungss() << endl;
	cout << " M������� �� ������� ����� ��� ������ = " << multiplication() << endl;
	cout << " ��������� ������ = " << addition1() << endl;
	cout << " ³������� ������ = " << subtraction1() << endl;
	cout << " ĳ����� ��� ������ = " << divisionofsums3() << endl;
	cout << " ĳ����� ��� �� ������� ����� ��� ������ = " << lungss3() << endl;
	cout << " M������� �� ������� ����� ��� ������ = " << multiplication3() << endl;
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
void Money::�omparison()
{
	if (multiplication() == multiplication3())
		cout << multiplication() << "  �������  " << multiplication3() << " \n ";
	if (multiplication() > multiplication3())
		cout << multiplication() << "  �����  " << multiplication3() << " \n ";
	if (multiplication() < multiplication3())
		cout << multiplication() << "  �����   " << multiplication3() << " \n ";
}
