#include "P.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b;

	point point_1;
	cout << "Конструктор по умолчанию:" << endl;
	point_1.show();
	cout << endl;


	point point_2(1, 5);
	cout << "Конструктор с параметрами:" << endl;
	point_2.show();
	cout << endl;

	point point_3;
	cout << "Функция инициализации переменных х и у:" << endl;
	cout << "Введите два числа:";
	cin >> a >> b;
	point_3.set(a, b);
	point_3.show();
	cout << endl;

	point point_4(point_2);
	cout << "Конструктор копирования:" << endl;
	point_4.show();
	cout << endl;
}