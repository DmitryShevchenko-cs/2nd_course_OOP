#include "Array.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int arr[size];
	srand(time(NULL));


	for (int i = 0; i < size; i++) {
		arr[i] = rand() & 10 + 1; 
		cout << arr[i] << '\t';
	}
	write(arr);
	
	for (int i = 0; i < size; i++) // clearing arr
		arr[i] = 0;
	
	read(arr); //reading and rewrite
	cout << endl << endl;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << '\t';
	}

	return 0;
}