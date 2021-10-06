#include "inheritance.h"

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	D4 temp(100, 200, 300, 400, 500, 600, 700);
	//D4 temp1(1, 2, 3, 4, 5);
	cout << "D4 temp(100,200,300,400,500);\n";
	cout << "D4 temp1(1,2,3,4,5);\n";
	cout << "\nСледуя иерархии класса D4: \n";
	temp.show_D4();
	cout << "\nСледуя иерархии класса D4\n";
	//temp1.show_D4();
	
	return 0;
}