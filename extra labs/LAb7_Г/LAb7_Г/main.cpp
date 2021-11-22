#include "Table.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char* n;
	char t;
	int tem;
	unsigned int sp;

	table obj[N]{
			table("Анилин", 'Ч', 20, 1656),
			table("Ртуть", 'Ч', 20, 1451),
			table("Кедровое", 'М', 29, 1406),
	};
	shapka();
	for (int i = 0; i < N; i++) {
		cout << obj[i];
	}

	////////////////////////////////////// 
	

	writeToFile("table.txt", obj[0]);

	obj[1] = readFromFile("table.txt");
	cout << endl << endl;

	shapka();
	for (int i = 0; i < N; i++) {
		cout << obj[i];
	}


	return 0;
}