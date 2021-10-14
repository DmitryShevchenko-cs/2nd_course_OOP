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
			return "����� ����� ����������";
	return "� ��� ����� ����� ������� �� ����";
}

string check_availability(Library* ob, int num) {

		if (num < 3 && num > 0) {
			if (ob[num - 1].availability) 
				return "� ��� ���� ��� �����";
			else return "� ��� ��� ����� �����";
		}
		else cout << "�� ����� ������������ �����" << endl;

}

void get(Library* ob, int num) {

		if (num < 3 && num > 0) {
			if (ob[num - 1].availability) {
				ob[num - 1].col -= 1;
				if (ob[num - 1].col == 0)
					ob[num - 1].availability = 0;
			}
			else {
				cout << "� ��� ���� ���� �����" << endl;
			}
		}
		else cout << "�� ����� ������������ �����" << endl;

}

void getback(Library* ob, int num) {
	
	if (ob[num - 1].col == ob[num - 1].maxcol)
		cout << "��������, �� ��� ���� ����� � ��� �� �����" << endl;
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
		cout << ++i << ". �������� ��� �����" << endl;
		cout << ++i << ". ��������� ���� �� ����� �����" << endl;
		cout << ++i << ". ��������� ������� �����" << endl;
		cout << ++i << ". ����� �����" << endl;
		cout << ++i << ". ������� �����" << endl;
		cout << ++i << ". �����" << endl;
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
				cout << "������� �������� �����" << endl;
				getline(cin, NAME);
				//getline(cin, NAME);
				cout << check_name(book, NAME) << endl;
				break;
			case 3:
				system("cls");
				cout << "������� ����� ����� ������� ������ ��������� �� ������� >" ;
				cin >> num;
				cout << check_availability(book, num) << endl;
				break;
			case 4:
				cout << "������� ����� ����� ������� ������� ����� >";
				cin >> num;
				get(book, num);
				break;
			case 5:
				cout << "������� ����� ����� ������� ������ ������� >";
				cin >> num;
				getback(book, num);
				break;
			case 6:
				system("cls");
				return 0;;
			default:
				system("cls");
				cout << "�� ����� �������� �����, ���������� �����..." << endl << endl;
				break;

		}
	}
	return 0;
}