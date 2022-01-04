#include "Comp.h"

void write(comp ob, string path) {
 	fstream f(path, ios::in | ios::app); //in - запись; app - дозапись
	if (!f.is_open())// если файл не открывается то кидаем ошибку в catch в main()
		throw "Ошибка открытия файла на запись";
	else {
		f << ob.num1;//запись первого числа
		f << " + " << ob.num2 << "i";// запись обьекта второго числа
		f << endl; // переход на следующую строку
		f.close();// закрываем файл
	}
}

void read(float* arr, string path) {

	ifstream ofstr(path); // ifstream-чтение
	if (!ofstr.is_open())// если файл не открывается то кидаем ошибку catch в main()
		throw "Ошибка открытия файла на чтение";

	else {
		for (int i = 0; i < size; i++) { //цикл, в нем считываем поелементно в массив,который мы передали как параметр
			ofstr >> arr[i];			 
		}
	}
	ofstr.close();// закрываем файл

}