#pragma once
#include <iostream>

using namespace std;

template <class T> //универсальный тип переменной(на месте т может ыбть любая переменная int, double, char) 
class MyClass {
	T num;
public:
	MyClass();// констр по-умолчанию
	MyClass(T NUM); // констр с праметром

	void show(); // вывод
	T& operator +(MyClass<T>& ob); // перегрузка оператора +
};