#include "Tabl.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	table* data = 0;
	DataFile DF;
	int col = 0;;
	//system("cls");
	int choice = 0;

	while (true) {
		

		cout << "1. Создать базу" << endl;
		cout << "2. Информация о базе" << endl;
		cout << "3. Сохранение одной строки" << endl;
		cout << "4. Чтение одной строки " << endl;
		cout << "5. Сохранение всей бази" << endl;
		cout << "6. Чтение всей бази" << endl;
		cout << "7. Выход" << endl;
		cout << "Введите номер поля > " << endl;
		cin >> choice;

		switch (choice) {

		case 1:
			cout << "colvostrok > ";
			cin >> col;
			DF.setnum(col);
			DF.dataCreate(data);
			break;
		case 2:
			DF.dataStatus(data);
			break;

		case 3:
			DF.dataStatus(data);
			cout << "nomerstroki > ";
			cin >> choice;
			if (choice > col || choice < 0)
				cout << "error";
			else
				DF.writeToFile("tabl.txt", data[choice]);
			break;

		case 4:
			DF.dataStatus(data);
			cout << "nomerstroki > ";
			cin >> choice;
			if (choice > col || choice < 0)
				cout << "error";
			else
				DF.readFromFile2("tabl.txt", data[choice]);
			break;

		case 5:
			DF.writeData("tabl.txt", data);
			break;

		case 6:
			DF.readData("tabl.txt", data);
			break;

		case 7:
			return 1;

		default:
			cout << "Вы ввели не верный номер" << endl;
			break;
		}

	}

	delete[] data;
	return 0;
}