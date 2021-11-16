#include "Comp.h"

void write(comp& ob, string path) {
 	fstream f(path, ios::in);
	f << ob.num1;
	f << ob.num1;
	f << " + i";
	f << endl;
	f.close();
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