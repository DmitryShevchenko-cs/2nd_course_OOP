#pragma once

#include <iostream>
#include "windows.h"
#include <fstream>
#define N 3

using namespace std;

class table {
	string name;
	char type;
	int temperature;
	unsigned int speed;
public:
	table() :name(""), type('_'), temperature(0), speed(0) {};
	void set(const string n, const char t, const int tem, const unsigned int sp);
	void get(string& a, char& b, int& c, unsigned int& d)const;
	void show()const;

};

class DataFile
{
public:

	void DataStatus();
	void writeToFile(string filename, table data);
	void readFromFile2(string filename, table& data);
	void writeData(string filename, table* data);
	void readData(string filename, table* data);
};

int sizeofFile(string filename);