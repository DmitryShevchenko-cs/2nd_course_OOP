#include "Overload.h"

overload::overload() {
	name = "---";
	type = '-';
	temperature = 0;
	speed = 0;
}

overload::overload(string &name, char& type, int& temperature, unsigned int& speed){
	this->name = name;
	this->type = type;
	this->temperature = temperature;
	this->speed = speed;
}

void overload::set(const string n, const char t, const int tem, const unsigned int sp) {
	this->name = n;
	this->type = t;
	this->temperature = tem;
	this->speed = sp;

}

void overload::get(string& a, char& b, int& c, unsigned int& d)const {

	a = name;
	b = type;
	c = temperature;
	d = speed;

}

void overload::show()const {
	cout << name << " ";
	cout << type << " ";
	cout << temperature << " ";
	cout << speed << " ";
}

bool  overload::operator == (const overload& other) {

	if (this->name != other.name)
		return 0;
	else if (this->type != other.type)
		return 0;
	else if (this->temperature != other.temperature)
		return 0;
	else if (this->speed != other.speed)
		return 0;
	else return 1;

}

overload overload::operator = (const overload& other) {

	this->name = other.name;
	this->type = other.type;
	this->temperature = other.temperature;
	this->speed = other.speed;
	return other;// a sho esli ne vozvrashat`

}

overload overload::operator + (const overload& other) {

	overload temp;
	temp.name = this->name + other.name;

	temp.type = this->temperature + other.temperature;
	temp.speed = this->speed + other.speed;
	return temp;
}
