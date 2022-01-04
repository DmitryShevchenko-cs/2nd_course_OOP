#include "Comp.h"

int main() {

	setlocale(LC_ALL, "RU");

	comp ob[size/2]; //создаем масив класса comp, делим на два потому что в комплексном числе два простых числа
	float arr[size]; // созадем массви простых чисел
	string path1 = "numbers.txt"; // путь к простым числем
	string path2 = "complex.txt";// путь к комплексным числам
	try {
		read(arr, path1);// читаем в массив arr
		int j = 0;
		for (int i = 0; i < size / 2; i++) { //запосляняем из массива arr в массив класса comp

			ob[i] = comp(arr[j++], arr[j]); 
			j++;
			ob[i].show(); // выводим на экран комплексное число

			write(ob[i], path2);// записуем в файл комплексное число 
		}
	}
	catch (const char* str) {
		cout << endl << str; // если еслть ошибка то ловим ее здесь (мы ее бросали в функциях)
	}
}

