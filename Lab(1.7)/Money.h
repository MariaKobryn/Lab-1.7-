#pragma once

class Money

{
	long UAH, UAH2, lungs, multiplicationn;
	double kopec, kopec1, lungs1, multiplicationn1;

public:

	long GetUAH() const { return UAH; }
	long GetUAH2() const { return UAH2; }
	long Getlungs() const { return lungs; }
	long Getmultiplicationn() const { return multiplicationn; }
	double Getkopec() const { return kopec; }
	double Getkopec1() const { return kopec1; }
	double Getlungs1() const { return lungs1; }
	double Getmultiplicationn1() const { return multiplicationn1; }
	void SetUAH(long value) { UAH = value; }
	void SetUAH2(long value) { UAH2 = value; }
	void Setlungs(long value) { lungs = value; }
	void Setmultiplicationn(long value) { multiplicationn = value; }
	void Setkopec(double value) { kopec = value; }
	void Setkopec1(double value) { kopec1 = value; }
	void Setlungs1(double value) { lungs1 = value; }
	void Setmultiplicationn1(double value) { multiplicationn1 = value; }
	void Init(long, long, long, long);
	void Init1(double, double, double, double);
	void Read();
	void Display();
	long addition();
	long subtraction();
	long divisionofsums();
	long lungss();
	long multiplication();
	double addition1();
	double subtraction1();
	double divisionofsums3();
	double lungss3();
	double multiplication3();
	void Ñomparison();

};

