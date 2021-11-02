#include "Computer.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	comp ob[5];
	int choice = 0;
	bool ex = false;
	
		while (true) {
			cout << "1 - Добавить базу" << endl;
			cout << "2 - Соритирвоать базу" << endl;
			cout << "3 - Вывести базу" << endl;
			cout << "4 - Выйти" << endl;
			cout << ">";

			switch (choice) {
			case 1:
				
				ex = true;
				break;

			case 2:
				change()

				for (int i = 0; i < 5; i++)
					ob[i].sort();
				break;

			case 3:
				if (!ex) {
					cout << "База пуста" << endl;
					break;
				}

				break;

			case 4:
				cout << "Выход" << endl;
				return 0;

			default:
				cout << "Вы ввели неверный номер" << endl;
				break;
			}


		}
	
	return 0;
}