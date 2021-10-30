#include "complex.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char ch;
	int a[2];
	
	fstream fl;
	fl.open("complex.txt", fstream::in | fstream::out);

	if (fl.is_open()) {
		int i = 0;
		
		while (!fl.eof()) {

			fl >> ch;
			if (ch > 49 && ch < 57) {

				a[i] = (int)ch;
			}
			i++;
		}
		for (int i = 0; i < 2; i++) {

			fl << a[i] << '\t';

		}



		fl.close();
	}

	else cout << "Ошибка открытия файла" << endl;


}
