#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <cstring>
#include <iomanip> 
#include <conio.h>

using namespace std;

class table {

	char* name;
	char type;
	int temperature;
	unsigned int speed;

	friend void shapka();
	friend void linebuild();
	friend istream& operator>>(istream& stream, table& other);
	friend ostream& operator<<(ostream& stream, table& o1);
	
public:
	table() { strcpy(name, " "), type = ' ', temperature = 0; speed = 0; }
	table(const char* name, const char type, const int temperature, const unsigned int speed);
	void set(char* n, const char t, const int tem, const unsigned int sp);
	void get(char* a, char& b, int& c, unsigned int& d)const;
	void show()const;
	inline char ret_name() { return *name; }
};

class DB {
	char title[30];
	table* rows[12];
	int col;
	int sorted;

public:
	DB(const char* q) { strcpy(title, q), col = 0; sorted = 0; }
	~DB() { if (col) for (int i = 0; i < col; i++) delete rows[i]; }
	void add_rec(const char* a, char b, int c, unsigned int d);
	void del_rec();
	void sort_DB();
	friend ostream& operator<<(ostream& stream, DB& temp);

};

void shapka();
void linebuild();