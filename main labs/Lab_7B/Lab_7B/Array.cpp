#include "Array.h"

void WriteNum() {

	int num = 0;
	fstream fil;
	fil.open("arr.txt", ios::binary | ios::out); // открытие файла на чтение
	if (!fil.is_open()) throw "Ошибка открытия файла на запись"; // кидаем ошибку в случае не открытия

	for (int i = 0; i < size; i++) { // создаем рандомное число и записываем в файл
		num = rand() % 20 + 1;
		fil.write((char*)&num, sizeof(int));
	}
	fil.close();

}

void ReadNum() {

	fstream fil;
	fil.open("arr.txt", ios::binary | ios::in); // открытие файла на чтение
	if (!fil.is_open()) throw "Ошибка открытия файла на чтение";// кидаем ошибку в случае не открытия

	int num = 0;
	for (int i = 0; i < size; i++) { // читаем ОДНО число с файла, после чего указатель в файле перемещается 
		fil.read((char*)&num, sizeof(int)); // на sizeof(int) байт и потом выводим число в косоль и так по циклу 
		cout << num << '\t';
	}
	fil.close();
}

void CheakNum() {

	fstream fil;
	fil.open("arr.txt", ios::binary | ios::in | ios::out); // открытие файла на чтение и запись
	if (!fil.is_open()) throw "Ошибка открытия файла на проверку четности числа и зачены";// кидаем ошибку в случае не открытия

	int n1 = 88, n2 = 77; 
	int num = 0;
	fil.seekg(4 * sizeof(int)); // перемещаем указатель в файле на (4 * sizeof(int)) и  
	fil.read((char*)&num, sizeof(int)); // потом считываем 5 число с файла 
	cout << endl << endl;

	
	if (num % 2 == 0) { // если число парное то все до 5 числа меняем на 88
		fil.seekp(0);// перемещаем указатель в файле на начало файла 
		for (int i = 0; i < 5; i++) {
			fil.write((char*)&n1, sizeof(int)); // до 5 числа включительно меняем все числа на 88
		}
	}
	else {// если число не парное то все после 5 числа меняем на 77
		fil.seekp(5  * sizeof(int));// перемещаем указатель в файле на 6 елемент в файле 
		for (int i = 0; i < 5; i++) { 
			fil.write((char*)&n2, sizeof(int));// посел 5 числа меняем все числа на 88
		}
	}

	fil.close();
}
