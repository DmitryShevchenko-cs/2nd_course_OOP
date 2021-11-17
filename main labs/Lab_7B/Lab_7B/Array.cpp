#include "Array.h"

void RandomNum() {
	int num,num1;
	
	
	fstream fstr("arr.txt", ios::binary | ios::in | ios::out);
	if (!fstr.is_open())
		cout << "error" << endl;
	else {
		num = rand() %14 + 1;
		fstr.write((char*)&num, sizeof(int));//+4

		//
		fstr.seekg(-4, ios::cur);//-4
		fstr.read((char*)&num1, sizeof(int));//+4
		cout << num1 << '\t';

		//

	}
	fstr.close();
}

void CheakNum(int number) {

	int num = 0;
	int n1 = 77;
	int n2 = 88;
	fstream fstr("arr.txt", ios::binary | ios::in | ios::out);
	if (!fstr.is_open())
		cout << "gg" << endl;
	else {
		fstr.seekg(4 * sizeof(int));
		fstr.read((char*)&num, sizeof(int));
		cout << num << endl;


		if (num % 2 == 0)
			for (int i = 0; i < 4; i++)
				fstr.write((char*)&n1, sizeof(int));//+4
		else
			for (int i = 0; i < 4; i++)
				fstr.write((char*)&n2, sizeof(int));//+4
	}
	fstr.seekg(0, ios::beg);
	fstr.close();

}

void ReadNum() {

	int num;
	fstream fstr("arr.txt", ios::binary| ios::in);
	if (!fstr.is_open())
		cout << "gg" << endl;
	else {
		
		fstr.read((char*)&num, sizeof(int));
		fstr.seekg(sizeof(int), ios::cur);
		cout << num << '\t';
	}
	fstr.close();
	

}

