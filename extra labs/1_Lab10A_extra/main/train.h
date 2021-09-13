#pragma once

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <conio.h>
#define S 4

//using namespace std;


class train {
	std::string name;
	int number;
	double time;

public:

	void set(const std::string n, const int num, const double t);
	void sort_num(train* TR);
	void search(train* TR, int const UserNum)const;
	void sort_destination(train* TR);
	void show()const;
};