#include "complex.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char ch = ' ';
	string str;
	ifstream fl;
	ofstream of;
	int i = 0;
	fl.open("complex.txt");
	of.open("simple.txt");

	if (fl.is_open()) {

		if (of.is_open()) {

			while (fl.get(ch)) {

				if (ch != '\n') {

					if ((ch > 47 && ch < 58)) {
						str += ch;

					}

					if (str != "" && (ch < 47 || ch > 58)) {


						of << str << ' ';
						str = "";

						/*num[i] = atoi(str.c_str());
						i++;
						str = "";*/

					}
				}
				else of << '\n';

			}
			of.close();
		}
		else cout << "������ �������� �����" << endl;
		fl.close();
	}

	else cout << "������ �������� �����" << endl;
	
	return 0;
}

//��� ����� ������� ����� -> �������� � ������ -> ������������� ��� ����� -> �������� � ������ -> �������� � ���� -> ������� �� ������ ������ 