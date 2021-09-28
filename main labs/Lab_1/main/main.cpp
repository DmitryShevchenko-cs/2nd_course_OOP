#include "Tabl.h"

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "ru");

	string n;
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

	cout << "\n\n\nРабота функции SHOW!\n";
	cout << "Вещество, Тип , Температура , Скорость: \n";
	for (int i = 0; i < N; i++)
	{
		obj[i].show();
		cout << "\n";
	}
	cout << "\n\n\nРабота функции NuLL!\n";
	cout << "Вещество, Тип , Температура , Скорость: \n";
	for (int i = 0; i < N; i++) {
		obj[i].NuLL(n, t, tem, sp);
		cout << n << " ";
		cout << t << " ";
		cout << tem << " ";
		cout << sp << " ";
		cout << "\n";
	}

	cout << "\n\nРабота функции GET!\n";
	cout << "Вещество, Тип , Температура , Скорость: \n";
	for (int i = 0; i < N; i++)
	{
		obj[i].get(n, t, tem, sp);
		//obj[i].show();
		cout << n << " ";
		cout << t << " ";
		cout << tem << " ";
		cout << sp << " ";
		cout << "\n";
	}
	
}
