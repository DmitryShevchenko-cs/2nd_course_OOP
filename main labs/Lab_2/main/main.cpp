﻿#include "Overload.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char* n;
	char t;
	int tem;
	unsigned int sp;
	int num1, num2;

	n = new char[10];
	overload obj[N]{
			overload("Анилин", 'Ч', 20, 1656),
			overload("Ртуть", 'Ч', 20, 1451),
			overload("Кедровое", 'М', 29, 1406),
	};
	cout << "Вещество, Тип , Температура , Скорость: \n";
	for (int i = 0; i < N; i++)
	{
		obj[i].show();
		cout << "\n";
	}
	
	////////////////////////////////////////////////////////
	
	cout << "\nПерегрузка оператора присваивания '='.\n";
	while (true) {
		cout << "Введите номера экземпляров класса: заменяемый и заменяющий>\n";
		cin >> num1;
		cin >> num2;
		if (isvalid(num1, num2) != 0);
		else {
			obj[num1] = obj[num2];
			break;
		}

	}
	
	cout << "Вещество, Тип , Температура , Скорость: \n";
	for (int i = 0; i < N; i++)
	{
		obj[i].show();
		cout << "\n";
	}
	
	//////////////////////////////////////////////////////////////

	cout << "\nПерегрузка оператора соответствия '=='.\n";
	while (true) {
		cout << "Введите номера экземпляров класса, которые сравниваем:>\n";
		cin >> num1;
		cin >> num2;
		if (isvalid(num1, num2) != 0);
		else {
			obj[num1] == obj[num2];
			break;
		}
	}
	
	///////////////////////////////////////////////

	cout << "\nПерегрузка оператора суммы '+'.\n";
	overload Temp;
	while (true) {
		cout << "Введите номера экземпляров класса, которые надо сложить>\n";
		cin >> num1;
		cin >> num2;
		if (isvalid(num1, num2) != 0);
		else {
			Temp=obj[num1] + obj[num2];
			cout << "Вещество, Тип , Температура , Скорость: \n";
			Temp.get(n, t, tem, sp);
			break;
		}
	}
	
	

	//////////////////////////////
	
	cout << "\nПерегрузка оператора потокового ввода '>>'.";
	cout << "\nВведите номер экземпляра класса: ";
	cin >> num1;
	if ((num1 > N - 1) || (num1 < 0)) { cout << "Ошибка! Экземпляра с таким индексом не существует."; _getch(); exit(-1); }
	cin >> obj[num1];
	
	/////////////////////////////
	
	cout << "\nПерегрузка оператора потокового вывода '<<'.";
	cout << "\nВведите номер экземпляра класса: ";
	cin >> num1;
	if ((num1 > N - 1) || (num1 < 0)) { cout << "Ошибка! Экземпляра с таким индексом не существует."; _getch(); exit(-1); }
	cout << obj[num1];
	
	//////////////////
	_getch();
	cout << "\nПерегрузка оператора '[]'.";

	/*for (int i = 0; i < N; i++) {
		obj[i].show();
		cout << endl << obj[i].operator[] (i) << endl;
	}*/
	
	for (int i = 0; i < N; i++) {
		cout << endl << obj[i][2] << endl;
	}

	//////////////////////////

	cout << "\nПерегрузка оператора '()'.";
	for (int i = 0; i < N; i++)
		obj[i]();
	cout << endl;
	for (int i = 0; i < N; i++)
		obj[i].show();

}

