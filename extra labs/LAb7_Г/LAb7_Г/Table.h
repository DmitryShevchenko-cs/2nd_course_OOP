#pragma once
#include <iostream>
#include <iomanip>
#include "windows.h"
#include <fstream>
#define N 3

using namespace std;

class table {

	string name;
	char type;
	int temperature;
	unsigned int speed;

	friend void shapka();
	friend void linebuild();
	friend istream& operator>>(istream& stream, table& other);
	friend ostream& operator<<(ostream& stream, table& o1);
public:
	table();
	table(const string name, char type, int temperature, unsigned int speed);
	
	void readFromFile2(string filename, table& data);
};
table readFromFile(string filename);
void writeToFile(string filename, table obj);

void shapka();
void linebuild();