#include "NumBook.h"


int main() {
	SetConsoleCP(1251); //�����������
	SetConsoleOutputCP(1251); //�����������

	string str;
	char l;
	multimap<name, number> myMap; // ������� ��� �� ����� �������
	myMap.emplace("������", 380506012477);
	myMap.emplace("������", 380998765345);
	myMap.emplace("�������", 380506012477);
	myMap.emplace("���������", 380998765345);
	myMap.emplace("��������", 380936457645);
	
	
	
	printMap(myMap);
	cout << endl << endl;
	cout << "������� ������� ��� ������:" << endl;
	cin >> str;
	searchname(myMap, str);// ���� �� �����

	cout << "������� ����� ��� ������:" << endl;
	cin >> l;
	search_l(myMap, l);// ���� �� �����

	cout << "������� ����� ��� ��������:" << endl;
	cin >> l;
	delete_l(myMap, l); // ������� �� �����
	cout << endl << endl;
	printMap(myMap); // �������� ����


	return 0;
}