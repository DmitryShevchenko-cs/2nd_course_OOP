#include "Array.h"

//int main1() {
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand(time(NULL));
//
//	for (int i = 0; i < 10; i++)
//		RandomNum();
//	cout << endl;
//	CheakNum(4);
//	
//	for (int i = 0; i < 10; i++)
//		ReadNum();
//
//	
//
//	return 0;
//}

int main() {
	/*int num = 0;
	srand(time(NULL));
	int n1 = 88, n2 = 77;
	fstream fil;
	fil.open("arr.txt", ios::binary | ios::in | ios::out);
	
	if (!fil.is_open()) {
		cout << "error" << endl;
	}
	else {
	/////////////////////////////////////
		for (int i = 0; i < 10; i++) {
			num = rand() % 20 + 1;
			fil.write((char*)&num, sizeof(int));
		}
	/////////////////////////////////////
		num = 0;
		fil.seekg(0);
		for (int i = 0; i < 10; i++) {
			fil.read((char*)&num, sizeof(int));
			cout << num << '\t';
		}
///////////////////////////////////////////
		num = 0;
		fil.seekg(4 * sizeof(int));
		fil.read((char*)&num, sizeof(int));
		cout << endl << num << endl;

		fil.seekp(0);
		if(num % 2 == 0)
			for (int i = 0; i < 4; i++) {
				fil.write((char*)&n1, sizeof(int));
			}
		else
			for (int i = 0; i < 4; i++) {
				fil.write((char*)&n2, sizeof(int));
			}
		
 /////////////////////////////////////////////////
		num = 0;
		fil.seekg(0);
		for (int i = 0; i < 10; i++) {
			fil.read((char*)&num, sizeof(int));
			cout << num << '\t';
		}
//////////////////////////////////////////////
	}

	fil.close();
	*/


	srand(time(NULL));
	WriteNum();
	ReadNum();
	CheakNum();
	ReadNum();




	return 0;
}