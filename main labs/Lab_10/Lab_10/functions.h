#pragma once

#include <iostream>
#include <assert.h>// для тестирования
#include <vector>// для вектора из стл
#include <string>

using namespace std;

template <typename T>
T Min(vector<T> vec) {//шаблонная функция для минимума
	T temp = vec[0];
	
	for (auto i = 0; i < vec.size(); ++i) {
		if (vec[i] < temp)							// нужно поменять знак сравнения для тестировки '>'
			temp = vec[i];
	}
	return temp;
}

template <typename T>
void Sort(vector<T>& vec) {//шаблонная функция для сортировки


	for (int i = 0; i < vec.size(); ++i)
	{
		for (int j = vec.size() - 1; j > i; --j)
		{
			if (vec[i] > vec[j])							// нужно поменять знак сравнения для тестировки '<'
			{
				swap(vec[i], vec[j]);
			}
		}
	}

}

template <class T >
T Sum(vector<T> vec) {//шаблонная функция для суммы

	T temp = 0;

	for (auto i = 0; i < vec.size(); ++i) {
		if (vec[i] > 0)										// нужно закоментировать if для тестировки
			temp += vec[i];
	}
	return temp;

}

void Test_min();//тестирока
void Test_sort();//тестирока
void Test_sum();//тестирока
