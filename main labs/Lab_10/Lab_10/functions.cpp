#include "functions.h"


void Test_min() {

	vector<int> vec_i{ -1, -6 };
	assert(Min(vec_i) == -6);

	vector<float> vec_f{ -2.5, 10.2 };
	assert(Min(vec_f) == -2.5);

	vector<char> vec_ch{ 'A', 'a' };
	assert(Min(vec_ch) == 'A');

}

void Test_sort() {

	vector<int> vec_s_i{ 1,2,3,4,5 };
	vector<int> vec_i{ 5,2,3,1,4 };
	Sort(vec_i);
	for (int i = 0; i < vec_s_i.size(); ++i)
		assert(vec_s_i[i] == vec_i[i]);

	vector<float> vec_s_f{ 1.1, 2.2, 3.3, 4.4, 5.5};
	vector<float> vec_f{5.5, 2.2, 3.3, 1.1, 4.4 };
	Sort(vec_f);
	for (int i = 0; i < vec_s_f.size(); ++i)
		assert(vec_s_f[i] == vec_f[i]);

	vector<char> vec_s_ch{ 'A', 'Z', 'a', 'b', 'c', 'z' };
	vector<char> vec_ch{ 'b', 'c', 'z', 'a', 'A', 'Z' };
	Sort(vec_ch);
	for (int i = 0; i < vec_s_ch.size(); ++i)
		assert(vec_s_ch[i] == vec_ch[i]);

}

void Test_sum() {

	vector<int> vect_i{ -1, -2, -3, -4, -9, -8, 9, 10, 1 };
	assert(Sum(vect_i) == 20);

	vector<float> vect_f{ 1.2, 2.3, -5.4, 3.4, -10.2, 1.1 };
	assert(Sum(vect_f) == 8);

	vector<char> vect_ch{ '<', '>'};
	assert(Sum(vect_ch) == 'z');


}
