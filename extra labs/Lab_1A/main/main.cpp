#include "P.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b;
	int sum, prod;

	point point_1;
	cout << "Конструктор по умолчанию:" << endl;
	point_1.count(sum, prod);
	point_1.show(sum, prod);
	cout << endl;


	point point_2(1, 5);
	cout << "Конструктор с параметрами:" << endl;
	point_2.count(sum, prod);
	point_2.show(sum, prod);
	cout << endl;

	point point_3;
	cout << "Функция инициализации переменных х и у:" << endl;
	cout << "Введите два числа:";
	cin >> a >> b;
	point_3.set(a, b);
	point_3.count(sum, prod);
	point_3.show(sum, prod);
	cout << endl;

	point point_4; //pointer
	cout << "Функция инициализации переменных х и у:" << endl;
	cout << "Введите два числа:";
	cin >> a >> b;
	point_4.set(a, b);
	point_4.count(&sum, &prod);
	point_4.show(sum, prod);
	cout << endl;

	point point_5(point_2);
	cout << "Конструктор копирования:" << endl;
	point_5.count(sum, prod);
	point_5.show(sum, prod);
	cout << endl;


	
}