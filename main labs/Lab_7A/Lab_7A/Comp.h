#pragma once
#include <iostream>
#include <fstream>
#define size 10
using namespace std;

class comp {
public:
	float num1, num2;// два числа из комплексного числа

	comp() : num1(0), num2(0) {} // конструктор по-умолчанию
	comp(float NUM1, float NUM2) : num1(NUM1), num2(NUM2) {} // конструктор с параметром
	void show() { cout << num1 << endl << num2 << endl; } // вывод комплексного числа
};
void write(comp ob, string path); //запись
void read(float* arr, string path);// чтение