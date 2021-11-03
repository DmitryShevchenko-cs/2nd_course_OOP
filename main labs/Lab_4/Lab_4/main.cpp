#include "Table.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	short choice = 0;
	DB* tmp = new DB("\n���� ������\n");
	char* N = new char[20];
	char t;
	unsigned tem;
	int sp;
	bool b = 1;
	while (b) {
		cout << "� ���� " << tmp->getcol() << endl;
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
			cin >> N >> t >> tem >> sp;
			tmp->add_rec(N, t, tem, sp);
			//tmp->add_rec("������", '�', 20, 1656);
			//tmp->add_rec("�����", '�', 20, 1451);
			//tmp->add_rec("��������", '�', 29, 1406);
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
			b = 0;
			break;
		
		default: {
			cout << "�������� �����" << endl;
			break;
		}
		}

	}

	delete[] N;
	delete tmp;
	return 0;
}