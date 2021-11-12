#include "Array.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int arr[size];
	srand(time(NULL));


	for (int i = 0; i < size; i++) {

		arr[i] = rand();
		cout << arr[i] << '\t';
	}

	ofstream file_of("arr");

	if (!file_of.is_open())
		cout << "error opening file to write" << endl;
	else {

		file_of.write((char*)&arr, sizeof(arr));

	}
	file_of.close();

	return 0;
}