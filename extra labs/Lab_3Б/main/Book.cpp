#include "Book.h"

ostream& operator <<(ostream& S, Book& ob) {

	S << setw(20) << ob.name;
	S << setw(20) << ob.autor;
	S << setw(5) <<ob.pages;
	return S;
}

ostream& operator << (ostream& S, Library& ob) {
	
	S << setw(2) << ob.number<<'.';
	S << (Book&)ob;
	S << setw(6) << ob.availability << endl;
	return S;
}

string cheak_name(Library* ob) {

	string NAME;
	cout << "Введите название книги" << endl;
	getline(cin, NAME);
	
	for (int i = 0; i < N; i++) {

		if (NAME == ob[i].name)
			return "Такая книга существует";

	}
	return "У нас такой книги никогда не было";
}

string cheak_availability(Library* ob) {

	int num;
	
	while (true) {
		cout << "Введите номер книги которую желаете взять" << endl;
		cin >> num;
		if (num < 3 && num > 0) {
			if (ob[num - 1].availability) 
				return "У нас есть эта книга";
			else return "У нас нет такой книги";
		}
		else cout << "Вы ввели неправельный номер" << endl;

	}
}

void take(Library* ob) {

	int num;
	
	while (true) {
		cout << "Введите номер книги которую желаете взять" << endl;
		cin >> num;
		if (num < 3 && num > 0) {
			if (ob[num - 1].availability) {
				ob[num - 1].availability = 0;
				break;
			}
			else {
				cout << "У нас нету этой книги" << endl;
				break;
			}
		}
		else cout << "Вы ввели неправельный номер" << endl;

	}

}

//