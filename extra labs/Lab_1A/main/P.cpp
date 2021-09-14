#include "P.h"

void point::set(int a, int b) {
	x = a;
	y = b;
}
void point::count(int& sum, int& prod)const {
	sum = x + y;
	prod = x * y;
}
void point::show(int sum, int prod)const {
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "sum = " << sum << endl;
	cout << "prod = " << prod << endl;
	
}
