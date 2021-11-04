#include "Animals.h"

void sort(animals* o1) {

	int i, j;
    animals temp;
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
            if (o1[i].name > o1[j].name) {
                temp = o1[i];
                o1[i] = o1[j];
                o1[j] = temp;
            }
 }

void change(animals& o1, const string& name, const float& weight, const int& age, const int& type){

	o1.name = name;
	o1.weight = weight;
	o1.age = age;
	o1.type = type;
}

void show(animals* o1) {
	cout << "                            ��������: \n";
	cout << "----------------------------------------------------------------\n";
	cout << "   �������� ����        ���        �������        ��� �������  \n";
	cout << "----------------------------------------------------------------\n";

	for (int i = 0; i < 5; i++) {

		cout << setw(10) << o1[i].name;
		cout << setw(17) << o1[i].weight;
		cout << setw(15) << o1[i].age;

		switch (o1[i].type) {
		case 0:
			cout << setw(19) << "����������";
			break;
		case 1:
			cout << setw(19) << "����������";
			break;
		case 2:
			cout << setw(19) << "��������";
			break;
		default:
			cout << setw(19) << "�����������";
			break;
		}
		cout << endl;

	}

	cout << endl;
}