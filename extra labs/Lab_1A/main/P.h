#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

class point {
	int x;
	int y;
public:
	point() :x(1), y(1) {};
	point(int a, int b) : x(a), y(b) {};
	point(const point& ob) : x(ob.x), y(ob.y) {};
	void set(int a, int b);
	void count(int& sum, int& prod)const;
	void show(int sum, int prod)const;
};