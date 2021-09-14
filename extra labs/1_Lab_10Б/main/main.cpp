#include "swap.h"

int main() {
	int a[S]{};
	for (int i = 0; i < S; i++) {
		cin >> *(a + i);
	}

	for (int i = 0; i < S; i++) {
		cout << *(a + i)<<"\t";
	}
	cout << endl << endl;

	Swap sw;
	sw.swap_pointer(a);
	for (int i = 0; i < S; i++) {
		cout << *(a + i) << "\t";
	}
	cout << endl;
	
	Swap s;
	s.swap_ref(a);
	for (int i = 0; i < S; i++) {
		cout << *(a + i) << "\t";
	}
	cout << endl;


	return 0;
}