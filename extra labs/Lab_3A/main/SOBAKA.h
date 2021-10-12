#pragma once

#include <iostream>
#include "windows.h"
#include <string.h>
using namespace std;

class SOBAKA {
	int weigth;
	double age;
public:
	SOBAKA(int W = 10, double A = 1) : weigth(W), age(A) {};
	friend ostream& operator << (ostream& S, SOBAKA& ob);
};

class SPANIEL: protected SOBAKA {
	string color;
public:
	SPANIEL(string col = "Черный") : color(col) {}
	SPANIEL(int W, int A) : SOBAKA(W, A) {};
	SPANIEL(int W, int A, string col) : SOBAKA(W, A), color(col) {}
	friend ostream& operator << (ostream& S, SPANIEL& ob);

};