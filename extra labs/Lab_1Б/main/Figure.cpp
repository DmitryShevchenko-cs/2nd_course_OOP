#include "Figure.h"

double Figure::countTr()const {

	double p = (a + b + c) / 2;
	double S;
	
	S = sqrt(p * (p - a) * (p - b) * (p - c));// 8*4*4*4

	return S;

}

double Figure::countSq()const {

	const double PI = 3.141592653589793;

	double S;

	S = PI * r * r;
	return S;
}