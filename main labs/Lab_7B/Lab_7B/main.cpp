#include "Array.h"


int main() {
	
	setlocale(LC_ALL, "RU");
	
	srand(time(NULL));
	try {
		WriteNum(); //���������� ��������� �����
		ReadNum(); // ������ �����
		CheakNum(); // �������� ����� 
		ReadNum(); // ������ �����
	}

	catch (const char* str) {
	cout << endl << endl << str << endl << endl;
	}

	return 0;
}