#include "Figure.h"

int Figure::get_a(int A) {
	A = a;
	return A;
}

int Figure::get_a(int B) {
	B = b;
	return B;
}

void Figure::show() {

	cout << "Площадь ";
}

void Triangle::show() {

	Figure::show();
	cout << "треугольника: " << S << endl;
}

void Rectangle::show(){

	Figure::show();
	cout << "треугольника: " << S << endl;
}

void Circle::show() {

	Figure::show();
	cout << "треугольника: " << S << endl;
}