#pragma once

#include <iostream>
#define S 3
using namespace std;

class Swap {
	
public:

	void swap_ref(int*& a);
	void swap_pointer(int* a);

};