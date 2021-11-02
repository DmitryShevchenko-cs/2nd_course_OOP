#include "complex.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char ch = ' ';
	string str[2]{};

	ifstream fl;
	ofstream of;

	fl.open("complex.txt");

	if (fl.is_open()) {
		int i = 0;

		while (fl.get(ch)) {

			if (ch == '\n')
				i++;
		
			else if (ch > 47 && ch < 58)
				str[i] += ch;

			else str[i] += ' ';
			
		}
	}

	else cout << "Ошибка открытия файла" << endl;

	of.open("complex.txt", fstream::app);
	if (of.is_open()) {
		of << endl;
		of << str[0] << endl;
		of << str[1];
		
	}

	else cout << "Ошибка открытия файла" << endl;
	

}
