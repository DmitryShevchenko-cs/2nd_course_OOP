#pragma once

#include <iostream>
#include "windows.h"
#include <fstream>

using namespace std;

class OUTPUT {
	string str;
	friend ostream& operator << (ostream& os, const OUTPUT& ob);
public:

	OUTPUT(string STR) : str(STR) {};
	void show() { cout << str << endl; };


};
