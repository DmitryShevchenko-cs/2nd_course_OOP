#include "Figure.h"

double Figure::count()const {
	
	const double PI = 3.141592653589793;
	double S;
	if (b == 0 && c == 0)
		S = PI * a * a;
	else {
		double p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
	}

	return S;
}
