#include "Array.h"

void WriteNum() {

	int num = 0;
	fstream fil;
	fil.open("arr.txt", ios::binary | ios::in | ios::out);
	if (!fil.is_open()) throw "Ошибка открытия файла на запись";

	for (int i = 0; i < size; i++) {
		num = rand() % 20 + 1;
		fil.write((char*)&num, sizeof(int));
	}
	fil.close();

}

void ReadNum() {

	fstream fil;
	fil.open("arr.txt", ios::binary | ios::in | ios::out);
	if (!fil.is_open()) throw "Ошибка открытия файла на чтение";

	int num = 0;
	fil.seekg(0);
	for (int i = 0; i < size; i++) {
		fil.read((char*)&num, sizeof(int));
		cout << num << '\t';
	}
	fil.close();
}

void CheakNum(int number) {

	fstream fil;
	fil.open("arr.txt", ios::binary | ios::in | ios::out);
	if (!fil.is_open()) throw "Ошибка открытия файла на проверку четности числа и зачены";

	int n1 = 88, n2 = 77;
	int num = 0;
	fil.seekg(4 * sizeof(int));
	fil.read((char*)&num, sizeof(int));
	cout << endl << num << endl;

	fil.seekp(0);
	if (num % 2 == 0)
		for (int i = 0; i < number - 1; i++) {
			fil.write((char*)&n1, sizeof(int));
		}
	else
		for (int i = 0; i < number - 1; i++) {
			fil.write((char*)&n2, sizeof(int));
		}

	fil.close();
}
