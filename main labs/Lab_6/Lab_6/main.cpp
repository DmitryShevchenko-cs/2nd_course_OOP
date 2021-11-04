#include "Animals.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	animals ob[5];
	int choice = 0;
	bool ex = false;
	bool b = true;
	while (b) {
		cout << "1 - Добавить базу" << endl;
		cout << "2 - Соритирвоать базу" << endl;
		cout << "3 - Вывести базу" << endl;
		cout << "4 - Выйти" << endl;
		cout << ">";
		cin >> choice;

		switch (choice) {
		case 1:
			change(ob[0], "Кабан", 250, 5, 2);
			change(ob[1], "Лось", 300, 20, 0);
			change(ob[2], "Лиса", 10, 5, 2);
			change(ob[3], "Волк", 50, 14, 1);
			change(ob[4], "Белка", 0.33, 5, 2);
			ex = true;
			cout << "База добавлена" << endl;
			break;

		case 2:
			if (!ex) {
				cout << "База пуста" << endl;
				break;
			}

			sort(ob);
			break;

		case 3:
			if (!ex) {
				cout << "База пуста" << endl;
				break;
			}
			cout << "База отсортирована" << endl;
			show(ob);
			break;

		case 4:
			cout << "Выход" << endl;
			b = 0;
			break;
		default:
			cout << "Вы ввели неверный номер" << endl;
			break;
		}


	}
	
	return 0;
}