#pragma once

#include <iostream>
#include "windows.h"
#include <fstream>

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

class DataFile{
	
	int num;
public:


	DataFile() :num(0) {}
	DataFile(int number):num(number) {}
	int getnum() { return num; }
	void setnum(int n) { num = n; }
	void dataCreate(table*& data);
	void dataStatus(table* data);
	void writeToFile(string filename, table data);
	void readFromFile2(string filename, table& data);
	void writeData(string filename, table* data);
	void readData(string filename, table*& data);
};

int sizeofFile(string filename);

class MyException {
	string errMsg;
public:
	MyException(string str) :errMsg(str) {};
	string what() { return errMsg; }
};
