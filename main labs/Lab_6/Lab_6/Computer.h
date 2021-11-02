#pragma once
#include <iostream>
#include "windows.h"

using namespace std;

class comp{
public:
	string type;
	float chast;
	int RAM;
	int HDD;

	friend ostream& operator <<(ostream& stream, comp& ob);
	comp() : type("---"), chast(0.0), RAM(0), HDD(0) {};
public:
	

};

void sort();
void change(comp& o1, string& t, float& c, int& R, int& H);