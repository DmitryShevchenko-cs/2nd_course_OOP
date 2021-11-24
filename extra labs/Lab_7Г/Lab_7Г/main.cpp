#include "Tabl.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	table* data = 0;
	DataFile DF;
	int col = 0;
	//system("cls");
	int choice = 0;
	while (true) {
		try {
			cout << "--------------------------------" << endl;
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
				cout << "Кол-во строк > ";
				cin >> col;
				DF.setnum(col);
				DF.dataCreate(data);
				cout << "База создана" << endl;
				break;
			case 2:
				DF.dataStatus(data);
				break;

			case 3:
				DF.dataStatus(data);
				cout << "Номер строки для записи в файл > ";
				cin >> choice;
				if (choice > DF.getnum() || choice <= 0)
					throw MyException("Вы вышли за пределы базы");
				else 
					DF.writeToFile("tabl.txt", data[choice - 1]);
				break;

			case 4:
				DF.dataStatus(data);
				cout << "Номер строки для записи в базу > ";
				cin >> choice;
				if (choice > DF.getnum() || choice <= 0)
					throw MyException("Вы вышли за пределы базы");
				else
					DF.readFromFile2("tabl.txt", data[choice - 1]);
				break;

			case 5:

				DF.writeData("tabl.txt", data);
				break;

			case 6:
				DF.readData("tabl.txt", data);
				break;

			case 7:
				cout << "Выход" << endl;
				return 1;

			default:
				throw MyException("Вы ввели не верный номер");
				break;
			}
		}

		catch (MyException ex) { cout << ex.what() << endl; }
	}
		
	
	
	delete[] data;
	return 0;
}