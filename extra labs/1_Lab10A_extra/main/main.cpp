#include "train.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

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
	for (int i = 0; i < S; i++){
		std::cout << "Пункт назначения, Номер, Время: ";
		TR[i].show();
	
	}

	std::cout << "Введите номер поезда:";
	std::cin >> user_num;
	TR->search(TR, user_num);

	return 0;
}