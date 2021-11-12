#include "Array.h"

void write(int* arr) {

	ofstream file_of("arr.txt", ios::binary);
	
	if (!file_of.is_open())
		cout << "error opening file for writing" << endl;
	else 
		file_of.write((char*)arr, size * sizeof(int));
	
	file_of.close();

}

void read(int* arr) {
	fstream file_if;

	file_if.open("arr.txt", ios::in | ios::out | ios::binary);

	if (!file_if.is_open())
		cout << "error opening file for reading" << endl;
	else {
		for (int i = 0; i < size; i++)
			file_if.read((char*)&arr[i], sizeof(int));

		cheak(arr);

		file_if.write((char*)arr, size * sizeof(int));

	}

	file_if.close();
}

void cheak(int* arr) {

	if (arr[4] % 2 == 0)
		for (int i = 0; i < 4; i++)
			arr[i] = 77;
	else
		for (int i = 0; i < 4; i++)
			arr[i] = 88;
}