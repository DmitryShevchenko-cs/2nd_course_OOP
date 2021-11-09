#include "complex.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char ch = ' ';
	string str;
	ifstream ifstr;
	ofstream ofstr;
	
	ifstr.open("complex.txt");
	ofstr.open("simple.txt");

	if (ifstr.is_open()) {

		if (ofstr.is_open()) {

			while (ifstr.get(ch)) {

				if ((ch > 47 && ch < 58)) {
					str += ch;

				}

				if (str != "" && (ch < 47 || ch > 58)) {


					ofstr << str << ' ';
					str = "";

				}

				if (ch == '\n') {
					ofstr << '\n';
				}

			}
			ofstr.close();
		}
		else cout << "ошибка открытия файла на запись" << endl;
		ifstr.close();
	}

	else cout << "Ошибка открытия файла на чтение " << endl;
	
	return 0;
}

