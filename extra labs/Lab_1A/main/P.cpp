#include "P.h"

void point::set(int a, int b) {
	x = a;
	y = b;
}

void point::show() {
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "x + y = " << x + y << endl;
}
