#pragma once

#include <iostream>
#include "windows.h"

using namespace std;

class Timer {
	int seconds;
public:
	Timer(const int &sec);
	Timer(const int& min, const int& sec);
	Timer(const Timer& ob);
	void show()const;

};