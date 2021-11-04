#include "Computer.h"

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
			change(ob[0], "Кабан", 1, 1, "Желуди");
			change(ob[1], "Лось", 2, 2, "Трава");
			change(ob[2], "Лиса", 3, 3, "Мелкие животные");
			change(ob[3], "Волк", 4, 4, "Мелкие животные");
			change(ob[4], "Белка", 5, 5, "Грибы");
			ex = true;
			break;

		case 2:

			sort(ob);
			break;

		case 3:
			if (!ex) {
				cout << "База пуста" << endl;
				break;
			}

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