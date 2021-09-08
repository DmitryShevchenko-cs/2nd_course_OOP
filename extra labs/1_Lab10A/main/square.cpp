#include "square.h"

square::square() {
	a = 2;
	b = 3;
	c = 4;
	S1 = 0;
	S2 = 0;
}

void square::count() {
	S1 = a * a;
	S2 = b * c;
}
void square::show()const {

	cout << a << endl;
	cout << b << endl;
	cout << c << endl << endl;
	cout << S1 << endl;
	cout << S2 << endl;
}