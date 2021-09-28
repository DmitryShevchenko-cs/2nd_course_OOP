#pragma once
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

class Figure {
	double a, b, c;
public:

	Figure(int a, int b = 0, int c=0) : a(a), b(b), c(c) {};
	double count()const;

};