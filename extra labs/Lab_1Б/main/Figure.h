#pragma once
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

class Figure {
	double a, b, c, r;
public:
	Figure() : a(3), b(4), c(5), r(4) {}
	double countTr()const;
	double countSq()const;
};