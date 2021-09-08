#include "Fig.h"

void Figure::countReg(int a, int b, int c) {

	p = (a + b + c) / 2;

	S = sqrt(p * (p - a) * (p - b) * (p - c));

}

void Figure::countSq(int r) {

	const double PI = 3.141592653589793;
}