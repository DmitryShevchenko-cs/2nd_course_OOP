#include "complex.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char ch = ' ';
	string str[100]{};
	int i = 0;
	ifstream fl;
	ofstream of;

	fl.open("complex.txt");

	if (fl.is_open()) {
		

		while (fl.get(ch)) {


			if (ch == '\n')
				i++;

			if (ch == '+')
				str[i] += ' ';

			if (ch > 47 && ch < 58)
				
				str[i] += ch;

			
		}
	}

	else cout << "Ошибка открытия файла" << endl;

	of.open("simple.txt", fstream::app);
	if (of.is_open()) {
		of << "-----------------" << endl;
		for (int j = 0; j < i+1; j++) {
			of << str[j] << endl;
		}
		of << "-----------------" << endl;
	}

	else cout << "Ошибка открытия файла" << endl;
	
	return 0;
}
