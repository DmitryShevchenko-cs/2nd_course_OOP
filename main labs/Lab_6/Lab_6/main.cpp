#include "Computer.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	comp ob[5];
	int choice = 0;
	bool ex = false;
	
		while (true) {
			cout << "1 - �������� ����" << endl;
			cout << "2 - ������������ ����" << endl;
			cout << "3 - ������� ����" << endl;
			cout << "4 - �����" << endl;
			cout << ">";

			switch (choice) {
			case 1:
				
				ex = true;
				break;

			case 2:
				change()

				for (int i = 0; i < 5; i++)
					ob[i].sort();
				break;

			case 3:
				if (!ex) {
					cout << "���� �����" << endl;
					break;
				}

				break;

			case 4:
				cout << "�����" << endl;
				return 0;

			default:
				cout << "�� ����� �������� �����" << endl;
				break;
			}


		}
	
	return 0;
}