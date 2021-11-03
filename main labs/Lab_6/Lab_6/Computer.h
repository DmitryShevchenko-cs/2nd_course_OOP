#pragma once
#include <iostream>
#include "windows.h"
#include <string>

using namespace std;

class animals{
public:
	string name;
	int weight;
	int age;
	string type;
	
	animals() : name("___"), weight(0), age(0), type("___") {};
};

void change(animals& o1, const string& n, const int& w, const int& a, const string& t);
void show(animals& o1);
void sort(animals* o1);
