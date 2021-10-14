#include "Book.h"

ostream& operator <<(ostream& S, Book& ob) {

	S << setw(18) << ob.name;
	S << setw(18) << ob.autor;
	S << setw(5) << ob.col << '(' << ob.maxcol << ')';
	return S;
}

ostream& operator << (ostream& S, Library& ob) {
	
	S << ob.number<<'.';
	S << (Book&)ob;
	S << setw(6) << ob.availability << endl;
	return S;
}

string check_name(Library* ob, string NAME) {
	for (int i = 0; i < N; i++) 
		if (NAME == ob[i].name)
			return "Такая книга существует";
	return "У нас такой книги никогда не было";
}

string check_availability(Library* ob, int num) {

		if (num < 3 && num > 0) {
			if (ob[num - 1].availability) 
				return "У нас есть эта книга";
			else return "У нас нет такой книги";
		}
		else cout << "Вы ввели неправельный номер" << endl;

}

void get(Library* ob, int num) {

		if (num < 3 && num > 0) {
			if (ob[num - 1].availability) {
				ob[num - 1].col -= 1;
				if (ob[num - 1].col == 0)
					ob[num - 1].availability = 0;
			}
			else {
				cout << "У нас нету этой книги" << endl;
			}
		}
		else cout << "Вы ввели неправельный номер" << endl;

}

void getback(Library* ob, int num) {
	
	if (ob[num - 1].col == ob[num - 1].maxcol)
		cout << "ИЗвините, но все наши книги у нас на руках" << endl;
	else {
		ob[num-1].col++;
		if (!ob[num - 1].availability)
			ob[num - 1].availability = 1;
	}
}

int menu(Library * book) {
	int i;
	int choice;
	int num;
	string NAME;
	while (true) {
		
		i = 0;
		cout << endl << endl;
		cout << ++i << ". Показать все книги" << endl;
		cout << ++i << ". Проверить есть ли такая книга" << endl;
		cout << ++i << ". Проверить наличие книги" << endl;
		cout << ++i << ". Взять книгу" << endl;
		cout << ++i << ". Вернуть книгу" << endl;
		cout << ++i << ". Выход" << endl;
		cin >> choice;
		cout << endl;

		switch (choice) {
			case 1: 
				system("cls");
				for (int i = 0; i < N; i++)
					cout << book[i];
				break;
			case 2:
				system("cls");
				cout << "Введите название книги" << endl;
				getline(cin, NAME);
				//getline(cin, NAME);
				cout << check_name(book, NAME) << endl;
				break;
			case 3:
				system("cls");
				cout << "Введите номер книги которую хотите проверить на наличие >" ;
				cin >> num;
				cout << check_availability(book, num) << endl;
				break;
			case 4:
				cout << "Введите номер книги которую желаете взять >";
				cin >> num;
				get(book, num);
				break;
			case 5:
				cout << "Введите номер книги которую хотите вернуть >";
				cin >> num;
				getback(book, num);
				break;
			case 6:
				system("cls");
				return 0;;
			default:
				system("cls");
				cout << "Вы ввели неверный номер, попробуйте снова..." << endl << endl;
				break;

		}
	}
	return 0;
}