#include "Animals.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	animals ob[5];
	int choice = 0;
	bool ex = false;
	bool b = true;
	while (b) {
		cout << "1 - �������� ����" << endl;
		cout << "2 - ������������ ����" << endl;
		cout << "3 - ������� ����" << endl;
		cout << "4 - �����" << endl;
		cout << ">";
		cin >> choice;

		switch (choice) {
		case 1:
			change(ob[0], "�����", 250, 5, 2);
			change(ob[1], "����", 300, 20, 0);
			change(ob[2], "����", 10, 5, 2);
			change(ob[3], "����", 50, 14, 1);
			change(ob[4], "�����", 0.33, 5, 2);
			ex = true;
			cout << "���� ���������" << endl;
			break;

		case 2:
			if (!ex) {
				cout << "���� �����" << endl;
				break;
			}

			sort(ob);
			break;

		case 3:
			if (!ex) {
				cout << "���� �����" << endl;
				break;
			}
			cout << "���� �������������" << endl;
			show(ob);
			break;

		case 4:
			cout << "�����" << endl;
			b = 0;
			break;
		default:
			cout << "�� ����� �������� �����" << endl;
			break;
		}


	}
	
	return 0;
}