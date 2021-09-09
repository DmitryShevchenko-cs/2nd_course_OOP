#pragma once

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <conio.h>
#define N 3

using namespace std;

class table {
	string name;
	char type;
	int temperature;
	unsigned int speed;
public:
	void set(const string n, const char t, const int tem, const unsigned int sp);
	void get(string &a, char &b, int &c, unsigned int&d)const;
	void show(void)const;
};


