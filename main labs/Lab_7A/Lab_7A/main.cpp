#include "Comp.h"

int main() {

	setlocale(LC_ALL, "RU");

	comp ob[size/2]; //������� ����� ������ comp, ����� �� ��� ������ ��� � ����������� ����� ��� ������� �����
	float arr[size]; // ������� ������ ������� �����
	string path1 = "numbers.txt"; // ���� � ������� ������
	string path2 = "complex.txt";// ���� � ����������� ������
	try {
		read(arr, path1);// ������ � ������ arr
		int j = 0;
		for (int i = 0; i < size / 2; i++) { //����������� �� ������� arr � ������ ������ comp

			ob[i] = comp(arr[j++], arr[j]); 
			j++;
			ob[i].show(); // ������� �� ����� ����������� �����

			write(ob[i], path2);// �������� � ���� ����������� ����� 
		}
	}
	catch (const char* str) {
		cout << endl << str; // ���� ����� ������ �� ����� �� ����� (�� �� ������� � ��������)
	}
}

