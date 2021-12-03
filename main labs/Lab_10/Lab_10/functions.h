#pragma once

#include <iostream>
#include "windows.h"
#include <assert.h>
#include <vector>
#include <string>

using namespace std;

template <typename T>
T Min(vector<T> vec) {
	T temp = vec[0];
	
	for (auto i = 0; i < vec.size(); ++i) {
		if (vec[i] < temp)							// '>'
			temp = vec[i];
	}
	return temp;
}

template <typename T>
void Sort(vector<T>& vec) {


	for (int i = 0; i < vec.size(); ++i)
	{
		for (int j = vec.size() - 1; j > i; --j)
		{
			if (vec[i] > vec[j])							// '<'
			{
				swap(vec[i], vec[j]);
			}
		}
	}

}

template <class T >
T Sum(vector<T> vec) {

	T temp = 0;

	for (auto i = 0; i < vec.size(); ++i) {
		if (vec[i] > 0)										// comment if
			temp += vec[i];
	}
	return temp;

}

void Test_min();
void Test_sort();
void Test_sum();
