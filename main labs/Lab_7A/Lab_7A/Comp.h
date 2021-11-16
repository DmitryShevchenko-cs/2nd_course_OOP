#pragma once
#include <iostream>
#include "windows.h"
#include <fstream>
#define size 10
using namespace std;

class comp {
public:
	float num1, num2;

	comp() : num1(0), num2(0) {}
	comp(float NUM1, float NUM2) : num1(NUM1), num2(NUM2) {}
	void show() { cout << num1 << ' ' << num2 << endl; }
};
void write(comp& ob, string path);
void read(float* arr, string path);