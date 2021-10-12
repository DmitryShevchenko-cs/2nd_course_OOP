#include "Book.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Library book[3]{ 
		Library("Базовый курс C++", "Герберт Шилдт", 610, 10, true),
		Library("C# для чайников", "Мюллер Джон", 608, 8, true),
		Library("Head First Java", "Берт Бэйтс", 605, 15, true)
	};

	for (int i = 0; i < 3; i++)
		cout << book[i];

	return 0;
}