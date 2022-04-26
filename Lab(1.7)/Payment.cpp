#include "Payment.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

string surname;
string name;
string middlename;
void Payment::Init(double x, double y, double z, double g, double l)
{
	rate = x;
	experience = y;
	іnterest = z;
	spent = g;
	income = l;
}
void Payment::Read()
{
	double x, y, z, g, l;
	cout << " Прізвище = "; cin >> surname;
	cout << " Ім’я = "; cin >> name;
	cout << " По батькові = "; cin >> middlename;
	cout << " Ставка = "; cin >> x;
	cout << " Рік поступлення на роботу = "; cin >> l;
	cout << " Відсоток надбавки = "; cin >> z;
	cout << " Кількість відпрацьованих днів в місяці = "; cin >> g;
	cout << " Кількість робочих днів в місяці = "; cin >> y;
	Init(x, y, z, g, l);
}
void Payment::Display()
{
	cout << endl;
	cout << " Прізвище = " << surname << endl;
	cout << " Ім’я = " << name << endl;
	cout << " По батькові = " << middlename << endl;
	cout << " Кількість відпрацьованих днів в місяці = " << spent << " днів " << endl;
	cout << " Кількість робочих днів в місяці = " << experience << " днів " << endl;
	cout << " Прибутковий податок і пенсійний фонд = 14 % " << endl;
	cout << " Обчислення нарахованої суми = " << іnterestt() << endl;
	cout << " Обчислення утриманої суми = " << accrued() << endl;
	cout << " Обчислення суми, що видається на руки = " << salary() << endl;
	cout << " Стаж = " << incomee() << " років " << endl;
}
double Payment::іnterestt()
{
	return (rate / 100 * іnterest) + rate;
}
double Payment::accrued()
{
	return ((іnterestt()) / 100 * 14);
}
double Payment::salary()
{
	return іnterestt() - accrued();
}
double Payment::incomee()
{
	return 2025 - income;
}
