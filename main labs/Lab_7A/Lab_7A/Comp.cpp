#include "Comp.h"

void write(comp ob, string path) {
 	fstream f(path, ios::in | ios::app);
	if (!f.is_open())
		throw "Ошибка открытия файла на запись";
	else {
		f << ob.num1;
		f << " + " << ob.num2 << "i";
		f << endl;
		f.close();
	}
}

void read(float* arr, string path) {

	ifstream ofstr(path);
	if (!ofstr.is_open())
		throw "Ошибка открытия файла на чтение";

	else {
		for (int i = 0; i < size; i++) {
			ofstr >> arr[i];
		}
	}
	ofstr.close();

}