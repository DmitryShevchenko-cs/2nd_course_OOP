#pragma once
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

class Figure {
	int a, b, c, r;
public:
	Figure();
	double countReg()const;
	double countSq()const;
};