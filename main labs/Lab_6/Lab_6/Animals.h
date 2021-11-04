#pragma once
#include <iostream>
#include "windows.h"
#include <string>
#include <iomanip>

using namespace std;

class animals{
public:
	string name;
	float weight;
	int age;
	int type;
	
	animals() : name("___"), weight(0), age(0), type(3) {};
};

void change(animals& o1, const string& n, const float& w, const int& a, const int& t);
void show(animals* o1);
void sort(animals* o1);
