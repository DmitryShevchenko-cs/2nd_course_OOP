#pragma once
#include <iostream>

using namespace std;

template <class T> //������������� ��� ����������(�� ����� � ����� ���� ����� ���������� int, double, char) 
class MyClass {
	T num;
public:
	MyClass();// ������ ��-���������
	MyClass(T NUM); // ������ � ���������

	void show(); // �����
	T& operator +(MyClass<T>& ob); // ���������� ��������� +
};