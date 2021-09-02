#include "Tabl.h"

void table::set(char* a, char b, int c, unsigned int d) {
	strcpy(name, a);
	type = b;
	temperature = c;
	speed = d;

}

void table::get(char* a, char& b, int& c, unsigned int& d) {
	delete[] a;
	a = new char[strlen(name) + 1];

	strcpy(a, name);
	b = type;
	c = temperature;
	d = speed;

}

void table::show(void) {
	cout << name << " ";
	cout << type << "	";
	cout << temperature << " ";
	cout << speed << " ";
}