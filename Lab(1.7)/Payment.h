#pragma once

class Payment
{
	double rate, experience, ³nterest, spent, income;

public:

	double Getrate() const { return rate; }
	double Getexperience() const { return experience; }
	double Get³nterest() const { return ³nterest; }
	double Getspent() const { return spent; }
	double Getincome() const { return income; }
	void Setrate(double value) { rate = value; }
	void Setexperience(double value) { experience = value; }
	void Set³nterest(double value) { ³nterest = value; }
	void Setspent(double value) { spent = value; }
	void Setincome(double value) { income = value; }
	void Init(double, double, double, double, double);
	void Read();
	void Display();
	double accrued();
	double ³nterestt();
	double incomee();
	double salary();

};

