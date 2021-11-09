#include "inheritance.h"

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	D4 temp(1, 2, 3, 4, 5, 6);
	cout << "D4 temp(4, 9, -1, 6, 8, 2);\n";
	cout << "\nСледуя иерархии класса D4: \n";
	temp.show();
	
	return 0;
}