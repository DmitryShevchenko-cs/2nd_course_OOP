#pragma once

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <conio.h>
#define N 3

using namespace std;

class table {
	char* name;
	char type;
	int temperature;
	unsigned int speed;
public:
	void set(char* a, char b, int c, unsigned int d);
	void get(char* a, char &b, int &c, unsigned int&d);
	void show(void);
};


