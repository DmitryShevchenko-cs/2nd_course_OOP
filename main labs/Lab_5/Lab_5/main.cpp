#include "complex.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char ch = ' ';
	string str;
	int num[10]{};
	ifstream fl;
	ofstream of;
	int i = 0;
	fl.open("complex.txt");

	if (fl.is_open()) {
		

		while (fl.get(ch)) {

			if (ch != '\n') {

				if (ch > 47 && ch < 58) {
					str += ch;
				}

				else num[i] = atoi(str.c_str());
			}
			i++;
			str = {};
		}
		
	}

	else cout << "Ошибка открытия файла" << endl;

	for (int j = 0; j < i; j++)
		cout << num[j] << endl;

	/*of.open("simple.txt", fstream::app);
	if (of.is_open()) {
		of << "-----------------" << endl;
		for (int j = 0; j < i+1; j++) {
			of << str[j] << endl;
		}
		of << "-----------------" << endl;
	}*/

	//else cout << "Ошибка открытия файла" << endl;
	
	return 0;
}

//нам нажно считать цифру -> добавить в строку -> приобразовать как число -> добавить в массив -> записать в файл -> перейти ко второй строке 