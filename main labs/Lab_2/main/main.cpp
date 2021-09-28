#include "Overload.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string n;
	char t;
	int tem;
	unsigned int sp;

	overload obj[N];

	for (int i = 0; i < N; i++)
	{
		cout << "Вещество, Тип , Температура , Скорость: ";
		cin >> n;
		cin >> t;
		cin >> tem;
		cin >> sp;
		obj[i].set(n, t, tem, sp);
	}

	
	cout << "Вещество, Тип , Температура , Скорость: \n";
	for (int i = 0; i < N; i++)
	{
		obj[i].show();
		cout << "\n";
	}
}

