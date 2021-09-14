#include "sum.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SUM a, b(5, 7), c;
	SUM* aa, * bb, * cc;
	int a1, a2;

	aa = &a;
	a.print();
	aa->print();
	cout << endl;
	a.sum();
	aa->sum();
	cout << endl;
	a.print();
	aa->print();


	cout << "-------------------------" << endl;
	cout << endl;
	bb = &b;
	b.print();
	bb->print();
	cout << endl;
	b.sum();
	bb->sum();
	cout << endl;
	b.print();
	bb->print();


	cout << "-------------------------" << endl;
	cout << endl;
	cc = &c;

	cout << "Введите двва числа" << endl;
	cin >> a1 >> a2;
	c.set(a1, a2);
	c.print();
	c.sum();
	c.print();
	//c.NUL();
	cout << endl;
	cout << "Введите двва числа" << endl;
	cin >> a1 >> a2;
	cc->set(a1, a2);
	cc->print();
	cc->sum();
	cc->print();
	//c.NUL();

	return 0;
}