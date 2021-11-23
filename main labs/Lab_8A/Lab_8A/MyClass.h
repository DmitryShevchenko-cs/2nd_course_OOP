#pragma once
#include <iostream>
#include "windows.h"

using namespace std;

template <class T>
class MyClass {

	T num;

public:
	MyClass();
	MyClass(T NUM);

	void show();
	T& operator +(MyClass<T>& ob);
};