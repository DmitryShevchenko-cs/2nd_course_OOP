#pragma once
#include <iostream>
#include "windows.h"

using namespace std;

class Figure {
	int a, b;
public:
	virtual void show();
	int get_a(int A = 1);
	int get_b(int B = 1);
};

class Triangle : public Figure{
	int S;
public:
	void show();

};

class Rectangle : public Figure {
	int S;
public:
	void show();

};

class Circle : public Figure {
	int S;
public:
	void show();

};