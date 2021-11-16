#include "Comp.h"

void write(comp& ob, string path) {
 	fstream f(path, ios::in | ios::app);
	if (!f.is_open())
		cout << "gg";
	else {
		f << ob.num1;
		f << " + " << ob.num1 << "i";
		f << endl;
		f.close();
	}
}

void read(float* arr, string path) {

	ifstream ofstr(path);
	if (!ofstr.is_open())
		cout << "gg";

	else {
		for (int i = 0; i < size; i++) {
			ofstr >> arr[i];
		}
	}
	ofstr.close();

}