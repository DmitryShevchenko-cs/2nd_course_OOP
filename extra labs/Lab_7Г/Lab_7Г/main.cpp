#include "Tabl.h"
#include "Datafile.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string n;
	char t;
	int tem;
	unsigned int sp;
	DataFile DF;
	table* obj = new table[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Вещество, Тип , Температура , Скорость: ";
		cin >> n;
		cin >> t;
		cin >> tem;
		cin >> sp;
		obj[i].set(n, t, tem, sp);
	}
	system("cls");
	cout << "Вещество, Тип , Температура , Скорость: \n";
	for (int i = 0; i < N; i++)
	{
		cout << i << ". ";
		obj[i].show();
		cout << "\n";
	}

	//obj[0].writeToFile("table.txt", obj[0]);
	//obj[2].readFromFile2("table.txt", obj[2]);


	//cout << "Вещество, Тип , Температура , Скорость: \n";
	//for (int i = 0; i < N; i++)
	//{
	//	obj[i].show();
	//	cout << "\n";
	//}

	DF.writeData("table.txt", obj);
	//obj[2].readData("table.txt", obj);
	DF.readFromFile2("table.txt", obj[2]);
	cout << "Вещество, Тип , Температура , Скорость: \n";
	obj[2].show();
	delete[] obj;
	obj = 0;
	return 0;
}