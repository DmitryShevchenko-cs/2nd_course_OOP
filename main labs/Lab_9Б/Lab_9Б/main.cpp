#include "NumBook.h"


int main() {
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	setlocale(1251, "rus");
	string str;
	char l;
	multimap<name, number> myMap;
	myMap.emplace("Babenko", 380506012477);
	myMap.emplace("Alekseev", 380998765345);
	myMap.emplace("Alekseev", 380506012477);
	myMap.emplace("Brukh", 380998765345);
	myMap.emplace("Shevchenko", 380936457645);
	myMap.emplace("A1", 11);
	
	
	printMap(myMap);
	cout << endl << endl;
	cout << "¬ведите фамилию дл€ поиска:" << endl;
	cin >> str;
	searchname(myMap, str);

	cout << "¬ведите букву дл€ поиска:" << endl;
	cin >> l;
	search_l(myMap, l);

	cout << "¬ведите букву дл€ удалени€:" << endl;
	cin >> l;
	delete_l(myMap, l);
	cout << endl << endl;
	printMap(myMap);


	return 0;
}