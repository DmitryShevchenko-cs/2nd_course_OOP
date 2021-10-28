#include "Table.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	short choice = 0;
	DB* tmp = new DB("\nБаза данных\n");

	while (true) {

		cout << "1. Добавить запись\n";
		cout << "2. Удалить запись\n";
		cout << "3. Сортировать базу\n";
		cout << "4. Вывести базу\n";
		cout << "5. Выход\n";
		cout << "> ";
		cin >> choice;

		switch (choice) {

		case 1:
			cout << "Вещество, Тип , Температура , Скорость: \n";
			tmp->add_rec("Анилин", 'Ч', 20, 1656);
			tmp->add_rec("Ртуть", 'Ч', 20, 1451);
			tmp->add_rec("Кедровое", 'М', 29, 1406);
			break;

		case 2:
			tmp->del_rec();
			cout << endl;
			break;

		case 3:
			tmp->sort_DB();
			cout << endl;
			break;

		case 4:
			cout << *tmp << endl;
			break;

		case 5:
			return 0;
		
		default: {
			cout << "Неверный вызов" << endl;
			break;
		}
		}

	}

	return 0;
}