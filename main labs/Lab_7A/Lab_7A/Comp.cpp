#include "Comp.h"

void write(comp ob, string path) {
 	fstream f(path, ios::in | ios::app); //in - ������; app - ��������
	if (!f.is_open())// ���� ���� �� ����������� �� ������ ������ � catch � main()
		throw "������ �������� ����� �� ������";
	else {
		f << ob.num1;//������ ������� �����
		f << " + " << ob.num2 << "i";// ������ ������� ������� �����
		f << endl; // ������� �� ��������� ������
		f.close();// ��������� ����
	}
}

void read(float* arr, string path) {

	ifstream ofstr(path); // ifstream-������
	if (!ofstr.is_open())// ���� ���� �� ����������� �� ������ ������ catch � main()
		throw "������ �������� ����� �� ������";

	else {
		for (int i = 0; i < size; i++) { //����, � ��� ��������� ����������� � ������,������� �� �������� ��� ��������
			ofstr >> arr[i];			 
		}
	}
	ofstr.close();// ��������� ����

}