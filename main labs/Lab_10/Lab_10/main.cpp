#include "functions.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<int> vect_i{ -1, -2, -3, -4, -9, -8, 9, 10, 1 };
	vector<float> vect_f{ 9.1, 1.2, 2.3, 8.5, 3.6, 7.9, -2.2, 4.3, 6.1, 5.2, -1.5 };
	vector<char> vect_ch{'b', 'c', 'z','a', 'A', 'Z'};
	cout << M(vect_i) << endl;
	cout << M(vect_f) << endl;
	cout << M(vect_ch) << endl;

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



	cout << Sum(vect_i) << endl;
	cout << Sum(vect_f) << endl;
	cout << Sum(vect_ch) << endl;
}