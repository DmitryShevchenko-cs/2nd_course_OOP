#include "Array.h"

//int main1() {
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand(time(NULL));
//
//	for (int i = 0; i < 10; i++)
//		RandomNum();
//	cout << endl;
//	CheakNum(4);
//	
//	for (int i = 0; i < 10; i++)
//		ReadNum();
//
//	
//
//	return 0;
//}

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	srand(time(NULL));
	try {
		WriteNum();
		ReadNum();
		CheakNum(7);
		ReadNum();
	}

	catch (const char* str) {
	cout << endl << endl << str << endl << endl;
	}

	return 0;
}