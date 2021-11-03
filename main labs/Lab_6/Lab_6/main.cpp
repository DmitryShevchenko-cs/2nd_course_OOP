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
			change(ob[0], "name1", 1, 1, "type1");
			change(ob[1], "name2", 2, 2, "type2");
			change(ob[2], "name3", 3, 3, "type3");
			change(ob[3], "name4", 4, 4, "type4");
			change(ob[4], "name5", 5, 5, "type5");
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

			for (int i = 0; i < 5; i++)
				show(ob[i]);
			break;

		case 4:
			cout << "Выход" << endl;
			b = 0;

		default:
			cout << "Вы ввели неверный номер" << endl;
			break;
		}


	}
	
	return 0;
}