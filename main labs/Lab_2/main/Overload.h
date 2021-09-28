#pragma once
#include <iostream>
#include "windows.h"
#include <string.h>

#define N 3

using namespace std;

class overload {
	string name;
	char type;
	int temperature;
	unsigned int speed;

public:
	overload();
	overload(string &name, char &type, int &temperature, unsigned int &speed);
	void set(const string n, const char t, const int tem, const unsigned int sp);
	void get(string& a, char& b, int& c, unsigned int& d)const;
	void show()const;
	bool operator == (const overload &other);
	overload operator + (const overload& other);
	overload operator = (const overload& other);


};