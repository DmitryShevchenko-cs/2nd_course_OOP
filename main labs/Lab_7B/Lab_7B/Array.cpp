#include "Array.h"

void WriteNum() {

	int num = 0;
	fstream fil;
	fil.open("arr.txt", ios::binary | ios::out); // �������� ����� �� ������
	if (!fil.is_open()) throw "������ �������� ����� �� ������"; // ������ ������ � ������ �� ��������

	for (int i = 0; i < size; i++) { // ������� ��������� ����� � ���������� � ����
		num = rand() % 20 + 1;
		fil.write((char*)&num, sizeof(int));
	}
	fil.close();

}

void ReadNum() {

	fstream fil;
	fil.open("arr.txt", ios::binary | ios::in); // �������� ����� �� ������
	if (!fil.is_open()) throw "������ �������� ����� �� ������";// ������ ������ � ������ �� ��������

	int num = 0;
	for (int i = 0; i < size; i++) { // ������ ���� ����� � �����, ����� ���� ��������� � ����� ������������ 
		fil.read((char*)&num, sizeof(int)); // �� sizeof(int) ���� � ����� ������� ����� � ������ � ��� �� ����� 
		cout << num << '\t';
	}
	fil.close();
}

void CheakNum() {

	fstream fil;
	fil.open("arr.txt", ios::binary | ios::in | ios::out); // �������� ����� �� ������ � ������
	if (!fil.is_open()) throw "������ �������� ����� �� �������� �������� ����� � ������";// ������ ������ � ������ �� ��������

	int n1 = 88, n2 = 77; 
	int num = 0;
	fil.seekg(4 * sizeof(int)); // ���������� ��������� � ����� �� (4 * sizeof(int)) �  
	fil.read((char*)&num, sizeof(int)); // ����� ��������� 5 ����� � ����� 
	cout << endl << endl;

	
	if (num % 2 == 0) { // ���� ����� ������ �� ��� �� 5 ����� ������ �� 88
		fil.seekp(0);// ���������� ��������� � ����� �� ������ ����� 
		for (int i = 0; i < 5; i++) {
			fil.write((char*)&n1, sizeof(int)); // �� 5 ����� ������������ ������ ��� ����� �� 88
		}
	}
	else {// ���� ����� �� ������ �� ��� ����� 5 ����� ������ �� 77
		fil.seekp(5  * sizeof(int));// ���������� ��������� � ����� �� 6 ������� � ����� 
		for (int i = 0; i < 5; i++) { 
			fil.write((char*)&n2, sizeof(int));// ����� 5 ����� ������ ��� ����� �� 88
		}
	}

	fil.close();
}
