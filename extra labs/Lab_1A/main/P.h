#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

class point {
	int x;
	int y;
public:
	point() :x(0), y(0) {};// по умолчанию
	point(int a, int b) : x(a), y(b) {};
	void set(int a, int b);
	void show();
};