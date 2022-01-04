#include "functions.h"

int main() {

	Test_min();//тестируем
	Test_sort();//тестируем
	Test_sum();//тестируем

	//если бы не прошли тест то код ниже не работал бы-

	vector<int> vect_i{ -1, 10, 1 };
	vector<float> vect_f{ 9.1, -1.2, 1.1 };
	vector<char> vect_ch{'<','>'};

	cout << Min(vect_i) << endl;
	cout << Min(vect_f) << endl;
	cout << Min(vect_ch) << endl;
	cout << "------------------------" << endl;

	Sort(vect_i);
	for (auto i : vect_i)
		cout << i << '\t';
	cout << endl;

	Sort(vect_f);
	for (auto i : vect_f)
		cout << i << '\t';
	cout << endl;
	
	Sort(vect_ch);
	for (auto i : vect_ch)
		cout << i << '\t';
	cout << endl;
	cout << "------------------------" << endl;
	cout << Sum(vect_i) << endl;
	cout << Sum(vect_f) << endl;
	cout << Sum(vect_ch) << endl;
	cout << "------------------------" << endl;
}