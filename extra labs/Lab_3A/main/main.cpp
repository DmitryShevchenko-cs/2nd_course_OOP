#include "SOBAKA.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SPANIEL sp1("Белый");
	cout << sp1 << endl;

	SPANIEL sp2(20, 1.5);
	cout << sp2 << endl;

	SPANIEL sp3(15, 2, "Желтый");
	cout << sp3 << endl;
	return 0;
}