#include "Book.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string find;
	Library book[N]{ 
		Library(1, "Базовый курс С++", "Герберт Шилдт", 610, false),
		Library(2, "C# для чайников", "Мюллер Джон", 608, true),
		Library(3, "Head First Java", "Берт Бэйтс", 605, true)
	};

	for (int i = 0; i < N; i++)
		cout << book[i];
	cout << cheak_name(book) << endl;

	cout << "--------------------------------------" << endl;
	cout << cheak_availability(book) << endl;
	for (int i = 0; i < N; i++)
		cout << book[i];
	
	cout << "--------------------------------------" << endl;
	take(book);
	for (int i = 0; i < N; i++)
		cout << book[i];

	return 0;
}