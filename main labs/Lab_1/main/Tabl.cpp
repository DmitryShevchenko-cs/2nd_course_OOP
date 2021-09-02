#include "Tabl.h"

void table::set(string a, char b, int c, unsigned int d) {
	name = a;
	type = b;
	temperature = c;
	speed = d;

}

void table::get(string &a, char& b, int& c, unsigned int& d) {

	a = name;
	b = type;
	c = temperature;
	d = speed;

}

void table::show(void) {
	cout << name << " ";
	cout << type << " ";
	cout << temperature << " ";
	cout << speed << " ";
}