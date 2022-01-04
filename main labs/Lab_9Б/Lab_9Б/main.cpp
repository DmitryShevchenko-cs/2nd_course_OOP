#include "NumBook.h"


int main() {
	SetConsoleCP(1251); //русификатор
	SetConsoleOutputCP(1251); //русификатор

	string str;
	char l;
	multimap<name, number> myMap; // создаем мап из наших классов
	myMap.emplace("Петров", 380506012477);
	myMap.emplace("Иванов", 380998765345);
	myMap.emplace("Андреев", 380506012477);
	myMap.emplace("Авраменко", 380998765345);
	myMap.emplace("Бондарев", 380936457645);
	
	
	
	printMap(myMap);
	cout << endl << endl;
	cout << "Введите фамилию для поиска:" << endl;
	cin >> str;
	searchname(myMap, str);// ищем по имени

	cout << "Введите букву для поиска:" << endl;
	cin >> l;
	search_l(myMap, l);// ищем по букве

	cout << "Введите букву для удаления:" << endl;
	cin >> l;
	delete_l(myMap, l); // удаляем по букве
	cout << endl << endl;
	printMap(myMap); // печатаем иток


	return 0;
}