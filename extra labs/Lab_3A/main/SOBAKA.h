#pragma once

#include <iostream>
#include "windows.h"

using namespace std;

class SOBAKA {
	int weigth;
	int age;
public:
	friend ostream& operator << (ostream& S, SOBAKA& ob) {};

class SPANIEL {
	string color;
public:
	friend ostream& operator << (ostream& S, SPANIEL& ob) {};

};