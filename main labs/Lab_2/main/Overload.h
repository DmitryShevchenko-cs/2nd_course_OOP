#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <string.h>
#include <iomanip>
#include <conio.h>

#define N 3

using namespace std;

class overload {
	char* name;
	string type;
	int temperature;
	unsigned int speed;

	friend void shapka();
	friend void linebuild();
	friend int isvalid(int a, int b);
	friend istream& operator>>(istream& stream, overload& other);
	friend ostream& operator<<(ostream& stream, overload & o1);
	
public:
	overload();
	overload(const char* name, string type, int temperature, unsigned int speed);
	void set(char* n, const string t, const int tem, const unsigned int sp);
	void get(char* a, string& b, int& c, unsigned int& d)const;
	void show()const;
	void operator == (const overload &other);
	overload operator + (const overload& other);
	overload operator = (const overload& other);
	int operator ()();
};

void shapka();
void linebuild();
int isvalid(int a, int b);