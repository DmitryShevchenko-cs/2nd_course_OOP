#include "Array.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		RandomNum();
	cout << endl;
	CheakNum(4);
	
	for (int i = 0; i < 10; i++)
		ReadNum();

	

	return 0;
}