#include "Array.h"


int main() {
	
	setlocale(LC_ALL, "RU");
	
	srand(time(NULL));
	try {
		WriteNum(); //записываем рандомное число
		ReadNum(); // чтение числа
		CheakNum(); // проверка числа 
		ReadNum(); // чтение числа
	}

	catch (const char* str) {
	cout << endl << endl << str << endl << endl;
	}

	return 0;
}