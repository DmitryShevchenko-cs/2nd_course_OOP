#include "Figure.h"

int main() {

	Figure S_reg(4), S_sq(3, 4, 5);
	
	cout << S_reg.count() << endl;
	cout << S_sq.count() << endl;

	return 0;
}