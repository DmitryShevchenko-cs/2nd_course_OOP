#include "Tabl.h"

void table::set(const string n, const char t, const int tem, const unsigned int sp) {
	this->name = n;
	this->type = t;
	this->temperature = tem;
	this->speed = sp;

}

void table::get(string &a, char& b, int& c, unsigned int& d) {

	a = name;
	b = type;
	c = temperature;
	d = speed;

}

void table::show(void)const {
	cout << name << " ";
	cout << type << " ";
	cout << temperature << " ";
	cout << speed << " ";
}