#include "train.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choice;
	int user_num;
	std::string name;
	int number;
	double time;

	train TR[S]{};
	for (int i = 0; i < S; i++)
	{
		std::cout << "Пункт назначения, Номер, Время: ";
		std::cin >> name;
		std::cin >> number;
		std::cin >> time;
		TR[i].set(name, number, time);

	}
	TR->sort_num(TR);

	while (true) {
		std::cout << std::endl << std::endl;
		std::cout << "Выберите действие:" << std::endl;
		std::cout << "1- поиск по номеру поезда" << std::endl;
		std::cout << "2- сортировка по пункту назначения" << std::endl;
		std::cout << "3- вывод всех поездов" << std::endl;
		std::cout << "4- выход" << std::endl;
		std::cin >> choice;

		switch (choice) {
		case(1):
			TR->search(TR);
			break;
		case(2):
			TR->sort_destination(TR);
			std::cout << std::endl << "Произошла сортировка";
			break;
		case(3):
			for (int i = 0; i < S; i++) {
				std::cout << "Пункт назначения, Номер, Время: ";
				TR[i].show();
			}
			break;
		case(4):
			std::cout << "выход" << std::endl;
			return 0;

		default:
			std::cout << "Неверное число" << std::endl;
			break;
		}
	}

	
	
	


	return 0;
}