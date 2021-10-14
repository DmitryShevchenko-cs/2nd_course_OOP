#include "Book.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string find;
	Library book[N]{ 
		Library(1, "Базовый курс С++", "Герберт Шилдт", 0, 1, false),
		Library(2, "C# для чайников", "Мюллер Джон", 2, 2,true),
		Library(3, "Head First Java", "Берт Бэйтс", 1, 2,true)
	};

	menu(book);
	
	return 0;
}