#include "Computer.h"

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
			change(ob[0], "�����", 1, 1, "������");
			change(ob[1], "����", 2, 2, "�����");
			change(ob[2], "����", 3, 3, "������ ��������");
			change(ob[3], "����", 4, 4, "������ ��������");
			change(ob[4], "�����", 5, 5, "�����");
			ex = true;
			break;

		case 2:

			sort(ob);
			break;

		case 3:
			if (!ex) {
				cout << "���� �����" << endl;
				break;
			}

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