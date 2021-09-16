#include "swap.h"

int main() {
	setlocale(LC_ALL, "rus");

	int a, b, c;
	cout << "введите три числа" << endl;
	cin >> a >> b >> c;
	swap_pointer(&a, &b, &c);
	cout << a << b << c << endl;
	cout << "----------"<< endl;
	cin >> a >> b >> c;
	swap_link(a, b, c);
	cout << a << b << c << endl;
	return 0;
}