#include "Table.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	short choice = 0;
	DB* tmp = new DB("\n���� ������\n");

	while (true) {

		cout << "1. �������� ������\n";
		cout << "2. ������� ������\n";
		cout << "3. ����������� ����\n";
		cout << "4. ������� ����\n";
		cout << "5. �����\n";
		cout << "> ";
		cin >> choice;

		switch (choice) {

		case 1:
			cout << "��������, ��� , ����������� , ��������: \n";
			tmp->add_rec("������", '�', 20, 1656);
			tmp->add_rec("�����", '�', 20, 1451);
			tmp->add_rec("��������", '�', 29, 1406);
			break;

		case 2:
			tmp->del_rec();
			cout << endl;
			break;

		case 3:
			tmp->sort_DB();
			cout << endl;
			break;

		case 4:
			cout << *tmp << endl;
			break;

		case 5:
			return 0;
		
		default: {
			cout << "�������� �����" << endl;
			break;
		}
		}

	}

	return 0;
}