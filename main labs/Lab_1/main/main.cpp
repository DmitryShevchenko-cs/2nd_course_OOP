#include "Tabl.h"

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char* n;
	char t;
	int tem;
	unsigned int sp;

	table obj[N];
	cout << "Работа функции SET!\n";
	for (int i = 0; i < N; i++)
	{
		cout << "Вещество, Тип , Температура , Скорость: ";
		cin >> n;
		cin >> t;
		cin >> tem;
		cin >> sp;
		obj[i].set(n, t, tem, sp);
	}

	cout << "Работа функции SHOW!\n";
	cout << "Вещество, Тип , Температура , Скорость: \n";
	for (int i = 0; i < N; i++)
	{
		obj[i].show();
		cout << "\n";
	}
	_getch();
	delete[] n;
}
